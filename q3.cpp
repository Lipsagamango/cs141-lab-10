#include <iostream>
using namespace std ;

class rectangle{
	public:double length ; //declaration of the length ;
	double breadth ; // declaration of the breadth of the rectangle;
	
	//declaration of the function for area and perimenter and other function to get the data;
	double area(void);
	double perimeter(void) ;
	void getLength(int len);
	void getBreadth(int bre); 
	
};
// declaration of all the function required in the class rectangle
void rectangle::getLength(int len){
	length = len;
}
void rectangle::getBreadth(int bre){
	breadth = bre;
}
double rectangle::perimeter(void){
	return 2*(breadth + length);
}
double rectangle::area(void) {
	return breadth*length;
}
//main function to evaluate the above class.
int main(){
	
	rectangle rect1,rect2;    //variable declaration for storing the return value .
	int peri1,peri2,area1,area2;
	int l1,l2,b1,b2;
	//asking the length and breadth for rectange 1;
	cout <<"enter length1:";
	cin >>l1;
	cout <<"enter breadth1:";
	cin >>b1;
	//asking the length and breadth for rectangle2;
	cout <<"enter length1:";
	cin >>l2;
	cout <<"enter breadth1:";
	cin >>b2;
	
	
	rect1.getLength(l1);    // stroring the length 
	rect1.getBreadth(b1);
	
	area1 = rect1.area();
	peri1 = rect1.perimeter();
	cout<< "area1:"<<area1<<endl;
	cout <<"perimeter1:"<<peri1<<endl;
	
	rect2.getLength(l2);
	rect2.getBreadth(b2);
	area2 = rect2.area();
	peri2 = rect2.perimeter();
	
	cout<< "area2:"<<area2<<endl;
	cout <<"perimeter2:"<<peri2<<endl;
	//comparing the area and the perimeter;
	if(peri1>peri2){
		cout<<"the perimeter of first rectangle is greater"<<endl;
	}
	else
		cout<<"the perimeter of the secand rectangle is greater"<<endl;
	if(area1>area2)
		cout<<"the area of the first rectange is greater"<<endl;
	else
		cout<<"the area of the secand rectange is greater"<<endl;
	
	return 0;
	
	
}
