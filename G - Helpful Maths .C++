

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

const int  sz = 100 +4 ;
   int nums[sz];

int main()
{
   string s;
   cin>>s;
  
   int dex=0;
   
  for(int i = 0 ;i<s.size();i++ )  {
      if(s[i]>='0' && s[i]<='9') {
          
          nums[dex] = s[i]-'0';
          dex++;
          
      }
     
  } 
  
  sort(nums,nums+dex);
  
  for(int i = 0 ; i<dex;i++){
      if(i==dex-1)
      {
          std::cout << nums[i] << std::endl;
      }
      else{
          cout<<nums[i]<<'+';
      }
  }
  
  
    return 0;
}
