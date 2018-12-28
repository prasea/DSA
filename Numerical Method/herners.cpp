#include <iostream>
#include<math.h>

#define MAX 10

using namespace std;

int main() {
	int n;
	cout<<"Enter order of polynomial: ";
	cin>>n;
	double x,a[n],b[n];
	cout<<"Enter coefficient of plynomial\n";
	for(int i=0;i<=n;i++){
		cout<<"a"<<i<<": ";
		cin>>a[i];
		cout<<endl;
	}
	
	b[n]=a[n];
	cout<<"Enter value x: ";
	cin>>x;	
	for(int i =n; i>0; i--){
		b[n-1]=a[n-1]+b[n]*x;
	}
	cout<<"Functional value is: "<<b[0];
	return 0;
}
