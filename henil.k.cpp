#include<stdio.h>

main()

    int  a=15,b=16,c=17
    
    if(a<b)
{
	if(a<c)
	{
        printf("A is minimum");
    }    
    else
    {
    	printf("C is minimum");
    
	}

}
else
{ 
    if(b<c)
    {
    	printf("B is minimum");
	}
    else
        printf("C is minimum");
 
}

