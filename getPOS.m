clc;
clear;
close all;
src = imread("C:\Users\shulin\Desktop\ͼ������\330nm\800um\P01210000.tif");
[m,n] = size(src);
figure(1)
imshow(src)
h = imrect;
pos = getPosition(h);%��ȡ����Ȥ������ĸ���
imCp = imcrop(src,pos);
figure(2)
imshow(imCp);