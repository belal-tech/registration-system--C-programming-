#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<Windows.h>
#include <stdbool.h>
#include <dos.h>
#include <dir.h>
#include "intlization.h"
#include "strucuts.h"
#include "functions.h"
#include "filedata.h"
#define ROWS 1000
#define COLUMNS 5

   int main(int argc,char *argv[])
   {

       time_t currentTime;
       SYSTEMTIME stime;
       GetSystemTime(&stime);
        SetColor(10);
        Beep(650,700);

      printf("1 -> add new student \n 2-> edit \n 3 -> save the credit hours \n 4 -> save the GPA  \n 5 ->(\courses,grade,coed) \n");

      scanf("%c",&menu);
      menu=cheackmenu(menu); //function to cheak the inputs and limits it
      system("CLS");
      FILE *fp = fopen("prjct.txt","a");   //intlization the file to save data as pointer
         if(fp==NULL)
           {
            printf("the fille is empty");   //check the data in file

            return 0;
           }


   if(menu=='1')
   {
        Beep(750,300);
        stuns=askuser();     //ask to know the number of students
       for(i=0;i<stuns;i++)    //_____> loop to save the numbers students
         {


             printf("***********************************\n");
            regsternumber=regesternum();     //function for registration number automatically
            regstnum[i]=malloc(10*sizeof(char));
            regstnum[i]=regsternumber;

                       // allocate the  registration number memory
       //_____________________________________
      // getch();
      printf("***********************************\n");
         SetColor(11);
          printf("first name: \n");
          getch();
           scanf("%s",stun.fname);              //first name
           size=strlen(stun.fname);
          checkfunction(stun.fname,size);
          arroffname[i]=(char *)malloc(size*sizeof(char));
          strcpy(arroffname[i],stun.fname) ;
        //_________________________
        printf("***********************************\n");
        printf("middle name: \n");

           scanf("%s",stun.mname);                      //secound name
           size=strlen(stun.mname);
          arrofmname[i]=(char *)malloc(size*sizeof(char));
           checkfunction(stun.mname,size);
           strcpy(arrofmname[i],stun.mname);
        //______________________________
        printf("***********************************\n");
        printf("last name: \n");
         // arroflname[i]=malloc(10*sizeof(char));
           scanf("%s",stun.lname);              //last name
           size=strlen(stun.lname);
          arroflname[i]=(char *)malloc(size*sizeof(char));
           checkfunction(stun.lname,size);
           strcpy(arroflname[i],stun.lname);
           //___2___________________________
           printf("***********************************\n");
           SetColor(10);
      printf("Nationalty : \n");
        scanf("%s",stun.stunalty);
        size=strlen(stun.stunalty);                                               //take the nationalty
       arrofnalty[i]=(char *)malloc(size*sizeof(char));
        checkfunction(stun.stunalty,size);
         strcpy(arrofnalty[i],stun.stunalty);
    //__________________________________
    system("CLS");
     printf("press ENTER\n");
     getch();
      Beep(750,300);
    printf("***********************************\n");
     printf("ID:");
     scanf("%s", stuinfo.id);
      size=strlen(stuinfo.id);
    arrofid[i]=(char *)malloc(size*sizeof(char));
      checkfuncnumber(stuinfo.id,size);
      strcpy(arrofid[i], stuinfo.id);
    //_____________________________

     system("CLS");
     printf("press ENTER\n");
     getch();
    printf("***********************************\n");
    SetColor(10);
     printf("Validity date of ID \n");
         printf("enter the year \n");
         yearofid[i]=malloc(5*sizeof(char));
         scanf("%s",stuinfo.yearofv);
         yearvalid=toString(stuinfo.yearofv);
         while(yearvalid<1800)
         {
         printf("ERROR: its could be more than IT *enter again*");
         scanf("%s",stuinfo.yearofv);
         yearvalid=toString(stuinfo.yearofv);
         }
         strcpy(yearofid[i],stuinfo.yearofv);
         size=strlen(stuinfo.yearofv);
         checkfuncnumber(yearofid[i],size);
          strcpy(yearofid[i],stuinfo.yearofv);

        //__________________________
        printf("***********************************\n");
     printf("enter the day \n");
        dayofid[i]=malloc(5*sizeof(char));
         scanf("%s",stuinfo.dayofv);
         dyasint=toString(stuinfo.dayofv);
         while(dyasint>31||dyasint<0)
         {
             SetColor(4);
              printf("ERROR: the days could between 1 and 31");
              getch();
              scanf("%s",stuinfo.dayofv);
              dyasint=toString(stuinfo.dayofv);

         }
         if(dyasint<31&&dyasint>0)
         {

         dayvalid=toString(stuinfo.dayofv);
         strcpy(dayofid[i],stuinfo.dayofv);
         size=strlen(stuinfo.dayofv);
         checkfuncnumber(dayofid[i],size);
         strcpy(dayofid[i],stuinfo.dayofv);
         }
           //________________________________
           printf("***********************************\n");
     printf("enter the month \n");
          monthofid[i]=malloc(5*sizeof(char));
          scanf("%s",stuinfo.monthofv);
          monthint=toString(stuinfo.monthofv); //convert the input to string to check it as integer
          while(monthint<0||monthint>12)
          {
           printf("ERROR: the months could between 1 and 12");
              scanf("%s",stuinfo.monthofv);
              monthint=toString(stuinfo.monthofv);
          }
          if(monthint>0&&monthint<12)
          {
           monthvalid=toString(stuinfo.monthofv);
           size=strlen(stuinfo.monthofv);
           strcpy(monthofid[i],stuinfo.monthofv);
           checkfuncnumber(monthofid[i],size);
           strcpy(monthofid[i],stuinfo.monthofv);
          }

          //__________________________________
           backk=validity(yearvalid, monthvalid, dayvalid);
          //_________________________________
            printf("press ENTER\n");
          SetColor(14);
           system("CLS");
           printf("press ENTER\n");
            getch();
          printf("***********************************\n");
     printf("**adrees:** \n");
     printf("flat number \n");

        scanf("%s",stuadres.flatnumber); //get the size of the string to can check it

        size=strlen(stuadres.flatnumber);  //get the length or the size
        flatnum[i]=(char *)malloc(size*sizeof(char));
        checkfuncnumber(stuadres.flatnumber,size);  //function to check it
        strcpy(flatnum[i],stuadres.flatnumber);//copy the string into the index of array
       //-----------------------------------------
       printf("***********************************\n");
       printf("Hous number: \n");

         scanf("%s",stuadres.housenumber);  //get the size of the string to can check it
        size=strlen(stuadres.housenumber);  //get the length or the size
        housnumber[i]=(char *)malloc(size*sizeof(char));
        checkfuncnumber(stuadres.housenumber,size);  //function to check it
        strcpy(housnumber[i],stuadres.housenumber);     //copy the string into the index of array
        //_____________________________________
        printf("***********************************\n");
        printf("Street name \n");
         scanf("%s",stuadres.streetname);
         size=strlen(stuadres.streetname);
         housname[i]=(char *)malloc(size*sizeof(char));
        checkfunction(stuadres.streetname,size);
        strcpy(housname[i],stuadres.streetname);
        //_____________________________________
         printf("***********************************\n");
        printf("District Name \n");

         scanf("%s",stuadres.dicritname);

         size=strlen(stuadres.dicritname);
          districtname[i]=(char *)malloc(size*sizeof(char));
         checkfunction(stuadres.dicritname,size);
          strcpy(districtname[i],stuadres.dicritname);
        //______________________________________
      printf("City Name \n");
       printf("***********************************\n");
           scanf("%s",stuadres.cityname);
          size=strlen(stuadres.cityname);
         citytname[i]=(char *)malloc(size*sizeof(char));
          checkfunction(stuadres.cityname,size);
          strcpy(citytname[i],stuadres.cityname);
          //_____________________________________
       printf("Goverment Name:\n");
        printf("***********************************\n");
           gets(stuadres.gouverment);
           size=strlen(stuadres.gouverment);
           govermentname[i]=(char *)malloc(size*sizeof(char));
            checkfunction(stuadres.gouverment,size);
             strcpy(govermentname[i],stuadres.gouverment);
           //_________________________________________
        printf("postal code :\n");
           printf("***********************************\n");
           scanf("%s",stuadres.postalcode);
           size=strlen(stuadres.postalcode);
           postalcod[i]=(char *)malloc(size*sizeof(char));
           checkfuncnumber(stuadres.postalcode,size);
           strcpy(postalcod[i],stuadres.postalcode);
           //_________________________________________
           system("CLS");
           printf("press ENTER\n");
            getch();
             Beep(750,300);
            SetColor(9);
           printf("Age : \n");
          printf("year of BIRH:\n");
          printf("***********************************\n");
          scanf("%d",&stuage.year);
          year=checkyear(stuage.year);
          yearbirth[i]= malloc(1*sizeof(int));
          yearbirth[i]=stuage.year;
          agefunc(stuage.year,agearr,i);
          //_________________________________________
          printf("month of BIRH:\n");
           printf("***********************************\n");
          scanf("%d",&stuage.month);
          monthbirth[i]= malloc(1*sizeof(int));
          monthbirth[i]=stuage.month;

          if(stuage.month>0&&stuage.month<30)
          {

          monthbirth[i]= malloc(1*sizeof(int));
          monthbirth[i]=stuage.month;
          }
          else
          {
              printf("no its not month\n");
              printf("enter gaing\n");
              scanf("%d",stuage.month);
               monthbirth[i]=stuage.month;
          }
          //________________________________________
          printf("day of BIRH: \n");
           printf("***********************************\n");
          scanf("%d",&stuage.day);
          day=checkdays(stuage.day);
          daybirth[i]=malloc(1*sizeof(int));
          daybirth[i]=stuage.day;
          daybirth[i]=day;
        //_______________________________________
        system("CLS");
        printf("press ENTER\n");
         getch();
        SetColor(6);
         Beep(750,300);
        printf("Department: \n");
         printf("***********************************\n");
        scanf("%s",departstu.derpartmen);
        size=strlen(departstu.derpartmen);
        checkfunction(departstu.derpartmen,size);
        department[i]=(char *)malloc(size*sizeof(char));
        strcpy(department[i],departstu.derpartmen);
        //_________________________________________
         printf("Supervisor Name:\n");
          printf("***********************************\n");
        scanf("%s",departstu.supervisorname);
        size=strlen(departstu.supervisorname);
        checkfunction(departstu.supervisorname,size);
        supervisor[i]=(char *)malloc(size*sizeof(char));
        strcpy(supervisor[i],departstu.derpartmen);

        //____________________________________________
        system("CLS");
        printf("press ENTER\n");
        getch();
        SetColor(11);
         Beep(750,300);
        printf("Paymnet: \n");
         printf("***********************************\n");
             paymetsshow();
             scanf("%s",paymentstu.typeoffund);
             size=strlen(paymentstu.typeoffund);
             checkfuncnumber(paymentstu.typeoffund,size);
             paymentsydents[i]=(char *)malloc(size*sizeof(char));
             strcpy( paymentsydents[i],paymentstu.typeoffund);
        //___________________________________________
         printf("payments  done (\already paid)\ *Numbers* \n");
          printf("***********************************\n");
            scanf("%s",paymentstu.paynmetdone);
            size=strlen(paymentstu.paynmetdone);
            checkfuncnumber(paymentstu.paynmetdone,size);
            paymentdon[i]=(char *)malloc(size*sizeof(char));
            strcpy( paymentdon[i],paymentstu.paynmetdone);
        //_________________________________________
            printf("Numbers of Payment : *Numbers*\n");
             printf("***********************************\n");
            scanf("%s",paymentstu.numofpaynmet);
            size=strlen(paymentstu.numofpaynmet);
            checkfuncnumber(paymentstu.numofpaynmet,size);
            paymentt=toString(paymentstu.numofpaynmet);
           while(paymentt>50)   //to make the number of payment is secure and logically
           {
               SetColor(4);
               printf("**This number not available to pay in this Premiums**");
             scanf("%s",paymentstu.numofpaynmet);
             paymentt=toString(paymentstu.numofpaynmet);
           }
           if(paymentt<50)  //if the number logic
           {
           size=strlen(paymentstu.numofpaynmet);
           checkfuncnumber(paymentstu.numofpaynmet,size);
           numofpayment[i]=(char *)malloc(size*sizeof(char));
           strcpy( numofpayment[i],paymentstu.numofpaynmet);
           }
           //___________________________________________
           if(backk==TRUE)
           {
                SetColor(4);
               fprintf(fp,"**the sudent number %d the id valid **\n",i);    //check the bool if its 0 or one to know the "Validity"
           }
           else if(backk==FALSE)
           {
                SetColor(4);
              fprintf(fp,"**the sudent number %d the id INvalid **\n",i);
           }
        //______________________________________
        system("CLS");
        printf("press ENTER\n");
        getch();
         SetColor(5);
          Beep(750,300);
        printf("**Transaction Bank information **\n");
        printf("Number of transaction :(\ Bill number)\ \n");
         printf("***********************************\n");
        scanf("%s",stubank.numoftransaction);
        size=strlen(stubank.numoftransaction);
        numoftrans[i]=(char *)malloc(size*sizeof(char));
        checkfuncnumber(stubank.numoftransaction,size);
        strcpy(numoftrans[i],stubank.numoftransaction);
        //________________________________________________
        printf("Bank of transaction : \n");
        printf("Write  (\'cip')\ or (\'masr')\ \n");
         printf("***********************************\n");
         scanf("%s",stubank.banktransaction);
         result1=strcasecmp("cip",stubank.banktransaction);    //compare the inputs
         result2=strcasecmp("masr",stubank.banktransaction);
         while(result1!=0&&result2!=0)        //make sure from the inputs should to be 2 banks CIP or MASR
         {
              SetColor(4);
          printf(" ERROR:there is no bank transaction available like this name \n");
          scanf("%s",stubank.banktransaction);
          result1=strcasecmp("cip",stubank.banktransaction);    //still ask about the banks if the answer is wring
          result2=strcasecmp("masr",stubank.banktransaction);
         }
         if(result1==0||result2==0)  //if the inputs CIP or MASR
         {
        size=strlen(stubank.banktransaction);
        bankortrans[i]=(char *)malloc(size*sizeof(char));
        strcpy(bankortrans[i],stubank.numoftransaction);  //put the inputs in array
         }
        //_______________________________________________
         system("CLS");
         printf("press ENTER\n");
          getch();
         SetColor(10);
          Beep(750,300);
         printf("Year of transaction Bank : \n");
          printf("***********************************\n");
        scanf("%s",stubank.transactionyear);
        size=strlen(stubank.transactionyear); //get the size of the string to can check it
       transactionyear[i]=(char *)malloc(size*sizeof(char));
        checkfuncnumber(stubank.transactionyear,size);  //function to check the string
        strcpy(transactionyear[i],stubank.transactionyear);  //put the string into the array
        //________________________________________________
        printf("Month of transaction Bank : \n");
         printf("***********************************\n");
        scanf("%s",stubank.transactionmonth);
        monthint=toString(stubank.transactionmonth);
        while( monthint<0|| monthint>12)
        {
             SetColor(4);
            printf("ERROR: the months could between 1 and 12");
              scanf("%s",stubank.transactionmonth);
              monthint=toString(stubank.transactionmonth);

        }
        if( monthint>0&&monthint<12)
        {
        size=strlen(stubank.transactionmonth);   //get the size of the string to can check it
       transactionmonth[i]=(char *)malloc(size*sizeof(char));
        checkfuncnumber(stubank.transactionmonth,size);  //function to check the string
        strcpy(transactionmonth[i],stubank.transactionmonth); //put the string into the array
        }
        //___________________________________________________
         system("CLS");
         printf("press ENTER\n");
          getch();
         SetColor(10);
          Beep(750,300);
         printf("day of transaction Bank : \n");
          printf("***********************************\n");
        scanf("%s",stubank.transactionday);
        dyasint=toString(stubank.transactionday);
        while(dyasint<0||dyasint>31)
        { SetColor(4);
            printf("ERROR: the days could between 1 and 31");
              scanf("%s",stubank.transactionday);
              dyasint=toString(stubank.transactionday);
        }
        if(dyasint>0&&dyasint<31)
        {
        size=strlen(stubank.transactionday); //get the size of the string to can check it
       transactionday[i]=(char *)malloc(size*sizeof(char));
        checkfuncnumber(stubank.transactionday,size);   //function to check the string
        strcpy(transactionday[i],stubank.transactionday);  //put the string into the array
        }
        //__________________________________________________

             gender=gander(); //function to determine the gender
     printf("***********************************\n");
    genders[i]=malloc(10*sizeof(char));
    counter++;
    if(gender =='1')
    {
        printf("Male \n");
        genders[i]="Male";
    }
    else if(gender=='2')
    {
        printf("Fmale\n");
        genders[i]="FMale";
    }
   //_______________________________________
  system("CLS");
  printf("press ENTER\n");
     getch();
  SetColor(11);
   Beep(750,300);
   printf("Student Contacts: \n");
   printf("Mail: \n");
    printf("***********************************\n");
  scanf("%s",contact.maill);
  size=strlen(contact.maill);
  mail[i]=malloc(10*sizeof(char));
  strcpy(mail[i],contact.maill);
  result=strstr(contact.maill,"@");
  resultcom=strstr(contact.maill,".com");
  while(!result||!resultcom)
  {  SetColor(4);
      printf("ERROR:its not mail its could be  have '@' and '.com'\n");
        scanf("%s",contact.maill);
     result=strstr(contact.maill,"@");
     resultcom=strstr(contact.maill,".com");


  }

    //______________________________________
     system("CLS");
     printf("press ENTER\n");
     getch();
     SetColor(9);
      Beep(750,300);
    printf("Phone Number: \n");
     printf("***********************************\n");
    scanf("%s",contact.numberphone);
    size=strlen(contact.numberphone);
    checkfuncnumber(contact.numberphone,size);
    phonenum[i]=malloc(size*sizeof(char));
    strcpy( phonenum[i],contact.numberphone);
    //______________________________________
                 SetColor(11);
          fprintf(fp,"%s| secound name: %s | last name: %s \n nationalty:%s \n ID:%s\n",arroffname[i], arrofmname[i],arroflname[i], arrofnalty[i],arrofid[i]);  //save the data in the file
          fprintf(fp,"Validity date of ID is %s/%s/%s \n",dayofid[i],monthofid[i],yearofid[i]); //save the data in the file
          fprintf(fp,"Reg number: %s \n", regstnum[i]);
          fprintf(fp,"Gander: %s \n", genders[i]);
          fprintf(fp,"Term: %s \n", termf[i]);
          fprintf(fp,"Number of transaction: %s \t", numoftrans[i]);
          fprintf(fp,"Bank: %s \t",bankortrans[i]);
          fprintf(fp,"Date of transaction is / %s / %s /%s \n",transactionmonth[i], transactionday[i], transactionyear[i]);
          fprintf(fp,"Payment Case%s \n", termf[i]);
          fprintf(fp,"department: %s \n",department[i]);
          fprintf(fp,"ADRESS:");
          fprintf(fp,":%s ,%s ,%s,%s,%s,\(\%s\)\  \n",flatnum[i],housnumber[i],housname[i],districtname[i],citytname[i], postalcod[i]);
          fprintf(fp,"day of BIRTH :%d/%d/%d  age: %d \n", monthbirth[i], monthbirth[i],yearbirth[i] ,agearr[i]);
          fprintf(fp,"Contacts: \t ");
          fprintf(fp," mail: %s "  "\n",mail[i]);
          fprintf(fp," phone: %s \n",phonenum[i]);
          // fprintf(fp,"credit hours : %d",creditarr[i]);
          fprintf(fp,"****************************************************************** \n");



      }
   }
      else if(menu=='2')
      {   Beep(750,300);
           fopen("prjct.txt","r");

               backk=edit();
                       if(backk==1)
                       {
                           printf("Enter the New email \n");
                           scanf("%s",mail[i]);
                       }
                       else if(backk==0)
                       {
                            printf("Enter the New phone \n");
                             scanf("%s",phonenum[i]);

                       }

      }
      else if(menu=='3')
      {    fopen("prjct.txt","w+");
          Beep(750,300);
          printf("student number : \n ");
          scanf("%d",&GPA.numofstud);

          printf("Credit Hours: ");
     printf("***********************************\n");
     scanf("%s",credithour.maxcredits);
     size=strlen(credithour.maxcredits);
     checkfuncnumber(credithour.maxcredits,size);
     maxcredit[GPA.numofstud]=(char *)malloc(size*sizeof(char));
     strcpy(maxcredit[GPA.numofstud],credithour.maxcredits);
     //__________________________________________
     printf("CREDIT hours are finished \n");
     printf("***********************************\n");
     scanf("%s",credithour.finishs);
     size=strlen(credithour.finishs);
     checkfuncnumber(credithour.finishs,size);
     finish[GPA.numofstud]=(char *)malloc(size*sizeof(char));
     strcpy(finish[GPA.numofstud],credithour.finishs);

     //__________________________________________
      printf("CREDIT hours are worked on \n");
     printf("***********************************\n");
     scanf("%s",credithour.currents);
     size=strlen(credithour.currents);
     checkfuncnumber(credithour.currents,size);
     current[GPA.numofstud]=(char *)malloc(size*sizeof(char));
     strcpy(finish[GPA.numofstud],credithour.currents);
     //_______________________________________-
    curr_func=atoi(current[GPA.numofstud]);
    max_func=atoi(maxcredit[GPA.numofstud]);
    finsh_func=atoi(finish[GPA.numofstud]);
    out= max_func-curr_func-finsh_func;
    creditarr[GPA.numofstud]=(int *)malloc(size*sizeof(int));
    creditarr[GPA.numofstud]=out;
    system("CLS");
    printf("press ENTER\n");
     getch();
      fprintf(fp,"credit hours : %d",creditarr[i]);
      }
      else if(menu =='4')
      {
             Beep(750,300);
             SetColor(11);
            ptr=average(stuGPA);
            fprintf(fp,"the AVGof gpa is of the student number %d -> %f \n",GPA.numofstud,*ptr);
      }


  else
  {
       Beep(750,300);
    char (*people)[COLUMNS][ROWS] = malloc(ROWS * sizeof(*people));
  printf("Enter the number of student \n");
  scanf("%d",&num);


   z=1;
    for(i = num; i < ROWS; i++){
      printf("ENTER next data for student number %d \n",num);
        while(z<COLUMNS)
        {

     printf("COURSE CODE :\n");
    scanf("%s",people[i][z]);
    size=strlen(people[i][z]);
    fprintf(fp,"%s \n",people[i][z]);
    ++z;
    printf("Course Name : \n");
    scanf("%s",people[i][z]);
    size=strlen(people[i][z]);
    checkfunction(people[i][z],size);
    fprintf(fp,"%s \n",people[i][z]);
    ++z;
     printf(" number COURSE taken :\n");
     scanf("%s \n ",people[i][z]);
      size=strlen(people[i][z]);

       fprintf(fp,"%s \n",people[i][z]);
     ++z;
      printf("COURSE GTA:\n");
     scanf("%s",people[i][z]);
      size=strlen(people[i][z]);
       checkfunction(people[i][z],size);
       fprintf(fp,"%s \n",people[i][z]);
     ++z;
     printf(" total grade:\n");
     scanf("%s",people[i][z]);
     size=strlen(people[i][z]);
     bakll=atoi(people[i][z]);
     fprintf(fp,"%s \n",people[i][z]);
     ++z;
          return 0;


        }

        }

         return 0 ;
 }
   }


   //}



   /*
      Name :Belal aboelkher zahran
      student Computer science Arab academy ABOUKIIR
      mail:belal.aboelkher@yahoo.com
      reg.num:18102470
   */


