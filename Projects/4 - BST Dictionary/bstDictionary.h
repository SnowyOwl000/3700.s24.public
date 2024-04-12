#ifndef BSTDICTIONARY_H
#define BSTDICTIONARY_H

#include <cstdint>
#include <stdexcept>

static const uint32_t
    NULL_INDEX = 0xffffffff,
    DEFAULT_INITIAL_CAPACITY = 16;

template <typename KeyType,typename ValueType>
class BSTDictionary {
public:
    explicit BSTDictionary(uint32_t cap=DEFAULT_INITIAL_CAPACITY) {

    }

    ~BSTDictionary() {}

    void clear() { }

    uint32_t size() { }

    int32_t height() { }

    bool isEmpty() { }

    ValueType &search(const KeyType &k) {

    }

    ValueType &operator[](const KeyType &k) {

    }

    void remove(const KeyType &k) {

    }

private:
    uint32_t prvAllocate() {

    }

    void prvFree(uint32_t n) {

    }

    void prvClear(uint32_t r) {

    }

    void prvAdjust(uint32_t r) {

    }

    uint32_t prvInsert(uint32_t r,uint32_t &n,const KeyType &k) {

    }

    uint32_t prvRemove(uint32_t r,uint32_t &ntbd,const KeyType &k) {

    }

    uint32_t
        root;

    static uint32_t
        *counts,
        *heights,
        *left,
        *right,
        nTrees,
        capacity,
        freeListHead;

    static KeyType
        *keys;

    static ValueType
        *values;
};

template <typename KeyType,typename ValueType>
uint32_t *BSTDictionary<KeyType,ValueType>::counts = nullptr;

template <typename KeyType,typename ValueType>
uint32_t *BSTDictionary<KeyType,ValueType>::heights = nullptr;

template <typename KeyType,typename ValueType>
uint32_t *BSTDictionary<KeyType,ValueType>::left = nullptr;

template <typename KeyType,typename ValueType>
uint32_t *BSTDictionary<KeyType,ValueType>::right = nullptr;

template <typename KeyType,typename ValueType>
KeyType *BSTDictionary<KeyType,ValueType>::keys = nullptr;

template <typename KeyType,typename ValueType>
ValueType *BSTDictionary<KeyType,ValueType>::values = nullptr;

template <typename KeyType,typename ValueType>
uint32_t BSTDictionary<KeyType,ValueType>::nTrees = 0;

template <typename KeyType,typename ValueType>
uint32_t BSTDictionary<KeyType,ValueType>::capacity = 0;

template <typename KeyType,typename ValueType>
uint32_t BSTDictionary<KeyType,ValueType>::freeListHead = 0;

#endif
