#include <iostream>

int main(){
    while(true){
        std::cout<<"1: Print Help "<<std::endl;

        std::cout<<"2: Print Exchange Stats "<<std::endl;
        
        std::cout<<"3: Make an Offer "<<std::endl;

        std::cout<<"4: Make a Bid "<<std::endl;

        std::cout<<"5: Print Wallet "<<std::endl;

        std::cout<<"6: Continue "<<std::endl;

        std::cout<<"================"<<std::endl;

        std::cout<<"Choose from 1-6"<<std::endl;

        int userOption;
        std::cin>>userOption;

        std::cout<<"You entered "<<userOption<<std::endl;


        if(userOption==0)//bad input
        {
            std::cout<<"Invalid Choice. Choose 1-6"<<std::endl;
        }

        if(userOption==1)//bad input
        {
            std::cout<<"Help- Your aim is to make money. Analyse the market and make bids and offers"<<std::endl;
        }

        if(userOption==2)//bad input
        {
            std::cout<<"Market Looks good"<<std::endl;
        }

        if(userOption==3)//bad input
        {
            std::cout<<"Mark and offer - enter the amount"<<std::endl;
        }

        if(userOption==4)//bad input
        {
            std::cout<<"Make a bid - enter the amount"<<std::endl;
        }

        if(userOption==5)//bad input
        {
            std::cout<<"Your wallet is empty"<<std::endl;
        }

        if(userOption==6)//bad input
        {
            std::cout<<"Going to next time frame"<<std::endl;
        }
    }
    return 0;
}