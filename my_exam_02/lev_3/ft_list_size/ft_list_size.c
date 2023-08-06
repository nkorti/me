#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
    if(!begin_list)
        return(0);
    int size = 0;
    while(begin_list)
    {
        size++;
        begin_list = begin_list->next;
    }
    return(size);
}