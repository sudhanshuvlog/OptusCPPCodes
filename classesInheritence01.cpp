#include "iostream";
using namespace std;

class VisitorForm{ //class
	private: //modifier
	int age; //data member
	int phoneNo;
	//setter method
	public:
		//constucter overloading
	VisitorForm(int a , int p){
		cout<<"constructer of VisitorForm"<<endl;
		age=a;
		phoneNo=p;
	}
//	setAge(int a){
//		age=a;
//	}
	//getter method
	getAge(){return age;}
	
};

class JobForm: public VisitorForm{
	public:
	int exp;
	int salary;
	//constructer
	JobForm(int a1, int p1, int e, int s):VisitorForm(a1, p1){
		cout<<"I am constructer of JobForm"<<endl;
		exp=e;
	}
	
	void setExp(int e){
		int a,b,c,d;
		exp=e;
	}
	int getExp(){
		return exp;
	}
};
main(){
//int x;
//VisitorForm x(22,1234);
//x.age=22;
//x.setAge(23);
//cout<<x.age;
//cout<<x.getAge();
//VisitorForm y(22);

JobForm x(42,1234,11,1000000);
cout<<x.getExp()<<endl;
//rahul.exp=11;
//rahul.setAge(35);
//cout<<rahul.getAge();
//rahul.age=70;
//rahul.setExp(11);
cout<<x.getAge();	
}
