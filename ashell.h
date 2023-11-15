#ifndef ASHELL_H
#define ASHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <dirent.h>

/* put 1put */
int _putchar(char h);
void putme(char *string);
int str_len(char *c);
char *str_cpy(char *one, char *two);
char *str_cat(char *one, char *two);
int str_cmp(char *one, char *two);
char *str_dup(char *string);
size_t strn_cmp(char *one, char *two, size_t k);

/** get__line */
char *get__(void);
/** execute **/
int exec_l(char **argu, char *p, char **envt);
/** argu split **/
char **argu_split(char *l);
/** path_ **/
char *path_(char **envt);
/** path_way **/
char *path_way(char *k, char **path);
/** show_prompt **/
void show_prompt(void);
/** rm_newline **/
void rm_newline(char *string);
int empty_command(char *c);
int which_path(char *argu);
/** pathsplit **/
char **sp_path(char **envt);
/** envt **/
void write_envt(char **envt);

#endif
