#include "hash_tables.h"

int main(void)
{
  int key;
  char *value = NULL, *getvalue = NULL;
  FILE *data;
  FILE *found;
  ssize_t input_len;
  size_t buffer_size, value_len;
  hash_table_t *ht;

  /* open data.txt */
  data = fopen("data.txt", "a");
  if (data == NULL)
  {
    fprintf(stderr, "Failed to open file\n");
    exit(2);
  }

  /* open found.txt */
  found = fopen("found.txt", "w");
  if (found == NULL)
  {
    fprintf(stderr, "Failed to open file\n");
    exit(5);
  }

  /* create a hash table */
  ht = hash_table_create(1024);
  if (ht == NULL)
  {
    fprintf(stderr, "Failed to create hash table\n");
    exit(3);
  }

  /* randomly generate a key */
  srand(time(NULL));

  /* while loop to get input from user */
  while (1)
  {
    key = rand();
    printf("Enter the value as a string (use ctrl + d for linux to exit): ");
    buffer_size = 0; /* Reset buffer size before getline */
    input_len = getline(&value, &buffer_size, stdin);
    if (input_len == -1)
    {
      /*leave with ctrl + d*/
      if (feof(stdin))
      {
        break;
      }
      fprintf(stderr, "Failed to read input\n");
      exit(2);
    }
    value_len = strlen(value);
    if (value_len > 0 && value[value_len - 1] == '\n')
      value[value_len - 1] = '\0';

    fprintf(data, "ID: %d:\t\t%s\n", key, value);

    /* insert into the hash table */
    if (hash_table_set(ht, key, value) == -1)
    {
      fprintf(stderr, "Failed to insert into hash table\n");
      exit(4);
    }

    /* get the value for the current key and print it to found.txt */
    getvalue = hash_table_get(ht, key);
    if (value != NULL)
    {
      fprintf(found, "The value for key %d is: %s\n", key, getvalue);
    }
    else
    {
      fprintf(found, "Key %d not found in hash table\n", key);
    }

    /* free the memory allocated by getline() */
    free(value);
    /*hash_table_delete(ht);*/
  }
  /* close files */
  fclose(data);
  fclose(found);
  free(value);
  /* free the hash table */
  hash_table_delete(ht);

  return 0;
}
