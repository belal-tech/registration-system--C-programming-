#include "intlization.h"
#include "filedata.h"
#include<Windows.h>


 void checkfunction(char str[],int sizee)  //function to check the string if its have a number
 {
         size_t i;
         for(i=0;i<sizee;i++)
       {
           while(str[i]-'0'>0&&str[i]-'0'<9)
           {   SetColor(4);
               MessageBeep(0x00000030L);
               printf(" ERROR:no this is have numbers \n");
               getch();
                printf("enter again \n");

                scanf("%s",str);

                 if(str[i]-'0'>0&&str[i]-'0'<9)
                    scanf("%s ",str);
                        //break;

           }

       }

 }
void checkfuncnumber(char strnumber[],int sizee)
      {
         size_t i;
       for(i=0;i<sizee;i++)
       {
           while(strnumber[i]-'0'<0||strnumber[i]-'0'>9)
           {
               SetColor(4);
                MessageBeep(0x00000030L);
               printf("ERROR:no this is have characters  \n");
               getch();
               printf("enter again \n");
               scanf("%s",strnumber);
                break;

           }
       }
   }

void agefunc(int year,int agearr[],int i)
{
    int age;
     SYSTEMTIME stime;
    GetSystemTime(&stime);
    //agearr=malloc(10*sizeof(int));
    age= stime.wYear-year;
    agearr[i]=age;

}
 int checkyear(int year)
 {
     if( year < 1800 || year > 2020)
          {
                SetColor(4);
                 MessageBeep(0x00000030L);
              printf("no its not available \n");
              getch();
                printf("enter again \n");
              scanf("%d",&year);

          }
          return year;

 }
int checkdays(int day)
{ if( day < 0 || day > 31)
          {
                SetColor(4);
                 MessageBeep(0x00000030L);
                printf("ERROR:no its not available \n");
                getch();
                printf("enter again \n");
                scanf("%d",&day);
          }
          return day;


}
int askuser()
{
    SetColor(6);
   printf("how many studnts you will add\n");   //ask to know the number of students
          scanf("%d",&numoenters);
          itoa(numoenters,test,10);

          if(numoenters>0&&numoenters<100)
          {
              return numoenters;
          }
          getch();

          while(test-'0'<0||test-'0'>9)
                   {
                       SetColor(4);
                        MessageBeep(0x00000030L);
                    printf(" ERROR :%s its not avilable have a character \n",test);
                    getch();
                   printf("enter again \n");

                   scanf("%s",test);
                  numoenters= toString(test);
                  if(numoenters>0&&numoenters<9)
                    break;


                    }

              while(numoenters <0 ||numoenters >100)
              {

                    SetColor(4);
                     MessageBeep(0x00000030L);
                  printf("its not avilable \n");
                  getch();
                   printf("enter again \n");
                   scanf("%d",& numoenters);
                if(numoenters>0&&numoenters<100000)
                        break;
              }
}
//__________________________________________________________
int *regesternum()  //function to make the REGS:NUMBER automatic
{        printf("enter the term \n");
        scanf("%d",&term);


        SYSTEMTIME stime;
        GetSystemTime(&stime);  //
        regyear=stime.wYear%100;
        itoa(regyear,yearst,10);  //CONERT THe year and term and the number to string to make the REG:number automatic
        itoa(i,numst,10);
        itoa(term,termest,10);

        while(termest-'0'<0||termest-'0'>9)
        {
            //term=0;
        printf("enter the term* to make sure * \n");
        scanf("%s",termest);
        term=toString(termest);  //convert to make sure from the value again and again
        if(term>0&&term<9)      //checked the value again
            break;

        }

        while(term>12||term<0)
        {
              SetColor(4);
               MessageBeep(0x00000030L);
               printf("ERROR :there is no term with this number\n"); //maybe the value is numbers but its dos'nt make any sens if the INPUT will be 100
                getch();
             scanf("%d",&term);
        }

        itoa(term,termest,10); //this covert to make sure >if the end user enter a character in the first i convert it integer so i could be make sure
        termf[i]=malloc(10*sizeof(char));
        strcpy(termf[i],termest);
        if(stime.wMonth==10)
        {
        strcat(yearst,"10");
        strcat(yearst,numst);
        }
        else
        {
        strcat(yearst,"11");
        strcat(yearst,numst);

        }

        return &yearst;

}

