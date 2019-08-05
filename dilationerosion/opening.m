im = zeros(100,100);
im(25:75,25:75) = 1;
im(15:23,25:75) = 1;
im(24,45:50) = 1;
i3=im;

i2 = im;
mask = ones(3,3);
for i = 2: 99
  for j = 2: 99
    neigh = i2(i-1:i+1,j-1:j+1);
    im(i,j) = min(neigh(logical(mask)));
    end
    end
    i2 =im;
 for i = 2: 99
  for j = 2: 99
    neigh = i2(i-1:i+1,j-1:j+1);
    im(i,j) = max(neigh(logical(mask)));
    end
    end
    
    
figure,imshow(i3);
figure,imshow(im);
figure,imshow(i3-im);