#include<iostream>
using namespace std;
class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print(ListNode* head){
        ListNode * ptr = head;
        while(ptr!=NULL){
            cout<< ptr->val<<" ";
            ptr = ptr->next;
        }
    }


ListNode* rotateRight(ListNode* head, int k) {
         ListNode*ptr1=head;
        ListNode*ptr2=head;
        ptr2=ptr1->next;
        for(int i=0;i<k;i++){
            while(ptr2!=NULL)
            if(ptr2->next==NULL){
                ptr1->next = NULL;
                ptr2->next=head;
                head=ptr2;
                break;
            }
            else{
                ptr1=ptr2;
                ptr2=ptr2->next;
            }
        }return head;
    }


ListNode* reverseBetween(ListNode* head, int m, int n) {
    ListNode* ptr1=head;
    ListNode* prev=NULL;
    ListNode* ptr2=NULL;
    ListNode* temp=NULL;
    int i=0;
    for(i=1;i<m;i++){
        prev =ptr1;
        ptr1=ptr1->next;
    }
    cout<<prev->val;
    
    for(int j=m; j<n; j++){
        
        ptr2=ptr1->next;
        ptr1->next=prev;
        prev=ptr1;
        ptr1=ptr2;
        
    }
    cout<<ptr1->val;
    return head;
    

}


int main(){
    ListNode *L1 = new ListNode(5, NULL);
    ListNode *L2 = new ListNode(4, L1);
    ListNode *L3 = new ListNode(3, L2);
    ListNode *L4 = new ListNode(2, L3);
    ListNode *L5 = new ListNode(1, L4);

    print(L5);
    cout<<endl;
    L5 = reverseBetween(L5, 2, 4);
    cout<<endl;
    print(L5);

}