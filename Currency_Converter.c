/*
   CURRENCY EXCHANGE CONVERTER [CEC]
   with C programming language for practice coding
   Developed by Panurut Chinakul CS KMUTNB
*/

///[CEC]
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

COORD coord = {0, 0};

///Function Position
void gotoxy (int x, int y)
{
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

///Global Variable
int i,j,c=0;
int main_exit;

///Function Time
int t(void) //for time
{
    time_t t;
    time(&t);
    printf("Date and time : %s\n",ctime(&t));

    return 0 ;
}

///function close program
void close()
{
    system("cls");
    printf("\n\n\n\n\n\n\     Currency Exchange Converter [CEC] developed by Panurut Chinakul CS RB KMUTNB\n\n\n");
    printf("\t\t\t     58-040626-2006-9\n\n\n");
    getch();

}

///Loading Status (Loader)
///function fordelay
void fordelay(int j)
{
    int i,k;
    for(i=0; i<j; i++)
        k=i;
}

void printfcomma (int n)
{
    int n2 = 0;
    int scale = 1;
    if (n < 0)
    {
        printf ("-");
        n = -n;
    }
    while (n >= 1000)
    {
        n2 = n2 + scale * (n % 1000);
        n /= 1000;
        scale *= 1000;
    }
    printf ("%d", n);
    while (scale != 1)
    {
        scale /= 1000;
        n = n2 / scale;
        n2 = n2  % scale;
        printf (",%03d", n);
    }
}

int main()
{
    system("cls");
    system("color 0F");

///Function Currency Converter
    float cur_con()
    {
        int choice,choice_s;
        char bhti[32];
        float bhti2;

        ///Updated at 19 March 2019

        ///BUY
        const float bhtg = 41.05;
        const float bhtu = 30.48;
        const float bhte = 35.28;
        const float bhtj = 0.2785;
        const float bhtk = 0.0255;
        const float bhts = 23.02;
        const float bhth = 3.94;

        ///SELL
        const float hkd  = 0.411;
        const float sgd  = 0.02382;
        const float gbp  = 0.04254;
        const float usd  = 0.03178;
        const float eur  = 0.03641;
        const float jpy  = 2.897;
        const float krw  = 0.0294;

convert:
        printf("\n\n\t\t  <<<<< Currency Exchange Converter >>>>>\n\n");
        ///printf("\n\n\t\t <<UPDATED "%s,&updated);
        printf("\n\t\t\ <<< UPDATED AT 19 March 2019 >>>\n\n");
        printf("\n\t1.Baht <> US Dollar\n\n\t2.Baht <> Pound\n\n\t3.Baht <> Euro\n\n\t4.Baht <> Yen\n\n\t5.Baht <> Won\n\n\t6.Baht <> Singapore Dollar\n\n\t7.Baht <> Hong Kong Dollar\n\n\t8.Exit\n\n");
        gotoxy(19,24);
        t();
        printf("\tWhat currency do you want to Exchange: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            system("cls");
again_d:
            printf("\n\n\t\t<<< BAHT & US DOLLAR >>>\n\n");
            printf("\n\t\t1.Baht >> Dollar\n\n\t\t2.Dollar >> Baht\n\n");
            printf("\n\n\t What exchange do you want: ");
            scanf("%d",&choice_s);
            if(choice_s==1)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*usd};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f BHT = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  USD.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  BHT = %.2f  USD.\n",bhti2,bhti2*usd); //print result
                getch();
                //system("cls");
                //goto convert;
add_invalid:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if(main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_d;
                }

                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=15; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid;
                }
            }
            else if(choice_s==2)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*bhtu};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f USD. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  BHT.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  USD = %.2f  BHT\t.\n",bhti2,bhti2*bhtu);
                getch();
                //system("cls");
                //goto convert;
add_invalid0:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if(main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_d;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=15; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid0;
                }
            }
            else
            {
                printf("\nInvalid!\a");
                system("cls");
                goto again_d;
            }
        }
        else if(choice==2)
        {
            system("cls");
again_g:
            printf("\n\n\t\t<<< BAHT & POUND >>>\n\n");
            printf("\n\t\t1.Baht >> Pound\n\n\t\t2.Pound >> Baht\n\n");
            printf("\n\n\t What exchange do you want: ");
            scanf("%d",&choice_s);
            if(choice_s==1)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*gbp};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f BHT. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  GBP.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  BHT = %.2f  GBP.\n",bhti2,bhti2*gbp);
                getch();
                //system("cls");
                //goto convert;
