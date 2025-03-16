#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(){

   
   int number;
   int mod;
   int number2;
   char operator1;
   int faktoriyel = 1;
   string yesorno;
   float trivaluable;
   

   int toplam = 0;
   int carpim = 1;
   
   float percent;
   float resultpercent;
   float karekok;
   char trigonexpression;
   int exponentnumber;
   

   
   cout << "Operators (+,-,*,/,P,M,F,E,T) : ";

   cin >> operator1;

   switch (operator1)
   {
   case '+':
       
    while (true)
    {

       cout << "Number : " ;

       cin >> number;

       toplam += number;

       if (number == 0)
       {
        
         cout << "Total : " << toplam << endl;

         break;

       }
       
      
    }
    
    break;

   case '*' : 

    while (true)
    {

       cout << "Number : " ;

       cin >> number;

       carpim *= number;

       if (number == 1)
       {
        
         cout << "Total : " << carpim << endl;

         break;

       }
       
      
    }
    
    break;

   case '-':
      

       cout << "Number : " ;

       cin >> number;

      while (true)
      {

   
       cout << "Number : " ;

       cin >> number2;

       number -= number2;

       if (number2 == 0)
       {
         cout << "Total : " << number << endl;

         break;
         
       }
       
         
      }
      
      break;

   case '/' :

       cout << "Number : " ;

       cin >> number;

      while (true)
      {

   
       cout << "Number : " ;

       cin >> number2;

       number /= number2;

       if (number2 == 1)
       {
         cout << "Total : " << number << endl;

         break;
         
       }

       
       
       
   
      }
      
      break;

   case 'M':

    cout << "Number :  ";

    cin >> number;

    cout << "Number  : ";

    cin >> number2;

    mod = number %= number2; 

    cout << "Total : " << mod << endl;

    cout << "Do you want continue : ";

    cin >> yesorno;

    while (yesorno == "Yes")
    {

    cout << "Number :  ";

    cin >> number;

    cout << "Number  : ";

    cin >> number2;

    mod = number %= number2; 

    cout << "Total : " << mod << endl;

    cout << "Do you want continue : ";

    cin >> yesorno;
       
    }
    

    break;



        

   case 'P':
    
    
      
    cout << "Number :  ";

    cin >> number;

    cout << "Percent : ";

    cin >> percent;

    resultpercent = number * percent;

    cout << "Total : " << resultpercent << endl;

    cout << "Do you want continue : ";

    cin >> yesorno;

    while (yesorno == "Yes")
    {
    cout << "Number :  ";

    cin >> number;

    cout << "Percent : ";

    cin >> percent;

    resultpercent = number * percent;

    cout << "Total : " << resultpercent << endl;

    cout << "Do you want continue : ";

    cin >> yesorno;
      
    }
    

    break;

  case 'F':

  cout << "Number : " ;

  cin >> number;

  for (number; number != 0; number--)
  {
    
    faktoriyel *= number;


    cout << "Number : " << number << endl;
    
   
  }
  
  cout << "Result : " << faktoriyel << endl;

  break;

  case 'E':
     

     cout << "Number : ";

     cin >> number;

     cout << "Number : ";

     cin >> number2;
    
     exponentnumber = pow(number , number2);

     cout << "Total : " << exponentnumber << endl; 

     cout << "Do you want continue : ";

     cin >> yesorno;

     while (yesorno == "Yes")
     {
      
     cout << "Number : ";

     cin >> number;

     cout << "Number : ";

     cin >> number2;
    
     exponentnumber = pow(number , number2);

     cout << "Total : " << exponentnumber << endl; 

     cout << "Do you want continue : ";

     cin >> yesorno;

     }
     
     cout << "Total : " << exponentnumber << endl; 

     break;

   case 'S':

     cout << "Number : " ;

     cin >> number;

     karekok = sqrt(number) ;

     cout << "Total : " << karekok << endl;

     cout << "Do you want continue : ";

     cin >> yesorno;

     while (yesorno == "Evet")
     {

     cout << "Number : " ;

     cin >> number;

     karekok = sqrt(number) ;

     cout << "Total : " << karekok << endl;

     cout << "Do you want continue : ";

     cin >> yesorno;
      
     }
     
     break;

  case 'T': 

    cout << "Choose an expression : " << endl;

    cin >> trigonexpression;
   
    switch (trigonexpression)
    {
    case 'T':

     cout << "Number : " ;

     cin >> number;
    
     trivaluable = tan(number);

     cout << "Tanjant Degeri : "<< trivaluable << endl;

     cout << "Do you want continue ?";

     cin >> yesorno;

     while (yesorno == "Evet")
     {
      
     cout << "Number : " ;

     cin >> number;
    
     trivaluable = tan(number);

     cout << "Tanjant Degeri : "<< trivaluable << endl;

     cout << "Do you want continue ?";

     cin >> yesorno;
      
     }
     
     break;
    case 'S':

     cout << "Number : " ;

     cin >> number;
    
     trivaluable = sin(number);

     cout << "Sinus Degeri : "<< trivaluable << endl;

     cout << "Do you want continue ?";

     cin >> yesorno;

     while (yesorno == "Evet")
     {
       
     cout << "Number : " ;

     cin >> number;
    
     trivaluable = sin(number);

     cout << "Sinus Degeri : "<< trivaluable << endl;

     cout << "Do you want continue ?";

     cin >> yesorno;

     }
     

     break;

    case 'C':

    cout << "Number : " ;

     cin >> number;
    
     trivaluable = cos(number);

     cout << "Kosinus Degeri : "<< trivaluable << endl;

     cout << "Do you want continue ?";

     cin >> yesorno;

     while (yesorno == "Evet")
     {

      cout << "Number : " ;

     cin >> number;
    
     trivaluable = cos(number);

     cout << "Kosinus Degeri : "<< trivaluable << endl;

     cout << "Do you want continue ?";

     cin >> yesorno;
      
     }
     

 
     break;
    
    default: 
       cout << "Cancelled." << endl;
      break;
    }

    break;


   default:
     
    cout << "Undefined Expression" ;

    break;
   }
   












}