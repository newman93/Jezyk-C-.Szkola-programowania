class Stonewt
{
	private:
		enum { Lbs_per_stn = 14 };
		int stone;         //masa w całych kamieniach
		double pds_left;   //reszta w funtach
		double pounds;	   //masa w funtach
	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
		~Stonewt();
		friend Stonewt operator*(double masa, const Stonewt & s);  //przeciazenie operatora funkcja zaprzyjazniona
		Stonewt operator*(double masa) const; //przeciazenie operatora metoda klasy
		void show_lbs() const;
		void show_stn() const;
};
