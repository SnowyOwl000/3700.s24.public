//
// Created by scsiet on 2/13/24.
//

#ifndef IRS_SIMPLEQUEUE_H
#define IRS_SIMPLEQUEUE_H

#include <stdexcept>
#include <cstdint>

typedef uint32_t QueueType;

const uint32_t
    QUEUE_SIZE = 131072;

class SimpleQueue {
public:
    SimpleQueue();
    ~SimpleQueue() = default;

    void clear();

    uint32_t size() const { return count; }
    bool isEmpty() const { return count == 0; }

    void enqueue(QueueType);
    QueueType dequeue();

private:
    QueueType
        data[QUEUE_SIZE];
    uint32_t
        head,tail,
        count;
};


#endif //IRS_SIMPLEQUEUE_H
