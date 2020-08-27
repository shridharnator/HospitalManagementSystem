/////////////////////HospitalManagement System/////////////////////
/////////////////////////Header Files////////////////////////
#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>
//////////////////////////////Function Declaration/////////////////////////////
void menu();
void passcode();
void cpascode();

using namespace std;

////////////////////////////////////////////////Classs one/////////////////////////////////////////
class one {
public:
	virtual void get() = 0;
	virtual void show() = 0;

};
//////////////////////////////////////////////class information////////////////////////////////
class info:public one
{
public:
	char name[50],time[50];
	int num, age;
	void get() {
		system("cls");
		cin.sync();
		cout << "\n Enter patient name = ";
		cin.getline(name, 50);
		cout << "Enter appoinment time = ";
		cin.getline(time, 50);
		cout << "\n Enter Age = ";
		cin >> age;
		cout << "\n Enter Appointment No = ";
		cin >> num;



	}
	void show() {
		cout << "\n Name = " << name;
		cout << "\n Age = " << age;
		cout << "\n No = " << num;
		cout << "\n Time" << time;


	}
};
/////////////////////////////////Class Rana/////////////////////////////////
class rana :public info
{
public:
	info a1;
	void get() {
		system("cls");
		ofstream out("Rana.txt", ios::app | ios::binary);
		a1.get();
		out.write((char*)&a1, sizeof(info));
		out.close();
		cout << "\n Your entry has been saved";
		_getch();
		menu();
	}
	void show(){
		ifstream in("rnaa.txt");
		if(in){
			cout << "\n\n No data in file";
			cout << "\n\n\t\t Press any key to continue";
			_getch();
			menu();


}
		while (!in.eof()) {
			in.read((char*)&a1, sizeof(a1));
			a1.show();

		}
		in.close();
		_getch();
		menu();

}
};
////////////////////////////////class Dr Sapkota///////////////////
class waqar :public info
{
public:
	info a1;
	void get() {
		system("cls");
		ofstream out("Sapkota.txt", ios::app | ios::binary);
		a1.get();
		out.write((char*)&a1, sizeof(info));
		out.close();
		cout << "\n Your entry has been saved";
		_getch();
		menu();
	}
	void show() {
		ifstream in("rnaa.txt");
		if (in) {
			cout << "\n\n No data in file";
			cout << "\n\n\t\t Press any key to continue";
			_getch();
			menu();


		}
		while (!in.eof()) {
			in.read((char*)&a1, sizeof(a1));
			a1.show();

		}
		in.close();
		_getch();
		menu();

	}

};


///////////////////////////////////class Dr Ahmad////////////////////////////////
class Ahmad :public info {
public:
	info a1;
	void get() {
		system("cls");
		ofstream out("Ahmad.txt", ios::app | ios::binary);
		a1.get();
		out.write((char*)&a1, sizeof(info));
		out.close();
		cout << "\n Your entry has been saved";
		_getch();
		menu();
	}
	void show() {
		ifstream in("rnaa.txt");
		if (in) {
			cout << "\n\n No data in file";
			cout << "\n\n\t\t Press any key to continue";
			_getch();
			menu();


		}
		while (!in.eof()) {
			in.read((char*)&a1, sizeof(a1));
			a1.show();

		}
		in.close();
		_getch();
		menu();

	}
};
class staff :public one {
public:
	char all[999];
	char name[50], age[20], sal[30], pos[20];
	void get() {
		ofstream out("Staff.txt", ios::app); {
			system("cls");
			cin.sync();
			cout << "\n Enter NAme = ";
			cin.getline(name, 50);
			cout << "\nEnter Age = ";
			cin.getline(age, 20);
			cout << "\n Enter Salary = ";
			cin.getline(sal, 30);
			cout << "\n Enter Working Position = ";
			cin.getline(pos, 20);


		}
		cout << "\n NAme = " << name << "\nAge" << age << "\n Salary" << sal << "/nWorking Position" << pos;
		out.close();
		cout << "\n\nYour Information has been saved:\n\t\t\tPress any key to continue ";
		_getch();
		menu();
	}
	void show() {
		ifstream in("Staff.txt");
		if (!in) {
			cout << "File open error";
		}
		while (!(in.eof())) {
			in.getline(all, 999);
			cout << all << endl;

		}
		in.close();
		cout << "\n\n\t\t\t Press any key to continue :";
		_getch();
		menu();


	}





};

