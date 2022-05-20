//IT21182082
//Wijesiriwardena A
//MLB_08.02_04
//Unregistered_cuatomer.cpp
#include<iostream>
#include<cstring>
#include "Unregistered_Customer.h"
using namespace std;

//default constructor
Unregistered_Customer::Unregistered_Customer()
{
  custID = 0;
  strcpy (cust_Name , "");
  strcpy (cust_Address , "");
  strcpy(cust_Email, "");
  cust_ContactNo = 0;
}

//constructor with parameteres
Unregistered_Customer::Unregistered_Customer(int CustID, char custName[], char custAddress[], char custEmail[], int custConNo)
{
  custID = CustID;
  strcpy (cust_Name , custName);
  strcpy (cust_Address , custAddress);
  strcpy(cust_Email, custEmail);
  cust_ContactNo = custConNo;
}
void Unregistered_Customer::register_Customer()
{

}
void Unregistered_Customer::search_Offers()
{
  
}
void Unregistered_Customer::display_details()
{
  cout<< "Customer ID :" << custID <<endl;
  cout<< "Customer name :" << cust_Name <<endl;
  cout<< "Customer address :" << cust_Address <<endl;
  cout<< "Customer email :" << cust_Email << endl;
  cout<< "Customer contact number :" << cust_ContactNo << endl;
}

//IT21182082
//Wijesiriwardena A
//MLB_08.02_04
//registered_customer.cpp
#include<iostream>
#include<cstring>
#include "Registered_Customer.h"
//default constructor
Registered_Customer::Registered_Customer()
{
  strcpy(cust_Username,"");
  strcpy(cust_Password,"");
}
//constructor with parameteres
Registered_Customer::Registered_Customer(char custUsername[], char custPassword[],int CustID, char custName[], char custAddress[], char custEmail[], int custConNo)
{
  strcpy(cust_Username, custUsername);
  strcpy(cust_Password,custPassword);
}
void Registered_Customer::login()
{
  
}
void Registered_Customer::received_discount()
{

}
void Registered_Customer::check_LoginDetails()
{
  
}
void Registered_Customer::display_details()
{
  
}
//IT21182082
//Wijesiriwardena A
//MLB_08.02_04
#include<iostream>
#include<cstring>
#include "Delivery_manager.h"
#include "Item.h"
#include "Registered_Customer.h"

using namespace std;
//default constructor
Delivery_manager::Delivery_manager()
{
  delivery_ID = 0;
  strcpy(delivery_address,"");
  delivery_customerID = 0;
  strcpy(delivery_type,"");
}
//constructor with parameteres
Delivery_manager::Delivery_manager(int deliID, char deliAddress[], int deliCustID, char deliType[])
{
  delivery_ID = deliID;
  strcpy(delivery_address, deliAddress);
  delivery_customerID = deliCustID;
  strcpy(delivery_type, deliType);
}
void Delivery_manager::add_delivery()
{
  cout<< "Delivery ID :" <<delivery_ID<<endl;
  cout<< "Delivery Address :" <<delivery_address<<endl;
  cout<< "Delivery Customer ID :" <<delivery_customerID<<endl;
  cout<< "Delivery type :" << delivery_type<<endl;
}
void Delivery_manager::delete_delivery()
{

}
void Delivery_manager::search_delivery()
{
  
}
//IT21181306
//Pathirana A P S 
//MLB_08.02_04
//system.cpp
#include "System.h"
#define SIZE1
#define SIZE2
#define SIZE3
#define SIZE4

System::System()
{
 admin_ID=0; 
 strcpy(admin_name,"");
 strcpy(admin_email,""); 
 strcpy(security_question,""); 
 strcpy(security_answer,""); 
			
}

System::System(int customer_11, int customer_12, int customer_21, int customer_22, int items1, int items2, int orders1, int orders2 )
{
	customer_1[0] = new Registered_customer(customer_11);
	customer_1[1] = new Registered_customer(customer_12);
	
	customer_2[0] = new Unregistered_customer(customer_21);
	customer_2[1] = new Unregistered_customer(customer_22);
	
	items[0] = new Item(items1);
	items[1] = new Item(items2);
	
	orders[0] = new Order(orders1);
	orders[1] = new Order(orders2);
}

void System::login(int adminID, string admin_username, string admin_password)
{
	
}

void System::listOfOrders()
{
	
}

void System::listOfItems()
{
	
}
void System::edit_system()
{
	
}

