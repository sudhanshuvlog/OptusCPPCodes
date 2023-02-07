#include "iostream"
using std::cout;
using std::endl;

main(){
int arr[2];
arr[0]=1;
arr[1]=2;
cout<<arr[0]<<endl;
arr[2]=1000;
cout<<arr[2]<<endl;

int* a=new int[3];
a[0]=100;
a[1]=200;
a[2]=300;
a[3]=400;
cout<<a[3]<<endl;
}
