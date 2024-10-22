#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
   int x=0;
   int y=0;
   while(x<chars.size())
   {
    char current=chars[x];
    int count=0;
    while(x<chars.size() && chars[x]==current)
    {
        x++;
        count++;
    }
    chars[y]=current;
    y++;
    for(char digit:to_string(count))
    {
        chars[y]=digit;
    }
    y++;
   }    
   return y;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int newSize = compress(chars);
    cout << "New length: " << newSize << endl;
    for (int i = 0; i < newSize; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
    return 0;
}