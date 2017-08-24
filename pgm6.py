import sys

def copy(file1,file2):
	f1=open(file1)
	f2=open(file2,"w+")
	text=f1.read()
	
	f2.write(text)
	
	

if __name__=='__main__':
	if(len(sys.argv)>2):
		file1,file2=sys.argv[1],sys.argv[2]
		copy(file1,file2)
	else:
		print "no sufficient arguments"