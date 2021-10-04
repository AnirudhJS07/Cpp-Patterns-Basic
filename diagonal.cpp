#include<iostream>
using namespace std;

template<class T>
class diagonal
{
	public:
		diagonal(int N=10);
		T get(int ,int )const;
		void set(int ,int , T&);
	private:
		int n;
		T  *arr;
};

template<class T>
diagonal<T>::diagonal(int N)
{
	if(N<1)
		throw ("Matrix size must be greater than zero");
	n=N;
	arr=new T [n];
}

template<class T>
T diagonal<T>::get(int i,int j)const
{
	if(i<0||j<0||i>n||j>n)
	throw ("Matrix Index out of bounds");

	if(i==j)
	
		return arr[i];
	
	else
	
		return 0;
	return 0;
}

template<class T>
void diagonal<T>::set(int i,int j, T& val)
{
	if(i<0||j<0||i>n||j>n)
	throw ("Matrix Index out of bounds");
	if(i==j)
		arr[i]=val;
	else
	{
		if(val!=0)
		{
			cout<<"Value not zero enter again";
			cin>>val;
			val=0;
			arr[i]=val;
		}
	
	}
}

int main()
{
	int n;int val;
	cout<<"Enter the order of matrix"<<endl;
	cin>>n;int i,j;
	diagonal<int> d (n);
	int **arr;
	arr=new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"element at position"<<i<<j<<endl; 
			cin>>arr[i][j];
			d.set(i,j,arr[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int ch;char repeat;
	do
	{
	cout<<"***MENU***"<<endl;
	cout<<"1.Update a element"<<endl;
	cout<<"2.Get an element"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			cout<<"Enter the index of the element"<<endl;
			cin>>i>>j;
			cout<<"Enter the value"<<endl;
			cin>>val;
			d.set(i,j,val);
			break;
		}
		case 2:
		{
			cout<<"Enter the position of matrix you want to know the value of"<<endl;
			cin>>i>>j;
			cout<<"The value is "<<d.get(i,j)<<endl;
			break;
		}
		default:
		{
			cout<<"Wrong choice"<<endl;
			break;
		}
	}
	cout<<"Do you want to continue(Y/N)?"<<endl;
	cin>>repeat;
}
	while(repeat=='y'||repeat=='Y');
	
return 0;
}