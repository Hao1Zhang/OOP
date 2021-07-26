#include "Library.h"
int main() {
    Library lib;
    char buf[256];
    int bookCount = 10;
    for( int i = 0; i < bookCount ; i ++ ){
        sprintf(buf, "Book-%d", i + 1);
        Book bk(buf);
        lib.addBook(bk);
    }
    lib.printBooks();
}
