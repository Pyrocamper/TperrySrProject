#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    // This is how to open the RFID files

    //this creates the variable to iterate theought the file. 
    string line;
    //this opens the file from the location on the desktop.. maybe call it something else. 
    ifstream myfile("C:\\Users\\Pyroc\\Desktop\\rfid.txt.txt");

    //opens the file 
    if(myfile.is_open()){
        //get line is used to 
        while(getline (myfile, line) )
        {
            cout << line << '\n'; // LINE IS THE VALUE OF THE RFID FROM THE SD CARD
        }
        myfile.close();
    }
    else cout << "unable to open file";
    // return 0;

//This is how to maybe access the information in excel?

ifstream inFile;

string Name;
string ID; 
string RFID;

inFile.open("C:\\Users\\Pyroc\\Desktop\\Sr. Project\\database.csv");

if (inFile.is_open()){
    cout << "file has been opened"<< endl;
}
else{
    cout << "No file was found" << endl; 
}
while(!inFile.eof()){

 getline (inFile, Name,',' ); 
 
 getline (inFile, ID,',' );  // i NEED TO COMPARE THE LINE AND RFID VALUE TO OUTPUT THE ID VALUE
  
 getline (inFile, RFID );//     THIS IS THE VALUE FROM THE DATABASE. 
  //inFile >> RFID;

  cout << "Name:  " << Name << endl; 
  cout << "ID:    " << ID << endl;
  cout << "RFID:  " << RFID << endl;
  cout << endl;
}

//COMPARE THE 2 rfid values (line from sd)(RFID from .csv file) 

//i think i need to  have a a four loop for 
cout << "now to compare the RFID values" << endl; 
if(line.compare(RFID) ){
    cout<< "Student ID's" << ID << endl; 
} else {
    cout << "Compare function didnt work"; 
}



}
//end of main file. 
