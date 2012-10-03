#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main() 
{
	pid.t pid;
	// Fork a child process
	pid = fork();
	if (pid < 0) { // Error
		fprintf(stderr, "Fork Failed");
		exit(-1);
	}
	else if (pid == 0) { // child process
		execlp("/bin/ls", "ls", NULL);
	}
	else { //parent process
		// wait until child is complete
		wait(NULL); 
		printf("Child Complete");
		exit(0);
	}
}
