
void Reverse() {
    if (head == nullptr || head->next == nullptr)
        return; 

    Node* current = head;
    Node* temp = nullptr;

    while (current != nullptr) {
        temp = current->previous;
        current->previous = current->next;
        current->next = temp;

  
        current = current->previous;
    }

    if (temp != nullptr)
        head = temp->previous;
}
