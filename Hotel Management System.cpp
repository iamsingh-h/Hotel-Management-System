#include<iostream>
using namespace std;

int main(){
    int quantity;
    int choice;


    //Quantity
    int rooms_quantity=0, burger_quantity=0, sandwich_quantity=0, pasta_quantity=0, shakes_quantity=0;
   
    //food items sold
    int rooms_sold=0, burger_sold=0, sandwich_sold=0, pasta_sold=0, shakes_sold=0;
    
    //total price of items
    int rooms_total=0, burger_total=0, sandwich_total=0, pasta_total=0, shakes_total=0;


    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>rooms_quantity;
    cout<<"\n Quantity of  Burger:";
    cin>>burger_quantity;
    cout<<"\n Quantity of Sandwich:";
    cin>>sandwich_quantity;
    cout<<"\n Quantity of Pasta:";
    cin>>pasta_quantity;
    cout<<"\n Quantity of Shakes:";
    cin>>shakes_quantity;

    m:
    cout<<"\n\t\t\t Please select from menu options";
    cout<<"1 Rooms"<<endl;
    cout<<"2 Burger";
    cout<<"3 Sandwich";
    cout<<"4 Pasta";
    cout<<"5 Shakes";
    cout<<"6 Total Sales and Collection";
    cout<<"7 EXIT";


    cout<<"Please enter your choice";
    cin>>choice;


    switch(choice){
        case 1:
            cout<<"Enter number of rooms you want:";
            cin>>quantity;
            if(rooms_quantity - rooms_sold >= quantity){
                rooms_sold = rooms_sold + quantity;
                rooms_total = rooms_total + quantity*1500;
                cout<<"\n\n\t\t"<<quantity<<"Rooms alloted to you";
            }
            else{
                cout<<"\n\t Only"<<rooms_quantity-rooms_sold<<"Rooms remaining in Hotel";
                break;
            }


        case 2:
            cout<<"Enter number of burger you want:";
            cin>>quantity;
            if(burger_quantity - burger_sold >= quantity){
                burger_sold = burger_sold + quantity;
                burger_total = burger_total + quantity*50;
                cout<<"\n\n\t\t"<<quantity<<"Burger is order";
            }
            else{
                cout<<"\n\t Only"<<burger_quantity-burger_sold<<"Burgers remaining in Hotel";
                break;
            }    

        case 3:
            cout<<"Enter number of sandwich you want:";
            cin>>quantity;
            if(sandwich_quantity - sandwich_sold >= quantity){
                sandwich_sold = sandwich_sold + quantity;
                sandwich_total = sandwich_total + quantity*100;
                cout<<"\n\n\t\t"<<quantity<<"Sandwich is order";
            }
            else{
                cout<<"\n\t Only"<<sandwich_quantity-sandwich_sold<<"Sandwich remaining in Hotel";
                break;
            }    

        case 4:
            cout<<"Enter number of pasta you want:";
            cin>>quantity;
            if(pasta_quantity - pasta_sold >= quantity){
                pasta_sold = pasta_sold + quantity;
                pasta_total = pasta_total + quantity*120;
                cout<<"\n\n\t\t"<<quantity<<"Pasta is order";
            }
            else{
                cout<<"\n\t Only"<<pasta_quantity-pasta_sold<<"Pasta remaining in Hotel";
                break;
            }    

        case 5:
            cout<<"Enter number of shakes you want:";
            cin>>quantity;
            if(shakes_quantity - shakes_sold >= quantity){
                shakes_sold = shakes_sold + quantity;
                shakes_total = shakes_total + quantity*50;
                cout<<"\n\n\t\t"<<quantity<<"Shakes is order";
            }
            else{
                cout<<"\n\t Only"<<shakes_quantity-shakes_sold<<"Shakes remaining in Hotel";
                break;
            }    

        case 6:
            cout<<"\n\t\tDetails of sales and collection";

            cout<<"\n\n Number of rooms we had:"<<rooms_quantity;
            cout<<"\n\n Number of rooms gave for rent:"<<rooms_sold;
            cout<<"\n\n Remaining rooms:"<<rooms_quantity - rooms_sold;
            cout<<"\n\n Total Rooms collection for the day:"<<rooms_total;

            cout<<"\n\n Number of Burgers we had:"<<burger_quantity;
            cout<<"\n\n Number of Burgers sold:"<<burger_sold;
            cout<<"\n\n Remaining Burgers:"<<burger_quantity - burger_sold;
            cout<<"\n\n Total Burgers collection for the day:"<<burger_total;

            cout<<"\n\n Number of Sandwich we had:"<<sandwich_quantity;
            cout<<"\n\n Number of Sandwich sold:"<<sandwich_sold;
            cout<<"\n\n Remaining Sandwich:"<<sandwich_quantity - sandwich_sold;
            cout<<"\n\n Total Sandwich collection for the day:"<<sandwich_total;

            cout<<"\n\n Number of Pastas we had:"<<pasta_quantity;
            cout<<"\n\n Number of Pastas sold:"<<pasta_sold;
            cout<<"\n\n Remaining pastas:"<<pasta_quantity - pasta_sold;
            cout<<"\n\n Total pasta collection for the day:"<<pasta_total;

            cout<<"\n\n Number of Shakes we had:"<<shakes_quantity;
            cout<<"\n\n Number of Shakes sold:"<<shakes_sold;
            cout<<"\n\n Remaining shakes:"<<shakes_quantity - shakes_sold;
            cout<<"\n\n Total shakes collection for the day:"<<shakes_total;

            cout<<"Total Collection of the day:"<<rooms_total + burger_total + sandwich_total + pasta_total +shakes_total;

        case 7:
            exit(0);

            default:
                cout<<"\n Please select from the numbers mentioned above";   

            
   }
   goto m;




}