#include <iostream>
#include<math.h>

#define e 0.000001

using namespace std;
double gx(double x){
	return 2-pow(x,2);
}

double fx(double x){
	return pow(x,2)+x-2;
}

int main() {
	int count = 0;
	double x0,x1,ecal;
	cout<<"Enter initial approximation:";
	cin>>x0;
	re:
	x1=gx(x0);
	count++;
	
	ecal = (x1-x0)/x1;
	
	if(count>20){
		cout<<"No convergence of root";
		return 0;
	} 
	if(e<ecal)
		goto re;
	else
		cout<<"Root is:"<<x1;
	x0=x1;
	return 0;
}
