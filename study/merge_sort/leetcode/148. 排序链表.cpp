/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
 public:
  ListNode* mergeSort(ListNode* head, int listSize) {
    if (head == nullptr || head->next == nullptr) return head;
    int mid = listSize / 2;
    ListNode *p1 = head, *p2 = head;
    for (int i = mid - 1; i > 0; i--) p2 = p2->next;
    ListNode* tmp = p2;
    p2 = p2->next;
    tmp->next = nullptr;

    ListNode* l1 = mergeSort(p1, mid);
    ListNode* r1 = mergeSort(p2, listSize - mid);

    ListNode ret, *p = &ret;
    while (l1 != nullptr || r1 != nullptr) {
      if (r1 == nullptr || l1 != nullptr && (l1->val <= r1->val)) {
        p->next = l1;
        p = p->next;
        l1 = l1->next;
      } else {
        p->next = r1;
        p = p->next;
        r1 = r1->next;
      }
    }
    return ret.next;
  }

  ListNode* sortList(ListNode* head) {
    int listSize = 0;
    ListNode* p = head;
    while (p) p = p->next, listSize++;
    return mergeSort(head, listSize);
  }
};