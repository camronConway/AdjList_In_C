//this function finds a vertex in a vertexList
//returns true or false
#include "my.h"

bool find(char key, Vertex* vL[], int arraySize)
{
int i = 0;//counter
char temp;

for(i = 0; i < arraySize; i++)
{
 temp = vL[i]->c;
 if(temp == key)
 {
  return true;
 }
}//for
return false;

}//find
