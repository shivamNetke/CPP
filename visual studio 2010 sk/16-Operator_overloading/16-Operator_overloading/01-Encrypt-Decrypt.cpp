#include <iostream>
using namespace std;

int main()
{
   int a, iCouter, iChoice;
   char str[100];
   do{
        

        cout << "\nPlease choose following options:\n";
        cout << "1 = Encrypt the string.\n";
        cout << "2 = Decrypt the string.\n";
        cout<<"enter your choice : ";
        cin >> iChoice;        
        cout<<endl;
        cout << "Please enter a string:\t";
        cin >> str;

   switch(iChoice)
   {
      case 1:
         for(iCouter = 0; (iCouter < 100 && str[iCouter] != '\0'); iCouter++)
         {
            str[iCouter] = str[iCouter] + 1; 
         }
         cout << "\nEncrypted string: " << str << endl;
         break;

      case 2:
         for(iCouter = 0; (iCouter < 100 && str[iCouter] != '\0'); iCouter++)
         {
            str[iCouter] = str[iCouter] - 1; 
         }

      cout << "\nDecrypted string: " << str << endl;
      break;

      default:
         cout << "\nInvalid Input !!!\n";
    }
    cout<<"-- for continue[1] --  for exit program [0] -- :\t";
    cin>>a;
    }while(a == 1);
   
   return 0;
}
