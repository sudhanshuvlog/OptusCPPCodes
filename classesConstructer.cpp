#include "iostream";
using namespace std;

class VisitorForm{ //class
	private: //modifier
	int age; //data member
	int phoneNo;
	public:
	//constucter overloading
	VisitorForm(int a , int p){
		cout<<"constructer of VisitorForm"<<endl;
		age=a;
		phoneNo=p;
	}
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
class PrevJobDetails: public JobForm{
	public:
		int prevSalary;
		//constructer
	PrevJobDetails(int a, int p, int e, int s, int prevSal):JobForm(a,p,e,s){
		this->prevSalary=prevSal;
		cout<<"Constructer of PrevJobDetails class "<<endl;
	}
};
main(){
PrevJobDetails x(50,1234,12,1000000,500000);
JobForm y(50,3456,11,150);

}
