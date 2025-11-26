/******************
Name: Tawfek Watted
ID: 211438973
Assignment: ex2
*******************/

#include <stdio.h>

int main()
{
    // MAIN MENU LOOP
    while(1==1){
        printf("Welcome to our games, please choose an option:\n1. Ducky's Unity Game\n2. The Memory Game\n3. Professor Pat's Power Calculation\n4. The Duck Parade\n5. The Mystery of the Repeated Digits\n6. Good Night Ducks\n");
        int gamenumber;
        scanf("%d",&gamenumber);
        while (gamenumber<1||gamenumber>6) {
            printf("Invalid option, please try again\n");
            printf("Welcome to our games, please choose an option:\n1. Ducky's Unity Game\n2. The Memory Game\n3. Professor Pat's Power Calculation\n4. The Duck Parade\n5. The Mystery of the Repeated Digits\n6. Good Night Ducks\n");
            scanf("%d",&gamenumber);
        }

        // TASK 1: Ducky's Unity Game
            if(gamenumber==1){
                printf("please enter a positive number:\n");
                int xa,counter=0;
                scanf("%d",&xa);
                    while(xa<0){
                        printf("Invalid number, please try again\n");
                        scanf("%d",&xa);
                    }
                if (xa>0){
                    int i,temp1,temp2;
                    for(i=0; i<30; i++){
                        temp1 = xa%2;
                        temp2 = xa/2;
                        if(temp1==1){
                            counter++;
                            xa = temp2;
                        }
                        else
                            xa= temp2;
                    }
                }
                printf("Ducky earns %d corns\n",counter);
            }
        // TASK 2: The Memory Game
            else if(gamenumber==2){
                printf("please enter the number of ducks:\n");
                long int xb,i;
                int duck1=0,duck2=0,duck3=0,duck4=0,duck5=0,duck6=0,duck7=0,duck8=0;
                int duck9=0,duck10=0,duck11=0,duck12=0,duck13=0,duck14=0,duck15=0,duck16=0
                ,duck17=0,duck18=0,duck19=0,duck20=0,duck21=0,duck22=0,duck23=0,duck24=0,
                duck25=0,duck26=0,duck27=0,duck28=0,duck29=0,duck30=0,duck31=0,duck32=0,
                duck33=0,duck34=0,duck35=0,duck36=0,duck37=0,duck38=0,duck39=0,duck40=0,
                duck41=0,duck42=0,duck43=0,duck44=0,duck45=0,duck46=0,duck47=0,duck48=0,
                duck49=0,duck50=0,duck51=0,duck52=0,duck53=0,duck54=0,duck55=0,duck56=0,
                duck57=0,duck58=0,duck59=0,duck60=0,duck61=0,duck62=0,duck63=0,duck64=0;
                scanf ("%ld",&xb);
                while (xb<0){
                        printf("Invalid number, please try again\n");
                        scanf("%ld",&xb);
                    }
                if (xb>0) {
                    printf("you entered %ld ducks\n",xb);
                    int decider;
                    for (i=0; i<xb; i++) {
                        printf("duck %ld do QUAK? 1 for yes, 0 for no\n",i+1);
                        scanf("%d",&decider);
                        while (decider<0||decider>1) {
                            printf("Invalid number, please try again\n");
                            scanf("%d",&decider);
                        }
                        switch (i+1) {
                            case 1: duck1=decider; break;
                            case 2: duck2=decider; break;
                            case 3: duck3=decider; break;
                            case 4: duck4=decider; break;
                            case 5: duck5=decider; break;
                            case 6: duck6=decider; break;
                            case 7: duck7=decider; break;
                            case 8: duck8=decider; break;
                            case 9: duck9=decider; break;
                            case 10: duck10=decider; break;
                            case 11: duck11=decider; break;
                            case 12: duck12=decider; break;
                            case 13: duck13=decider; break;
                            case 14: duck14=decider; break;
                            case 15: duck15=decider; break;
                            case 16: duck16=decider; break;
                            case 17: duck17=decider; break;
                            case 18: duck18=decider; break;
                            case 19: duck19=decider; break;
                            case 20: duck20=decider; break;
                            case 21: duck21=decider; break;
                            case 22: duck22=decider; break;
                            case 23: duck23=decider; break;
                            case 24: duck24=decider; break;
                            case 25: duck25=decider; break;
                            case 26: duck26=decider; break;
                            case 27: duck27=decider; break;
                            case 28: duck28=decider; break;
                            case 29: duck29=decider; break;
                            case 30: duck30=decider; break;
                            case 31: duck31=decider; break;
                            case 32: duck32=decider; break;
                            case 33: duck33=decider; break;
                            case 34: duck34=decider; break;
                            case 35: duck35=decider; break;
                            case 36: duck36=decider; break;
                            case 37: duck37=decider; break;
                            case 38: duck38=decider; break;
                            case 39: duck39=decider; break;
                            case 40: duck40=decider; break;
                            case 41: duck41=decider; break;
                            case 42: duck42=decider; break;
                            case 43: duck43=decider; break;
                            case 44: duck44=decider; break;
                            case 45: duck45=decider; break;
                            case 46: duck46=decider; break;
                            case 47: duck47=decider; break;
                            case 48: duck48=decider; break;
                            case 49: duck49=decider; break;
                            case 50: duck50=decider; break;
                            case 51: duck51=decider; break;
                            case 52: duck52=decider; break;
                            case 53: duck53=decider; break;
                            case 54: duck54=decider; break;
                            case 55: duck55=decider; break;
                            case 56: duck56=decider; break;
                            case 57: duck57=decider; break;
                            case 58: duck58=decider; break;
                            case 59: duck59=decider; break;
                            case 60: duck60=decider; break;
                            case 61: duck61=decider; break;
                            case 62: duck62=decider; break;
                            case 63: duck63=decider; break;
                            case 64: duck64=decider; break;
                        }
                    }
                    for (i=0; i<xb; i++) {
                        printf("duck number %ld do ",i+1);
                        switch (i+1) {
                            case 1: decider=duck1; break;
                            case 2: decider=duck2; break;
                            case 3: decider=duck3; break;
                            case 4: decider=duck4; break;
                            case 5: decider=duck5; break;
                            case 6: decider=duck6; break;
                            case 7: decider=duck7; break;
                            case 8: decider=duck8; break;
                            case 9: decider=duck9; break;
                            case 10: decider=duck10; break;
                            case 11: decider=duck11; break;
                            case 12: decider=duck12; break;
                            case 13: decider=duck13; break;
                            case 14: decider=duck14; break;
                            case 15: decider=duck15; break;
                            case 16: decider=duck16; break;
                            case 17: decider=duck17; break;
                            case 18: decider=duck18; break;
                            case 19: decider=duck19; break;
                            case 20: decider=duck20; break;
                            case 21: decider=duck21; break;
                            case 22: decider=duck22; break;
                            case 23: decider=duck23; break;
                            case 24: decider=duck24; break;
                            case 25: decider=duck25; break;
                            case 26: decider=duck26; break;
                            case 27: decider=duck27; break;
                            case 28: decider=duck28; break;
                            case 29: decider=duck29; break;
                            case 30: decider=duck30; break;
                            case 31: decider=duck31; break;
                            case 32: decider=duck32; break;
                            case 33: decider=duck33; break;
                            case 34: decider=duck34; break;
                            case 35: decider=duck35; break;
                            case 36: decider=duck36; break;
                            case 37: decider=duck37; break;
                            case 38: decider=duck38; break;
                            case 39: decider=duck39; break;
                            case 40: decider=duck40; break;
                            case 41: decider=duck41; break;
                            case 42: decider=duck42; break;
                            case 43: decider=duck43; break;
                            case 44: decider=duck44; break;
                            case 45: decider=duck45; break;
                            case 46: decider=duck46; break;
                            case 47: decider=duck47; break;
                            case 48: decider=duck48; break;
                            case 49: decider=duck49; break;
                            case 50: decider=duck50; break;
                            case 51: decider=duck51; break;
                            case 52: decider=duck52; break;
                            case 53: decider=duck53; break;
                            case 54: decider=duck54; break;
                            case 55: decider=duck55; break;
                            case 56: decider=duck56; break;
                            case 57: decider=duck57; break;
                            case 58: decider=duck58; break;
                            case 59: decider=duck59; break;
                            case 60: decider=duck60; break;
                            case 61: decider=duck61; break;
                            case 62: decider=duck62; break;
                            case 63: decider=duck63; break;
                            case 64: decider=duck64; break;
                        }
                        if (decider == 1)
                            printf("Quak\n");
                        else
                            printf("Sh...\n");
                    }
                }
            }
        // TASK 3: Professor Pat's Power Calculation
     else if(gamenumber==3) {
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
                 printf("your power is: %d\n",temp1);
             }
        // TASK 4: The Duck Parade
        else if (gamenumber==4) {
            int xd,t,rows,crow,remaining;
            printf("please enter number of ducks:\n");
            scanf ("%d",&xd);
            while(xd<0) {
                printf("Invalid number, please try again\n");
                scanf("%d",&xd);
            }
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
            while(xe<0) {
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








