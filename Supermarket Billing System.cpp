#include <iostream>
#include <Windows.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Shopping
{
	private:
		int product_code;
		float product_price;
		string product_name;
		float discount;
	public:
		void main_menu();
		void administrator();
		void buyer();
		void add_product();
		void modify_product();
		void remove_product();
		void list();
		void start();
		void receipt();
};
void start() {


	for (int i = 0; i < 100; i++) 
	{
		cout << "\t\t\t\t\t-----------------------------------------" << endl;
		cout << "\t\t\t\t\t|      WELCOME TO MAIN SUPER MARKET    |" << endl;
		cout << "\t\t\t\t\t-----------------------------------------" << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\tLoading... " << i << "%" << endl;
		Sleep(10);
		system("cls");
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t-----------------------------------------" << endl;
	cout << "\t\t\t\t\t|        Thanks for patience :)         |" << endl;
	cout << "\t\t\t\t\t-----------------------------------------" << endl;
	Sleep(2000);//milisecond // ( window.h )
	system("cls");
}
void Shopping::main_menu()
{
	m:
	int choice;
	string email;
	string password;
	
	cout << "\t\t\t\t____________________________________\n";
	cout << "\t\t\t\t|                                   |\n";
	cout << "\t\t\t\t|                                   |\n";
	cout << "\t\t\t\t|       Supermarket Main Menu       |\n";
	cout << "\t\t\t\t|                                   |\n";
	cout << "\t\t\t\t|                                   |\n";
	cout << "\t\t\t\t|___________________________________|\n";
	cout << "\t\t\t\t                                    \n";
	cout << "\t\t\t\t|         1) Administrator          |\n";
	cout << "\t\t\t\t                                     \n";
	cout << "\t\t\t\t|         2) Buyer                  |\n";
	cout << "\t\t\t\t                                     \n";
	cout << "\t\t\t\t|         3) Exit                   |\n";
	cout << "\t\t\t\t_____________________________________\n";
	cout << "\t\t\t\t                                     \n";
	cout << "\t\t\t\t           Please select = ";
	cin >> choice;
	cout << "\t\t\t\t                                     \n";
	cout << "\t\t\t\t_____________________________________\n";
	system("cls");
	switch(choice)
	{
		case 1:
			{
				
				cout << "\t\t\t\t\t----------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t|        Please Enter Administrator Credentials!         |" << endl;
				cout << "\t\t\t\t\t----------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t                                                          \n";
				cout << "\t\t\t\t --> Please Enter Email Address  = ";
				cin >> email;
				cout << "\t\t\t\t --> Please Enter Password = ";
				cin >> password;
				if (email == "mainmarketadmin@gmail.com" && password == "admin33446")
				{
					system("cls");
					administrator();
					system("cls");
				}
				else
				{
					cout << "\t\t\t\t >>>>>>>>>>Invalid username and password!<<<<<<<<<<< \n";
				}
				break;
			}
		case 2:
			{
				buyer();
			}
		case 3:
			{
				exit(0); // Successful Termination of Program
			}
		default:
			{
				cout << "\t\t\t\t *****************Please select from the given options*****************!\n";
			}
	}
	goto m;
}

void Shopping::administrator()
{
	m:
	int choice;
	cout << "\t\t\t\t____________________________________\n";
	cout << "\t\t\t\t                                    \n";
	cout << "\t\t\t\t          Administrator Menu        \n";
	cout << "\t\t\t\t                                    \n";
	cout << "\t\t\t\t____________________________________\n";
	cout << "\t\t\t\t                                    \n";
	cout << "\t\t\t\t|         1) Add a product          |\n";
	cout << "\t\t\t\t                                    \n";
	cout << "\t\t\t\t|         2) Modify a product       |\n";
	cout << "\t\t\t\t                                    \n";
	cout << "\t\t\t\t|         3) Remove a product       |\n";
	cout << "\t\t\t\t                                    \n";
	cout << "\t\t\t\t|         4) Back to main menu      |\n";
	cout << "\t\t\t\t____________________________________\n";
	cout << "\t\t\t\t                                     \n";
	cout << "\t\t\t\t           Please select = ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			{
				add_product();
				break;
			}
		case 2:
			{
				modify_product();
				break;
			}
		case 3:
			{
				remove_product();
				break;
			}
		case 4:
			{
				system("cls");
				main_menu();
				break;
			}
		default:
			{
				cout << "\t\t\t\t ************Please select from the given options!************";
			}
	}
	goto m;
}

