#include "ft_list.h"
#include <stdlib.h>

t_list* ft_create_elem(void *data)
{
    t_list  *newStruct;

    newStruct = (t_list *)malloc(sizeof(t_list));
    if (newStruct)
    {
        newStruct->data = data;
        newStruct->next = NULL;
    }
    return (newStruct);
}

/*
#include <stdio.h>
int main() 
{
  t_list *newStruct;
  int x = 42;
  void *ptr = &x;
  newStruct = ft_create_elem(ptr);
  while(newStruct != NULL)
  {
    printf("%d", *(int *)newStruct->data);
    newStruct = newStruct->next;
  }
  return 0;
} 
*/