#include <stdio.h>
#include <stdlib.h>
#include "dirent.h"
#include <locale.h>

#define DIRECTORY "C:\\Users\\klabu\\Desktop\\new dir"

int main(void)
{
    DIR* dir;
    struct dirent* ent;
    if ((dir = opendir(DIRECTORY)) != NULL)
    {
        /* print all the files and directories within directory */
        while ((ent = readdir(dir)) != NULL) 
        {
            printf("%s\n", ent->d_name);
        }
        closedir(dir);
    }

    else 
     {
      perror("");
      return EXIT_FAILURE;
     }
}