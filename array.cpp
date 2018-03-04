#include <iostream>
using namespace std;

int main() {
int i,n;
int arr[n];
cout<<"enter the size of the array "<<endl;
cin>>n;
cout<<"enter the array elements"<<endl;
for(i=0; i<=n-1; i++) {                 //or i<n, i/position starts from 0
cin>>arr[i];
}
cout<<"the array elements are "<<endl;
for(i=0; i<=n-1; i++){
cout<<arr[i]<<" ";
}
return 0;
}

//i means we are accessing the position of the array while arr[i] means we are accessing the data in the array.