add_invalid1:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if(main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_g;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid1;
                }
            }
            else if(choice_s==2)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*bhtg};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f GBP. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  BHT.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  GBP = %.2f  BHT\t.\n",bhti2,bhti2*bhtg);
                getch();
                //system("cls");
                //goto convert;
add_invalid2:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if(main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_g;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid2;
                }
            }
            else
            {
                printf("\nInvalid!\a");
                system("cls");
                goto again_g;
            }
        }
        else if(choice==3)
        {
            system("cls");
again_e:
            printf("\n\n\t\t<<< BAHT & EURO >>>\n\n");
            printf("\n\t\t1.Baht >> Euro\n\n\t\t2.Euro >> Baht\n\n");
            printf("\n\n\t What exchange do you want: ");
            scanf("%d",&choice_s);
            if(choice_s==1)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*eur};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f BHT. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  EUR.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  BHT = %.2f  EUR.\n",bhti2,bhti2*eur);
                getch();
                //system("cls");
                //goto convert;
add_invalid3:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if(main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_e;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid3;
                }
            }
            else if(choice_s==2)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*bhte};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f EUR. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  BHT.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  EUR = %.2f  BHT\t.\n",bhti2,bhti2*bhte);
                getch();
                //system("cls");
                //goto convert;
add_invalid4:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if (main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_e;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid4;
                }
            }
            else
            {
                printf("\nInvalid!\a");
                system("cls");
                goto again_e;
            }
        }
        else if(choice==4)
        {
            system("cls");
again_j:
            printf("\n\n\t\t<<< BAHT & YEN >>>\n\n");
            printf("\n\t\t1.Baht >> YEN\n\n\t\t2.YEN >> Baht\n\n");
            printf("\n\n\t What exchange do you want: ");
            scanf("%d",&choice_s);
            if (choice_s==1)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*jpy};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f BHT. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  JPY.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  BHT = %.2f  JPY.\n",bhti2,bhti2*jpy);
                getch();
                //system("cls");
                //goto convert;
add_invalid5:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if (main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_j;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("[]");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid5;
                }
            }
            else if(choice_s==2)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*bhtj};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f JPY. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  BHT.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  JPY = %.2f  BHT\t.\n",bhti2,bhti2*bhtj);
                getch();
                //system("cls");
                //goto convert;
add_invalid6:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if (main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_j;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("[]");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid6;
                }
            }
            else
            {
                printf("\nInvalid!\a");
                system("cls");
                goto again_j;
            }
        }
        else if(choice==5)
        {
            system("cls");
again_k:
            printf("\n\n\t\t<<< BAHT & WON >>>\n\n");
            printf("\n\t\t1.Baht >> Won\n\n\t\t2.Won >> Baht\n\n");
            printf("\n\n\t What exchange do you want: ");
            scanf("%d",&choice_s);
            if (choice_s==1)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*krw};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f BHT. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  KRW.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  BHT = %.2f  KRW.\n",bhti2,bhti2*krw);
                getch();
                //system("cls");
                //goto convert;
add_invalid7:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if (main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_k;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid7;
                }
            }
            else if(choice_s==2)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*bhtk};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f KRW. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  BHT.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  KRW = %.2f  BHT\t.\n",bhti2,bhti2*bhtk);
                getch();
                //system("cls");
                //goto convert;

            }
            else
            {
                printf("\nInvalid!\a");
                system("cls");
                goto again_k;
            }
add_invalid8:
            printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
            scanf("%d",&main_exit);
            system("cls");
            if (main_exit==1)
                main();
            else if(main_exit==2)
            {
                goto again_k;
            }
            else if(main_exit==0)
            {
                printf("\n\n\n\t\tLOADING  ");
                for(i=0; i<=6; i++)
                {
                    fordelay(100000000);//loading Status
                    printf("\xB2");
                }
                system("cls");
                close();
            }
            else
            {
                printf("\nInvalid!\a");
                goto add_invalid8;
            }

            /* else{
                 printf("\nInvalid!\a");
                 system("cls");
                      goto again_k;
                }*/

        }
        else if(choice==6)
        {
            system("cls");
again_s:
            printf("\n\n\t\t<<< BAHT & Singapore Dollar >>>\n\n");
            printf("\n\t\t1.Baht >> Singapore Dollar\n\n\t\t2.Singapore Dollar >> Baht\n\n");
            printf("\n\n\t What exchange do you want: ");
            scanf("%d",&choice_s);
            if (choice_s==1)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*sgd};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f BHT. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  SGD.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  BHT = %.2f  SGD.\n",bhti2,bhti2*sgd);
                getch();
                //system("cls");
                //goto convert;
