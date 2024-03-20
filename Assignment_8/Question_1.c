#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Previous;
    struct Node *Next;
};

void Traversal(struct Node *Copy)
{
    while (Copy != NULL)
    {
        if (Copy->Next == NULL)
        {
            printf("%d", Copy->data);
        }
        else
        {
            printf("%d,", Copy->data);
        }
        Copy = Copy->Next;
    }
}
void Remove_Node(struct Node *Copy, int Data)
{
    while (Copy != NULL)
    {

        if (Copy->data == Data)
        {

            if (Copy->Next != NULL)
            {
                Copy->Next->Previous = Copy->Previous;
                Copy->Previous->Next = Copy->Next;
            }
            else
            {
                Copy->Previous->Next = Copy->Next;
            }

            free(Copy);
            break;
        }

        Copy = Copy->Next;
    }
}
struct Node *Append_Node(int Data, struct Node *ptr)
{
    struct Node *New_Node = (struct Node *)malloc(sizeof(struct Node));
    New_Node->Next = NULL;
    New_Node->Previous = ptr;
    ptr->Next = New_Node;
    New_Node->data = Data;
    return New_Node;
}
int main()
{
    int Node_Count = 0, i = 0, Remove_Data = 0;
    scanf("%d", &Node_Count);
    if (Node_Count <= 0)
    {
        return 0;
    }
    int *Data = (int *)malloc(Node_Count * sizeof(int));
    for (i = 0; i < Node_Count; i++)
    {
        scanf("%d", &Data[i]);
        // Create_Node(NULL,NULL,20);
    }
    struct Node *Head;
    struct Node *New_Node = (struct Node *)malloc(sizeof(struct Node));
    New_Node->Next = NULL;
    New_Node->Previous = NULL;
    New_Node->data = Data[0];
    Head = New_Node;
    for (i = 1; i < Node_Count; i++)
    {
        New_Node = Append_Node(Data[i], New_Node);
    }
    scanf("%d", &Remove_Data);
    if (Head->data == Remove_Data)
    {
        // printf("After Remove Node\n");
        Traversal(Head->Next);
        free(Head);
        return 0;
    }
    else
    {
        Remove_Node(Head, Remove_Data);
    }
    // printf("After Remove Node\n");
    Traversal(Head);
    return 0;
}