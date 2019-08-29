# simple_shell  :shell: 
#### simple_shell is a simplified command line shell for Linux. simple_shell is comprised of many of the most basic features that are included in bash shell  
  
  
## SYNOPSIS  
  
simple_shell is a version implementation of the UNIX `shell`, in accordance with Holberton School standards and expectations. This project's primary purpose was to reinforce and refine students' knowledge of the C programming language. Other objectives included understanding how shell operates, and how to manage a big programming project.  
  
  
  
  
  
## INSTALLATION AND USAGE  
Please use GCC 4.8.4 compiler or later.  
  
```  
$ git clone [repository link]  
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh  
./hsh  
  
$ [enter commands]  
```  
  
#### SYNTAX OVERVIEW AND EXAMPLES  
  
------  
  
To enter commands into simple_shell use the following syntax: `command name {arguments}`. Below are some examples of entering commands into simple_shell:  
``` sh  
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh  
$ ls -l
total 64
-rw-rw-r-- 1 vagrant vagrant     6 Aug 28 21:38 AUTHORS
-rw-rw-r-- 1 vagrant vagrant    33 Aug 28 21:01 README.md
-rw-rw-r-- 1 vagrant vagrant   255 Aug 28 21:03 environment.c
-rw-rw-r-- 1 vagrant vagrant   925 Aug 28 21:05 helperfuncs.c
-rwxrwxr-x 1 vagrant vagrant 14190 Aug 28 22:33 hsh
-rw-rw-r-- 1 vagrant vagrant   802 Aug 28 21:06 main_shell.c
-rw-rw-r-- 1 vagrant vagrant     8 Aug 28 21:40 manpage
-rw-rw-r-- 1 vagrant vagrant  1113 Aug 28 21:07 path_funcs1.c
-rw-rw-r-- 1 vagrant vagrant   691 Aug 28 21:29 path_funcs2.c
-rw-rw-r-- 1 vagrant vagrant   161 Aug 28 22:33 prompt.c
-rw-rw-r-- 1 vagrant vagrant  1116 Aug 28 21:29 rec_cmd_exec_cmd.c
-rw-rw-r-- 1 vagrant vagrant   798 Aug 28 22:32 shell.h
-rw-rw-r-- 1 vagrant vagrant   892 Aug 28 21:09 shell_builtins.c  
```  
```  
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh  
$ pwd  
/home/vagrant/simple_shell  
```  
```  
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh  
$ pd  
command not found  
```  
#### Commands  
  
------  
Listed below are useful commands that can be used in simple_shell:  
  
Command | Function  
--------|---------------  
ls | Lists all files and directories of current working directory.  
pwd | Prints the current working directory.  
cp| Copies files to another location.  
cat | Reads files sequentially, writing them to standard output.  
mv | Moves files or directories from one place to another.  
less | Displays file contents one page at a time.
  


  
### Builtins  
  
------  
  
Listed below are the builtin functions in our shell:

Command | Function  
--------|---------------  
env | Prints list of environmental variables.  
exit | Causes process termination.  

## File Descriptions

Listed below are the descriptions of the files in this repo:

File | Description  
--------|---------------  
environment.c | Writes env.  
helperfuncs.c | Includes functions for string manipulation.  
main_shell.c| Contains looper and main shell function.  
path_funcs1.c | Contains path functions.  
path_funcs2.c | Contains path functions.  
prompt.c | Displays ps1 prompt.
rec_cmd_exec_cmd.c | Receives and executes commands.
shell_builtins.c | Contains builtin functions.
shell.h | Contains function prototypes.

 
  

  

## Authors

*Faizan Khan* :boom: [Github]([https://github.com/b1naryp0et/](https://github.com/b1naryp0et/)) || [Twitter]([https://twitter.com/b1nary_p0et](https://twitter.com/b1nary_p0et)) || [LinkedIn]([https://www.linkedin.com/in/fkkhan/](https://www.linkedin.com/in/fkkhan/))  


  *Andrew Graf*  :cookie:[Github]([https://github.com/humeinstein](https://github.com/humeinstein)) || [Twitter]([https://twitter.com/realAndrewGraf(https://twitter.com/realAndrewGraf)) || [LinkedIn]([https://www.linkedin.com/](https://www.linkedin.com/))  

## FUNCTIONS

```
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
```
