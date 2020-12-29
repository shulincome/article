img = imread('G:\学位论文GIT\article\图像整理\330nm\纯海水\P59050000.tif');
[height,width,~]  =size(img);
% 使用2种方法进行下采样
% sub_1 = img(1:2:end,1:2:end)
sub_2 = imresize(img,[height/2,width/2],'bilinear');
imshow(sub_2)
