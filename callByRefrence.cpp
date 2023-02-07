#include "iostream"
using namespace std;

swap(int &i, int &j){
	int temp=i;
	i=j;
	j=temp;	
}

main(){
	int x1=7;
	int y1=20;
	cout<<"before swap : "<<endl;
	cout<<"x1: "<<x1<<endl<<"y1: "<<y1<<endl;
	swap(x1,y1);
	cout<<"After swap : "<<endl;
	cout<<"x1: "<<x1<<endl<<"y1: "<<y1<<endl;
}
