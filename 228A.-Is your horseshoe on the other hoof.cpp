#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,mini,cnt=0;
    cin>>a>>b>>c>>d;
    if(a==b || a==c || a==d)
    {
        cnt++;
    }
    if(b==c || b==d)
    {
        cnt++;
    }
    if(c==d)
    {
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
