#include "base.h"

int sl_delete_first(Slist **head)
{
    Slist *temp=*head;
    *head=(*head)->link;
    free(temp);
    return SUCCESS;
}