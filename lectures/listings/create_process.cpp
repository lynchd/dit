#include <stdio.h>
#include <windows.h>

int main(VOID)
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	// allocate memory
	ZeroMemory(&sl, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	// create a chile process
	if (!CreateProcess(NULL, "c:\\windows\\system32\mspaint",
				NULL, // don't inherit process handle
				NULL, // don't inherit thread handle
				FALSE, // disable handle inheritance,
				0, // No creation flags
				NULL,
				NULL,
				&s1,
				&p1))
       	{
			fprintf(stdeer, "CreateProcessFailed");
			return -1;
	}
	// Wait for child to complete
	WaitForSingleObject(pi.hProcess, INFINITE);
	printf("Child Complete");

	// Close handles
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
}
