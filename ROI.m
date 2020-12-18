clc;
clear;
close all;
src = imread("C:\Users\shulin\Desktop\图像整理\330nm\800um\P01210000.tif");
[m,n] = size(src);
%figure(1)
%imshow(src)
%h = imrect;
%pos = getPosition(h);%获取感兴趣区域的四个点
pos = [730.500000000000,814.500000000000,336,268.000000000000];
imCp = imcrop(src,pos);
figure(2)
imshow(imCp);
%获取灰度均值
i = double(imCp);
[m,n]=size(i);
s=0;
for x=1:m
    for y=1:n
        s = s+i(x,y);
    end
end
a3 = s/(m*n);