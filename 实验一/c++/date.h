//Copyright 2008 Google Inc

//BSD

//信1603 李敦岳 20163520

//声明一个时间类Date，有三个私有变量year，month，day

//获取year，month，day的值，输出前一天，后一天

//判断输入年份是否为闰年，输入数值是否有异常值

//显示中文日期和英文日期，显示今天星期几并打印日历

//*******date.h*********

#ifndef 时间类_时间类_data.h 
#define 时间类_时间类_data.h
class Date

//时间类，获取年月日信息，并实现一些功能

{
public:
	Date();   //无参构造函数
	Date(int y,int m,int d);    //构造函数
	~Date();    //析构函数
	void SetYear(int y);    //获取参数值
	void SetMonth(int m);   
	void SetDay(int d);
	int GetYear();       //返回参数值
	int GetMonth();
	int GetDay();
	void GetTomorrow();   //计算后一天
	void GetYesterday();  //计算前一天
	bool IsleapYear();     //判断是否为闰年
	void ErrorInput();     //判断输入是否异常
	void DisplayChineseDate();   //中文日期
	void DisplayAmericaDate();    //英文日期
	void Leapyear();    //是否是闰年
	void NumbersOfWeek();   //计算星期几
	void PrintCalendar();  //打印日历
private:
	int year;   //三个私有变量
	int month;
	int day;

};//class Date
#endif //时间类_时间类_data.h