#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * infinite_while - Run an infinite while loop.
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * create_zombie - Creates a zombie process
 *
 * Return: PID of zombie process
 */

pid_t create_zombie(void)
{
	pid_t pid;

	pid = fork();

	if (pid < 0)
	{
		perror("fork");
		exit(1);
	}

	if (pid == 0)
	{
		exit(0);
	}

	return (pid);
}

/**
 * main - Creates 5 zombie processes
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on error
 */

int main(void)
{
	pid_t zombie_pids[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		zombie_pids[i] = create_zombie();
		printf("Zombie process created, PID: %d\n", zombie_pids[i]);
	}
	return (EXIT_SUCCESS);
}
