void reversePrint(SinglyLinkedListNode* head) {
    vector<int>v;
    while(head!=NULL)
    {
        v.push_back(head->data);
        head = head->next;
    }
    for(int i=v.size()-1; i>=0; i--)
    cout<<v[i]<<endl;
}