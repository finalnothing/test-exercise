#include "Library.h"

void Library::addBook(Book book)
{
    books.push_back(book);
}

std::vector<Book> Library::getBooks()
{
    return books;
}

std::vector<Book> Library::getBooks(std::string const& tag)
{
    auto out = std::vector<Book> {};
    for (auto book : books)
    {
        if (book.hasTag(tag))
        {
            out.push_back(book);
        }
    }

    return out;
}

void Library::clearBooks()
{
    books.clear();
}
