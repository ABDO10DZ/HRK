/**

- project : hash real killer By ABDO10 
- Version : 1.0 
- abdo10_dz@protonmail.com || defacerdz@gmail.com
- Developed md5 algorithm to md5 hash killer 
- Copyrights reserved by ABDO10 (C) 2020 for this Document
- Copyrights of both md5.h header and md5.cpp source codes are resreved by its owner (   Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All
rights reserved.)   

**/
#include <iostream>
#include <fstream>
#include "md5.cpp"
#include "md5.h"

using namespace std; 

void Help(){
	cerr << " [-] Please enter your hash followed by wordlist path to try decrypt it !" << endl; 
}
int main(int argc, char *argv[]){

	// logo sample 

	cout << " __    __  _______   __    __    " << endl; 
	cout << "/  |  /  |/       \\ /  |  /  |  " << endl;
	cout << "$$ |  $$ |$$$$$$$  |$$ | /$$/    " << endl;
	cout << "$$ |__$$ |$$ |__$$ |$$ |/$$/     " << endl;
	cout << "$$    $$ |$$    $$< $$  $$<      " << endl;
	cout << "$$$$$$$$ |$$$$$$$  |$$$$$  \\    " << endl;
	cout << "$$ |  $$ |$$ |  $$ |$$ |$$  \\   " << endl;
	cout << "$$ |  $$ |$$ |  $$ |$$ | $$  |   " << endl;
	cout << "$$/   $$/ $$/   $$/ $$/   $$/    " << endl;
	cout << "\t \t \t By ABDO10 - Greetz mathio.DZ \n" << endl;

	if (argc < 3 ) {
		Help();
		cerr << " [Example] : " << argv[0] << " 5d41402abc4b2a76b9719d911017c592 " << " /tmp/wordlist.txt" << endl; 
		return 2;	
	}

	// variables' Table  
    fstream file; 
    string word ;   
	string hash = argv[1] ; 
    string wordlist = argv[2];
    int times = 0;  
  
    // opening file 
    file.open(wordlist.c_str());
    if (!file){
    	cerr << " [-] cannot find the wordlist ." << endl;
    }

    cout << endl ; 				// starting of bruting 
    while (file >> word) 
    {

    	times += 1 ;  

    	if (md5(word) == hash ) {
    		cout << "\n [+] Hash Decrypted ("<<hash<< "): " << word << endl;
    		cout << "  \\__ Successfully Decrypted in " << times << " Try " << endl << endl; 
    		return 1;
    	}
    	else {
    		cout << " [-] Wrong : (" << md5(word) << ") : " << word << endl;
    	}

	}
	cout << " [-] Decryption Failed in " << times << " Try " << endl << endl;     


    return 0;
}

