#include <stdio.h>
#include "Mapper.h"
#include "Mapper.c"

int main()
{
//Input
unsigned int value = 0;
printf("Enter an unsigned integer value: ");
int returnValue = scanf("%d", &value);
//Process & Output
OutputAsHexCharacters(value);
printf("Press the enter key to continue...");
int c = getchar();
c = getchar();
return 0;
}
