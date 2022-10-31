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
  int numbers[] = {25, 63, 70, 23, 25, 11, 81, 35, 77, 70, 52, 26, 80, 96, 98, 10, 3, 76, 66};

  cout << "Numbers Array size: " << sizeof(numbers) / sizeof(numbers[0]) << endl;

  // Create Linked list using numbers array as values
  ListNode *element = new ListNode(numbers[0]);
  ListNode *head = element;

  for (unsigned int i = 1; i < (sizeof(numbers) / sizeof(numbers[0])); i++) {
    element->next = new ListNode(numbers[i]);
    element = element->next;
  }

  // Print the Linked List
  printLinkedList(head);

  // Split the linked list into parts
  splitListToParts(head, 4);

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

  // Size of each Link List
  int partSize[k] = {0};

  // extra
  int extras = totalElements % k;

  // Print Number of elements in each linked list
  for (int i = 0; i < k; i++) {
    partSize[i] = totalElements / k;
    if (extras) {
      partSize[i]++;
      extras--;
    }

    cout << "LL" << i << " size: " << partSize[i] << endl;
  }

  exit(0);

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
