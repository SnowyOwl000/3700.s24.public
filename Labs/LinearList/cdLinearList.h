//
// Created by Dr. Bob Kramer on 3/21/24.
//

#ifndef CDLINEARLIST_H
#define CDLINEARLIST_H

#include <cstdint>

template <typename ListType>
struct ListNode {
    ListType
        key;                // the value stored in the node
    ListNode<ListType>
        *next,*prev;        // pointers to next and previous nodes
};

template <typename ListType>
class LinearList {
public:
    LinearList() {

        // set root to null

        // set count to 0
    }

    ~LinearList() {

        // call the clear function
    }

    uint32_t size() { return count; }

    bool isEmpty() { return count == 0; }

    void clear() {
        ListNode<ListType>
            *tmp;

        // for i = 0 to (count-1) do

            // remember second node in list

            // delete head node

            // set head to second node

        // end for
    }

    uint32_t search(const ListType &k) {
        // declare tmp pointer, initialize to head of list

        // for i = 0 to (count-1) do

            // if k == tmp->key

                // return i

            // move tmp to next node

        // end for

        // if we get here, key not in list. Throw exception.
    }

    ListType &operator[](uint32_t pos) {
        // declare tmp pointer, initialize to head of list

        // if pos is invalid (< 0 or >= count), throw exception

        // for i = 0 to (pos - 1) do

            // move tmp to next node

        // end for

        // return tmp->key
    }

    void traverse(void (*fp)(ListType &)) {
        // declare tmp pointer, initialize to head of list

        // for i = 0 to (count - 1) do

            // call the function, pass tmp->key

            // move tmp to next node

        // end for
    }

    void insert(uint32_t pos,const ListType &k) {

        // step 0: make sure pos is valid (>= 0 and <= count, note the <= part)

        // zwischenzug (in-between move): if count is zero, then this is the
        // only node. set head to point here, count to 1, and skip the rest.
        // this only applies to circular, doubly-linked lists.

        // step 1: create new node, place k in the node

        // step 2: find the predecessor (and successor)

        // step 3: set up new node pointers

        // step 4: predecessor points to new node (so does successor)

        // step 5: update count

        // extra step: update head of list if necessary
    }

    void remove(uint32_t pos) {

        // step 0: make sure pos is valid (>= 0 and < count this time)

        // if count is 1, set head to null, count to zero and skip the rest of this

        // step 1: find the predecessor (and successor)

        // step 2: remember the node to be deleted

        // step 3: point around NTBD

        // step 4: delete the node

        // step 5: adjust count

        // extra step: update head of list if necessary
    }

private:
    ListNode<ListType>
        *root;
    uint32_t
        count;
};

#endif //CDLINEARLIST_H
