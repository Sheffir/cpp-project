#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string Name, int memberID1, int booksBorrowed2) {
        name = Name;
        memberID = memberID1;
        booksBorrowed = booksBorrowed2;
    }

    void setMemberID(int membID) {
        memberID = membID;
    }

    int getMemberID() {
        return memberID;
    }

    void setBooksBorrowed(int booksBor) {
        booksBorrowed = booksBor;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string Name1, int memberID2, int booksBorrowed3, double fee)
        : LibraryMember(Name1, memberID2, booksBorrowed3) {
        membershipFee = fee;
    }

    void setMembershipFee(double memberFee) {
        membershipFee = memberFee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    PremiumMember p("John Doe", 101, 3, 2500.0);

    cout << "Name: " << p.getName() << endl;
    cout << "Member ID: " << p.getMemberID() << endl;
    cout << "Books Borrowed: " << p.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << p.getMembershipFee() << endl;

    return 0;
}
