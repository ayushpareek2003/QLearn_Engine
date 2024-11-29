#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

namespace ql{

class QL_RL{
    private:
        int Grid_Size;
        int epochs;
        double Alpha;
        double gamma;
        double epsilon;

        std::vector<std::vector<int>> Data_Grid;
        std::vector<std::vector<std::vector<double>>> qValue;

        int actions[4][2]={{-1,0},{1,0},{0,1},{0,-1}};

    public:

    QL_RL(int Grid_size,int epochs,double Alpha,double gamma,double epsilon,
    std::vector<std::vector<int>> Data_Grid,std::vector<std::vector<std::vector<double>>> qValue);
    
    int chooseAction(int a,int b);

    void update_table(int a,int b,int action,int reward,int newX,int newY);

    bool checker(int x,int y);

    void trainer();

    void printOptimumPolicy();

};

};

