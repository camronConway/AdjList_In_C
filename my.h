#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Vertex
{
char c;
bool isVisited;
struct Edge* p;

} Vertex;


typedef struct Edge
{
Vertex *v;
struct Edge *e;

} Edge;


Vertex* createVertex(char c);
void createEdge(Vertex* vertexP, Vertex* vertexS, Vertex* vertexList[]);
Edge* createBlankEdge();

void createAdjList(char fileName[], Vertex* vertList[], int size_t);
bool find(char key, Vertex* vertexList[], int arraySize);

int hashFunction(char c, int arraySize);
void printGraph(Vertex* vertList[], int arraySize);
void insertVert(Vertex* vertexList[], int arraySize, Vertex* v, int 
hashVal);



int main(int argc, char* argv[]);

