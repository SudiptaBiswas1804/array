#include <iostream>
using namespace std;

int main(){
	int i,j,n,n3,sum=0;
	n3=n+n;
	int arr[n];
	cin>>n;
	for(i=0; i<=n-1; i++){
		cin>>arr[i];
	}
	for(i=0; i<=n-1; i++){
            	cout<<arr[i]<<" ";
            }
            
	//Sum of the array
	for(i=0; i<=n-1; i++){
		sum=sum+arr[i];
	}
	            cout<<endl<<sum;

	//Sorting the array
	for(i=0; i<n; i++){
		for(j=0; j<n-i; j++){
			if(arr[j]>arr[j-1]){
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
	
	cout<<endl;
	for(int k=0; k<n; k++){
		cout<<arr[k]<<" ";
	}
	
	//Merging two arrays
	int b[n];
	int c[n3];
	for(i=0; i<n; i++){
		cin>>b[i];
	}
	cout<<endl;
	for(i=0; i<n; i++){
		cout<<b[i]<<" ";
	}
	for(i=0; i<n; i++){
		c[i]=arr[i];
		c[i+n]=b[i];
	}
	cout<<endl;
	for(i=0; i<n3; i++){
		cout<<c[i]<<" ";
	}
	
           	return 0;
}
