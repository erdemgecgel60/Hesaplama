#include <iostream>
using namespace std;
int main(){

   //Karne Sistemindeki Derslerin Ortalamasını alarak kullanıcının 

 
   int exam1,exam2,quiz1,quiz2;
   //MATH LESSON
   cout << "Math 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float mathmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;

   float mathpoint = (mathmark * 6);

   
   /////////////////////////////////////////////////

   //TURKİSH LESSON
   cout << "Turkish 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float turkishmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;
   float turkishpoint = (turkishmark * 5);

   //////////////////////////////////////////////////////

   //ENGLİSH LESSON
   cout << "English 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float englishmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float englishpoint = (englishmark * 4);

   ///////////////////////////////////////////////////////////
   //CHEMİSTRY LESSON
   cout << "Chemistry 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float chemistrymark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float chemistrypoint = (chemistrymark * 2);

   /////////////////////////////////////////////////////////////
   //Deustch Lesson
   cout << "Deustch 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float deustchmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float deustchpoint = (deustchmark * 2);

    //////////////////////////////////////////////////////////////
   //Singing Lesson
   cout << "Singing 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float singingmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float singingpoint = (singingmark * 2);

   /////////////////////////////////////////////////////////////
   //Religion Lesson
   cout << "Religion 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float religionmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float religionpoint = (religionmark * 2);

   ////////////////////////////////////////////////////////////////
   //Geography Lesson
   cout << "Geography 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float geographymark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float geographypoint = (geographymark * 2);

   //////////////////////////////////////////////////////////////
   //History Lesson
   cout << "History 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float historymark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float historypoint = (historymark * 2);

   ////////////////////////////////////////////////////////////////
   //Biology Lesson
   cout << "Biology 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float biologymark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float biologypoint = (biologymark* 2);

   ////////////////////////////////////////////////////////////
   //Optional Lesson
   cout << "Optional Lesson 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float optionalmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float optionalpoint = (optionalmark * 2);

   //////////////////////////////////////////////////////////////
   //Physics Lesson
   cout << "Physics 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float physicsmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float physicspoint = (physicsmark * 2);

   /////////////////////////////////////////////////////////////////
   //Philosophy Lesson

   cout << "Philosophy 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float phimark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float phipoint = (phimark * 2);

   ///////////////////////////////////////////////////////
    // P.E Lesson

   cout << "P.E 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float pemark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float pepoint = (pemark * 2);

   ///////////////////////////////////////////////////////
   //Second Religion Lesson 

   cout << "Second Religion Lesson 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float srlmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float srlpoint = (srlmark * 1);

   //////////////////////////////////////////////////////////
   // Second P.E Lesson
   cout << "Second P.E Lesson 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float spelmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float spelpoint = (spelmark * 1);
   
   /////////////////////////////////////////////////////////////////////

   float averageofalllesons = (mathpoint + turkishpoint + chemistrypoint + spelpoint + srlpoint + deustchpoint + englishpoint + singingpoint + religionpoint + geographypoint + historypoint + biologypoint + optionalpoint + physicspoint + phipoint + pepoint) / 39.0;

   /////////////////////////////////////////////////////////////////////////

   if (averageofalllesons < 70.0 && averageofalllesons >= 50.0)
   {
      cout << " Sinif Gecildi. " << endl;
      cout << "Ortalamaniz : " << averageofalllesons << endl;
   }
   else if (averageofalllesons >=  70.0 && averageofalllesons <= 84.99)
   {
      cout << " Tesekkur Belgesi " << endl;
      cout << "Ortalamaniz : " << averageofalllesons << endl;
   }
   else if (averageofalllesons >= 85.0 && averageofalllesons <= 100.0)
   {
      cout << "Takdir Belgesi" << endl;
      cout << "Ortalamaniz : " << averageofalllesons << endl;
   }

   cout << "Math Average : " << mathmark << endl;
   cout << "Turkish Average : " << turkishmark << endl;
   cout << "Chemistry Average : " << chemistrymark << endl;
   cout << "S.P.E.L Average : " << spelmark << endl;
   cout << "S.R.L Average : " << srlpoint << endl;
   cout << "Deustch Average : " << deustchmark << endl;
   cout << "English Average : " << englishmark << endl;
   cout << "Singing Average : " << singingmark << endl;
   cout << "Religion Average : " << religionmark << endl;
   cout << "Geography Average : " << geographymark << endl;
   cout << "History Average : " << historymark << endl;
   cout << "Biology Average : " << biologymark << endl;
   cout << "O.L Average : " << optionalmark << endl;
   cout << "Physics Average : " << physicsmark << endl;
   cout << "Philosophy Average : " << phimark << endl;
   cout << "P.E Average : " << pemark << endl;

   

   
   
   /*string isim = "Erdem";
    string soyisim = "Gecgel";
    string okulnumarasi = "238";
    int errornumber;
    int exam1,exam2,quiz1,quiz2;
    string name,surname,schoolnumber;


    while (true)
    {
      
      cout << "Name : " ;

      cin >> name;

      cout << "Surname : " ;

      cin >> surname;

      cout << "School Number : " ;

      cin >> schoolnumber;

      if ((isim == name) && (soyisim == surname) && (okulnumarasi == schoolnumber))
      {
        cout << "Entered Account" << endl;
        
       //MATH LESSON  //16 Dersin Ortalaması Hesaplanir.
       cout << "Math 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

       cin >> exam1 >> exam2 >> quiz1 >> quiz2;

       float mathmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;

       float mathpoint = (mathmark * 6);

          /////////////////////////////////////////////////

   //TURKİSH LESSON
    cout << "Turkish 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

    cin >> exam1 >> exam2 >> quiz1 >> quiz2;

    float turkishmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;
    float turkishpoint = (turkishmark * 5);

   //////////////////////////////////////////////////////

   //ENGLİSH LESSON
     cout << "English 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

     cin >> exam1 >> exam2 >> quiz1 >> quiz2;

     float englishmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
     float englishpoint = (englishmark * 4); //Ve Ortalamayı Ders Saatine Carparak Agırlıgını Buluruz.

   ///////////////////////////////////////////////////////////
   //CHEMİSTRY LESSON
     cout << "Chemistry 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

     cin >> exam1 >> exam2 >> quiz1 >> quiz2;

     float chemistrymark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
     float chemistrypoint = (chemistrymark * 2);
   /////////////////////////////////////////////////////////////
   //Deustch Lesson
    cout << "Deustch 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;
     
    cin >> exam1 >> exam2 >> quiz1 >> quiz2; 
    
    float deustchmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
    float deustchpoint = (deustchmark * 2);

    //////////////////////////////////////////////////////////////
   //Singing Lesson
    cout << "Singing 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

    cin >> exam1 >> exam2 >> quiz1 >> quiz2;

    float singingmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
    float singingpoint = (singingmark * 2);

   /////////////////////////////////////////////////////////////
   //Religion Lesson
    cout << "Religion 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

    cin >> exam1 >> exam2 >> quiz1 >> quiz2;

    float religionmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
    float religionpoint = (religionmark * 2);

   ////////////////////////////////////////////////////////////////
   //Geography Lesson
    cout << "Geography 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

    cin >> exam1 >> exam2 >> quiz1 >> quiz2;

    float geographymark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
    float geographypoint = (geographymark * 2);

   //////////////////////////////////////////////////////////////
   //History Lesson
    cout << "History 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

    cin >> exam1 >> exam2 >> quiz1 >> quiz2;

    float historymark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
    float historypoint = (historymark * 2);

   ////////////////////////////////////////////////////////////////
   //Biology Lesson
   cout << "Biology 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float biologymark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float biologypoint = (biologymark* 2);

   ////////////////////////////////////////////////////////////
    //Optional Lesson
   cout << "Optional Lesson 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float optionalmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float optionalpoint = (optionalmark * 2);

   //////////////////////////////////////////////////////////////
   //Physics Lesson
   cout << "Physics 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float physicsmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float physicspoint = (physicsmark * 2);

   /////////////////////////////////////////////////////////////////
   //Philosophy Lesson

   cout << "Philosophy 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float phimark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float phipoint = (phimark * 2);

   ///////////////////////////////////////////////////////
    // P.E Lesson

   cout << "P.E 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float pemark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float pepoint = (pemark * 2);

   ///////////////////////////////////////////////////////
   //Second Religion Lesson 

   cout << "Second Religion Lesson 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float srlmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float srlpoint = (srlmark * 1);

   //////////////////////////////////////////////////////////
   // Second P.E Lesson
   cout << "Second P.E Lesson 2 Sinav Notunuzu ve 2 Quiz Notunuzu Giriniz : " << endl;

   cin >> exam1 >> exam2 >> quiz1 >> quiz2;

   float spelmark = ((exam1 + exam2 + quiz1 + quiz2)) / 4.0;   
   float spelpoint = (spelmark * 1);

   /////////////////////////////////////////////////////////////////////

   float averageofalllesons = (mathpoint + turkishpoint + chemistrypoint + spelpoint + srlpoint + deustchpoint + englishpoint + singingpoint + religionpoint + geographypoint + historypoint + biologypoint + optionalpoint + physicspoint + phipoint + pepoint) / 39.0;
   
    /////////////////////////////////////////////////////////////////////////

   if (averageofalllesons < 70.0 && averageofalllesons >= 50.0)
   {
      cout << " Sinif Gecildi. " << endl;
      cout << "Ortalamaniz : " << averageofalllesons << endl;
   }
   else if (averageofalllesons >=  70.0 && averageofalllesons <= 84.99)
   {
      cout << " Tesekkur Belgesi " << endl; //50 ortalamsından büyükse sınıf geçildiği için teşekkür veya takdir belgelerine ekstra olarak sınıfın geçildiğini belirtmeme gerek yok.
      cout << "Ortalamaniz : " << averageofalllesons << endl;
   }
   else if (averageofalllesons >= 85.0 && averageofalllesons <= 100.0)
   {
      cout << "Takdir Belgesi" << endl;
      cout << "Ortalamaniz : " << averageofalllesons << endl;
   }
   else
   { 
     cout << "Sinif Gecilmedi." << endl;
     cout << "Ortalamaniz :  " << averageofalllesons << endl; 
   }
   //Öğrencinin Genel Ortalaması ve Dersler Ortalaması Gösterilir.
   cout << "Math Average : " << mathmark << endl;
   cout << "Turkish Average : " << turkishmark << endl;
   cout << "Chemistry Average : " << chemistrymark << endl;
   cout << "S.P.E.L Average : " << spelmark << endl;
   cout << "S.R.L Average : " << srlpoint << endl;
   cout << "Deustch Average : " << deustchmark << endl;
   cout << "English Average : " << englishmark << endl;
   cout << "Singing Average : " << singingmark << endl;
   cout << "Religion Average : " << religionmark << endl;
   cout << "Geography Average : " << geographymark << endl;
   cout << "History Average : " << historymark << endl;
   cout << "Biology Average : " << biologymark << endl;
   cout << "O.L Average : " << optionalmark << endl;
   cout << "Physics Average : " << physicsmark << endl;
   cout << "Philosophy Average : " << phimark << endl;
   cout << "P.E Average : " << pemark << endl;

   break;

        
      }
      else if ((isim != name) && (soyisim == surname) && (okulnumarasi == schoolnumber))
      {
        cout << "Name Is Wrong" << endl;
        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
        
      }
      else if ((isim == name) && (soyisim != surname) && (okulnumarasi == schoolnumber))
      {
         cout << "Surname Is Wrong" << endl;
         errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
      }
      else if ((isim == name) && (soyisim == surname) && (okulnumarasi != schoolnumber))
      {
        cout << "School Number Is Wrong" << endl;
        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
        
      }
      else if ((isim != name) && (soyisim != surname) && (okulnumarasi == schoolnumber))
      {
        
        cout << "Name and Surname are Wrong" << endl;
        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
        
      }
      else if ((isim != name) && (soyisim == surname) && (okulnumarasi != schoolnumber))
      {
        cout << "Name and School Number are wrong" << endl;
        
        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
      }
      else if ((isim == name) && (soyisim != surname) && (okulnumarasi != schoolnumber) )
      {
        cout << "Surname and School Number are Wrong " << endl;

        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
      }
      else if ((isim != name) && (soyisim != surname) && (okulnumarasi != schoolnumber))
      {
       
        cout << "Name,Surname and School Number are wrong " << endl;

        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
      }
      
      
      
      
      
      
      
       

    }*/
    
    
  
     

  
   


   
    



   
 
 




}