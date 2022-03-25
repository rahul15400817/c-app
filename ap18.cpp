#include<iostream>
using namespace std;
int main()
{int i=10,j=20,k;
k=i-- - i++ + --j+ ++i+ --i-j-- + ++i-j++;
cout<<i<<endl;
cout<<j<<endl;
cout<<k<<endl;
return 0;

}