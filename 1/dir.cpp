#include "myself/apue.h"

int main(int argc, char *argv[]) {
    DIR *fp;
    struct dirent *dirp;
    
    if(argc != 2) {
        exit(1);
    }

    if( (fp = opendir(argv[1])) == nullptr) {
        printf("cannot open file %s", argv[1]);
        exit(1);
    }
    while( (dirp = readdir(fp)) != nullptr)
        printf("%s\n", dirp->d_name);

    closedir(fp);
    return 0;
}