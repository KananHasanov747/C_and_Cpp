#include <cstdio>

int main () {
    int gettysburg {};
    printf ("gettysburg:  %d\n", gettysburg);
    printf ("&gettysburg: %p\n", &gettysburg);
    
    int* gettysburg_address = &gettysburg;
    printf ("gettysburg:  %d\n", *gettysburg_address);
    printf ("&gettysburg: %p\n", gettysburg_address);

    int& gettysburg_reference = gettysburg;
    printf ("gettysburg:  %d\n", gettysburg_reference);
    printf ("&gettysburg: %p\n", &gettysburg_reference);
}