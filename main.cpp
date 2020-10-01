/**

- project : hash real killer By ABDO10 
- Version : 1.0 
- abdo10_dz@protonmail.com || defacerdz@gmail.com
- Developed md5 algorithm to md5 hash killer 
- Copyrights reserved by ABDO10 (C) 2020 for this Document
- Copyrights of both md5.h header and md5.cpp source codes are resreved by its owner (   Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All
rights reserved.)   

**/
#include <iostream>	     		// output & input stream  
#include <fstream>   			// files stream
#include "src/md5.cpp"			// md5  
#include "src/sha1.cpp"			// sha1 
#include "src/sha224.cpp"		// sha224
#include "src/sha256.cpp"		// sha256
#include "src/sha384.cpp"		// sha384
#include "src/sha512.cpp"		// sha512

using namespace std; 		// using standard for all functions 

// help cluase 
void Help(){

	cerr << "[arguments] "  << endl; 
	cerr << "--help/-h  \t\t show this help menu" << endl << endl; 
	cerr << " [!] Usage: " << endl;
}

// main 
int main(int argc, char *argv[]){

	// added to help 
	string program = argv[0];
	string method = " " + program + " [HashType] [hash] [wordlist] \n" ; 
    string example = " [Example] : " + program + " md5 5d41402abc4b2a76b9719d911017c592 /tmp/wordlist.txt\n\n";

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

	if (argc < 4 ) {					//while line input not correct 
		Help();
		cerr << method << example;
		return 4;	
	}


    fstream file; 						// wordlist reader 
    string word ;						// save data to string  
    string hashtype = argv[1];			// sending hashtype a value 
	string hash = argv[2] ;				// hash with a string value  
    string wordlist = argv[3];			// same of them 
    int times = 0 ;						// counting trying times 

  
    // opening file 
    file.open(wordlist.c_str());		// reading wordlist 
    if (!file){							// while error 
    	cerr << " [-] cannot find the wordlist ." << endl;
    	return 3;
    }

    cout << endl ; 				// starting of bruting 
    while (file >> word) 		// giving word data from the file we select 
    {

    	times += 1 ; 

    	if (hashtype == "md5") { 		// bruting hash with hashtype mentioned in argv[1]

    		if (md5(word) == hash ) {
    			cout << "\n [+] Hash Decrypted ("<<hash<< "): " << word << endl;
    			cout << "  \\__ Successfully Decrypted in " << times << " Try " << endl << endl; 
    			return 2;
    		}
    		else {
    			cout << " [-] Wrong : (" << md5(word) << ") : " << word << endl;
    		}
    	}
    	else if (hashtype == "sha1"){
    		if (sha1(word) == hash ) {
    			cout << "\n [+] Hash Decrypted ("<<hash<< "): " << word << endl;
    			cout << "  \\__ Successfully Decrypted in " << times << " Try " << endl << endl; 
    			return 2;
    		}
    		else {
    			cout << " [-] Wrong : (" << sha1(word) << ") : " << word << endl;
    		}

    	}
    	else if (hashtype == "sha224"){
    		if (sha224(word) == hash ) {
    			cout << "\n [+] Hash Decrypted ("<<hash<< "): " << word << endl;
    			cout << "  \\__ Successfully Decrypted in " << times << " Try " << endl << endl; 
    			return 2;
    		}
    		else {
    			cout << " [-] Wrong : (" << sha224(word) << ") : " << word << endl;
    		}

    	}
    	else if (hashtype == "sha256"){
    		if (sha256(word) == hash ) {
    			cout << "\n [+] Hash Decrypted ("<<hash<< "): " << word << endl;
    			cout << "  \\__ Successfully Decrypted in " << times << " Try " << endl << endl; 
    			return 2;
    		}
    		else {
    			cout << " [-] Wrong : (" << sha256(word) << ") : " << word << endl;
    		}

    	}
    	else if (hashtype == "sha384"){
    		if (sha384(word) == hash ) {
    			cout << "\n [+] Hash Decrypted ("<<hash<< "): " << word << endl;
    			cout << "  \\__ Successfully Decrypted in " << times << " Try " << endl << endl; 
    			return 2;
    		}
    		else {
    			cout << " [-] Wrong : (" << sha384(word) << ") : " << word << endl;
    		}

    	}
    	else if (hashtype == "sha512"){
    		if (sha512(word) == hash ) {
    			cout << "\n [+] Hash Decrypted ("<<hash<< "): " << word << endl;
    			cout << "  \\__ Successfully Decrypted in " << times << " Try " << endl << endl; 
    			return 2;
    		}
    		else {
    			cout << " [-] Wrong : (" << sha512(word) << ") : " << word << endl;
    		}

    	}
    	else {
    		Help();
		    cerr << method << example;
		    return 1;
    	}

	}
	cout << " [-] Decryption Failed in " << times << " Try " << endl << endl;     


    return 0;
}

