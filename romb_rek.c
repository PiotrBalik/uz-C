#include <stdio.h>
void gwiazd(int x,int y);


int main(void){
	
	gwiazd(5,3);
	
	return(0);
}

void gwiazd(int x,int y){
		
	if(x>0){
		gwiazd(x-1,y);
		printf("*");
		printf("x=%d, y=%d",x,y);
	}
	else if (y>0){
		gwiazd(y,y-1);
		printf("\n");
		
	}
};