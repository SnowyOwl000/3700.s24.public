#include <iostream>
#include "simpleQueue.h"

using namespace std;

const uint32_t
    N_BINS = 2,
    N_LOOPS = 32;

uint32_t
    myListOfData[100000];
SimpleQueue
    bigQ,
    bins[N_BINS];

uint32_t readData(uint32_t data[]) {
    uint32_t
        n = 0;

    while (true) {
        cin >> data[n];

        if (!cin)
            break;

        n++;
    }

    return n;
}

void sortData(uint32_t data[],uint32_t nItems) {
    uint32_t
        factor = 1,
        n;

    // put myListOfData in big queue
    for (uint32_t i=0;i<nItems;i++)
        bigQ.enqueue(data[i]);

    // loop 32 times
    for (uint32_t i=0;i<N_LOOPS;i++) {
        // distribute big queue
        while (!bigQ.isEmpty()) {
            n = bigQ.dequeue();

            bins[(n/factor) % N_BINS].enqueue(n);
        }

        // collect into big queue
        for (uint32_t j=0;j<N_BINS;j++)
            while (!bins[j].isEmpty())
                bigQ.enqueue(bins[j].dequeue());

        factor *= N_BINS;
    }

    // when done, put sorted back
    for (uint32_t i=0;i<nItems;i++)
        data[i] = bigQ.dequeue();
}

void printData(uint32_t data[],uint32_t nItems) {

    for (uint32_t i=0;i<nItems;i++)
        cout << data[i] << endl;
}

int main() {
    uint32_t
        nItems;

    nItems = readData(myListOfData);

    sortData(myListOfData, nItems);

    printData(myListOfData, nItems);

    return 0;
}
