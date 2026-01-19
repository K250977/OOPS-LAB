#include <iostream>
using namespace std;

int addNumbers(int a,int b);

int main(){
	int a=0,b=0;
	cout<<"Enter The First Number: ";
	cin>>a;
	cout<<"Enter The Second Number: ";
	cin>>b;
	cout<<"The Sum Of "<<a<<" and "<<b<<" Is: "<<addNumbers(a,b)<<endl;
	return 0;
}

int addNumbers(int a,int b){
	return a+b;
}