add_invalid9:

                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if (main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_s;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid9;
                }
            }
            else if(choice_s==2)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*bhts};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f SGD. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  BHT.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  SGD = %.2f  BHT\t.\n",bhti2,bhti2*bhts);
                getch();
                //system("cls");
                //goto convert;

            }
add_invalid10:
            printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
            scanf("%d",&main_exit);
            system("cls");
            if (main_exit==1)
                main();
            else if(main_exit==2)
            {
                goto again_s;
            }
            else if(main_exit==0)
            {
                printf("\n\n\n\t\tLOADING  ");
                for(i=0; i<=6; i++)
                {
                    fordelay(100000000);//loading Status
                    printf("\xB2");
                }
                system("cls");
                close();
            }
            else
            {
                printf("\nInvalid!\a");
                goto add_invalid10;
            }

        }
        else if(choice==7)
        {
            system("cls");
again_h:
            printf("\n\n\t\t<<< BAHT & Hong Kong Dollar >>>\n\n");
            printf("\n\t\t1.Baht >> Hong Kong Dollar\n\n\t\t2.Hong Kong Dollar >> Baht\n\n");
            printf("\n\n\t What exchange do you want: ");
            scanf("%d",&choice_s);
            if (choice_s==1)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*hkd};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f BHT. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  HKD.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  BHT = %.2f  SGD.\n",bhti2,bhti2*hkd);
                getch();
                //system("cls");
                //goto convert;
add_invalid11:
                printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
                scanf("%d",&main_exit);
                system("cls");
                if (main_exit==1)
                    main();
                else if(main_exit==2)
                {
                    goto again_h;
                }
                else if(main_exit==0)
                {
                    printf("\n\n\n\t\tLOADING  ");
                    for(i=0; i<=6; i++)
                    {
                        fordelay(100000000);//loading Status
                        printf("\xB2");
                    }
                    system("cls");
                    close();
                }
                else
                {
                    printf("\nInvalid!\a");
                    goto add_invalid11;
                }
            }
            else if(choice_s==2)
            {
                printf("\n\n\tPlease enter the amount: ");
                scanf("%f",&bhti2);
                int x[] = {bhti2*bhth};
                int *px = x;
                while (px != &(x[sizeof(x)/sizeof(*x)]))
                {
                    printf ("\n\n\tFor  %.2f HKD. = ",bhti2,*px);
                    printfcomma (*px);
                    printf ("  BHT.");
                    px++;
                }
                //printf("\n\n\tFor %.2f  SGD = %.2f  BHT\t.\n",bhti2,bhti2*bhts);
                getch();
                //system("cls");
                //goto convert;

            }
add_invalid12:
            printf("\n\n\n\tEnter 1 to go to the main menu 2 to convert again and 0 to exit:");
            scanf("%d",&main_exit);
            system("cls");
            if (main_exit==1)
                main();
            else if(main_exit==2)
            {
                goto again_h;
            }
            else if(main_exit==0)
            {
                printf("\n\n\n\t\tLOADING  ");
                for(i=0; i<=6; i++)
                {
                    fordelay(100000000);//loading Status
                    printf("\xB2");
                }
                system("cls");
                close();
            }
            else
            {
                printf("\nInvalid!\a");
                goto add_invalid12;
            }

        }
        else if(choice==8)
        {
            close();
        }
        else
        {
try_con:
            printf("\n\t\tInvalid!");
            printf("\n\n\tEnter 1 to try again and 0 to Menu:");
            scanf("%d",&main_exit);

            if (main_exit==1)
            {

                system("cls");
                goto convert;

            }

            else if (main_exit==0)
            {
                system("cls");
                main();
            }
            else
            {
                printf("\nInvalid!");
                fordelay(1000000000);//delay
                goto try_con;
            }
        }
    }
    cur_con();
    return 0;
}
///END of Code_
