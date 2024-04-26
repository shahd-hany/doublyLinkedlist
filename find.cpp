Node* findKthFromEnd(int k) {
    if (head == nullptr || k <= 0)
        return nullptr;

    Node* fast = head;
    Node* slow = head;

  
    for (int i = 0; i < k; ++i) {
        if (fast == nullptr)
            return nullptr;
        fast = fast->next;
    }
    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow; 
}
