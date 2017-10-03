// Remember to link with pthread

#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>

void * dosomething(void *arg)
{
    printf("thread started running\n");
    return NULL;
}

int main(int argc, char *argv[])
{
    pthread_t siima;
    int errcode;
    long data;

    errcode = pthread_create(&siima, NULL, &dosomething, (void*) data);

    if (errcode != 0)
    {
            printf("something went wrong");
            exit(1);

    }
    printf("Hello World! Were back in main\n");
    sleep(2);
    return 0;
}
