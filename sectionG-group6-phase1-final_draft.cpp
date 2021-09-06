#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>
#include<vector>
#include<cmath>
#include<ctime>
#include<sstream>



using namespace std;

   string A_username = "imran"; //admin user name
    string A_password ="1234";//admin password


     string U_username = "bahran"; //users's username
      string U_password = "bahran123"; // user password

// a struct that will hold sale information
struct sale
{
    string buyer;
    int sold;
    string name;
    string date;
};
//a struct that will hold drug information
struct drug
{
    string name;
    int quantity; // quantity available for sale
    int batch; // the batch number
    float i_price; // the price at which the organization buys the drug
    float s_price; // the price at which it is sold
    string expiry; // expire date of the drug
    int sold; // amount sold
    
};
vector<drug>drugs;// a vector with a type structure to hold multiple drug information
vector<sale>sales;// a vector with a type sale to hold multiple sales information
vector<string>expire;// a vector with a type string to hold the expire date of the drugs
// a function to check the readability of a string input 
string str_input()
{
    string choice;
    getline(cin, choice);
     if(cin.good()== 0) //if there is error reading the input
       {
           for(int i = 3 ; i > 0 ; i--)
           {
                 cin.clear();
            cin.ignore();
            cout << "error input" << endl;
            
        cout << "you have " << i-1 << " chance" << endl;
        cin >> choice;
        if(cin.good() != 0) // if there is no error
        {
            break;
        }
        

        

       
        else if(i == 2)
        {
           cout << "you have lost your chance" << endl;
           exit(5);
       

           



        }
           }
       }
          
return choice;

}
//a function to check the readability of an integer input
int int_input()
{
    int choice;
    cin >> choice;
     if(cin.good()== 0) // if three is error reading the input
       {
           for(int i = 3 ; i > 0 ; i--)
           {
                 cin.clear();
            cin.ignore();
            cout << "error input" << endl;
            
        cout << "you have " << i-1 << " chance" << endl;
        cin >> choice;
        if(cin.good() != 0)
        {
            break;
        }
        

        

       
       if(i == 2)
       {
           cout << "you have lost your chance" << endl;
           terminate();
       

           



        }
           }
       }
          
return choice;

}
   // check the username and password of the admin
  void admin_login()
  {
      cout << "enter your user name" << endl;
   
   
    
    

 

      
      string user_trial; 
      string pass_trial;
      
      cin.clear();
       cin >> user_trial;
      if(A_username == user_trial)
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
              cin>>user_trial;
              if(A_username == user_trial)
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

      cin>>pass_trial;
      if(A_password == pass_trial)
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
              cin>>pass_trial;
           
              if(A_password == pass_trial)
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
  // check the user name and password of user
   void user_login()
  {
      cout << "enter your user name" << endl;
  
     


      
      string user_trial;
      string pass_trial;
      
      cin.clear();
       cin >> user_trial ;
      if(U_username == user_trial)
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
              if(U_username == user_trial)
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
      if(U_password == pass_trial)
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
              cin >> pass_trial;
              if(U_password == pass_trial)
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

  void data()// a function to store the data of all the drugs
  {
       drug d1,d2,d3,d4,d5,d6,d7; // declaring variable of type drug to store our data
      
      d1.name = "lisinopril";
      d2.name= "azithromycin";
      d3.name ="metfromin";
      d4.name = "lipitor";
      d5.name="amlodipin";
      d6.name ="amoxacilin";
      d7.name ="panadol";

      d1.quantity = 40;
      d2.quantity= 90;
      d3.quantity =120;
      d4.quantity = 5;
      d5.quantity=120;
      d6.quantity =4;
      d7.quantity =300;

      d1.batch= 101;
      d2.batch= 104;
      d3.batch =120;
      d4.batch= 110;
      d5.batch=122;
      d6.batch =111;
      d7.batch =107;

       d1.i_price= 170;
      d2.i_price= 190;
      d3.i_price =100;
      d4.i_price= 200;
      d5.i_price=20;
      d6.i_price =40;
      d7.i_price =30;

      d1.s_price= 190;
      d2.s_price= 210;
      d3.s_price =120;
      d4.s_price= 215;
      d5.s_price=30;
      d6.s_price =60;
      d7.s_price =50;



    d1.expiry= "05/01/2023";
    d2.expiry= "01/03/2020";
    d3.expiry= "03/04/2025";
    d4.expiry="05/05/2020";
    d5.expiry= "06/01/2022";
    d6.expiry= "01/06/2024";
    d7.expiry= "06/08/2025";


    
      d1.sold = 12;
      d2.sold= 8;
      d3.sold =2;
      d4.sold = 12;
      d5.sold=15;
      d6.sold =10;
      d7.sold =20;

  
      drugs.push_back(d1);
      drugs.push_back(d2);
      drugs.push_back(d3);
      drugs.push_back(d4);             // adding the variables to the vector drugs
      drugs.push_back(d5);
      drugs.push_back(d6);
      drugs.push_back(d7);
  

  }
  int size = 7; //size of drugs vector

  void sale_data() // a function to store all the sales data
  {
      sale s1,s2,s3,s4,s5,s6,s7,s8;

      s1.name = "panadol";
      s1.buyer = "addis pharmaceutical";
      s1.sold = 20;
      s1.date = "11/10/2021";


      s2.name = "metfromin";
      s2.buyer = "yene pharmaceutical";
      s2.sold = 30;
      s2.date = "10/03/2021";


         s3.name = "lipitor";
      s3.buyer = "axum pharmaceutical";
      s3.sold = 50;
      s3.date = "01/04/2021";


         s4.name = "metfromin";
      s4.buyer = "addis pharmaceutical";
      s4.sold = 40;
      s4.date = "05/06/2021";


         s5.name = "amoxacilin";
      s5.buyer = "addis pharmaceutical";
      s5.sold = 10;
      s5.date = "09/05/2021";


         s6.name = "lipitor";
      s6.buyer = "etenesh pharmaceutical";
      s6.sold = 30;
      s6.date = "06/01/2021";


         s7.name = "amlodipin";
      s7.buyer = "gerji pharmaceutical";
      s7.sold = 20;
      s7.date = "07/10/2021";


         s8.name = "panadol";
      s8.buyer = "abayneh pharmaceutical";
      s8.sold = 60;
      s8.date = "05/10/2021";

      sales.push_back(s1);
     sales.push_back(s2);
    sales.push_back(s3);                     // adding the variables to the sales vector
    sales.push_back(s4);
     sales.push_back(s5);
     sales.push_back(s6);
    sales.push_back(s7);
    sales.push_back(s8);
            

  }

  int size2 = 8; //sizeof sales vector

  void expire_data()// a function to store the expire date of all the drugs
  {
      data();
      for(int i = 0 ; i < sizeof(drugs); i++)
      {
          expire.push_back(drugs[i].expiry); // adding the expire date of each drug to "expire" vector
      }
  }

  string check_name( string name)//  a function that checks if a medicine is in the inventory
  {
      data();
    
      for(int i = 0 ; i < sizeof(drugs); i++)
      {
          if(drugs[i].name == name)
          {
              
              return "exist";  // returning the word "exist" if the name is in the inventory
              break;
              

          }
        
           
          
      }
                   
          
  }  


  string check_batch(int batch) // checks wheater the batch number of a medicine exists
  {
      data();
     
      for(int i = 0 ; i < sizeof(drugs); i++)
      {
          if(drugs[i].batch == batch)
          {
              
              return "exist";  // returing the word "exist" if the batch number of the drug is in the inventory
              break;
              

          }
          
    
  }

  }
      
 
  
  

  void display_all() // displays all the drug information
  {
       data();
       
      cout << setw(10) << "name" << setw(15) <<"quantity" << setw(15) << "batch" << setw(17) << "incoming_price";
      cout<< setw(17) << "selling_price"  << setw(18) << "expire date" << setw(17) << "quantity_sold" << endl; 
      
          for(int i = 0 ; i < size ; i++)
       {
          
          cout << setw(10) <<drugs[i].name << setw(15) << drugs[i].quantity << setw(15) << drugs[i].batch << setw(17) << drugs[i].i_price;
          cout<< setw(17) << drugs[i].s_price<< setw(18) << drugs[i].expiry<< setw(17) << drugs[i].sold << endl;


        
          
       }
            cout << setw(30) << "key" << endl;
            cout << setw(30) << "all prices are expressed in birr" << endl;
            cout << setw(30) << "qunatities are expressed in terms of crates(1 crate = 100 pieces)" << endl;



    }

     



      void insert_new() //inserts a new drug to the inventory
      {
          data();
          string check;
          
         cout << "how many drugs would you like to record" << endl;
         int n;
         n = int_input();
         drug d[n]; // declaring an array of type struct and size n
         for(int i = 0 ; i < n ; i++)
         {
             cout << "enter the name of drug " << i+1 << endl;

             cin>>d[i].name;
             for(int j = 0 ; j < size; j++)
             {
                 if(drugs[j].name == d[i].name)
                 {
                     cout << "name already exists" << endl;
                     cout << "try again you have 1 more chance" << endl;
                     cin.clear();
                     cin.ignore();
                     cin>>d[i].name;
                     if(drugs[j].name == d[i].name)
                     {
                         terminate();
                     }
                     else
                     {
                         break;
                     }
                     
                 }
             

             }
          
            cout << "enter the quantity of drug" << i+1 << endl;
             cin>>d[i].quantity;

            cout << "enter the batch number of drug" << i+1 << endl;
             cin>>d[i].batch;


                 for(int k= 0 ; k < size; k++)
             {
                 if(drugs[k].batch == d[i].batch)
                 {
                     cout << "batch number already exists" << endl;
                     cout << "try again you have 1 more chance" << endl;
                     cin.clear();
                     cin.ignore();
                     cin>>d[i].batch;
                     if(drugs[k].batch == d[i].batch)
                     {
                         terminate();
                     }
                     else
                     {
                         break;
                     }
                     
                 }
             

             }

                cout << "enter the expire_date of drug" << i+1 << endl;
             cin>>d[i].expiry;

               cout << "enter the incoming price of drug" << i+1 << endl;
             cin>>d[i].i_price;

               cout << "enter the selling price of drug" << i+1 << endl;
             cin>>d[i].s_price;

               cout << "enter the amount sold within the last month of drug" << i+1 << endl;
             cin>>d[i].sold;



    

         }


         for(int i = 0; i < n ; i++)
         {
             drugs.push_back(d[i]); // adding the variables to our vector "drugs"
         }
         size = size +n;
         cout << "the drugs have been succesfully registered" << endl;

      }

      void delete_drug() // deletes a drug from the inventory
      {
          
                data();
                 cout << "enter the name of the drug" << endl;
             
                string name;
               
                
                 
                
                cin >> name;

                    
                  
                  for(int i=0 ; i < size; i++)
                  {
                      if(drugs[i].name == name)
                      {
                          drugs.erase(drugs.begin() + (i+1));
                          size = size -1;
                         
                       
                          cout << "the record has been deleted" << endl;
                          

                          break;

                      } 
    
                      
                  } 
                
          
      }

   
  
  void low_quantity() // displays all drugs with low quantity
  {
    data();
    sale_data();
    int count = 0;
    
   
    
    
    for(int i = 0 ;i < size; i++)
    {
        if(drugs[i].quantity < 10) 
        {
            count ++;
            if(count==1)
            {
                 cout << "the following medicine are in low quantity" << endl;

            }
            
            cout << setw(15) << drugs[i].name << setw(25) << drugs[i].quantity << endl;

        }
    
        

    }


  }

  void update() //updates drug information
  {
      data();
      cout << "enter the name of the drug" << endl;
      string name;
      cin >> name;
      
      
      int choice;
      string check; // to store the value of the check_name function
       
    
       check = check_name(name);

      if(check != "exist")
      {
          for(int i = 2 ; i > 0; i-- )
          {
              cout << "the drug you entered does not exist try again" << endl;
              cout << "you have 1 more chance" << endl;
              cin.clear();
              cin.ignore();
              
               cin >> name;
              check = check_name(name);
              
              if(check == "exist")
              {
                  check = "exist";
                  
                  break;
              }
              else if(check != "exist")
              {
                  cout << "you lost your chance" << endl;
                  terminate();
              }


          }
      }
          
       
          if(check == "exist")
         {
            cout << "what would you like to update" << endl;
            cout << "1.name" << endl;
             cout << "2.quantity" << endl;
            cout << "3.batch number" << endl;
             cout << "4.incoming price" << endl;
            cout << "5.selling price" << endl;
             cout << "6.quantity sold" << endl;
             
             
                   
              choice = int_input();
             
                for(int i = 0 ; i < size ; i++)
             {
                 if(name == drugs[i].name)
                 {

                 


          
             
             switch(choice)
             {
                 case 1:
                 {
                     cout << "what would you like to change it to" << endl;
                     string c; // stores the changed value
                     cin >> c; //promt the user to enter the value
                     
                     drugs.at(i).name = c; // it will find the desired variable and change the value
                     cout << "successfully changed" << endl;
                     break;
                     
                     
                 }
                  case 2:
                 {
                     cout << "what would you like to change it to" << endl;
                     int c;// stores the changed value
                     cin >> c;//promt the user to enter the value
                     drugs.at(i).quantity = c; // it will find the desired variable and change the value
                     cout << "successfully changed" << endl;
                     break;
                 }
                  case 3:
                 {
                     cout << "what would you like to change it to" << endl;
                     int c;
                     cin >> c;
                     drugs.at(i).batch = c; 
                     cout << "successfully changed" << endl;
                     break;
                 }
                  case 4:
                 {
                     cout << "what would you like to change it to" << endl;
                     int c;
                     cin >> c;
                     drugs.at(i).i_price = c; 
                     cout << "successfully changed" << endl;
                     break;
                 }
                  case 5:
                 {
                     cout << "what would you like to change it to" << endl;
                     int c;
                     cin >> c;
                     drugs.at(i).s_price = c; 
                     cout << "successfully changed" << endl;
                     break;
                 }
                  case 6:
                 {
                     cout << "what would you like to change it to" << endl;
                     int c;
                     cin >> c;
                     drugs.at(i).sold = c; 
                     cout << "successfully changed" << endl;
                     break;
                 }
             }

          }
             }
          }
  
  }

  void search()  // searches for a specific drug
  {
      data();
      string check; // variable to check wheater the entered name exists
      string check2; //variable to check wheater the entered batch number exists
      cout << "choose 1 option below" << endl;
      cout << "1. By name" << endl;
      cout << "2. by batch number" << endl;
      int choice;
      choice = int_input();
      switch(choice)
      {
          case 1:
          {
              string name;

              
              cout << "enter the name of the drug" << endl;
              cin >> name;
               check = check_name(name); // checks if the entered name exists

      if(check != "exist")
      {
          for(int i = 2 ; i > 0; i-- )
          {
              cout << "the drug you entered does not exist try again" << endl;
              cout << "you have 1 more chance" << endl;
              cin.clear();
              cin.ignore();
              
              cin >> name;
              check = check_name(name);
              
              if(check == "exist")
              {
                  check = "exist";
                  
                  break;
              }
              else if(check != "exist")
              {
                  cout << "you lost your chance" << endl;
                  terminate();
              }


          }
      }
   
              
              for(int i = 0 ; i < size; i++)
              {
                  if(name == drugs[i].name)
                  {
                      cout << "drug found" << endl;

                       cout << setw(10) << "name" << setw(15) <<"quantity" << setw(15) << "batch" << setw(17) << "incoming_price";
                         cout<< setw(17) << "selling_price"  << setw(18) << "expire date" << setw(17) << "quantity_sold" << endl; 
                        cout << setw(10) <<drugs[i].name << setw(15) << drugs[i].quantity << setw(15) << drugs[i].batch << setw(17) << drugs[i].i_price;
                     cout<< setw(17) << drugs[i].s_price<< setw(18) << drugs[i].expiry<< setw(17) << drugs[i].sold << endl;
                      
                  }

                 
              }
               break;
                  

                  

              }
               case 2:
          {
              int batch;
             
              cout << "enter the batch number of the drug" << endl;
              batch = int_input();
              
    
       check2 = check_batch(batch); // checks wheater the entered batch number exists

      if(check2 != "exist")
      {
          for(int i = 2 ; i > 0; i-- )
          {
              cout << "the drug you entered does not exist try again" << endl;
              cout << "you have 1 more chance" << endl;
              cin.clear();
              cin.ignore();
              
              batch = int_input();
              check2 = check_batch(batch);
              
              if(check2 == "exist")
              {
                  check = "exist";
                  
                  break;
              }
              else if(check2 != "exist")
              {
                  cout << "you lost your chance" << endl;
                  terminate();
              }


          }
      }
   
              
              for(int i = 0 ; i < size; i++)
              {
                  if(batch == drugs[i].batch)
                  {
                      cout << "drug found" << endl;

                       cout << setw(10) << "name" << setw(15) <<"quantity" << setw(15) << "batch" << setw(17) << "incoming_price";
                     cout<< setw(17) << "selling_price"  << setw(18) << "expire date" << setw(17) << "quantity_sold" << endl; 

                        cout << setw(10) <<drugs[i].name << setw(15) << drugs[i].quantity << setw(15) << drugs[i].batch << setw(17) << drugs[i].i_price;
                     cout<< setw(17) << drugs[i].s_price<< setw(18) << drugs[i].expiry<< setw(17) << drugs[i].sold << endl;
                      
                  }

                  
                  

                  

              }
              break;
              
          }
      
  }
  }

  void expiry_notification() // a function that tells the time remaining for the expire date and drugs who have passed the expire date
  {
      time_t t = time(NULL);                  // help us to access the current date month and yrear
      tm *tptr = localtime(&t);

      data();
      expire_data();

      string day[sizeof(drugs)];
       string month[sizeof(drugs)];       // strings with size equal to the size of the vector drugs used to store the expire date of each drug
        string year[sizeof(drugs)];


         int day_i[sizeof(drugs)];
       int month_i[sizeof(drugs)];             // integer arrays with size equal to the size of the vector drugs used to store the expire date of each drug
        int year_i[sizeof(drugs)];

        int dr[sizeof(drugs)];
        int mr[sizeof(drugs)];             // integer arrays used to store the day , the month and the year remaining for each drug
        int yr[sizeof(drugs)];

        int c_day = (tptr ->tm_mday);  // current day
        int c_month =(tptr ->tm_mon) + 1; // current month
        int c_year = (tptr->tm_year) +1900; // current year


        cout << "today is:" << c_day  << "/"<< c_month << "/" << c_year <<endl;
        

    





        cout << setw(15) << "name" << setw(40) <<  "time remained untill it expires" << endl;

  
        
        

        
        
      for(int i = 0 ; i < sizeof(expire); i++)
      {
           stringstream expire_date(expire[i]); //creating a stream from the expire vector
        

            getline(expire_date,(*(day+i)),'/');
            getline(expire_date,(*(month+i)),'/');  // storing the expire date of each drug as string
            getline(expire_date,(*(year+i)),'/');

            *(day_i + i) = stoi(day[i]);
            *(month_i + i) = stoi(month[i]);  // converting the string into an intger value
            *(year_i + i)= stoi(year[i]);
          

           

            

      }
        for(int i = 0 ; i < size; i++)
      {
        
         *(dr+i)= *(day_i + i) - c_day; // calculating the day remaining untill  expiration
         *(mr+i) = *(month_i + i) - c_month;// calculating the month remaining untill  expiration
        *(yr+i) =  *(year_i + i) - c_year;// calculating the year remaining untill  expiration
            if( *(yr+i) <= 0)
            {
                cout << setw(15) << drugs[i].name << setw(40) <<  "less than 1 year remaining" << endl;

            }

                else if( *(yr+i) > 0)
            {
                cout << setw(15) << drugs[i].name << setw(40) <<  "more than 1 year remaining" << endl;

            }

              
              

      

         

      }


       for(int i = 0 ; i < size; i++) // to check for a drug passed its expire date
      {
   

              if(  *(yr+i) <= 0 )
              {
                  if( *(mr+i)<= 0)
                  {
                      if( *(dr+i) <= 0)
                      {
                          cout << drugs[i].name << " should be disposed" << endl;
                      }
                  }
              }

      }
   
  }

  void total_sales() //displays the total number of medicine sold
   {
      data();
      
      
      float total = 0;
      cout << setw(20) << "name" << setw(30) << "amount sold" << endl;
      for(int i  = 0 ; i < size; i++)
      {
          cout << setw(20) << drugs[i].name << setw(30) << drugs[i].sold << endl;
          total = total +drugs[i].sold;
      }

      cout << "the company has sold " << total << "drugs" << endl; 

      
   }

  void profit() //displays total profit accumlated from each medicine
  {
      data();
      
      float profit;//to store the profit of each drug
      float t_profit = 0; // total profit
      cout << setw(15) << "name" << setw(30) << "profit_accumlated" << endl;

      for(int i = 0 ; i < size; i++)
      {
          profit = (drugs[i].sold)*(drugs[i].s_price - drugs[i].i_price);
          cout <<setw(15) <<  drugs[i].name << setw(30) << profit << endl;
          t_profit = t_profit + profit;
         profit = 0;
          
        
            


      }
      cout << "the total profit is " <<t_profit << "birr" << endl;
      
  }

  void stastical_report() // produces a stastical report
  {
      data();
      float revenue;
      float profit; //to store the profit of each drug
      float t_profit = 0; // to store the total profit
      float t_revenue = 0; // to store the total revenue

      cout << setw(15) << "name" << setw(24) << "amount_sold" <<setw(25) << "revenue" << setw(25) << "profit" << endl;
      for(int i = 0 ; i < size; i++)
      {
          revenue = drugs[i].sold * drugs[i].s_price;
          profit=  drugs[i].sold * (drugs[i].s_price - drugs[i].i_price);
         cout << setw(15) <<  drugs[i].name << setw(24) <<  drugs[i].sold <<setw(25) << revenue << setw(25) << profit << endl;
        t_revenue = t_revenue + revenue;
        t_profit= t_profit + profit;
        profit = 0;
        revenue = 0;


      }
      cout << "the company has a total revenue of " << t_revenue << " birr" << endl;
        cout << "the company has a total profit of " << t_profit << " birr" << endl;

  }

  void display_sales() // displays all the sale records
  {
      sale_data();
      cout << setw(15) << "name" << setw(30) << "quantity_sold" << setw(35) << "buyer" << setw(35) << "Date" << endl;
      for(int i = 0 ; i < size2; i++)
      {
            cout << setw(15) << sales[i].name << setw(30) << sales[i].sold << setw(35) <<sales[i].buyer<< setw(35) << sales[i].date << endl;

          


      }
  }
  void add_sale() // a function that addes a sale record
  {
         data();
         sale_data();
      cout << "how many sales record do you want to record" << endl;
      int n;
      n = int_input();
      size2 = size2 + n;
      sale s[n]; // an array of type sale to store the sale records
      for(int i = 0 ; i < n ; i++)
      {
     cout << i+1 << ":enter the name of the buyer" << endl;
      cin >> s[i].buyer;

    cout << i+1<< ":enter the name of the drug" << endl;
      cin >> s[i].name;

     

      cout<< i+1 << ":enter the quantity sold" << endl;
      cin >> s[i].sold;

        cout<< i+1 << ":enter the date" << endl;
      cin >> s[i].date;

      }
        for(int i = 0 ; i < n ; i++)
      {
           sales.push_back(s[i]);
           
 

      }
      
      cout << "sale successfully added" << endl;

     
      for(int i = 0 ; i < size2; i++)
      {
          if(drugs[i].name == s[i].name)
          {
              
              drugs[i].quantity = drugs[i].quantity - s[i].sold;
              drugs[i].sold =  drugs[i].sold + s[i].sold;
          }
    

      }
      system("pause");
   
  }

  
  void change_admin() // a function to chance the admin user name and password
  {
      admin_login();
      string n_user;
      string n_password;
    string *const ptr1 = &A_username; // constant pointer to store the address of admin user name
      string * const ptr2 = &A_password;// constant pointer to store the address of admin password
      cout << "enter your new user name" << endl;
     
      cin >> n_user;
      *ptr1 = n_user; //derefrencing the pointer and storing the new value

        cout << "enter your new password" << endl;
     
      cin >> n_password;

       *ptr2 = n_password;//derefrencing the pointer and storing the new value

       cout << "credentials successfully changed" << endl;

       cout << "your new user name is:" << A_username << endl;
       cout << "your new password is:" << A_password << endl;



      
   

  }

   void change_user() // afunction to change the user's user name and password
  {
      user_login();
      string n_user;
      string n_password;
    string *const ptr3 = &U_username; // constant pointer to store the address of user's user name
      string * const ptr4 = &U_password; // constant pointer to store the address of user's password
      cout << "enter your new user name" << endl;
     
      cin >> n_user;
      *ptr3 = n_user; //derefrencing the pointer and storing the new value


        cout << "enter your new password" << endl;
     
      cin >> n_password;

       *ptr4 = n_password; //derefrencing the pointer and storing the new value

       cout << "credentials successfully changed" << endl;

       cout << "your new user name is:" << U_username << endl;
       cout << "your new password is:" << U_password << endl;



      
   

  }

  void admin_uI()  // admin's user interface
  {
      int choice;
      cout << "choose 1 task to be completed" << endl;
     

      do
      {
      cout << "1.display all medicine available in the inventory with detail information" << endl;
      cout << "2.all medicine with low quantity" << endl;
    
      cout << "3.display all sale records" << endl;
      cout << "4.add sale record" << endl;
      cout << "5. record new drug information" << endl;
      cout << "6.delete a drug information" << endl;
      cout << "7.update drug information" << endl;
      cout << "8.search drug" << endl;
      cout << "9.expire date notification" << endl;
      cout << "10.total number of sales" << endl;
      cout << "11.total profit of the company" << endl;
      cout << "12.stastical report" << endl;
      cout << "13.change admin user name and password" << endl;
      cout << "14.change user's user name and password" << endl;
      cout << "15.quit" << endl;
           choice = int_input();
          
          switch(choice)
          {
              case 1:
              {
                  display_all();
                      cout << "press any key to continue" << endl;
                  system("pause>nul");
              
               
                  

                   //system("pause");
                   system("cls");
                      break;
                  

                  
                 


                  

              }
              case 2:
              {
                  low_quantity();
                
                  system("pause");
                   system("cls");
                      break;

                  
                  
                 
              }

              case 3:
              {
                  display_sales();
                   cout << "press any key to continue" << endl;
                     
                  system("pause>nul");
                   system("cls");
                      break;

              }

              case 4:
              {
                  add_sale();
                  cout << "press any key to continue" << endl;
             
                   system("pause>nul");

                
                  
                   system("cls");
                      break;

              }
              case 5:
              {
                  insert_new();
                 
                  
                system("pause");
                system("cls");
                 break;
              }
              case 6:
              {
                  delete_drug();
                 
                    system("pause");
                   system("cls");
                    break;
              }

              case 7:
              {
                  update();
                 
                    system("pause");
                   system("cls");
                    break;
              }
              case 8:
              {
                  search();
               
                system("pause");
                   system("cls");
                      break;
              }
              case 9:
              {
                  expiry_notification();

                  system("pause");
                   system("cls");
                   break;

              }
              case 10:
              {
                  total_sales();
                  cout << "press any key to continue" << endl;
                  system("pause>nul");
                  
                  
                  //system("pause");
                   system("cls");
                   break;

              }
              case 11:
              {
                  profit();
                        cout << "press any key to continue" << endl;
                  system("pause>nul");
              
                  
                  //system("pause");

                   system("cls");
                   break;
              }

              case 12:
              {
                  stastical_report();
                    cout << "press any key to continue" << endl;
                     system("pause>nul");

                  
                 // system("pause");

                   system("cls");
                   break;

              }
              
              case 13:
              {
                  change_admin();
                  system("pause");

                   system("cls");
                  break;
              }
              case 14:
              {
                   change_user();
                    system("pause");

                   system("cls");
                  break;
                 
                 
              }

              case 15:
              {
                    exit(10);
                  break;

              }

           

           
              

          }

      }
      while(choice != 15);
      
      
      

      
      
  }

    void user_uI() //user's user interface
  {
      int choice;
      cout << "choose 1 task to be completed" << endl;
     

      do
      {
      cout << "1.display all medicine available in the inventory with detail information" << endl;
      cout << "2.all medicine with low quantity" << endl;
      cout << "3.add sale records" << endl;
      cout << "4. record new drug information" << endl;
      cout << "5.update drug information" << endl;
      cout << "6.search drug" << endl;
      cout << "7.expire date notification" << endl;
      cout << "8.quit" << endl;
           choice = int_input();
          
          switch(choice)
          {
              case 1:
              {
                  display_all();
                   //system("pause");
                      cout << "press any key to continue" << endl;
                     system("pause>nul");
                   system("cls");
                      break;
                  

                  
                 


                  

              }
              case 2:
              {
                  low_quantity();
                
                     cout << "press any key to continue" << endl;
                     system("pause>nul");
                   system("cls");
                      break;

                  
                  
                 
              }

          

              case 3:
              {
                  add_sale();
                 
                   //system("pause");
                      cout << "press any key to continue" << endl;
                     system("pause>nul");
                   system("cls");
                      break;

              }
              case 4:
              {
                  insert_new();
                 
                  
                //system("pause");
                   cout << "press any key to continue" << endl;
                     system("pause>nul");
                system("cls");
                 break;
              }
       
              case 5:
              {
                  update();
                 
                    system("pause");
                   system("cls");
                    break;
              }
              case 6:
              {
                  search();
               
                system("pause");

                   system("cls");
                      break;
              }
              case 7:
              {
                  expiry_notification();

                  system("pause");
                   system("cls");
                   break;

              }
              case 8:
              {
                  exit(5);
                  
                  
                     }

      }

      }
      while(choice != 8);

  }
      
      
      

      
      
  
  

  


    
   
int main()
{
    system("color 30");
    
    
    cout << "welcome to bahran pharmacetucal app" << endl;
    cout << "please choose your user" << endl;
    int choice;
   
    do
    {
       
     cout << "1.Admin" << endl;
    cout << "2.user" << endl;
    cout << "3.quit" << endl;
     choice = int_input();
     
    
     
    
    

          switch(choice)
    {
        case 1:
        {
            
            
            admin_login();
            admin_uI();
            
            
            break;
        }
        case 2:
        {
            user_login();
            user_uI();
            
    
            break;
        }
        case 3:
        {
            return 0;
        }
        default:
        {
        cout << "please either choose 1 or 2" << endl;
        
        break;
    }

    }
  
  

}
  while(choice != 3);

}

