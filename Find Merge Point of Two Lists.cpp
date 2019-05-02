int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    vector<int>v1,v2;
    while(head1!=NULL)
    {
        v1.push_back(head1->data);
        head1 = head1->next;
    }
    while (head2 != NULL) {
      v2.push_back(head2->data);
      head2 = head2->next;
    }
    int i=v1.size()-1, j = v2.size()-1,cnt=0;
    while(i>=0 && j>=0)
    {
        if(v1[i]!=v2[j])
            break;
        i--;
        j--;
        cnt++;
    }
    if(i<0 && j<0)
      return v1[v1.size() - cnt + 1];
    return v1[v1.size()-cnt];
    
}