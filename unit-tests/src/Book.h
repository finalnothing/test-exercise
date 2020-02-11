#pragma once

#include <memory>
#include <string>

class Book {
public:
    Book();

    /**
     * Sets the book's title
     * @param title the new title
     */
    void setTitle(std::string const title);

    /**
     * Retrieves the book's title
     * @return the book's title
     */
    std::string getTitle();

private:

    class Data;
    std::unique_ptr<Data> data;
};
