#include "my.h"
//This function creates an Edge

void createEdge(Vertex* vertexP, Vertex* vertexS, Vertex* vertexList[])
{

Edge* newEdge = (Edge*)malloc(sizeof(Edge));
newEdge = vertexP->p;//new edge

Edge* prevEdge = (Edge*)malloc(sizeof(Edge));//previous edge
prevEdge = NULL;


while(newEdge != NULL)
{
 prevEdge = newEdge;
 newEdge = newEdge->e;
}


newEdge = (Edge*)malloc(sizeof(Edge));
newEdge -> v = (Vertex*)malloc(sizeof(Vertex));//create space for pointer


newEdge -> v = vertexS;//set pointer to second vertex


if(prevEdge != NULL)
{
 prevEdge->e = (Edge*)malloc(sizeof(Edge));
 prevEdge->e = newEdge;//add Edge to Linked List
}
else
{
vertexP->p = newEdge;
}

newEdge->e = (Edge*)malloc(sizeof(Edge));
newEdge->e = NULL; //set pointer to NULL


return ;

}//createEdge
