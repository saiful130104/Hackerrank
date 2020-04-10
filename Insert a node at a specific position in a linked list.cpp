SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* head_ptr = head;
    SinglyLinkedListNode* insert_node = new SinglyLinkedListNode(data);

    // check for no movement
    if (!position)
    {
        insert_node->next = head;
        head = insert_node;
        return head;
    }

    // iterate through node to get to one before position
    for (int i = 1; i < position; i++) {
        head_ptr = head_ptr->next;
    }

    // set the insert node's next to the temp node's next
    insert_node->next = head_ptr->next;

    // add insert node at the next position
    head_ptr->next = insert_node;

    // return
    return head; 
}
