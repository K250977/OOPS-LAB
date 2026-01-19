#include <iostream>
using namespace std;

int main(){
	int num[5]={0};
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter The Value Of num["<<i<<"]: ";
		cin>>num[i];
	}
	for(int i=0;i<5;i++)
	{
		sum+=num[i];
	}
	cout<<endl;
	cout<<"Sum Is: "<<sum<<endl;
	cout<<"After Reversal"<<endl;
	int j=0;
	for(int i=4;i>=0;i--)
	{
		cout<<"Value Of num["<<j<<"]: "<<num[i]<<endl;
		j++;
	}
	return 0;
}
