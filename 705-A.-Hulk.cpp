#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i>1)
            printf(" that ");

        if(i%2==1)
            printf("I hate");
        else
            printf("I love");

        if(i==n)
            printf(" it\n");

    }
    return 0;
}
