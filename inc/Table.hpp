#pragma once
#include <mutex>
#include <vector>
#include "Philosopher.hpp"

struct Fork {
   std::mutex mutex;
};

struct Table {
    std::vector<Fork> forks;
    std::vector<Philosopher> pilosophers;

    Table();
    ~Table();

    void registerPhilosopher(Philosopher& p);
};
