#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>

class report
 {
 private :
	int 		admno;
	char		name[30];
	char		fname[30];
	int		    std;
	char		section;
	int		 phy;
	int		chem;
	int		math;
	int 		comp;
	int		eng;
	int		total;
	float		per;
	char		grade[3];
  public :
	void main_menu();    //function to display main menu
	void search_menu();  // function to display search menu
	void report_menu();  // function to  display report menu

	void read_data();	  // function to read all the data members from the
			   //keyboard
	void calculate();      // function to calculate total marks, per and grade

	void disp_data();	  // function to display data members on the screen

	void  add_record ();  // function to add student record in a data file
	void  del_record ();  //function to delete a record from the data file
	void modify_record();  //	Function to modify a record in a data file

	void search_name();   //function to read student name and search the 					  Information in the given database file, if it is
			  //	  available then display student information 					   otherwise display “ Name does not exist”

	void search_admno(); // function to read student admno and search the 					  Information in the given database file, if it is
					  // available then display student information 					   otherwise display “ Name does not exist”

	void search_class();				  // available then display student information 					   otherwise display “ Name does not exist”
	void single_report_card();
	void report_single();  // function to show single student report card

	void report_class();     // function to show class report of a single class

	void report_school();   // fucntion to show class wise report of whole
			     //   school
};


	       /* function to show main menu ------------*/
void  report::main_menu()
{
 int choice;
     do
       {
	 system("cls");
	 cout<<"\n\n\n\t\t R e p o r t  C a r d  M e n u\n\n";
	 cout<<"\n\n\t\t1. Add New Student ";
	 cout<<"\n\n\t\t2. Delete  Student";
	 cout<<"\n\n\t\t3. Modify student";
	 cout<<"\n\n\t\t4. Search Menu";
	 cout<<"\n\n\t\t5. Report Menu ";
	 cout<<"\n\n\t\t6. Exit ";
	 cout<<"\n\n\t\t   Enter your choice (1..6) : ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:    add_record();// function to call add record
		       break;
	    case 2:    // function to call delete record
		       del_record();
		       break;
	    case 3:    // function to call modify record
		       modify_record();
		       break;
	    case 4:    search_menu();
		       break;
	    case 5:    report_menu();
		       break;
	    case 6:    break;
	    default :
		       cout<<"\n Wrong Choice.... Try agian";
	 }  // end of switch
      }while(choice!=6);

}

/*----------- function to create report menu -----------*/

void  report ::report_menu()
{
 int choice;
     do
       {
	 system("cls");
	 cout<<"\n\n\n\t\t R e p o r t   M e n u\n\n";
	 cout<<"\n\n\t\t1. Single Student";
	 cout<<"\n\n\t\t2. Single class";
	 cout<<"\n\n\t\t3. Whole School";
	 cout<<"\n\n\t\t4. Exit ";
	 cout<<"\n\n\t\t   Enter your choice (1..4) : ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:    // function to call single student
		       report_single();
		       break;
	    case 2:    // function to display class report
		       report_class();
		       break;
	    case 3:    // function to display whole school report card
		       report_school();
		       break;
	    case 4:    break;
	    default :
		       cout<<"\n Wrong Choice.... Try agian";
	 }  // end of switch
      }while(choice!=4);

}

/*------------function to create search menu---------------*/

void  report ::search_menu()
{
 int choice;
     do
       {
	 system("cls");
	 cout<<"\n\n\n\t\t S e a r c h   M e n u \n\n";
	 cout<<"\n\n\t\t1. Admno Student";
	 cout<<"\n\n\t\t2. Student Name";
	 cout<<"\n\n\t\t3. Class wise";
	 cout<<"\n\n\t\t4. Exit ";
	 cout<<"\n\n\n\n\t\t   Enter your choice (1..4) : ";
	 cin>>choice;
	 switch(choice)
	 {

	    case 1:    // function to call search_admno
		       search_admno( );
		       getch();
		       break;

	    case 2:    // function to call search_name
		       search_name();
		       getch();
		       break;

	    case 3:    // function to call
		       search_class();
		       getch();
		       break;

	    case 4:    break;

	    default :
		       cout<<"\n Wrong Choice.... Try agian";
	 }  // end of switch
      }while(choice!=4);

}


/*------------function to read data members from keyboard------*/

