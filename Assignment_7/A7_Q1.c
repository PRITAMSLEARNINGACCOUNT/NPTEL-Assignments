#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
struct Student_Result
{
    char Student_Name[100];
    int Course_Code[3];
    float Marks[3];
};
float Calculate_CGPA(struct Student_Result Copy)
{
    float Denominator=0;
    float divider=0;
    for(int i=0; i<=3; i++){
        switch (Copy.Course_Code[i])
        {
        case 1001 :
            Denominator+=10;
            divider=((Copy.Marks[i]*10)+divider);
            break;

        case 1002 :
            Denominator+=5;
            divider=((Copy.Marks[i]*5)+divider);
            break;

        case 1003 :
            Denominator+=5;
            divider=((Copy.Marks[i]*5)+divider);
        
            break;
        
        case 1004:
            Denominator+=1;
            divider=((Copy.Marks[i]*1)+divider);
            break;
        }
    }
    return divider / Denominator;
}
int main()
{
    char name;
    int Count = 0;
    scanf("%d", &Count);
    struct Student_Result *Results = (struct Student_Result *)malloc(Count * sizeof(struct Student_Result));
    int j, i;
    for (i = 0; i < Count; i++)
    {
        scanf("%s", &Results[i].Student_Name);
        scanf("%d", &Results[i].Course_Code[0]);
        scanf("%f", &Results[i].Marks[0]);
        scanf("%d", &Results[i].Course_Code[1]);
        scanf("%f", &Results[i].Marks[1]);
        scanf("%d", &Results[i].Course_Code[2]);
        scanf("%f", &Results[i].Marks[2]);
    }
    for (j = 0; j < Count; j++)
    {
        printf("%s", Results[j].Student_Name);
        printf(" %.2f", Calculate_CGPA(Results[j]));
        printf("\n");
    }

    free(Results);
    return 0;
}