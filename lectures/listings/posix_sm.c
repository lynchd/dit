#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>

int main() 
{	// identifier for shared memory segment
	int segment_id; 
	// a pointer to the shared memory segment
	char* shared_memory;
	// the size of the segment
	const int size = 4096;
	// allocate the segement
	segment_id = shmget(IPC_PRIVATE, size, S.IRUSR | S.IWUSR);
        // attach shared memory 
	shared_memory = (char *) shmat(segment_id, NULL, 0);
	// Write something into the segment
	sprintf(shared_memory, "Hi There!");
        // Print it back out 
	printf("*%s\n", shared_memory);
        // Detach the segment
	shmdt(shared_memory);
        // Clean up the segment
	shmctl(segment_id, IPC.RMID, NULL);

	return 0;
}

