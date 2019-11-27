#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
#include <signal.h>

/**
 * main - most AMAAAZINGGG simple SHELL, I call it SHELLY
 * @ac: argument counter.
 * @av: argument vector.
 * @env: environment array.
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
ssize_t test;
const char *path;
(void)ac;
char *buffer, **argv, *token, *dest, *token1;
size_t buffersize = 100;
buffer = malloc(buffersize);
_check(buffer, av);
token = malloc(buffersize);
_check(token, av);
dest = malloc(buffersize);
_check(dest, av);
argv = malloc(buffersize);
if (argv == NULL)
exit(EXIT_FAILURE);
_arrayMalloc(argv, buffersize, av);
signal(SIGINT, SIG_IGN);
path = getenv("PATH");
while (test >= 0)
{
printy("$ ");
if (test == -1)
{
_putchar('\n');
exit(EXIT_FAILURE);
}
test = getline(&buffer, &buffersize, stdin);
if (test == EOF)
{
_putchar('\n');
exit(0);
}
toky(token, argv, buffer);
bulties(argv, env);
token1 = _strdup((char *)path);
token1 = strtok(token1, ":");
dest = toky_1(token1, argv, dest);
parenting(dest, argv, av);
}
freeing(buffer, token, dest, argv, token1);
return (0);
}
