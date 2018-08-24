#ifndef __FT_BOOLEAN_H__
#define __FT_BOOLEAN_H__

enum t_bool
{
	TRUE,
	FALSE
};

# include <unistd.h>
# define EVEN(x) ((x + 1) % 2)
# define t_bool enum t_bool
# define SUCCESS 0
# define EVEN_MSG "J'ai un nombre pair d'arguments.\n"
# define ODD_MSG "J'ai un nombre impair d'arguments.\n"

#endif
