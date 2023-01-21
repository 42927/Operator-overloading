#include <iostream>
using namespace std;
class cube{
	private:
		
	double length;
	double width;
	double height;
	double sum;
	double subtract;
	double multiply;
	double division;
	double equal;
	
	public:
	cube (){
	} 	
	cube(double l,double w,double h){
	
		length = l;
		width = w;
		height = h;
		
	}
		void display(){
			cout<<"length"<<length<<endl;
			cout<<"width"<<width<<endl;
			cout<<"Height"<<height<<endl;
			
		}
		cube operator +(cube&temp){
			cube oper;
		oper.length= length+temp.length;	
		oper.width= width+temp.width;
		oper.height= height+temp.height;
		return oper;
			
		}
		cube operator -(cube&temp){
			cube oper;
		oper.length= length-temp.length;	
		oper.width= width-temp.width;
		oper.height= height-temp.height;
		return oper;
		}
		cube operator *(cube&temp){
			cube oper;
		oper.length= length*temp.length;	
		oper.width= width*temp.width;
		oper.height= height*temp.height;
		return oper;
		}
		cube operator /(cube&temp){
			cube oper;
		oper.length= length/temp.length;	
		oper.width= width/temp.width;
		oper.height= height/temp.height;
		return oper;
			
		}
		void operator =(cube&temp){
			cube oper;
		oper.length= length=temp.length;	
		oper.width= width=temp.width;
		oper.height= height=temp.height;
			
		}
		bool operator ==(cube&temp){
			return (length == temp.length) && (width == temp.width) && (height == temp.height);
		  
		}
	
	
};
int main() {
	cube c1(2.1,3.2,4.2);
	cube c2(2.1,3.2,2.2);
	cube result1 =c1+c2;
	cout<<"Addition"<<endl;
	result1.display();
	cout<<endl;
	
	cube result2 =c1-c2;
	cout<<"Subtraction"<<endl;
	result2.display();
	cout<<endl;
	
	cube result3 =c1*c2;
	cout<<"Multiplication"<<endl;
	result3.display();
	cout<<endl;
	
	cube result4 =c1/c2;
	cout<<"Division"<<endl;
	result4.display();
	cout<<endl;
	
	
	
	cout<<"Comparison"<<endl;
	if(c1==c2)
	{
		cout<<"1"<<endl;
		}
	else{
		cout<<"0"<<endl;
	}
	cout<<endl;
	
	cout<<"Equal"<<endl;
	c2=c1;
	c2.display();
	cout<<endl;
	
}
