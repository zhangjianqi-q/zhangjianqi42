#include <stdio.h> 
#include <stdlib.h>


typedef int DataType;
typedef struct node {
        DataType data;	
	struct node *next;
}Node;

void initList(Node *);
int Size(Node *);
void Insert(Node *, int, DataType);
void Delete(Node *, DataType);
int Empty(Node *);
DataType GetData(Node *, DataType);
Node *Find(Node *, DataType);
void Print(Node *);
void ClearList(Node *);

