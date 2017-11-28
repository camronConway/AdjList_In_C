#include "my.h"

//hashes a character value
int hashFunction(char c, int arraySize)
{
int hashVal = 0;//default

int letter = (int)c; //get char code

hashVal = letter % arraySize;

return hashVal;
}
