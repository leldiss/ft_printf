/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:59:27 by leldiss           #+#    #+#             */
/*   Updated: 2022/01/13 17:59:27 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdlib.h"
# include "unistd.h"
# include "stdarg.h"

typedef struct flags
{
	va_list	arg;
	int		len;
}	t_check_flag;

int		ft_printchar(t_check_flag *flag, int i);
int		ft_abs(int n);
int		count_digits(int n);
char	*ft_itoa(int n);
int		ft_strlen(char *s);
int		ft_printdigit(t_check_flag *flag, int i);
int		ft_printstr(t_check_flag *flag, int i);
int		ft_len_hex(unsigned long long n);
char	ft_small_symbol(int n);
char	ft_big_symbol(int n);
char	*ft_itoa_address(unsigned long long n);
int		ft_printaddress(t_check_flag *flag, int i);
int		ft_uns_count(unsigned int n);
char	*ft_fill_uns_itoa(char *s, unsigned int n, int len);
char	*ft_itoa_uns(unsigned int n);
int		ft_printunsigned(t_check_flag *flag, int i);
char	*ft_itoa_small_hex(unsigned int x);
int		ft_printsmallhex(t_check_flag *flag, int i);
char	*ft_itoa_big_hex(unsigned int x);
int		ft_printbighex(t_check_flag *flag, int i);
int		parsflag(const char *format, t_check_flag *flag, int i);
int		ft_printf(const char *format, ...);

#endif