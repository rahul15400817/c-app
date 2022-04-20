#include<iostream>
using namespace std;
int unique(int arr[], int n){
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum=xorsum^arr[i];
	}
	return xorsum;
}
int main(){
	int arr[]={2,4,6,7,6,2,4,8,9,8,9};
	cout<<unique(arr,11)<<endl;
	
	return 0;
}