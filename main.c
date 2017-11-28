#include "my.h"


int main(int argc, char* argv[])
{
int vListSize = 53; //prime number bigger than 2* the number of possible characters

Vertex* vertexList[vListSize];


int i;
for(i = 0; i < vListSize; i++)
{
vertexList[i] = createVertex('*');
}

createAdjList(argv[1], vertexList, vListSize);

return 0;
}//main
