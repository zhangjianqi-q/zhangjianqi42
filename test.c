#include"list.c"

int main() {
	Node *list = (Node*)malloc(sizeof(Node));
	Insert(list, 1, 10);
	Insert(list, 1, 20);	
	Delete(list, 2);
	Insert(list, 1, 30);
	Insert(list, 1, 40);
        printf("链表的个数为： %d\n",Size(list));
                printf("%d %d %d\n", GetData(list, 1), GetData(list, 2), GetData(list, 3));
	printf("链表的第2个元素为: %d\n",GetData(list, 2));
	system("pause");
}
