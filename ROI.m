clc;
clear;
close all;
src = imread("C:\Users\shulin\Desktop\ͼ������\330nm\800um\P01210000.tif");
[m,n] = size(src);
%figure(1)
%imshow(src)
%h = imrect;
%pos = getPosition(h);%��ȡ����Ȥ������ĸ���
pos = [730.500000000000,814.500000000000,336,268.000000000000];
imCp = imcrop(src,pos);
figure(2)
imshow(imCp);
%��ȡ�ҶȾ�ֵ
i = double(imCp);
[m,n]=size(i);
s=0;
for x=1:m
    for y=1:n
        s = s+i(x,y);
    end
end
a3 = s/(m*n);