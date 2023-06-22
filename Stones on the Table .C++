#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
   int n,coun =0;
   cin>>n;
   string color;
   cin>>color;
  
  for(int i = 0 ;i<n-1;i++ )  {
      if(color[i]==color[i+1]) coun ++;
  } 
  
  cout<<coun;
    return 0;
}
