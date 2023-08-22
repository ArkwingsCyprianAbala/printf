#include "main.h"
/**
 *This is a _printf used to print to the stdout
 *
 *@const format: This is the format specifier
 *Return value is the number of bytes printed
 */
int _printf(const char *format, ...)
{
	int i;
	int my_size = 0;
	int count;

	va_list my_arguments;

	if(format == NULL)
		return (-1);

	va_start(my_arguments, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			pucr(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			pucr(va_arg(my_arguments, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			count = insert(va_arg(my_arguments, char *));
			i++;
			my_size = (count - 1);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			pucr('%');
		}

		my_size += 1;
	}
	va_end(my_arguments);
	return (my_size);
}
