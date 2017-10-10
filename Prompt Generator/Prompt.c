#include <stdio.h>
#include <time.h>

int main(){
	FILE * nouns;
	FILE * adjectives;
	
	int nrand, arand;
	
	srand(time(NULL));
	nrand = rand() % 91000;
	arand = rand() % 21000;
	
	nouns = fopen ("91nouns.txt","r");
	adjectives = fopen ("adjectives.txt","r");
	
	int i;
	char noun[100];
	char adjective[100];
	
	for (i=0; i<nrand; i++){
		fscanf (nouns, "%s", &noun);
	}
	for (i=0; i<arand; i++){
		fscanf (adjectives, "%s", &adjective);
	}
	
	
	
	printf ("%s ", adjective);
	printf ("%s " , noun);
	
	rewind(nouns);
	nrand = rand() % 91000;
	for (i=0; i<nrand; i++){
		fscanf (nouns, "%s", &noun);
	}
	
	rewind(adjectives);
	arand = rand() % 91000;
	for (i=0; i<arand; i++){
		fscanf (adjectives, "%s", &adjective);
	}
	
	printf ("%s ", adjective);
	printf ("%s", noun);
	
	fclose(nouns);
	fclose(adjectives);
	
}

