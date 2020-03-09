#pragma once
#include "Book.hpp"

class Philosopher {
    Book book_;

public:
    Philosopher(Book& book);
};
