#include "iostream"
//using namespace std;
using std::cout;
using std::endl;
namespace namespace1{
	int x=35;
	int y=40;
	char c=45;
}

namespace namespace2{
	int x=45;
}
main(){
cout<<"Before changing the value: "<<namespace1::x<<endl;
namespace1::x=100;	
cout<<"After changing the value: "<<namespace1::x<<endl;
cout<<"Value of x from namespace2: "<<namespace2::x<<endl;

}
