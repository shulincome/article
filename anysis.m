clc;
clear;
close all;

src1 = imread("G:\学位论文GIT\article\图像整理\310nm\纯海水\P54110000.tif");
src2 = imread("G:\学位论文GIT\article\图像整理\310nm\100um\P54340000.tif");
src3 = imread("G:\学位论文GIT\article\图像整理\310nm\200um\P55080000.tif");
src4 = imread("G:\学位论文GIT\article\图像整理\310nm\400um\P55380000.tif");
src5 = imread("G:\学位论文GIT\article\图像整理\310nm\800um\P56050000.tif");

%16位灰度图像压缩转换为8位灰度图像
src1 = im2uint8(src1);
src2 = im2uint8(src2);
src3 = im2uint8(src3);
src4 = im2uint8(src4);
src5 = im2uint8(src5);

%选取感兴趣区
pos = [79.9612005856517,493.759150805271,1931.05710102489,1037.49341142021];
imCp1 = imcrop(src1,pos);
imCp2 = imcrop(src2,pos);
imCp3 = imcrop(src3,pos);
imCp4 = imcrop(src4,pos); 
imCp5 = imcrop(src5,pos);

%纹理特征分析
t1 = statxture(imCp1,1);
t2 = statxture(imCp2,1);
t3 = statxture(imCp3,1);
t4 = statxture(imCp4,1);
t5 = statxture(imCp5,1);

figure(1)
imshow(imCp1);
