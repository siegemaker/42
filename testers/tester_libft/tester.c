/*
	yes i love incredibly long if statements in a single enormous function
*/

#include "../libft.h"
#include <stdio.h>

void	TEST_MemDisplay(void *a, size_t n)
{
	size_t	i = 0;
	unsigned char	*he = (unsigned char *)a;
	char	c;
	printf("|");
	while (i < n)
	{
		c = (char)he[i];
		if (ft_isprint(c) == 1)
		{
			if (c == 32)
				printf("space");
			else
			{
				if (c == '|')
					printf(" bar ");
				else
					printf("  %c  ",c);
			}
		}
		else
		{
			if (c == '\0')
				printf("     ");
			else
				printf(" !?  ");
		}
		printf("|");
		i++;
	}
	printf("\n");
}
void	TEST_IdDisplay(size_t n)
{
	size_t	i = 0;
	printf("|");
	while (i < n)
	{
		printf("  %zu ",i);
		if (i < 10)
			printf(" ");
		printf("|");
		i++;
	}
	printf("\n");
}
void	TEST_MarkedDisplay(void *a, size_t n, void *ptr, int ud)
{
	size_t	i = 0;
	unsigned char	*he = (unsigned char *)a;
	char	c;
	printf(" ");
	while (i < n)
	{
		if (&he[i] == ptr)
		{
			if (ud == 0)
				printf("^^^^^");
			else
				printf("VVVVV");
		}
		else
		{
			printf("     ");
		}
		printf(" ");
		i++;
	}
	printf("\n");
}
char	*TEST_toupper_str(char *s)
{
	int	i = 0;
	int	len = ft_strlen(s);
	while (s[i] != '\0')
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}
char	*TEST_tolower_str(char *s)
{
	int	i = 0;
	int	len = ft_strlen(s);
	while (s[i] != '\0')
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}

char	TEST_strmapi_tolower(unsigned int i, char c)
{
	
	if ((c >= 65) && (c <= 90))
		c += 32;
	i--;
	return(c);
}
void	TEST_striteri_tolower(unsigned int i, char *c)
{
	
	if ((*c >= 65) && (*c <= 90))
		*c += 32;
}