void System::customerDetails();
{
	
}

void System::delete_customerAccount()
{
	
}

void System::update_system()
{
	
}

void System::logout()
{
	
}

Syestem::~System()
{
	  //Destructor 
	for (int i = 0; i < SIZE1; i++)
	{
	 delete customer_1[i];
	}
	
	for (int i = 0; i < SIZE2; i++)
	{
	 delete items[i];
	}
	
	for (int i = 0; i < SIZE3; i++)
	{
	 delete orders[i];
	}
	
	for (int i = 0; i < SIZE4; i++)
	{
	 delete customer_2[i];
	}
}
//IT21181306
//Pathirana A P S 
//MLB_08.02_04
#include"Payment.h"
#include<cstring>

Payment::Payment()
{
	payment_ID=0;
	strcpy(payment_type,"");
	strcpy(payment_status,"");
	strcpy(payment_details,"");
	
}

Payment::Paymentint ppayment_ID, const char ppayment_type[], const char ppayment_status[], const char ppayment_details[])
{
 payment_ID = ppayment_ID;
 strcpy(payment_type,ppayment_type );
 strcpy(payment_status, ppayment_status);
 strcpy(payment_details, ppayment_details);
			
}
void Payment::addRegistered_customer(Registered_customer* customer_11,Registered_customer* customer_12)
{
 customer_1[0] = customer_11;	
 customer_1[1] = customer_12;	
}
void Payment::display_paymentDetails()
{
 for (int i=0; i<SIZE; i++)	
  emp[i]->displayRegistered_customer();
}
void Payment::display_details()
{
 cout<< Payment_id <<endl;
 cout<< Payment_type <<endl;
 cout<< Payment_status <<endl;
 cout<< Payment_details <<endl;
 cout<<endl;	
}
void Payment::add_details()
{
	
}
void Payment::get_updateDetails()
{
	
}
void Payment::remove_details()
{
	
}
void Payment::validate_payment()
{
	
}
Payment::~Payment();
{ 
 //Destructor
	for (int i = 0; i < SIZE; i++)
	{
    	delete orders[i];
	}
}	

//IT21183904 
//H.M.I.M. Kumara
//MLB_08.02_04
//Item.cpp
#include "Item.h"
#include<cstring>
#define SIZE1
#define SIZE2

Item::Item()
{
	item_code =0;
	strcpy(item_name,"");
	strcpy(item_details,"");
	
}
 	
Item::Item(int eao_11, int eao_12, int pcart_1, int pcart_2)
{
 eao_1[0] =	new EventandOffer(eao_11);
 eao_1[1] =	new EventandOffer(eao_12);
 
 pcart_[0] = new Cart(pcart_1);
 pcart_[1] = new Cart(pcart_2);
}
Item::void addevent_and_offer()
{
}
Item::void display_itemInformation()
{
	 cout<< Item_code <<endl;
	 cout<< Item_type<<endl;
	 cout<< Item_price <<endl;
}
Item::void add_item()
{
}
Item::void remove_item()
{
}
Item::void update_item()
{
}
Item::~Item()
{
   //Destructor 
	for (int i = 0; i < SIZE1; i++)
	{
	 delete customer_1[i];
	}
	
	for (int i = 0; i < SIZE2; i++)
	{
	 delete items[i];
	}	
}
//IT21183904 
//H.M.I.M. Kumara
//MLB_08.02_04
#include "Cart.h"
#include<cstring>

Cart::Cart(){
	cart_ID = 0;
	strcpy(cart_name,scart_name);
}
Cart::Cart(nt scart_ID, const char scart_name[]){
	cart_ID = scart_ID;
	strcpy(cart_name, scart_name)
}
void Cart::add_shoppingitem{
	
}
void Cart::search_cart{
}
Cart::~Cart()
{
	//destructor
	for (int i=0; i<SIZE; i++){
	     delete sitem[i];
	}
}

//IT21166792 
//E.A.L.S. Siriwardhana
//MLB_08.02_04
#include<iostream>
#include<cstring>
using namespace std;
//default constructor
category::category()
{
category_ID = 1;
strcpy(category_name, "");
strcpy(category_description, "");
}
category::category(int categ_ID, char categ_name[], char
categ_description[])
{
category_ID = categ_ID;
strcpy(category_name, categ_name);
strcpy(category_description, categ_description);
}
void category::display_category()
{
}
void category::check_availability()
{
}
void category::update_category()
{
}
void category::remove_category()
{ }

