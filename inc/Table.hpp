#pragma once
#include <mutex>
#include <vector>
#include "Philosopher.hpp"
#include "Fork.hpp"
#include "Log.hpp"

struct Table {
    Log log_;
    std::vector<Fork> forks;
    std::vector<Philosopher> pilosophers;

    Table(Log& log);
    ~Table();

    void registerPhilosopher(Philosopher& p);
};
