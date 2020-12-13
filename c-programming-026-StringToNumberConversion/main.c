#include <stdio.h>
#include <stdlib.h>


int main() {
	double value = 0;
	char str[] = "3.5 2.5 1.26"; // string which will be converted
	char* pstr = str; // pointer to the string to be converted
	char* ptr = NULL; // pointer to character position after conversion
	int count = 0;

	while (str[count] != '\0') {
		value = strtod(pstr, &ptr); // convert starting at pstr
		if (pstr == ptr) { // pstr stored if no conversion
			break; // so we done
		}
		else {
			printf("%.2f\n", value); // output result value
			pstr = ptr;
		}
		++count;
	}

	return 0;
}