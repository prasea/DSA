#include <iostream>
#include<math.h>

#define e 0.000001

using namespace std;

double fx(double x){
	return 4*pow(x,3)-2*x-6;
}
 

int main() {
	double x0,x1,x2;
	cout<<"Enter 2 initial approximation:";
	cin>>x0>>x1;
	re:
	x2=x1-(fx(x1)*(x1-x0))/(fx(x1)-fx(x0));
	
	double ecal = (x2-x1)/x2;
	
	x0=x1;
	x1=x2;
	
	if(e<ecal)
		goto re;
	else
		cout<<"Root is:"<<x2;
		
	return 0;
}
