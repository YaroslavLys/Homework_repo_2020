#include <iostream>
#include <string>
#include "Bug.h"
#define SIZE 3

using namespace std;

class Backlog {
    public:

        void OutPutDev(Bug bugsArray[], string Dev) {
            cout << "======================================================" << endl;
            for (int i = 0; i < SIZE; i++) {
                if (bugsArray[i].GetDeveloper() == Dev && bugsArray[i].GetStatus() == "RESOLVED")  {
                    OutPutObj(bugsArray[i]);
                }
            }
            cout << "======================================================" << endl;
        }

        void BubbleSortBacklog(Bug bugsArray[]) {
            Bug bug;
            for (int k = 1; k < SIZE; k++) {
                for (int i = 0; i < SIZE - k; i++) {
                    if (bugsArray[i].GetSeverity() > bugsArray[i+1].GetSeverity()) {
                        bug = bugsArray[i];
                        bugsArray[i] = bugsArray[i + 1];
                        bugsArray[i + 1] = bug;
                    }
                }
            }
        }

        void OutPutObj(Bug obj) {
            cout << "Description - " << obj.GetDescription() << ";\t" << "Deadline - " << obj.GetDeadline()
            << ";\t" << "Status - " << obj.GetStatus() << ";\t" << "Developer - " << obj.GetDeveloper()
            << ";\t" << "Severity - " << obj.GetSeverity() << ";\t" << endl;
        }

        void OutPutArray(Bug bugsArray[]) ;
};

void Backlog::OutPutArray(Bug bugsArray[]) {
    cout << "======================================================" << endl;
    for (int i = 0; i < SIZE; i++) {
        OutPutObj(bugsArray[i]);
        cout << endl;
    }
    cout << "======================================================" << endl;
}

int main() {
    Bug bugsArray[SIZE];
    for (int i = 0; i < SIZE; i++) {
        string Description;
        string Deadline;
        string Status;
        string Developer;
        int Severity;
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
        Bug bug(Description, Deadline, Status, Developer, Severity);
        bugsArray[i] = bug;
    }
    Backlog backlog;
    backlog.OutPutDev(bugsArray, "Sasha");
    backlog.BubbleSortBacklog(bugsArray);
    backlog.OutPutArray(bugsArray);

    return 0;
}
