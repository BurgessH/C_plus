//static_cast：隐式类型可以转换的，即用此类型
//reinterpret_cast:双方都不满足隐式类型转换
//const :常量与表达式的值不允许修改； const_cast<>:只能应用于指针和引用
//

void func(int & ra)
{
	cout<<"&a ="<<&a<<endl;
}

void func2(int & aa)
{
    cout<<"&aa ="<<aa<<endl;
}

int main()
{
//全隐类型转换
	float 	a = 5.6;
	int 	b = 5;
	a=static_cast<float>(b);
	b=static_cast<int>(a);
	
//半双隐式类型转换
	void *p; int*q;
	p=q;
	q=static_cast<int *>(p);


//双方都不满足隐式类型转换
	int a[]={1,2,3,4,5,6};
	int *p =(int *)(int(a)+1);//reinterpret_cast<int *>(reinterpret_cast<int>(a)+1);


//const_cast：只应用于引用与指针
	const int a=100;
	
	func(10);//常量与表达式的值不允许修改；
	
	//func2(const_cast<int &>(a));
	
	int *pi = const_cast<int *>(&a);
	*pi = 200;
	cout<<"a = "<<a<<"*pi = "<<*pi<<endl;
	





}