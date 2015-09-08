class Cd
{
	private:
		char * performers;
		char * label;
		int selections;
		double playtime;
	public:
		Cd(const char * s1,const char * s2, int n, double x);
		Cd();
		Cd(const Cd & d);
		virtual ~Cd();
		virtual void Report() const;
		void show_details() const;
		Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
	private:
		char * song;
	public:
		Classic(const char * s1,const char * s2, int n, double x,const char * s3);
		Classic();
		virtual void Report() const;	
};
