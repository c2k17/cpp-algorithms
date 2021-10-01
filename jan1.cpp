#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		int n,k,d,a[100000];
		cin>>n>>k>>d;
		int sum;
		cin>>a[i];
		while(cin.get() != '\n'){
			cin>>a[i];
			
			sum = sum+a[i];
			i++;
			cout<<"hlo"<<endl;
		}
		
		cout<<sum;
		cout<<"hlo"<<endl;
		cout<<a[i];
	}
}
