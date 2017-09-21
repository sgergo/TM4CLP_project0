#ifndef CMDLINE_H
#define CMDLINE_H

#define CMDLINE_BAD_CMD         (-1)
#define CMDLINE_TOO_MANY_ARGS   (-2)
#define CMDLINE_TOO_FEW_ARGS   	(-3)
#define CMDLINE_INVALID_ARG   	(-4)

typedef int (*commandline_ptr)(int argc, char *argv[]);

typedef struct {

    const char *commandname_ptr; // A pointer to a string containing the name of the command.
    commandline_ptr commandfunction_ptr; // A function pointer to the implementation of the command.    
    const char *commandhelptext_ptr; // A pointer to a string of brief help text for the command.

} commandentry_t;

extern commandentry_t commandtable[];
extern int cmdline_process(char *cmdline);

#endif
