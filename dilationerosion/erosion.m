im = zeros(100,100);
im(25:75,25:75) = 1;
i2 = im;
mask = ones(3,3);
for i = 2: 99
  for j = 2: 99
    neigh = i2(i-1:i+1,j-1:j+1);
    im(i,j) = min(neigh(logical(mask)));
    end
    end
    
figure,imshow(im);
figure,imshow(i2);
figure,imshow(im-i2);