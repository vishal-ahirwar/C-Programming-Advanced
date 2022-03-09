#include "../lib/lib.h"
#include <dlfcn.h>
#include <stdio.h>

int main(void)
{
    void *handle;
    void (*MESSAGE)(const char *);
    char *error;
    handle = dlopen("../lib/lib_l.so", RTLD_LAZY);
    if (!handle)
    {
        fputs(dlerror(), stderr);
        return -1;
    };
    dlerror();
    MESSAGE = dlsym(handle, "MESSAGE");
    if ((error = dlerror()) != NULL)
    {
        fputs(error, stderr);
        return -1;
    };

    MESSAGE("message from Dynamic lib\n");
    dlclose(handle);

    return 0;
};
