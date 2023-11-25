#include <stdio.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_put_arr_int(int* tab, int size) {
	int i;
	i = 0;

	while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}


void ft_putstr(char* str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int ft_strlen(char* str) {
	int index;

	index = 0;
	while (*str)
	{
		++str;
		index++;
	}
	return (index);
}


//C00 ex07
#pragma region ft_putnbr
//void ft_putchar(char c) {
//	write(1, &c, 1);
//}
//
//void ft_putnbr(int nb) {
//	if (nb < 0) {
//		ft_putchar('-');
//		nb *= -1;
//		ft_putnbr(nb);
//	}
//	else if (nb > 9) {
//		ft_putnbr(nb / 10);
//		ft_putnbr(nb % 10);
//	}
//	else
//		ft_putchar(nb + 48);
//}
//
//int main(void) {
//	int i;
//	i = 12;
//
//	ft_putnbr(i);
//
//	return(0);
//}
#pragma endregion
#pragma region ArrayFantasy
//void ft_writeArray(int array[]) {
//
//	int index;
//	index = 0;
//
//	while (array[index] != '\0')
//	{
//		int i;
//
//		i = array[index];
//
//		ft_putchar(i + 48);
//
//		index++;
//	}
//}

//void ft_putnbr(int nb) {
//	int array[11];
//
//	if (nb < 0) {
//		ft_putchar('-');
//		nb *= -1;
//	}
//
//	int index;
//	index = 10;
//
//	while (nb != '\0' && index >= 0)
//	{
//		array[index] = nb % 10;
//
//		nb = nb - (nb % 10);
//
//		index--;
//	}
//
//	ft_writeArray(array);
//}
#pragma endregion

//C01
#pragma region ft_ft
//void ft_ft(int *nbr) {
//	*nbr = 42;
//}
#pragma endregion
#pragma region ft_ultimate_ft
//void ft_ultimate_ft(int********* nbr) {
//	*********nbr = 42;
//}
//
//
//int main(void) {
//	int n;
//	int *nbr;
//	int **nbr1;
//	int ***nbr2;
//	int ****nbr3;
//	int *****nbr4;
//	int ******nbr5;
//	int *******nbr6;
//	int ********nbr7;
//	int *********nbr8;
//
//	n = 21;
//
//	nbr = &n;
//	nbr1 = &nbr;
//	nbr2 = &nbr1;
//	nbr3 = &nbr2;
//	nbr4 = &nbr3;
//	nbr5 = &nbr4;
//	nbr6 = &nbr5;
//	nbr7 = &nbr6;
//	nbr8 = &nbr7;
//
//	ft_ultimate_ft(nbr8);
//
//	printf("%d", n);
//
//	return(0);
//}
#pragma endregion
#pragma region ft_swap
//void ft_swap(int* a, int* b) {
//	int temp;
//
//	temp = *a;
//
//	*a = *b;
//	*b = temp;
//}
#pragma endregion
#pragma region  ft_div_mod
//void ft_div_mod(int a, int b, int* div, int* mod) {
//	*div = a / b;
//	*mod = a % b;
//}
#pragma endregion
#pragma region ft_ultimate_div_mod
//void ft_ultimate_div_mod(int *a, int *b) {
//	int temp;
//
//	temp = *a / *b;
//	*b = *a % *b;
//	*a = temp;
//}
#pragma endregion
#pragma region ft_putstr
//void ft_putstr(char* str)
//{
//	while (*str)
//		write(1, str++, 1);
//	write(1, "\n", 1);
//}
#pragma endregion
#pragma region ft_strlen
//int	ft_strlen(char* str)
//{
//	int	result;
//
//	result = 0;
//	while (*str)
//		result++;
//	return (result);
//}
#pragma endregion
#pragma region ft_rev_int_tab
//void	ft_put_arr_int(int* tab, int size) {
//	int i;
//	i = 0;
//
//	while (i < size)
//	{
//		ft_putchar(tab[i] + '0');
//		i++;
//	}
//}
//
//
//void ft_rev_int_tab(int* tab, int size) {
//	int index;
//	char temp;
//
//	index = - 1;
//	while (++index < size)
//	{
//		temp = tab[size];
//		tab[size] = tab[index];
//		tab[index] = temp;
//		size--;
//	}
//}
//
//int main(void) {
//	int	tab[] = { 1,2,3,4,5 };
//
//	ft_rev_int_tab(tab, 5);
//
//	ft_put_arr_int(tab, 5);
//	ft_putchar('\n');
//
//	return (0);
//}
#pragma endregion
#pragma region ft_sort_int_tab
//void ft_putchar(char c) {
//	write(1, &c, 1);
//}
//
//void	ft_put_arr_int(int* tab, int size) {
//	int i;
//	i = 0;
//
//	while (i < size)
//	{
//		ft_putchar(tab[i] + '0');
//		i++;
//	}
//}
//
//
//void ft_sort_int_tab(int* tab, int size) {
//	int index;
//	int temp;
//
//	while (size >= 0)
//	{
//		index = 0;
//		while (index < size - 1)
//		{
//			if (tab[index] > tab[index + 1]) {
//				temp = tab[index];
//				tab[index] = tab[index + 1];
//				tab[index + 1] = temp;
//			}
//			index++;
//		}
//		size--;
//	}
//
//}
//
//int main(void) {
//	int	tab[] = { 1,2,3,4,5 };
//
//	ft_rev_int_tab(tab, 5);
//
//	ft_put_arr_int(tab, 5);
//	ft_putchar('\n');
//
//	return (0);
//}
#pragma endregion




//C02
#pragma region ft_strcpy
//char* ft_strcpy(char* dest, char* src)
//{
//	while (*src)
//	{
//		*dest = *src;
//		src++;
//	}
//	return dest;
//}
#pragma region naive_way
//void	ft_putstr(char* str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i]) {
//		write(1, &str[i], 1);
//		i++;
//	}
//}
//
//
//char* ft_strcpy(char* dest, char* src) {
//	int index;
//
//	index = 0;
//
//	while (src[index] != '\0')
//	{
//		dest[index] = src[index];
//
//		index++;
//	}
//	dest[index] = "\0";
//	return (dest);
//}
//
//
//
//int main(void) {
//	char dest[11];
//	char src[] = { "furkan bilal\n" };
//
//	ft_putstr(ft_strcpy(&dest, &src));
//
//	return (0);
//}
#pragma endregion
#pragma endregion
#pragma region ft_strncpy
//void	ft_putstr(char* str)
//{
//	int	i;
//
//	i = 0;
//	while (*(str + i))
//		i++;
//	write(1, str, i);
//}
//
//
//char* ft_strncpy(char* dest, char* src, unsigned int n) {
//	unsigned int index;
//
//	index = 0;
//	while (src[index] != '\0' && index < n)
//	{
//		dest[index] = src[index];
//
//		index++;
//	}
//	while (dest[index] != '\0' && index < n)
//	{
//		dest[index] = '\0';
//		index++;
//	}
//
//	return(dest);
//}
//
//
//
//int main(void) {
//	char dest[12];
//	char src[] = { "furkan bilal\n" };
//
//	ft_putstr(ft_strncpy(&dest, &src, 12));
//
//	return (0);
//}
#pragma endregion
#pragma region ft_Str_is_alpha
//int		ft_str_is_alpha(char* str)
//{
//	int	index;
//	char c;
//
//	index = 0;
//	while (str[index])
//	{
//		c = str[index];
//		if (!(c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
//			return (0);
//		index++;
//	}
//	return (1);
//}
// 
//int 	main(void)
//{
//	char	c[] = "asfasafasasdgasdmv";
//	char	ch[] = "asfasafa1sasdgasdmv";
//
//	ft_putnbr(ft_str_is_alpha(&c));
//	ft_putchar('\n');
//	ft_putnbr(ft_str_is_alpha(&ch));
//	return (0);
//}
#pragma endregion
#pragma region ft_str_is_lowercase
//int ft_lowercase(char* str) {
//	while (*str) {
//		if (!((*str >= 'a') && (*str <= 'z')))
//			return (0);
//		++str;
//	}
//	return (1);
//}
//int 	main(void)
//{
//	char	c[] = "furkanbilal";
//	char	ch[] = "furkAnbilal";
//
//	ft_putnbr(ft_str_is_lowercase(&c));
//	ft_putchar('\n');
//	ft_putnbr(ft_str_is_lowercase(&ch));
//	return (0);
//}
#pragma endregion
#pragma region ft_str_is_uppercase
//int ft_str_is_alpha(char* str) {
//	while (*str) {
//		if (!((*str >= 'A' && *str <= 'Z')))
//			return (0);
//		++str;
//	}
//	return (1);
//}
//
//
//
//
//int 	main(void)
//{
//	char	c[] = "FURKANBILAL";
//	char	ch[] = "FURKaNBILAL";
//
//	ft_putnbr(ft_str_is_uppercase(&c));
//	ft_putchar('\n');
//	ft_putnbr(ft_str_is_uppercase(&ch));
//	return (0);
//}
#pragma endregion
#pragma region ft_str_is_printable
//int ft_str_is_alpha(char* str) {
//	while (*str) {
//		if (!((*str >= 33 && *str <= 126)))
//			return (0);
//		++str;
//	}
//	return (1);
//}
//
//
//
//
//int 	main(void)
//{
//	char	c[] = "FURKANBILAL";
//	char	ch[] = "FURKaNBILAあ";
//
//	ft_putnbr(ft_str_is_printable(&c));
//	ft_putchar('\n');
//	ft_putnbr(ft_str_is_printable(&ch));
//	return (0);
//}
#pragma endregion
#pragma region ft_strupcase
//char* ft_strupcase(char* str)
//{
//	int	index;
//
//	index = 0;
//	while (str[index])
//	{
//		if (str[index] >= 'a' && str[index] <= 'z') {
//			str[index] -= 32;
//		}
//		index++;
//	}
//	return (str);
//}
//
//
//
//
//int 	main(void)
//{
//	char	c[] = "furkanbilal";
//	char	ch[] = "FURKaNBILAあ";
//
//	ft_putstr(ft_strupcase(c));
//	return (0);
//}
#pragma endregion
#pragma region ft_strlowcase
//char* ft_strlowcase(char* str)
//{
//	int	index;
//
//	index = 0;
//	while (str[index])
//	{
//		if (str[index] >= 'A' && str[index] <= 'Z') {
//			str[index] += 32;
//		}
//		index++;
//	}
//	return (str);
//}
//
//
//
//
//int 	main(void)
//{
//	char	c[] = "furkanbilal";
//	char	ch[] = "FURKaNBILAあ";
//
//	ft_putstr(ft_strlowcase(c));
//	return (0);
//}
#pragma endregion
#pragma region ft_strcapitalize
//char* ft_strlowcase(char* str)
//{
//	int	index;
//
//	index = 0;
//	while (str[index])
//	{
//		if (str[index] >= 'A' && str[index] <= 'Z') {
//			str[index] += 32;
//		}
//		index++;
//	}
//	return (str);
//}
//
//char* ft_strcapitalize(char* str)
//{
//	int		i;
//	int		boolean;
//
//	i = 0;
//	boolean = 1;
//	ft_strlowcase(str);
//	while (str[i] != '\0')
//	{
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			if (boolean == 1)
//				str[i] -= 32;
//			boolean = 0;
//		}
//		else if (str[i] >= '0' && str[i] <= '9')
//			boolean = 0;
//		else
//			boolean = 1;
//		i++;
//	}
//	return (str);
//}
#pragma endregion
#pragma region ft_strlcpy
//unsigned int ft_strlcpy(char* dest, char* src, unsigned int size) {
//	int index;
//
//	index = 0;
//	size -= 1;
//	while (src[index] && (index < size)) {
//		dest[index] = src[index];
//		index++;
//	}
//	dest[index] = '\0';
//	return (index);
//}
#pragma endregion


//C03
#pragma region ft_strcmp
#pragma region same but returns the ASCII interval
//int	ft_strcmp(char* s1, char* s2) {
//	while (*s1 && (*s1 == *s2)) {
//		s1++;
//		s2++;
//	}
//	return (*s1 - *s2);
//}
#pragma endregion

//int ft_strcmp(char* s1, char* s2) {
//	int index;
//
//	index = 0;
//
//	while (s1[index] || s2[index]) {
//		if (s1[index] < s2[index]) {
//			return(-1);
//		}
//		else if (s1[index] > s2[index]) {
//			return (1);
//		}
//		index++;
//	}
//	return (0);
//}
#pragma endregion
#pragma region ft_strncmp
//int ft_strncmp(char* s1, char* s2, unsigned int n) {
//	unsigned int index;
//	index = 0;
//
//	while ((index <= n) && (s1[index] && s2[index])) {
//		if (s1[index] < s2[index]) {
//			return (-1);
//		}
//		else if (s1[index] > s2[index]) {
//			return (1);
//		}
//		index++;
//	}
//	return (0);
//}
#pragma endregion
#pragma region ft_strcat
//char* ft_strcat(char* dest, const char* src) {
//	int index;
//	int size;
//
//	index = 0;
//	size = 0;
//	while (dest[size])
//		size++;
//	while (src[index]) {
//		dest[size] = src[index];
//		size++;
//		index++;
//	}
//	dest[size] = '\0';
//	return (dest);
//}
#pragma endregion
#pragma region ft_strncat
//char* ft_strncat(char* dest, const char* src, unsigned int nb) {
//	int index;
//	int size;
//
//	index = 0;
//	size = 0;
//	while (dest[size])
//		size++;
//	while (src[index] && index < nb) {
//		dest[size] = src[index];
//		size++;
//		index++;
//	}
//	dest[size] = '\0';
//	return (dest);
//}
#pragma endregion
#pragma region ft_strstr
//char* ft_strstr(char* str, char* to_find) {
//	int	index;
//	int	index1;
//
//	index = 0;
//	if (to_find[0] == '\0')
//		return (str);
//	while (str[index])
//	{
//		index1 = 0;
//		while (str[index + index1] == to_find[index1] && str[index + index1])
//		{
//			if (to_find[index1 + 1] == '\0')
//				return (str + index);
//			index1++;
//		}
//		index++;
//	}
//	return ((void*)0);
//}
//int main(void)
//{
//	char c[] = "HelloWorld";
//	char ch[] = "H";
//	char* ptr = ft_strstr(c, ch);
//	printf("%d", ptr[0]);
//	return 0;
//}
#pragma endregion
#pragma region ft_strlcat
//unsigned int ft_strlcat(char* dest, char* src, unsigned int size) {
//	int index;
//	int dest_size;
//
//	index = 0;
//	dest_size = 0;
//	while (dest[dest_size])
//		dest_size++;
//	while (src[index] && (dest_size < (size - 1))) {
//		dest[dest_size] = src[index];
//		dest_size++;
//		index++;
//	}
//	dest[dest_size] = '\0';
//	printf("%s", dest);
//	return (dest_size);
//}
//
//
//int main(void)
//{
//	char c[] = "Hello";
//	char ch[] = "World";
//	unsigned int result = ft_strlcat(c, ch, 11);
//	printf("%d", result);
//	return 0;
//}
#pragma endregion

//C04
#pragma region ft_strlen
//int ft_strlen(char* str) {
//	int index;
//
//	index = 0;
//	while (str[index])
//		index++;
//	return (index);
//}
#pragma endregion
#pragma region ft_putstr
//void ft_putstr(char* str)
//{
//	int index;
//
//	index = 0;
//	while (str[index])
//	{
//		write(1, &str[index], 1);
//		index++;
//	}
//}
#pragma endregion
#pragma region ft_putnbr
//void ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
//
//void ft_putnbr(int nb)
//{
//	if (nb < 0)
//	{
//		ft_putchar('-');
//		nb *= -1;
//		ft_putnbr(nb);
//	}
//	else if (nb > 9)
//	{
//		ft_putnbr(nb / 10);
//		ft_putnbr(nb % 10);
//	}
//	else
//		ft_putchar(nb + 48);
//}
#pragma endregion
#pragma region ft_atoi
//int	ft_atoi(char* str) {
//	int parity;
//	int result;
//
//
//	parity = 0;
//	result = 0;
//	while ((*str >= 9 && *str <= 13) || *str == 32)
//	{
//		++str;
//	}
//	while (*str == '+' || *str == '-')
//	{
//		if (*str == '-')
//			parity++;
//		++str;
//	}
//	while (*str >= 48 && *str <= 57)
//	{
//		result *= 10;
//		result += *str - 48;
//		++str;
//	}
//	if (parity % 2)
//		return (-result);
//	return (result);
//}
#pragma endregion
#pragma region ft_putnbr_base
//void ft_putchar(char c) {
//	write(1, &c, 1);
//}
//
//void print_nbr(int n, int base_value, char* symbols) {
//	long n_long;
//
//	n_long = n;
//	if (n_long < 0) {
//		n_long *= -1;
//		ft_putchar('-');
//	}
//	if (n_long >= base_value)
//		print_nbr(n_long / base_value, base_value, symbols);
//	ft_putchar(symbols[nLong % base_value]);
//}
//
//int	double_char(char* symbols) {
//	int	index;
//	int	index1;
//
//	index = 0;
// //*(symbols + index) and symbols[index] are the same thing since the pointer always points to the first charater of the array if we don't increment it,
// // which we don't in this loop.
//	while (*(symbols + index)) {
//		index1 = index + 1;
//		while (*(symbols + index1)) {
//			if (*(symbols + index) == *(symbols + index1))
//				return 1;
//			index1++;
//		}
//		index++;
//	}
//	return (0);
//}
//
//void	ft_putnbr_base(int nbr, char* base)
//{
//	int	base_value;
//
//	base_value = 0;
//	while (base[base_value])
//	{
//		if (base[base_value] == '+' || base[base_value] == '-')
//			return;
//		++base_value;
//	}
//	if (base_value < 2)
//		return;
//	if (doubleChar(base))
//		return;
//	printNbr(nbr, baseValue, base);
//}
#pragma endregion
#pragma region ft_atoi_base
//int	doubleChar(char* symbols) {
//	int	index;
//	int	index1;
//
//	index = 0;
//	while (*(symbols + index)) {
//		index1 = index + 1;
//		while (*(symbols + index1)) {
//			if (*(symbols + index) == *(symbols + index1))
//				return 1;
//			index1++;
//		}
//		index++;
//	}
//	return (0);
//}
//
//int	ft_atoi(char* str) {
//	int parity;
//	int result;
//
//
//	parity = 0;
//	result = 0;
//	while ((*str >= 9 && *str <= 13) || *str == 32)
//	{
//		++str;
//	}
//	while (*str == '+' || *str == '-')
//	{
//		if (*str == '-')
//			parity++;
//		++str;
//	}
//	while (*str >= 48 && *str <= 57)
//	{
//		result *= 10;
//		result += *str - 48;
//		++str;
//	}
//	if (parity % 2)
//		return (-result);
//	return (result);
//}
//
//int calcNbr(int nbr, int baseValue, char* base) {
//	long nLong;
//	int result;
//
//	result = 1;
//	nLong = nbr;
//	if (nLong < 0) {
//		nLong *= -1;
//		result *= -1;
//	}
//	if (nLong >= baseValue)
//		calcNbr(nLong / baseValue, baseValue, base);
//	result = base[nLong % baseValue];
//	return (result);
//}
//
//int ft_atoi_base(char* str, char* base) {
//	int nbr = ft_atoi(str);
//	int	baseValue;
//
//	baseValue = 0;
//	while (base[baseValue])
//	{
//		if (base[baseValue] == '+' || base[baseValue] == '-')
//			return (0);
//		++baseValue;
//	}
//	if (doubleChar(base))
//		return (0);
//	return(calcNbr(nbr, baseValue, base));
//}
#pragma endregion

//C05
#pragma region ft_iterative_factorial
//int	ft_iterative_factorial(int nb)
//{
//	int result;
//
//	result = 1;
//	while (!(nb == 1))
//	{
//		result *= nb;
//		nb--;
//	}
//	if (nb < 0)
//		return (0);
//	return (result);
//}
#pragma endregion
#pragma region ft_recursive_factorial
//int	ft_recursive_factorial(int nb)
//{
//	if (nb == 0)
//		return (1);
//	else if (nb < 0)
//		return (0);
//	return (nb * ft_iterative_factorial(nb - 1));
//}
#pragma endregion
#pragma region ft_iterative_power
//int	ft_iterative_power(int nb, int power)
//{
//	int result;
//
//	result = 1;
//	if (nb < 0 || power < 0)
//		return (0);
//	else if (power == 0)
//		return (1);
//	while (power > 0)
//	{
//		result *= nb;
//		power--;
//	}
//	return (result);
//}
#pragma endregion
#pragma region ft_recursive_power
//int	ft_recursive_power(int nb, int power)
//{
//	if (nb < 0 || power < 0)
//		return (0);
//	else if (power == 0)
//		return (1);
//	return (nb * ft_recursive_power(nb, power - 1));
//}
#pragma endregion
#pragma region ft_sqrt
//int ft_sqrt(int nb) {
//	int	index;
//
//	index = 1;
//	while ((index * index) < nb)
//		index++;
//	if ((index * index) == nb)
//		return (index);
//	return (0);
//}
#pragma endregion
#pragma region ft_is_prime
//int		ft_is_prime(int nb)
//{
//	int index;
//
//	if (nb < 2)
//		return (0);
//	index = 2;
//	while (index <= (nb / 2))
//	{
//		if ((nb % index) == 0)
//			return (0);
//		index++;
//	}
//	return (1);
//}
#pragma endregion
#pragma region ft_find_next_prime
//int		ft_is_prime(int nb)
//{
//	int index;
//
//	if (nb < 2)
//		return (0);
//	index = 2;
//	while (index <= (nb / 2))
//	{
//		if ((nb % index) == 0)
//			return (0);
//		index++;
//	}
//	return (1);
//}
//
//int		ft_find_next_prime(int nb)
//{
//	nb++;
//	while (!ft_is_prime(nb))
//		nb++;
//	return (nb);
//}
#pragma endregion

//C06
#pragma region ft_print_program_name
//void	ft_putchar(char* c) {
//	write(1, &c, 1);
//}
//
//int	main(int argc, char* argv[]) {
//	int index;
//
//	index = 0;
//	if (argc > 0) {
//		while (argv[0][index]) {
//			ft_putchar(argv[0][index]);
//			index++;
//		}
//	}
//	ft_putchar("\n");
//	return (0);
//}
#pragma endregion
#pragma region ft_print_params
#pragma region pro_way
//void putstr(char* str) {
//	while (*str)
//		write(1, str++, 1);
//	write(1, "\n", 1);
//}
//
//int	main(int argc, char** argv) {
//	while (*(++argv)) {
//		putstr(*argv);
//	}
//}
#pragma endregion
#pragma region naive_way
//void	ft_putchar(char* c) {
//	write(1, &c, 1);
//}
//
//int	main(int argc, char* argv[]) {
//	int argvIndex;
//	int argcIndex;
//
//	argcIndex = 1;
//	while (argcIndex < argc) {
//		argvIndex = 0;
//		while (argv[argcIndex][argvIndex]) {
//			ft_putchar(argv[argcIndex][argvIndex]);
//			argvIndex++;
//		}
//		ft_putchar("\n");
//		argcIndex++;
//	}
//	return (0);
//}
#pragma endregion
#pragma endregion
#pragma region ft_rev_params
#pragma region Initial thought
//void	ft_putchar(char* c) {
//	write(1, &c, 1);
//}
//
//int	main(int argc, char* argv[]) {
//	int argvIndex;
//	int argcIndex;
//
//	if (argc > 1) {
//		argcIndex = argc - 1;
//		while (argcIndex > 0) {
//			argvIndex = 0;
//			while (argv[argcIndex][argvIndex]) {
//				ft_putchar(argv[argcIndex][argvIndex]);
//				argvIndex++;
//			}
//			ft_putchar("\n");
//			argcIndex--;
//		}
//	}
//	return (0);
//}
#pragma endregion
//void	ft_putstr(char* str)
//{
//	while (*str)
//		write(1, str++, 1);
//	write(1, "\n", 1);
//}
//
//int main(int argc, char** argv)
//{
//	while (--argc)
//		ft_putstr(*(argv + argc));
//}
#pragma endregion
#pragma region ft_sort
//void ft_putstr(char *str)
//{
//	while (*str)
//		write(1, str++, 1);
//	write(1, "\n", 1);
//}
//
//void ft_swap(char** s1, char** s2)
//{
//	char* tmp;
//
//	tmp = *s1;
//	*s1 = *s2;
//	*s2 = tmp;
//}
//
//int	ft_strcmp(char *s1, char *s2)
//{
//	while (*s1 == *s2 && *s1)
//	{
//		++s1;
//		++s2;
//	}
//	return (*s1 - *s2);
//}
//
//void	ft_sort_params(char **argv, int args)
//{
//	int argIndex, argcIndex, length;
//
//	length = args;
//
//	//length - 1 or length??
//	while (length - 1)
//	{
//		argIndex = 0;
//		argcIndex = 1;
//		while (argcIndex < length)
//		{
//			if (ft_strcmp(argv[argIndex], argv[argcIndex] > 0))
//				ft_swap(&argv[argIndex], &argv[argcIndex]);
//			argIndex++;
//			argcIndex++;
//		}
//		length--;
//	}
//}
//
//int main(int argc, char** argv)
//{
//	ft_sort(argv + 1, argc - 1);
//
//	while (*(++argv))
//		ft_putstr(*argv);
//}
#pragma endregion


//C07
#pragma region ft_strdup
//#include <stdlib.h>
//
//char* ft_strdup(char* src)
//{
//	char* p;
//	char* start_of_p;
//	int length;
//
//	length = 0;
//	while (src[length])
//		length++;
//	p = malloc(length + 1);
//	if (!p)
//		return NULL;
//	start_of_p = p;
//	while (*src)
//		*p++ = *src++;
//	*p = '\0';
//	return start_of_p;
//}
//
//int main(void)
//{
//	char src[] = "Furkan";
//	char* pointer = "Bilal";
//	printf("The value of the original string:%s\n", src);
//	printf("The value of the original pointer:%s\n", pointer);
//	pointer = ft_strdup(src);
//	printf("Value of the pointer after the copy:%s\n", pointer);
//	return 0;
//}
#pragma endregion
#pragma region ft_range
#pragma region first_sokution
//#include <stdlib.h>
//
//int* ft_range(int min, int max)
//{
//	int index;
//	int* array;
//
//	index = 0;
//	if (min >= max)
//		return ((void*)0);
//	if (min < 0)
//		array = malloc(sizeof(int) * (max + (min * -1)) + 1);
//	else
//		array = malloc(sizeof(int) * (max - min) + 1);
//	while (min < max)
//		array[index++] = min++;
//	return (array);
//}
//
//int main(void)
//{
//	int* array = ft_range(-10000, 10000);
	//if (array == NULL)
	//	return (0);
	//while (*array != 9999)
	//	printf("%d, ", *array++);
//	return 0;
//}
#pragma endregion
//#include <stdlib.h>
//
//int* ft_range(int min, int max)
//{
//	int index;
//	int* array;
//
//	index = 0;
//	if (min > max)
//		return ((void*)0);
//	if (min < 0)
//		array = malloc(sizeof(int) * (max + (min * -1)) + 1);
//	else
//		array = malloc(sizeof(int) * (max - min) + 1);
//	while (min < max)
//		array[index++] = min++;
//	return (array);
//}
#pragma endregion
#pragma region ft_ultimate_range
//int ft_ultimate_range(int** range, int min, int max)
//{
//	int index;
//	int size;
//	index = 0;
//
//	if (min >= max)
//		return (0);
//	size = max - min;
//	*range = malloc(sizeof(int) * size);
//	if (*range == NULL)
//		return (-1);
//	while (index < size)
//	{
//		*range[index] = min++;
//		index++;
//	}
//	return (size);
//}
#pragma endregion
#pragma region ft_strjoin
//#include <stdlib.h>
//#include <stdio.h>
//
//int	ft_str_length(char* str)
//{
//	int	index;
//
//	index = 0;
//	while (*str)
//	{
//		++str;
//		index++;
//	}
//	return (index);
//}
//
//char* ft_strcpy(char* dest, char* src)
//{
//	int	index;
//
//	index = 0;
//	while (src[index])
//	{
//		dest[index] = src[index];
//		index++;
//	}
//	dest[index] = '\0';
//	return (dest);
//}
//
//int	ft_compute_full_length(char** strings, int size, int sep_length)
//{
//	int	full_length;
//	int	index;
//
//	full_length = 0;
//	index = 0;
//	while (index < size)
//	{
//		full_length += ft_str_length(strings[index]);
//		full_length += sep_length;
//		index++;
//	}
//	full_length -= sep_length;
//	return (full_length);
//}
//
//char* ft_strjoin(int size, char** strs, char* sep)
//{
//	int		full_length;
//	int		index;
//	char* array;
//	char* start_of_array;
//
//	if (!size)
//		return (malloc(1));
//
//	full_length = ft_compute_full_length(strs, size, ft_str_length(sep));
//	array = malloc(full_length + 1);
//	start_of_array = array;
//
//	if (!start_of_array)
//		return (0);
//
//	index = 0;
//	while (index < size)
//	{
//		ft_strcpy(start_of_array, strs[index]);
//		start_of_array += ft_str_length(strs[index]);
//		if (index < size - 1)
//		{
//			ft_strcpy(start_of_array, sep);
//			start_of_array += ft_str_length(sep);
//		}
//		index++;
//	}
//	*start_of_array = '\0';
//	return (array);
//}
//
//int	main(void)
//{
//	char** strs;
//	char* separator;
//	char* result;
//
//	strs = malloc(3);
//	strs[0] = malloc(6);
//	strs[1] = malloc(5);
//	strs[2] = malloc(5);
//
//	ft_strcpy(strs[0], "Furkan");
//	ft_strcpy(strs[1], "Bilal");
//	ft_strcpy(strs[2], "Yigit");
//	separator = ", ";
//
//	result = ft_strjoin(3, strs, separator);
//	printf("%s\n", result);
//	free(result);
//}
#pragma endregion


//C08
#pragma region ft.h
//#ifndef __FT_H
//# define __FT_H
//
//void	ft_putchar(char c);
//void	ft_swap(int* a, int* b);
//void	ft_putstr(char* str);
//int	ft_strlen(char* str);
//int	ft_strcmp(char* s1, char* s2);
//
//#endif
#pragma endregion
#pragma region ft_boolean.h
//#ifndef FT_BOOLEAN_H
//#define FT_BOOLEAN_H
//
//#include <unistd.h>
//
//# define TRUE		1
//# define FALSE		0
//# define SUCCESS	0
//# define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)
//# define EVEN_MSG	"I have a pair number of arguments.\n"
//# define ODD_MSG	"I have an impair number of arguments.\n"
//
//typedef int	t_bool;
//void		ft_putstr(char* str);
//t_bool		ft_is_even(int nbr);
//
//#endif
#pragma endregion
#pragma region ft_abs.h
//#ifndef FT_ABS_H
//# define FT_ABS_H
//
//# define ABS(n)	((n < 0) ? -n : n)
//
//#endif
#pragma endregion
#pragma region ft_point.h
#pragma region ft_point.h
//#ifndef FT_POINT_H
//# define FT_POINT_H
//
//typedef struct	s_point
//{
//	int x;
//	int y;
//}				t_point;
//
//void			set_point(t_point* point);
//
//#endif
#pragma endregion
#pragma region test.c
//#include "ft_point.h"
//
//void	set_point(t_point* point)
//{
//	point->x = 42;
//	point->y = 21;
//}
//
//int	main(void)
//{
//	t_point	point;
//
//	set_point(&point);
//	return (0);
//}
#pragma endregion
#pragma endregion


void ft_repeatalpha(char* str) {
	int index = 0;
	int letter = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z') {
			letter = str[index] - 96;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z') {
			letter = str[index] - 64;
		}
		else
			letter = 1;
		while (letter--)
			write(1, &str[index], 1);
		index++;
	}
}

void ft_search_and_replace(char** str) {
	int index = 0;
	if (str[0] && !str[1][1] && !str[2][1]) {
		while (str[0][index]) {
			if (str[0][index] == str[1][0])
				write(1, &str[2][0], 1);
			else
				write(1, &str[0][index], 1);
			index++;
		}
	}
}

void ft_ulstr(char* str) {
	int index = 0;
	char letter;

	while (str[index])
	{
		letter = str[index];

		if (str[index] >= 'a' && str[index] <= 'z')
			letter -= 32;
		else if (str[index] >= 'A' && str[index] <= 'Z')
			letter += 32;

		write(1, &letter, 1);
		index++;
	}
}

void	ft_rot_13(char* str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar(str[i] + 13);

		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar(str[i] - 13);

		else if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar(str[i] + 13);

		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar(str[i] - 13);

		else
			ft_putchar(str[i]);
		i++;
	}
}

void	ft_rotone(char* str)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Y')
			str[i] += 1;
		if (str[i] >= 'a' && str[i] <= 'y')
			str[i] += 1;
		if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;
		write(1, (str + i), 1);
		i++;
	}
}