#include "iostream"
using std::cout;
using std::endl;

class VisitorForm{
	private:
	int age; //data member
	int phoneNo;
	public:
	VisitorForm(int a, int p){
		this->age=a;
		phoneNo=p;
		
	}
		//setter function
	//void setAge(VisitorForm* ,  int a){
	void setAge(VisitorForm*, int a){
		int b,c,d,e,f;
		cout<<"value of this keyword: "<<this<<endl;
		if(a<0){
			cout<<"age can't be negative";
			
		}
		else{
		
		this->age=a;
		//age=a;
	}
	}
	void setPhone(int p){
		this->phoneNo=p;
	}
	//getter 
	int getAge(){
		return age;
	}
	
	
};


main(){
int x;
VisitorForm rahul(20,12345);
//rahul.age=-22;
cout<<"Address of rahul: "<<&rahul<<endl;
//rahul.setAge(&rahul,22);
rahul.setAge(&rahul,22);
cout<<rahul.getAge();
cout<<"size of int : "<<sizeof(int)<<endl;
cout<<"size of object : "<<sizeof(rahul)<<endl;

VisitorForm anjali(18,4567);
cout<<"anjali's address: "<<&anjali<<endl;
//anjali.setAge(&anjali,18);
//anjali.setPhone(1234);



}
