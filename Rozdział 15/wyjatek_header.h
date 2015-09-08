#include <iostream>

class Bad_hmean
{
	private:
		double d_v1;
		double d_v2;
	public:
		Bad_hmean(double _a = 0, double _b = 0) : d_v1(_a), d_v2(_b) {}
		void Mesg();
};

inline void Bad_hmean::Mesg()
{
	std::cout << "hmean(" << d_v1 << ", " << d_v2 << "): niepoprawne argumenty: a = -b\n";
}

class Bad_gmean
{
	public:
		double d_v1;
		double d_v2;
		Bad_gmean(double _a = 0, double _b = 0) : d_v1(_a), d_v2(_b) {}
		const char * Mesg();
};

inline const char * Bad_gmean::Mesg()
{
	return "Argumenty funkcji Gmean() powinny byc >= 0\n";
}