int		main(int argc, char **argv)
{
	int		i;

	i = 2;
	if (argc < 2)
	{
		printf("Please specify which function (e.g: atoi \"420\")\n");
		return (1);
	}
	else
	{
		printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		//ISALPHA (takes one or multiple numbers)
		if (ft_strncmp("isalpha", argv[1], ft_strlen("isalpha")) == 0)
		{
			if (argc >= 3)
			{
				while (i < argc)
				{
					printf("ft_isalpha(%d) returns: %d\n", ft_atoi((const char *)argv[i]), ft_isalpha(ft_atoi((const char *)argv[i])));
					i++;
				}
			}
			else
			{
				int	cba	= 43;
				printf("ft_isalpha(%d) returns: %d\n", cba, ft_isalpha(cba));
			}
		}
		//ISDIGIT (takes one or multiple numbers)
		if (ft_strncmp("isdigit", argv[1], ft_strlen("isdigit")) == 0)
		{
			if (argc >= 3)
			{
				while (i < argc)
				{
					printf("ft_isdigit(%d) returns: %d\n", ft_atoi((const char *)argv[i]), ft_isdigit(ft_atoi((const char *)argv[i])));
					i++;
				}
			}
			else
			{
				int	cba	= 43;
				printf("ft_isdigit(%d) returns: %d\n", cba, ft_isdigit(cba));
			}
		}
		//ISALNUM (takes one or multiple numbers)
		if (ft_strncmp("isalnum", argv[1], ft_strlen("isalnum")) == 0)
		{
			if (argc >= 3)
			{
				while (i < argc)
				{
					printf("ft_isalnum(%d) returns: %d\n", ft_atoi((const char *)argv[i]), ft_isalnum(ft_atoi((const char *)argv[i])));
					i++;
				}
				return (0);
			}
			else
			{
				int	cba	= 43;
				printf("ft_isalnum(%d) returns: %d\n", cba, ft_isalnum(cba));
			}
		}
		//ISASCII (takes one or multiple numbers)
		if (ft_strncmp("isascii", argv[1], ft_strlen("isascii")) == 0)
		{
			if (argc >= 3)
			{
				while (i < argc)
				{
					printf("ft_isascii(%d) returns: %d\n", ft_atoi((const char *)argv[i]), ft_isascii(ft_atoi((const char *)argv[i])));
					i++;
				}
				return (0);
			}
			else
			{
				int	cba	= 43;
				printf("ft_isascii(%d) returns: %d\n", cba, ft_isascii(cba));
			}
		}
		//ISPRINT (takes one or multiple numbers)
		if (ft_strncmp("isprint", argv[1], ft_strlen("isprint")) == 0)
		{
			if (argc >= 3)
			{
				while (i < argc)
				{
					printf("ft_isprint(%d) returns: %d\n", ft_atoi((const char *)argv[i]), ft_isprint(ft_atoi((const char *)argv[i])));
					i++;
				}
				return (0);
			}
			else
			{
				int	cba	= 43;
				printf("ft_isprint(%d) returns: %d\n", cba, ft_isprint(cba));
			}
		}
		//STRLEN (takes one or multiple strings)
		if (ft_strncmp("strlen", argv[1], ft_strlen("strlen")) == 0)
		{
			if (argc >= 3)
			{
				while (i < argc)
				{
					printf("ft_strlen(%s) returns: %zu\n", argv[i], ft_strlen(argv[i]));
					i++;
				}
			}
			else
			{
				char	*cba = "hemlo wordl!";
				printf("ft_strlen(%s) returns: %zu\n", cba, ft_strlen(cba));
			}
		}
		//MEMSET (takes a string to create an array out of, a char to set things to, and a number for the amount of things to set)
		if (ft_strncmp("memset", argv[1], ft_strlen("memset")) == 0)
		{
				char	area[20] = "ayy lmao";
				int		c = 'x';
				size_t	n = 5;
				printf("testing ft_memset\n");
				printf("char	area[20] = \"%s\"\nint	c = \"%c\"\nsize_t	n = \"%zu\"\n\n",area,c,n);
				printf("displaying area:\n");
				TEST_MemDisplay(area,20);
				printf("running ft_memset(area, c, n)\n");
				ft_memset(area,c,n);							// <-- function
				printf("displaying area:\n");
				TEST_MemDisplay(area,20);
        }
		if (ft_strncmp("bzero", argv[1], ft_strlen("bzero")) == 0)
		{
				char	area[20] = "ayy lmao";
				size_t	n = 5;
				printf("testing ft_bzero\n");
				printf("char	area[20] = \"%s\"\nsize_t	n = %zu\n\n",area,n);
				printf("displaying area:\n");
				TEST_MemDisplay(area,20);
				printf("\nrunning bzero(area, n)\n\n");
				printf("displaying area:\n");
				ft_bzero(area,n);					// <-- function
				TEST_MemDisplay(area,20);
        }
		if (ft_strncmp("memcpy", argv[1], ft_strlen("memcpy")) == 0)
		{
				char	src[20] = "this is the source";
				char	dest[20] = "and this is dest";
				size_t	n = 7;
				printf("testing ft_memcpy\n\n");
				printf("size_t	n = %zu\n",n);
				printf("displaying src:\n");
				TEST_MemDisplay(src,20);
				printf("displaying dest:\n");
				TEST_MemDisplay(dest,20);
				printf("\nrunning memcpy(dest, src, n)\n\n");
				ft_memcpy(dest, src, n);						// <-- function
				printf("displaying src:\n");
				TEST_MemDisplay(src,20);
				printf("displaying dest:\n");
				TEST_MemDisplay(dest,20);
        }
		if (ft_strncmp("memmove", argv[1], ft_strlen("memmove")) == 0)
		{
				//char	src[20] = "this is the source";
				char	dest[20] = "and this is dest";
				char	*src = &dest[5];				// <-- src being str starting from 5th char in dest. it will overwrite itself partly
				size_t	n = 12;
				printf("testing ft_memmove\n\n");
				printf("size_t	n = %zu\n",n);
				printf("displaying src:\n");
				TEST_MemDisplay(src,ft_strlen(src));
				printf("displaying dest:\n");
				TEST_MemDisplay(dest,20);
				printf("\nrunning memmove(dest, src, n)\n\n");
				ft_memmove(dest, src, n);						// <-- function
				printf("displaying dest:\n");
				TEST_MemDisplay(dest,20);
        }
		if (ft_strncmp("strlcpy", argv[1], ft_strlen("strlcpy")) == 0)
		{
				char	src[20] = "this is the source";
				char	dest[20];
				size_t	n = 12;
				printf("testing ft_strlcpy\n\n");
				printf("displaying src:\n");
				TEST_MemDisplay(src,20);
				printf("displaying dest:\n");
				TEST_MemDisplay(dest,20);
				printf("\nrunning strlcpy(dest, src, n)\n\n");

				ft_strlcpy(dest, src, n);						// <-- function
				
				printf("displaying src:\n");
				TEST_MemDisplay(src,20);
				printf("displaying dest:\n");
				TEST_MemDisplay(dest,20);
				
        }
		if (ft_strncmp("strlcat", argv[1], ft_strlen("strlcat")) == 0)
		{
				char	src[20] = " lmao";
				char	dest[20] = "ayy";
				size_t	n = 12;
				printf("testing ft_strlcat\n\n");
				printf("displaying src:\n");
				TEST_MemDisplay(src,20);
				printf("displaying dest:\n");
				TEST_MemDisplay(dest,20);
				printf("\nrunning strlcat(dest, src, n)\n\n");

				ft_strlcat(dest, src, n);						// <-- function
				
				printf("displaying src:\n");
				TEST_MemDisplay(src,20);
				printf("displaying dest:\n");
				TEST_MemDisplay(dest,20);	
        }
		if (ft_strncmp("toupper", argv[1], ft_strlen("toupper")) == 0)
		{
			printf("testing ft_toupper\n\n");
			if (argc > 2)
			{
				while (i < argc)
				{
				printf("%s	becomes	",argv[i]);
				printf("%s\n",TEST_toupper_str(argv[i]));
				i++;
				}
			}
			else
			{
				char str[] = "aB1cD2eF!gH3iJ@kL4mN#oP5qRsTuV^wXyZ&0*";
				printf("%s	becomes	",str);
				printf("%s\n",TEST_toupper_str(str));				
			}
	    }
		if (ft_strncmp("tolower", argv[1], ft_strlen("tolower")) == 0)
		{
			printf("testing ft_tolower\n\n");
			if (argc > 2)
			{
				while (i < argc)
				{
				printf("%s	becomes	",argv[i]);
				printf("%s\n",TEST_tolower_str(argv[i]));
				i++;
				}
			}
			else
			{
				char str[] = "aB1cD2eF!gH3iJ@kL4mN#oP5qRsTuV^wXyZ&0*";
				printf("%s	becomes	",str);
				printf("%s\n",TEST_tolower_str(str));				
			}
	    }
		if (ft_strncmp("strchr",argv[1], ft_strlen("strchr")) == 0)
		{
			if (argc == 4)
			{
				char	*ptr;
				ptr = ft_strchr(argv[2],argv[3][0]);
				TEST_MarkedDisplay(argv[2],ft_strlen(argv[2]),ptr,1);
				TEST_MemDisplay(argv[2],ft_strlen(argv[2]));
				TEST_MarkedDisplay(argv[2],ft_strlen(argv[2]),ptr,0);
			}
			else
			{
				char	*cba = "i amm losingg itt";
				char	c = 'g';
				char	*ptr;
				ptr = ft_strchr(cba,c);
				TEST_MarkedDisplay(cba,ft_strlen(cba),ptr,1);
				TEST_MemDisplay(cba,ft_strlen(cba));
				TEST_MarkedDisplay(cba,ft_strlen(cba),ptr,0);
			}
		}
		if (ft_strncmp("strrchr",argv[1], ft_strlen("strrchr")) == 0)
		{
			if (argc == 4)
			{
				char	*ptr;
				ptr = ft_strrchr(argv[2],argv[3][0]);
				TEST_MarkedDisplay(argv[2],ft_strlen(argv[2]),ptr,1);
				TEST_MemDisplay(argv[2],ft_strlen(argv[2]));
				TEST_MarkedDisplay(argv[2],ft_strlen(argv[2]),ptr,0);
			}
			else
			{
				char	*cba = "i amm losingg itt";
				char	c = 'g';
				char	*ptr;
				ptr = ft_strrchr(cba,c);
				TEST_MarkedDisplay(cba,ft_strlen(cba),ptr,1);
				TEST_MemDisplay(cba,ft_strlen(cba));
				TEST_MarkedDisplay(cba,ft_strlen(cba),ptr,0);
			}
		}
		if (ft_strncmp("strncmp",argv[1], ft_strlen("strncmp")) == 0)
		{
			if (argc == 4)
			{
				size_t	n = 5;
				printf("testing ft_strncmp, using two provided strings and size_t %zu\n", n);
				TEST_MemDisplay(argv[2],ft_strlen(argv[2]));
				TEST_MemDisplay(argv[3],ft_strlen(argv[3]));
				printf("result: %d\n",ft_strncmp(argv[2],argv[3],n));
			}
			else
			{
				char	*s1 = "hlaeiaelaeo";
				char	*s2 = "hlaeiaelaei";
				size_t	n = 11;
				TEST_MemDisplay(s1,ft_strlen(s1));
				TEST_MemDisplay(s2,ft_strlen(s2));
				printf("result: %d\n",ft_strncmp(s1,s2,n));
			}
		}
		if (ft_strncmp("memchr",argv[1], ft_strlen("memchr")) == 0)
		{
			if (argc == 4)
			{
				char	*ptr;
				ptr = ft_memchr(argv[2],argv[3][0],ft_strlen(argv[2]));
				TEST_MarkedDisplay(argv[2],ft_strlen(argv[2]),ptr,1);
				TEST_MemDisplay(argv[2],ft_strlen(argv[2]));
				TEST_MarkedDisplay(argv[2],ft_strlen(argv[2]),ptr,0);
			}
			else
			{
				char	*cba = "i amm losingg itt";
				char	c = 'g';
				char	*ptr;
				ptr = ft_memchr(cba,c,ft_strlen(cba));
				TEST_MarkedDisplay(cba,ft_strlen(cba),ptr,1);
				TEST_MemDisplay(cba,ft_strlen(cba));
				TEST_MarkedDisplay(cba,ft_strlen(cba),ptr,0);
			}
		}
		if (ft_strncmp("memcmp",argv[1], ft_strlen("memcmp")) == 0)
		{
			if (argc == 4)
			{
				size_t	n = 20;
				printf("testing ft_memcmp, using two provided strings and size_t %zu\n", n);
				TEST_MemDisplay(argv[2],ft_strlen(argv[2]));
				TEST_MemDisplay(argv[3],ft_strlen(argv[3]));
				printf("result: %d\n",ft_strncmp(argv[2],argv[3],n));
			}
			else
			{
				size_t	n = 20;
				char	*s1 = "hiiiiiiiiiiiiiiiiiii";
				char	*s2	= "hiiiiiiiiiiiiiiiiiia";
				TEST_MemDisplay(s1,20);
				TEST_MemDisplay(s2,20);
				printf("result of ft_memcmp(s1,s2,%zu): %d\n",n,ft_strncmp(s1,s2,n));
			}
		}
		if (ft_strncmp("strnstr",argv[1], ft_strlen("strnstr")) == 0)
		{
			char	big[20] = "hello hel1lo hello";
			char	little[20] = "hel1lo";
			char	*ptr = ft_strnstr(big, little, 20);
			printf("testing ft_substr, this will display the \"big\" array and point out the start of the substring \"little\"\n\n");
			TEST_MarkedDisplay(big,20,ptr,1);
			TEST_MemDisplay(big,20);
			TEST_MarkedDisplay(big,20,ptr,0);
		}
		if (ft_strncmp("substr",argv[1], ft_strlen("substr")) == 0)
		{
			printf("testing substr:\n\n");
			char			string[20] = "la li lu le lo";
			unsigned int	start = 5;
			size_t			len = 7;
			char			*substr;

			TEST_MemDisplay(string,20);
			substr = ft_substr(string,start,len);
			TEST_MemDisplay(substr,ft_strlen(substr));
			free(substr);

		}
		if (ft_strncmp("atoi",argv[1], ft_strlen("atoi")) == 0)
			printf("ft_atoi has already been massively tested in the ascii variants\n");
		if (ft_strncmp("calloc", argv[1], ft_strlen("calloc")) == 0)
		{
			void *area;
			printf("testing ft_calloc\n");
			area = calloc(sizeof(char),20);
			printf("displaying area:\n");
			TEST_MemDisplay(area,20);
			free(area);
        }
		if (ft_strncmp("strdup", argv[1], ft_strlen("strdup")) == 0)
		{
			char	*s = "ayy lmao";
			char 	*new;

			new = ft_strdup(s);
			printf("testing ft_strdup\n\n");
			TEST_MemDisplay(new,ft_strlen(s));
			free(new);
        }
		if (ft_strncmp("strjoin", argv[1], ft_strlen("strjoin")) == 0)
		{
			char	*s1 = "hello";
			char	*s2 = " there";
			char	*s3;

			printf("testing ft_strjoin\n\n");
			printf("string 1:\n");
			TEST_MemDisplay(s1,ft_strlen(s1));
			printf("string 2:\n");
			TEST_MemDisplay(s2,ft_strlen(s2));
			printf("returning string:\n");
			s3 = ft_strjoin(s1, s2);
			TEST_MemDisplay(s3,ft_strlen(s3));
			free(s3);
        }
		if (ft_strncmp("strtrim", argv[1], ft_strlen("strtrim")) == 0)
		{
			char	*s = "la li lu le lo";
			char	*chars = "ola ";
			char	*new;
			printf("testing ft_strtrim\n\n");
			printf("string being checked:\n");
			TEST_MemDisplay(s,ft_strlen(s));
			printf("pool of chars:\n");
			TEST_MemDisplay(chars,ft_strlen(chars));
			printf("\nresult:\n\n");
			new = ft_strtrim(s,chars);
			TEST_MemDisplay(new,ft_strlen(new));
			free(new);
        }
		if (ft_strncmp("split", argv[1], ft_strlen("split")) == 0)
		{
			char	*str = "la li lu le lo";
			char	c = 'l';
			char	**new;
			int		j = 0;

			printf("testing ft_split\n\n");
			printf("string being checked:\n");
			TEST_MemDisplay(str,ft_strlen(str));
			printf("split by: %c\n",c);
			printf("\nresult:\n\n");
			new = ft_split(str,c);
			while (new[j] != NULL)
			{
				TEST_MemDisplay(new[j],ft_strlen(new[j]));
				j++;
			}
			free(new);
        }
		if (ft_strncmp("itoa", argv[1], ft_strlen("itoa")) == 0)
		{
			printf("testing ft_itoa\n\n");
			int	meme = -2147483648;
			char	*s = ft_itoa(meme);
			TEST_MemDisplay(s,ft_strlen(s));
			free(s);
        }
		if (ft_strncmp("strmapi", argv[1], ft_strlen("strmapi")) == 0)
		{
			char	*str = "aB1cD2eF!gHTuwXyZ&0*";
			printf("Testing ft_strmapi using ft_tolower\n");
			TEST_MemDisplay(str,ft_strlen(str));
			str = ft_strmapi(str, TEST_strmapi_tolower);
			TEST_MemDisplay(str,ft_strlen(str));
			free(str);
		}
		if (ft_strncmp("striteri", argv[1], ft_strlen("striteri")) == 0)
		{
			char	str[] = "aB1cD2eF!gHTuwXyZ&0*";
			printf("Testing ft_strmapi using ft_tolower\n");
			TEST_MemDisplay(str,ft_strlen(str));
			ft_striteri(str, TEST_striteri_tolower);
			TEST_MemDisplay(str,ft_strlen(str));
		}
		if (ft_strncmp("putstr_fd", argv[1], ft_strlen("putstr_fd")) == 0)
		{
			char			*str = "hello";
			unsigned int	fd = 1;
			printf("Testing putstr_fd on fd %d using the string literal: %s\n",fd,str);
			ft_putstr_fd(str,fd);
		}
		if (ft_strncmp("putendl_fd", argv[1], ft_strlen("putendl_fd")) == 0)
		{
			char			*str = "hello";
			unsigned int	fd = 1;
			printf("Testing putendl_fd on fd %d using the string literal: %s\n",fd,str);
			ft_putendl_fd(str,fd);
		}
		if (ft_strncmp("putnbr_fd", argv[1], ft_strlen("putnbr_fd")) == 0)
		{
			int				nbr = 251274612;
			unsigned int	fd = 1;
			printf("Testing putnbr_fd on fd %d using the integer: %d\n",fd,nbr);
			ft_putnbr_fd(nbr,fd);
		}
		printf("------------------------------------------------------------------------------------------------------------------------\n");
		return (0);
		printf("Couldn't find function: %s\n", argv[1]);
		return (1);
	}
}

/*
so how we gonna test this meme
!! a way to display values of memory areas would be neat, multiple tests could use this

DONT FORGER TO FREEE IN THE TESTS

*/