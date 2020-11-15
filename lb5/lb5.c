#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	if(argc == 2){
		if(!strcmp(argv[1], "--help")){
	        printf("Write the names of the files and symbol you want to count.");
	        return 0;
	    }
	}
    FILE *file;
    char name[10];
	char symbol;
	int count = 0;

    printf("Write filename: ");
    scanf("%s", &name);
    if ((file = fopen(name, "r")) == NULL) {
        printf("Can't open file\n");
		printf("Press Enter");
        getchar();
        return 0;
    } else {
        printf("File %s opened succesfully\n", name);
    }

	printf("Write symbol, which you want to count:  ");
    scanf("%c\n", &symbol);

	char filestring[80];

    while (fgets(filestring, sizeof(filestring), file)) {
		for (int i = 0; filestring[i] != '\0'; i++){
			if (filestring[i] == symbol){
				count++;
			}
		}
	}

	printf("Count of choosen symbol in file < %s > is equal %d.", name, count);
    fclose(file);

	return 0;
}
