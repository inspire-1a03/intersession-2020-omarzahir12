# Omar Zahir: ELectronics for the Rest of Us!
<!--
Welcome to your project page for Electronics for the Rest of Us. You'll use this page to describe and showcase your work throughout the module. 
A place for each deliverable has been created below for you in this markdown document. 
Note that comments (such as this) will not appear in the final markdown document (which you can view with the "Preview" button).
-->


## Day 1
<!--
In this section, provide a ~250 word reflection on your first day of the module, and discuss why you're interested in this module and what you hope to take away from it.

You're also asked to insert a photo that represents your accomplishments on your first day. 
- Take a photo of you working or one of your circuits and upload it to the /docs/images/ folder of this repository. 
- Then, insert your photo into your document by modifying the markdown example that has been inserted below.
-->
Prior to this course I had some experience with GitHub as I am in Computer Science and it is primarily used for uploading code. However, we were using the command line version of GitHub, so this was my first time interacting with GitHub on the web. Similarly, I was also not aware of the great resource also provided by GitHub, GitHub pages. Previously, any website or web development that I had done was through the HTML and CSS development tools, but thanks to GitHub Pages, I realize it is actually really easy and intuitive to set up a simple web page for a small task, not to mention the fact that it is hosted by GitHub so it's free. Similarly, I also had experience with Markdown as I was creating README files for some of my projects, but I did not know about all the interesting and intricate features like creating tables, embedding pictures and video, and even adding emoji!

As far as Arduino is considered, I am honestly blown away by the potential and creative possibilities. Me and my friends once used an Arduino for one of our science fair projects in high school but I did not actually get a chance to work on the Arduino part, and now I regret it big time. Being interested in coding, I always have a complaint about how the result of our code is hardly ever tangible, and we can't interact with it, but Arduino makes it possible to test and experiment with your code and see those results in the real world.

<!--
Inserting an image takes the form: 
![image alt text](url/to/photo "Logo Title Text")
See the following webpage for more information: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#images
Replace the elements below to insert your picture.
--> 
![Button Pressed](images/IMG_4503[1].JPG "This is the Button Pressed")
![Button Unpressed](images/IMG_4504[1].JPG "This is the Button not Pressed!")

## Day 2
<!--
Upload your fully-commented Arduino sketch from your final Day 2 build task--a thermometer connected to an RDB LED--into your GitHub repository.
Provide a short (~150 words) summary of your work on this circuit:
- How does your device work?
- What was challenging? 
- What worked? What didn't? 
- Be sure to link to your code (in your GitHub repository) in the text of your response.
-->

The device uses the thermistor as an input for the temperature and does so by providing power to one end of the thermistor, and having the other end connected to both the ground and an input pin that will send the temperature data to the computer. Based on the reading, the computer will adjust the RGB LED colors which is connected to three other pins, each controlling one of the primary colors, which we already set up in the previous exercise.

I got stuck on this exercise for a bit because unlike for all the exercises prior, the circuit diagram was not graphical and was a bit unintuitive. While I understood most of it, the branching aspect of the diagram confused me, and to clarify the concept I had to view Dr. Jay's tutorial video, which made it very simple. I also learnt that the positive and negative rails on either side of the breadboard span only half the length, which is why I was getting NAN errors for a while.

This is the code:
[Thermometer Code](code/Thermometer_Code.ino "This is the Code!")
## Arduino build-off results
<!--
Upload your fully-commented Arduino sketch from the final product of your Arduino build-off into the top-level of your module GitHub repository.
In ~300 words, provide a final device description and product pitch: 
- What does it do? Use a table (created in markdown) to list and describe the features. You can use the template provided below. 
- Describe briefly how it works.
- How could it be used in everyday life (or maybe just in rare cases)? 
- Be sure to link to your code (in your GitHub repository) in the text of your response.
- Include a snippet of code using the ``` ``` characters to display the code properly. 
Finally, record a short (30 second) video of a 'product pitch' for your device. 
- Upload the video to Youtube, and use the sample code below to embed your video.
-->


<!--
Below is a general markdown table template. 
You can find more information at these links: 
- https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#tables

-->

| Feature | Description | Other Notes |
|---------|-------------|-------------|
|         |             |             |
|         |             |             |
|         |             |             |
|         |             |             |


<!--
Below is an example of embedding a YouTube video in a markdown document for use in GitHub pages. 
Note that this video won't show when previewing the document in GitHub--it only works on the GitHub pages webpage. 
- Once your YouTube video is uploaded, right click and select ```<> Copy embed code```. 
- You can paste this code directly into your markdown document. 
- Note that you may want to adjust the width and height parameters to make it fit well in your webpage
-->

<iframe width="789" height="444" src="https://www.youtube.com/watch?v=roVPfdigTYc" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>


## Final reflection & summary
<!--
In ~300 words:
- Summarize your experience in this module. What you learned, what you liked, what you found challenging.
- Reflect upon your learning and its relevance in your life.
-->
