#include "iostream"
using std::cout;
using std::endl;
//call by value
increment(int x){
cout<<&x<<endl;
++x;
cout<<x<<endl;	
}
//call by addresss
incrementpro(int* p){
	cout<<*p<<endl;
	cout<<p<<endl;
	++(*p);
}
main(){
int x=10;
cout<<"value of x :"<<x<<endl;
//increment(x);
cout<<&x<<endl;
incrementpro(&x);
cout<<"value of x :"<<x<<endl;

int i=10;
cout<<"valus of i: "<<i<<endl;
cout<<"address of i: "<<&i<<endl;
int &j=i;
cout<<"valus of j: "<<j<<endl;
cout<<"address of j: "<<&j<<endl;	
j=100;
cout<<i;
int *p=&i;
cout<<*p<<endl;
int z=2000;
p=&z;
cout<<*p<<endl;
 &j=z;

}
