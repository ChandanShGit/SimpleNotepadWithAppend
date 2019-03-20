#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<windows.h>
using namespace std;

void Notepad()
{

    int op,i=0;
    char A[100000],F_name[50];
    char a;
    ofstream F_out;
    ifstream F_in;

        Note:
             system("cls");
             cout<<"\n\n\t\t\t\t\t\tKARL NOTEPAD - \"CHANDAN SHARMA\"\n";
             cout<<"\n\t\t\tPlease provide Extension after file name e.g .txt  , .dat etc";
             cout<<"\n\t\t\tCreate or choose existing file in current directory with proper extension";
             cout<<"\n\t\t\tTO SAVE FILE PRESS \"ESC\"";
             cout<<"\n\nEnter File:";
             gets(F_name);
             cout<<"1.CREATE (REmove old data)  2.APPEND/MERGE (include old Data in  Begg.)\n";
             op = getche();
             system("cls");

             if(op=='1'){
             F_out.open(F_name);}
             else if (op=='2'){
             F_out.open(F_name,ios::app|ios::out);}
             else {
                        perror("No Command Found");
                        cout<<endl;
                        goto Note;
                   }

            cout<<"\t\t\t\t\t\tKARL NOTEPAD \"CHANDAN SHARMA\" \n";

            for(;;) {
                    a= _getch();
                    if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0' && a<='9')||a==32||a==33)
                    {
                       A[i]=a;
                       i++;
                       cout<<a;
                    }
                   if(a=='\b' && i>=1)
                       {
                        cout<<"\b \b";
                          i--;
                       }
                   if((a>32 && a<48) ||(a>57 && a<65) || (a>90 && a<97))
                       {

                           A[i]=a;
                           i++;
                           cout<<a;
                       }


   if(a=='\r')
      {
        A[i]='\n';
        cout<<"\n";
        i++;
      }

   if(a==27)
        {
        A[i]='\0';
        cout<<"\n\nSaving File:"<<F_name<<"\nEnter to continue......."<<endl;
        system("pause");
        break;
       }
    }
        F_out<<A;
       cout<<A;
}
main()
{
    Notepad();
    return 0;

}
