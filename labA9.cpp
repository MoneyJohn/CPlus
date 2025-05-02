#include<iostream>
#include<string>

//question 1
struct Workout{
    std::string activityName;
    int durationInMinutes;
    int caloriesBurned;
};

//question 2
struct Ticket{
    std::string movieName;
    std::string seatNumber;
    float price;
};

//question 3
struct Item{
    std::string itemName;
    int quantity;
    float pricePerItem;
};

//question 4
enum Status{InTransit, Delivered, Returned};
struct Package{
    float weight;
    std::string destinationCity;
    Status status;
};



int main(){
    //question 1
    Workout w;
    std::cout<<"Activity: "<<std::endl;
    std::cin>>w.activityName;
    std::cout<<"Duration: "<<std::endl;
    std::cin>>w.durationInMinutes;
    std::cout<<"Calories: "<< std::endl;
    std::cin>>w.caloriesBurned;
    std::cout<<"Workout Summary: "<<std::endl;
    std::cout<<w.activityName<<" for "<<w.durationInMinutes<<" burned "<<w.caloriesBurned<< " calories."<<std::endl;

    //question 2
    Ticket t;
    std::cout<<"Movie: "<<std::endl;
    std::cin>>t.movieName;
    std::cout<<"Seat number: "<<std::endl;
    std::cin>>t.seatNumber;
    std::cout<<"Price: "<< std::endl;
    std::cin>>t.price;
    std::cout<<"Ticket Confirmation: "<<std::endl;
    std::cout<<"Movie: "<< t.movieName<<"\n Seat: "<<t.seatNumber<<"\n Price: $"<<t.price<<std::endl;

    //question 3
    Item item1;
    Item item2;
    std::cout<<"Item 1 Name: "<<std::endl;
    std::cin>>item1.itemName;
    std::cout<<"Quantity: "<<std::endl;
    std::cin>>item1.quantity;
    std::cout<<"Price per item: "<< std::endl;
    std::cin>>item1.pricePerItem;
    std::cout<<"Item 2 Name: "<<std::endl;
    std::cin>>item2.itemName;
    std::cout<<"Quantity: "<<std::endl;
    std::cin>>item2.quantity;
    std::cout<<"Price per item: "<< std::endl;
    std::cin>>item2.pricePerItem;
    float t1 = item1.quantity * item1.pricePerItem;
    float t2= item2.quantity * item2.pricePerItem;
    float total = t1 +t2;
    std::cout<<item1.itemName<< " x"<< item1.quantity<< " = $"<< t1<<std::endl;
    std::cout<<item2.itemName<< " x"<< item2.quantity<< " = $"<< t2<<std::endl;
    std::cout<<"Total = $"<<total<<std::endl;

    //question 4
    Package p;
    std::string sInput;
    std::string statusI[] = {"In Transit", "Delivered", "Returned"};
    std::cout<<"Weight: "<<std::endl;
    std::cin>>p.weight;
    std::cout<<"Destination: "<<std::endl;
    std::cin>>p.destinationCity;
    std::cout<<"Status: "<<std::endl;\
    std::cin>>sInput;
    if(sInput == "InTransit"){
        p.status = InTransit;
    }else if(sInput == "Delivered"){
        p.status = Delivered;
    }else if(sInput == "Returned"){
        p.status = Returned;
    }else{
        std::cout<<"Invalid"<<std::endl;
        return 1;
    }
    std::cout<<"Package to "<<p.destinationCity<< " ("<<p.weight<<"kg) is "<<statusI[p.status]<<std::endl;
}
