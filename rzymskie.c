#include <stdio.h>
#include <math.h>
#define pb(n) putchar(letters[n]);
void rzym(int n,int ex);

char letters[]="IVXLCDMdm";

int main(){
	int n;
	printf("Podaj liczbe:\n");
	scanf("%d",&n);
	
	rzym(n,(int)floor(log10(n)));
	
	return(0);
}

void rzym(int n,int ex){
	if(n>0 & ex>=0){
		int r,c,m;
		r=n%10;
		rzym((n-r)/10,ex); /*print leading value first */
		c=(int)floor(log10(n));
		m=2*(ex-c); /* get exponent */
	switch(r){
		case 0:
			break;
		case 1:
			pb(m) break;
		case 2:
			pb(m) pb(m) break;
		case 3:
			pb(m) pb(m) pb(m) break;
		case 4:
			pb(m) pb(m+1) break;
		case 5:
			pb(m+1) break;
		case 6:
			pb(m+1) pb(m) break;
		case 7:
			pb(m+1) pb(m) pb(m) break;
		case 8:
			pb(m+1) pb(m) pb(m) pb(m) break;
		case 9:
			pb(m) pb(m+2)break;
	}
	} /* end if */
};