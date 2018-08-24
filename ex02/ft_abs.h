#ifndef __FT_ABS_H__
#define __FT_ABS_H__

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

# define ABS(value) ft_abs(value)
#endif
