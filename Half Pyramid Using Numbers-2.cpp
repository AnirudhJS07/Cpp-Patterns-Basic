#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number upto which you want the pyramid to be:"<<endl;
    cin>>a;

    for(int i=1; i<=a; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;

}