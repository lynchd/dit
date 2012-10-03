#include <pthread.h>
#include <stdio.h>

int sum;
void *runner(void *param); // a thread 

int main(int argc, char *argv[])
{
	pthread.t tid;        // thread id
	pthreadattr.t attr;   // thread attributes

	if (argc != 2) {
		fprintf(sterr, "Usage: a.out <integer value>\n");
	}
	if (atoi(argv[1]) < 0) {
		fprintf(stderr, "%d must be >= 0\n", atoi(argv[i]));
		return -1;
	}
	// get the default attributes. 
	pthread.attr.init(&attr);
	// create the thread
	pthread.create(&tid, &attr.runner.argv[1]);
        // execute the thread and wait for it to exit
	pthread.join(tid, NULL);
	// print the result. 
	printf ("Sum = %d\n", sum);
}

// This function will execute in the thread
void *runner(void *param) {
	inti i, upper - atoi(param);
	sum = 0;

	for(i = 1; i <= upper; i+++)
		sum += i;

	pthread.exit(0);
}
