#include <iostream>
#include<vector>
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


void data()
  {
       drug d1,d2,d3,d4,d5,d6,d7;
      
      d1.name = "lisinopril";
      d2.name= "azithromycin";
      d3.name ="metfromin";
      d4.name = "lipitor";
      d5.name="amlodipin";
      d6.name ="amoxacilin";
      d7.name ="panadol";

      d1.quantity = 70;
      d2.quantity= 90;
      d3.quantity =120;
      d4.quantity = 120;
      d5.quantity=120;
      d6.quantity =400;
      d7.quantity =300;

      d1.batch= 70;
      d2.batch= 90;
      d3.batch =120;
      d4.batch= 120;
      d5.batch=120;
      d6.batch =400;
      d7.batch =300;

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
      d6.s_price =40;
      d7.s_price =50;



    d1.expiry= "11/10/2023";
    d2.expiry= "9/11/2024";
    d3.expiry= "11/08/2025";
    d4.expiry="05/05/2024";
    d5.expiry= "06/01/2022";
    d6.expiry= "01/07/2024";
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
      drugs.push_back(d4);
      drugs.push_back(d5);
      drugs.push_back(d6);
      drugs.push_back(d7);
  

  }
  int main()
  {
  	data();
  }