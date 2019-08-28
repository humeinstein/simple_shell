#ifndef SHELL_H_
#define SHELL_H_

#define DELIM " \n\a\t"

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

extern char **environ;
void environ1(char **env);
void shell_init(char **env);
int main(int argc, char **argv, char **env);
char *catcmddir(char *dir, char *arg_val);
char *environ_vars(char **env);
char **tokenize_Dir(char **env);
char *path_scan(char **dir, char *cmd);
void prompt(void);
char *get_line(void);
char **line_token(char *line);
int exec_cmd(char *cmdpath, char **command);
int exit_hsh(char **cmd);
int print_env(char **cmd);
int call_built(char *cmbn, char **cmd);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);

#endif