void report:: read_data( )
 {
   system("cls");
   cout<<"\n Enter Adm No :";
   cin>>admno;
   cout<<"\n Enter Name : ";
   cin>>name;
   cout<<"\n Enter Father Name : ";
   cin>>fname;
   cout<<"\n Enter class : ";
   cin>>std;
   cout<<"\n Enter Section :";
   cin>>section;
   cout<<"\n Enter marks obtained in Phyics : ";
   cin>>phy;
   cout<<"\n Enter marks obtained in Chemistry : ";
   cin>>chem;
   cout<<"\n Enter marks obtained in Maths  : ";
   cin>>math;
   cout<<"\n Enter marks obtained in computer : ";
   cin>>comp;
   cout<<"\n enter marks obtaine in emglish : ";
   cin>>eng;

 }

/*------------function to calculate total marks, per and grade-----------*/
void report::calculate()
 {
  total = phy+chem+math+comp+eng;
  per = total/5.0;

  if(per>=95)
	     strcpy(grade,"A+");

 if(per<95 &&  per>=90)
	     strcpy(grade,"A");

 if(per<90 &&  per>=80)
	     strcpy(grade,"B+");

 if(per<80 &&  per>=70)
	     strcpy(grade,"B");

 if(per<70 &&  per>=60)
	     strcpy(grade,"C+");
 if(per<60)
	     strcpy(grade,"C");
}

/*---------function to display data members --------------*/

void  report::disp_data()
{

 cout<<"\n Admno               : "<<admno;
 cout<<"\n Student Name        : "<<name;
 cout<<"\n Father Name         : "<<fname;
 cout<<"\n Class & Section     : "<<std<<"-"<<section;
 cout<<"\n Physics             : "<<phy;
 cout<<"\n Chemistry           : "<<chem;
 cout<<"\n Maths               : "<<math;
 cout<<"\n Computer            : "<<comp;
 cout<<"\n English             : "<<eng;
 cout<<"\n Total Marks         : "<<total;
 cout<<"\n Percentage          : "<<per;
 cout<<"\n Grade               : "<<grade;


}

/*-------------function to add record in data  file ------*/
void  report::add_record ()
{
   ofstream fout;
   fout.open("report.dat",ios::app);
   read_data();
   calculate();
   fout.write((char*)this, sizeof(report));
   fout.close();
}

/*--------------function to search student record name wise ------*/

void report::search_name( )
{
  ifstream fin;
  fin.open("report.dat");
  char tname[30];
  int flag=0;

  system("cls");
  cout<<"\n Enter Name to search :";
  cin>>tname;

  while(fin.read((char*)this,sizeof(report)))
    {
	if(strcmpi(tname,name)==0)
	   {
	      system("cls");
	      cout<<"\n Student Information ";
	      cout<<"\n--------------------------------------------------------"<<endl;
	      disp_data();
	      flag=1;
	    }
    }
  fin.close();
  if(flag==0)
    cout<<"\n No such name : "<<strupr(tname)<<" exist in our record... Try again";

}

/*----------function to call search class wise -------------------------------*/
void report::search_class()
{
  ifstream fin;
  fin.open("report.dat");
  char tsect;
  int tstd;
  int flag;

  system("cls");
  cout<<"\n Enter student Class to search :";
  cin>>tstd;
  cout<<"\n Enter student section to search :";
  cin>>tsect;

  system("cls");
  cout<<"\n Class :"<<tstd<<" - "<<tsect<<endl;
  cout<<"-------------------------------------------------------------------------------"<<endl;
  cout<<"Admno\tName\tFname\t Phy \t Chem\t Math \t Comp \t Eng \t Total \t per\n";
  cout<<"-------------------------------------------------------------------------------"<<endl;

  while(fin.read((char*)this,sizeof(report)))
    {
        if(tsect==section && tstd == std)                                     
           {

             cout<<admno<<"\t"<<name<<"\t"<<fname<<"\t"<<phy<<"\t"<<chem<<"\t"<<math<<"\t"<<comp<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<endl;
             flag=1;             
            }   
    }      
  cout<<"-------------------------------------------------------------------------------"<<endl;
   
  fin.close();     
  if(flag==0)
      cout<<"\n\n information Not availabl for class :"<<tstd <<" - "<<tsect;
             
}

/*------------function to search record according to student admno ------------*/

