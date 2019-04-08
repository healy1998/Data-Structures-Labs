
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <sstream>
#include <list>
using std::list;

using namespace std;
class nz
{
public:
  int position;
  double value;
  nz(int pos, double val)
  {
	pos = position;
	val = value;
  }
};
  
int main(int argc, char *argv[])
{
  int count = 0;
  double epsilon;
  list<nz> row;
  list<list<nz>> matrix;
  if(argc > 1 && string(argv[1]) == "-e")
    epsilon = fabs(strtod(argv[2], 0));
  string line;
  while(getline(cin, line))
  {
    std::istringstream lstream(line);
    double val;

    while(lstream>>val)
    {
      count++;
      if(val != 0)
      {
	  if(val >= 0+epsilon || val <= 0-epsilon)
	  {
	    nz nonzero(count, val);
	    row.push_back(nonzero);
	  }
      }
    }
    count = 0;
    matrix.push_back(row);
    row.clear();
  }
  for(auto i = matrix.begin(); i!=matrix.end(); i++)
  {
    for(auto j = (*i).begin(); j!= (*i).end(); j++)
    {
      cout << (*j).position<< " " << (*j).value<< " ";
    }
    cout << endl;
  }
}
