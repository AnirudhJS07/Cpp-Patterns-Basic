#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter number of Rows :"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i>=j)
            {
            cout<<"*";
            }
        }
            cout<<endl;
    }
    return 0;
}
