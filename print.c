#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *string_printer(const char *input_string){
	if (input_string ==NULL){
		return NULL;
	} else {
		size_t n = strlen(input_string) + 1;
		char *output = malloc(n);
		if (!output) return NULL;
		memcpy(output, input_string, n);
		return output;
	}
}

int main(int argc, char *argv[]){
	if (argc > 2){
		printf("Error - program takes only one positional argument\n");
		printf("Fix   - wrap strings in single quotes -> 'hello world'\n");
		return 1;
	} else if (argc <= 1){
		char empty[] = {" "};
		char *output = string_printer(empty);
		printf("%s\n", output);
		free(output);

	} else {
		char *output = string_printer(argv[1]);
		printf("%s\n", output);
		free(output);
	}
	return 0;
}
