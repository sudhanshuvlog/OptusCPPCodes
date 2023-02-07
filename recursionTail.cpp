//Run this from G++ compiler command is - g++ <file name> -o myapp.exe -O3 -foptimize-sibling-calls
//After this run -> ./myapp.exe

#include "iostream"
using std::cout;
using std::endl;
int fact(int n){
	cout<<n<<endl;
	if(n==1){
		return 1;
	}
	return n*fact(n-1);
}
int factTailRecursion(int n, int a=1){
	cout<<n<<endl;
	if(n==1){
        cout<<"success!"<<endl;
		return a;
	}
	factTailRecursion(n-1,n*a);
}
main(){
	//cout<<fact(50000)<<endl;
	cout<<factTailRecursion(500000)<<endl;
	int result=1;
//	for(int i=1; i<=50000;i++){
//		cout<<i<<endl;
//		result=result*i;
//	}
//cout<<result<<endl;
//	for(;cout<<"i am running";){
//	}
}
