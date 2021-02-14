#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"PRINT A DIAMOND"<<endl;
    cout<<"The size of the diamond will be twice your input value"<<endl;
    cout<<"Enter the size of the diamond you want: ";
    cin>>n;
    int a = (2*n-1)/2;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=a; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
           if(j==1 || j==2*i-1)
           {
                cout<<"*";
           }
           else
           {
                cout<<" ";
           }           
        }
        cout<<endl;
        a--;
    }
    a=0;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=a; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
               if(j==1 || j==2*i-1)
           {
                cout<<"*";
           }
           else
           {
                cout<<" ";
           }           
        }
        cout<<endl;
        a++;
    }
    return 0;
}
