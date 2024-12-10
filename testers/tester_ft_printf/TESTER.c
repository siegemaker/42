#include <stdio.h>
#include "../ft_printf.h"
#include <limits.h>
#include <stdlib.h>

int	main(void)
{
	const char			c = 'K';
	const char			*s = "hello!";
	const char			*snull = NULL;
	int					d = 4.3;
	int					i = 43;
	unsigned int		u = 43;
	unsigned int		x = -434343;
	unsigned int		X = -434343;

	printf("---------upper example is the real printf, second is ft_printf---------\n\n");

	if (printf("char:	%c\n",c) == ft_printf("char:	%c\n",c))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("str:	%s\n",s) == ft_printf("str:	%s\n",s))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("ptr to str:	%p\n",s) == ft_printf("ptr to str:	%p\n",s))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("dec:	%d\n",d) == ft_printf("dec:	%d\n",d))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("int:	%i\n",i) == ft_printf("int:	%i\n",i))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("uns dec:	%u\n",u) == ft_printf("uns dec:	%u\n",u))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("hex:	%x\n",x) == ft_printf("hex:	%x\n",x))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("HEX:	%X\n",X) == ft_printf("HEX:	%X\n",X))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("percent:	%%\n") == ft_printf("percent:	%%\n"))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	printf("---------troublemakers---------\n\n");

	if (printf("NULL str:	%s\n",snull) == ft_printf("NULL str:	%s\n",snull))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("ptr to NULL:	%p\n",snull) == ft_printf("ptr to NULL:	%p\n",snull))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("ptr to NULL:	%p\n",snull) == ft_printf("ptr to NULL:	%p\n",snull))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("uns dec 0:	%p\n",0) == ft_printf("uns dec 0:	%p\n",0))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("hex 0:	%x\n",0) == ft_printf("hex 0:	%x\n",0))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("uns dec LONG_MIN:	%p\n",LONG_MIN) == ft_printf("uns dec LONG_MIN:	%p\n",LONG_MIN))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	if (printf("HEX LONG_MIN:	%X\n",LONG_MIN) == ft_printf("HEX LONG_MIN:	%X\n",LONG_MIN))
		printf("same return\n\n");
	else
		printf("different return !!!!!!!!!!!!!!!!!!\n\n");

	printf("---------Done!---------\n");
}