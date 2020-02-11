#include "Book.h"

#include <algorithm>

std::string Book::getTitle()
{
    return title;
}

void Book::setTitle(std::string const aTitle)
{
    title = aTitle;
}

std::vector<std::string> Book::getTags()
{
    return tags;
}

void Book::addTag(std::string const& tag)
{
    tags.push_back(tag);
}

bool Book::hasTag(std::string const &tag)
{
    return (std::count(tags.begin(), tags.end(), tag) != 0);
}
