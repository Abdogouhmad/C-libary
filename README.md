# C-libary
## strlen (String Length): 
The ```strlen``` function is used to determine the length of a null-terminatedstring in characters. It takes a string as input and returns 
the number of characters in the string, excluding the null character at the end.
## strcat (String Concatenation):
The ```strcat``` function is used to concatenate (join) two null-terminated strings. It takes two strings as input: the destination string, which is the string that will be appended to, and the source string, which is the string that will be appended. The function appends the characters from the source string to the end of the destination string, overwriting the null character in the destination string.
## strncat (String Concatenation with Length):
The ```strncat``` function is similar to strcat but includes an additional parameter to specify the maximum number of characters to append. It takes three paramers: the destination string, the source string, and the maximum number of characters to append. This function ensures that the resulting string does not exceed aspecified length.
## strlcat (String Length Concatenation):
The ```strlcat``` function is similar to strncat but provides a more secure way of concatenating strings. It takes three parameters: the destination string, the sourc string, and the size of the destination buffer. It appends characters from the source string to the end of the destination string, but it also ensures thatthe resulting string does not overflow the destination buffer. This function is commonly used to avoid buffer overflow vulnerabilities when dealing with strings
## strcpy (String Copy):
The ```strcpy``` function is used to copy a null-terminated string from the source to the destination. It takes two parameters: the destination string, which isthe string that will be overwritten with the contents of the source string, and the source string, which is the string to be copied. The function copies the characters from the source string to the destination string, including thenull character at the end. It replaces the existing contents of the destination string with the contents of the source string.
## strncpy (String Copy with Length):
The ```strncpy``` function is similar to strcpy but includes an additional parameter to specify the maximum number of characters to copy. It takes three parameters: the destination string, the source string, and the maximum number of characters to copy. The function copies the specified number of characters from the source string to the destination string. If the length of the source string is less than the specified number of characters, the remaining characters in the destination string are filled with null characters. This function is commonly used to ensure that a fixed-size buffer is not overrun during string copying.
## atoi
## strncpy
## isalph
## isdigit
