#include <iostream>
using namespace std;

class Person {
	private:
		string name;
		public:
			//setter
			void setName(string n){
				name=n;
			}
			//getter
			string getName(){
				return name;
			}
};

class LibraryMember : public Person{
	private:
		int MemberId;
		int BooksBorrowed;
		
		public:
		   
    LibraryMember() {
        MemberId = 0;
        BooksBorrowed = 0;
    }

    
    LibraryMember(string n, int id, int b) {
        setName(n);          
        MemberId = id;       
        BooksBorrowed = b;   
    }

			//setter
			void setMemberId(int id){
				MemberId=id;
			}
			void setBooksBorrowed(int b){
				BooksBorrowed=b;
			}
			//getter
			int getMemberId(){
				return MemberId;
			}
			int getBooksBorrowed(){
				return BooksBorrowed;
			}	
};

class PremiumMember : public LibraryMember {
	private: 
		double MembershipFee;
		public:
		
    PremiumMember() {
        MembershipFee = 0.0;
    }


    PremiumMember(string n, int id, int b, double f) : LibraryMember(n, id, b) {
        MembershipFee = f;
    }

			
			//setter
			void setMembershipFee(double f){
				MembershipFee=f;
			}
			//getter
			double getMembershipFee(){
				return MembershipFee;
			}
	
};

int main(){
	
	LibraryMember member;
	
	member.setName("Hezy");
	member.setMemberId(1234);
	member.setBooksBorrowed(4);
	
	cout<<"	LIBRARY MEMBER: "<<endl;
	cout<<"NAME: "<<member.getName()<<endl;
	cout<<"ID: "<<member.getMemberId()<<endl;
	cout<<"BORROWED BOOKS: "<<member.getBooksBorrowed()<<endl;
	
	
	PremiumMember premium;
	
        premium.setName("Mujer");
        premium.setMemberId(12345);
        premium.setBooksBorrowed(6);
        premium.setMembershipFee(99.99);
        
	    cout<<"PREMIUM MEMBER: "<<endl;
		cout<<"NAME: "<<premium.getName()<<endl;
     	cout<<"ID: "<<premium.getMemberId()<<endl;
    	cout<<"BORROWED BOOKS: "<<premium.getBooksBorrowed()<<endl;
 		cout<<"MEMBERSHIP FEE: "<<premium.getMembershipFee()<<endl;
	
	
	return 0;
}