#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock
{
	private:
		std::string company;
		int shares;
		double share_val;
		double total_val;
	public:
	    void set_tot() { total_val = shares * share_val; }
		Stock();
		Stock(const std::string & co, long n = 0, double pr = 0.0);
		~Stock();
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show() const;				//do usuniecia
		const Stock & topval(const Stock & s) const;
		//aktualizacja
		void set_shares(double s) { shares = s; };
	    void set_company(std::string s) { company = s; };
	    void set_share_val(double s) { share_val = s; };
	    friend std::ostream & operator<<(std::ostream & os, const Stock & s);
};

//aktualizacja kolejka
typedef Stock Item;

class Queue
{
	private:
		struct Node { Item item; struct Node * next; };
		enum { Q_SIZE = 4 };
		Node * front;
		Node * rear;
		int items;
		const int qsize;
		Queue(const Queue & q) : qsize(0) { }
		Queue & operator=(const Queue & q) { return *this; }
	public:
		Queue(int qs = Q_SIZE);
		~Queue();
		bool isempty() const;
		bool isfull() const;
		int queuecout() const;
		bool enqueue(const Item & item);
		bool dequeue(Item & item);
};

#endif
