bool has_cycle(SinglyLinkedListNode* head) {
  map<SinglyLinkedListNode *, bool> mp;
  if (head == NULL)
    return false;
    while(head!=NULL)
    {
        if(mp[head->next])
        return true;
        mp[head->next] = 1;
        head = head->next;
    }
    return false;
}