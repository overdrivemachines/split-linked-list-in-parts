#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

vector<ListNode *> splitListToParts(ListNode *head, int k);
void printLinkedList(ListNode *head);
ListNode *createLinkedList(int arr[]);

int main(int argc, char const *argv[]) {
  int numbers[] = {5, 8, 9, 32, 2, -1, 0, 65};

  // Create Linked list using numbers array as values
  ListNode *element = new ListNode(numbers[0]);
  ListNode *head = element;

  for (int i = 1; i < sizeof(numbers) / sizeof(int); i++) {
    element->next = new ListNode(numbers[i]);
    element = element->next;
  }

  // Print the Linked List
  printLinkedList(head);

  // Split the linked list into parts
  splitListToParts(head, 3);

  return 0;
}

// Split linked list into equal parts
// Returns vector of linked lists
vector<ListNode *> splitListToParts(ListNode *head, int k) {
  vector<ListNode *> linkedListParts;

  ListNode *element = head;

  // Total number of elements in linked list
  int totalElements = 0;
  // Count total number of nodes
  while (element != nullptr) {
    totalElements++;
    element = element->next;
  }

  // Number of elements in each linked list part
  int partSize[k] = {totalElements / k};

  cout << "Total elements: " << totalElements << endl;
  cout << "Number of parts: " << k << endl;
  cout << "Number of elements in each part: ";

  for (int i = 0; i < k; i++) {
    cout << partSize[k] << " ";
  }

  return linkedListParts;
}

// Print a linked list from head to tail
// eg. 4->5->7>2->NULL would be the output
void printLinkedList(ListNode *head) {
  ListNode *element;

  element = head;
  while (element != nullptr) {
    cout << element->val << "->";
    element = element->next;
  }
  cout << "NULL" << endl;
}
