#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **argv){

  char *promp = "#cisfun$";
  char *buff;
  size_t *num=0;
  ssize_t mii=0;
  printf("%s", promp);

  /* to read what user types and couts it getline should be used*/
  /*ssize_t getline(char **restrict lineptr, size_t *restrict n,
                       FILE *restrict stream); file stream is standard input expected from the user stdin*/
  getline(&buff, &num, stdin);
  printf("%s\n", buff);
  free(buff);
  return (0);
}
