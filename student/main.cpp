#include<iostream>
#include<string>
#include<cstring>

using namespace std;
struct Student {
    public:
    string name{0};
    string usn{0};
    char gen{0};
    float fees{0};
    int semister {0};
    };
int main(){
    struct Student s[100];
    int n;
    cout << "enter the number of students : "<< endl;
    cin >> n;
    int choice;
    for (int i=0;i<n;++i){
    cout << "enter the student name : " << endl;
    cin >> s[i].name;
    cout<< "enter the USN : " << endl;
    cin >> s[i].usn;
    cout << "enter the gender : " << endl;
    cin >> s[i].gen;
    cout << "enter the semister :" << endl;
    cin >> s[i].semister;
    s[i].fees = 100000.00;
    
    }
    
    for(;;){
        cout<< "-------------------------------------------------------" << endl;
        cout << "1 --print the record " << endl;
        cout << "2 --search usn " << endl;
        cout << "3 --fees update " << endl;
        cout << "4 --exit " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        float fees;
        string get_usn;
        string ser_usn;
        float new_fees{0};
        switch (choice){
            case 1:
            cout<< "-------------------------------------------------------" << endl;
            cout << "name\tusn\tgender\tsem\tfees\n" << endl;
                for (int i=0;i<n;i++){
                    cout << s[i].name<<"\t"<<s[i].usn<<"\t"<<s[i].gen<<"\t"<< s[i].semister <<"\t"<<s[i].fees << endl;
                    }
            
            break;
            case 2:
            
            cout << "enter the usn : " << endl;
            cin >> get_usn;
            cout<< "-------------------------------------------------------" << endl;
            cout << "name\tusn\tgender\tsem\tfees\n" << endl;
            for (int i=0;i<n;i++){
                if (get_usn==s[i].usn){
                    cout << s[i].name<<"\t"<<s[i].usn<<"\t"<<s[i].gen<<"\t"<< s[i].semister <<"\t"<<s[i].fees << endl;
        }
}
            break;
            case 3:
            
            cout << "enter the fees :" << endl;
            cin >> fees;
            cout << "enter the usn : " << endl;
            cin >> ser_usn;
            for (int i=0;i<n;i++){
            if (ser_usn==s[i].usn){
                 new_fees=s[i].fees-fees;
            }
            cout<< "-------------------------------------------------------" << endl;
            cout << "the balance fees is :" << new_fees<< endl;
            }
            break;
            case 4:
            exit(0);
               
}
}
    return 0;
}