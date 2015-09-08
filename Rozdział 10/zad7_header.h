class Plorg
{
	private:
		char imie[19];
		int sytosc;
	public:
		Plorg(char * n = "Plorga", int s = 50);
		~Plorg();
		void change(int n);
		void say();
};
