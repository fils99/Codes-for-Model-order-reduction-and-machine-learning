#include <iostream>
using namespace std;

void mulmatvec(int m, int n, double **a, double *x, double *b){
  int i,j;

  for(i = 0; i < m; i++){
    b[i] = 0.;
    for(j = 0; j < n; j++)
      b[i] += a[i][j]*x[j];
  }
  return;
}

int main(){
  int i,j,m,n;

  cout << "Enter the number of rows in the matrix \n";
  cin >> m;
  cout << "Enter the number of columns in the matrix \n";
  cin >> n;

  // Allocate space for the vectors
  double *x = new double[n];
  double *b = new double[m];

  // Allocate space for the matrix
  double **a = new double* [m];
  for(i = 0; i < m; i++)
    a[i] = new double[n];

  if(!x || !b || !a){
    cerr << "Can't allocate space\n";
    return 1;
  }

  cout << "Enter the matrix\n";
  for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
      cin >> a[i][j];

  cout << "Enter the vector\n";
  for(j = 0; j < n; j++)
    cin >> x[j];

  mulmatvec(m,n,a,x,b);

  cout << "\nA*x = \n";
  for(i = 0; i < m; i++)
    cout << b[i] << "\n";

  delete [] a;
  delete [] b;
  delete [] x;

  return 0;
}
