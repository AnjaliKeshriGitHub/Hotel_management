#include<iostream>
using namespace std;
int main()
{
    int quant;    //quantity
    int choice;   //choice of customer
    //quantity of items we have in hotel
    int Qroom=0, Qpasta=0, Qburger=0, Qnoodles=0, Qroll=0, Qjuice=0, Qchicken=0;
    //quantity of items sold
    int Sroom=0, Spasta=0, Sburger=0, Snoodles=0, Sroll=0, Sjuice=0, Schicken=0;
    //Total price of items
    int Total_room=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_roll=0, Total_juice=0, Total_chicken=0;
    

    cout<<"|_______________________________________________________________|"<<endl;
    cout<<"|___________________WELCOME TO OUR HOTEL________________________|"<<endl;
    cout<<"|_______________________________________________________________|"<<endl;

    

    //Quantity of item availabe in the hotel entered by hotel staff
    cout<<"\t\t Quantity of items we have"<<endl;
    cout<<"Room available = ";
    cin>>Qroom;
    cout<<"Quantity of Pasta we have = ";
    cin>>Qpasta;
    cout<<"Quantity of Burger we have = ";
    cin>>Qburger;
    cout<<"Quantity of Noodles we have = ";
    cin>>Qnoodles;
    cout<<"Quantity of Roll we have = ";
    cin>>Qroll;
    cout<<"Quantity of Juice we have = ";
    cin>>Qjuice;
    cout<<"Quantity of Chicken we have = ";
    cin>>Qchicken;
    
    m:
    //Menu for the Customer
    cout<<"\n\n\n|_______________________________________________________________|"<<endl;
    cout<<"|_____________________________MENU______________________________|"<<endl;
    cout<<"|_______________________________________________________________|"<<endl;

    cout<<"\t\t Please select from the menu Option: "<<endl;
    cout<<"1.)Room"<<endl;
    cout<<"2.)Pasta"<<endl;
    cout<<"3.)Burger"<<endl;
    cout<<"4.)Noodles"<<endl;
    cout<<"5.)Roll"<<endl;
    cout<<"6.)Juice"<<endl;
    cout<<"7.)Chicken"<<endl;
    cout<<"8.)Information regarding sales and collection"<<endl;
    cout<<"9.)Exit"<<endl;
    //Costomer choose a number from the menu
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Enter the number of room you want:"<<endl;
            cin>>quant;
            if(Qroom-Sroom >= quant)
            {
                Sroom+=quant;
                Total_room+=quant*1200;
                cout<<quant<<" room/rooms have alloted to you!"<<endl;
                cout<<"_________________________________________________________________________";
            }
            else
            {
                cout<<"Only "<<Qroom-Sroom<<" rooms are remaining in hotel"<<endl;
                cout<<"_________________________________________________________________________";
            }
            break;
        case 2:
            cout<<"Enter the number of pasta you want:"<<endl;
            cin>>quant;
            if(Qpasta-Spasta >= quant)
            {
                Spasta+=quant;
                Total_pasta+=quant*1200;
                cout<<quant<<" pasta/pastas have alloted to you!"<<endl;
                cout<<"_________________________________________________________________________";
            }
            else
            {
                cout<<"Only "<<Qpasta-Spasta<<" pastas are remaining in hotel"<<endl;
                cout<<"_________________________________________________________________________";
            }
            break;
        case 3:
            cout<<"Enter the number of burger you want:"<<endl;
            cin>>quant;
            if(Qburger-Sburger >= quant)
            {
                Sburger+=quant;
                Total_burger+=quant*1200;
                cout<<quant<<" burger/burgers have alloted to you!"<<endl;
                cout<<"_________________________________________________________________________";
            }
            else
            {
                cout<<"Only "<<Qburger-Sburger<<" burgers are remaining in hotel"<<endl;
                cout<<"_________________________________________________________________________";
            }
            break;
        case 4:
            cout<<"Enter the number of noodles you want:"<<endl;
            cin>>quant;
            if(Qnoodles-Snoodles >= quant)
            {
                Snoodles+=quant;
                Total_noodles+=quant*1200;
                cout<<quant<<" noodles/noodless have alloted to you!"<<endl;
                cout<<"_________________________________________________________________________";
            }
            else
            {
                cout<<"Only "<<Qnoodles-Snoodles<<" noodles are remaining in hotel"<<endl;
                cout<<"_________________________________________________________________________";
            }
            break;
        case 5:
            cout<<"Enter the number of roll you want:"<<endl;
            cin>>quant;
            if(Qroll-Sroll >= quant)
            {
                Sroll+=quant;
                Total_roll+=quant*1200;
                cout<<quant<<" roll/rolls have alloted to you!"<<endl;
                cout<<"_________________________________________________________________________";
            }
            else
            {
                cout<<"Only "<<Qjuice-Sroll<<" rolls are remaining in hotel"<<endl;
                cout<<"_________________________________________________________________________";
            }
            break;
        case 6:
            cout<<"Enter the number of juice you want:"<<endl;
            cin>>quant;
            if(Qjuice-Sjuice >= quant)
            {
                Sjuice+=quant;
                Total_juice+=quant*1200;
                cout<<quant<<" juice/juices have alloted to you!"<<endl;
                cout<<"_________________________________________________________________________";
            }
            else
            {
                cout<<"Only "<<Qjuice-Sjuice<<" juices are remaining in hotel"<<endl;
                cout<<"_________________________________________________________________________";
            }
            break;
        case 7:
            cout<<"Enter the number of chicken you want:"<<endl;
            cin>>quant;
            if(Qchicken-Schicken >= quant)
            {
                Schicken+=quant;
                Total_chicken+=quant*1200;
                cout<<quant<<" chicken/chickens have alloted to you!"<<endl;
                cout<<"_________________________________________________________________________";
            }
            else
            {
                cout<<"Only "<<Qchicken-Schicken<<" chickens are remaining in hotel"<<endl;
            }
            break;
        case 8:
            //Details of Sales and Collection in the Hotel
            cout<<"|_______________________________________________________________|"<<endl;
            cout<<"|______________________________DETAILS__________________________|"<<endl;
            cout<<"|_______________________________________________________________|"<<endl;

            cout<<"Details of Sales and Collections"<<endl;
            cout<<"Number of rooms we had: "<<Qroom<<endl;
            cout<<"number of rooms we gave for rent: "<<Sroom<<endl;
            cout<<"Remaining rooms: "<<Qroom-Sroom<<endl;
            cout<<"Total room collectin for the day: "<<Total_room<<endl;
            cout<<"-  -  -  -  -  -  -  -  -  -  -  -  -  -  -"<<endl;
            
            cout<<"Number of pastas we had: "<<Qpasta<<endl;
            cout<<"number of pastas we gave for rent: "<<Spasta<<endl;
            cout<<"Remaining pastas: "<<Qpasta-Spasta<<endl;
            cout<<"Total pasta collectin for the day: "<<Total_pasta<<endl;
            cout<<"-  -  -  -  -  -  -  -  -  -  -  -  -  -  -"<<endl;
        
            cout<<"Number of burgers we had: "<<Qburger<<endl;
            cout<<"number of burgers we gave for rent: "<<Sburger<<endl;
            cout<<"Remaining burgers: "<<Qburger-Sburger<<endl;
            cout<<"Total burger collectin for the day: "<<Total_burger<<endl;
            cout<<"-  -  -  -  -  -  -  -  -  -  -  -  -  -  -"<<endl;
            
            cout<<"Number of noodles we had: "<<Qnoodles<<endl;
            cout<<"number of noodles we gave for rent: "<<Snoodles<<endl;
            cout<<"Remaining noodles: "<<Qnoodles-Snoodles<<endl;
            cout<<"Total noodles collectin for the day: "<<Total_noodles<<endl;
            cout<<"-  -  -  -  -  -  -  -  -  -  -  -  -  -  -"<<endl;
            
            cout<<"Number of rolls we had: "<<Qroll<<endl;
            cout<<"number of rolls we gave for rent: "<<Sroll<<endl;
            cout<<"Remaining rolls: "<<Qroll-Sroll<<endl;
            cout<<"Total roll collectin for the day: "<<Total_roll<<endl;
            cout<<"-  -  -  -  -  -  -  -  -  -  -  -  -  -  -"<<endl;
            
            cout<<"Number of juices we had: "<<Qjuice<<endl;
            cout<<"number of juices we gave for rent: "<<Sjuice<<endl;
            cout<<"Remaining juices: "<<Qjuice-Sjuice<<endl;
            cout<<"Total juice collectin for the day: "<<Total_juice<<endl;
            cout<<"-  -  -  -  -  -  -  -  -  -  -  -  -  -  -"<<endl;
            
            cout<<"Number of chickens we had: "<<Qchicken<<endl;
            cout<<"number of chickens we gave for rent: "<<Schicken<<endl;
            cout<<"Remaining chickens: "<<Qchicken-Schicken<<endl;
            cout<<"Total chicken collectin for the day: "<<Total_chicken<<endl;
            cout<<"-  -  -  -  -  -  -  -  -  -  -  -  -  -  -"<<endl;
            break;
        case 9:
            exit(0);
        default:
            cout<<"Please Enter the number From the above Menu..."<<endl;
            cout<<"-  -  -  -  -  -  -  -  -  -  -  -  -  -  -";
    }
    goto m;


    return 0;
}