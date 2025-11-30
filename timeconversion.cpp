#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

void timeConversion(string s) 
{
    int h1=(int)s[1] - '0';
    int h2 = (int)s[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    if(s[8]=='p'||s[8]=='P')
    {
       if(hh==12)
       { 
        for(int i=0;i<10;i++)
       {
       cout<<s[i];
       }
       }
       else
       {
        hh=hh+12;
        cout<<hh;
        for(int i=2;i<8;i++)
        {
            cout<<s[i];
        }
       }
    }
    else
     
    {
        if(hh==12)
        {
        cout<<00;
        for(int i=2;i<8;i++)
        {
            cout<<s[i];
        }
        }
        else
         {
        for(int i=0;i<10;i++)
        {
        cout<<s[i];
        }
        }
    
    }
    };




int main()
{
    

    string s;
    getline(cin, s);

    timeConversion(s);



    return 0;
}
