#include<iostream>
using namespace std;
int main(){
    //Vowels
    char character;
    cin>> character;
    switch (character){
        case 'a':
        cout<<"Vowel"<<endl;
        break;
        case 'e':
        cout<<"Vowel"<<endl;
        break;
        case 'i':
        cout<<"Vowel"<<endl;
        break;
        case 'o':
        cout<<"Vowel"<<endl;
        break;
        case 'u':
        cout<<"Vowel"<<endl;
        break;
        default:
        cout<<"Consonants"<<endl;
    }
    
    //Second method //problem 
    char letter;
    cin>>letter;

    if (letter='a'){
        cout<<"Vowel"<<endl;
    }
    else if (letter='i'){
        cout<<"Vowel"<<endl;
    }
    else if (letter='e'){
        cout<<"Vowel"<<endl;
    }
    else if (letter='o'){
        cout<<"Vowel"<<endl;
    }
    else if (letter='u'){
        cout<<"Vowel"<<endl;
    }
    
    else(letter !='a','e','i','o','u');
        {cout<<"Consonants"<<endl;
    }

    return 0 ;
 }
