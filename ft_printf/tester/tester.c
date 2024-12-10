#include <stdio.h>
#include "../ft_printf.h"
#include <limits.h>

int	main(void)
{
	const char			c = 'K';
	const char			*s = "hello!";
	void				*p = "";
	int					d = 4.3;
	int					i = 43;
	unsigned int		u = 43;
	int 				printfchars = 0;
	int					ftprintfchars = 0;
	unsigned int		x = -42069;
	unsigned int		X = -42069;

	printfchars = printf("\n==================== Hi. This is the REAL  PRINTF. ====================\n");
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Char: %c\n",c);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("String: %s\n",s);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Void *: %p\n",p);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Decimal: %d\n",d);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Unsigned Decimal: %u\n",u);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Int: %i\n",i);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Hex: %x\n",x);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("HEX: %X\n",X);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("A Percent Sign: %%\n\nTroublemakers:\n");
	printf("\n(return: %d\n",printfchars);

	//troublemakers
	printfchars = printf("String NULL: %s\n",NULL);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Void * 0: %p\n",0);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Unsigned Decimal 0: %u\n",0);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("Unsigned Decimal LONG_MIN: %u\n",LONG_MIN);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("hex 0: %x\n",0);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("hex LONG_MIN: %x\n",LONG_MIN);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("HEX 0: %X\n",0);
	printf("\n(return: %d\n",printfchars);
	printfchars = printf("HEX LONG_MIN: %X\n",LONG_MIN);
	printf("\n(return: %d\n",printfchars);


	ftprintfchars = ft_printf("\n-------------------- Hi. This is my own FT_PRINTF. --------------------\n");
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Char: %c\n",c);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("String: %s\n",s);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Void *: %p\n",p);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Decimal: %d\n",d);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Unsigned Decimal: %u\n",u);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Int: %i\n",i);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Hex: %x\n",x);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("HEX: %X\n",X);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("A Percent Sign: %%\n\nTroublemakers:\n");
	printf("\n(return: %d\n",ftprintfchars);

	//troublemakers
	ftprintfchars = ft_printf("String NULL: %s\n",NULL);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Void * 0: %p\n", 0);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Unsigned Decimal 0: %u\n",0);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("Unsigned Decimal LONG_MIN: %u\n",LONG_MIN);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("hex 0: %x\n",0);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("hex LONG_MIN: %x\n",LONG_MIN);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("HEX 0: %X\n",0);
	printf("\n(return: %d\n",ftprintfchars);
	ftprintfchars = ft_printf("HEX LONG_MIN: %X\n",LONG_MIN);
	printf("\n(return: %d\n",ftprintfchars);
}