#include <stdio.h>
void bina(int i);
void to_base(int b,int i);

//int fetch_table(int x);

int main(void){
	
	int n,b;
	
	/*for(n=0;n<62;n++){
	}*/
	printf("Podaj liczbe: ");
	scanf("%d",&n);
		
	printf("\nPodaj podstawe: ");
	scanf("%d",&b);
	printf("\n%d O podstawie %d: ",n,b);
	to_base(b,n);
	
	printf("\n%d Binarnie: ",n);
	bina(n);
	
	return(0);
}



void to_base(int b,int i){
	int ASC_val;
	if(i>0
	
		to_base(b, ( i-i%b ) / b ); /* przesun o jedna pozycje */
		
		ASC_val=i%b+48; /* offset dla latwego czytania tabeli */
		ASC_val=ASC_val+7*(ASC_val/58)+6*(ASC_val/84);
		
		printf("%c",ASC_val); /* ostatnia pozycja */
	}
	
};

void bina(int i){
	
	if(i>0){
		bina(i>>1); /* dziel przez 2 */
		printf("%d",i%2); /* ostatni bit */
	}
	
};