void report :: search_admno( )
{
  ifstream fin;
  fin.open("report.dat");
  
  int tadmno;
  int flag=0;
  
  system("cls");
  cout<<"\n Enter Admission Number to search : ";
  cin>>tadmno;
  
  while(fin.read((char*)this,sizeof(report)))
    {
        if(tadmno == admno)                                     
           {
              system("cls");
              cout<<"\n Student Information ";
              cout<<"\n--------------------------------------------------------"<<endl;
              disp_data();
              flag = 1;    
            }   


    }       
  fin.close();     
  
  if(flag==0)
     cout<<"\n\n Admission No : "<<tadmno <<" does not exist.... Try again";
  
}



/*--------function to display single report card---------*/

void report::single_report_card()
{
  system("cls");

  cout<<"\n\t\t DAV Centenary Public School , Chander Nagar";
  cout<<"\n\t\t Session : 2012-13";
  cout<<"\n-------------------------------------------------------------------------------";    
  cout<<"\n\n Admno :"<<admno;
  cout<<"\n\n Name  :"<<name <<"\t\t Father Name :"<<fname<<"\t\t class :"<<std<<"-"<<section;
  cout<<"\n\n-------------------------------------------------------------------------------";    
  cout<<"\n Subject\tMax Mark\tMin Mark\t Marks Obtained";
  cout<<"\n--------------------------------------------------------------------------------";    
  cout<<"\n Physics\t100\t\t33\t\t\t"<<phy;
  cout<<"\n\n Chemistry\t100\t\t33\t\t\t"<<chem;
  cout<<"\n\n Maths\t\t100\t\t33\t\t\t"<<math;
  cout<<"\n\n Computer\t100\t\t33\t\t\t"<<comp;
  cout<<"\n\n English\t100\t\t33\t\t\t"<<eng;
  cout<<"\n\n-------------------------------------------------------------------------------";    
  cout<<"\n Total Marks :\t\t"<<total<<"\t\tPercentage : "<<per<<"\tGrade :"<<grade;
  cout<<"\n---------------------------------------------------------------------------------";    

}


/*----------function to show single student report-----*/

void report:: report_single()
{
  int tadmno;
  int flag =0;
  ifstream fin;
  fin.open("report.dat",ios::binary);   //binary mode 

  system("cls");
  cout<<"\n Enter admission No : ";
  cin>>tadmno;

  while(fin.read((char*)this, sizeof(report)))  // read record and check eof 
    {
       if(tadmno ==admno)
            single_report_card();  // function to display single report card
       else
            flag =1;                
     }
  fin.close();      
  if(flag==0)
     cout<<"\n\n Admission No :"<<tadmno <<" does not exist.... Try again";      
  getch();
}


/*-------------function to display class wise report card------------*/
void report:: report_class()
 {
     
  int tstd; 
  char tsect;

  int row =6;
  int no =0;
  ifstream  fin;
  fin.open("report.dat");
  
  system("cls");
  
  cout<<"n\n Enter Class (1..12)  :";
  cin>>tstd;
  cout<<"\n Enter section :";
  cin>>tsect;
  
  system("cls");
  
  cout<<"\n\t\t D.A.V. Centenary Public School Chander Nagar, GZB";
  cout<<"\n\t\t Class :"<<tstd<<"-"<<tsect<<"\t\t Session : 2012-13"<<endl;
  cout<<"-------------------------------------------------------------------------------"<<endl;
  cout<<"Admno\tName\tFname\t Phy \t Chem\t Math \t Comp \t Eng \t Total \t per\n";
  cout<<"-------------------------------------------------------------------------------"<<endl;

  while(fin.read((char*)this, sizeof(report)))
   {
      if(tstd==std && tsect== section )
       {
         row= row+1;
         no++;
         if(row>=30)
          { 
            cout<<"\n\n  Press any key to continue ................";
            getch();
              cout<<"\n\t\t D.A.V. Centenary Public School Chander Nagar, GZB";
              cout<<"\n\t\t Class :"<<tstd<<"-"<<tsect<<"\t\t Session : 2012-13"<<endl;
              cout<<"-------------------------------------------------------------------------------"<<endl;
              cout<<"Admno\tName\tFname\t Phy \t Chem\t Math \t Comp \t Eng \t Total \t per\n";
              cout<<"-------------------------------------------------------------------------------"<<endl;
            row =6;
           }          
         cout<<admno<<"\t"<<name<<"\t"<<fname<<"\t"<<phy<<"\t"<<chem<<"\t"<<math<<"\t"<<comp<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<endl;
         
         }    
    }                
  fin.close();
  cout<<"-------------------------------------------------------------------------------"<<endl;
  cout<<"\n Total Student : "<<no<<" Report prepared By  :"<<" Rakesh Kumar ";
  getch();   
  
 }

