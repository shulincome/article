clc;
clear;
close all;
src = imread("C:\Users\shulin\Desktop\图像整理\330nm\800um\P01210000.tif");
[m,n] = size(src);
figure(1)
imshow(src)
h = imrect;
pos = getPosition(h);%获取感兴趣区域的四个点
imCp = imcrop(src,pos);
figure(2)
imshow(imCp);