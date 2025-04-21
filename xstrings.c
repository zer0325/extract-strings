#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXLENGTH 1000

int isdelimeter(char c);
int getStrings (char s[]);
enum boolean {FALSE, TRUE};

int main()
{

    char str[MAXLENGTH];

    while(getStrings(str) != EOF) {
	/* Disregard single character strings.
	 * Note that single character strings las a length of 2 */
	if (strlen(str) > 2)
	    printf("%s\n", str);
    }

    return 0;

}

int getStrings(char s[])
{
    int c, i = 0;

    while((c = getchar()) != EOF) {
	// Read another character if the current character is one of the
	// delimit characters.
	if(!isdelimeter(c)) {
	    s[i] = c;
	    //continue reading until the character is one of the delimit
	    //characters
	    for (i = 1; (c = getchar()) != EOF && !isdelimeter(c); ++i)
		s[i] = c;
	    s[i] = '\0';
	    return i;
	}
    }
    return EOF;
}



int isdelimeter(char c)
{
    char *delimeters = "!\"#$%&\'\()*+`./:;<=>\?@[\\](\\.)^{|}~,";

    if (strchr(delimeters,c) != NULL || isspace(c))
	return TRUE;
    else
	return FALSE;
}

