

typedef struct stuname
   {                                 //header file to declartion the strcucts
     char fname[50];
     char mname[50];
     char lname[50];
     char stunalty[50];
   }stuname;
     typedef struct stuid
      {
       char id[100];
       char yearofv[100];
       char dayofv[100];
       char monthofv[100];
      }stuid;
      typedef struct address
    {
       char flatnumber[100];
       char housenumber[100];
       char streetname[100];
       char dicritname[100];
       char cityname[100];
       char gouverment[100];
       char postalcode[100];
      }address;

      typedef struct age
      {
          int day;
          int month;
          int year;
      }age;

      typedef struct departdetail
      {
          char supervisorname[50];
          char derpartmen[50];
          char  numofsupervise[10];
      }departdetail;
      typedef struct payment
      {
          char typeoffund[50];
          char paynmetdone[50];
          char numofpaynmet[50];


      } payment;
      typedef struct paytransaction
      {
          char numoftransaction[100];
          char banktransaction[100];
          char transactionyear[100];
          char transactionmonth[100];
           char transactionday[100];
      }paytransaction;

      typedef struct contactstu
      {
        char maill[100];
        char numberphone[100];

      }contactstu;
      typedef struct credithours
      {

          char maxcredits[100];
          char finishs[100];
          char currents[100];
      } credithours;
      typedef struct gpa
      {
         int gpa;
          int numofsemster;
          int numofstud;


      }gpa;