//IT21166792 
//E.A.L.S. Siriwardhana
//MLB_08.02_04
#include<iostream>
#include<cstring>
using namespace std;

void Order::add_order(int addOrderID, char addOrder_date[], char
addOrderDetails[]) {
        order_ID = addOrderID;
        strcpy(order_date, addOrder_date);
        strcpy(orderDetails, addOrderDetails);
}
void Order::display_orderDetails() {
        cout << "order ID = " << order_ID << endl;
        cout << "Order Date is = " << order_date << endl;
        cout << "Other Details = " << orderDetails << endl;
}



//IT21185052
//S.Y.T.D. Bandara 
//MLB_08.02_04
#include "Feedback.h"
#include<iostream>

using namespace std;

void Feedback::setCustomerID(int pCustomerID)
{
	CustomerID = pCustomerID;
}
int Feedback::getCustomerID()
{
	return CustomerID;
}
void Feedback::setFeedbackNumber(int pFeedbackNo)
{
	FeedbackNo = pFeedbackNo;
}
int getFeedbackNumber()
{
	return FeedbackNo;
}
void Feedback::setFeedbackDes(string pFeedbackDes)
{
	FeedbackDes = pFeedbackDes;
}
string Feedback::getFeedbackDes()
{
	return FeedbackDes;
}
void Feedback::Display_FeedbackDetails()
{
	cout << "Customer ID: " << CustomerID << endl;
	cout << "Feedback No: " << FeedbackNo << endl;
	cout << "Feedback Description: " << FeedbackDes << endl<<endl;
}
//IT21185052
//S.Y.T.D. Bandara 
//MLB_08.02_04
#include "EventandOffer.h"
#include "Item.h"
#include<iostream>

using namespace std;


EventandOffer::EventandOffer() {}
EventandOffer::EventandOffer(int pEventandOfferID, int pEventandOfferCode, int pPromocode, float pDiscount) {
	EventandOfferID = pEventandOfferID;
	EventandOfferCode = pEventandOfferCode;
	Promocode = pPromocode;
	Discount = pDiscount;
}
void EventandOffer::EventandOfferDetails() {}
void EventandOffer::addItem(Item* itm1, Item* itm2)
{
	itm[0] = itm1;
	itm[1] = itm2;
}
void EventandOffer::displayEventandOfferDetails()
{
	cout << "EventandOffer ID : " << EventandOfferID << endl;
	cout << "EventandOffer Code : " << EventandOfferCode << endl;
	cout << "Promocode : " << Promocode << endl << endl;
	cout << "Discount : " << Discount << endl << endl;
}
void EventandOffer::addEventandOffer() {}
void EventandOffer::updateDiscount() {}

//header files

//IT21182082
//Wijesiriwardena A
//MLB_08.02_04
//unregistered customer class 
class Unregistered_Customer
{
private:
  int custID;
  char cust_Name[30];
  char cust_Address[50];
  char cust_Email[20];
  int cust_ContactNo;

public:
  Unregistered_Customer();
  Unregistered_Customer(int CustID, char custName[], char custAddress[], char custEmail[], int custConNo);
  void register_Customer(); 
  void search_Offers();
  void display_details();


};

//IT21182082
//Wijesiriwardena A
//MLB_08.02_04
//Registered customer class
class Registered_Customer
{
private:
  char cust_Username[20];
  char cust_Password[10];
public:
  Registered_Customer();
  Registered_Customer(char custUsername[], char custPassword[],int CustID, char custName[], char custAddress[], char custEmail[], int custConNo );
  void login();
  void check_LoginDetails();
  void display_details();
  void received_discount();
};

//IT21182082
//Wijesiriwardena A
//MLB_08.02_04
//delivery manager class
class Delivery_manager
{
private:
  int delivery_ID;
  char delivery_address[30];
  int delivery_customerID;
  char delivery_type[10];

public:
  Delivery_manager();
  Delivery_manager(int deliID, char deliAddress[], int deliCustID, char deliType[]);
  void add_delivery();
  void delete_delivery();
  void search_delivery();
}

//IT21181306
//Pathirana A P S 
//MLB_08.02_04
#include "Delivery_manager.h"
#include "Unregistered_Customer.h"
#include "Order.h"
#include "EventandOffer.h"
#include "category.h"
#include "Item.h"
#include "Registered_customer.h"

#define SIZE1a
#define SIZE2
#define SIZE3
#define SIZE4