/*-------------function to prepare whole school report card-----------------------*/

void report:: report_school()
 {
     
  int tstd; 
  char tsect;

  int row =6;
  int no =0;
  
  ifstream  fin;
  fin.open("report.dat");
  
  system("cls");
  
  cout<<"\n\t\t D.A.V. Centenary Public School Chander Nagar, GZB";
  cout<<"\n\t\t Class :"<<tstd<<"-"<<tsect<<"\t\t Session : 2012-13"<<endl;
  cout<<"-------------------------------------------------------------------------------"<<endl;
  cout<<"Admno\tName\tFname\t Phy \t Chem\t Math \t Comp \t Eng \t Total \t per\n";
  cout<<"-------------------------------------------------------------------------------"<<endl;

  while(fin.read((char*)this, sizeof(report)))
   {
         row= row+1;  
         no++;  
         if(row>=30)
          { 
            cout<<"\n\n  Press any key to continue ................";
            getch();
              cout<<"\n\t\t D.A.V. Centenary Public School Chander Nagar, GZB";
              cout<<"\n\t\t Class :"<<tstd<<"-"<<tsect<<"\t\t Session : 2012-13"<<endl;
              cout<<"-------------------------------------------------------------------------------"<<endl;
              cout<<"Admno\tName\tFname\t Phy \t Chem\t Math \t Comp \t Eng \t Total \t per\n";
              cout<<"-------------------------------------------------------------------------------"<<endl;
            row =6;
           }          
         cout<<admno<<"\t"<<name<<"\t"<<fname<<"\t"<<phy<<"\t"<<chem<<"\t"<<math<<"\t"<<comp<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<endl;
    }                
  fin.close();
  cout<<"-------------------------------------------------------------------------------"<<endl;
  cout<<"\n Total Student : "<<no<<" Report prepared By  :"<<" Rakesh Kumar ";
  getch();   
  
 }

/*------------function to delete single record from binay file report.dat------*/

void  report::del_record ()
{
 
 ifstream fin;
 ofstream fout;
 int tadmno;
 int flag =0;
 system("cls");
 cout<<"\n Enter admno to delete :";
 cin>>tadmno;
 
 fin.open("report.dat",ios::binary);
 fout.open("temp.dat");
 
 while(fin.read((char*)this, sizeof(report)))
  {
     if(tadmno!=admno)
         fout.write((char*)this,sizeof(report));
     else
         flag=1;                                      
        
  }                             
  fin.close();
  fout.close();
  
  remove("report.dat");  // function from stdio.h header file
  rename("temp.dat","report.dat"); // function from stdio.h header file
  
  if(flag==1)
     cout<<"\n\n Record Sucessfully removed ";
  else
     cout<<"\n Admission No :"<<tadmno <<" does not exist...Try again";
  getch();        
}     


/*---------function to modify student information-----------------------*/

void report:: modify_record( )
{
 
 ifstream fin;
 ofstream fout;
 int tadmno;
 int flag =0;
 system("cls");
 cout<<"\n Enter Admno to Modify :";
 cin>>tadmno;
 
 fin.open("report.dat",ios::binary);
 fout.open("temp.dat");
 
 while(fin.read((char*)this, sizeof(report)))
  {
     if(tadmno == admno)
        {  read_data(); calculate(); flag=1; }                      
     
     fout.write((char*)this,sizeof(report));
        
  }                             
  fin.close();
  fout.close();
  
  remove("report.dat");  // function from stdio.h header file
  rename("temp.dat","report.dat"); // function from stdio.h header file
  
  if(flag==1)
     cout<<"\n\n Record Sucessfully modified ";
  else
     cout<<"\n Admission No :"<<tadmno <<" does not exist...Try again";
  getch();        
     
}


/*-----------main function to implement report class ------------*/

int main()
{
    report r;
    r.main_menu();
  return 0;  
}
