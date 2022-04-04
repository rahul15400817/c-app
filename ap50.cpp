#include<iostream>
using namespace std;
int getBit(int n, int pos){
	return ((n&(1<<pos))!=0);
}
int main() {

cout<<getBit(16 ,6)<<endl;
 
}