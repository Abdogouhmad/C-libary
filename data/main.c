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
    
    do
    {
        printf("Enter the value as a string (enter 'exit' to exit): ");
        buffer_size = 0;  /*Reset buffer size before getline*/
        input_len = getline(&value, &buffer_size, stdin);
        if (input_len == -1)
        {
            fprintf(stderr, "Failed to read input\n");
            exit(2);
        }
        value_len = strlen(value);
        if (value_len > 0 && value[value_len - 1] == '\n')
            value[value_len - 1] = '\0';
            
        fprintf(data, "ID: %d:\t\t%s\n", key, value);
    } while (strcmp(value, "exit") != 0);

    fclose(data);
    free(value);

    return 0;
}

