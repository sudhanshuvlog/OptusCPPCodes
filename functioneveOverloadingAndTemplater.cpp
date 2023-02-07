#include "iostream"

using std::cout;
using std::endl;
using std::string;
//function overloading

template <typename T>
add(T i, T j){
	cout<<i+j<<endl;
}





//add(int i, double j){
//	cout<<"int and double function"<<endl;
//	cout<<i+j<<endl;
//}
//
//add(int i, int j, int l){
//	cout<<"int function 3 parameters"<<endl;
//	cout<<i+j+l<<endl;
//}
//add(int i, int j, int l, int m){
//	cout<<"int function 3 parameters"<<endl;
//	cout<<i+j+l+m<<endl;
//}
//add(double i, double j){
//	cout<<"double function"<<endl;
//	cout<<i+j<<endl;
//}
//
//add(string i, string j){
//	cout<<"string function"<<endl;
//	cout<<i+j<<endl;
//}
main(){
int x=10;
int y=20;
add(x,y);
double i=8.678;
double j=3.456;
add<double>(i,j);

string a="hello ";
string b= "world";
add(a,b);
//add(1,2,3);
//add(x,i);


}