void Shopping::buyer()
{
	m:
	int choice;
	cout << "\t\t\t\t\t\t_____________________________________\n";
	cout << "\t\t\t\t\t\t                                     \n";
	cout << "\t\t\t\t\t\t              Buyer Menu             \n";
	cout << "\t\t\t\t\t\t\t\t                                 \n";
	cout << "\t\t\t\t\t\t_____________________________________\n";
	cout << "\t\t\t\t\t\t                                     \n";
	cout << "\t\t\t\t\t\t|         1) Buy a product          |\n";
	cout << "\t\t\t\t\t\t                                     \n";
	cout << "\t\t\t\t\t\t|         2) Go back                |\n";
	cout << "\t\t\t\t\t\t_____________________________________\n";
	cout << "\t\t\t\t\t\t                                     \n";
	cout << "\t\t\t\t\t\t           Please select = ";
	cin >> choice;
	system("cls");
	switch(choice)
	{
		case 1:
			{
				receipt();
				break;
			}
		case 2:
			{
				main_menu();
				break;
			}
		default:
			{
				cout << "\t\t\t\t ^^^^^^^^^^Please select from the given options!^^^^^^^^^^";
			}
	}
	goto m;	
}

void Shopping::add_product()
{
	m:
	fstream data; // fstream = Class, data = Object
	int c, token = 0;
	float p, d;
	string n;
	cout << "\n\n\t\t\t Add a new product";
	cout << "\t\t\t\t\t-----------------------------------------" << endl;
	cout << "\t\t\t\t\t|           Add a new product           |" << endl;
	cout << "\t\t\t\t\t-----------------------------------------" << endl;
	cout << "\n\n\t Please enter the name of the product = ";
	cin >> product_name;
	cout << "\n\n\t Please enter the code of the product = ";
	cin >> product_code;
	cout << "\n\n\t Please enter the price of the product = ";
	cin >> product_price;
	cout << "\n\n\t Please enter the discount on the product = ";
	cin >> discount;
	// In order to store these details, we have to open a new file
	data.open("Supermarket Database.txt", ios::in); // ios::in = opens the file in reading mode
	if(!data) // If this file does not exists
	{
		data.open("Supermarket Database.txt", ios::app|ios::out); // opens the file in append, write mode
		// Now we will write inside the file
		data << " " << product_code << " " << product_name << " " << product_price << " " << discount << "\n";
		data.close();
	}
	else // If the file exists
	{
		data >> c >> n >> p >> d; // Initializing the index of the file
		while(!data.eof()) // To check/iterate every content of the file
		{
			if(c == product_code) // If there is a duplicacy
			{
				token++; // Increase the value of token variable by 1
			}
			data >> c >> n >> p >> d; // Reading from the file
		}
		data.close();
	if(token == 1) // If the product code entered, by the administrator, already exists
	{
		cout << "You have entered a duplicate code\n";
		goto m; // Then enter another product code
	}
	else // If token value is not incremented i.e if the product code entered, by the administrator, is unique
	{
		// Then we can enter the product details
		data.open("Supermarket Database.txt", ios::app|ios::out); // opens the file in append, write mode
		// Now we will write inside the file
		data << " " << product_code << " " << product_name << " " << product_price << " " << discount << "\n";
		data.close();
	}
	cout << "\n\n\t Record Inserted!\n";
	}	
}

