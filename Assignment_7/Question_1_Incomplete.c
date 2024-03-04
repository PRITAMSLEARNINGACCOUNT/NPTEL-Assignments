#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
struct Student_Result
{
    char Student_Name[100];
    int Course_Code_1;
    float Marks_1;
    int Course_Code_2;
    float Marks_2;
    int Course_Code_3;
    float Marks_3;
};
float Calculate_CGPA(struct Student_Result Copy)
{
    float Denominator = 10 + 5 + 5;
    float CGPA = (Copy.Marks_1 * 10) + (Copy.Marks_2 * 5) + (Copy.Marks_3 * 5);
    return CGPA / Denominator;
    // int i = 0;
    // for (i = 0; i < count; i++)
    // {
    //     printf("%s\n", Copy[i].Student_Name);
    //     printf("%d\n", Copy[i].Course_Code_1);
    //     printf("%.2f\n", Copy[i].Marks_1);
    //     printf("%d\n", Copy[i].Course_Code_2);
    //     printf("%.2f\n", Copy[i].Marks_2);
    //     printf("%d\n", Copy[i].Course_Code_3);
    //     printf("%.2f\n", Copy[i].Marks_3);
    // }
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
        // gets(Results->Student_Name);
        // printf("Hello World");
        // while (true)
        // {
        //     scanf("%c", &name);
        //     Results[i].Student_Name[j] = name;
        //     if (name == ' ')
        //     {
        //         break;
        //     }
        //     j++;
        // }
        // fgets(Results[i].Student_Name, 100, stdin);
        scanf("%d", &Results[i].Course_Code_1);
        scanf("%f", &Results[i].Marks_1);
        scanf("%d", &Results[i].Course_Code_2);
        scanf("%f", &Results[i].Marks_2);
        scanf("%d", &Results[i].Course_Code_3);
        scanf("%f", &Results[i].Marks_3);
    }
    // printf("%c\n", Results[0].Student_Name[0]);
    // printf("%d\n", Results[0].Course_Code_1);
    for (j = 0; j < Count; j++)
    {
        printf("%s", Results[j].Student_Name);
        printf(" %.1f", Calculate_CGPA(Results[j]));
        printf("\n");
    }

    free(Results);
    return 0;
}