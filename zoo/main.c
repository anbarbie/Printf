#include "../includes/ft_printf.h"

void	ft_init_struct(t_modulo *mod)
{
	mod->flags.minus = 0;
	mod->flags.zero = 0;
	mod->width.padding = 0;
	mod->width.precision = -1;
	mod->length.hh = 0;
	mod->length.h = 0;
	mod->length.ll = 0;
	mod->length.l = 0;
	mod->fd = 1;
}

int		ft_printf(const char *format, ...)
{
	va_list		args;
	t_modulo	mod;

	mod.buff_index = 0;
	mod.rt = 0;
	va_start(args, format);
	while (*format)
	{
		ft_init_struct(&mod);
		ft_fill_buff_c(&mod, *format);
		format++;
	}
	va_end(args);
	mod.rt += write(mod.fd, mod.buff, mod.buff_index);
	return (mod.rt);
}

int	main(int ac, char **av)
{
	int i;

	i = printf("salut les amis\n");
	printf("%d\n", i);
	i = ft_printf("salut les amis\n");
	printf("%d\n", i);
	return (0);
}
