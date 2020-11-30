#include <iostream>
#include <string>
#include "Bug.h"
#define N 3

using namespace std;

class Backlog {
public:

    void OutPutDev(Bug List[], string Dev) {
        cout << "======================================================" << endl;
        for (int i = 0; i < N; i++) {
            if (List[i].GetDeveloper() == Dev && List[i].GetStatus() == "RESOLVED")  {
                OutPutObj(List[i]);
            }
        }
        cout << "======================================================" << endl;
    }

    void SortBacklog(Bug List[]) {
        Bug a;
        for (int k = 1; k < N; k++) {
            for (int i = 0; i < N-k; i++) {
                if (List[i].GetSeverity() > List[i+1].GetSeverity()) {
                    a = List[i];
                    List[i] = List[i+1];
                    List[i+1] = a;
                }
            }
        }
    }

    void OutPutObj(Bug Obj) {
        cout << "Description - " << Obj.GetDescription() << ";\t" << "Deadline - " << Obj.GetDeadline()
        << ";\t" << "Status - " << Obj.GetStatus() << ";\t" << "Developer - " << Obj.GetDeveloper()
        << ";\t" << "Severity - " << Obj.GetSeverity() << ";\t" << endl;
    }

    void OutPutList(Bug List[]) ;


};

void Backlog:: OutPutList(Bug List[]) {
    cout << "======================================================" << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << endl;
        OutPutObj(List[i]);
        cout << endl;
    }
    cout << "======================================================" << endl;
}

int main() {
    Bug List[N];
    for (int i = 0; i < N; i++) {
        string Description;
        string Deadline;
        string Status;
        string Developer;
        int Severity;
        cout << i + 1 << endl;
        cout << "Description = " ;
        cin >> Description;
        cout << "Deadline = " ;
        cin >> Deadline;
        cout << "Status = " ;
        cin >> Status;
        cout << "Developer = " ;
        cin >> Developer;
        cout << "Severity = " ;
        cin >> Severity;
        Bug A(Description, Deadline, Status, Developer, Severity);
        List[i] = A;
    }
    Backlog Obj;
    Obj.OutPutDev(List, "Sasha");
    Obj.SortBacklog(List);
    Obj.OutPutList(List);

    return 0;
}
