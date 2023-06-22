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
  
  for(int i = 0 ;i<n;i++ )  {
      if(color[i]==color[i+1]) coun += 1;
  } 
  
  cout<<coun;
    return 0;
}
