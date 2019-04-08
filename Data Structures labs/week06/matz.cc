
#include <iostream>
#include <math.h>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::ofstream;

void readArr(int, int, double **);

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  int c = atoi(argv[2]);
  int nz = 0;
  int zTotal = 0;

  double **A = new double*[n];	// each el. of this points to a row of A
  for (int i = 0; i < n; i++)
    A[i] = new double[c];
  
  readArr(n, c, A);

  cout << n << endl;

  for(int i = 0; i < n; i++)
    {
      nz = 0;
      for(int j = 0; j < c; j++)
	{
	  if(A[i][j] != 0)
	    {
	      nz++;
            }
	}
      zTotal += nz;
      cout << nz;
      for(int k = 0; k < c; k++)
	{
	  if(A[i][k]!=0)
	    {
	      cout << " " << k + 1 << " " << A[i][k];
	    }
	}
      cout << endl;
     
    }
  cout << zTotal << endl;

  
}
void readArr(int n, int c, double **arr)
{
  // code for reading in r rows of c elements each goes here
  for(int i = 0; i < n; i++)
    for(int j = 0; j < c; j++)
      cin >> arr[i][j];
}
