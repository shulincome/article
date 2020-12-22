clc;
clear;
close all;
src1 = imread("G:\学位论文GIT\article\图像整理\300nm\纯海水\P59050000.tif");
src2 = imread("G:\学位论文GIT\article\图像整理\300nm\100um\P59310000.tif");
src3 = imread("G:\学位论文GIT\article\图像整理\300nm\200um\P00020000.tif");
src4 = imread("G:\学位论文GIT\article\图像整理\300nm\400um\P00260000.tif");
src5 = imread("G:\学位论文GIT\article\图像整理\300nm\800um\P01210000.tif");
src1 = im2uint8(src1); 
src2 = im2uint8(src2);
src3 = im2uint8(src3);
src4 = im2uint8(src4);
src5 = im2uint8(src5);
t1 = statxture(src1,1);
t2 = statxture(src2,1);
t3 = statxture(src3,1);
t4 = statxture(src4,1);
t5 = statxture(src5,1);

% figure(1)
% imhist(src300);
% figure(2)
% imhist(src310);
% figure(3)
% imhist(src330)