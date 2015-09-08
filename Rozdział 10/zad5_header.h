typedef struct custom Customer;

class Stack
{
	private:
		enum { MAX = 10 };
		Customer customers[MAX];
		struct custom
		{
			char fullname[35];
			double payment;
		}; 
		double pay_sum;
		int top;
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		bool push(Customer & customer);//push() zwraca false, jeśli stos jest już pełen (true w pozostałych przypadkach)
		bool pop(Customer & customer);//pop() zwraca false, jeśli stos jest już pusty (true w pozostałych przypadkach)
		void show();
};
