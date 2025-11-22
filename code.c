#include <stdio.h>

struct product
{
    char name[10];
    float price;
    float rating;
};

int main()
{
    printf("Welcome to Store\n\n");
      printf("----------------------------\n");
    struct product p[5];
    int i, j;
    struct product temp;

    for(i = 0; i < 5; i++)
    {
        printf("%d)Enter product name: ",i+1);
        scanf("%s", p[i].name);

        printf("  Enter price: ");
        scanf("%f", &p[i].price);

        printf("  Enter rating: ");
        scanf("%f", &p[i].rating);
        
        printf("\n----------------------------\n");
    }

    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4 - i; j++)
        {
            if(p[j].rating < p[j+1].rating)
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    
    printf("\nProducts sorted by rating :\n");
    for(i = 0; i < 5; i++)
    {
        printf("Name: %s\tPrice: %f\tRating: %f\n", p[i].name, p[i].price, p[i].rating);
    }

    return 0;
}

