/* #include "push_swap.h"


void loop(t_list **stack)
{
    // t_list *a = *stack;
    // while (*stack)
    // {
    //     (stack) = &(*stack)->next;
    // }
    stack->next = NULL;

}
int main (void)
{
    t_list *a;
    t_list *b;
    int c = 2;
    int d = 3;
    a = ft_lstnew((int)c);
    b = ft_lstnew((int)d);
    ft_lstadd_back(&a, b);
    printf("ANATES %d\n", a->content); 
    loop(a);
    printf("num %d\n", a->next->content); 
    
} */