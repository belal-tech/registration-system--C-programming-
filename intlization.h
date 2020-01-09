// declrations tybs  header file
#include <stdbool.h>
#define YEAR 2019
typedef char * stringg;
       unsigned int size,stuns;
       char numoenters;
       int paymentt;
       int   Gpastu;
       unsigned int year,day,month,counter,yearvalid,monthvalid,dayvalid,credit;
       char gendera;
       char gender;
       char yandn;
       char dyasint,monthint;
           size_t i,z;
           float *ptr;
           int num ;
           int regyear,term;
           int agearr[100];
           bool backk;
         int backkmail ;
           int result1;
           int result2;
           int mailf1;
           int mailf2;
           int bakll;
           int max_func,out,curr_func,finsh_func;
           char menu;
            stringg result;
           stringg resultcom;
           stringg regsternumber;
           stringg arroffname[];
           stringg arrofmname[];
           stringg arroflname[];
           stringg arrofnalty[];
           stringg arrofid[];
           stringg yearofid[];
           stringg monthofid[];
           stringg dayofid[];
           stringg flatnum[];
           stringg housnumber[];
           stringg housname[];
           stringg districtname[];
           stringg citytname[];
           stringg govermentname[];
           stringg postalcod[];
           stringg currentyear[];
           stringg regstnum[];
           stringg yearst[];
           stringg termest[];
           stringg numst[];
           stringg genders[];
           stringg test[];
           stringg termf[];
           stringg department[];
           stringg supervisor[];
           stringg numofsuerbvsr[];
           stringg paymentsydents[];
           stringg paymentdon[];
           stringg numofpayment[];
           stringg numoftrans[];
           stringg bankortrans[];
           stringg transactionyear[];
           stringg transactionday[];
           stringg transactionmonth[];
           stringg mail[];
           stringg phonenum[];
           stringg maxcredit[];
           stringg finish[];
           stringg current[];
           float *stuGPA [];
            int *creditarr[];

           int *yearbirth[];
           int *daybirth[];
           int *monthbirth[];
          //________________________________
         struct stuname stun;
         struct stuid   stuinfo;
         struct address stuadres;
         struct age     stuage;
          struct departdetail departstu;
          struct payment paymentstu;
          struct paytransaction stubank;
          struct contactstu contact;
          struct  credithours  credithour;
          struct gpa GPA ;
         time_t currentTime;
         //_________________________________________________
         void checkfunction(char str[],int sizee);
         void checkfuncnumber(char strr[],int sizee);
         void agefunc(int year,int agearr[],int i);
         void paymetsshow();
         void printMsg();
         int checkyear(int year);
       int credithour_func(char maxx[],char finshfunc[],char current_func[]);
       int *func(int num, int arrs[][10]);
       char cheackmenu(char menu);
        float *average(float age[]);

         int checkdays(int day);
         int toString(char a[]);
        int *regesternum();
          void SetColor(int ForgC);

         int askuser();
         int gander();
         int validity();
         int edit();





