#include <iostream>
using namespace std;

int main() {
int i,n;
int arr[n];
cout<<"enter the size of the array "<<endl;
cin>>n;
cout<<"enter the array elements"<<endl;
for(i=0; i<=n; i++) {
cin>>arr[i];
}
cout<<"the array elements are "<<endl;
for(i=0; i<=n; i++){
cout<<arr[i]<<" ";
}
return 0;
}
