#include<iostream>
#include<fstream>
using namespace std;

class patient
{
    string name;
    string age;
    string phone;
    string address;
    string blood_group;
    string disease;
    string condition;
    int total_fees;
    string room;

    string blood_pressure;
    string glucose;
    string wbc;
    string immune_system;
    int day_to_recover;
public:
    void set_name(string s)
    {
        name=s;
    }
    void set_age(string s)
    {
        age=s;
    }
    void set_phone(string s)
    {
        phone=s;
    }
    void set_address(string s)
    {
        address=s;
    }
    void set_blood_group(string s)
    {
        blood_group=s;
    }
    void set_disease(string s)
    {
        disease=s;
    }
    void set_condition(string s)
    {
        condition=s;
    }
    void set_total_fees(int s=0)
    {
        total_fees=s;
    }
    void set_room(string s)
    {
        room=s;
    }

    void set_blood_pressure(string s="Not Assigned !!")
    {
        blood_pressure=s;
    }
    void set_glucose(string s="Not Assigned !!")
    {
        glucose=s;
    }
    void set_wbc(string s="Not Assigned !!")
    {
        wbc=s;
    }
    void set_immune_system(string s="Not Assigned !!")
    {
        immune_system=s;
    }
    void set_day_to_recover(int s=0)
    {
        day_to_recover=s;
    }

    string get_name()
    {
        return name;
    }
    string get_age()
    {
        return age;
    }
    string get_phone()
    {
        return phone;
    }
    string get_address()
    {
        return address;
    }
    string get_blood_group()
    {
        return blood_group;
    }
    string get_disease()
    {
        return disease;
    }
    string get_condition()
    {
        return condition;
    }
    int get_total_fees()
    {
        return total_fees;
    }
    string get_room()
    {
        return room;
    }

