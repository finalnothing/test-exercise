#include "Book.h"

struct Book::Data {
    std::string title;
};

Book::Book()
: data{std::make_unique<Data>()}
{}

std::string Book::getTitle() {
    return data->title;
}

void Book::setTitle(std::string const title) {
    data->title = title;
}
