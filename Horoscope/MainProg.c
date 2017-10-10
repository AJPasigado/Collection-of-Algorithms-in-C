#include <stdio.h>
#include <time.h>

int know_sign (int, int);
int get_horoscope (FILE*);
int get_desc (FILE*);

int main (){
	int month;
	int day;
	
	printf ("Enter your birthday (month day): ");
	scanf ("%s %d", &month, &day);
	printf ("\n\n=====================================\n");
	
	printf ("Your Zodiac sign is %s!\n", know_sign(month, day));
	
	printf ("=====================================\n\n");
	printf ("%s horoscope for the day: \n");
	
	FILE* fp;
	fp = fopen("horscope.txt","r");
	printf ("According to your sign, you are a %s", get_desc(fp));
	printf ("%s", get_horoscope(fp));
	printf ("%s", get_horoscope(fp));
	fclose(fp);
	
	
}

int know_sign (month, day){
	int ans;
	ans = month*day;

	if (ans < 20){
		return "Capricorn";
	} else if (ans < 38){
		return "Aquarius";
	} else if (ans < 63){
		return "Pisces";
	} else if (ans < 80){
		return "Aries";
	} else if (ans < 105){
		return "Taurus";
	} else if (ans < 126){
		return "Gemini";
	} else if (ans < 161){
		return "Cancer";
	} else if (ans < 184){
		return "Leo";
	} else if (ans < 207 ){
		return "Virgo";
	} else if (ans < 230){
		return "Libra";
	} else if (ans < 242){
		return "Scorpio";
	} else if (ans < 288){
		return "Sagittarius";
	} else return "Capricorn";
}

int get_horoscope(FILE * fp){
	int i;
	int lnum;
	char line[1000];
	
	srand(time(NULL));
	lnum = (rand() % (52 - 27 + 1) + 27);
	
	i=0;
	
	while (i < lnum){
		fgets (line, 1000, fp);
		i++;
	}
	return line;
}

int get_desc(FILE * fp){
	int i;
	int desc;
	char line[1000];
	
	srand(time(NULL));
	desc = (rand() % (25 - 0 + 1) + 0);
	
	i=0;
	
	while (i < desc){
		fgets (line, 1000, fp);
		i++;
	return line;
}
