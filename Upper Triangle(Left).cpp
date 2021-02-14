#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number of rows :"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=a;j>=1;j--)
        {
            if(i<=j)
            {
            cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
