#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXLENGTH 1000

int isdelimeter(char c);
enum boolean {FALSE, TRUE};

int main()
{
    char str[MAXLENGTH];
    int c, i;

    while((c = getchar()) != EOF) {
	// Read another character if the current character is one of the
	// delimit characters.
	if(!isdelimeter(c)) {
	    i = 0;
	    str[i] = c;
	    //continue reading until the character is one of the delimit
	    //characters
	    for (i = 1; (c = getchar()) != EOF && !isdelimeter(c); ++i)
		str[i] = c;
	    str[i] = '\0';
	    if (strlen(str) > 1) /* do not print single character string */
		printf("%s\n", str);
	    if (c == EOF)
		return 0;
	}
    }
    return 0;
}

int isdelimeter(char c)
{
    char *delimeters = "!\"#$%&\'\()*+`./:;<=>\?@[\\](\\.)^_{|}~,";

    if (strchr(delimeters,c) != NULL || isspace(c))
	return TRUE;
    else
	return FALSE;
}

