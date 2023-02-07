#include "iostream"
using std::cout;
using std::endl;

class PhoneDB{
public:
	int length;
	int* arr;
	PhoneDB(int l){
		length=l;
		arr = new int[length];
	}
};


main(){
PhoneDB x(100);	
PhoneDB y(50);
}
