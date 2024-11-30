#include "inc/Q_Agent.hpp"


int main(){
    std::cout<<"Enter Grid Size"<<std::endl;
    int inputGridSize;
    std::cin>>inputGridSize;

    std::srand(std::time(nullptr));

    std::vector<std::vector<int>> grid = {
        {0, -1, 0, 0, 0},
        {0, -1, 0, -1, 0},
        {0,  0, 0, -1, 0},
        {-1, -1, 0, -1, 0},
        {0,  0, 0,  0, 100}};

    std::cout<<grid[inputGridSize-1][inputGridSize-1];    

    std::vector<std::vector<std::vector<double>>> qValues(inputGridSize,std::vector<std::vector<double>>(inputGridSize, std::vector<double>(4, 0.0)));

    ql::QL_RL model=ql::QL_RL(inputGridSize,100,0.1,0.9,0.1,grid,qValues);

    model.trainer();

    std::cout<<"DOne";

    model.printOptimumPolicy();


    

    return 0;



}