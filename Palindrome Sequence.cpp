#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l;
    cout<<"Print palindrome till :";
    cin>>l;
    for(i=1; i<=l; i++)
    {
        int k=i;
        for(j=1; j<=(l-i); j++)
        {
            cout<<"  ";
        }
        for(;j<=l; j++)
        {
            cout<<k<<" ";
            k--;
        }
        k=1;
        for(;j<(i+l); j++)
        {
            k++;
            cout<<k<<" ";
        }
        for(;j<=(2*l-1); j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }
    return 0;
}
