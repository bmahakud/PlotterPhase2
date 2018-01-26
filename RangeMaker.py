


import sys

start=sys.argv[1]
end=sys.argv[2]
numBins=sys.argv[3]

binSize=(float(end)-float(start))/float(numBins)

print binSize
for a in range(0,int(numBins)):
     binEdge=float(start)+a*binSize
     print binEdge," ,",
 #    print "bibhui"



