/*Area of the Rectangle
  Perimeter of the Rectangle*/
  #include <stdio.h>
  void main()
  {
    float length, width, area, perimeter;
    printf ("Enter Your Length Value: ");
    scanf ("%f", & length);
    printf ("Enter Your Width Value: ");
    scanf ("%f", & width);
    area = length * width;
    perimeter = 2 * length + width;
    printf ("Area of the Rectangle is %f\n", area);
    printf ("Perimeter of the Rectangle is %f\n", perimeter);
}
