
template <typename T>
Stack<T>::Stack()
{
    this->last = nullptr;
}

template <typename T>
Stack<T>::~Stack()
{
    while(!this->isEmpty()) {
        this->pop();
    }
}

template <typename T>
void Stack<T>::push(T value)
{
    auto node = new StackNode<T>();

    node->value = value;

    node->next = this->last;

    this->last = node;
}

template <typename T>
T Stack<T>::pop()
{
    auto value = this->last->value;

    StackNode<T> *newLast = this->last->next;

    delete this->last;

    this->last = newLast;

    return value;
}

template <typename T>
T Stack<T>::peek()
{
    return this->last->value;
}

template <typename T>
bool Stack<T>::isEmpty()
{

    return this->last == nullptr;
}