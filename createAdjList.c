#include "my.h"

void createAdjList(char fileName[], Vertex *vertList[], int size_t)
{
FILE* fp;

char primV[100];
char secV[100];


//Open File and Check if exists
if(!(fp = fopen(fileName, "r")))
{
 printf("\aCould not open input");
 exit(100);
}//if


//Until EOF
while(fscanf(fp, "%s %s", primV, secV) != EOF)
{

 Vertex* temp;//create temp vertex pointer

 //Set temp to first Char grabbed
 temp = createVertex(primV[0]);

 //Does it exist already?
 if(find(primV[0], vertList, size_t))
 {
  //if yes, do nothing
 }
 else
 {
  //if no
  // hash value
  int hashVal = hashFunction(primV[0], size_t);
  //insert into array
  insertVert(vertList, size_t, temp, hashVal);
 }

 //do the same for secVertex
 temp = createVertex(secV[0]);

 //does it exist
 if(find(secV[0], vertList, size_t))
 {
  //if it does, do nothing
 }//if
 else
 {
  //vertex does not exist
  // hash value
  int hashValS = hashFunction(secV[0], size_t);
  //insert into array
  insertVert(vertList, size_t, temp, hashValS);
 }


 //create Edge
 int hashValOne = hashFunction(primV[0], size_t);
 int hashValTwo = hashFunction(secV[0], size_t);

 createEdge(vertList[hashValOne], vertList[hashValTwo], vertList);
 

}//while

//print adjList
printGraph(vertList, size_t);

return ;

}//createAdjList
