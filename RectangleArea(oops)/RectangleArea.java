class Rectangle{
   public
    int length;
    int width;
    int height;
    Rectangle(int l, int w){
        length = l;
        width = w;
    }
    Rectangle(int l, int w, int h){
        length = l;
        width = w;
        height = h;
    }
    int area(){
        int area = length*width;
        return area;
    }
    int volume(){
        int volume = length*width*height;
        return volume;
    }
}
public class RectangleArea{
public static void main(String[]args){
    Rectangle rectangle1 = new Rectangle(5,10);
    Rectangle rectangle2 = new Rectangle(5,10,7);
    System.out.print(rectangle1.area() + "   ");
    System.out.print(rectangle2.volume());
}
}
