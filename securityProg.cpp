#include "iostream";
using namespace std;

main(){
	int time=5;
	if(time>22 || time<6){
		cout<<"gate is closed";
	}
	else if(time==22){
		cout<<"500 fine";
		cout<<"gate is open";
	}
	else{
		cout<<"gate is open";
	}
  
 ((time>22 || time<6) && cout<<"gate is closed") || ((time==22 && cout<<"500 fine") || cout<<"gate is open" );
  
 string x="hello ";
 string y= "world";

int x= 5;
double y= 90.5;

char x='A';
char y='B';
  cout<<char(x)+char(y);
	
}
