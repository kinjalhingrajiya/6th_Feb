
void main()
{
    int i,odd_sum=0,even_sum=0;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            even_sum = even_sum + i;
           
            
     	}
        else
    	{
            odd_sum = odd_sum + i;
        }
    }
    printf("Sum of  odd numbers  = %d\n", odd_sum);
    printf("Sum of  even numbers = %d", even_sum);
}
