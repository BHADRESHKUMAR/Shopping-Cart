#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int p_no[100];
class A1;
int sum =0;
int i=1;
int j=1;
int method;
class login
{
public:
    char name[25];
    void getl()
    {
        string line;
        ifstream myfile ("login.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
        cin>>name;
        system("cls");
        fstream file;
        file.open( "a.txt");
        file.seekp(2554);
        file <<name<<"                                       "<< endl;
        file.close();
    }
};
class product
{
public:
    string p_name;
    int pc;
    void getp(int t)
    {
        fstream file;
        file.open( "c.txt");
        if(i==1)
            file.seekp(2512);
        else
            file.seekp(5,ios::end);
        file <<i<<"]                    ";
        file <<p_name;
        file <<pc<<"                           "<<i<<"] buy"<<"\n"<< endl;
        file.close();
        p_no[i-1]=t;
        i++;
    }
    void getpb(int u)
    {
        fstream file;
        file.open( "b.txt");
        if(j==1)
            file.seekp(2501);
        else
            file.seekp(5,ios::end);
        file <<j<<"]                  ";
        file <<p_name;
        file<<u;
        file<<"                                                   ";
        file <<pc<<"\n"<< endl;
        file.close();
        sum=sum+(u*pc);
        j++;
    }
};
class A2
{
public:
    void getA2()
    {
        string line;
        ifstream myfile ("b.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
};
class A3
{
public:
    int getA3()
    {
        int b1;
        string line;
        ifstream myfile ("c.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
        cout<<"enter respective number to buy following product and enter the 0 to not buy"<<endl;
        cin>>b1;
        return b1;
    }
};
class a1
{
public:
    void geta1()
    {
       string line;
        ifstream myfile ("1.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
};
class a2
{
public:
    void geta2()
    {
       string line;
        ifstream myfile ("2.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
};
class a3
{
public:
    void geta3()
    {
       string line;
        ifstream myfile ("3.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
};
class a4
{
public:
    void geta4()
    {
       string line;
        ifstream myfile ("4.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
};
class a5
{
public:
    void geta5()
    {
       string line;
        ifstream myfile ("5.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
};
class a6
{
public:
    void geta6()
    {
       string line;
        ifstream myfile ("6.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
};
class home
{
public:
    int digit;
    void geth()
    {
        string line;
        ifstream myfile ("home.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
    void getdigit()
    {
        cout<<"enter the digit and enter 0 back to home ="<<endl;
        cin>>digit;
        system("cls");
    }
};
class A1
{
public:
    void getA1()
    {
       string line;
        ifstream myfile ("a.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    }
};
class del
{
public:
    void delete1()
    {
        string line;
        ifstream myfile ("b.txt");
        ifstream file ("b1.txt");
        remove("b.txt");
        myfile.close();
        ofstream myfile1 ("b.txt");
        if (file.is_open())
        {
            while (getline (file,line))
            {
                myfile1<<line<<endl;
            }
            file.close();
        }
        myfile.close();
    }
    void delete2()
    {
        string line;
        ifstream myfile ("c.txt");
        ifstream file ("c1.txt");
        remove("c.txt");
        myfile.close();
        ofstream myfile1 ("c.txt");
        if (file.is_open())
        {
            while (getline (file,line))
            {
                myfile1<<line<<endl;
            }
            file.close();
        }
        myfile.close();
    }
    void delete3()
    {
        string line;
        ifstream myfile ("pay.txt");
        ifstream file ("pay1.txt");
        remove("pay.txt");
        myfile.close();
        ofstream myfile1 ("pay.txt");
        if (file.is_open())
        {
            while (getline (file,line))
            {
                myfile1<<line<<endl;
            }
            file.close();
        }
        myfile.close();
    }
};
void check(home H,login L,A1 A1,a1 a1,a2 a2,a3 a3,a4 a4,a5 a5,a6 a6,A2 A2,A3 A3,product p[],del d)
{
    int b2,q1,temp;
    int x=1,q;
    int count=36;
    do
    {
    switch(H.digit)
    {
    case -1:
        system("cls");
        A1.getA1();
        H.getdigit();
        break;
    case -4:
        system("cls");
        d.delete1();
        d.delete2();
        d.delete3();
        sum=0;
        i=1;
        j=1;
        L.getl();
        H.geth();
        H.getdigit();
        break;
    case 1:
        system("cls");
        a1.geta1();
        count=0;
        H.getdigit();
        break;
    case 2:
        system("cls");
        a2.geta2();
        count=6;
        H.getdigit();
        break;
    case 3:
        system("cls");
        a3.geta3();
        count=12;
        H.getdigit();
        break;
    case 4:
        system("cls");
        a4.geta4();
        count=18;
        H.getdigit();
        break;
    case 5:
        system("cls");
        a5.geta5();
        count=24;
        H.getdigit();
        break;
    case 6:
        system("cls");
        a6.geta6();
        count=30;
        H.getdigit();
        break;
    case 0:
        system("cls");
        H.geth();
        count=36;
        H.getdigit();
        break;
    case -2:
        A2.getA2();
        do
        {
            cout<<"do you want to continue(yes = 1 and no = 0 )"<<endl;
            cin>>x;
            if(x!=1 && x!=0)
                cout<<"enter the valid number"<<endl;
        }while(x!=1 && x!=0);
        if(x==0)
        {
            system("cls");
        }
        else
        {
            H.getdigit();
            system("cls");
        }
        break;
    case -3:
        b2=A3.getA3();
        if(b2!=0)
        {
            temp=p_no[b2-1];
            cout<<"enter the quantity"<<endl;
            cin>>q1;
            p[temp].getpb(q1);
            cout<<"buy successfully"<<endl;
        }
        H.getdigit();
        system("cls");
        break;
    case 11:
    case 22:
    case 33:
    case 44:
    case 55:
    case 66:
        switch(count)
        {
        case 0:
            cout<<"add to cart successfully"<<endl;
            if(H.digit==11)
                p[0].getp(0);
            if(H.digit==22)
                p[1].getp(1);
            if(H.digit==33)
                p[2].getp(2);
            if(H.digit==44)
                p[3].getp(3);
            if(H.digit==55)
                p[4].getp(4);
            if(H.digit==66)
                p[5].getp(5);
            H.getdigit();
            system("cls");
            break;
        case 6:
            cout<<"add to cart successfully"<<endl;
            if(H.digit==11)
                p[6].getp(6);
            if(H.digit==22)
                p[7].getp(7);
            if(H.digit==33)
                p[8].getp(8);
            if(H.digit==44)
                p[9].getp(9);
            if(H.digit==55)
                p[10].getp(10);
            if(H.digit==66)
                p[11].getp(11);
            H.getdigit();
            system("cls");
            break;
        case 12:
            cout<<"add to cart successfully"<<endl;
            if(H.digit==11)
                p[12].getp(12);
            if(H.digit==22)
                p[13].getp(13);
            if(H.digit==33)
                p[14].getp(14);
            if(H.digit==44)
                p[15].getp(15);
            if(H.digit==55)
                p[16].getp(16);
            if(H.digit==66)
                p[17].getp(17);
            H.getdigit();
            system("cls");
            break;
        case 18:
            cout<<"add to cart successfully"<<endl;
            if(H.digit==11)
                p[18].getp(18);
            if(H.digit==22)
                p[19].getp(19);
            if(H.digit==33)
                p[20].getp(20);
            if(H.digit==44)
                p[21].getp(21);
            if(H.digit==55)
                p[22].getp(22);
            if(H.digit==66)
                p[23].getp(23);
            H.getdigit();
            system("cls");
            break;
        case 24:
            cout<<"add to cart successfully"<<endl;
            if(H.digit==11)
                p[24].getp(24);
            if(H.digit==22)
                p[25].getp(25);
            if(H.digit==33)
                p[26].getp(26);
            if(H.digit==44)
                p[27].getp(27);
            if(H.digit==55)
                p[28].getp(28);
            if(H.digit==66)
                p[29].getp(29);
            H.getdigit();
            system("cls");
            break;
        case 30:
            cout<<"add to cart successfully"<<endl;
            if(H.digit==11)
                p[30].getp(30);
            if(H.digit==22)
                p[31].getp(31);
            if(H.digit==33)
                p[32].getp(32);
            if(H.digit==44)
                p[33].getp(33);
            if(H.digit==55)
                p[34].getp(34);
            if(H.digit==66)
                p[35].getp(35);
            H.getdigit();
            system("cls");
            break;
        case 36:
            cout<<"add to cart successfully"<<endl;
            if(H.digit==11)
                p[36].getp(36);
            if(H.digit==22)
                p[37].getp(37);
            if(H.digit==33)
                p[38].getp(38);
            if(H.digit==44)
                p[39].getp(39);
            if(H.digit==55)
                p[40].getp(40);
            if(H.digit==66)
                p[41].getp(41);
            H.getdigit();
            system("cls");
            break;
        }
        break;
    case 111:
    case 222:
    case 333:
    case 444:
    case 555:
    case 666:
        switch(count)
        {
        case 0:
            cout<<"enter the quantity"<<endl;
            cin>>q;
            cout<<"buy successfully"<<endl;
            if(H.digit==111)
                p[0].getpb(q);
            if(H.digit==222)
                p[1].getpb(q);
            if(H.digit==333)
                p[2].getpb(q);
            if(H.digit==444)
                p[3].getpb(q);
            if(H.digit==555)
                p[4].getpb(q);
            if(H.digit==666)
                p[5].getpb(q);
            H.getdigit();
            system("cls");
            break;
        case 6:
            cout<<"enter the quantity"<<endl;
            cin>>q;
            cout<<"buy successfully"<<endl;
            if(H.digit==111)
                p[6].getpb(q);
            if(H.digit==222)
                p[7].getpb(q);
            if(H.digit==333)
                p[8].getpb(q);
            if(H.digit==444)
                p[9].getpb(q);
            if(H.digit==555)
                p[10].getpb(q);
            if(H.digit==666)
                p[11].getpb(q);
            H.getdigit();
            system("cls");
            break;
        case 12:
            cout<<"enter the quantity"<<endl;
            cin>>q;
            cout<<"buy successfully"<<endl;
            if(H.digit==111)
                p[12].getpb(q);
            if(H.digit==222)
                p[13].getpb(q);
            if(H.digit==333)
                p[14].getpb(q);
            if(H.digit==444)
                p[15].getpb(q);
            if(H.digit==555)
                p[16].getpb(q);
            if(H.digit==666)
                p[17].getpb(q);
            H.getdigit();
            system("cls");
            break;
        case 18:
            cout<<"enter the quantity"<<endl;
            cin>>q;
            cout<<"buy successfully"<<endl;
            if(H.digit==111)
                p[18].getpb(q);
            if(H.digit==222)
                p[19].getpb(q);
            if(H.digit==333)
                p[20].getpb(q);
            if(H.digit==444)
                p[21].getpb(q);
            if(H.digit==555)
                p[22].getpb(q);
            if(H.digit==666)
                p[23].getpb(q);
            H.getdigit();
            system("cls");
            break;
        case 24:
            cout<<"enter the quantity"<<endl;
            cin>>q;
            if(H.digit==111)
                p[24].getpb(q);
            if(H.digit==222)
                p[25].getpb(q);
            if(H.digit==333)
                p[26].getpb(q);
            if(H.digit==444)
                p[27].getpb(q);
            if(H.digit==555)
                p[28].getpb(q);
            if(H.digit==666)
                p[29].getpb(q);
            H.getdigit();
            system("cls");
            break;
        case 30:
            cout<<"enter the quantity"<<endl;
            cin>>q;
            cout<<"buy successfully"<<endl;
            if(H.digit==111)
                p[30].getpb(q);
            if(H.digit==222)
                p[31].getpb(q);
            if(H.digit==333)
                p[32].getpb(q);
            if(H.digit==444)
                p[33].getpb(q);
            if(H.digit==555)
                p[34].getpb(q);
            if(H.digit==666)
                p[35].getpb(q);
            H.getdigit();
            system("cls");
            break;
        case 36:
            cout<<"enter the quantity"<<endl;
            cin>>q;
            cout<<"buy successfully"<<endl;
            if(H.digit==111)
                p[36].getpb(q);
            if(H.digit==222)
                p[37].getpb(q);
            if(H.digit==333)
                p[38].getpb(q);
            if(H.digit==444)
                p[39].getpb(q);
            if(H.digit==555)
                p[40].getpb(q);
            if(H.digit==666)
                p[41].getpb(q);
            H.getdigit();
            system("cls");
            break;
        }
    }
    }while(x!=0);
}
void bill()
{
        fstream file;
        file.open( "b.txt");
        file.seekp(0,ios::end);
        file<<"\n \n \n \n \n"<<endl;
        file <<"*********************************************************************************************************************************************************************************"<<endl;
        file.seekp(154,ios::end);
        file<<"TOTAL AMOUNT = ";
        file<<sum<<endl;
        file<<"*********************************************************************************************************************************************************************************"<<endl;
        file<<"\n \n \n \n \n"<<endl;
        file.seekp(72,ios::end);
        file<<"1] pay                                                   2]cancel"<<endl;
        file.close();
        string line;
        ifstream myfile ("b.txt");
        if (myfile.is_open())
        {
            fstream file;
            file.open( "b.txt");
            file.seekp(0,ios::end);
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
}
void payment()
{
    int number;
    do
    {
        cout<<"enter the digit 1 or 2"<<endl;
        cin>>number;
        if(number!=1 || number!=2)
        {
            cout<<"enter the valid number"<<endl;
            cout<<"only enter 1 or 2"<<endl;
        }
    }while(number!=1 && number!=2);
    if(number==1)
    {
        system("cls");
        long int pin;
        cout<<"enter your pin code"<<endl;
        cin>>pin;
        fstream file;
        file.open( "pay.txt");
        file<<"*********************************************************************************************************************************************************************************"<<endl;
        file.seekp(26,ios::end);
        file<<"Price (  "<<(j-1)<<"  items  )";
        file.seekp(70,ios::end);
        file<<sum<<endl;
        file.seekp(26,ios::end);
        file<<"Delivery charges";
        file.seekp(75,ios::end);
        file<<"50"<<endl;
        file <<"*********************************************************************************************************************************************************************************"<<endl;
        file.seekp(26,ios::end);
        file<<"Amount payable  ";
        file.seekp(75,ios::end);
        file<<(sum+500)<<"\n"<<endl;
        file <<"*********************************************************************************************************************************************************************************"<<endl;
        file.seekp(30,ios::end);
        file<<" #  Safe and Secure Payments . Easy returns ."<<endl;
        file.seekp(30,ios::end);
        file<<"    100 % Authentic Products ."<<endl;
        string line;
        ifstream myfile ("pay.txt");
        if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
        X: cout<<"enter payment method number "<<endl;
        cin>>method;
        switch(method)
        {
        case 1:
            card();
        case 2:
            phonepe();
        case 3:
            net();
        case 4:
            emi();
        case 5:
            cash();
        case 6:
            gift();
        default:
            cout<<"enter the correct number"<<endl;
            Sleep(250);
            goto x;
        }
    }
}
void card()
{
    int number,MM,YYYY,CVV;
    long int card_no;
    system("cls");
    cout<<"# Enter Card Details"<<endl;
    cout<<"Card Number :- ";
    cin>>card_no;
    cout<<"\n Expiry"<<endl;
    cout<<"MM :-";
    cin>>MM;
    cout<<"\n YYYY :-";
    cin>>YYYY;
    cout<<"\n CVV :-";
    cin>>CVV;
    cout<<"                     1] pay "<<sum<<"                                                     2]cancel"<<endl;
    cout<<"   #  This card will be securely saved for a faster payment experience. CVV number will not be saved"<<endl;
    cout<<"   *  We only save your card number & expiry date. We do not save CVV number"<<endl;
    cout<<"   *  Be assured, your card details are 100% safe. We use world class encryption for storing card"<<endl;
    cout<<"      details and our systems are PCI DSS security certified."<<endl;
    cout<<"   *  In case you want to delete your saved card, you can do so in the \" wallet \" section in \" My Account \" ."<<endl;
    do
    {
        cout<<"enter the digit 1 or 2"<<endl;
        cin>>number;
        if(number!=1 || number!=2)
        {
            cout<<"enter the valid number"<<endl;
            cout<<"only enter 1 or 2"<<endl;
        }
    }while(number!=1 && number!=2);
    if(number==1)
    {
        cout<<sum<<"  pay  successful"<<endl;
        cout<<"thank you for shopping"<<endl;
        Sleep(500);
    }
}
void phonepe()
{
    int number,n;
    long int pass,mo_no;;
    string bhim_id,phone_id;
    system("cls");
    cout<<"1] PhonePe Payment"<<endl;
    cout<<"2] BHIM UPI Payment"<<endl;
    cin>>n;
    y :
        if(n!=1 || n!=2)
        {
            cout<<"enter the valid number"<<endl;
            cout<<"only enter 1 or 2"<<endl;
            goto y;
        }
    system("cls");
    if(n==1)
    {
        cout<<"   #  PhonePe Payment"<<endl;
        cout<<"Mobile Number :- ";
        cin>>mo_no;
        cout<<"\n PhonePe ID :-";
        cin>>phone_id;
        cout<<"\n password :-";
        cin>>pass;
    }
    cout<<"  #  BHIM UPI Payment"<<endl;
    cout<<"\n BHIM UPI ID:-";
    cin>>bhim_id;
    cout<<"                     1] pay "<<sum<<"                                                     2]cancel"<<endl;
    cout<<"   #  By registering , you agree to the terms of use and privacy policy"<<endl;
    do
    {
        cout<<"enter the digit 1 or 2"<<endl;
        cin>>number;
        if(number!=1 || number!=2)
        {
            cout<<"enter the valid number"<<endl;
            cout<<"only enter 1 or 2"<<endl;
        }
    }while(number!=1 && number!=2);
    if(number==1)
    {
        cout<<sum<<"  pay  successful"<<endl;
        cout<<"thank you for shopping"<<endl;
        Sleep(500);
    }
}
void net()
{
    string b_name,l_id;
    long int pass;
    system("cls");
    cout<<"  #  NET BANKING PAYMENT"<<endl;
    cout<<"Bank name:-"
    cin>>b_name;
    cout<<"\n Login ID:-";
    cin>>l_id;
    cout<<"\n Password:-";
    cin>>pass;
    cout<<"                     1] pay "<<sum<<"                                                     2]cancel"<<endl;
    cout<<"   #  By registering , you agree to the terms of use and privacy policy"<<endl;
    do
    {
        cout<<"enter the digit 1 or 2"<<endl;
        cin>>number;
        if(number!=1 || number!=2)
        {
            cout<<"enter the valid number"<<endl;
            cout<<"only enter 1 or 2"<<endl;
        }
    }while(number!=1 && number!=2);
    if(number==1)
    {
        cout<<sum<<"  pay  successful"<<endl;
        cout<<"thank you for shopping"<<endl;
        Sleep(500);
    }
}
void emi()
{
    int n,no,number;
    system("cls");
    cout<<" (i) Pay in easy monthly installment from any of the options below. T&C apply."<<endl;
    cout<<"  #     No Cost EMI on CC and DC       T&C \n"<<endl;
    cout<<"  1]    Bajaj Finserv EMI Card"<<endl;
    cout<<"  2]    Axis Bank Credit Card"<<endl;
    cout<<"  3]    Citi Bank Credit Card"<<endl;
    cout<<"  4]    HDFC Bank Credit Card"<<endl;
    cout<<"  5]    ICICI Bank Credit Card"<<endl;
    cout<<"  6]    INDUSIND Bank Credit Card"<<endl;
    cout<<"  7]    KOTAK Bank Credit Card"<<endl;
    cout<<"  8]    SBI Bank Credit Card"<<endl;
    z :
        cout<<"  enter the bank number"<<endl;
        cin>>n;
        if(n!=1||n!=2||n!=3||n!=4||n!=5||n!=6||n!=7||n!=8)
        {
            cout<<"  enter the valid number"<<endl;
            cout<<"  only enter 1 to 8"<<endl;
            goto z;
        }
    system("cls");
    switch(n)
    {
    case 1:
        cout<<"  #     Bajaj Finsery EMI Card"<<endl;
    case 2:
        cout<<"  #     Axis Bank Credit Card"<<endl;
    case 3:
        cout<<"  #     Citi Bank Credit Card"<<endl;
    case 4:
        cout<<"  #     HDFC Bank Credit Card"<<endl;
    case 5:
        cout<<"  #     ICICI Bank Credit Card"<<endl;
    case 6:
        cout<<"  #     INDUSIND Bank Credit Card"<<endl;
    case 7:
        cout<<"  #     KOTAK Bank Credit Card"<<endl;
    case 8:
        cout<<"  #     SBI Bank Credit Card"<<endl;
    }
    cout<<"  #     No Cost EMI"<<endl;
    cout<<"  1]    "<<(float(sum)/3)<<" for 3 months"<<endl;
    cout<<"  2]    "<<(float(sum)/6)<<" for 6 months"<<endl;
    cout<<"  3]    "<<(float(sum)/9)<<" for 9 months"<<endl;
    cout<<"  4]    "<<(float(sum)/12)<<" for 12 months"<<endl;
    cout<<"  #     B.P. kart does not levy any charges for availing EMI. Charges, if any, are levied by the bank."<<endl;
    cout<<"        Please check with your bank for charges related to interest, processing fees, refund or pre-closure."<<endl;
    w :
        cout<<"  enter the offer number"<<endl;
        cin>>no;
        if(no!=1||no!=2||no!=3||no!=4)
        {
            cout<<"  enter the valid number"<<endl;
            cout<<"  only enter 1 to 4"<<endl;
            goto w;
        }
    system("cls");
    switch(n)
    {
    case 1:
        cout<<"  #     Bajaj Finsery EMI Card"<<endl;
    case 2:
        cout<<"  #     Axis Bank Credit Card"<<endl;
    case 3:
        cout<<"  #     Citi Bank Credit Card"<<endl;
    case 4:
        cout<<"  #     HDFC Bank Credit Card"<<endl;
    case 5:
        cout<<"  #     ICICI Bank Credit Card"<<endl;
    case 6:
        cout<<"  #     INDUSIND Bank Credit Card"<<endl;
    case 7:
        cout<<"  #     KOTAK Bank Credit Card"<<endl;
    case 8:
        cout<<"  #     SBI Bank Credit Card"<<endl;
    }
    cout<<"  #     No Cost EMI"<<endl;
    switch(no)
    {
    case 1:
        cout<<"  #     "<<(float(sum)/3)<<" for 3 months"<<endl;
    case 2:
        cout<<"  #     "<<(float(sum)/6)<<" for 6 months"<<endl;
    case 3:
        cout<<"  #     "<<(float(sum)/9)<<" for 9 months"<<endl;
    case 4:
        cout<<"  #     "<<(float(sum)/12)<<" for 12 months"<<endl;
    }
    cout<<"                     1] pay "<<sum<<"                                                     2]cancel"<<endl;
    cout<<"  #     B.P. kart does not levy any charges for availing EMI. Charges, if any, are levied by the bank."<<endl;
    cout<<"        Please check with your bank for charges related to interest, processing fees, refund or pre-closure."<<endl;
    do
    {
        cout<<"enter the digit 1 or 2"<<endl;
        cin>>number;
        if(number!=1 || number!=2)
        {
            cout<<"enter the valid number"<<endl;
            cout<<"only enter 1 or 2"<<endl;
        }
    }while(number!=1 && number!=2);
    if(number==1)
    {
        cout<<sum<<"  pay  successful"<<endl;
        cout<<"thank you for shopping"<<endl;
        Sleep(500);
    }
}
void cash()
{
    int number;
    cout<<"                     1] continue "<<sum<<"                                                     2]cancel"<<endl;
    do
    {
        cout<<"enter the digit 1 or 2"<<endl;
        cin>>number;
        if(number!=1 || number!=2)
        {
            cout<<"enter the valid number"<<endl;
            cout<<"only enter 1 or 2"<<endl;
        }
    }while(number!=1 && number!=2);
    if(number==1)
    {
        cout<<sum<<"  order  successful"<<endl;
        cout<<"thank you for shopping"<<endl;
        Sleep(500);
    }
}
void gift()
{
    int number;
    long int v_no,v_pin;
    system("cls");
    cout<<"   -  Gift Card"<<endl;
    cout<<"      Voucher Number :-";
    cin>>v_no;
    cout<<" \n      Voucher Pin :-"
    cin>>v_pin;
    cout<<"   #  Maximum of 15 gift cards per transaction. Bank/Wallet Offers may not be applicable when using gift cards."<<endl;
    cout<<"                     1] APPLY "<<sum<<"                                                     2]cancel"<<endl;
    cout<<"  #     B.P. kart does not levy any charges for availing EMI. Charges, if any, are levied by the bank."<<endl;
    cout<<"        Please check with your bank for charges related to interest, processing fees, refund or pre-closure."<<endl;
    do
    {
        cout<<"enter the digit 1 or 2"<<endl;
        cin>>number;
        if(number!=1 || number!=2)
        {
            cout<<"enter the valid number"<<endl;
            cout<<"only enter 1 or 2"<<endl;
        }
    }while(number!=1 && number!=2);
    if(number==1)
    {
        cout<<sum<<"  APPLY  successful"<<endl;
        cout<<"thank you for shopping"<<endl;
        Sleep(500);
    }
}
void order()
{
    cout<<"     ORDER ID :- OD115106977095575000 \n"<<endl;
    string line;
    ifstream myfile ("b.txt");
    myfile.seekg(1784);
    if (myfile.is_open())
        {
            while (getline (myfile,line))
            {
                cout<<line<<endl;
            }
            myfile.close();
        }
    cout<<" \n \n     (*)   Ordered and Approved"<<endl;
    cout<<"      |    Mon, 8th Apr '19"<<endl;
    cout<<"      | \n      | "<<endl;
    cout<<"     ( )   Pack"<<endl;
    cout<<"      |    Tue, 9th Apr '19"<<endl;
    cout<<"      | \n      | "<<endl;
    cout<<"     ( )   Shipping"<<endl;
    cout<<"      |    Tue, 9th Apr '19"<<endl;
    cout<<"      | \n      | "<<endl;
    cout<<"     ( )   Delivery"<<endl;
    cout<<"           Expected by Fri, 12th Apr '19"<<endl;
    cout<<"           Shipment yet to be delivered.\n\n"<<endl;
    cout<<"      #    PRICE DETAILS"<<endl;
    cout<<"           List price                        "<<(sum+500)<<endl;
    cout<<"           Selling price                     "<<(sum+450)<<endl;
    cout<<"           Extra Discount                    -450"<<endl;
    cout<<"           Special Price                     "<<(sum-450)<<endl;
    cout<<"           Shipping fee                      50"<<endl;
    cout<<"           Total Amount                      "(sum+50)<<endl;
}
int main()
{
    int x;
    login L;
    a2 a2;
    a3 a3;
    a4 a4;
    a5 a5;
    a1 a1;
    a6 a6;
    product p[42];
    home H;
    A2 A2;
    A3 A3;
    A1 A1;
    del d;
    p[0].p_name="CORE I3 LAPTOP                                                                      ";
    p[1].p_name="INTEX IT 2616 SPEKER                                                                ";
    p[2].p_name="SMART PHONE                                                                         ";
    p[3].p_name="SMART WATCH                                                                         ";
    p[4].p_name="BLUTOOTH EARPHONES                                                                  ";
    p[5].p_name="CHARGER                                                                             ";
    p[6].p_name="MEN'SHOES                                                                           ";
    p[7].p_name="MEN'S SHIRT                                                                         ";
    p[8].p_name="BAGS                                                                                ";
    p[9].p_name="WOMEN'S SHOES                                                                        ";
    p[10].p_name="WOMEN'S DRESS                                                                       ";
    p[11].p_name="KID'S CLOTHING                                                                      ";
    p[12].p_name="CAR                                                                                 ";
    p[13].p_name="PLANE                                                                               ";
    p[14].p_name="GUN                                                                                 ";
    p[15].p_name="SPINNER                                                                             ";
    p[16].p_name="CUBE                                                                                ";
    p[17].p_name="PUZZLE                                                                              ";
    p[18].p_name="MAKEUP                                                                              ";
    p[19].p_name="MEN'S GROOMING                                                                      ";
    p[20].p_name="FRAGRENCES                                                                          ";
    p[21].p_name="SHAMPOO                                                                             ";
    p[22].p_name="CREME                                                                               ";
    p[23].p_name="OIL                                                                                 ";
    p[24].p_name="FOOTBALL                                                                            ";
    p[25].p_name="CRICKET BAT                                                                         ";
    p[26].p_name="BASKET BALL                                                                         ";
    p[27].p_name="CYCLE                                                                               ";
    p[28].p_name="BADMINTON GEAR                                                                      ";
    p[29].p_name="STUMP                                                                               ";
    p[30].p_name="ROBERT LAFORE                                                                       ";
    p[31].p_name="ANSCI C                                                                             ";
    p[32].p_name="PYTHON LEARNING                                                                     ";
    p[33].p_name="EXPERIMENTS OF TRUTH                                                                ";
    p[34].p_name="H.C.VERMA 1                                                                         ";
    p[35].p_name="H.C.VERMA 2                                                                         ";
    p[36].p_name="BLUTOOTH EARPHONES                                                                  ";
    p[37].p_name="H.C. VERMA 1                                                                        ";
    p[38].p_name="PLANE                                                                               ";
    p[39].p_name="BADMINTON GEAR                                                                      ";
    p[40].p_name="FRAGRANCES                                                                          ";
    p[41].p_name="MEN'S SHIRT                                                                         ";
    p[0].pc=25490;
    p[1].pc=5000;
    p[2].pc=10000;
    p[3].pc=2500;
    p[4].pc=3000;
    p[5].pc=500;
    p[6].pc=2000;
    p[7].pc=1000;
    p[8].pc=1200;
    p[9].pc=1200;
    p[10].pc=500;
    p[11].pc=2300;
    p[12].pc=500;
    p[13].pc=800;
    p[14].pc=200;
    p[15].pc=100;
    p[16].pc=250;
    p[17].pc=300;
    p[18].pc=500;
    p[19].pc=200;
    p[20].pc=250;
    p[21].pc=450;
    p[22].pc=150;
    p[23].pc=100;
    p[24].pc=350;
    p[25].pc=1900;
    p[26].pc=450;
    p[27].pc=9000;
    p[28].pc=1299;
    p[29].pc=800;
    p[30].pc=400;
    p[31].pc=500;
    p[32].pc=890;
    p[33].pc=500;
    p[34].pc=250;
    p[35].pc=250;
    p[36].pc=300;
    p[37].pc=250;
    p[38].pc=800;
    p[39].pc=1299;
    p[40].pc=250;
    p[41].pc=1000;
    L.getl();
    H.geth();
    H.getdigit();
    check(H,L,A1,a1,a2,a3,a4,a5,a6,A2,A3,p,d);
    bill();
    payment();
    d.delete1();
    d.delete2();
    d.delete3();
    return 0;
}
