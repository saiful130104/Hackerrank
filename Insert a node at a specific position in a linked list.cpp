SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    int cnt=1;
    SinglyLinkedListNode *nptr = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    nptr->data = data;
    SinglyLinkedListNode *tmp;
    if(position==0)
    {
        nptr->next = head;
        head = nptr;
        return head;
    }
    tmp = head;
    while(cnt<position)
    {
        tmp=tmp->next;
        cnt++;
    }
    nptr->next=tmp->next;
    tmp->next = nptr;
    return head;
}