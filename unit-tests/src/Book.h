#pragma once

#include <memory>
#include <string>
#include <vector>

class Book {
    std::string title;
    std::vector<std::string> tags;

public:

    Book() = default;
    ~Book() = default;

    /**
     * Sets the book's title
     * @param title the new title
     */
    void setTitle(std::string const aTitle);

    /**
     * Retrieves the book's title
     * @return the book's title
     */
    std::string getTitle();

    /**
     * Retrieves a list of tags, that the book has been tagged with
     * @return list of tags
     */
    std::vector<std::string> getTags();

    /**
     * Adds a tag to the book's list of tags. If the book's tags already contain the @p tag, it is not added.
     * @param tag the tag to add
     */
    void addTag(std::string const& tag);

    /**
     * Checks whether the book is tagged with the given @p tag
     * @param tag the tag check
     * @return `true` if the book is tagged with @p tag. `false` otherwise
     */
    bool hasTag(std::string const& tag);
};
