#ifndef QUEUE_H_
#define QUEUE_H_

template <class Item>
class QueueTP
{
	private:
		enum { Q_SIZE = 10 };
		//definicja klasy zagniezdzonej Node
		class Node
		{
			public:
				Item I_item;
				Node * N_next;
				Node(const Item & _i) : I_item(_i), N_next(0) {}
		};
		Node * N_front;						//wskanznik na przod kolejki
		Node * N_rear;						//wskaznik na koniec kolejki 
		int n_items;						//maksymalna liczba elemntow w kolejce
		const int n_qsize;
		QueueTP(const QueueTP & _q) : n_qsize(0) {}
		QueueTP & operator=(const QueueTP & _q) { return *this; }
	public:
		QueueTP(int _us = Q_SIZE);
		~QueueTP();
		bool IsEmpty() const
		{
			return n_items == 0;
		}
		bool IsFull() const
		{
			return n_items == n_qsize;
		}
		int QueueCount() const
		{
			return n_items;
		}
		bool EnQueue(const Item & _item);	//dodaje element na koniec kolejki
		bool DeQueue(Item & _item);			//usuwa element z poczatku kolejki
};

//metody klasy QueueTP

template <class Item>
QueueTP<Item>::QueueTP(int _qs) : n_qsize(_qs)
{
	N_front = N_rear = 0;
	n_items = 0;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
	Node * N_temp;
	while (N_front != 0)	//dopoki kolejka nie jest pusta
	{
		N_temp = N_front;			//zapisuje adres poczatku kolejki
		N_front = N_front->N_next;	//ustawia wskaznik na nastepny element
		delete N_temp;				//usuwa dawny poczatek
	}
}

//dodaje element do kolejki

template <class Item>
bool QueueTP<Item>::EnQueue(const Item & _item)
{
	if (IsFull())
		return false;
	Node * N_add = new Node(_item);		//tworzy nowy element, w przypadku bledu wyrzuca wyjatek std::bad_alloc
	n_items++;
	if (N_front == 0)					//jesli kolejka jest pusta
		N_front = N_add;				//dodaje lement na poczatek kolejki
	else
		N_rear->N_next = N_add;			//w przciwny razie na koniec kolejki
	N_rear = N_add;						//konjiec kolejki wskazuje na dany element
	
	return true;
}

//umieszcza poczatkowy element w obiekcie item i usuwa z kolejki
template <class Item>
bool QueueTP<Item>::DeQueue(Item & _item)
{
	if (N_front == 0)
		return false;
	_item = N_front->I_item;	//ustawia item na pierwszy element kolejki
	n_items--;
	Node * N_temp = N_front; 	//zapisuje adres pierwszego elementu
	N_front = N_front->N_next;	//ustawia poczatek na nastepny element
	delete N_temp;				//usuwa poprzedni poczatek
	if (n_items == 0)
		N_rear = 0;
	
	return true;
}

#endif
