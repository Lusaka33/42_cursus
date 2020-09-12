/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 16:50:14 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/10 18:40:14 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H
# define MAXELEMENTS 1000

typedef struct	s_dict
{
	void	*elements[MAXELEMENTS];
	int		nbr;
}				t_dictionary;

t_dictionary	*ft_create_dict(void);

void			ft_destroy(t_dictionary *dict);
void			*ft_get_element_index(t_dictionary *dict, int index);
void			*ft_get_element_label(t_dictionary *dict, char *string);
int				ft_gethash(char *string);
int				ft_add_item_index(t_dictionary *dict, int index, void *item);
int				ft_add_item_label(t_dictionary *dict, char *label, void *item);
t_dictionary	ft_init_dict(void);

#endif
