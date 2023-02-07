#include "iostream";
using namespace std;

class VisitorForm{
 protected:
	int age;
	int phone;	

	VisitorForm(int a,int p){
		cout<<"constructer of VisitorForm"<<endl;
		age=a;
		phone=p;
	}
};
class JobForm: public VisitorForm{
	public:
	int exp;
	int salary;
	JobForm(int a, int e, int p):VisitorForm(a,p){
		cout<<"constructer of JobForm"<<endl;
		VisitorForm::age=8;
		this->exp=e;
	}
};
class JobFormMoreDetails: public JobForm{
	public:
		int prevSalary;
		JobFormMoreDetails(int a, int e, int p, int psalry):JobForm(a,e,p){
			cout<<"constructer of JobFormMoreDetails"<<endl;
			this->prevSalary=psalry;
		}
		
};

int* myarray(){
	int arr[]={1,2,3,4};
	cout<<arr<<endl;
	return arr;
}
main(){
int *p= myarray();	
cout<<p<<endl;
cout<<"first element: "<<*p<<endl;
	
JobForm x(40,11,12345);
//JobFormMoreDetails x(40,11,12345,1000000);	
int y=90;
///////////////////////Heap memory//////////////

//int* p=new int;
//cout<<p<<endl;
//*p=90;
//cout<<*p<<endl;
//delete p;
//cout<<p<<endl;
//cout<<*p<<endl;





}
