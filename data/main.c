#include "hash_tables.h"



int main(void)
{
    int key;
    char *value = NULL;
    FILE *data;
    ssize_t input_len;
    size_t buffer_size, value_len;

    data = fopen("data.txt", "a");
    if (data == NULL)
    {
        fprintf(stderr, "Failed to open file\n");
        exit(2);
    }

    srand(time(NULL));
    key = rand();

    printf("Enter the value as a string: ");

    buffer_size = 1024;
    value = malloc(sizeof(char) * buffer_size);
    if (value == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(2);
    }

    input_len = getline(&value, &buffer_size, stdin);
    if (input_len == -1)
    {
        fprintf(stderr, "Failed to read input\n");
        exit(2);
    }

    /* Remove newline character if present */
    value_len = strlen(value);
    if (value_len > 0 && value[value_len - 1] == '\n')
        value[value_len - 1] = '\0';

    fprintf(data, "- %d: \t\t %s \n", key, value);

    fclose(data);
    free(value);

    return 0;
}



