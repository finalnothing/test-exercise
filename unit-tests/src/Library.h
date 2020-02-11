#pragma once

#include "Book.h"

class Library
{
    std::vector<Book> books;

public:

    /**
     * Adds the given @p to the library's collection
     * @param book the book to add
     */
    void addBook(Book book);

    /**
     * Retrieves all books that are stored in the library
     * @return list of books
     */
    std::vector<Book> getBooks();

    /**
     * Retrieves all books stored in the library that are tagged with the given @p tag
     * @param tag the tag to filter by
     * @return list of all matching books
     */
    std::vector<Book> getBooks(std::string const& tag);

    /**
     * Clears the list of books that are stored in the library
     */
    void clearBooks();
};