class System{
	private:
		int admin_ID; 
		char admin_name[15];
		char admin_email; 
		char security_question[30]; 
		char security_answer[25]; 
		
		Registered_Customer* customer_1[SIZE1];
		Item* items[SIZE2];
		Order* orders[SIZE3];
		Unregistered_Customer* customer_2[SIZE4];
	public:
		System();
		System( int customer_11, int customer_12, int customer_21, int customer_22, int items1, int items2, int orders1, int orders2)
		void login(int adminID, string admin_username, string admin_password);
		void listOfItems();
		void listOfOrders();
		void edit_system();
		void customerDetails();
		void delete_customerAccount();
		void update_system();
		void logout();
		~System();
};

//IT21181306
//Pathirana A P S 
//MLB_08.02_04
#include"Order.h"
#define SIZE 5
Class Payment
{
	private:
		
		int payment_ID 
		char payment_type[10];
		char payment_status[15];
		char payment_details[20];
		
		Order* Orders[SIZE];
		Registered_customer* customer_1[SIZE];
	public:
	    
	    payment();
	    payment(int ppayment_ID, const char ppayment_type[], const char ppayment_status[], const char ppayment_details[]);
	    void addRegistered_customer(Registered_customer* customer_11,Registered_customer* customer_12)
		void display_paymentDetails()
		void add_details()
		void get_updateDetails()
		void remove-details()
		void validate_payment()
		~Payment();	
};

//IT21183904 
//H.M.I.M. Kumara
//MLB_08.02_04
#include "System.h"
#include "Cart.h"
#include "Category.h"
#include "EventandOffer.h"
#include "Order.h"
#include "System.h"

#define SIZE1
#define SIZE2

class Item{
	private:
		int item_code;
		char item_name[20];
		char item_details[30];
		
		Event_and_offer *eao[SIZE1];
		Cart *cart[SIZE2];
		
	public:
		Item();
		Item(int eao_10, int eao_11, int pcart_1, int pcart_2);
		void addevent_and_offer();
		void display_itemInformation();
		void add_item();
		void remove_item();
		void update_item();
		~Item();
		
};
//IT21183904 
//H.M.I.M. Kumara
//MLB_08.02_04
#include"Item.h"
#define SIZE 5
class Cart{
	private:
		int cart_ID;
		char cart_name[20];
		
		Item* sitem[SIZE]
		
	public:
	    Cart();
		Cart(int scart_ID, const char scart_name[]);
		void display_cart(int scart_ID, const char scart_name[]);
		void add_shoppingitem();
		void search_cart();
		~Cart();	
};

//IT21185052
//S.Y.T.D. Bandara 
//MLB_08.02_04
//EventandOffer Class
class EventandOffer
{
	class EventandOffer {
	private:
		Item* itm[SIZE];
		int EventandOfferID;
		int EventandOfferCode;
		int Promocode;
		float Discount;

	public:
		EventandOffer();
		EventandOffer(int pEventandOfferID, int pEventandOfferCode, int pPromocode, float pDiscount);
		void addItem(Item* itm, Item* itm);
		void EventandOfferDetails();
		void displayEventandOfferDetails();
		void addEventandOffer();
		void updateDiscount();
	};

};

//IT21185052
//S.Y.T.D. Bandara 
//MLB_08.02_04
//Feddback class
class Feedback
{
public:
	void setCustomerID(int pCustomerID);
	int getCustomerID();
	void setFeedbackNumber(int pFeedbackNo);
	int getFeedbackNumber();
	void setFeedbackDes(string pFeedbackDes);
	string getFeedbackDes();
	void Display_FeedbackDetails();

private:
	int CustomerID;
	int FeedbackNo;
	string FeedbackDes;
};
//IT21166792 
//E.A.L.S. Siriwardhana
//MLB_08.02_04
class category
{
        private:
                int category_ID;
                char category_name[20];
                char category_description[50];
        public:
                category();
                category(int categ_ID, char categ_name[], char
                categ_description[]);
                void display_category();
                void check_availability();
                void update_category();
                void remove_category();
};
//IT21166792 
//E.A.L.S. Siriwardhana
//MLB_08.02_04
//Order.h
class Order {
        protected:
                int order_ID;
                char order_date[50];
                char orderDetails[50];
        public:
                void add_order(int addOrderID, char addOrder_date[], char addOrderDetails[]);
                void cancel_order();
                void display_orderDetails();
};



