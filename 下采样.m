img = imread('ѹ��֤����.jpg');
[height,width,~]  =size(img);
% ʹ��2�ַ��������²���
% sub_1 = img(1:2:end,1:2:end)
sub_2 = imresize(img,[height/2,width/2],'bilinear');
imshow(sub_2)
