#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
   char buff[255];
   fp = fopen("/bin/hello.aot", "r");
   fscanf(fp, "%s", buff);
   printf("%s\n", buff);
   fprintf(fp, "This is testing for fprintf...\n");
   fclose(fp);
}
