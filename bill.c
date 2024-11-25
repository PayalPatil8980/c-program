#include <stdio.h>

struct bill
{
    int cust;
    int rate;
    int qty;
    int amount;
    float disc;
    int biilam;
    float gst;
    int netbill;
};

int main()
{
    struct bill s1[2];
    for (int i = 0; i < 2; i++)
    {
        s1[i].amount = 0;
        s1[i].disc = 0;
        s1[i].biilam = 0;
        s1[i].netbill = 0;
        s1[i].gst = 0;

        printf("Enter customer no:");
        scanf("%d", &s1[i].cust);

        printf("Enter the rate:");
        scanf("%d", &s1[i].rate);
        printf("Enter the qty:");
        scanf("%d", &s1[i].qty);

        s1[i].amount = s1[i].rate * s1[i].qty;
        s1[i].disc = s1[i].amount * 5 / 100;
        s1[i].biilam = s1[i].amount - s1[i].disc;
        s1[i].gst = s1[i].biilam * 0.18;
        s1[i].netbill = s1[i].biilam + s1[i].gst;

        printf("Rate: %d\n", s1[i].rate);
        printf("qty: %d\n", s1[i].qty);
        printf("amount: %d\n", s1[i].amount);
        printf("discount: %.2f\n", s1[i].disc);
        printf("billamount: %d\n", s1[i].biilam);
        printf("gst: %.2f\n", s1[i].gst);
        printf("netbill: %d\n", s1[i].netbill);

        /* printf("Rate \t Qty \t Amount \t Discount \t Billamount \t Gst \t Netbill\n");
         printf("%d \t %d \t %d \t %.2f \t %d \t %.2f \t %d\n");*/
    }
}