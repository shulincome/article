clc;
clear;
close all;
%��ȡƽ����ֱ��ͼ
src = imread("G:\ѧλ����GIT\article\�����ͼ��\330nm\400um\P00290000_imCp1.png");
imhist(src)
[h,x] = imhist(src);
h = smooth(h,7);
plot(x,h)
