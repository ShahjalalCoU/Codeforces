#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<=b)
    {
       for(int i=1; i<=100; i++)
       {
           a=a*3;
           b=b*2;
           if(a>b)
           {
               cout<<i<<endl;
               break;
           }
       }
    }

    return 0;
}
