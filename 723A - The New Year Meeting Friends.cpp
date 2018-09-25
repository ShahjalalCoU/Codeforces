#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sub;
    cin>>a>>b>>c;
    if( b>a && a>c || c>a && a>b )
		{
			//middle value a;
            if(b>c)
            {
                sub=b-c;
            }
            else
            {
                sub=c-b;
            }
            cout<<sub<<endl;
		}
    if( a>b && b>c || c>b && b>a )
		{
			//middle value b;
			if(a>c)
            {
                sub=a-c;
            }
            else
            {
                sub=c-a;
            }
            cout<<sub<<endl;

		}
    if( a>c && c>b || b>c && c>a )
		{
			//middle value c;
			if(a>b)
            {
                sub=a-b;
            }
            else
            {
                sub=b-a;
            }
            cout<<sub<<endl;
		}
    return 0;

}
