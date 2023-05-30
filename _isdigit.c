#include "lib.h"
/**
* _isdigit - it check if the nm is number or sign
* @nm: arguments
* Return: either 0 if it is digit or 1 if it is not
*/
int _isdigit(int nm)
{
  if (nm >= 48 && nm <= 57)
    return (0);
  return (1);
}

