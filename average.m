close all;
clear;
clc;
%获取图像的灰度平均值
i=imread('C:\Users\shulin\Desktop\图像整理\300nm\纯海水\P49240000.tif');
i = double(i);
[m,n]=size(i);
s=0;
for x=1:m
    for y=1:n
        s = s+i(x,y);
    end
end
a3 = s/(m*n);