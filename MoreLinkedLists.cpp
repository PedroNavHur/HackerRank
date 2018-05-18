Node* removeDuplicates(Node *head){
  //Write your code here
  Node *start = head;

  while(start->next){
    if(start->data == start->next->data ){
      Node* duplicate = start->next;
      start->next = start->next->next;
      delete duplicate;
    } else {
      start = start->next;
    }
  }

  return head;
}
