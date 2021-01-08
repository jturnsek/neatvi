#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "vi.h"

static int cmd_make(char **argv, int *ifd, int *ofd)
{
	return -1;
}

/* execute a command; process input if iproc and process output if oproc */
char *cmd_pipe(char *cmd, char *ibuf, int iproc, int oproc)
{
	return NULL;
}

int cmd_exec(char *cmd)
{
	cmd_pipe(cmd, NULL, 0, 0);
	return 0;
}
