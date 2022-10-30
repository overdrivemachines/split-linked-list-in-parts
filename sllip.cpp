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
  cout << "numbers: " << numbers << "\n";
  ListNode *start = createLinkedList(numbers);
  printLinkedList(start);
  return 0;
}

vector<ListNode *> splitListToParts(ListNode *head, int k) {
  vector<ListNode *> linkedListParts;
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

// Create a linked list given an array
// returns pointer to head of linked list
ListNode *createLinkedList(int arr[]) {
  ListNode *element = new ListNode(arr[0]);
  ListNode *head = element;

  for (int i = 1; i < sizeof(arr); i++) {
    element->next = new ListNode(arr[i]);
    element = element->next;
  }

  return head;
}