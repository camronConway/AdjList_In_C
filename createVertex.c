#include "my.h"

//This function creates a Vertex

Vertex* createVertex(char name)
{
Vertex* v = (Vertex *)malloc(sizeof(Vertex));
v -> c = name;

v -> p = (Edge*)malloc(sizeof(Edge));
v -> p = NULL;//set edge default to NULL

return v;
}
