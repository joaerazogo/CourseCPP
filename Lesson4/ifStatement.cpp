/*Goal: practice if-else statements in C++
**Write a program to select the best pet. 
*/

/* "Do you want a pet with fur(f), feathers(t), or scales(s)?"
"You want a pet with scales. Do you want the pet to live in water(w), on land(l), or both(b)? */

#include<iostream>

int main()
{
    char skin, location;
    std::cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
    std::cin>>skin;
    std::cout<<skin<<"\n";

    //Use if-else statements to control program flow
    if(skin == 'f'){
        std::cout<<"Get a dog"<<"\n";
    }else if(skin = 't'){
        std::cout<<"Get a bird"<<"\n";    
    }else if(skin = 's'){
        std::cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
        std::cin>>location;
        std::cout<<location<<"\n";

        //Use if-else statements to control program flow

        if(location == 'w'){
           std::cout<<"Get a fish"<<"\n";  
        }else if(location == 'l'){
           std::cout<<"Get a gecko"<<"\n";
        }else{
           std::cout<<"Get a frog"<<"\n";
        }
    }else{
        std::cout << "Please, enter a valid value " << std::endl;
    }

   return 0;
}