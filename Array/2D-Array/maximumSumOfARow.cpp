#include<iostream>
#include<climits>
using namespace std;
int main()
{
      int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
      int MaxRow = -1, max_sum=INT_MIN;
      for(int i=0;i<4;i++)
      {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>max_sum)
        {
            max_sum=sum;
            MaxRow=i;
        }
        }

        cout<<"Maximum sum of a row is: "<<max_sum<<endl;
        cout<<"Row with maximum sum is: "<<MaxRow<<endl;
      
    }