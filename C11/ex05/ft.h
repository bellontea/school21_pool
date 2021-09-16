#ifndef FT_H
# define FT_H

#include <unistd.h>

void	check_isspace(char **str);
int		check_sign_char(char **str);
int		convert_to_int(char **str);
int		ft_atoi(char *str);
int		check_sign(int nb);
void	reverse(char *str, int size);
void	ft_putnbr(int nb);
void	print_error(char *str);
int		plus(int num1, int num2, char *sign);
int		minus(int num1, int num2, char *sign);
int		mult(int num1, int num2, char *sign);
int		div(int num1, int num2, char *sign);
int		mod(int num1, int num2, char *sign);

#endif