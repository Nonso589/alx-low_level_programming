0x13. C - More singly linked lists
Write a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf
Write a function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h)
Write a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
