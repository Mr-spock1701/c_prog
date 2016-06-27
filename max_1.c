#include <stdio.h>
#define MAXLINE 1000	/* maximum input line length */

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print arbitrary long input lines */
int main()
{
	int len;		/* current line length */
	int arbit;		/* arbitrary length */
	char line[MAXLINE];		/* current input line */
	char same[MAXLINE];		/* same line by length saved here */

	arbit = 0;
	while ((len = mygetline(line, MAXLINE)) > 0) 
		if (len = arbit) {
			copy(same, line);	
		}
	
	if (arbit > 0)	/* there was a line */
		printf("%s %d\n", same, arbit);
	return 0;
}

/* getline: read a line into s, return length */
int mygetline(char s[], int lim)
{
	int c, i;

	for (i=0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
			++i;
}
