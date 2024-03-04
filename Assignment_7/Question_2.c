#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Linked_List
{
    int id;
    int priority;
    struct Linked_List *next;
};

struct Linked_List *Insert(struct Linked_List *Copy, int data, int id)
{
    struct Linked_List *Extra_Node = (struct Linked_List *)malloc(sizeof(struct Linked_List));
    Extra_Node->id = id;
    Extra_Node->priority = data;
    Extra_Node->next = Copy;
    return Extra_Node;
}

bool Search(struct Linked_List *Head_Pointer, int Find)
{
    while (Head_Pointer != NULL)
    {
        if (Head_Pointer->id == Find)
        {
            printf("%d %d\n", Find, Head_Pointer->priority);
            return true;
        }
        Head_Pointer = Head_Pointer->next;
    }
    printf("%d -1\n", Find);
    return false;
}

void Change(struct Linked_List *Head_Pointer, int Find, int Val)
{
    while (Head_Pointer != NULL)
    {
        if (Head_Pointer->id == Find)
        {
            Head_Pointer->priority = Val;
            break;
        }
        Head_Pointer = Head_Pointer->next;
    }
}
int main()
{
    char Operation;
    struct Linked_List *Head = (struct Linked_List *)malloc(sizeof(struct Linked_List));
    int Value, ID, count = 0;
    while (true)
    {
        scanf("%c", &Operation);
        if (Operation == 'E')
        {
            break;
        }
        else if (Operation == 'A')
        {

            scanf("%d", &ID);
            scanf("%d", &Value);
            if (count != 0)
            {
                Head = Insert(Head, Value, ID);
            }
            else
            {
                Head->id = ID;
                Head->priority = Value;
                Head->next = NULL;
            }

            count++;
        }
        else if (Operation == 'S')
        {
            scanf("%d", &ID);
            Search(Head, ID);
        }
        else if (Operation == 'C')
        {
            scanf("%d", &ID);
            scanf("%d", &Value);
            Change(Head, ID, Value);
        }
    }

    return 0;
}