#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void detectCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Cycle Detected\n";
//calculate cycle length
            int cycleLength = 1;
            Node* temp = slow->next;
            while (temp != slow) {
                temp = temp->next;
                cycleLength++;
            }
            cout << "Cycle Length: " << cycleLength << "\n";
//calculate starting point of cycle
            Node* ptr1 = head;
            Node* ptr2 = slow;
            while (ptr1 != ptr2) {
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }

            cout << "Cycle starts at node with value: " << ptr1->data << "\n";
            return;
        }
    }

    cout << "No Cycle\n";
}

int main() {
    // Creating a linked list with a cycle for testing
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head->next->next->next->next->next = head->next;

    detectCycle(head);

    return 0;
}
