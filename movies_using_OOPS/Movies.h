#ifndef MOVIES_H
#define MOVIES_H
#include <vector>
#include <string>
#include <Movie.h>

using namespace std;
class Movies
{
    private:
        vector <Movie> movies;
public:
    Movies();
    ~Movies();
    
    bool add_movie(string name,string rating,int watched);
    bool increment_watched(string name);
    
    
    void display() const;
};

#endif // MOVIES_H