//main program
#include<iostream>
#include<cstring>
using namespace std;

//IT21182082
//Wijesiriwardena A
//MLB_08.02_04
#include "Unregistered_Customer.h"
#include "Registered_Customer.h"
#include "Delivery_manager.h"

//IT21181306
//Pathirana A P S 
//MLB_08.02_04
#include "System.h"
#include "payment.h"

//IT21183904 
//H.M.I.M. Kumara
//MLB_08.02_04
#include "Item.h"
#include "Cart.h"

//IT21185052
//S.Y.T.D. Bandara 
//MLB_08.02_04
#include "feedback.h"
#include "EventandOffer.h"

//IT21166792 
//E.A.L.S. Siriwardhana
//MLB_08.02_04
#include "Order.h"
#include "category.h"

//main function begins
int main()
{
  Unregistered_Customer uc;
	Unregistered_Customer uc1(1, "Ahinsa", "202/4,Araliya MW,Matara.", "ahinsa@gmail.com", 071);
  Unregistered_Customer uc2(2, "Shehan", "10/2, Sudarshana MW, Galle ", "shehan@gmail.com", 071);
  Unregistered_Customer uc3(3, "Nipuni", "134, Kumarathunga MW,Kegalle", "nipuni@gmail.com", 071);

	uc1.display_details();
  uc2.display_details();
  uc3.display_details();
  
  
  //---- Object creation ------
	Registered_customer* registered_customer = new 
  Registered_Customer(); // Object -
	Registered_Customer class
		Item* item = new Item(); // Object - Item
	class
		Order* Order = new Order(); // Object - Order class

	   //method calling
	Registered_Customer->customerDetails();
	item->listOfOrders();
	order->listOfItems();
	Order o1, o2, o3;

	o1.add_order(27895, "2021/5/5", "This item must be delivered to the address provided within this month");
	o2.add_order(25895, "2021.5.3", "This item must be delivered to the address provided within this wheek");

	o3.add_order(27495, "2021/5/2", "This item must be delivered to the address provided within two months");

	o1.display_orderDetails();
	cout << endl;
	o2.display_orderDetails();
	cout << endl;
	o3.display_orderDetails();


	
	Payment payment1;
	cout << "Payment " << endl << endl;
	Payment p1("QW001", "Digital wallets", "Success", "Money transfer");
	p1.display_details();
	Payment p2("QW002", "Credit cards", "Success", "Money transfer");
	p2.display_details();
	Payment p3("QW003", "bank transfer", "Success", "Money transfer");
	p3.display_details();
	Payment p4("QW004", "Debit cards", "Unsuccess", "Money transfer");
	p4.display_details();

  
	Item item1;
	cout << "Item " << endl << endl;
	Item i1("IX001", "Shoes", 4500.00);
	i1.display_itemInformation();
	Item i2("IX002", "Slipper", 3700.00);
	i2.display_itemInformation();
	Item i3("IX003", "Table", 47000.00);
	i3.display_itemInformation();
	Item i4("IX004", "Mouse", 1000.00);
	i4.display_itemInformation();

  
	cart c;
	c1.display_details();

  Feedback f1, f2, f3, f4, f5;

  f1.setCustomerID(01);
  f1.setFeedbackNumber(02);
  f1.setFeedbackDes("Excellent");

  f2.setCustomerID(02);
  f2.setFeedbackNumber(45);
  f2.setFeedbackDes("Good service");   

  f3.setCustomerID(03);
  f3.setFeedbackNumber(16);
  f3.setFeedbackDes("Great communication & service");

  f4.setCustomerID(04);
  f4.setFeedbackNumber(78);
  f4.setFeedbackDes("As described item");

  f5.setCustomerID(05);
  f5.setFeedbackNumber(46);
  f5.setFeedbackDes("Fast delivery");

  f1.Display_FeedbackDetails();
  f2.Display_FeedbackDetails();
  f3.Display_FeedbackDetails();
  f4.Display_FeedbackDetails();
  f5.Display_FeedbackDetails();

  EventandOffer EO1;
  EventandOffer EO1(23, 55, 01, 4.99);

Delivery_manager dm;
  Delivery_manager dm1(01,"202/4,Araliya MW,Matara", 001 , "");

  dm1.add_delivery();
	//----Delete Dynamic objects------
	delete Registered_customer;
	delete Item* items;
	delete Order* orders;
	delete Unregistered_customer;
	delete payment;
	delete item;
	return 0;

}
