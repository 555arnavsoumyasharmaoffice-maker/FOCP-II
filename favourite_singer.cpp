// favourite singer
//Bob has a playlist of 
 //songs, each song has a singer associated with it (denoted by an integer)

//Favourite singer of Bob is the one whose songs are the most on the playlist

//Count the number of Favourite Singers of Bob
//count how many singers have the maximum no of songs on the playlist
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int track[n];
   int track_count[n]={0};
   for (int i=0;i<n;i++){
    cin>>track[i];
    track_count[track[i]]++;

   }
   int max_count=0;
   for (int i=0;i<n;i++){
    if (track_count[i]>max_count){
        max_count=track_count[i];

    }
   }
   int fav_singer_count=0;
   for (int i=0;i<n;i++){
    if (track_count[i]==max_count){
        fav_singer_count++;
    }
   }
   cout<<fav_singer_count<<endl;


    return 0;
}