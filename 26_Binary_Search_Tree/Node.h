#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Node {
    public:
        Node();
        Node(string, int);
        ~Node();
    private:
        Node *left;
        Node *right;
        Node *parent;
        string data;
        int key;
};
#endif