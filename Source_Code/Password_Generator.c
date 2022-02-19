#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void main()
{
    printf("__________                                               .___   ________                                    __               ");
    printf("\______   \_____    ______ ________  _  _____________  __| _/  /  _____/  ____   ____   ____ _____ ________/  |_  ___________ ");
    printf(" |     ___/\__  \  /  ___//  ___/\ \/ \/ /  _ \_  __ \/ __ |  /   \  ____/ __ \ /    \_/ __ \\__  \\_  __ \   __\/  _ \_  __ \/");
    printf(" |    |     / __ \_\___ \ \___ \  \     (  <_> )  | \/ /_/ |  \    \_\  \  ___/|   |  \  ___/ / __ \|  | \/|  | (  <_> )  | \/");
    printf(" |____|    (____  /____  >____  >  \/\_/ \____/|__|  \____ |   \______  /\___  >___|  /\___  >____  /__|   |__|  \____/|__|   ");
    printf("                \/     \/     \/                          \/          \/     \/     \/     \/     \/                          ");


    printf("\nWant to start : ");
    scanf("^\n");
    int i,j,l,m,n,o,p;
    for(i=65;i<=90;i++)
    {
        for(j=65;j<=90;j++)
        {
            for(l=65;l<=90;l++)
            {
                for(m=65;m<=90;m++)
                {
                    for(n=65;n<=65;n++)
                    {
                        for(o=65;n<=90;n++)
                        {
                            for(p=65;p<=90;p++)
                            {

                                //if(i!=j&&i!=m&&i!=n&&i!=o&&i!=l&&i!=p) //if you don't want repeatation of character's then allow this all => 6 " If " => statements
                                {
                                  //      if(j!=m&&j!=n&&j!=o&&j!=l&&j!=p)
                                        {
                                    //        if(l!=m&&l!=n&&l!=o&&l!=p)
                                            {
                                      //          if(m!=n&&m!=o&&m!=p)
                                                {
                                        //            if(n!=o&&n!=p)
                                                    {
                                          //              if(o!=p)
                                                        {
                                                            printf("%c%c%c%c%c%c%c\n",i,j,l,m,n,o,p);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
