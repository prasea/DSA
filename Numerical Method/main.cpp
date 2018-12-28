#include <iostream>
#include<math.h>

#define e 0.00001
using namespace std;

double gx(double x){
	return (pow(x,3)+1)/7;
}

int main() {
	double x0,x1,ecal;
	int count =0;
	cout<<"Enter initial guess: ";
	cin>>x0;
	
	do{
		x1=gx(x0);
		count++;
		ecal=fabs((x1-x0)/x1);
		if(count>20){
			cout<<"No convergence of root!!";
			exit(0);
		}
		
		x0=x1;
	}while(e<ecal);
	
	cout<<"Root is "<<x1;
	return 0;
}
