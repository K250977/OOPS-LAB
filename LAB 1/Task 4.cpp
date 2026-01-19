#include <iostream>
using namespace std;

int main(){
	int a;
	float b;
	double c;
	char d;
	bool e;
	cout<<"Enter Number(Integer): ";
	cin>>a;
	cout<<"Enter Number(Float): ";
	cin>>b;
	cout<<"Enter Number(Double): ";
	cin>>c;
	cout<<"Enter Character: ";
	cin>>d;
	cout<<"Enter Number(Bool): ";
	cin>>e;
	cout<<endl;
	cout<<"The Size Of Number(Integer) Is: "<<sizeof(a)<<" Bytes"<<endl;
	cout<<"The Size Of Number(Float) Is: "<<sizeof(b)<<" Bytes"<<endl;
	cout<<"The Size Of Number(Double) Is: "<<sizeof(c)<<" Bytes"<<endl;
	cout<<"The Size Of Charcter Is: "<<sizeof(d)<<" Bytes"<<endl;
	cout<<"The Size Of Number(Bool) Is: "<<sizeof(e)<<" Bytes"<<endl;
	return 0;
}
