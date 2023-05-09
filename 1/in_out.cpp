#include "myself/apue.h"

#define BUFSIZE 4096

int main(void) {
    int n;
    char buf[BUFSIZE];

    while( (n = read(STDIN_FILENO, buf, BUFSIZE)) > 0) {
        if(write(STDOUT_FILENO, buf, n) != n){
            fputs("write error", stderr);
            exit(1);
        }
    }
    exit(0);
}