int x=10;
int *p=&x;

int *q=p;

printf("%d",*q);

// Output:

// 10

// Because:

// q stores same address as p