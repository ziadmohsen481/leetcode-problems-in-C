/******************creating linked stack*******************/
typedef char stackEntry; // defining stackentry data
typedef struct stacknode
{
    stackEntry entry;
    struct stacknode* next; // pointer to next
    
}node;

node* top=NULL; // top of stack
//int size=0;
/*push function*/
node* push(stackEntry e,node* top)
{

    node* pn=(node*)malloc(sizeof(node));
    pn->entry=e;
    pn->next=top;
    top=pn;
    //size++;
    return top;
}
/*pop function*/
 node* pop(stackEntry* e,node*top)
 {
    *e=top->entry;
    node* tmp_top=top;
    top=top->next;
    free(tmp_top);
    //size--;
    return top;
 }
 /*int isEmpty()
 {
     return size==0;
 }*/
/************************************************************/

bool isValid(char * s)
{
    stackEntry out;
    int push_count=0; //indicator for size of the stack
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
        {
            top=push(s[i],top);
            push_count++;
        }
        else if(s[i]=='{')
        {
            top=push(s[i],top);
            push_count++;
        }
        else if(s[i]=='[')
        {
            top=push(s[i],top);
            push_count++;
        }
        else
        {
            if((0==push_count)|| (s[i]==')' && top->entry!='(')
            || (s[i]=='}' && top->entry!='{')
            || (s[i]==']' && top->entry!='['))
            {
                return false;
            }
           else if((s[i]=='}' && top->entry!='{'))
            {
                return false;
            }
            else if((s[i]==']' && top->entry!='['))
            {
                return false;
            }
         top=pop(&out,top);
         push_count--;
         printf("pushcounts=%d\n",push_count);
        }
    }
    return push_count==0;
}
