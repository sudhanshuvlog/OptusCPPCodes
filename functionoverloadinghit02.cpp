#include "iostream"
using namespace std;
int add(int x, int y )
{
	cout<<"int wala fun"<<endl;
	int z=x+y;
	return z;
}
int add(int a, int b,int c){
	cout<<"int ka dusra function"<<endl;
}
double add(double x, double y){
	cout<<"double wala function"<<endl;
	double z=x+y;
	cout<<"Value of z: "<<z<<endl;
	return z;
}

string add(string x, string y){
	cout<<"string wala function"<<endl;
	string z=x+y;
	return z;
}
int main(){
	int x=10.5;
	int y=20;
	cout<<add(x,y)<<endl;
	double i=10.54;
	double j=7.86;
	cout<<add(i,j)<<endl;
	
	string a=" hello ";
	string b="world";
	cout<<a<<endl;
	cout<<add(a,b); 
}
