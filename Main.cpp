#include<iostream>  
#include<string>  
#include<fstream>  
#include<vector>

using namespace std;

//Implants updated 1

class Implants {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	// Setters
	void setname() {
		cout << "Name of the Implants:";
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the Implants:";
		cin >> serialNo;
	}
	void setPrice() {
		cout << "Price of the Implants:";
		cin >> this->price;
	}
	void setFormula() {
		cout << "Formula of the Implants:";
		cin.ignore();
		cin >> Formula;
	}
	//Getter
	string getSerialNo() {
		return serialNo;
	}
	string getname() {
		return name;
	}
	string getPrice() {
		return this->price;
	}
	string getFormula() {
		return Formula;
	}
};
// Injections updated 1

class Injections {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	// Setters
	void setname() {
		cout << "Name of the Injections:";
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the Injections:";
		cin >> serialNo;
	}
	void setPrice() {
		cout << "Price of the Injections:";
		cin >> price;
	}
	void setFormula() {
		cout << "Formula of the Injections:";
		cin >> Formula;
	}
	//getters

	string getname() {
		return name;
	}
	string getSerialNo() {
		return serialNo;
	}
	string getPrice() {
		return price;
	}
	string getFormula() {
		return Formula;
	}
};
// Inhalers updated 1

class Inhalers {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	void setname() {
		cout << "Name of the Inhalers:";
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the Inhalers:";
		cin >> serialNo;
	}
	string getname() {
		return name;
	}
	string getSerialNo() {
		return serialNo;
	}
	string getPrice() {
		return price;
	}
	string getFormula() {
		return Formula;
	}
	void setPrice() {
		cout << "Price of the Inhalers:";
		cin >> price;
	}
	void setFormula() {
		cout << "Formula of the Inhalers:";
		cin >> Formula;
	}
};

// Drops updated

class Drops {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	void setname() {
		cout << "Name of the Drops:";
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the Drops:";
		cin >> serialNo;
	}
	string getname() {
		return name;
	}
	string getSerialNo() {
		return serialNo;
	}
	string getPrice() {
		return price;
	}
	string getFormula() {
		return Formula;
	}
	void setPrice() {
		cout << "Price of the Drops:";
		cin >> price;
	}
	void setFormula() {
		cout << "Formula of the Drops:";
		cin >> Formula;
	}
};

// Suppositories updated

class Suppositories {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	void setname() {
		cout << "Name of the Suppositories:";
		cin.ignore();
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the Suppositories:";
		cin >> serialNo;
	}
	string getname() {
		return name;
	}
	string getSerialNo() {
		return serialNo;
	}
	string getPrice() {
		return price;
	}
	string getFormula() {
		return Formula;
	}
	void setPrice() {
		cout << "Price of the Suppositories:";
		cin >> price;
	}
	void setFormula() {
		cout << "Formula of the Suppositories:";
		cin >> Formula;
	}
};

//TopicalMedicines updated 1
class TopicalMedicines {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	void setname() {
		cout << "Name of the TopicalMedicines:";
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the TopicalMedicines:";
		cin >> serialNo;
	}
	string getname() {
		return name;
	}
	string getSerialNo() {
		return serialNo;
	}
	string getPrice() {
		return price;
	}
	string getFormula() {
		return Formula;
	}
	void setPrice() {
		cout << "Price of the TopicalMedicines:";
		cin >> price;
	}
	void setFormula() {
		cout << "Formula of the TopicalMedicines:";
		cin >> Formula;
	}
};
// Capsules updated 1

class Capsules {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	void setname() {
		cout << "Name of the Capsules:";
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the Capsules:";
		cin >> serialNo;
	}
	string getname() {
		return name;
	}
	string getSerialNo() {
		return serialNo;
	}
	string getPrice() {
		return price;
	}
	string getFormula() {
		return Formula;
	}
	void setPrice() {
		cout << "Price of the Capsules:";
		cin >> price;
	}
	void setFormula() {
		cout << "Formula of the Capsules:";
		cin >> Formula;
	}
};

