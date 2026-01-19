#include <iostream>
using namespace std;

void square(int num);
int main(){
	int num=0;
	cout<<"Enter The Number: ";
	cin>>num;
	square(num);
	return 0;
}

void square(int num){
	int s=num*num;
	cout<<"The Square Of "<<num<<" Is: "<<s<<endl;
}
