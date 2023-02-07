#include "iostream"
using namespace std;

main(){
 int *arr = new int [2];
 arr[0]=1; arr[1]=2;
 
 int *arr1 = new int[4];
 
 for(int i=0; i<2; i++){
 	arr1[i]=arr[i];
 }
 delete arr;
 arr=arr1;
 arr1=NULL;
 arr[2]=100;
 arr[3]=200;
 cout<<arr[3]<<endl;
 
}
