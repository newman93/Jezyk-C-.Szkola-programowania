class Cd
{
	private:
		char performers[50];
		char label[20];
		int selections;
		double playtime;
	public:
		Cd(const char * s1,const char * s2, int n, double x);
		Cd();
		Cd(const Cd & d);
		virtual ~Cd();
		virtual void Report() const;
		Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
	private:
		char song[20];
	public:
		Classic(const char * s1,const char * s2, int n, double x,const char * s3);
		Classic();
		virtual void Report() const;	
};