int gander()
{
    printf("enter gander'1' for male '2' for fmale \n");
    scanf("%c ", &gendera);
    while((gendera>='a'&&gendera<='z')||(gendera>='A'&&gendera<='Z'))
    {
        SetColor(4);
         MessageBeep(0x00000030L);
         printf("%c ERROR: is an alphabet.",gendera);
         getch();
         scanf("%c ", &gendera);

         if((gendera>!'a'&&gendera<='z')||(gendera>='A'&&gendera<!'Z'))
                      break;


    }
    if(gendera=='1' || gendera=='2' )
    {
        return gendera;
    }
       // else {
        while(gendera!='1' || gendera!='2')
        {
                  SetColor(4);
                   MessageBeep(0x00000030L);
                  printf(" ERORR :its not from the choices \n");
                   getch();
                printf("enter again \n ");
               scanf("%c",&gendera);
                if(gendera=='1' || gendera=='2' )
                    break;
        }
        return gendera ;
    //}
}

void paymetsshow()
{
    SetColor(2);
    Beep(750,300);
     printf("press '1','2','3',4','5','6','7','8','9' for each choice \n");
             printf("1-Self Funding\n");
             printf("2-Scholarship\n");
             printf("3-installment\n");
             printf("4-Internal Financing\n");
             printf("5-External financing\n");
             printf("6-Government income\n");
             printf("7-family work in the government\n");
             printf("8-Special Social case\n");
             printf("9-Onthers\n");
}
int toString(char a[]) {
  int c, sign, offset, n;

  if (a[0] == '-') {  // Handle negative integers
    sign = -1;
  }

  if (sign == -1) {  // Set starting position to convert
    offset = 1;
  }
  else {
    offset = 0;
  }

  n = 0;

  for (c = offset; a[c] != '\0'; c++) {
    n = n * 10 + a[c] - '0';
  }

  if (sign == -1) {
    n = -n;
  }

  return n;
}
 int validity(int y,int m,int d)
 {
     time_t currentTime;
       SYSTEMTIME stime;
       GetSystemTime(&stime);

     if(y>stime.wYear)
     {
         return 1;
     }
     else if(y==stime.wYear)
     {
         if(m>stime.wMonth)
            return 1;
     }
     else if (y<stime.wYear)
        return 0;

 }
 void SetColor(int ForgC)
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                                                      //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                                                   //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
 float *average(float age[])
{
	int i,num;
	float avg, sum ;

	printf("GPA to old students \n");
    printf("enter the number of student \n");
	scanf("%d",&GPA.numofstud);
	  printf("Number of semester \n");
         scanf("%d",&GPA.numofsemster);
	for (i = 0; i <GPA.numofsemster; ++i) {
            printf("Term %d: \n",i);
            scanf("%f",&sum);
		    sum +=sum;
	}
	age[GPA.numofstud]=sum / GPA.numofsemster;
	return age;
}
 int edit()
 {
     int num;

        printf("'1' for Phone Number '2' for email ");
     scanf("%d",&num);
     Beep(750,300);
     if(num==1)
     {

         return 1;
     }
     else if(num==2)
     {

         return 0;
     }



 }
 char cheackmenu(char menu)
 {
     while(!backk)
      {
      for(z=48;z<57;z++)
      {

          if(menu==z)
          {
            backk=1;
            return menu;
            break;

          }



      }
      if(backk==0)
      {  MessageBeep(0x00000030L);
        printf("Error :its not from the choice enter again \n");
        scanf("%c",&menu);

          if(menu==1||menu==2||menu==3||menu==4)
          {
          backk=1;
          return menu;
            break;
          }
      }

      }

 }

