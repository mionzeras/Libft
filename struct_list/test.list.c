
int	main(void)
{
	t_list	*l1 = (t_list *)malloc(sizeof(t_list));
	t_list	*l2 = (t_list *)malloc(sizeof(t_list));
	t_list	*l3 = (t_list *)malloc(sizeof(t_list));
	t_list	*curr;


	int a = 1;
	int	b = 2;
	int	c = 3;
	
	l1->content = (void *)&a; 
	l2->content = (void *)&b; 
	l3->content = (void *)&c;
	
	l1->next = l2; 
	l2->next = l3; 
	l3->next = NULL;
	
	curr = l1;

	while (curr)
	{
		printf("%d\n", *(int *)curr->content);
		curr = curr->next;
	}
	free(l1);
	free(l2);
	free(l3);
 
}