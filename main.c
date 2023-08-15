#include"main.h"
int main(int ac , char **argv){
char *output= "chillshell$$";
char *buffer_address;
ssize_t num;
size_t x=0;
  (void)ac , (void)argv;

while(1){
  printf("%s", output);
  getline(&buffer_address, &x, stdin);
num = getline(&buffer_address, &x, stdin);
      /* check if the getline function failed or reached EOF or user use CTRL + D */ 
        if (num == -1){
            printf("Exiting shell....\n");
            return (-1);
        }




printf("%s\n",buffer_address);
  free(buffer_address);
}
  return (0);
}
