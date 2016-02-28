/*
** list.c for list in /home/ripoll_g/test/sudoku
** 
** Made by guillaume ripolles
** Login   <ripoll_g@epitech.net>
** 
** Started on  Sat Feb 27 13:06:35 2016 guillaume ripolles
** Last update Sun Feb 28 15:37:49 2016 pablo
*/

#include "include/my.h"

t_map	*new_elem(int i, int j, int nb)
{
  t_map	*new;

  if ((new = (t_map*)malloc(sizeof(new))) == NULL)
    return (NULL);
  if (new != NULL)
    {
      new->i = i;
      new->j = j;
      new->nb = nb;
      new->next = NULL;
    }
  return (new);
}

void	head_list(t_map **list, int i, int j, int nb)
{
  t_map *head;

  head = new_elem(i, j, nb);
  if (head != NULL)
    {
      head->next = *list;
      *list = head;
    }
}

void	insertion(t_map **list, t_map *elem)
{
  if (*list == NULL)
    {
      *list = elem;
      elem->next = NULL;
    }
  else if ((*list)->nb < elem->nb)
    insertion(&(*list)->next, elem);
  else
    {
      elem->next = *list;
      *list = elem;
    }
}

t_map	*sorting(t_map *list)
{
  t_map *cursor;
  t_map	*new;
  t_map	*tmp;

  new = NULL;
  cursor = list;
  while (cursor != NULL)
    {
      tmp = cursor->next;
      insertion(&new, cursor);
      cursor = tmp;
    }
  return (new);
}

void	clean_list(t_map **list)
{
  t_map *tmp;

  while ((tmp = *list) != NULL)
    {
      *list = (*list)->next;
      free(tmp);
    }
}