///////////////////////////// class information
class information {
public:
	void drinfo() {
		system("cls");
		system("color F3");
		cout << "\n=============================================================\n";
		cout << "/n/n/t/t(Three Docotr Available \n\n \t\t[Information and timing are given below]\n";
		cout << "---------------------------------------------------------------------------------\n";
		cout << "\t\tDr Availible:\n";
		cout << "\t\tDr Rana(dermatologist)\n\n";
		cout << "\t\t\t[[Timing]]:\n\n";
		cout << "\tMonday To Friday\t\t9AM to 5PM\n";
		cout << "\t Saturday            \t\t 9AM to 1PM\n";
		cout << "\tSunday                 \t\t Off\n";
		cout << "\n--------------------------------------------------------\n";
		cout << "\t\tDr Ahmad(Pediratician)";
		cout << "\t\t\t[[Timing]]:\n\n";
		cout << "\tMonday To Firday\t\t2PM to 10PM";
		cout << "\tSaturday                \t\t8AM to 1PM\n";
		cout << "\t Sunday                     \t\t12PM to 9PM\n";
		cout << "\n------------------------------------------------------------------\n";
		cout << "\nPress any key to continue:";
		_getch();
		menu();



	}

};
void call_dr() {
	system("cls");
	int choice;
	cout << "\n\n\n\n\tPress 1 for Dr Rana \n\n\t\t Press 2 for Dr Waqar \n\n\t\t Press 3 for Dr Ahmad";
	cin >> choice;
	one* ptr;
	rana s3;
	waqar s4;
	Ahmad s5;
	if (choice == 1) {
		ptr = &s3;
		ptr->get();

	}
	if (choice == 2) {
		ptr = &s4;
		ptr->get();

	}
	if (choice == 3) {
		ptr = &s5;
		ptr->get();
	}
	else {
		cout << "Sorry invalid choice : ";
	}
}
void menu() {
	system("cls");
	system("color FC");
	cout << "\n\nPress 1 for Available doctor information\n\n";
	cout << "\n\nPress 2 for Doctor Appointment\n\n";
	cout << "\n\nPress 3 for Saving Staff Information\n\n";
	cout << "\n\nPress 4 to Check Patient Appointment Menu\n\n";
	cout << "\n\nPress 5 to check staff information Menu:\n\n";
	cout << "\n\nPress 6 to Change or Create Password\n\n";
	cout << "\n\nPress 7 to Logout\n\n";
	information a1;
	one* ptr;
	staff a2;
	int a;
	cin >> a;
	if (a == 1) {
		a1.drinfo();
	}
	else if (a == 2) {
		call_dr();
	}
	else if (a == 3) {
		ptr = &a2;
		ptr->get();

	}
	else if (a == 4) {
		//pinfoshow();
	}
	else if (a == 5) {
		ptr = &a2;
		ptr->show();

	}
	else if (a == 6) {
		cpascode();

	}
	else {
		cout << "Sorry invalid choice : ";
	}
}
void cpascode() {
	char n[50];
	system("cls");
	ofstream out("password.txt");
	{
		cin.sync();
		cout << "\n\n\n\n\t\t\tEnter The New PAssword";
		cin.getline(n, 50);
		cout << n;

	}
	out.close();
	cout << "\n\nYour Password has been saved";
	_getch();
	menu();

}
int main() {
	cpascode();
	system("pause");

}






















	






