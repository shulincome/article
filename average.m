close all;
clear;
clc;
%��ȡͼ��ĻҶ�ƽ��ֵ
i=imread('C:\Users\shulin\Desktop\ͼ������\300nm\����ˮ\P49240000.tif');
i = double(i);
[m,n]=size(i);
s=0;
for x=1:m
    for y=1:n
        s = s+i(x,y);
    end
end
a3 = s/(m*n);