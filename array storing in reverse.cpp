#include <iostream>
using namespace std;

int main() {
int a[100],b[100],i,j,n;
cout<<"Enter the no. of elements:";
cin>>n;
cout<<n<<endl;
for(i=0;i<n;i++)
{
	cin>>a[i];
	cout<<a[i]<<" ";
}
cout<<endl;
for(i=0;i<n;i++)
{
	b[n-1-i]=a[i];
	
}
for(i=0;i<n;i++)
{
	cout<<b[i]<<" ";
}
	return 0;
}
