#include <stdio.h>

int main(int arc, const char *arcv)
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a > b) printf("%d",a);
	else printf("%d",b);
	return 0;
}