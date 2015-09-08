#include <iostream>
#include <string>
#include <algorithm>
#include <memory>

//bład w porgramie, nie rozumiem tych wskaźników :(

struct Review {
    std::string title;
    int rating;
    int price;
};

bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{
    using namespace std;

    shared_ptr<Review> books[3];
    Review temp;
    int i = 0;
    while (FillReview(temp))
    {
        books[i] = new Review(temp);
        ++i;
    }    
        
    if (books.size() > 0)
    {
        cout << "Dziękuję. Podałeś "
            << 3 << " ocen książek:\n"
            << "Ocena\tKsiążka\n";
        //for_each(books.begin(), books.end(), ShowReview);
		for (int i = 0; i < 3; ++i)
			ShowReview(&books[i]);
			
        //sort(books.begin(), books.end());
        cout << "Posortowane według tytułu:\nOcena\tKsiążka\n";
        //for_each(books.begin(), books.end(), ShowReview);

        //sort(books.begin(), books.end(), worseThan);
        cout << "Posortowane według oceny:\nOcena\tKsiążka\n";
        //for_each(books.begin(), books.end(), ShowReview);

        //random_shuffle(books.begin(), books.end());
        cout << "Po wymieszaniu:\nOcena\tKsiążka\n";
        //for_each(books.begin(), books.end(), ShowReview);
    }
    else
        cout << "Brak danych. ";
    cout << "Koniec.\n";
    return 0;
}

bool operator<(const Review & r1, const Review & r2)
{
    if (r1.title < r2.title)
        return true;
    else if (r1.title == r2.title && r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool worseThan(const Review & r1, const Review & r2)
{
    if (r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool FillReview(Review & rr)
{
    std::cout << " Wpisz tytuł książki (koniec, aby zakończyć): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "koniec")
        return false;
    std::cout << "Wpisz ocenę: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;
    // pozbycie się reszty danych wejściowych
    while (std::cin.get() != '\n')
        continue;

    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}

