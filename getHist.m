clc;
clear;
close all;
%��ȡƽ����ֱ��ͼ
src = imread("G:\ѧλ����GIT\article\�����ͼ��\310nm\����ˮ\P54110000_imCp1.png");
imhist(src)
[h,x] = imhist(src);
h = smooth(h,7);
plot(x,h)
