#include "iostream"
using namespace std;

double fact(int n){
	cout<<n<<endl;
    if(n==1){
        return 1;
    }
    return n * fact(n-1);
}

main(){
    cout<<fact(50000)<<endl;
}
