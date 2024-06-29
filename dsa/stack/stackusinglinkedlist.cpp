//
// Created by adi81 on 6/29/2024.
//

#include <iostream>

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    Node* createNode(int value) {
        Node* newNode = new Node();
        if(!newNode) {
            std::cout << "Memory error\n";
            return nullptr;
        }
        newNode->data = value;
        newNode->next = nullptr;
        return newNode;
    }

    void push(int value) {
        Node* newNode = createNode(value);
        if (newNode) {
            newNode->next = top;
            top = newNode;
        }
    }

    int pop() {
        if (top == nullptr) {
            std::cout << "Stack is empty. Can't pop!" << std::endl;
            return -1;
        }
        int value = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return value;
    }

    int peek() {
        if (top == nullptr) {
            std::cout << "Stack is empty." << std::endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack myStack;
    myStack.push(1);
    myStack.push(2);
    std::cout << myStack.pop() << std::endl;
    std::cout << myStack.peek() << std::endl;
    return 0;
}