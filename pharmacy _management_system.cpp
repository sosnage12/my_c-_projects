#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // for tolower()
#include <algorithm>
using namespace std;  
int passwordof_staff=232425;
string expireddate_checking(){
    
};
int customer_service(){
    cout<<"Thank you for choosing Aurora virtual pharmacy .our customer choose what kind of service you need?";
    cout<<"  0-";
    ifstream file("pharmacy.txt");  // Try to open the file
    string line,medicine;

    // Debug: Check if file was found
    if (!file) {
        cout << "❌ File not found! Make sure Amoxicillin.txt is in the correct folder." << endl;
        return 1;
    }

    cout << "✅ File opened successfully.\n\n";
   cout<<"enter the medicie you want \n";
   getline(cin,medicine);
    // Read and print lines
    cout<<"Medicine name      "<<"              Pricr$    "<<" Quantity    "<<"Expiry Date  "<<"Country of Origin    "<<"Generic Name   \n";
    while (getline(file, line)) {  
      if (line.find(medicine) != std::string::npos) {  
          std::cout << line << std::endl;  
      }  
  }  

    file.close();  // Close the file
    void upload_prescription();
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
