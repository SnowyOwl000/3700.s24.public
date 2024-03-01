#include <iostream>
#include "sampler.h"
#include "disjointSet.h"

#define REPI(ctr,start,limit) for (uint32_t ctr=(start);(ctr)<(limit);(ctr)++)
#define OPF(b) ((b) ? "pass" : "fail")

const uint32_t
    NUM_SAMPLES = 1000000;

int main() {
    uint32_t
        *count,
        n;

    count = new uint32_t[NUM_SAMPLES];

    REPI(i,0,NUM_SAMPLES)
        count[i] = 0;

    Sampler
        s(NUM_SAMPLES);

    REPI(i,0,NUM_SAMPLES) {
        n = s.getSample();
        count[n]++;
    }

    bool
        okay = true;

    REPI(i,0,NUM_SAMPLES)
        if (count[i] != 1)
            okay = false;

    std::cout << "Sampler: " << OPF(okay) << std::endl;

    //======================= test the disjoint set now

    const uint32_t
        NUM_SETS = 20;

    uint32_t
        a,b;

    std::random_device
        rd;
    std::mt19937
        mt(rd());
    std::uniform_int_distribution<>
        abDis(0,NUM_SETS-1);

    DisjointSet
        ds(NUM_SETS);

    REPI(i,0,NUM_SETS-1) {
        // a,b are random ints 0 .. NUM_SETS-1
        a = abDis(mt);
        b = abDis(mt);

        if (ds.find(a) != ds.find(b)) {
            std::cout << "joining " << a << " and " << b << std::endl;
            ds.join(a,b);
            REPI(j,0,NUM_SETS)
                std::cout << ds.find(j) << ' ';
            std::cout << std::endl;
        } else
            i--;
    }

    return 0;
}
