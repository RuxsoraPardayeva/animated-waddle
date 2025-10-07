#include <iostream>
using namespace std;

void totalprice(int &total_price,int number,int price){
    total_price+=number*price;
};
int parkingfee1(int hours){
  return 0;

};
int parkingfee2(int hours){
    return (hours-2)*2;

  };
int parkingfee3(int hours){
    return (3*2+(hours-5)*5);

  };
void totalbill(int &totalbill,int number,int price){
    totalbill+=number*price;
};
int main() {
    //problem 5
    // int ibalance=500;
    // while (true){
    //     int choice;
    //     cout<<"1. Chech balance"<<endl;
    //     cout<<"2. withdraw"<<endl;
    //     cout<<"3. Deposit"<<endl;
    //     cout<<"4. exit"<<endl;
    //     cout<<"Your choice: ";
    //     cin>>choice;
    //     switch(choice) {
    //         case 1:
    //             cout<<"Your balance is "<<ibalance<<endl;
    //             break;
    //         case 2:
    //             int withdraw;
    //             cout<<"Your withdraw is ";
    //             cin>>withdraw;
    //             if (withdraw>ibalance) {
    //                 cout<<"Insufficient Funds"<<endl;
    //                 cout<<"You onle have "<<ibalance<<endl;
    //             }
    //             else {
    //                 ibalance-=withdraw;
    //                 cout<<"now your balance is "<<ibalance<<endl;
    //             }
    //
    //             break;
    //         case 3:
    //             int deposit;
    //             cout<<"Your deposit is ";
    //             cin>>deposit;
    //             ibalance+=deposit;
    //             cout<<"now your balance is "<<ibalance<<endl;
    //             break;
    //         case 4:
    //             exit(0);
    //
    //     }
    // }



    //problem 6
    // cout << "Welcome to Movie Ticket Booking System" << endl;
    // int total_price=0;
    // while (true) {
    //     cout<<"available movies"<<endl;
    //     cout<<"1. Interstellar - $10"<<endl;
    //     cout<<"2. Titanic - $20"<<endl;
    //     cout<<"3. Inception - $12"<<endl;
    //     cout<<"4. Exit: i am done booking , i need to know total cost"<<endl;
    //     cout<<"your choice: "<<endl;
    //     int choice;
    //     cin>>choice;
    //     int number;
    //     if (choice != 4) {
    //
    //         cout<<"how many do you want to buy : "<<endl;
    //         cin>>number;
    //     }
    //
    //     int price1=10,price2=20,price3=12;
    //     switch(choice) {
    //         case 1:
    //
    //             totalprice(total_price,number,price1);
    //             cout<<"total cost for this movie is "<<number*price1<<endl;
    //             break;
    //         case 2:
    //
    //             totalprice(total_price,number,price2);
    //             cout<<"total cost for this movie is "<<number*price2<<endl;
    //             break;
    //         case 3:
    //
    //             totalprice(total_price,number,price3);
    //             cout<<"total cost for this movie is "<<number*price3<<endl;
    //             break;
    //         case 4:
    //             cout<<"total cost is "<<total_price<<endl;
    //                exit(0);
    //     }
    //
    //
    // }


    //problem 7

    // while(1) {
    //     cout<<"welcome to Car Parking Fee Calculator"<<endl;
    //     cout<<"1. continue    2.exit  "<<endl;
    //     int choice;
    //     cin>>choice;
    //     if (choice == 2) {
    //         exit(0);
    //
    //     }
    //
    //     int hours;
    //     cout<<"enter the hours"<<endl;
    //     cin>>hours;
    //     int price2=5,price1=2;
    //     if (hours<=2) {
    //         cout<<"Fee: $0"<<parkingfee1(hours)<<endl;
    //     }
    //     else if (hours<=5){
    //         cout<<"Fee: $"<<parkingfee2(hours)<<endl;
    //     }
    //     else {
    //         cout<<"Fee: $"<<parkingfee3(hours)<<endl;
    //     }
    // }

   //prob;lem 4
    cout << "Welcome to Restaurant Ordering System" << endl;
    int totalbill=0;
    while (true) {
        cout<<"available movies"<<endl;
        cout<<"1. Pizza - $10"<<endl;
        cout<<"2. Burger - $8"<<endl;
        cout<<"3. Salad - $5"<<endl;
        cout<<"4. Exit: i am done booking , i need to know total cost"<<endl;
        cout<<"your choice: "<<endl;
        int choice;
        cin>>choice;
        int number;
        if (choice != 4) {

            cout<<"how many do you want to buy : "<<endl;
            cin>>number;
        }

        int price1=10,price2=8,price3=5;
        switch(choice) {
            case 1:

                totalprice(totalbill,number,price1);
                cout<<"total cost for this meal is  "<<number*price1<<endl;
                break;
            case 2:

                totalprice(totalbill,number,price2);
                cout<<"total cost for this meal "<<number*price2<<endl;
                break;
            case 3:

                totalprice(totalbill,number,price3);
                cout<<"total cost for this meal "<<number*price3<<endl;
                break;
            case 4:
                cout<<"total cost is "<<totalbill<<endl;
                   exit(0);
        }


    }



    return 0;
}