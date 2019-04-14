/*****************
design a stack by muself,faster than 90%,less than 100 %
*****************/

typedef struct node{
    char a;
    struct node * next;
}node;
typedef node * nodePtr;

void push(nodePtr * head,char a){
    nodePtr newnode = malloc(sizeof(node));
    newnode->a = a;
    newnode->next = NULL;
    if(*head == NULL){
        *head = newnode;
    }
    else{
        newnode->next = *head;
        *head = newnode;
    }
}

void pop(nodePtr * head){
    *head = (*head)->next;
}

bool isValid(char* s) {
    node * head = NULL;
    for(int i = 0;i < strlen(s);i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            push(&head,s[i]);
        }
        else{
            if(head == NULL){
                return false;
            }
            else{
                if((s[i] == ']' && head->a == '[') || (s[i] == ')' && head->a == '(') || (s[i] == '}' && head->a == '{')){
                    pop(&head);
                }
                else{
                    return false;
                }
            }
        }
    }
    if(head != NULL){
        return false;
    }
    return true;
}
