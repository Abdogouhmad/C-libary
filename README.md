# C-libary
## strlen (String Length): 
The ```strlen``` function is used to determine the length of a null-terminatedstring in characters. It takes a string as input and returns 
the number of characters in the string, excluding the null character at the end.
## strcat (String Concatenation):
The ```strca``` function is used to concatenate (join) two null-terminated strings. It takes two strings as input: the destination string, which is the string that will be appended to, and the source string, which is the string that will be appended. The function appends the characters from the source string to the end of the destination string, overwriting the null character in the destination string.
## strncat (String Concatenation with Length):
The ```strnca``` function is similar to strcat but includes an additional parameter to specify the maximum number of characters to append. It takes three paramers: the destination string, the source string, and the maximum number of characters to append. This function ensures that the resulting string does not exceed aspecified length.
## strlcat (String Length Concatenation):
The ```strlcat``` function is similar to strncat but provides a more secure way of concatenating strings. It takes three parameters: the destination string, the sourc string, and the size of the destination buffer. It appends characters from the source string to the end of the destination string, but it also ensures thatthe resulting string does not overflow the destination buffer. This function is commonly used to avoid buffer overflow vulnerabilities when dealing with strings
## strcpy
## strncpy 
## strlcat
## atoi
## strncpy
## isalph
## isdigit
