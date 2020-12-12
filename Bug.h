#include <string>
using namespace std;
#ifndef LAB5_BUG_H
#define LAB5_BUG_H
class Bug {
    private:
        string Description;
        string Deadline;
        string Status;
        string Developer;
        int Severity;
    public:
        Bug() {}

        Bug(string vDescription, string vDeadline, string vStatus, string vDeveloper, int vSeverity) {
            Description = vDescription;
            Deadline = vDeadline;
            Status = vStatus;
            Developer = vDeveloper;
            Severity = vSeverity;
        }

        ~Bug() {}

        string GetDescription() {
            return Description;
        }

        string GetDeadline() {
            return Deadline;
        }

        string GetStatus() {
            return Status;
        }

        string GetDeveloper() {
            return Developer;
        }

        int GetSeverity() {
            return Severity;
        }

        void SetDescription(string vDescription) {
            Description = vDescription;
        }

        void SetDeadline(string vDeadline) {
            Deadline = vDeadline;
        }

        void SetStatus(string vStatus) {
            Status = vStatus;
        }

        void SetDeveloper(string vDeveloper) {
            Developer = vDeveloper;
        }

        void SetSeverity(int vSeverity) {
            Severity = vSeverity;
        }
};
#endif //LAB5_BUG_H
