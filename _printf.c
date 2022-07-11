#include "main.h"

/**
 * _printf - printf function like Prints character, string and integer 
 * @format: A string containing all the desired characters
 *
 * Return: a total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int char_printed;
	converter_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	
	va_list arg_list;

	if (format == NULL)
		return (-1);
	
	va_start(arg_list, format);


	va_end(arg_list);
	return(char_printed);
}

