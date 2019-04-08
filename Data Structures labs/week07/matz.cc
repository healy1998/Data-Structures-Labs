
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
  int count = 0;
  double epsilon;
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
	      cout << count << " " << val << " " ;
	  }

      }
    }
    count = 0;
    cout << endl;
  }  
}
