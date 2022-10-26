#include "Swap_H.h"

void swap(void* firstElement, void* secondElement, int size)
{
    void* buffer = (void*) malloc(size);
    memcpy(buffer,firstElement,size);
    memcpy(firstElement,secondElement,size);
    memcpy(secondElement,buffer,size);
    free(buffer);
}