    string get_blood_pressure()
    {
        return blood_pressure;
    }
    string get_glucose()
    {
        return glucose;
    }
    string get_wbc()
    {
        return wbc;
    }
    string get_immune_system()
    {
        return immune_system;
    }
    int get_day_to_recover()
    {
        return day_to_recover;
    }
};
void show_menu()
{
    cout<<endl<<"                   Welcome To Hospital Management System"<<endl;
    cout<<endl<<"1.Patient's Database"<<endl;
    cout<<"2.Make Patient's Bill"<<endl;
    cout<<"3.Generate Report"<<endl;
    cout<<"4.View Report"<<endl;
    cout<<"5.Exit"<<endl;
}
int choice()
{
    cout<<endl<<"Enter Your Choice: ";
    int a;
    cin>>a;
    cout<<endl;
    return a;
}
void patient_database_print()
{
    cout<<"1.Admit a New Patient"<<endl;
    cout<<"2.Edit a Patient's Information"<<endl;
    cout<<"3.Delete a Patient's Information"<<endl;
    cout<<"4.View a Patient's Information"<<endl;
}
void admit_patient(patient p[],int index)
{
    cout<<"____________________"<<endl<<endl;
    cout<<"Patient's Name: ";
    string n1;
    cin>>n1;
    p[index].set_name(n1);
    cout<<endl<<"Patient's Age: ";
    string n2;
    cin>>n2;
    p[index].set_age(n2);
    cout<<endl<<"Contact Number: ";
    string n3;
    cin>>n3;
    p[index].set_phone(n3);
    cout<<endl<<"Patient's Address : ";
    string n4;
    cin>>n4;
    p[index].set_address(n4);
    cout<<endl<<"Patient's Blood Group: ";
    string n5;
    cin>>n5;
    p[index].set_blood_group(n5);
    cout<<endl<<"Patient's Disease: ";
    string n6;
    cin>>n6;
    p[index].set_disease(n6);
    cout<<endl<<"Patient's Condition: ";
    string n7;
    cin>>n7;
    p[index].set_condition(n7);
    cout<<endl<<"Room No. :";
    string n8;
    cin>>n8;
    p[index].set_room(n8);
    p[index].set_total_fees();

    p[index].set_blood_pressure();
    p[index].set_glucose();
    p[index].set_wbc();
    p[index].set_immune_system();
    p[index].set_day_to_recover();
    cout<<"____________________";
    cout<<endl<<endl<<">>ADMITTED<<";
}
void edit_patient_information(patient p[],int index)
{
    cout<<"1.Search By Patient's Room Number";
    cout<<endl<<"2.Search By Contact Number"<<endl;
    int i,c=choice();
    if(c==1)
    {
        cout<<"Enter The Room Number: ";
        string room;
        cin>>room;
        for(i=0; i<index; i++)
        {
            if(room==p[i].get_room())
            {
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"________________________________________";
                cout<<endl<<endl<<"^^^Only Contact Number,Address,Condition and Room No. can be changed^^^";
                cout<<endl<<endl<<"Enter the serial number(3,4,7,8) you want to edit: ";
                int s;
                cin>>s;
                if(s==3)
                {
                    cout<<endl<<"Enter New Contact Number: ";
                    string t;
                    cin>>t;
                    p[i].set_phone(t);
                }
                else if(s==4)
                {
                    cout<<endl<<"Enter Patient's New Address: ";
                    string t1;
                    cin>>t1;
                    p[i].set_address(t1);
                }
                else if(s==7)
                {
                    cout<<endl<<"Enter Patient's Changed Condition: ";
                    string t2;
                    cin>>t2;
                    p[i].set_condition(t2);
                }
                else if(s==8)
                {
                    cout<<endl<<"Enter Patient's Changed Room No. : ";
                    string t3;
                    cin>>t3;
                    p[i].set_room(t3);
                }
            }
        }
    }
    else if(c==2)
    {
        cout<<"Enter the Phone number: ";
        string phone;
        cin>>phone;
        for(i=0; i<index; i++)
        {
            if(phone==p[i].get_phone())
            {
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<"________________________________________";
                cout<<endl<<endl<<"^^^Only Contact Number,Address,Condition and Room No. can be changed^^^";
                cout<<endl<<endl<<"Enter the serial number(3,4,7,8) you want to edit: ";
                int s1;
                cin>>s1;
                if(s1==3)
                {
                    cout<<endl<<"Enter New Contact Number: ";
                    string t;
                    cin>>t;
                    p[i].set_phone(t);
                }
                else if(s1==4)
                {
                    cout<<endl<<"Enter Patient's New Address: ";
                    string t1;
                    cin>>t1;
                    p[i].set_address(t1);
                }
                else if(s1==7)
                {
                    cout<<endl<<"Enter Patient's Changed Condition: ";
                    string t2;
                    cin>>t2;
                    p[i].set_condition(t2);
                }
                else if(s1==8)
                {
                    cout<<endl<<"Enter Patient's Changed Room No. : ";
                    string t3;
                    cin>>t3;
                    p[i].set_room(t3);
                }
            }
        }
    }
}
void delete_patient_information(patient p[],int index)
{
    cout<<"1.Search By Patient's Room Number";
    cout<<endl<<"2.Search By Contact Number"<<endl;
    int i,c=choice();
    if(c==1)
    {
        cout<<"Enter The Room Number: ";
        string room;
        cin>>room;
        for(i=0; i<index; i++)
        {
            if(room==p[i].get_room())
            {
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"9.Total Bill:            "<<p[i].get_total_fees();
                cout<<endl<<"________________________________________";

                cout<<endl<<endl<<"Press 1 To Delete This Patient's Data"<<endl;
                int d,l;
                cin>>d;
                if(d==1)
                {
                    int l;
                    for(l=i; l<=index; l++)
                    {
                        p[l].set_name(p[l+1].get_name());
                        p[l].set_age(p[l+1].get_age());
                        p[l].set_phone(p[l+1].get_phone());
                        p[l].set_address(p[l+1].get_address());
                        p[l].set_blood_group(p[l+1].get_blood_group());
                        p[l].set_disease(p[l+1].get_disease());
                        p[l].set_condition(p[l+1].get_condition());
                        p[l].set_total_fees(p[l+1].get_total_fees());
                        p[l].set_room(p[l+1].get_room());
                    }
                }
            }
        }
    }
    else if(c==2)
    {
        cout<<"Enter The Contact Number: ";
        string C;
        cin>>C;
        int i;
        for(i=0; i<index; i++)
        {
            if(C==p[i].get_phone())
            {
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"9.Total Bill:            "<<p[i].get_total_fees();
                cout<<endl<<"________________________________________";

                cout<<endl<<"Press 1 To Delete This Patient's Data"<<endl;
        int d,l;
        cin>>d;
        if(d==1)
        {
            int l;
            for(l=i; l<=index; l++)
            {
                p[l].set_name(p[l+1].get_name());
                p[l].set_age(p[l+1].get_age());
                p[l].set_phone(p[l+1].get_phone());
                p[l].set_address(p[l+1].get_address());
                p[l].set_blood_group(p[l+1].get_blood_group());
                p[l].set_disease(p[l+1].get_disease());
                p[l].set_condition(p[l+1].get_condition());
                p[l].set_total_fees(p[l+1].get_total_fees());
                p[l].set_room(p[l+1].get_room());
            }
        }
            }
        }
    }
}
void view_patient_information(patient p[],int index)
{
    cout<<"1.Search By Patient's Room Number";
    cout<<endl<<"2.Search By Contact Number"<<endl;
    int c=choice();
    if(c==1)
    {
        cout<<"Enter The Room Number: ";
        string room;
        int i,flag=0;
        cin>>room;
        for(i=0; i<index; i++)
        {
            if(room==p[i].get_room())
            {
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"9.Total Bill:            "<<p[i].get_total_fees();
                cout<<endl<<"________________________________________";

                cout<<endl<<endl<<"Total Patient in Hospital: "<<index;
                flag++;
            }
        }
        if(flag==0) cout<<endl<<endl<<"!!!NO MATCH!!!";
    }
    else if(c==2)
    {
        cout<<"Enter The Contact Number: ";
        string C;
        cin>>C;
        int i,flag=0;
        for(i=0; i<index; i++)
        {
            if(C==p[i].get_phone())
            {
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"9.Total Bill:            "<<p[i].get_total_fees();
                cout<<endl<<"________________________________________";

                cout<<endl<<endl<<"Total Patient in Hospital: "<<index;
                flag++;
            }
        }
        if(flag==0) cout<<endl<<endl<<"!!!NO MATCH!!!";
    }
}
void patient_bill(patient p[],int index)
{
    cout<<"Which Patient You Want To Create Bill?"<<endl<<endl;
    cout<<"1.Search By Patient's Room Number"<<endl;
    cout<<"2.Search By Contact Number"<<endl;
    int c=choice();
    if(c==1)
    {
        cout<<"Enter The Room Number: ";
        string room;
        int i;
        cin>>room;
        for(i=0; i<index; i++)
        {
            if(room==p[i].get_room())
            {
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"________________________________________";

                cout<<endl<<endl<<"Room Charge: ";
                int x;
                cin>>x;
                cout<<endl<<"Test Charge: ";
                int y;
                cin>>y;
                cout<<endl<<"Doctor's Fees: ";
                int z;
                cin>>z;
                cout<<endl<<"Medicine Fees: ";
                int m;
                cin>>m;
                int total=x+y+z+m;
                cout<<endl<<"Total Bill: "<<total;
                p[i].set_total_fees(total);
            }
        }
    }
    else if(c==2)
    {
        cout<<"Enter The Contact Number: ";
        string C;
        cin>>C;
        int i;
        for(i=0; i<index; i++)
        {
            if(C==p[i].get_phone())
            {
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"________________________________________";

                cout<<endl<<endl<<"Room Charge: ";
                int x;
                cin>>x;
                cout<<endl<<"Test Charge: ";
                int y;
                cin>>y;
                cout<<endl<<"Doctor's Fees: ";
                int z;
                cin>>z;
                int total=x+y+z;
                cout<<endl<<"Total Bill: "<<total;
                p[i].set_total_fees(total);
            }
        }
    }
}
void generate_report(patient p[],int index)
{
    cout<<"1.Generate Report By Patient's Room Number";
    cout<<endl<<"2.Generate Report By Contact Number"<<endl;
    int c=choice();
    if(c==1)
    {
        cout<<"Enter The Room Number: ";
        string room;
        int i;
        cin>>room;
        for(i=0; i<index; i++)
        {
            if(room==p[i].get_room())
            {
                cout<<endl<<"!!!Patient Found!!!"<<endl<<endl<<"Here Are Details:";
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"________________________________________";

                cout<<endl<<endl<<"_____Patient's Report_____";
                cout<<endl<<endl<<"Blood Pressure: ";
                string bpressure;
                cin>>bpressure;
                p[i].set_blood_pressure(bpressure);
                cout<<endl<<"% OF Glucose In Blood: ";
                string glucose;
                cin>>glucose;
                p[i].set_glucose(glucose);
                cout<<endl<<"% OF WBC In Blood: ";
                string bc;
                cin>>bc;
                p[i].set_wbc(bc);
                cout<<endl<<"Immune System: ";
                string isystem;
                cin>>isystem;
                p[i].set_immune_system(isystem);
                cout<<endl<<"Minimum Day To Recover: ";
                int dayr;
                cin>>dayr;
                p[i].set_day_to_recover(dayr);
            }
        }
    }
    else if(c==2)
    {
        cout<<"Enter The Contact Number: ";
        string C;
        cin>>C;
        int i;
        for(i=0; i<index; i++)
        {
            if(C==p[i].get_phone())
            {
                cout<<endl<<"!!!Patient Found!!!"<<endl<<endl<<"Here Are Details:"<<endl;
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Patient's Name:        "<<p[i].get_name();
                cout<<endl<<"2.Patient's Age:         "<<p[i].get_age();
                cout<<endl<<"3.Contact Number:        "<<p[i].get_phone();
                cout<<endl<<"4.Patient's Address:     "<<p[i].get_address();
                cout<<endl<<"5.Patient's Blood Group: "<<p[i].get_blood_group();
                cout<<endl<<"6.Patient's Disease:     "<<p[i].get_disease();
                cout<<endl<<"7.Patient's Condition:   "<<p[i].get_condition();
                cout<<endl<<"8.Patient's Room:        "<<p[i].get_room();
                cout<<endl<<"________________________________________";

                cout<<endl<<endl<<"_____Patient's Report_____";
                cout<<endl<<endl<<"Blood Pressure: ";
                string bpressure;
                cin>>bpressure;
                p[i].set_blood_pressure(bpressure);
                cout<<endl<<"% OF Glucose In Blood: ";
                string glucose;
                cin>>glucose;
                p[i].set_glucose(glucose);
                cout<<endl<<"% OF WBC In Blood: ";
                string bc;
                cin>>bc;
                p[i].set_wbc(bc);
                cout<<endl<<"Immune System: ";
                string isystem;
                cin>>isystem;
                p[i].set_immune_system(isystem);
                cout<<endl<<"Minimum Day To Recover: ";
                int dayr;
                cin>>dayr;
                p[i].set_day_to_recover(dayr);
            }
        }
    }
}
void view_report(patient p[],int index)
{
    cout<<"1.View Report By Patient's Room Number";
    cout<<endl<<"2.View Report By Contact Number"<<endl;
    int c=choice();
    if(c==1)
    {
        cout<<"Enter The Room Number: ";
        string room;
        int i;
        cin>>room;
        for(i=0; i<index; i++)
        {
            if(room==p[i].get_room())
            {
                cout<<endl<<"!!!Patient Found!!!"<<endl<<endl<<"Here Are The Report:";
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Blood Group:            "<<p[i].get_blood_group();
                cout<<endl<<"2.Blood Pressure:         "<<p[i].get_blood_pressure();
                cout<<endl<<"3.% Of Glucose In Blood:  "<<p[i].get_glucose();
                cout<<endl<<"4.% Of WBC In Blood:      "<<p[i].get_wbc();
                cout<<endl<<"5.Immune System:          "<<p[i].get_immune_system();
                cout<<endl<<"6.Minimum Day To Recover: "<<p[i].get_day_to_recover();
                cout<<endl<<"________________________________________";
            }
        }
    }
    else if(c==2)
    {
        cout<<"Enter The Contact Number: ";
        string C;
        cin>>C;
        int i;
        for(i=0; i<index; i++)
        {
            if(C==p[i].get_phone())
            {
                cout<<endl<<"!!!Patient Found!!!"<<endl<<endl<<"Here Are The Report:";
                cout<<"________________________________________"<<endl;
                cout<<endl<<"1.Blood Group:            "<<p[i].get_blood_group();
                cout<<endl<<"2.Blood Pressure:         "<<p[i].get_blood_pressure();
                cout<<endl<<"3.% Of Glucose In Blood:  "<<p[i].get_glucose();
                cout<<endl<<"4.% Of WBC In Blood:      "<<p[i].get_wbc();
                cout<<endl<<"5.Immune System:          "<<p[i].get_immune_system();
                cout<<endl<<"6.Minimum Day To Recover: "<<p[i].get_day_to_recover();
                cout<<endl<<"________________________________________";
            }
        }
    }
}
int load_data(patient p[])
{
    int i;
    string name1,age1,phone1,address1,blood_group1,disease1,condition1,room1;
    ifstream infile;
    infile.open("Patient Data.txt", ios::in);

    while(infile.eof()==false)
    {
        for(i=0; i<10; i++)
        {
            getline(infile, name1);
            getline(infile, age1);
            getline(infile, phone1);
            getline(infile, address1);
            getline(infile, blood_group1);
            getline(infile, disease1);
            getline(infile, condition1);
            getline(infile, room1);

            p[i].set_name(name1);
            p[i].set_age(age1);
            p[i].set_phone(phone1);
            p[i].set_address(address1);
            p[i].set_blood_group(blood_group1);
            p[i].set_disease(disease1);
            p[i].set_condition(condition1);
            p[i].set_room(room1);
            p[i].set_total_fees();

            p[i].set_blood_pressure();
            p[i].set_glucose();
            p[i].set_wbc();
            p[i].set_immune_system();
            p[i].set_day_to_recover();
        }
    }
    infile.close();
    return i;
}
int main()
{
    patient p1[50];
    int patient_index=load_data(p1);
    while(true)
    {
        show_menu();
        int c=choice();
        if(c==1)
        {
            patient_database_print();
            c=choice();
            if(c==1)
            {
                admit_patient(p1,patient_index);
                patient_index++;
            }
            else if(c==2)
            {
                edit_patient_information(p1,patient_index);
            }
            else if(c==3)
            {
                delete_patient_information(p1,patient_index);
                patient_index--;
            }
            else if(c==4)
            {
                view_patient_information(p1,patient_index);
            }
            else cout<<endl<<"!! ERROR CHOICE !!";
        }
        else if(c==2)
        {
            patient_bill(p1,patient_index);
        }
        else if(c==3)
        {
            generate_report(p1,patient_index);
        }
        else if(c==4)
        {
            view_report(p1,patient_index);
        }
        else if(c==5)
        {
            return 0;
        }
        else cout<<endl<<"!! ERROR CHOICE !!";
    }
}
