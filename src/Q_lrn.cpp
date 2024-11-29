#include "./inc/Q_lrn.hpp"



ql::QL_RL::QL_RL(int Grid_size,int epochs,double Alpha,double gamma,double epsilon,std::vector<std::vector<int>> Data_Grid,
                            std::vector<std::vector<std::vector<double>>> qValue):Grid_Size(Grid_Size),epochs(epochs),
                                                                                Alpha(Alpha),gamma(gamma),
                                                                                epsilon(epsilon),Data_Grid(Data_Grid),qValue(qValue){

                                                                                    

}


