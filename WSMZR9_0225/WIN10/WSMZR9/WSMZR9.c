#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("gazdicsko.txt", "w");
    fprintf(fPointer, "Gazdicskó Marcell, Programtervező Informatikus, WSMZR9");
    fclose(fPointer);
    return 0;
}
