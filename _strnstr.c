#include "lib.h"
/**
* _strnstr - check the string macth with the providing string given by user
* @haystack: the string or text that you are willing to search the word in
* @needle: the word you give to be looking for iside the haystack
* @range: the range of looking 
* return: NULL if the matching failed 
*/
char *_strnstr(const char *haystack, const char *needle, size_t range)
{
  size_t i, j, len_haystack, len_needle;
  /*check if the string if the string is empty or not*/
  if (*needle == '\0') return (char* )(haystack);
  /*get the lenght of both strings*/
  len_haystack = _strlen(haystack);
  len_needle = _strlen(needle);
  /*the if condition check if the needle doesn't excued the range*/
  if (len_needle > range) return (NULL);
  /**
   * if haystack strin is 13 and needle 5 then ->
   * len_haystack - len_needle would be 13 - 5 = 8 
   * it will then iterate over the string from 0 -> 7 
   * then incase it match the inner loop will work.
  */
  for (i = 0; i <= len_haystack - len_needle; i++)
  {
    j = 0;
    /**
     * haystack remain the previouse value so 
     * haystack [7 + 0 (j)]
     * is used to access the character in the haystack string that 
     * corresponds to the current position being compared with 
     * the character in the needle string at index j.
    */ 
    while (j <len_needle && haystack[i + j] == needle[j])
      j++;

    if (j == len_needle) return (char* )(&haystack[i]);
  }
return (NULL);
}

