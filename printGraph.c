//prints graph

#include "my.h"

void printGraph(Vertex* vertList[], int arraySize)
{

int i;
char temp;
Vertex* vertTemp = (Vertex*)malloc(sizeof(Vertex));
Edge* tempEdge = (Edge*)malloc(sizeof(Edge));


printf("Vertex  Edges\n");

for(i = 0; i < arraySize; i++)
 {
  vertTemp = vertList[i];
  tempEdge = vertTemp->p;

  if(vertTemp->c != '*')
  {
   printf("%c       ", vertTemp->c);
   if(tempEdge == NULL)
   {
    printf(" ");
   }
   else
   {
    while(tempEdge != NULL)
    {
    printf("%c", tempEdge->v->c);
    if(tempEdge->e != NULL)
      printf("-> ");
    tempEdge = tempEdge->e;
    }//while
   }//else
  printf("\n");
  }//if char != *
 }//for

return;

}//printGraph
