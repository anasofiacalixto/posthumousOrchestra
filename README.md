# posthumousOrchestra

Repo for the interactive installation Posthumous Orchestra, developed for Goldsmiths University of London

**In short**

Posthumous Orchestra - Utopias for times of post-digital nature is an installation with real, dead cicadas that sing through the assistance of technology, triggered by deforestation data from the past two decades  in the UK. The smaller the tree cover area of the city, the louder their singing. The prompt was to create an installation on the topics of nature, preservation and tech using C++ and Raspberry Pi. A teaser can be seen at: https://vimeo.com/929858713

**Concept and Background Research**

The project originated from research on how humans could share a bit of their life with a creature that has died without the chance of having a voice. I'm an advocate for the protection of insects, as their appearance often unfairly leads to unjustifiable acts of violence and torture against them. The project aimed to show cicadas and humans in a position of equity and raise awareness on environmental balance.

One of the main concerns of the project was ethics. How can humans respectfully handle biological elements/data, and which questions arise from this relationship? How can humans serve the insects in this case? In which way could a common language be established between both? 
The spatial arrangement was key in respectfully presenting the cicadas. They were carefully positioned between stone columns inside the church, simulating their natural behaviour as if perched in trees. This setup enables humans and post-digital cicadas to coexist discreetly, observing each other, eliminating any experimental aspect.

**Technical Implementation**

As per my usual approach to physical computing, I aimed for the most straightforward technical implementation possible while still achieving results that maintain a sense of mystery for the audience, leaving them unsure of how the project works and lending it a somewhat mystical atmosphere.

The research started from investigating how cicadas produce sound. In their thoraxes, they have thin patches on both sides of their exoskeletons known as tymbals. When males want to get females' attention for reproduction, they flex their muscles to vibrate these tymbals at a rapid pace. Each vibration sets off a sound.
To replicate that, I placed the cicadas on top of a small vibration motor, but since they needed to be put on an angle, I firmed the motor with glue. When the motor is on, it shakes the middle of the thorax at a 45º angle, which causes the tymbals to produce a similar sound to when they are alive, but much lower.

After placing each of them in a rectangular piece of cardboard, all of the motors were wired and lined up, creating two separate streams of data. Both inputs were deforestation data from the United Kingdom between 2000 and 2022, each stream with the tree cover loss data of different groups of cities. I combined the data from different cities into two groups, and mapped the total area covered in 2000 as 100%, and the following years consequently. The percentage was added to the Arduino code and controls the motors: the bigger the area, the lower the vibration. As deforestation increases, the motors vibrate with more intensity, and the cicadas sing louder.

**Reflection and Future Development**

It was challenging to combine a critical investigation of the themes, and possible settings in a gallery environment. I have learned a lot about these, and how to imagine more robust projects. In parallel, I underestimated the complexity of the wiring, and how to keep that amount of connections visually neat.
Overall, the main goal of the project was achieved, but I see room for further development. In the future, I'll map cicadas to different streams of data independently of their position in the installation, creating a more complex and varied pattern of sound. It would also be interesting to have the cicadas in different parts of the room, to explore how the sound can be distributed in space.


**References **

Robojax. "Vibration Motor with Arduino Tutorial." Robojax, [Accessed 22.02.2024], [https://robojax.com/learn/arduino/?vid=robojax_vibration_motor].

Techzeero. "Vibration Motor with Arduino." Techzeero, [Accessed 22.02.2024], [https://techzeero.com/arduino-tutorials/vibration-motor-with-arduino/].

"Necrobotics." Wikipedia, [Accessed 07.03.2024], [https://en.wikipedia.org/wiki/Necrobotics].

"Cicada Sound." Ask A Biologist, [Accessed 29.02.2024], [https://askabiologist.asu.edu/cicada-sound]

Hansen, M.C., P.V. Potapov, R. Moore, et al. 2013. "High-Resolution Global Maps of 21st-Century Forest Cover Change." Science 342: 850–53. Data available on-line from: https://glad.earthengine.app/view/global-forest-change.

Harris, N.L., D.A. Gibbs, A. Baccini, et al. 2021. "Global maps of twenty-first century forest carbon fluxes." Nature Climate Change 11: 234-240. https://doi.org/10.1038/s41558-020-00976-6. Data available on-line from: https://data.globalforestwatch.org/

Global Forest Watch. "United Kingdom Forests Map." Global Forest Watch, [Accessed 12.03.2024], [https://www.globalforestwatch.org/map/country/GBR/?lang=en&mainMap=eyJzaG93QW5hbHlzaXMiOnRydWV9&map=eyJjZW50ZXIiOnsibGF0Ijo1My44OTE4NzE4NDM5ODY4LCJsbmciOi0xLjk2MzAyOTU1MTI2NDM5NjN9LCJ6b29tIjo0LjU5ODY1NTk1MzMzOTYwMSwiY2FuQm91bmQiOmZhbHNlfQ%3D%3D&mapMenu=eyJzZWFyY2hUeXBlIjoiZGF0YXNldCJ9&mapPrompts=eyJvcGVuIjp0cnVlLCJzdGVwc0tleSI6InN1YnNjcmliZVRvQXJlYSJ9&menu=eyJkYXRhc2V0Q2F0ZWdvcnkiOiJmb3Jlc3RDaGFuZ2UiLCJtZW51U2VjdGlvbiI6ImRhdGFzZXRzIn0%3D].

Global Administrative Areas Database, version 3.6. Available at http://gadm.org/

