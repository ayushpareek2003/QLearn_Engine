#include "./inc/Q_Agent.hpp"



ql::QL_RL::QL_RL(int Grid_size,int epochs,double Alpha,double gamma,double epsilon,std::vector<std::vector<int>> Data_Grid,
                            std::vector<std::vector<std::vector<double>>> qValue):Grid_Size(Grid_Size),epochs(epochs),
                                                                                Alpha(Alpha),gamma(gamma),
                                                                                epsilon(epsilon),Data_Grid(Data_Grid),qValue(qValue){

                                                                    
}



int ql::QL_RL::chooseAction(int a,int b){

    if((double)std::rand()/RAND_MAX < epsilon){
                return std::rand()%4;
    }
    else{
        int bestAction=0;
        double bestActionValue=qValue[a][b][0];

        for(int i=1;i<4;i++){
            if(bestActionValue<qValue[a][b][i]){
                bestActionValue=qValue[a][b][i];
                bestAction=i;
            }
        }

        return bestAction;

    }


}

void ql::QL_RL::update_table(int a,int b,int action,int reward,int newX,int newY){
    double maxNextQ=qValue[newX][newY][0];

    for(int i=1;i<4;i++){
        if(maxNextQ<qValue[a][b][i]){
            maxNextQ=qValue[a][b][i];
        }
    }

    qValue[a][b][action]+=Alpha*(reward+gamma*maxNextQ-qValue[a][b][action]);

}

bool ql::QL_RL::checker(int a,int b){
    if(0<=a && a<Grid_Size && 0<=b && b<Grid_Size){
        return true;
    }
    return false;
}

void ql::QL_RL::trainer(){

    for(int i=0;i<epochs;i++){

        int startX=0,startY=0;

        while(true){
            int action=ql::QL_RL::chooseAction(startX,startY);

            int newX= startX+actions[action][0];

            int newY= startY+actions[action][1];

            if(!checker(newX,newY)){
                newX=startX;
                newY=startY;
            }

            int Reward=ql::QL_RL::Data_Grid[newX][newY];

            update_table(startX,startY,action,Reward,newX,newY);


            startX=newX;
            startY=newY;

            if(Reward==Data_Grid[Grid_Size-1][Grid_Size-1]){
                break;
            }
        }
    }
}

void ql::QL_RL::printOptimumPolicy(){

    std::cout<<"                Optimal Policy:"<<std::endl;

    for(int i=0;i<Grid_Size;i++){
        for(int j=0;j<Grid_Size;j++){
            if(i==Grid_Size-1 && j==Grid_Size-1){
                std::cout<<"G";
            }
            else if(Data_Grid[i][j]<=0){
                std::cout<<"X";
            }
            else{
                int bestAction=0;
                double maxQ=qValue[i][j][0];

                for(int k=1;k<4;k++){
                    if(qValue[i][j][k]>maxQ){
                        maxQ=qValue[i][j][k];
                        bestAction=k;
                    }
                }

                char move=bestAction==0? 'U':bestAction==1 ?'D':bestAction==2?'R':'L';

                std::cout<<" "<<move<<" ";
                
            }

        }
        std::cout<<std::endl;
    }

}