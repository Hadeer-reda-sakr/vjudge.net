

#include <iostream>

using namespace std;

int main()
{
    long long A , b , c ;
    
    cin>> A >>b>>c;
    
    long long x = (A+c-1) / c;
    
      long long y= (b+c-1) / c;
    
    cout << x * y ;
    
    return 0;
}
