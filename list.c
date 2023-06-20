#include "lib.h"
/**
*
*
*
*/
void printlist (my_list *head)
{
    my_list* tmp = head;
    for (;tmp != NULL; tmp = tmp->next)
  {
    printf("%d->", tmp->nm);
    //tmp = tmp->next;
  }
  printf("\n");
}
int main(void)
{
 my_list n1, n2, n3;
  my_list* head;

  n1.nm = 12;
  n2.nm;
  n3.nm = 14;
  // link the list
  head = &n3;
  n3.next = &n2;
  n2.next = &n1;
  n1.next = NULL;
  printlist(head);
  return 0;
}
