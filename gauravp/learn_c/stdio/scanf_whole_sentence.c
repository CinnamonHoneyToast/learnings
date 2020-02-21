#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s, str[10], sen[50];

    scanf("%c", &s);
    scanf("%s", &str);
    scanf(" %[^\n]%*c", sen);

    /*
    * Note that earlier we used to use "getchar()" method until the "\n"
    * was entered to get the sttrings with whitespaces if we were using 
    * "scanf()" functioin. But now we can use "%[^\n]%" inside the scanf 
    * which is a regular expression to accept everything until "\n" character.
    * Refer: https://stackoverflow.com/questions/40038538/how-does-scanf-n-str-work-in-c-programming
    */

    printf("%c\n%s\n%s\n", s, str, sen);
    return 0;
}
