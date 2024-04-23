#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list *next;
	void *data;
}	t_list;

#include <stdlib.h>
t_list	*ft_create_elem(void *data)
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

#endif
