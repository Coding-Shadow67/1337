/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:39:02 by asyani            #+#    #+#             */
/*   Updated: 2024/07/17 14:02:48 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define TRUE 1

# define FALSE 0

# define EVEN(nbr) ((nbr % 2) == 0)

# define EVEN_MSG ("I have an even number of arguments.\n")

# define ODD_MSG ("I have an odd number of arguments.\n")

# define SUCCESS 0

#endif
