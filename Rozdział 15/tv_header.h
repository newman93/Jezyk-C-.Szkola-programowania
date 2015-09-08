#ifndef TV_H_
#define TV_H_

class Tv
{
	private:
		int n_state;		//on/off
		int n_volume;		//gloscnosc
		int n_maxchannel;	//maksymalna liczba kanalow
		int n_channel;		//aktulanie wlaczony rogram
		int n_mode;			//antena lub telewizja kablowa
		int n_input;		//telewizja lub DVD
	public:
		friend class Remote;	//klaasa Remote jest zaprzyjazniona z Tv, ma dostep do prywatnych danych Tv
		enum { Off, On };
		enum { MinVal, MaxVal = 20 };
		enum { Antena, Cable };
		enum { TV, DVD };
		
		Tv(int _s = Off, int _mc = 125) : n_state(_s), n_volume(5), n_maxchannel(_mc), n_channel(2), n_mode(Cable), n_input(TV) {}
		void OnOff() { n_state = (n_state == On) ? Off : On; }
		bool IsOn() const { return n_state == On; }
		bool VolUp();
		bool VolDown();
		void ChanUp();
		void ChanDown();
		void Set_Mode() { n_mode = (n_mode == Antena) ? Cable : Antena; } 
		void Set_Input() { n_input = (n_input == TV) ? DVD : TV; }
		void Settings() const;	//wyswietlanie wszystkich ustawien
};

class Remote
{
	private:
		int n_mode;		//kontroluje TV lub DVD
	public:
		Remote(int _m = Tv::TV) : n_mode(_m) {}
		bool VolUp(Tv & _t) { return _t.VolUp(); }
		bool VolDown(Tv & _t) { return _t.VolDown(); }
		void OnOff(Tv & _t) { _t.OnOff(); }
		void ChanUp(Tv & _t) { _t.ChanUp(); } 
		void ChanDown(Tv & _t) { _t.ChanDown(); }
		void Set_Chan(Tv & _t, int _c) { _t.n_channel = _c; }
		void Set_Mode(Tv & _t) { _t.Set_Mode(); }
		void Set_Input(Tv & _t)	{ _t.Set_Input(); }
};

#endif
