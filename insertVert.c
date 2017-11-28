//inserts vertex into vertex list/array

#include "my.h"

void insertVert(Vertex* vertexList[], int arraySize, Vertex* v, int 
hashVal)
{
 int k = 0; //counter

 while(vertexList[hashVal]->c != '*')
 {
  //quadratic probe
  hashVal += (2*k+1);
  ++k; 
  //wraparound if neccessary
  hashVal %= arraySize;
 }//while
 
 vertexList[hashVal] = v;

}
