#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // for tolower()
#include <algorithm>
#include <iterator>
#include <set>
#include <sstream>
using namespace std;  
void upload_prescription();
int passwordof_staff=232425;
string expireddate_checking(){
    
};
int customer_service() {
    cout << "Thank you for choosing Aurora Virtual Pharmacy. Our customer, please select the generic name you want: \n";

    string prescription;
    ofstream prescriptionn;  // Output file where the prescription text is saved
    ifstream file("pharmacy.txt");  // Pharmacy data file
    string line, genericName;

    // Check if pharmacy.txt exists
    if (!file) {
        cout << "❌ File not found! Make sure pharmacy.txt is in the correct folder." << endl;
        return 1;
    }

    // Ask the customer to enter the prescription and output it to the file
    cout << "Dear customer, enter your prescription using the following link, extract the text, and copy-paste it here:\n";
    cout << "This link --> https://chatgpt.com/\n";
    cout << "Enter your prescription text: ";
    getline(cin, prescription);

    // Save the prescription to the file
    prescriptionn.open("prescription.txt");
    prescriptionn << prescription;
    prescriptionn.close();

    // Extract the generic name from the prescription
    // For simplicity, assume the first word in the prescription is the generic name
    stringstream ss(prescription);
    ss >> genericName;

    cout << "Searching for medicines with generic name: " << genericName << endl;

    // Print header for medicine details
    cout << "Medicine Name      | Price ($) | Quantity | Expiry Date | Country of Origin | Generic Name\n";
    cout << "----------------------------------------------------------------------------------------------\n";

    // Read pharmacy.txt and search for the generic name
    file.close();
    int finish;
do {
    cout << "Please enter 1 to finish\n";
    cin >> finish;
} while (finish != 1);
    return 0;
}

string new_medicine(){

   string whole_seller;
};
void generate_bill(){
    int tin_no;//TIN (Taxpayer Identification Number):
    //It’s a unique number assigned to a business or seller for tax purposes.
};
void update_stock(){

};
void search_medicine(){
string generic ;
string brand ;
 
};
void purchase_history(string customer_id){

};
void upload_prescription(){


};
string login(string role) {  
     
    int password;  

    cout << "Enter your password: ";  
    cin >> password;  
    if (role == "staff") {  
        if (password == passwordof_staff) {  
            return "";
        } else {  
            return "Invalid password";  
        }  
    }

    return "Invalid role";  
}  

void daily_sales_report(){
    ofstream daily_report;

};
int main(){
cout<<"     AURORA VERTUAL PHARMACY  \n";
cout<<"             WELCOME   \n";
string role;  
    cout << "Enter your role (staff/customer): ";  
    getline(cin, role);  

    if (role == "staff") {  
          
        string result = login(role);  
        if (result.empty()) {  
            cout << "Login successful!\n";  
        } else {  
            cout << result << endl; 
        }  
    } else if (role == "customer") {  
        cout << customer_service();  
        generate_bill(); 
    } else {  
        cout << "Invalid input\n";    
    }  



    return 0;
}
