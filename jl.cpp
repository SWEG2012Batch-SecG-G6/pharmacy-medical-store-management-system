#include <iostream>
#include<cstdlib>
#include<iomanip>
#include<string>
#include<vector>
#include<cmath>
#include<ctime>
#include<sstream>

using namespace std;

struct drug
{
    string name;
    int quantity;
    int batch;
    float i_price;
    float s_price;
    string expiry;
    int sold;
};
vector<drug>drugs;
struct sale
{
    string buyer;
    int sold;
    string name;
    string date;
}; // a struct that will hold sale information
vector<sale>sales;// a vector with a type sale to hold multiple sales information
vector<string>expire;// a vector with a type string to hold the expire date of the drugs
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

  int main(){
sale_data();
expire_data();

  }
