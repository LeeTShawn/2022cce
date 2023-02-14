PImage img;
void setup(){
  size(400,400);
  img = loadImage("map.png");
}

void draw(){
  image(img, 0, 0);
}
