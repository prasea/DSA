//Lagrange Interpolation method
#include <stdio.h>
#include <conio.h>
int main()
{
    float L[50],x[50],y[50],a,sum=0,temp;
    int n,i,j;
    printf("\n Enter the number of the terms of the table: ");
    scanf("%d",&n);
    printf("\n\n Enter the respective values of the variables x and y: \n");
    for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    printf("\n\n The table you entered is as follows :\n\n");
    for(i=0; i<n; i++)
    {
        printf("%f\t%f",x[i],y[i]);
        printf("\n");
    }
    printf("\nEnter the value to interplate");
    scanf("%f",&a);
    for(i=0;i<n;i++)
    {
    	temp=1;
    	for(j=0;j<n;j++)
    	{
    		if(i!=j)
    		{
    			temp=temp*(a-x[j])/(x[i]-x[j]);
			}
		}
		L[i]=temp;
		printf("L[%d]=%f\n",i,L[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+y[i]*L[i];
	}
    printf("\nThe interplate value is %f",sum);
    return 0;
}
