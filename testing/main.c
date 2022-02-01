
#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

void	test_simple(void)
{
	int	x;
	int	y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: simple string -----------\n\n");
	printf("Testing: (\"\\tHello!\\n\")\n");
	x += printf("  Or\t:\tHello!\n");
	y += ft_printf("  Ft\t:\tHello!\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_percent(void)
{
	int	x;
	int	y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: percent -----------\n\n");
	printf("Testing: (\"\\t%%%%\\n\")\n");
	x += printf("  Or\t:\t%%\n");
	y += ft_printf("  Ft\t:\t%%\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

}

void	test_c(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%c -----------\n\n");
	printf("Testing: (\"\\t%%c\\n\", 'a')\n");
	x += printf("  Or\t:\t%c\n", 'a');
	y += ft_printf("  Ft\t:\t%c\n", 'a');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe character %%c is visible.\\n\", 'x')\n");
	x += printf("  Or\t:\tThe character %c is visible.\n", 'x');
	y += ft_printf("  Ft\t:\tThe character %c is visible.\n", 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_s(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%s -----------\n\n");
	printf("Testing: (\"\\t%%s\\n\", \"coucou, ca va?\")\n");
	x += printf("  Or\t:\t%s\n", "coucou, ca va?");
	y += ft_printf("  Ft\t:\t%s\n", "coucou, ca va?");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe string \\\"%%s\\\" is visible.\\n\", \"TRALALA\")\n");
	x += printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
	y += ft_printf("  Ft\t:\tThe string \"%s\" is visible.\n", "TRALALA");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	char *s = NULL;
	if (s == NULL)
		write(1, "(null)\n", 7);
	printf("Testing: (\"\\tNULL %%s NULL.\\n\", NULL)\n");
	x += printf("  Or\t:\tNULL %s NULL.\n", s);
	y += ft_printf("  Ft\t:\tNULL %s NULL.\n", s);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_d(void)
{
	int x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%d -----------\n\n");
	printf("Testing: (\"\\t%%d\\n\", 42)\n");
	x += printf("  Or\t:\t%d\n", 42);
	y += ft_printf("  Ft\t:\t%d\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe number %%d is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe number %d is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe number %d is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%d\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%d\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%d\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%d\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MIN - INT_MIN)\n");
	x += printf("  Or\t:\t%i\n", INT_MIN - INT_MIN);
	y += ft_printf("  Ft\t:\t%i\n", INT_MIN - INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_i(void)
{
	int x, y;
	printf("\n----------- TEST: %%i -----------\n\n");
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", 4422)\n");
	x += printf("  Or\t:\t%i\n", 4422);
	y += ft_printf("  Ft\t:\t%i\n", 4422);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe number %%i is visible.\\n\", 0)\n");
	x += printf("  Or\t:\tThe number %i is visible.\n", 0);
	y += ft_printf("  Ft\t:\tThe number %i is visible.\n", 0);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%i\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%i\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%i\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%i\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MIN + INT_MAX)\n");
	x += printf("  Or\t:\t%i\n", INT_MIN + INT_MAX);
	y += ft_printf("  Ft\t:\t%i\n", INT_MIN + INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_x(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%x -----------\n\n");
	printf("Testing: (\"\\t%%x\\n\", 42)\n");
	x += printf("  Or\t:\t%x\n", 42);
	y += ft_printf("  Ft\t:\t%x\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe hex number %%x is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe hex number %x is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe hex number %x is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%x\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%x\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%x\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%x\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", -42)\n");
	x += printf("  Or\t:\t%x\n", -42);
	y += ft_printf("  Ft\t:\t%x\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%x\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%x\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_X(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%X -----------\n\n");
	printf("Testing: (\"\\t%%X\\n\", 42)\n");
	x += printf("  Or\t:\t%X\n", 42);
	y += ft_printf("  Ft\t:\t%X\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe hex number %%X is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe hex number %X is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe hex number %X is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%X\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%X\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%X\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%X\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", -42)\n");
	x += printf("  Or\t:\t%X\n", -42);
	y += ft_printf("  Ft\t:\t%X\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%X\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%X\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_u(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%u -----------\n\n");
	printf("Testing: (\"\\t%%u\\n\", 42)\n");
	x += printf("  Or\t:\t%u\n", 42);
	y += ft_printf("  Ft\t:\t%u\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe number %%u is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe number %u is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe number %u is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%u\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%u\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%u\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%u\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", -42)\n");
	x += printf("  Or\t:\t%u\n", -42);
	y += ft_printf("  Ft\t:\t%u\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%u\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%u\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_p(void)
{
	int	x, y;
	printf("\n----------- TEST: %%p -----------\n\n");
	x = 0;
	y = 0;
	int	n;
	char	c;
	void	*p;

	n = 50;
	c = 'a';
	p = NULL;
	printf("Testing: (\"\\t%%p\\n\", (void *)&n)\n");
	x += printf("  Or\t:\t%p\n", (void *)&n);
	y += ft_printf("  Ft\t:\t%p\n", (void *)&n);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%p\\n\", (void *)&c)\n");
	x += printf("  Or\t:\t%p\n", (void *)&c);
	y += ft_printf("  Ft\t:\t%p\n", (void *)&c);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%p\\n\", p)\n");
	x += printf("  Or\t:\t%p\n", p);
	y += ft_printf("  Ft\t:\t%p\n", p);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_all(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: ALL -----------\n\n");
	printf("Testing: (\"\\tThe int is %%i or %%d, the char is %%c, the string is \\\"%%s\\\", the hex is %%x or %%X, the unsigned is %%u and the percent is %%%%.\\n\", 42, -42, 's', \"Hello\", 42, 42, 242)\n");
	x += printf("  Or\t:\tThe int is %i or %d, the char is %c, the string is \"%s\", the hex is %x or %X, the unsigned is %u and the percent is %%.\n", 42, -42, 's', "Hello", 42, 42, 242);
	y += ft_printf("  Or\t:\tThe int is %i or %d, the char is %c, the string is \"%s\", the hex is %x or %X, the unsigned is %u and the percent is %%.\n", 42, -42, 's', "Hello", 42, 42, 242);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_bonus_char(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: WIDTH CHAR -----------\n\n");
	x = printf("  Or:\tChar [%20c]\n", 'x');
	y = ft_printf("  Ft:\tChar [%20c]\n", 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	
	x = printf("  Or:\tChar [%-20c]\n", 'x');
	y = ft_printf("  Ft:\tChar [%-20c]\n", 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or:\tChar [%*c]\n", 8, 'x');
	y = ft_printf("  Ft:\tChar [%*c]\n", 8, 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	y = ft_printf("  Ft:\tChar [%0*c]\n", 8, 'x');
	y = ft_printf("  Ft:\tChar [%-0*c]\n", 8, 'x');

/*	printf("\n----------- TEST: WIDTH %% -----------\n\n");
	x = printf("  Or:\tChar [%20%]\n");
	y = ft_printf("  Ft:\tChar [%20%]\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or:\tChar [%0*%]\n", 8);
	y = ft_printf("  Ft:\tChar [%0*%]\n", 8);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
*/}

void	test_bonus_str(void)
{
	int x, y;

	printf("\n----------- TEST: WIDTH STR -----------\n\n");
	x = printf("  Or:\tString [%-25s]\n", "Hello!");
	y = ft_printf("  Ft:\tString [%-25s]\n", "Hello!");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or:\tString [%*s]\n", 20, "Hello!");
	y = ft_printf("  Ft:\tString [%*s]\n", 20, "Hello!");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or:\tString [%1s]\n", "Hello World!");
	y = ft_printf("  Ft:\tString [%1s]\n", "Hello World!");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_bonus_hex(void)
{
	int x, y;

	printf("\n----------- TEST: SHARP HEX -----------\n\n");
	x = printf("  Or:\tNumber [%#x]\n", 0);
	y = ft_printf("  Ft:\tNumber [%#x]\n", 0);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	//x = printf("  Or:\tNumber [%#x]\n", LONG_MIN);
	y = ft_printf("  Ft:\tNumber [%#x]\n", LONG_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%#x]\n", 42);
	y = ft_printf("  Ft:\tNumber [%#x]\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%#X]\n", 42);
	y = ft_printf("  Ft:\tNumber [%#X]\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	printf("\n----------- TEST: WIDTH HEX -----------\n\n");
	x = printf("  Or:\tNumber [%*x]\n", 10, 42);
	y = ft_printf("  Ft:\tNumber [%*x]\n",10, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%20X]\n", 42);
	y = ft_printf("  Ft:\tNumber [%20X]\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%0*X]\n", 20, 42);
	y = ft_printf("  Ft:\tNumber [%0*X]\n", 20, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	printf("\n----------- TEST: WIDTH SHARP HEX -----------\n\n");
	x = printf("  Or:\tNumber [%#*x]\n", 10, 42);
	y = ft_printf("  Ft:\tNumber [%#*x]\n",10, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%#0*x]\n", 10, 42);
	y = ft_printf("  Ft:\tNumber [%#0*x]\n",10, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_bonus_unsigned(void)
{
	int x, y;

	printf("\n----------- TEST: WIDTH UNSIGNED -----------\n\n");
	x = printf("  Or:\tNumber [%20u]\n", 42);
	y = ft_printf("  Ft:\tNumber [%20u]\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%-15u]\n", 42);
	y = ft_printf("  Ft:\tNumber [%-15u]\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%0*u]\n", 10, 42);
	y = ft_printf("  Ft:\tNumber [%0*u]\n", 10, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_bonus_int(void)
{
	int x, y;

	printf("\n----------- TEST: WIDTH INT -----------\n\n");
	x = printf("  Or:\tNumber [%20i]\n", 42);
	y = ft_printf("  Ft:\tNumber [%20i]\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%0*i]\n", 8, 42);
	y = ft_printf("  Ft:\tNumber [%0*i]\n", 8, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%0*i]\n", 8, -42);
	y = ft_printf("  Ft:\tNumber [%0*i]\n", 8, -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%*i]\n", 8, -42);
	y = ft_printf("  Ft:\tNumber [%*i]\n", 8, -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	printf("\n----------- TEST: ZERO INT -----------\n\n");
	x = printf("  Or:\tNumber [%011i]\n", (int)LONG_MAX);
	y = ft_printf("  Ft:\tNumber [%011i]\n", LONG_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%010d]\n", INT_MIN);
	y = ft_printf("  Ft:\tNumber [%010d]\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

//	 47         TEST(22, print(" %010d ", INT_MIN));


	printf("\n----------- TEST: SPACE INT -----------\n\n");
	x = printf("  Or:\tNumber [% 0*i]\n", 8, 42);
	y = ft_printf("  Ft:\tNumber [% 0*i]\n", 8, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	
	x = printf("  Or:\tNumber [% 0*i]\n", 8, -42);
	y = ft_printf("  Ft:\tNumber [% 0*i]\n", 8, -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or:\tNumber [%- *i]\n", 8, 42);
	y = ft_printf("  Ft:\tNumber [%- *i]\n", 8, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	printf("\n----------- TEST: PLUS INT -----------\n\n");
	x = printf("  Or:\tNumber [%+0*i]\n", 8, 42);
	y = ft_printf("  Ft:\tNumber [%+0*i]\n", 8, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tNumber [%+*i]\n", 8, 42);
	y = ft_printf("  Ft:\tNumber [%+*i]\n", 8, 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_bonus_ptr(void)
{
	int x, y;

	printf("\n----------- TEST: LEFT JUSTIFY PTR -----------\n\n");
	x = printf("  Or:\tPointer [%-15p]\n", &x);
	y = ft_printf("  Ft:\tPointer [%-15p]\n", &x);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tPointer [%-20p]\n", &y);
	y = ft_printf("  Ft:\tPointer [%-20p]\n", &y);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tPointer [%-15p]\n", (void *)0);
	y = ft_printf("  Ft:\tPointer [%-15p]\n", (void *)0);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_bonus_precision(void)
{
	int x, y;

	printf("\n----------- TEST: PRECISION STRING -----------\n\n");
	x = printf("  Or:\tString, no prec: [%s]\n", "0123456789");
	y = ft_printf("  Ft:\tString, no prec: [%s]\n", "0123456789");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tString, prec 6: [%.6s]\n", "0123456789");
	y = ft_printf("  Ft:\tString, prec 6: [%.6s]\n", "0123456789");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tString, prec 15: [%.15s]\n", "0123456789");
	y = ft_printf("  Ft:\tString, prec 15: [%.15s]\n", "0123456789");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tString, prec 0: [%.0s]\n", "0123456789");
	y = ft_printf("  Ft:\tString, prec 0: [%.0s]\n", "0123456789");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	printf("\n----------- TEST: PRECISION INT -----------\n\n");
	x = printf("  Or:\tInt, no prec: [%d]\n", 42424242);
	y = ft_printf("  Ft:\tInt, no prec: [%d]\n", 42424242);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tInt, prec 2: [%.2d]\n", 42424242);
	y = ft_printf("  Ft:\tInt, prec 2: [%.2d]\n", 42424242);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\tInt, prec 42: [%.42d]\n", 42424242);
	y = ft_printf("  Ft:\tInt, prec 42: [%.42d]\n", 42424242);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_extra()
{
	char *null_str = NULL;
	int x;
	int y;

	printf("\n----------- TEST: NULL STRING PRECISION THING -----------\n\n");
	x = printf("  Or:\t.0s [%.0s]\n", null_str);
	y = ft_printf("  Ft:\t.0s [%.0s]\n", null_str);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\t.1s [%.1s]\n", null_str);
	y = ft_printf("  Ft:\t.1s [%.1s]\n", null_str);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\t.2s [%.2s]\n", null_str);
	y = ft_printf("  Ft:\t.2s [%.2s]\n", null_str);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\t.3s [%.3s]\n", null_str);
	y = ft_printf("  Ft:\t.3s [%.3s]\n", null_str);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\t.4s [%.4s]\n", null_str);
	y = ft_printf("  Ft:\t.4s [%.4s]\n", null_str);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\t.5s [%.5s]\n", null_str);
	y = ft_printf("  Ft:\t.5s [%.5s]\n", null_str);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\t.6s [%.6s]\n", null_str);
	y = ft_printf("  Ft:\t.6s [%.6s]\n", null_str);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = printf("  Or:\t.6s [%.7s]\n", null_str);
	y = ft_printf("  Ft:\t.6s [%.7s]\n", null_str);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_invalid_spec(void)
{
	int x, y;

	x = 0;
	y = 0;
	printf("\n----------- TEST: INVALID TYPE -----------\n\n");

	x = printf("  Or\t:\tInvalid: [%%w] = [%w]\n");
	y = ft_printf("  Ft\t:\tInvalid: [%%w] = [%w]\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or\t:\tInvalid: [%%0] = [%0]\n");
	y = ft_printf("  Ft\t:\tInvalid: [%%0] = [%0]\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or\t:\tInvalid: [%%14k] = [%14k]\n");
	y = ft_printf("  Ft\t:\tInvalid: [%%14k] = [%14k]\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or\t:\tInvalid: [%%-14k] = [%-14k]\n");
	y = ft_printf("  Ft\t:\tInvalid: [%%-14k] = [%-14k]\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

	x = printf("  Or\t:\tInvalid: [%%wawa] = [%wawa]\n");
	y = ft_printf("  Ft\t:\tInvalid: [%%wawa] = [%wawa]\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

int	main(void)
{
	printf("\n\n========== MANDATORY TESTS ========\n\n");
	test_simple();
	test_percent();
	test_c();
	test_s();
	test_d();
	test_i();
	test_x();
	test_X();
	test_u();
	test_p();
	test_all();

	printf("\n\n========== BONUS TESTS ============\n\n");
	test_bonus_char();
	test_bonus_str();
	test_bonus_hex();
	test_bonus_unsigned();
	test_bonus_int();
	test_bonus_ptr();
	test_bonus_precision();
	test_extra();
	test_invalid_spec();

	return (0);
}
