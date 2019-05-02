int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    vector<int>v;
    while(head!=NULL)
    {
        v.push_back(head->data);
        head = head->next;
    }
    return v[v.size()-1-positionFromTail];
}