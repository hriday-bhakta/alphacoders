#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

// use pointers everywhere

int main(void) {
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 1; i <= 3; i++) {
        Node *new_node = malloc(sizeof(Node)); // new node pointer having completely random memory address on the heap
        if (new_node == NULL) return 1;

        new_node->value = i * 10;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node; // First node becomes head
            tail = new_node;
        } else {
            tail->next = new_node; // Link previous tail to new node
            tail = new_node;       // Advance tail
        }
    }

    // Traverse and print
    for (Node *curr = head; curr != NULL; curr = curr->next) {
        printf("%d%s", curr->value, curr->next ? " -> " : "\n");
    }

    // Free all heap nodes safely
    Node *curr = head;
    while (curr != NULL) {
        Node *next_node = curr->next; // Save next address BEFORE freeing curr!
        free(curr);
        curr = next_node;
    }

    return 0;
}

/*Programs to try:
1. Insert at front and end
2. Delete by value
3. Insert at position
ADVANCED:
1. Reverse a linked list
2. Find middle node without counting
3. Merge two sorted linked lists */