#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[50];
    char f[100];
   
    scanf("%c", &ch);
    scanf("%s",s);
    getchar();
    scanf("%[^\n]%*c", f);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", f);
    return 0;
}

