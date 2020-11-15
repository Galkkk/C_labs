#include <stdio.h>
#include <string.h>

int main(){
	char text[99];

	printf("Write youre message: ");
	gets(text);

	int words = 0;
	int is_continue = 0;
	char space = ' ';
	
	for (int i = 0; text[i] != '\0'; i++){
		if (text[i] != space){
			is_continue = 1;
		}
		if ((text[i] == space) && (is_continue == 1)){
			words++;
			is_continue = 0;
		}
	}

	if (is_continue == 1){
		words++;
	}

	printf("%s%d","Count words in text: ", words);
	return 0;
}
