#include <iostream>
using namespace std;

int main(){
	int Array[3][3]={0};
	int sum[3]={0};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter Value Of Array["<<i<<"]["<<j<<"]: ";
			cin>>Array[i][j];
			sum[i]+=Array[i][j];
		}
	}
	cout<<endl;
	cout<<"Sum Of First Row Is: "<<sum[0]<<endl;
	cout<<"Sum Of Second Row Is: "<<sum[1]<<endl;
	cout<<"Sum Of Third Row Is: "<<sum[2]<<endl;
	return 0;
}
