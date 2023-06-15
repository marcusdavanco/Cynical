
#include <stdio.h>

int isdigit(char c);
int isalpha(char c);
int isalnum(char c);
int islower(char c);
int isupper(char c);
int isspace(char c);
char tolower(char c);
char toupper(char c);

int main()
{
    printf("toupper d = %c", toupper('d'));
    return 0;
}

int isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int isalpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int isalnum(char c)
{
    return isalpha(c) || isdigit(c);
}

int islower(char c)
{
    return (c >= 'a' && c <= 'z');
}

int isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int isspace(char c)
{
    return (c == ' ' || c == '\t'); /* Space or TAB */
}

char tolower(char c)
{
    if (isupper(c))
    {
        return c + 'a' - 'A';
    }
    else
    {
        return c;
    }
}

char toupper(char c)
{
    if (islower(c))
        return c + 'A' - 'a';
    else
        return c;
}
