//
// Created by scsiet on 2/13/24.
//

#include "simpleQueue.h"

SimpleQueue::SimpleQueue() {

    head = QUEUE_SIZE - 1;
    tail = count = 0;
}

void SimpleQueue::clear() {

    head = QUEUE_SIZE - 1;
    tail = count = 0;
}

void SimpleQueue::enqueue(QueueType d) {

    if (count == QUEUE_SIZE)
        throw std::overflow_error("enqueue: Queue is full");

    data[tail] = d;

    tail = ++tail % QUEUE_SIZE;

    count++;
}

QueueType SimpleQueue::dequeue() {

    if (count == 0)
        throw std::underflow_error("dequeue: Queue is empty");

    head = ++head % QUEUE_SIZE;

    count--;

    return data[head];
}
