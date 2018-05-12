Node* insert(Node *head,int data) {
    // Complete this method

    // testNode pointer to the pointer head
    Node **testNode = &head;

    // Loop to reach the last Node
    // While head is not null
    while (*testNode){
      // testNode becomes the adress of the next node
      testNode = &((*testNode)->next);
    }
    // testNode is at the last Node
    // we create the new Node here
    *testNode = new Node(data);
    return head;
}
