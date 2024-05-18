# include <stdio.h>
# include <ctype.h>
struct BandName{
	char pet[100];	
	char city[100];
	char BandName[100];
};

void to_upper(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main(){
	struct BandName band1 = {};
	printf(" Welcome to the band generator !\n");
	
	printf(" What is name of the city you grew up in ?\n ");
	scanf("%s",&band1.city); 	
	
	printf(" What is your pet's name ?\n ");
	scanf("%s",&band1.pet); 
	
	sprintf(band1.BandName,"%s%s",band1.city,band1.pet);
	to_upper(band1.BandName);
	 	
	printf("Your band name should be %s !",band1.BandName);
	
	return 0;
}
