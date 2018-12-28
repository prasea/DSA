#include<iostream>
#include<math.h>

#define e 0.000001

using namespace std;

double func(double x){
	double s=pow(x,4)-2*pow(x,3)-x-3;
	return s;
}
double der(double x){
	double s=4*pow(x,3)-6*pow(x,2)-1;
	return s;
}

int main(){
	double x1,x2,a,b,ecal;
	cout<<"Enter initial approximation:";
	cin>>x1;
	
	re:
	if(der(x1)==0){
		cout<<"There is no convergency of root";
		return 0;
	}
	else{
		x2=x1-(func(x1)/der(x1));
	}
	ecal=(x2-x1)/x2;
	x1=x2;
	if(e<ecal)
		goto re;
	else
		cout<<"Root is:"<<x1;
	return 0;
}
