im=imread('F:/MATLAB/c.jpg');
im=rgb2gray(im);
i2 = im;
mask = ones(3,3);

for i = 2: size(im,1)-1
  for j = 2: size(im,2)-1
    neigh = i2(i-1:i+1,j-1:j+1);
    im(i,j) = max(neigh(logical(mask)));
    end
end

 for i = 2: size(im,1)-1
  for j = 2:  size(im,2)-1
    neigh = i2(i-1:i+1,j-1:j+1);
    im(i,j) = min(neigh(logical(mask)));
    end
    end
    
    
figure,imshow(im);
figure,imshow(i2);