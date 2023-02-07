#include "iostream"
using namespace std;

main(){
	//variable
	int x=10;
	int *p=&x;
	cout<<p<<endl;
	
	cout<<"Value of x via pointer" << *p <<endl;
	
	//array
	int a[5];
	cout<<"address of x: "<<p<<endl;
	a[0]=100;
	a[1]=200;
	a[2]=300;
	a[3]=400;
	a[4]=500;
	
	//printing elements of array via normal method 
	cout<<"First element value: "<<a[0]<<endl;
	cout<<"Second element value: "<<a[1]<<endl;
	cout<<"Third element value: "<<a[2]<<endl;
	cout<<"Fourth element value: "<<a[3]<<endl;
	cout<<"Fifth element value: "<<a[4]<<endl;
	///////////////////////////////////////
	
	//printing elements of array via pointer method
	cout<<"value of first element of array via pointer: "<< *(a+0)<<endl;
	cout<<"value of second element of array via pointer: "<< *(a+1)<<endl;
	cout<<"value of third element of array via pointer: "<< *(a+2)<<endl;
	cout<<"value of fourth element of array via pointer: "<< *(a+3)<<endl;
	cout<<"value of fifth element of array via pointer: "<< *(a+4)<<endl;
	
	
	cout<<"address of first elelment of array: "<<a<<endl;
	cout<<"address of second elelment of array: "<<a+1<<endl;
	cout<<"address of third elelment of array: "<<a+2<<endl;
	cout<<"address of fourth elelment of array: "<<a+3<<endl;
	cout<<"address of fifth elelment of array: "<<a+4<<endl;
	
	
	cout<<"printing value of x via array : "<<a[5]<<endl;
	a[5]=20;
	cout<<"Value of x: "<<x<<endl;
	*(a+5)=30;
	cout<<"Value of x: "<<x<<endl;
	cout<<"Reading any random location via array pointer: "<<a[500]<<endl;
	
	
	cout<<"address of first element: "<<&a[0]<<endl;
	cout<<"address of second element: "<<&a[1]<<endl;
	cout<<"address of third  element: "<<&a[2]<<endl;
	cout<<"address of fourth element: "<<&a[3]<<endl;
	cout<<"address of fifth element: "<<&a[4]<<endl;
	
 
	
}
