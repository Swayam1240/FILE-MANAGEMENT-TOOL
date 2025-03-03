#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

class fileManage {
    public:
        string filename ;
        fileManage(string File){
            filename = File ;
        }


    void writefile(){
        ofstream file(filename , ios::app) ;

        if(!file){
            cout<<"unable to open file"<<endl;
        }
        
        cin.ignore();
       
            string data ;
            while(getline (cin , data)){
                if(data.empty())
                    break;
                else {
                    cout<<" " ;
                }
                    file<<data<<endl;
            }
        

        file.close();
    }

    void readfile(){
        ifstream file(filename) ;

        if(!file){
            cout<<"unable to open " << endl; 
        }
        else {
            string line ;
            while(getline(file , line)){
                cout<<line<<endl;
            }
        }

        file.close();
    }

};

int main(){
    fileManage file("example.txt") ;
    int choice ;

    do {
        cout<< "1.Write to file  \n 2. Read from file \n 3. exit" << endl;
        cin >> choice ;
        
        switch(choice){
            case 1 :
                file.writefile();
                break;
            case 2 :
                file.readfile();
                break;
            case 3 :
                cout<< "exit program......"<<endl;
                break;
            default :
                cout<<"invalid choice"<<endl;
        }
    }
        while(choice!=3);
        return 0 ;

        

}
