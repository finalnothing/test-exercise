#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Book.cpp"

TEST_CASE("The book's title can be set and retrieved", "[book]")
{
    auto book = Book {};
    REQUIRE( book.getTitle() == "" );
    book.setTitle("The Fellowship of the Ring");
    REQUIRE( book.getTitle() == "The Fellowship of the Ring" );
}
