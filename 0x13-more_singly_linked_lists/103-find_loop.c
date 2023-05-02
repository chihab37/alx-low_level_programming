#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char *argv[])
{
    DIR *dir;
    struct dirent *entry;
    struct stat fileStat;
    char path[1024];

    if (argc != 2)
    {
  if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
        return 1;
    }

    dir = opendir(argv[1]);
    if (dir == NULL)
    {
        perror("opendir");
        return 1;
    }

    while ((entry = opendir)) 
	   {
		   struct listint_t = new;
		   malloc((sizeof(listint_t list));

