#include "iostream";
using std::cout;
using std::endl;
//"arr" is created in stack memory, so returning it's address will not help, if we 
//go to that address from main() then we can't find the elements, because as function will return then it's activation record will be removed.
int* array(){
	int arr[]={1,2,3,4,5};
	cout<<arr<<endl;
	cout<<arr[0]<<endl;
	cout<<*arr<<endl;
	return arr;
}
//same as above, returning address will not help main() to get value, because x is created in stack memory, and as function will return activation record will be removed
int* myfun(){
	int x=10;
	cout<<&x<<endl;
	return &x;
	
}
//create a space in heap memory and return it's address.
int* myfun1(){
int *p=new int;
*p=9999;
cout<<p<<endl;
cout<<*p<<endl;
int m=10000;
return p;
}

main(){
int* q= myfun1();	
cout<<q<<endl;
cout<<*q<<endl;
	
	
//int* p=array();
//cout<<p<<endl;
//cout<<p[0]<<endl;
//cout<<*p<<endl;
//int* q=myfun();
//cout<<q<<endl;
//cout<<*q<<endl;

}
