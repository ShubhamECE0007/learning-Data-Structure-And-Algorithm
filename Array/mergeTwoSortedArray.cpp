// #include <iostream>
// using namespace std;
// int main()
// {
//     int x[]={1,4,6,8,12};
//     int y[]={2,17,18,53,72};
//     int n1=sizeof(x)/4;
//     int n2=sizeof(y)/4;
//     int z[n1+n2];

//     int i=0,j=0,k=0;
//     while(i<n1 && j<n2){
//         if(x[i]<y[j])
//         {
//             z[k]=x[i];
//             i++;
//             k++;

//         }
//         else{
//             z[k]=y[j];
//             j++;
//             k++;
//         }
//     }
//     while(j<n2)
//     {
//         z[k]=y[j];
//         j++;
//         k++;
//     }
//     while(i<n1)
//     {
//         z[k]=x[i];
//         i++;
//         k++;
//     }

//     for(int l=0;l<(n1+n2);l++)
//     {
//         cout<<z[l]<<" ";
//     }


// }

#include<iostream>
using namespace std;
int main()
{
      int x[]={1,4,6,8,12};
    int y[]={2,17,18,53,72};
    int n1=sizeof(x)/4;
    int n2=sizeof(y)/4;
    int z[n1+n2];


    int i=n1-1,j=n2-1,k=n1+n2-1;
    while(i>=0 && j>=0)
    {
        if(x[i]>y[j])
        {
            z[k]=x[i];
            i--;
            k--;
        }
        else{
            z[k]=y[j];
            j--;
            k--;
        }
    }

    while(j>=0)
    {
        z[k]=y[j];
        j--;
        k--;
    }
    while(i>=0)
    {
        z[k]=x[i];
        i--;
        k--;
    }

    for(int l=0;l<(n1+n2);l++)
    {
        cout<<z[l]<<" ";
    }
}