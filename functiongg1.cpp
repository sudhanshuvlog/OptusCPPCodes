#include "iostream"
using std::cout;
using std::endl;
using std::string;
template <typename T>
add(T x, T y){
	cout<<"i am running.."<<endl;
	cout<<"value of x + y: "<<x+y<<endl;
}
template<typename U>
add(U x, U y, U z){
	cout<<"i am running with 3  paremeters with templates.."<<endl;
	cout<<"value of x + y+z: "<<x+y+z<<endl;
}
//add(int x, int y){
//	cout<<"i am running.."<<endl;
//	cout<<"value of x + y: "<<x+y<<endl;
//}
//add(int x, int y, int z){
//	cout<<"i am running with 3 int paremeters.."<<endl;
//	cout<<"value of x + y+z: "<<x+y+z<<endl;
//}
//add(double x, double y, double z){
//	cout<<"i am running with 3 double paremeters.."<<endl;
//	cout<<"value of x + y+z: "<<x+y+z<<endl;
//}
//add(double x, double y){
//	cout<<"double wala fun"<<endl;
//	cout<<"value of x + y: "<<x+y<<endl;
//}
//add(string x, string y){
//	cout<<"string wala fun"<<endl;
//	cout<<"value of x + y: "<<x+y<<endl;
//}
main(){
	int x=10;
	int y=20;
	add(x,y);
	add(x,y,5);
	double i=3.444;
	double j=5.56;
	add(i,j);
	add(i,j,7.89);
	string a="Hello ";
	string b=" World";
	add(a,b);
}
