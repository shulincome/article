clc;
clear;
close all;
src = imread("G:\学位论文GIT\article\图像整理\310nm\纯海水\P54110000.tif");
[m,n] = size(src);
figure(1)
imshow(src)

h = imrect;
pos = getPosition(h);%获取感兴趣区域的四个点
imCp = imcrop(src,pos);
figure(2)
imshow(imCp);
imwrite(imCp,'test.png')