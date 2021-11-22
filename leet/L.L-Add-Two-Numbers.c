#include <stdio.h>
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int i;
    char *chest;
    while(l1[i] != '\0' && l2[i] != '\0'){
        chest[i] = l1[i]+l2[i];
        i++;
    }
    return *chest;
}

