clc;
clear;
close all;
%获取平滑的直方图
src = imread("G:\学位论文GIT\article\处理后图像\310nm\纯海水\P54110000_imCp1.png");
imhist(src)
[h,x] = imhist(src);
h = smooth(h,7);
plot(x,h)
