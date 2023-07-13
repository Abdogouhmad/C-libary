#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *key = NULL;
    char *value = NULL;
    FILE *data;

    data = fopen("data.txt", "w");
    if (data == NULL)
    {
        fprintf(stderr, "Failed to open file\n");
        exit(2);
    }

    key = malloc(sizeof(int));
    value = malloc(sizeof(char) * 1024);

    printf("Enter key as number: ");
    scanf("%d", key);
    printf("Enter the value as string: ");
    getchar();
    fgets(value, 1024, stdin);
  

    fprintf(data, "- %d: \t\t %s \n", *key, value);

    fclose(data);  
    free(key);
    free(value);

    return 0;
}

