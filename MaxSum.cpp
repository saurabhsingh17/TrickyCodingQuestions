// author:SAURABH SINGH
#include<bits/stdc++.h>
using namespace std;
class Customer{
public:
string name;
int salary;
Customer(string name, int salary ){
    this->name=name;
    this->salary=salary;
}};
bool compare(Customer e1,Customer e2){
    if(e1.salary==e2.salary)
    return e1.name < e2.name;
    return e1.name>e2.name;
}
int main(){
int n,k;
cin>>k>>n;
vector<Customer> vec;
for(int i=0;i<n;i++){
    string name;
    int salary;
    cin>>name>>salary;
    Customer cust(name,salary);
    vec.push_back(cust); 
}
sort(vec.begin(),vec.end(),compare);
for(auto i:vec){
    if(i.salary>=k)
    cout<<i.name<<" "<<i.salary<<endl;
}

    return 0;
}