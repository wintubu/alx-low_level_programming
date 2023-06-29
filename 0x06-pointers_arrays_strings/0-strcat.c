#include <stdio.h>
#include <string.h>

int main () {

char stra[10] = "God";
char strb[12] = "First";

strcat( stra, strb);
printf("strcat( stra, strb): %s\n", stra );
return 0;
}