void Shopping::modify_product()
{
	fstream data, data1;
	int pkey, c, token=0;
	float p, d;
	string n;
	cout << "\n\n\t\t\t Modify a product";
	cout << "\n\n\t Please enter the product code = ";
	cin >> pkey;
	data.open("Supermarket Database.txt", ios::in);
	if(!data)
	{
		cout << "\n\n\t File doesn't exist!";
	}
	else
	{
		data1.open("Supermarket Database1.txt", ios::app|ios::out);
		// We will save the edited data in this new file then we will rename this file to orignal filename
		data >> product_code >> product_name >> product_price >> discount;
		while(!data.eof())
		{
			if(pkey == product_code)  // If the entered code matches with the any of the code in the file
			{ // pkey == entered by administrator to edit the product
				cout << "\n\n\tPlease enter new code of the product = ";
				cin >> c;
				cout << "\n\n\tPlease enter new name of the product = ";
				cin >> n;
				cout << "\n\n\tPlease enter new price of the product = ";
				cin >> p;
				cout << "\n\n\tPlease enter new discount on the product = ";
				cin >> d;
				data1 << " " << c << " " << n << " " << p << " " << d << "\n";
				cout << "\n\n\t Record Edited!\n";
				token++;
			}
			else // If the entered code does not matches with the any of the code in the file
			{
				data1 << " " << product_code << " " << product_name << " " << product_price << " " << discount << "\n";	
			}
			data >> product_code >> product_name >> product_price >> discount;
		}
		data.close();
		data1.close();
		remove("Supermarket Database.txt");
		// To delete the orignal file
		rename("Supermarket Database1.txt", "Supermarket Database.txt");
		// To rename the new file to orignal file's name
		if(token==0)
		{
			cout << "\n\n\t Record doesn't exist!";
		}
	}
}

void Shopping::remove_product()
{
	fstream data, data1;
	int pkey;
	int token = 0;
	cout << "\n\n\t\t\t Delete a product";
	cout << "\n\n\t Please enter the product code = ";
	cin >> pkey;
	data.open("Supermarket Database.txt", ios::in);
	if(!data)
	{
		cout << "\n\n\t File doesn't exist!";
	}
	else
	{
		data1.open("Supermarket Database1.txt", ios::app|ios::out);
		data >> product_code >> product_name >> product_price >> discount;
		while(!data.eof())
		{
			if(pkey == product_code) // If the code entered by the administrator matches with any code in the file
			{
				cout << "\n\n\t Record Deleted!\n";
				token++;
			}
			else // If the code doesn't matches then all the products will be displayed except the one that we want to delete
			{
				data1 << " " << product_code << " " << product_name << " " << product_price << " " << discount << "\n";
			}
			data >> product_code >> product_name >> product_price >> discount;
		}
		data.close();
		data1.close();
		remove("Supermarket Database.txt");
		rename("Supermarket Database1.txt", "Supermarket Database.txt");
		if(token==0)
		{
			cout << "\n\n\t Record doesn't exist!";
		}
	}
}

void Shopping::list() // To show the list of products to the buyer
{
    fstream data;
    data.open("Supermarket Database.txt", ios::in);
    cout << "\n\n";
    cout << " Product No.\t\tProduct Name\t\tProduct Price";
    cout << "\n\n";
    data >> product_code >> product_name >> product_price >> discount;
    while(!data.eof())
	{
        cout << " " <<product_code << "\t\t\t" << product_name << "\t\t\t" << product_price << "\n\n";
        data >> product_code >> product_name >> product_price >> discount;
    }
    data.close();
}

