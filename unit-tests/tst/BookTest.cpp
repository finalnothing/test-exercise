#include "catch.hpp"

#include "Book.h"

TEST_CASE("The book's title can be set and retrieved", "[book]")
{
    auto book = Book {};
    REQUIRE( book.getTitle() == "" );

    book.setTitle("The Fellowship of the Ring");
    REQUIRE( book.getTitle() == "The Fellowship of the Ring" );
}

TEST_CASE("Tags can be added to a book", "[book]")
{
    auto book = Book {};
    REQUIRE( book.getTags() == std::vector<std::string> {} );

    book.addTag("fantasy");
    book.addTag("classic");
    REQUIRE( book.getTags() == std::vector<std::string> { "fantasy", "classic" } );
}