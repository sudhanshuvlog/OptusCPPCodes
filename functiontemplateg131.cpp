#include "iostream"
using std::cout;
using std::endl;

void myfun1(); //function prototype - just write function signature here, and function code you can write even after main() now

//template
template<typename T, typename U>
int add(T x, U y){
cout<<x+y<<endl;	
T z= x+y;
return 65;
}
myfun(int x){
	cout<<"myfun is running"<<endl;
	return 1;
}
main(){

if(myfun(6)){
	cout<<"inside if condition"<<endl;
}
	
	
int x=10;
int y=20;
//cout<<"output of function add: "<<add<int>(x,y);
char k=add<int, int>(x,y);
cout<<"output of function add: "<<k<<endl;
myfun1();
//double i=5.6;
//double j=7.8;
//add<double>(i,j);

//add<int,double>(x,i);

}


void myfun1(){
	cout<<"i am running";
}
