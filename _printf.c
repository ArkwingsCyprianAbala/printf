#include "main.h"
/**
 *This is a _printf used to print to the stdout
 *
 *@const format: This is the format specifier
 *Return value is the number of bytes printed
 */
int _printf(const char *format, ...)
{
	int my_size = 0;
	va_list my_pfargs;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(my_pfargs, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			my_size++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				my_size++;
			}
			else if (*format == 'c')
			{
				char n = va_arg(my_pfargs, int);
				write(1, &n, 1);
				my_size++;
			}
			else if (*format == 's')
			{
				char *mystr = va_arg(my_pfargs, char*);
				int mystr_size = 0;

				while (mystr[mystr_size] != '\0')
					mystr_size++;

				write(1, mystr, mystr_size);
				my_size += mystr_size;
			}
		}

		format++;
	}
	va_end(my_pfargs);

	return my_size;
}
