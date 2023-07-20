#include <stdio.h>
#include <string.h>

const char hidden = '*';

void err(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	int ln = strlen(argv[1]);
	char str[ln + 1];
	for (int i = 0; i < ln; i++) {
		str[i] = hidden;
	}
	str[ln] = '\0';

	printf("%s\n", str);

	return 0;
}
