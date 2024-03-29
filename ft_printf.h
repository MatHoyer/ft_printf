/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:04:16 by mhoyer            #+#    #+#             */
/*   Updated: 2023/05/11 08:04:18 by mhoyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

# include "libft/libft.h"

int		ft_printf(const char *str, ...);

int		aff(const char *chaine, int taille, va_list param);

int		check_carac(char c);
int		check_carac_bonus(char c);

char	*ft_conv_b(unsigned int n, char *hexa);

char	*ft_conv_b_l(unsigned long nbr, char *base_to);

// Gere les differents cas d'affichage
int		case_c(int c);
int		case_s(char *str);
int		case_all(char *str);

#endif
