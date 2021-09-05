 #include<iostream>
 #include<string>
 #include<cstdlib>
 #include<iomanip>

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
 void display_all()
  {
      cout << setw(10) << "name" << setw(15) <<"quantity" << setw(15) << "batch" << setw(17) << "incoming_price";
      cout<< setw(17) << "selling_price"  << setw(18) << "expire date" << setw(17) << "quantity_sold" << endl;

     data();

          for(int i = 0 ; i < 8 ; i++)
      {

          cout << setw(10) <<drugs[i].name << setw(15) << drugs[i].quantity << setw(15) << drugs[i].batch << setw(17) << drugs[i].i_price;
          cout<< setw(17) << drugs[i].s_price<< setw(18) << drugs[i].expiry<< setw(17) << drugs[i].sold << endl;
           }


      }


      void insert_new()
      {
          data();

         cout << "how many drugs would you like to record" << endl;
         int n;
         cin >> n;
         drug d[n];
         for(int i = 0 ; i < n ; i++)
         {
             cout << "enter the name of drug" << i+1 << endl;
             cin>>d[i].name;

            cout << "enter the quantity of drug" << i+1 << endl;
             cin>>d[i].quantity;

            cout << "enter the batch number of drug" << i+1 << endl;
             cin>>d[i].batch;

               cout << "enter the incoming price of drug" << i+1 << endl;
             cin>>d[i].i_price;

               cout << "enter the selling price of drug" << i+1 << endl;
             cin>>d[i].s_price;

               cout << "enter the amount sold within the last month of drug" << i+1 << endl;
             cin>>d[i].sold;

         }

         for(int i = 0; i < n ; i++)
         {
             drugs.push_back(d[i]);
         }
         cout << "the drugs have been succesfully registered" << endl;

      }

      int main()
      {
           void display_all();
            void insert_new();
             data()
      }
