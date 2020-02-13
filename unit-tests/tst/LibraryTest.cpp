#include "catch.hpp"

#include "Book.h"
#include "Library.h"

TEST_CASE("A library can store books", "[library]")
{
    auto library = Library {};

    library.addBook(Book {});
    library.addBook(Book {});

    REQUIRE( library.getBooks().size() == 2 );
}

TEST_CASE("A library can filter books by tag", "[library]")
{
    auto library = Library {};

    auto fooBook = Book {};
    fooBook.setTitle("I'm the foo book");
    fooBook.addTag("foo");
    library.addBook(fooBook);

    auto barBook = Book {};
    barBook.addTag("bar");
    library.addBook(barBook);

    auto filteredBooks = library.getBooks("foo");
    REQUIRE( filteredBooks.size() == 1 );
    REQUIRE( filteredBooks[0].getTitle() == "I'm the foo book");
}

TEST_CASE("A library can clear its books", "[library]")
{
    auto library = Library {};

    library.addBook(Book {});
    library.addBook(Book {});

    REQUIRE( library.getBooks().size() == 2 );
    library.clearBooks();
    REQUIRE( library.getBooks().size() == 0 );
}

TEST_CASE("The library can count its books", "[library]")
{
    auto library = Library {};

    REQUIRE( library.countBooks() == 0 );

    library.addBook(Book {});
    library.addBook(Book {});
    library.addBook(Book {});

    REQUIRE( library.countBooks() == 3 );
}
