#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 0, i = 0, size2 = 0;

    int count1[26] = {0};
    int count2[26] = {0};
    scanf("%d", &n);
    size2 = n;
    char *str1 = (char *)malloc(n * sizeof(char));
    char *str2 = (char *)malloc(n * sizeof(char));
    scanf("%s", str1);
    scanf("%s", str2);

    if (n != size2)
    {
        printf("0");
        free(str1);
        free(str2);
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        count1[str1[i] - 'A']++;
    }

    for (i = 0; i < n; i++)
    {
        count2[str2[i] - 'A']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("0");
            free(str1);
            free(str2);
            return 0;
        }
    }

    printf("1");
    free(str1);
    free(str2);
    return 0;
}
