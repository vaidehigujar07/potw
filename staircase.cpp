#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n)
 { 
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n-i-1;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<"\n";
 }

}

int main()
{
   int n;
   cin>>n;

    staircase(n);

    return 0;
}



