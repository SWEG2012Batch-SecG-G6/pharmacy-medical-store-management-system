#include<iostream>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<string>
#include<vector>
#include<cmath>
#include<ctime>
#include<cstring> //for strtok
#include<sstream>
using namespace std;
void admin_login()
  {
      cout << "enter your user name" << endl;
      string username;
      string password;
      username = "imran";
      password = "1234";
 

      
      string user_trial;
      string pass_trial;
      
      cin.clear();
       cin >> user_trial ;
      if(username == user_trial)
      {
          cout << "correct" << endl;
      }
      else
      {
          for(int i = 3 ; i >= 0 ; i--)
          {
              cout << "incorrect user name" << endl;
              cout << "you have " << i-1 << "chance" << endl;
              cin.clear();
              cin.ignore();
              cin >> user_trial;
              if(username == user_trial)
              {
                  cout << "correct" << endl;
                  break;
              }
              else if(i == 2)
              {
                  cout << "you lost your chance" << endl;
                  
                  terminate();
              }
          }
      }
  

      cout << "enter your password" << endl;
      cin.clear();

      cin >> pass_trial;
      if(password == pass_trial)
      {
          cout << "correct" << endl;
      }
      else
      {
          for(int j = 3 ; j >= 0 ; j--)
          {
              cout << "incorrect password" << endl;
              cout << "you have " << j-1 << "chance" << endl;
              cin.clear();
              cin.ignore();
              cin >> user_trial;
              if(password == pass_trial)
              {
                  cout << "correct" << endl;
                  break;
              }
           

              else if(j == 2)
              {
                  cout << "you lost your chance" << endl;
                terminate();
              }
          }
      }
  }
   void user_login()
  {
      cout << "enter your user name" << endl;
      string username;
      string password;
       username = "bahran";
       password = "bahran123";


      
      string user_trial;
      string pass_trial;
      
      cin.clear();
       cin >> user_trial ;
      if(username == user_trial)
      {
          cout << "correct" << endl;
      }
      else
      {
          for(int i = 3 ; i >= 0 ; i--)
          {
              cout << "incorrect user name" << endl;
              cout << "you have " << i-1 << "chance" << endl;
              cin.clear();
              cin.ignore();
              cin >> user_trial;
              if(username == user_trial)
              {
                  cout << "correct" << endl;
                  break;
              }
              else if(i == 2)
              {
                  cout << "you lost your chance" << endl;
                  
                  terminate();
              }
          }
      }
  

      cout << "enter your password" << endl;
      cin.clear();

      cin >> pass_trial;
      if(password == pass_trial)
      {
          cout << "correct" << endl;
      }
      else
      {
          for(int j = 3 ; j >= 0 ; j--)
          {
              cout << "incorrect password" << endl;
              cout << "you have " << j-1 << "chance" << endl;
              cin.clear();
              cin.ignore();
              cin >> user_trial;
              if(password == pass_trial)
              {
                  cout << "correct" << endl;
                  break;
              }
           

              else if(j == 2)
              {
                  cout << "you lost your chance" << endl;
                terminate();
              }
          }
      }
  }
  int main(){
  	admin_login();
  	user_login();
  	
  	
  	
  	return 0;
  }