void Shopping::receipt() // All the customer operations will take place in this function
{
    fstream data;
    int array_of_codes[100], array_of_quantity[100], counter = 0, donate_amount, org_choice;
    char choice, charity_choice, new_choice;
    string customer_name, residential_city;
    float amount = 0, discount = 0, total = 0;
    double customer_cell_no;

    data.open("Supermarket Database.txt", ios::in);
    if(!data)
	{
        cout << "\n\n\t Empty database!";
    }
    else
	{
        list(); // To show the products, available in the supermarket, to the customer
        data.close();
        cout << "\t\t\t\t_____________________________________\n";
        cout << "\t\t\t\t                                     \n";
        cout << "\t\t\t\t        Please place the order      \n";
        cout << "\t\t\t\t                                     \n";
        cout << "\t\t\t\t_____________________________________\n";
		/* Here we have to use do-while loop because we have to run a specific part of the code everytime
		   and run the other part of the code based on a choice*/
        do
		{
            m:
            cout << "\n\n\t Please enter the product code = ";
            cin >> array_of_codes[counter];
            cout << "\n\n";
            cout << "\n\n\t Please enter the product quantity = ";
            cin >> array_of_quantity[counter];
            cout << "\n\n";
            for (int i = 0; i < counter; i++) // Now we will check the entered product for duplicacy i.e whether the product is already
			{								  //  entered or not
                if (array_of_codes[counter] == array_of_codes[i]) {
                    cout << "\n\n\t Duplicate product code. Please try again!";
                    goto m;
                }
            }
            counter++;
            cout << "\n\n\t Do you want to buy another product?\n";
            cout << "\t If yes then press y\n";
            cout << "\t If no then press n\n\t";
            cin >> choice;
        } while (choice == 'y');
        
    	cout << "n\n\t Would you like to donate to charity?\n";
		cout << "\t If yes then press y\n";
        cout << "\t If no then press n\n\t";
		cin >> new_choice;
		
		if(new_choice == 'y')
		{
			cout << "\n\n\tPlease enter your name = ";
			cin >> customer_name;
			cout << "\n\n\tPlease enter your cell number = ";
			cin >> customer_cell_no;
			cout << "\n\n\tPlease enter your residential city = ";
			cin >> residential_city;
			cout << "\n\n\tPlease enter the amount you want to donate = ";
			cin >> donate_amount;
			n:
			cout << "\n\n\tPlease enter recepient organization\n";
			cout << "\n\n\t1 for Eidhi Foundation\n";
			cout << "\n\n\t2 for JDC Foundation\n";
			cout << "\n\n\t3 for Shaukat Khanum Cancer Hospital\n";
			cin >> org_choice;
			if(org_choice==1)
			{
				cout << "\n\n\t Thank you for donating " << donate_amount << " to Eidhi Foundation\n";
			}
			else if(org_choice==2)
			{
				cout << "\n\n\t Thank you for donating " << donate_amount << " to JDC Foundation\n";
			}
			else if(org_choice==3)
			{
				cout << "\n\n\t Thank you for donating " << donate_amount << " to Shaukat Khanum Cancer Hospital\n";
			}
			else
			{
				cout << "\n\n\t Invalid option!";
				cout << "\n\n\t Please select from the given options";
				goto n;
			}
			// Now we will create a design structure
			cout << "\n\n\t\t___________________________________Receipt___________________________________\n";
	    	cout << "\n\nProduct No.     Product Name     Product Quantity     Product Price     \tAmount     \tAmount with Discount\n\n";
	    	for (int i=0; i<counter; i++)
			{
	        	data.open("Supermarket Database.txt", ios::in);
	        	data >> product_code >> product_name >> product_price >> discount;
	        	/* Check whether the code entered by the user is available in the database or not. If available then we will add the product
			   		in the customer basket.*/
	        	while (!data.eof())
				{
	            	if (product_code == array_of_codes[i])
					{
		                amount = product_price * array_of_quantity[i];
		                discount = amount - (amount * discount / 100);
		                total += discount;
		                cout << "\n\n";
		                cout << product_code << "     \t\t" << product_name << "     \t\t" << array_of_quantity[i] << "       \t\t" << product_price << "        \t" << amount << "        \t" << discount << "\n";
		                break;
	           		}
	            	data >> product_code >> product_name >> product_price >> discount;
	        	}
	        	data.close();
	    	}
	    cout << "\n\n\t\t\t\t_____________________________________\n";
	    cout << "\n\t\t\t\t\t Total Amount = " << total;
	    cout << "\n\n\t\t\t\t_____________________________________\n";
		}		
		else
		{
			// Now we will create a design structure
			cout << "\n\n\t\t___________________________________Receipt___________________________________\n";
	    	cout << "\n\n Product No.     Product Name     Product Quantity     Product Price     \tAmount     \tAmount with Discount\n\n";
	    	for (int i=0; i<counter; i++)
			{
	        	data.open("Supermarket Database.txt", ios::in);
	        	data >> product_code >> product_name >> product_price >> discount;
	        	/* Check whether the code entered by the user is available in the database or not. If available then we will add the product
			   		in the customer basket.*/
	        	while (!data.eof())
				{
	            	if (product_code == array_of_codes[i])
					{
		                amount = product_price * array_of_quantity[i];
		                discount = amount - (amount * discount / 100);
		                total += discount;
		                cout << "\n\n";
		                cout << " " << product_code << "     \t\t" << product_name << "     \t\t" << array_of_quantity[i] << "       \t\t" << product_price << "        \t" << amount << "        \t" << discount << "\n";
		                break;
	           		}
	            	data >> product_code >> product_name >> product_price >> discount;
	        	}
	        	data.close();
	    	}
	    cout << "\n\n\t\t\t\t_____________________________________\n";
	    cout << "\n\t\t\t\t\t Total Amount = " << total;
	    cout << "\n\n\t\t\t\t_____________________________________\n";
		}
	}
}

int main()
{
	system("color 75");
	start();
	Shopping s;
	s.main_menu();
}

