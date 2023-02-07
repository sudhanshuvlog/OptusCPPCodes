#include "iostream"
using std::cout;
using std::cin;

namespace aditya1{
	int x=10;
	int y=100;
	char z;
	double f;
}

namespace aditya2{
	int x =20;
	int g=45;
	
}

main(){
std::cout<<"before changing: "<<aditya1::y<<"\n";
aditya1::x=100;	
std::cout<<"after changing: "<<aditya1::x<<"\n";
std::cout<<"Value of x from aditya2: "<<aditya2::x;
int i;
std::cout<<" Enter the value of i: ";
std::cin>>i;
cout<<"value of i: "<<i;
}
