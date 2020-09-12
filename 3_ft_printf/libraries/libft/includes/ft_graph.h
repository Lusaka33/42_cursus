/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 16:50:33 by adrossig          #+#    #+#             */
/*   Updated: 2020/06/22 13:05:26 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GRAPH_H
# define FT_GRAPH_H

# ifndef SIZE
#  define SIZE 40
# endif

/*
** Assume max size of graph is 40 nodes
*/

struct			s_queue
{
	int items[SIZE];
	int front;
	int rear;
}				t_queue;

/*
** Structure to create a graph node
*/
struct			s_node
{
	int				vertex;
	struct t_node	*next;
}				t_node;

/*
** Graph data structure
*/
struct			s_graph
{
	int				num_vertices;
	struct t_node	**adj_lists;
	int				*visited;
	int				**edges;
}				t_graph;

struct t_queue	*ft_create_queue();
struct t_node	*ft_create_node(int v);
struct t_graph	*ft_create_graph(int vertices);
int				ft_is_empty(struct t_queue *queue);
int				ft_dequeue(struct t_queue *queue);
int				ft_poll_queue(struct t_queue *queue);
void			ft_display(struct t_queue *queue);
void			ft_print_graph(struct t_graph *graph);
void			ft_enqueue(struct t_queue *queue, int value);
void			ft_bfs(struct t_graph *graph, int start_vertex);
void			ft_add_edge(struct t_graph *graph, int src, int dest);

#endif
