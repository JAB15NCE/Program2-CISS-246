/*
Jon Bennett
10/13/2023
Description: The OutputAsHexChatacters takes the value eneter, masks it with a nibble and then prints each Character in hexadecimal base 16 value.
Specification:C Programing and the use of Bitmasking and shiftinh with hexadecimal.

*/


#include "Mapper.h"
#include <stdio.h>
void OutputAsHexCharacters(unsigned int value)
{
const int NIBBLES_PER_BYTE = 2;
const int NIBBLE_COUNT = sizeof(unsigned int) * NIBBLES_PER_BYTE;
const int BITS_PER_NIBBLE = 4;
unsigned int mask = 0xF0000000;

printf("\n");
for (int count = 0; count < NIBBLE_COUNT; count++)
{
//Gets the masked Nibble value from the user input.
unsigned int Shift = (NIBBLE_COUNT - 1 - count) * BITS_PER_NIBBLE; 
unsigned int Nibble = ((value & mask) >> Shift); 
//Prints the Hexadecimal value of each Nibble.
printf("hexadecimal character: %c\n", MapNibbleToHexCharacter(Nibble));
mask >>= BITS_PER_NIBBLE;

}
printf("\n");
}
unsigned char MapNibbleToHexCharacter(unsigned int value)
{
unsigned char lookUpTable[] = {'0', '1', '2', '3', '4', '5', '6', '7',
'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
return lookUpTable[value];
}