// Tablets updated 1

class Tablets {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	void setname() {
		cout << "Name of the Tablet:";
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the Tablet:";
		cin >> serialNo;
	}
	string getname() {
		return name;
	}
	string getSerialNo() {
		return serialNo;
	}
	string getPrice() {
		return price;
	}
	string getFormula() {
		return Formula;
	}
	void setPrice() {
		cout << "Price of the Implants:";
		cin >> price;
	}
	void setFormula() {
		cout << "Formula of the Implants:";
		cin >> Formula;
	}
};

// Liquids updated
class Liquids {
protected:
	string name;
	string serialNo;
	string price;
	string Formula;
public:
	void setname() {
		cout << "Name of the liquid:";
		getline(cin, name);
	}
	void setserialNo() {
		cout << "Serial Number of the liquid:";
		cin >> serialNo;
	}
	string getname() {
		return name;
	}
	string getSerialNo() {
		return serialNo;
	}
	string getPrice() {
		return price;
	}
	string getFormula() {
		return Formula;
	}
	void setPrice() {
		cout << "Price of the Tablets:";
		cin >> price;
	}
	void setFormula() {
		cout << "Formula of the Tablets:";
		cin >> Formula;
	}
};

//Main  

class Medicine {
protected:
	Implants* Implant;
	Injections* Injection;
	Inhalers* Inhaler;
	Drops* Drop;
	Suppositories* Suppositorie;
	TopicalMedicines* TopicalMedicine;
	Capsules* Capsule;
	Tablets* Tablet;
	Liquids* Liquid;
public:
	// Implants entry updated 1
	void setImplants() {
		string ImplantsAmount;
		cout << "Enter the amount of the implants you want to store in the stock?" << endl;
		cin >> ImplantsAmount;
		//writing  into the file
		int Implantamount = stoi(ImplantsAmount);// stoi() is fuction of string that converts string into int  
		Implant = new Implants[Implantamount];
		for (int i = 0; i < Implantamount; i++) {
			cout << i + 1 << " implant." << endl;
			cin.ignore();
			ofstream write("Medicine_Class.txt", ios::app);
			Implant[i].setname();//stores the name into class  
			write << "Implant Name: " << Implant[i].getname() << "||";// stores the name into text file  
			Implant[i].setserialNo();
			write << "Implant SerialNo: " << Implant[i].getSerialNo() + " " << "||";
			Implant[i].setFormula();
			write << "Implant Formula: " << Implant[i].getFormula() + " " << "||";
			Implant[i].setPrice();
			write << "Implant Price: " << Implant[i].getPrice() << endl;
			write << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
	// Injections Entry updated 1
	void setInjections() {
		string InjectionsAmount;
		cout << "Enter the amount of the Injections you want to store in the stock?" << endl;
		cin >> InjectionsAmount;
		//writing  into the file
		int Injectionsamount = stoi(InjectionsAmount);// stoi() is fuction of string that converts string into int  
		Injection = new Injections[Injectionsamount];
		for (int i = 0; i < Injectionsamount; i++) {
			cout << i + 1 << " Injections." << endl;
			cin.ignore();
			ofstream write("Medicine_Class.txt", ios::app);
			Injection[i].setname();//stores the name into class  
			write << "Injection Name: " << Injection[i].getname() << "||";// stores the name into text file  
			Injection[i].setserialNo();
			write << "Injection SerialNo: " << Injection[i].getSerialNo() + "." << "||";
			Injection[i].setFormula();
			write << "Injection Formula: " << Injection[i].getFormula() + " " << "||";
			Injection[i].setPrice();
			write << "Injection Price: " << Injection[i].getPrice() << endl;
			write << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
	//Inhalers Entry updated 1
	void setInhaler() {
		string InhalersAmount;
		cout << "Enter the amount of the Inhalers you want to store in the stock?" << endl;
		cin >> InhalersAmount;
		//writing  into the file
		int Inhalersamount = stoi(InhalersAmount);// stoi() is fuction of string that converts string into int  
		Inhaler = new Inhalers[Inhalersamount];
		for (int i = 0; i < Inhalersamount; i++) {
			cout << i + 1 << " Inhalers." << endl;
			cin.ignore();
			ofstream write("Medicine_Class.txt", ios::app);
			Inhaler[i].setname();//stores the name into class  
			write << "Inhaler  Name: " << Inhaler[i].getname() << "||";// stores the name into text file  
			Inhaler[i].setserialNo();
			write << "Inhaler SerialNo: " << Inhaler[i].getSerialNo() + "." << "||";
			Inhaler[i].setFormula();
			write << "Inhaler Formula: " << Inhaler[i].getFormula() + " " << "||";
			Inhaler[i].setPrice();
			write << "Inhaler Price: " << Inhaler[i].getPrice() << endl;
			write << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
	// Drops Entry updated 1
	void setDrop() {
		string DropsAmount;
		cout << "Enter the amount of the Drops you want to store in the stock?" << endl;
		cin >> DropsAmount;
		//writing  into the file
		int Dropsamount = stoi(DropsAmount);// stoi() is fuction of string that converts string into int  
		Drop = new Drops[Dropsamount];
		for (int i = 0; i < Dropsamount; i++) {
			cout << i + 1 << " Drops." << endl;
			cin.ignore();
			ofstream write("Medicine_Class.txt", ios::app);
			Drop[i].setname();//stores the name into class  
			write << "Drop Name: " << Drop[i].getname() << "||";// stores the name into text file  
			Drop[i].setserialNo();
			write << "Drop SerialNo: " << Drop[i].getSerialNo() + "." << "||";
			Drop[i].setFormula();
			write << "Drop Formula: " << Drop[i].getFormula() + " " << "||";
			Drop[i].setPrice();
			write << "Drop Price: " << Drop[i].getPrice() << endl;
			write << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
	// Suppositorie entry updated 1
	void setSuppositorie() {
		string SuppositorieAmount;
		cout << "Enter the amount of the Suppositorie you want to store in the stock?" << endl;
		cin >> SuppositorieAmount;
		//writing  into the file
		int Suppositorieamount = stoi(SuppositorieAmount);// stoi() is fuction of string that converts string into int  
		Suppositorie = new Suppositories[Suppositorieamount];
		for (int i = 0; i < Suppositorieamount; i++) {
			cout << i + 1 << " Suppositorie." << endl;
			ofstream write("Medicine_Class.txt", ios::app);
			Suppositorie[i].setname();//stores the name into class  
			write << " Suppositorie Name: " << Drop[i].getname() << "||";// stores the name into text file  
			Suppositorie[i].setserialNo();
			write << " Suppositorie SerialNo: " << Drop[i].getSerialNo() + "." << "||";
			Suppositorie[i].setFormula();
			write << "Suppositorie Formula: " << Suppositorie[i].getFormula() + " " << "||";
			Suppositorie[i].setPrice();
			write << "Suppositorie Price: " << Suppositorie[i].getPrice() << endl;
			write << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
	// Topical Medicine entry updated 1
	void setTopicalMedicine() {
		string TopicalMedicineAmount;
		cout << "Enter the amount of the TopicalMedicine you want to store in the stock?" << endl;
		cin >> TopicalMedicineAmount;
		//writing  into the file
		int TopicalMedicineamount = stoi(TopicalMedicineAmount);// stoi() is fuction of string that converts string into int  
		TopicalMedicine = new TopicalMedicines[TopicalMedicineamount];
		for (int i = 0; i < TopicalMedicineamount; i++) {
			cout << i + 1 << " TopicalMedicine." << endl;
			cin.ignore();
			ofstream write("Medicine_Class.txt", ios::app);
			TopicalMedicine[i].setname();//stores the name into class  
			write << " TopicalMedicine Name: " << Drop[i].getname() << "||";// stores the name into text file  
			TopicalMedicine[i].setserialNo();
			write << " TopicalMedicine SerialNo: " << Drop[i].getSerialNo() + "." << "||";
			TopicalMedicine[i].setFormula();
			write << "TopicalMedicine Formula: " << TopicalMedicine[i].getFormula() + " " << "||";
			TopicalMedicine[i].setPrice();
			write << "TopicalMedicine Price: " << TopicalMedicine[i].getPrice() << endl;
			write << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
	// Capsule entry  updated 1
	void setCapsule() {
		string CapsuleAmount;
		cout << "Enter the amount of the Capsules you want to store in the stock?" << endl;
		cin >> CapsuleAmount;
		//writing  into the file
		int Capsuleamount = stoi(CapsuleAmount);// stoi() is fuction of string that converts string into int  
		Capsule = new Capsules[Capsuleamount];
		for (int i = 0; i < Capsuleamount; i++) {
			cout << i + 1 << " Capsule." << endl;
			cin.ignore();
			ofstream write("Medicine_Class.txt", ios::app);
			Capsule[i].setname();//stores the name into class  
			write << " Capsule Name: " << Drop[i].getname() << "||";// stores the name into text file  
			Capsule[i].setserialNo();
			write << " Capsule SerialNo: " << Capsule[i].getSerialNo() + "." << "||";
			Capsule[i].setFormula();
			write << "Capsule Formula: " << Capsule[i].getFormula() + " " << "||";
			Capsule[i].setPrice();
			write << "Capsule Price: " << Capsule[i].getPrice() << endl;
			write << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
	//Tablet entry updated 1
	void setTablet() {
		string TabletAmount;
		cout << "Enter the amount of the Tablet you want to store in the stock?" << endl;
		cin >> TabletAmount;
		//writing  into the file
		int Tabletamount = stoi(TabletAmount);// stoi() is fuction of string that converts string into int  
		Tablet = new Tablets[Tabletamount];
		for (int i = 0; i < Tabletamount; i++) {
			cout << i + 1 << " Tablet." << endl;
			cin.ignore();
			ofstream write("Medicine_Class.txt", ios::app);
			Tablet[i].setname();//stores the name into class  
			write << " Tablet Name: " << Tablet[i].getname() << "||";// stores the name into text file  
			Tablet[i].setserialNo();
			write << " Tablet SerialNo: " << Tablet[i].getSerialNo() + "." << "||";
			Tablet[i].setFormula();
			write << "Tablet Formula: " << Tablet[i].getFormula() + " " << "||";
			Tablet[i].setPrice();
			write << "Tablet Price: " << Tablet[i].getPrice() << endl;
			write << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
	// Liquid entry updated 1
	void setLiquid() {
		string LiquidAmount;
		cout << "Enter the amount of the Liquid you want to store in the stock?" << endl;
		cin >> LiquidAmount;
		//writing  into the file
		int Liquidamount = stoi(LiquidAmount);// stoi() is fuction of string that converts string into int  
		Liquid = new Liquids[Liquidamount];
		for (int i = 0; i < Liquidamount; i++) {
			cout << i + 1 << " Liquid." << endl;
			cin.ignore();
			ofstream write("Medicine_Class.txt", ios::app);
			Liquid[i].setname();//stores the name into class  
			write << " Liquid Name: " << Liquid[i].getname() << "||";// stores the name into text file  
			Liquid[i].setserialNo();
			write << " Liquid SerialNo: " << Liquid[i].getSerialNo() + "." << "||";
			write << endl;
			Liquid[i].setFormula();
			write << "Liquid Formula: " << Liquid[i].getFormula() + " " << "||";
			Liquid[i].setPrice();
			write << "Liquid Price: " << Liquid[i].getPrice() << endl;
			cout << "--------------------" << endl;
			write.close();
		}
	}
};

// Store A  
static void Store() {
	Medicine A{};
	cout << "------------------------" << endl;
	cout << "Storing In the Storage" << endl;
	cout << "------------------------" << endl;
	cout << "1)Press 1 to store Implants." << endl;
	cout << "2)Press 2 to store Injections." << endl;
	cout << "3)Press 3 to store Inhalers." << endl;
	cout << "4)Press 4 to store Drops." << endl;
	cout << "5)Press 5 to store Suppositorie." << endl;
	cout << "6)Press 6 to store Topical Medicines." << endl;
	cout << "7)Press 7 to store Capsule." << endl;
	cout << "8)Press 8 to store Tablet." << endl;
	cout << "9)Press 9 to store Liquid." << endl;

	char Selection;
	cin >> Selection;
	// if because menu was repeating two times  
	// but it was an error in getline(cin, )  
	if (Selection == '1') {
		A.setImplants();
	}
	else if (Selection == '2')
	{
		A.setInjections();
	}
	else if (Selection == '3')
		A.setInhaler();
	else if (Selection == '4')
		A.setDrop();
	else if (Selection == '5')
		A.setSuppositorie();
	else if (Selection == '6')
		A.setTopicalMedicine();
	else if (Selection == '7')
		A.setCapsule();
	else if (Selection == '8')
		A.setTablet();
	else if (Selection == '9')
		A.setLiquid();
	else
	{
		cout << "Error Wrong Entry!" << endl;
	}
}

static void SearhMedicine() {
	//Searching  from the file  
	string num;
	cout << "Enter the Serial No of the Medicine you want to search?" << endl;
	cin >> num;
	string reader;// taking value from the file
	ifstream read("Medicine_Class.txt");
	if (!read) {
		cout << "File not found!" << endl;
	}
	//Displaying the Implants
	// Indivisual Line Check  
	while (getline(read, reader)) {
		if (reader.find(" " + num + " ") != string::npos) {//string::npos is the return value when the key word is not found  
			if (reader.find("||") != string::npos)
			{
				int startingPos = reader.find("||");
				string spacer = reader.substr(0, startingPos);
				cout << "-----------------------------------" << endl;
				cout << spacer << endl;
				int length = reader.length();
				string spacer1 = reader.substr(startingPos + 2, length);
				cout << spacer1 << endl;
				cout << "-----------------------------------" << endl;
			}
			else
			{
				cout << endl;
				cout << reader << endl;
			}
		}
	}
	read.close();
}//Search is the same for everything except just change what you are searching

int main() {
	char MainSelection;
	do {
		cout << "1)Press 1 to Store." << endl;
		cout << "2)Press 2 to Search for a Medicine in the Storage." << endl;
		cout << "7)Press E/e to exit the program." << endl;
		cin >> MainSelection;
		// logic to check lower case as well uppercase  
		MainSelection = tolower(MainSelection);
		if (MainSelection == '1')
			Store();
		else if (MainSelection == '2')
			SearhMedicine();
	} while (MainSelection != 'e');
}
//1) left file handling  
//2) loops to ask question again and again E or e to exit  
// Problem in 2) *In 2) the loop is breaking because of the switch's break  
// soluion of 2 is to change five fuctions to if - else but is there a short way ????  

/*
string keyword;
cout << "Name to search:";
cin.ignore();
getline(cin, keyword); // Word to search
string line;// takes the input from the file
ifstream file("testfile.txt");
if (!file) {
cerr << "File not found!" << endl;
return 1;
}
while (getline(file, line)) {
if (line.find(keyword) != string::npos) {//string::npos is the return value when the key word is not found
cout << "Found: " << line << endl;
}
else
cout << "Not found" << endl;
}
file.close();
*/






