// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main()
{
	int area,width,height,length;  // all side height,length,width
	
	printf("Enter the width of the rectangular prism : "); // userinput width
	scanf("%d",&width);
	
	printf("Enter the height of the rectangular prism : "); // userinput height 
	scanf("%d",&height);
	
	printf("Enter the length of the rectangular prism : "); // userinput length
	scanf("%d",&length);
	
	area = 2*(width*height + height*length + length*width); // so formula is a=2(wh+hl+lw) 
	
	printf("So the surface area rectangular prism is : %d",area); // total surface area!
}
