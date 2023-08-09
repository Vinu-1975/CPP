#include <bits/stdc++.h>
using namespace std;

class Patient
{
    string p_name;
    int p_age;
    string p_sex;
    string p_address;

public:
    void get_PersonalInfo()
    {
        cout << "Enter name:";
        cin >> p_name;
        cout << "Age:";
        cin >> p_age;
        cout << "Sex:";
        cin >> p_sex;
        cout << "Address:";
        cin >> p_address;
    }
    void print_PersonalInfo()
    {
        cout << "Name:" << p_name << endl;
        cout << "Age:" << p_age << endl;
        cout << "Sex:" << p_sex << endl;
        cout << "Address:" << p_address << endl;
    }
};

class Treatment : public Patient
{
    string nature_of_illness;
    string doc_name;
    int med_fees;

public:
    Treatment()
    {
        med_fees = 0;
    }
    void get_TreatmentInfo()
    {
        cout << "Enter nature of illness:(Severe|Normal)";
        getline(cin, nature_of_illness);
        cout << "doctor name:";
        cin >> doc_name;
        cout << "Fees?";
        cin >> med_fees;
        if (nature_of_illness == "Severe")
        {
            med_fees += 850;
        }
        else if (nature_of_illness == "Normal")
        {
            med_fees += 400;
        }
    }
    void print_TreatmentInfo()
    {
        cout << "Treatment Information:" << endl;
        cout << "DoctorName:" << doc_name << endl;
        cout << "Nature of Illness:" << nature_of_illness << endl;
        cout << "Amount:" << med_fees << endl;
    }
    int get_medFee()
    {
        return med_fees;
    }
    void getPatientDetails()
    {
        Patient::get_PersonalInfo;
        Patient::print_PersonalInfo;
    }
};

class Room : public Patient
{
    int room_no;
    string room_type;
    string date_of_adm;
    string date_of_dis;
    int room_fee;
    static int cnt1;

public:
    Room()
    {
        cnt1++;
        room_no = cnt1;
        room_fee = 0;
    }
    void get_RoomInfo()
    {
        cout << "enter room type(General,Separate,FirstClass)";
        cin >> room_type;
        cout << "enter date of addmission";
        cin >> date_of_adm;
        cout << "enter date of discharge";
        cin >> date_of_dis;
        if (room_type == "General")
        {
            room_fee += 500;
        }
        else if (room_type == "Separate")
        {
            room_fee += 700;
        }
        else if (room_type == "FirstClass")
        {
            room_fee += 900;
        }
    }
    void print_RoomInfo()
    {
        cout << "Room Information" << endl;
        cout << "Room no.:" << room_no << "Room type:" << room_type << endl;
        cout << "Date of addmission: " << date_of_adm << " ";
        cout << "Date of discharge: " << date_of_dis << endl;
    }
    int get_roomFee()
    {
        return room_fee;
    }
};

int Room::cnt1 = 0;

class Bill : public Treatment, public Room
{
    static int bill_no;
    int total_amount;

public:
    Bill()
    {
        bill_no++;
    }
    void calc_amt()
    {
        total_amount = Room::get_roomFee() + Treatment::get_medFee();
    }
    void display_bill()
    {
        Treatment::getPatientDetails();
        Treatment::get_TreatmentInfo();
        Treatment::print_TreatmentInfo();
        Room::get_RoomInfo();
        Room::print_RoomInfo();
        cout << "Total amount: " << total_amount << endl;
    }
};

int Bill ::bill_no;

int main()
{
    Patient p1;
    p1.get_PersonalInfo();
    Bill b1;
    b1.display_bill();
}