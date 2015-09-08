namespace SALES
{
	class Sales
	{
		private:
			static const int QUARTERS = 4;
			double sales[QUARTERS];
			double average;
			double max;
			double min;
		public:
			Sales(const double ar[]);
			Sales();
			~Sales();
			const Sales & setSales(const Sales & s) const;
			void setValue(double minimum,double maximum, double srednia);
			void setSales(double kwota,int n);
			void showSales();
	};
}

