template <typename T>
struct Node
{
    Node(): link(nullptr), value(0) {}
    Node(const T val): link(nullptr), value(val) {}
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

    List<T>& operator=(const List& rhs);

    // element access
    void insert(const T value);
    void remove(const T value);
    bool query(const T value);
    T min();
    T max();

    // getters
    int n_elements() const {return n_elements;}
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
