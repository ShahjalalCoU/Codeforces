#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,s,m,j,ck=0;
    cin>>n;
    for(m=1;m<=100;m++)
    {
        s=n*m+1;
        for(j=2; j<s; j++)
        {
            if(s%j==0)
            {
                ck++;
                break;
            }
        }
        if(ck==1)
        {
            cout<<m<<endl;
            break;
        }
    }

    return 0;
}
