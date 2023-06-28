# C-libary

## strlen (String Length)

The ```strlen``` function is used to determine the length of a null-terminatedstring in characters. It takes a string as input and returns
the number of characters in the string, excluding the null character at the end.

## strcat (String Concatenation)

The ```strcat``` function is used to concatenate (join) two null-terminated strings. It takes two strings as input the destination string, which is the string that will be appended to, and the source string, which is the string that will be appended. The function appends the characters from the source string to the end of the destination string, overwriting the null character in the destination string.

## strncat (String Concatenation with Length)

The ```strncat``` function is similar to strcat but includes an additional parameter to specify the maximum number of characters to append. It takes three paramers the destination string, the source string, and the maximum number of characters to append. This function ensures that the resulting string does not exceed aspecified length.

## strlcat (String Length Concatenation)

The ```strlcat``` function is similar to strncat but provides a more secure way of concatenating strings. It takes three parameters the destination string, the sourc string, and the size of the destination buffer. It appends characters from the source string to the end of the destination string, but it also ensures thatthe resulting string does not overflow the destination buffer. This function is commonly used to avoid buffer overflow vulnerabilities when dealing with strings

## strcpy (String Copy)

The ```strcpy``` function is used to copy a null-terminated string from the source to the destination. It takes two parameters the destination string, which isthe string that will be overwritten with the contents of the source string, and the source string, which is the string to be copied. The function copies the characters from the source string to the destination string, including thenull character at the end. It replaces the existing contents of the destination string with the contents of the source string.

## strncpy (String Copy with Length)

The ```strncpy``` function is similar to strcpy but includes an additional parameter to specify the maximum number of characters to copy. It takes three parameters the destination string, the source string, and the maximum number of characters to copy. The function copies the specified number of characters from the source string to the destination string. If the length of the source string is less than the specified number of characters, the remaining characters in the printf("-> %lu elements\n", n);destination string are filled with null characters. This function is commonly used to ensure that a fixed-size buffer is not overrun during string copying.

## atoll

The ``atoll()`` function in C is used to convert a string representing a number in decimal format to its corresponding long long integer value. It is part of the standard C library <stdlib.h>. The function scans the input string until it reaches the end of the number or encounters an invalid character. It then converts the valid numeric portion of the string to its equivalent long long integer representation.

## isdigit

The ``_isdigit`` function is a variant of the isdigit function in C. It is used to determine if a given character, specified as an unsigned char, representsa decimal digit (0-9). The function returns a non-zero value if the character is a digit, and 0 otherwise. It is often used when character classification needs to be performed on unsigned characters, such as when working with ASCII or UTF-8 encoded strings. This function provides a convenient way to validate and manipulate character data in C programs that involve unsigned characters and digit recognition.

## memcpy

The ``memcpy`` is a function in C that allows you to copy a block of memory from one location to another. It takes in three parameters the destination memory block, the source memory block, and the number of bytes to copy. It performs a byte-by-byte copy of the data from the source to the destination. It is a low-level function and does not perform any checks for overlapping memory regions, so it should be used with caution to ensure that the memory addresses and sizes provided are valid.

## memccpy

The ``memccpy`` function is a standard library function in C that allows for the copying of a specified range of memory from one location to another. It is similar to the memcpy function, but with an additional feature to stop the copying process when a specific character is encountered. The function takes in four parameters the destination pointer ``dst``, the source pointer ``src``, the target character ``c``, and the size n of the memory range to be copied. It copies bytes from ``src`` to dst until it either reaches the specified size n or encounters the target character c. If the target character is found, the function returns a pointer to the next character after the match in the destination string. Otherwise, it returns NULL. The memccpy function is useful in scenarios where you need to copy a portion of a string or array until a specific character is reached.

## bzero

The ``bzero`` function is used to set a block of memory to zero. It takes two parameters a pointer to the memory block and the size of the block. It is commonly used to initialize memory buffers or reset memory regions before using them. This function is useful for security purposes when you want to clear sensitive data stored in memory.

## memcmp

The ``memcmp`` function compares two memory blocks byte by byte. It takes three parameters pointers to the two memory blocks to compare and the number of bytes to compare. The function returns an integer value indicating the relationship between the two memory blocks 0 if the blocks are equal, a negative value if the first block is less than the second, and a positive value if the first block is greater than the second. This function is commonly used for comparing data structures, such as strings or arrays.

## memset

The ``memset`` function is used to fill a block of memory with a specific value. It takes three parameters a pointer to the memory block, the value to set, and the size of the block. It is often used to initialize arrays or set specific values in a memory region. This function is useful for tasks like initializing buffers or preparing memory for certain operations.

## strdup

The ``strdup`` function creates a duplicate of a string by allocating memory and copying the contents of the original string. It takes a single parameter a pointer to the string to duplicate. The function dynamically allocates memory for the new string and copies the content of the original string into it. The returned pointer points to the newly allocated memory. It is the responsibility of the caller to free the memory when it is no longer needed. This function is commonly used when you need to create a new string with the same content as an existing string.

## strrchr

The ``strrchr`` function is used to find the last occurrence of a character in a string. It takes two parameters a pointer to the input string and the character to search for. The function searches the string from the end and returns a pointer to the last occurrence of the character or NULL if the character is not found. This function is useful when you want to determine the position of the last occurrence of a specific character within a string. It can be used, for example, to extract the file extension from a file path.

## memchr

The ``memchr`` function is a standard C library function that searches for a specific byte value within a block of memory. It takes a pointer to the memory block, the value to search for, and the number of bytes to search. It returns a pointer to the first occurrence of the byte value within the memory block, or a null pointer if the byte value is not found.

## itoa

The ``itoa`` function is a commonly used function in C programming for converting an integer to a string. It takes an integer value as input and converts it to a string representation. The resulting string contains the characters representing the digits of the integer. It may also include a sign character if the integer is negative. The itoa function typically returns a pointer to the resulting string.

## putnbr

The ``putnbr`` function is a custom function often used in programming exercises or small projects. It is responsible for printing an integer value to the standard output (console or terminal). It takes an integer as input and outputs the corresponding characters to represent the number. The ``putnbr`` function usually uses the ``putchar`` or ``printf`` functions internally to printindividual characters.

## putstr

The ``putstr`` function is another custom function that is used to output a string to the standard output. It takes a null-terminated string as input and prints each character of the string until it reaches the null character ('\0'). The ``putstr`` function typically uses the ``putchar, printf`` or ``write`` functions internally to print the individual characters.

## Linked List

### Struct

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
