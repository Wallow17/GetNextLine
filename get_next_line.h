/*
** EPITECH PROJECT, 2017
** get_next_line
** File description:
** get_next_line.h
*/

#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

typedef struct s_list {
	char c;
	struct s_list *next;
} t_list;

# ifndef READ_SIZE
#  define READ_SIZE (64)
# endif

char	*get_next_line(int);

#endif /* !GET_NEXT_LINE_H */