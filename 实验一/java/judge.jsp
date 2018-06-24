<!--获取主页面的用户名等信息-->
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body> 
   <%
   <!--从主页面获取登录信息-->
   String str1 = request.getParameter("text1"); <!--获取用户名-->
   String str2 = request.getParameter("text2");  <!--获取密码-->
   
   <!--进行判断-->
   
   if(str1.equals("jsj")&&str2.equals("123")) 
   {
	   response.sendRedirect("success.jsp"); <!--前往success.jsp-->
   }
   else
   {
	   response.sendRedirect("fail.html"); <!--前往fail.html-->
   }
   %>
  
</body>
</html>