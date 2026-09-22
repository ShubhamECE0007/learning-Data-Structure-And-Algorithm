#include <iostream>
#include <string>
#include <vector>
using namespace std;
string substring(string s)
{
    int n = s.length();
    for (int i = 0; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout << s.substr(i, j) << " ";
        }
        cout<<endl;
    }
    
}

int main()
{
    string s="abcd";
    substring(s);
}
