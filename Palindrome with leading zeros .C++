

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;


int main()
{
   
   string s ;
   cin>>s;
   
   while(s.back()=='0'){
       s.pop_back(); 
   }
   
   string a =s;
   reverse(s.begin(),s.end());
   
   if(s==a)
   cout<<"Yes";
   else
   cout<<"No";
 
    return 0;
}
