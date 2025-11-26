/******************
Name: Tawfek Watted
ID: 211438973
Assignment: ex2
*******************/

#include <stdio.h>

int main()
{
    // MAIN MENU LOOP
    while(1){
        printf("Welcome to our games, please choose an option:\n1. Ducky's Unity Game\n2. The Memory Game\n3. Professor Pat's Power Calculation\n4. The Duck Parade\n5. The Mystery of the Repeated Digits\n6. Good Night Ducks\n");
        int gamenumber;
        // game number input,checking if the number is valid and if it is not , it prints to try again.
        scanf("%d",&gamenumber);
        while (gamenumber<1||gamenumber>6) {
            printf("Invalid option, please try again\n");
            printf("Welcome to our games, please choose an option:\n1. Ducky's Unity Game\n2. The Memory Game\n3. Professor Pat's Power Calculation\n4. The Duck Parade\n5. The Mystery of the Repeated Digits\n6. Good Night Ducks\n");
            scanf("%d",&gamenumber);
        }
        // TASK 1: Ducky's Unity Game
            if(gamenumber==1){
                //entering number and then checking if it is valid or not ,making sure to get valid one.
                printf("please enter a positive number:\n");
                int xa,counter=0;
                scanf("%d",&xa);
                    while(xa<0){
                        printf("Invalid number, please try again\n");
                        scanf("%d",&xa);
                    }
                //counting the number of '1' bits of integer positive number by using loop.
                if (xa>0){
                    while (xa > 0) {
                        counter += xa % 2;
                        xa /= 2;
                    }
               printf("Ducky earns %d corns\n",counter);
                        }
                    }

        // TASK 2: The Memory Game
            else if(gamenumber==2){
                    printf("please enter the number of ducks:\n");
                    long int xb;
                    scanf("%ld", &xb);
                    // Validate duck number.
                    while (xb < 0 || xb > 64) {
                        printf("Invalid number, please try again\n");
                        scanf("%ld", &xb);
                    }
                    if (xb > 0) {
                        printf("you entered %ld ducks\n", xb);
                        unsigned long long binaryx = 0;
                        int choice;

                        // Input:Read each duck's sound and store it in bits.
                        for (int i = 0; i < xb; i++) {
                            printf("duck %d do QUAK? 1 for yes, 0 for no\n", i + 1);
                            scanf("%d", &choice);

                            // Validate input (must be 0 or 1).
                            while (choice != 0 && choice != 1) {
                                printf("Invalid number, please try again\n");
                                scanf("%d", &choice);
                            }
                            // Store the bit (i-th duck).
                            binaryx |= ((unsigned long long)choice << i);
                        }
                        // Output:print each duck's status from the stored bits.
                        for (int i = 0; i < xb; i++) {
                            printf("duck number %d do ", i + 1);

                            if ((binaryx >> i) & 1)
                                printf("Quak\n");
                            else
                                printf("Sh...\n");
                        }
                    }
                }
        // TASK 3: Professor Pat's Power Calculation
     else if(gamenumber==3) {
         //entering number and checking its validity , and the same way with exponent.
         int exp,j,xc,temp1=1;
         printf("please enter the number\n");
         scanf ("%d",&xc);
             while(xc<0){
                 printf("Invalid number, please try again\n");
                 scanf("%d",&xc);
             }
         if (xc>0) {
             printf("please enter the exponent\n");
             scanf ("%d",&exp);
                 while(exp<0) {
                     printf("Invalid number, please try again\n");
                     scanf("%d",&exp);
                 }
                     for (j=0; j<exp; j++)
                         temp1=temp1*xc;
                 }
         // printing the result
                 printf("your power is: %d\n",temp1);
             }
        // TASK 4: The Duck Parade
        else if (gamenumber==4) {
            int xd,t,rows,crow,remaining;
            //entering valid number and if it is valid the code continue but if it is not , the code assures to have valid one.
            printf("please enter number of ducks:\n");
            scanf ("%d",&xd);
            while(xd<0) {
                printf("Invalid number, please try again\n");
                scanf("%d",&xd);
            }
            //
            if (xd>0) {
                rows=xd/10;
                remaining=xd-(rows*10);
                //10 ducks in first row
                for (crow=0; crow<rows; crow++) {
                    //first line
                    for (t=0; t<10; t++)
                        printf("   _        ");
                    printf("\n");
                    //second line
                    for (t=0; t<10; t++)
                        printf("__(o)>      ");
                    printf("\n");
                    //third line
                    for (t=0; t<10; t++)
                        printf("\\___)       ");
                    printf("\n");
                    printf("\n");
                }
                if (remaining>0) {
                    //first line
                    for (t=0; t<remaining; t++)
                        printf("   _        ");
                    printf("\n");
                    //second line
                    for (t=0; t<remaining; t++)
                        printf("__(o)>      ");
                    printf("\n");
                    //third line
                    for (t=0; t<remaining; t++)
                        printf("\\___)       ");
                    printf("\n");
                }
            }
        }
        // TASK 5: The Mystery of the Repeated Digits

        else if (gamenumber==5) {
            int xe,tmp1,tmp2,tmp3;
            int dig1,dig2,fdup=0,counter1,printed;
            printf("please enter number\n");
            scanf ("%d",&xe);
            //validate input
            while(xe<=0) {
                printf("Invalid number, please try again\n");
                scanf("%d",&xe);
            }
           if (xe>0) {
                //Checking if there are duplicates.
                tmp1=xe;
                while (tmp1>0) {
                    dig1=tmp1 - ((tmp1/10)*10);
                    tmp2 = tmp1/10;
                    //Checking if same digit appears several times.
                    while (tmp2>0) {
                        dig2=tmp2 - ((tmp2/10)*10);
                        if (dig1==dig2)
                            fdup=1;
                        tmp2=tmp2/10;
                    }
                    tmp1 = tmp1/10;
                }
                if (fdup==0) continue; // no duplicates --> don't print anything.
                //Printing for each digit.
                tmp1=xe;
                while (tmp1>0) {
                    dig1=tmp1 - ((tmp1/10)*10);

                    //Counting the times of appearance.
                    counter1=0;
                    tmp2=xe;
                    while (tmp2>0) {
                        dig2=tmp2 - ((tmp2/10)*10);
                        if (dig1==dig2)
                            counter1++;
                        tmp2= tmp2/10;
                    }
                    //If digit appears more than once, it will be printed.
                    if (counter1>1) {
                        // this assures that the message isn't already printed.
                        printed=0;
                        tmp3=xe;
                        while (tmp3!=tmp1) {
                            dig2=tmp3 - ((tmp3/10)*10);
                            if (dig1==dig2)
                                printed=1;
                            tmp3=tmp3/10;
                        }
                        if (printed==0)
                            printf("%d appears more than once!\n",dig1);
                    }
                    tmp1= tmp1/10;
                }

            }

        }
        // TASK 6: EXIT
        else if (gamenumber==6) {
            printf("Good night! See you at the pond tomorrow.");
            break;
        }

        }
     }








