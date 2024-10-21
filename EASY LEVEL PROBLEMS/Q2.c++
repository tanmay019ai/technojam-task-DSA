#include <iostream>
using namespace std;

int climbStairs(int n) 
{
    if(n==0 || n==1)
     {
        return 1;
     }
     else
     {
        return climbStairs(n-1)+climbStairs(n-2);
     }   
}

int main() {
    int n = 2;
    cout << climbStairs(n) << endl;
    return 0;
}