#include <cstddef>
#include <iostream>

#define nullptr 0

template <typename T>
struct Node
{
    Node(): link(nullptr), value(0) {}
    Node(T const& val): link(nullptr), value(val) {}
    Node(const Node<T>* node): link(nullptr), value(node->value) {}

    Node<T> *link;
    T value;
};

template <typename T>
class SkipList
{
public:
    // constructor
    SkipList(): head(nullptr), n_elements(0) {}
    ~SkipList();

    SkipList<T>& operator=(const SkipList& rhs);

    // element access
    void insert(T const& value);
    void remove(T const& value);
    bool query(T const& value);
    T min();
    T max();

    // getters
    int nElements() const {return n_elements;}
private:
    int n_elements;
    Node<T> *head;
};

// TODO: Copy function
// template <typename T>
// SkipList<T>& SkipList<T>::operator=(const List& rhs)
// {
//     n_elements = rhs.n_elements;
//     Node<T> d;
//     for (Node<T>* r = rhs.head; )
// }
