
#include <iostream>
#include <algorithm>
#include <math.h>
const int z=100+4;
int a[z];

using namespace std;


int main()
{
   
   int t ; 
   cin>>t;
   while(t--){
        int n,d;
        cin>>n>>d;
        for(int  i= 1; i<=n;i++){
            std::cin >> a[i];
        }
        
        sort(a+1,a+1+n);
        
        if(a[n]<=d)
        std::cout << "Yes\n" << std::endl;
        
        else{
            if(a[1]+a[2]<=d)
            cout<<"Yes\n";
            
            else
            cout<<"No\n";
        }
   }
 
  
 
    return 0;
}
