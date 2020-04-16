

#include <stdio.h>

void changeValue(int new_value, int* first_value){
	*first_value = new_value;
	printf("at address %p its value has changed to %d \n", first_value, *first_value);

}

int* callChangeValue(){
	int values[] = {1,2,3};
	int* g = values;
	printf("g   points to address %p where is stored the first value :%d  \n", g,*g);
	printf("g+1 points to address %p where is stored the secnd value :%d  \n", g+1,*(g+1));

	printf("\n");
	printf("\n");
	changeValue(55, g);
	return g;

}

int main()
{
	//declare p_address. it has a garbage value *p_address an an address in which
	//it is stored
	int* p;
	printf("garbage value of p : %d\n", *p);
	printf("address of p : %p\n", p);
	// this is a pointer to a pointer
	int* *q = &p; // here we have p_address stored in *q;
	printf("q points to p address which is %p\n",*q);
	printf("q can get what pointer p points to, which is %d\n",**q);
	printf("\n");
	printf("CHANGING VALUES\n");
	printf("\n");
	p = callChangeValue();
	printf("P UPDATED \n p points to address %p where its stored the value %d\n", p, *p);
	printf("q points to p address which is still the same %p\n",q);
	printf("q can get to what address p is pointing to:  %p\n",*q);
	printf("q can get what is stored in the address p is pointing to, which changed to %d\n",**q);
	printf("p+1 points to address %p where its stored the value %d\n", p+1, *(p+1));

	return 0;
}
