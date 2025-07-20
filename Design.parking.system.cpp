#include<iostream> 
#include<vector> 

using namespace std; 

class ParkingSystem{
public: 
     int big, medium, small; 
     ParkingSystem(int big, int medium, int small){
       this->big= big; 
       this->medium=medium; 
       this->small=small; 
     }
     bool addCar(int carType) {
       if(carType==1 && big>0){
         --big; 
         return true; 
       }else if(carType==2; medium>0){
         --medium; 
         return true; 
       }else if(small>0){
         --small; 
         return true; 
       }
       return false; 
     }
     
};
int main(){
  vector<string> commands ={"ParkingSystem", "addCar", "addCar", "addCar", "addCar"}; 
  vector<vector<int>> inputs = {{1,1,0}, {1}, {2}, {3},{1}}; 
  ParkingSystem* parking = nullptr; 
  for(int i=0; i<commands.size(); ++i){
    if(commands[i]=="ParkingSystem"){
      int big = inputs[i][0]; 
      int medium = inputs[i][1]; 
      int small = inputs[i][2]; 
      parking = new ParkingSystem(big,medium,small); 
      cout << "null" << endl; 
    }else {
      int carType = inputs[i][0];
      bool res = parking->addCar(carType); 
      
      cout << boolalpha << res<<endl; 
      
    }
  }
  return 0; 
  
}
