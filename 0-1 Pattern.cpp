#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    cout<<"Enter the number of rows for your Binary Pyramid: ";
    cin>>k;
    for(i=1; i<=k; i++)
    {
        for(j=1; j<=i; j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
