dungeonGen
==========

A procedural maze / dungeon generator.

I am writing this to explore procedural dungeon generation for (at least initially) basic RPG dungeons.  Maze generation was added as a way to connect rooms together, in addition to the fact that mazes are kind of cool in general.

The maze code is a recursive depth first search that, absent any rooms, will create a perfect maze covering all possible spaces in the map grid.  Corridors bending randomly, sometimes, or only if necessary is included.  Some semi-working dead-end trimming code is also available.

The room code is essentially randomly placed rectangular space throughout the map.  There are rules for min and max room sizes, how many rooms, how densely populated they are, corridor types among other variables.  The random menu item shows off how diverse these choices can be.  (Some settings look more appealing than others!)

Some interesting pages where I've gained inspiration and concepts can be found here:

http://donjon.bin.sh/dungeon/about/
http://pcg.wikidot.com
http://weblog.jamisbuck.org/2011/2/7/maze-generation-algorithm-recap
http://www.astrolog.org/labyrnth/algrithm.htm
http://en.wikipedia.org/wiki/Maze_generation_algorithm

I've also done a cave generation project using cellular automata that is fairly straightforward that may be of interest. The concept and some linked python source can be found here:
http://roguebasin.roguelikedevelopment.org/index.php?title=Cellular_Automata_Method_for_Generating_Random_Cave-Like_Levels




---------


The MIT License (MIT)
Copyright (c) 2013 Jeremy Stone

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

In addition I think it'd be cool to know if you've used this code for something interesting or meaningful.  Code contributions welcome.

