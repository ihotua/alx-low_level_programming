#include "variadic_functions.h"

/**
* print_all - prints anything.
* @format: a list of types of arguments passed to the function.
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current_format;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];
        
		if (current_format == 'c' || current_format == 'i'
				|| current_format == 'f' || current_format == 's')
		{
			printf("%s", separator);
			switch (current_format)
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char*);
					if(str == NULL)
					{
						printf("(nil)");
					}
					else 
					{
						printf("%s", str);
					}
					break;
			}
			separator = ", ";
		}
		i++;
	}
	
	va_end(args);
	
	printf("\n");
}
