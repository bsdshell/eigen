#include <iostream>
#include <Eigen/Dense>
using Eigen::MatrixXd;
using Eigen::Matrix3f;
int main()
{
  MatrixXd m(2,2);
  m(0,0) = 100;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);

  Matrix3f m1;

m1<< 1, 2, 3,
    0, 0, 1,
    1, 1, 0;
    m1(1, 1) = -2;

  std::cout << m << std::endl<<std::endl;
  std::cout << m1 << std::endl<<std::endl;
  std::cout << m1*m1 << std::endl<<std::endl;
  std::cout << m1*m1*m1 << std::endl<<std::endl;
}
