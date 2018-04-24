#include <iostream>
using namespace std;

int main(){
	int i,j,n;
	int arr[n];
	cin>>n;
	for(i=0; i<=n-1; i++){
		cin>>arr[i];
	}
	j=i-1; 
	i=0;   
	int temp=0;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
