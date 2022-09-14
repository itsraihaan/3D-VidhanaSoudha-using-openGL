# 3D Vidhana Soudha 
 This a 3D model of vidhana soudha designed using OPEN-GL
 
 In this project, i strive to obtain a 3-Dimensional Model from a normal 2D Image. The 
principle behind the working of the project is that, based on the intensity of the RGB values of a 
particular pixel, i increase the depth of the object. We achieve this by taking an image of 
.JPEG or .JPG form and use certain tools to obtain a Standard Template Library (.stl) File. This 
file format is widely used for 3D Modelling. Resizing is done internally when this process 
occurs, we specify the width and the depth scaling during the conversion. We specify only the 
width of the image as the aspect ratio is maintained during conversion.

we use this file and convert the file into an WavefrontObject(.obj) File. Wavefront Object files 
are mainly used in 3D printing and thus have all the necessary information to render a 3D Model. 
We use OpenGL for rendering of the object. We achieve this by using the Wavefront Object file 
as a List. This List contains all the vertices required for rendering the model. We make use of 
Material and Lighting API of OpenGL to make the model seem better. With all the data on hand 
we create a 3-Dimensional Quad Mesh of the Image.Wemake use of C with OpenGl for entire 
coding purpose along with some features of Windows. The OpenGl Utility is a Programming 
Interface. We use light and material functions to add luster, shade and shininess to graphical 
objects. The toolkit supports much functionalities like multiple window rendering, callback event 
driven processing using sophisticated input devices etc.
