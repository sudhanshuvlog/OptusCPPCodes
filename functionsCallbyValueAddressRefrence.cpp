#include "iostream"
using std::cout;
using std::endl;
//call by value
increment(int x){
	cout<<"x from function: "<<x<<endl;
	++x;
	cout<<"x from function: "<<x<<endl;
}
//call by addresss
incrementpro(int* p){
	cout<<"value of p: "<<p<<endl;
	cout<<"value of x: "<<*p<<endl;
	++(*p);
}
//call by refrence
incrementpromax(int &x){
	++x;
	
}
main(){
	int x=10;
	cout<<"value of x: "<<x<<endl;
	cout<<"address of x : "<<&x<<endl;
	//increment(x);
	//cout<<"address of x : "<<&x<<endl;
	//incrementpro(&x);
	//cout<<"updated value of x: "<<x<<endl;
//	int &y=x;
//	cout<<"value of y: "<<y<<endl;
//	cout<<"address of y : "<<&y<<endl;
//	y=20;
//	cout<<"new value of x: "<<x<<endl;
//	cout<<"new value of y: "<<y<<endl;
	
	incrementpromax(x);
	cout<<"updated value of x: "<<x<<endl;
	
	
}

