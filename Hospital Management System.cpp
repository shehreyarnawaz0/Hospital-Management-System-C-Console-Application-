#include <iostream>
using namespace std;
struct Patient {
    string name;
    int age;
    string gender;
    string contact;
    string medicalHistory;
    string testResult;
    string treatment;
};
struct Hospital {
    string name;
    string location;
    int capacity;
    int availableBeds;
};
void addPatient(Patient patients[], int& patientCount) {
    Patient p;
    cout << "Enter patient name: ";
    cin >> p.name;
    cout << "Enter patient age: ";
    cin >> p.age;
    cout << "Enter patient gender: ";
    cin >> p.gender;
    cout << "Enter patient contact information: ";
    cin >> p.contact;
    cout << "Enter patient medical history: ";
    cin >> p.medicalHistory;
    cout << "Enter patient test result: ";
    cin >> p.testResult;

  cout << "Enter patient treatment: ";
    cin >> p.treatment;
    patients[patientCount++] = p;
}
void addHospital(Hospital hospitals[], int& hospitalCount) {
    Hospital h;
    cout << "Enter hospital name: ";
    cin >> h.name;
    cout << "Enter hospital location: ";
    cin >> h.location;
    cout << "Enter hospital capacity: ";
    cin >> h.capacity;
    cout << "Enter available beds: ";
    cin >> h.availableBeds;
    hospitals[hospitalCount++] = h;
}
void showPatients(Patient patients[], int patientCount) {
    cout << "Total patients: " << patientCount << endl;
    for (int i = 0; i < patientCount; i++) {
        cout << "Patient name: " << patients[i].name << endl;
        cout << "Age: " << patients[i].age << endl;
        cout << "Gender: " << patients[i].gender << endl;
        cout << "Contact: " << patients[i].contact << endl;
        cout << "Medical history: " << patients[i].medicalHistory << endl;
        cout << "Test result: " << patients[i].testResult << endl;
        cout << "Treatment: " << patients[i].treatment << endl << endl;
    }
}
void showHospitals(Hospital hospitals[], int hospitalCount) {
    cout << "Total hospitals: " << hospitalCount << endl;
 for (int i = 0; i < hospitalCount; i++) {
        cout << "Hospital name: " << hospitals[i].name << endl;
        cout << "Location: " << hospitals[i].location << endl;
        cout << "Capacity: " << hospitals[i].capacity << endl;
        cout << "Available beds: " << hospitals[i].availableBeds << endl << endl;
    }
}
int main() {
    Patient patients[100];
    int patientCount = 0;
    Hospital hospitals[100];
    int hospitalCount = 0;
    int choice,a;
    do {
        cout << "1. Add patient" << endl;
        cout << "2. Add hospital" << endl;
        cout << "3. Show patients" << endl;
        cout << "4. Show hospitals" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            addPatient(patients, patientCount);
            break;
        case 2:
                addHospital(hospitals, hospitalCount);
               break;
  case 3:
                showPatients(patients, patientCount);
                break;
        case 4:
                showHospitals(hospitals, hospitalCount);
                break;
        case 5:
                a=1;
                break;
        }
    }while(a!=1);
    return 0;

}
