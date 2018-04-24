#include <iostream>
using namespace std;

int main() {
	int i,j,k,n;
	int arr[n];
	int e[n];
	int o[n];
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	for(i=0; i<n; i++){
		if(arr[i]%2==0){
			e[j]=arr[i];
			j++;
		}
		else{
			o[k]=arr[i];
			k++;
		}
	}
	for(i=0; i<j; i++){
		cout<<e[i]<<" ";
	}
	for(i=0; i<k; i++){
		cout<<o[i]<<" ";
	}


	return 0;
}
