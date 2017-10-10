#include <stdio.h>

int main (){
	int n, i, maxdif, ff, fs, f, s;
	
	scanf ("%d", &n);
	
	maxdif=0;
	
	for (i=0; i<n; i++){
		scanf ("%d %d", &f, &s);
		if (abs(f-s)>maxdif){
			ff=f;
			fs=s;
		}
	}
	printf ("%d %d", ff, fs);
}
