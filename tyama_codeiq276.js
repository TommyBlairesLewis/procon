for(R=[n=0];++n<17;)for(i=-1;++i<40960;R[i]=n-1?(n+5)/(n+6)*R[i]+1/(n+6)*~~z^0:~~z)for(X=i/256%1*(11*n-1),Y=(i>>8)/160*(7*n-1),z=0,k=4;k--;z+=(Z*Z*4999+8999)/65536%1*255*(k&1?X%1:1-X%1)*(k&2?Y%1:1-Y%1))Z=~~X+k%2+(~~Y+k/2^0)*11*n
return'256,160,'+R