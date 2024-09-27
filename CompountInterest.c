#include<stdio.h>
int main(){
	int p, r, t,SI,c;
	printf("Enter Principle amount");
	scanf("%d", &p);
	printf("Enter Rate of interest");
	scanf("%d", &r);
	printf("Enter Time");
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		SI= (p*r)/100;
		c=SI+p;
		p=SI+p;
	}
	printf("%d",c);
	return 0;
}
