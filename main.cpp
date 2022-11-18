// write your code here
//Kourtney Smith J00951715
//Ex 5.6 Pg 284
//Nov 16, 2022
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  int i;
  int r;
  int n;


  srand(time(0));
  r = rand() % 100;

  
cin >> n;
 
  for (i = 0 ; i <= (n-1) ; i++ ) 

    {cout << r << " ";} 

  return 0;
  }
