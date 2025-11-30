#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(int n, vector<int>ar)
{ 
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
       
       sum = sum + ar[i]; 
      
    }
    return sum;
};
    


int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int result=simpleArraySum(n,arr);
    cout<<result;
    return 0;
}

