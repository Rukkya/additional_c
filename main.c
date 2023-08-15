#include"main.h"
int main(int ac , char **argv){
char output= "chill_shell$$";
char *buffer_address;
  size_t x=0;

  printf("%s", output);
  getline(&buffer_address, &x, stdin);
printf("%s\n",buffer_address);
  free(buffer_address);

  (void)ac; (void)argv;
  return (0);
}
