// #include<iostream>
// using namespace std;
// int main(){
//    string s[6] = {"0123", "0023", "456", "00182", "940", "2901"};
//    int Max = stoi(s[0]);

//     for(int i=1;i<6;i++){
//       if(stoi(s[i])>Max)
//       {
//         Max = stoi(s[i]);
//       }
//     }
//     cout<<Max<<endl;
// }

#include <iostream>
#include <string>
#include<vector>
using namespace std;
string biggerNumber(string s1, string s2)
{
  int n1 = s1.length();
  int n2 = s2.length();
  int i = 0, j = 0;

  while (s1[i] == '0')
    i++;
  int s1_Real_length = n1 - i;
  while (s2[j] == '0')
    j++;
  int s2_Real_length = n2 - j;

  if (s1_Real_length != s2_Real_length)
  {
    if (s1_Real_length > s2_Real_length)
      return s1;
    else if (s1_Real_length < s2_Real_length)
      return s2;
    else
    {
      while (i < s1.length() && s1[i] == s2[j])
      {
        i++;
        j++;
      }
      if (s1 < s2)
        return s2;
      else
        return s1;
    }
  }
}
  int main()
  {
    vector<string> s = {"0123", "0023", "456", "00182", "940", "2901"};
    string Max = s[0];
    int m = s.size();
    for (int i = 1; i < m; i++)
    {
      Max = biggerNumber(Max, s[i]);
    }
    cout << Max << endl;
  }