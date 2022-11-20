/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:58:54 by jflorido          #+#    #+#             */
/*   Updated: 2022/10/02 19:24:17 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de fun- ción
ft_lstmap

Prototipo
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));

Archivos a entregar
-

Parámetros
lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada
en la iteración de cada elemento de la lista.
del: un puntero a función utilizado para eliminar
el contenido de un nodo, si es necesario.

Valor devuelto
La nueva lista.
NULL si falla la reserva de memoria.

Funciones autorizadas
malloc, free

Descripción
Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta. */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*aux;

	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		aux = ft_lstnew((f)(lst->content));
		if (aux == NULL)
		{
			ft_lstclear(&aux, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, aux);
		lst = lst->next;
	}
	return (new_lst);
	free(lst);
	lst = NULL;
}
