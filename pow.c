#include<stdio.h>
int main(){
	int x,y,z=1,i=0;
	scanf("%d",&x);
	scanf("%d",&y);
	while(i<y){
		z=z*x;
		i++;
	}
	printf("%d",z);
	return 0;
}
