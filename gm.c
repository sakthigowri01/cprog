#include <stdio.h>
#include<string.h>
int main(void) {

	scanf("%d %d",&i,&j);
	i=i^j;
	k=i^j;
	i=i^j;
	printf("%d %d",i,j);
	return 0;
}
