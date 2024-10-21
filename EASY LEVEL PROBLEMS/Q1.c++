#include <iostream>
#include<math.h>
using namespace std;

void generatePascalTriangle(int n) {
    int x=1;
    for(int i=1;i<=5;i++)
    {
        int y=x;
        for(int j=4;j>=i;j--)
        {
            cout<<" ";
        }
        
         while(y!=0)
         {
            int rem=y%10;
            cout<<rem<<" ";
            y=y/10;
         }
         cout<<endl;
         x=x*11;
    }
}

int main() {
    int n = 5;
    generatePascalTriangle(n);
    return 0;
}