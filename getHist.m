clc;
clear;
close all;
%获取平滑的直方图
src = imread("G:\学位论文GIT\article\处理后图像\330nm\400um\P00290000_imCp1.png");
imhist(src)
[h,x] = imhist(src);
h = smooth(h,7);
plot(x,h)
