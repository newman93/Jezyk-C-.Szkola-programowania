class Golf
{
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		Golf( const char * fn, const int hp = 1);
		Golf();
		const Golf & setgolf(const Golf & g) const;
		~Golf();
		void showgolf() const;
};
