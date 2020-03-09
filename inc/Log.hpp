#pragma once
#include <queue>

struct LogRecord {
    std::string data;
};

struct Log {
    std::queue<LogRecord> queue;

    void addRecod(LogRecord rec);
};
