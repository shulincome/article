clc;
clear;
close all;
src = imread("G:\ѧλ����GIT\article\ͼ������\310nm\����ˮ\P54110000.tif");
[m,n] = size(src);
figure(1)
imshow(src)

h = imrect;
pos = getPosition(h);%��ȡ����Ȥ������ĸ���
imCp = imcrop(src,pos);
figure(2)
imshow(imCp);
imwrite(imCp,'test.png')