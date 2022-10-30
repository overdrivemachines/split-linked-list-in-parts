#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
  ListNode(int *arr) {
    // for (int i = 0; i < (*arr).size(); i++) {
    // }
  }
};

vector<ListNode *> splitListToParts(ListNode *head, int k);
void printLinkedList(ListNode *head);

int main(int argc, char const *argv[]) {
  ListNode *start = new ListNode(5);
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