#include<iostream>
using namespace std;
int main()
{
    int n,i,max=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int sum=0;
    for(i=0;i<n; i++)
    {
        if(max==a[i])
        {
            sum=sum+0;
        }
        else
        {
            sum=sum+max-a[i];
        }
    }
    cout<<sum<<endl;

    return 0;
}
