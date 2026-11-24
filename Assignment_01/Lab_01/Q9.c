# include<stdio.h>
int main()
{	
	int a,b,c,d;
	
	printf("ENTER HOURS:");
	scanf("%d",&a);
	printf("ENTER MINUTES:");
	scanf("%d",&b);
	printf("ENTER SECONDS:");
	scanf("%d",&c);
	d=(a*60*60)+(b*60)+c;
	printf("TOTAL TIME IN SECONDS:%d",d);        
	
	return 0;       
}   
