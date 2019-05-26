#include <stdio.h>
int main()
{
	const char *a[]={"January","Ferbruary","March","April","May","June","July","August","September","October","November","December"};
	int b = 0;
	scanf("%d",&b); 
	printf("%s\n", a[b-1]);

	return 0;
}
