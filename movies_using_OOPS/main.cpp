#include<iostream>
#include<Movies.h>
using namespace std;

void increment_watched(Movies &movies,string name);
void add_movie(Movies &movies,string name,string rating,int watched);

void increment_watched(Movies &movies,string name){
    if(movies.increment_watched(name)){
        cout << name << "--Times watched increased" << endl;
    }else{
        cout<< name << "--not found" << endl;
    }
}

void add_movie(Movies &movies,string name,string rating,int watched){
    if(movies.add_movie(name,rating,watched)){
        cout << name << "--added" << endl;
    }else{
        cout << name << "--already exists" << endl;
    }
}

int main(){
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies,"Bahubali","ulti",10);
    add_movie(my_movies,"Kantara","ulti",10);
    add_movie(my_movies,"Demon slayers","ulti",10);
    
    my_movies.display();
    add_movie(my_movies,"Kantara","ulti",10);
    add_movie(my_movies,"Safari","ulti",10);
    
    increment_watched(my_movies,"Kantara");
    increment_watched(my_movies,"Bahubali");
    
    my_movies.display();
    increment_watched(my_movies,"Bahubali 2");
    return 0;
}