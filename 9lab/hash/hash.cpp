#include <iostream>
using std::cout;
using std::endl;

unsigned int hash(unsigned int x, unsigned int key, unsigned int size)
{
    return (x * key) % size;
}

struct Node
{
    int value;
    unsigned int key;
    Node *next = NULL;
    Node(unsigned int key, int value)
    {
        this->key = key;
        this->value = value;
    }
};
struct HashMap
{
    unsigned int size;
    unsigned int number_of_elements = 0;
    unsigned int key;
    Node **table;
    HashMap(unsigned int size)
    {
        this->size = size;
        table = new Node *[this->size];
        for (int i = 0; i < this->size; i++)
        {
            table[i] = NULL;
        }
    }

    unsigned int h(unsigned int key)
    {
        return hash(key, size - 1, size);
    }

    void add(unsigned int key, int value)
    {
        unsigned int index = h(key);
        if (table[index] == NULL)
        {
            table[index] = new Node(key, value);
            number_of_elements++;
        }
        else
        {
            Node *temp = table[index];
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new Node(key, value);
            number_of_elements++;
        }
    }

    int get(unsigned int key)
    {
        unsigned int index = h(key);
        cout << "Index is " << index << endl;
        if (table[index] == NULL)
        {
            return INT_MIN;
        }
        else
        {
            Node *temp = table[index];
            while (temp != NULL)
            {
                if (temp->key == key)
                {
                    return temp->value;
                }
                temp = temp->next;
            }

            return INT_MIN;
        }
    }

    int pop(unsigned int key)
    {
        unsigned int index = h(key);
        if (table[index] == NULL)
        {
            return INT_MIN;
        }
        else
        {
            if (table[index]->key == key)
            {
                int val = table[index]->value;
                Node *val_node = table[index];
                table[index] = val_node->next;
                delete val_node;
                number_of_elements--;
                return val;
            }

            Node *temp = table[index];
            while (temp->next != NULL)
            {
                if (temp->next->key == key)
                {
                    int val = temp->next->value;
                    Node *val_node = temp->next;
                    temp->next = val_node->next;
                    delete val_node;
                    number_of_elements--;
                    return val;
                }
                temp = temp->next;
            }

            return INT_MIN;
        }
    }
};

int main()
{
    HashMap h(60);
    for (int i = 0; i < 60; i++)
    {
        h.add(i, 3 * i);
    }
    cout << h.number_of_elements << endl;
    cout << h.get(2) << endl;
    cout << h.get(6) << endl;
    cout << h.get(0) << endl;
    cout << h.get(2) << endl;
    cout << h.get(8) << endl;
    cout << h.get(22) << endl;
    cout << h.pop(2) << endl;
    cout << h.pop(6) << endl;
    cout << h.pop(0) << endl;
    cout << h.number_of_elements << endl;

    return 0;
}
