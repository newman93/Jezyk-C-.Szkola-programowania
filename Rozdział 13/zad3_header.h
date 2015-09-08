class abstractDMA
{
	private:
		char * label;
		int rating;
	public:
		abstractDMA(const char * l = "brak", int r = 0);
		//abstractDMA(const abstractDMA & rs);
		virtual ~abstractDMA();
		//abstractDMA & operator=(const abstractDMA & rs);
		virtual void view() const = 0;
		char * get_label() const { return label; }
		int get_rating() const { return rating; }
};

class baseDMA : public abstractDMA
{
	public:
		baseDMA(const char * l = "brak", int r = 0) : abstractDMA(l,r) { } 
		virtual ~baseDMA();
		virtual void view() const;
};

//nie ma dynapicznego przydzialu pamieci | nie jest potrzebny jawny konstruktor kopiujacy i operator przypisania
class lacksDMA : public abstractDMA
{
	private:
		enum { COL_LEN = 40 };
		char color[COL_LEN];
	public:
		lacksDMA(const char * l = "brak", int r = 0,const char * c = "brak");
		~lacksDMA();
		lacksDMA(const char * c, const baseDMA & rs);
		virtual void view() const;
};

//wystepuje dynamiczny przydzial pamieci | nalezy podac jawnie konstruktor kopiujacy i operator przypisania
class hasDMA : public abstractDMA
{
	private:
		char * style;
	public:
		hasDMA(const char * l = "brak", int r = 0,const char * d ="bez_stylu");
		~hasDMA();
		hasDMA & operator=(const hasDMA & rs); 
		hasDMA(const hasDMA & rs);
		hasDMA(const char * s, const baseDMA & rs);
		virtual void view() const;
};
