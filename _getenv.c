#include "shell.h"

/**
 * _getenv - gets an environment variable
 * @name: the variable to find in the system environment
 * Return: the value of the variable or NULL if empty
 */

char *_getenv(const char *name)
{
	int i = 0;
	char *env_var = NULL;

	while (environ[i])
	{
		if (_strncmp(name, environ[i], _strlen(name)) == 0)
		{
			env_var = _strdup(environ[i]);
			while (*env_var != '=')
				env_var++;

			++env_var;
			return (env_var);
		}
		i++;
	}
	return (NULL);
}

/**
 * _print_env - prints the environment built-in var
 */

void _print_env(void)
{
	int i = 0, j = 0;

	while (environ[i])
	{
		j = 0;
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}

		if (j != 0)
			_putchar('\n');
		i++;
	}
}
