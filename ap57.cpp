#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={ {2,3,5},{5,4,3},{7,9,8} };
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	bool flag=false;
	int x;
	cout<<"Enter element to be found"<<endl;
	cin>>x;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]==x)
		
			cout<<i<<" "<<j<<"\n";
			{
				flag=true;
			}
		}
	}
	if(flag){
		cout<<"Element is found \n";
	}
	else {
		cout<<"Elements is not found\n";
	}
return 0;	
}