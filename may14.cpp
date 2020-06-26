#include <iostream>
#include <Eigen/Dense>
 
using namespace Eigen;
using namespace std;
 
int main()
{
  MatrixXd m1(3, 3);
  MatrixXd m2(3, 3);
  float a[9];
  int opt;
  float b[3];
  float c[9];

  cout << "input 9 numbers for 3x3 matrix" << endl;

  for(int i = 0; i < 9; i++) {
    cin >> a[i];
  }

  m1(0, 0) = a[0];
  m1(0, 1) = a[1];
  m1(0, 2) = a[2];
  m1(1, 0) = a[3];
  m1(1, 1) = a[4];
  m1(1, 2) = a[5];
  m1(2, 0) = a[6];
  m1(2, 1) = a[7];
  m1(2, 2) = a[8];

  cout << "matrix =" << endl << m1 << endl;

  while(1) {

    cout << "1. vector dot-product" << endl << "2. matrix addition" << endl<<"3. matrix subtration" << endl << "4. matrix multiplication"<<endl<< "choose options: " << endl;

    cin >> opt;

    if(opt == 1) {
      cout << "input 3 numbers for 3 entry-vector: " << endl;

      for(int i=0; i<3; i++) {
        cin >> b[i];
      }

      VectorXd v(3);
      v << b[0], b[1], b[2];

      cout << "vector = " << v<< endl;
      cout << "matrix * vector = " << endl << m1*v << endl;
    }

    else if(opt == 2) {
      cout << "input 9 numbers for 3x3 matrix" << endl;

      for(int i = 0; i < 9; i++) {
        cin >> c[i];
      }

      m2(0, 0) = c[0];
      m2(0, 1) = c[1];
      m2(0, 2) = c[2];
      m2(1, 0) = c[3];
      m2(1, 1) = c[4];
      m2(1, 2) = c[5];
      m2(2, 0) = c[6];
      m2(2, 1) = c[7];
      m2(2, 2) = c[8];

      cout << "matrix1 = " << m2 << endl;
      cout << "matrix + matrix1 = " << endl << m1+m2 << endl;
    }

    else if(opt == 3) {
      cout << "input 9 numbers for 3x3 matrix" << endl;

      for(int i = 0; i < 9; i++) {
        cin >> c[i];
      }

      m2(0, 0) = c[0];
      m2(0, 1) = c[1];
      m2(0, 2) = c[2];
      m2(1, 0) = c[3];
      m2(1, 1) = c[4];
      m2(1, 2) = c[5];
      m2(2, 0) = c[6];
      m2(2, 1) = c[7];
      m2(2, 2) = c[8];

      cout << "matrix1 = " << m2 << endl;
      cout << "matrix - matrix1 = " << endl << m1-m2 << endl;
    }

    else if(opt == 4) {
      cout << "input 9 numbers for 3x3 matrix" << endl;

      for(int i = 0; i < 9; i++) {
        cin >> c[i];
      }

      m2(0, 0) = c[0];
      m2(0, 1) = c[1];
      m2(0, 2) = c[2];
      m2(1, 0) = c[3];
      m2(1, 1) = c[4];
      m2(1, 2) = c[5];
      m2(2, 0) = c[6];
      m2(2, 1) = c[7];
      m2(2, 2) = c[8];

      cout << "matrix1 = " << m2 << endl;
      cout << "matrix * matrix1 = " << endl << m1*m2 << endl;
    }

    else {
      cout << "wrong operation. bye" << endl;
      exit(1);
    }
  }
}
