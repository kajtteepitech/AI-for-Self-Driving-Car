[![GitHub contributors](https://img.shields.io/github/contributors/kajtteepitech/AI-for-Self-Driving-Car?style=for-the-badge)](https://github.com/kajtteepitech/AI-for-Self-Driving-Car/graphs/contributors)
[![GitHub forks](https://img.shields.io/github/forks/kajtteepitech/AI-for-Self-Driving-Car?style=for-the-badge)](https://github.com/kajtteepitech/AI-for-Self-Driving-Car/network)
[![GitHub stars](https://img.shields.io/github/stars/kajtteepitech/AI-for-Self-Driving-Car?style=for-the-badge)](https://github.com/kajtteepitech/AI-for-Self-Driving-Car/stargazers)
[![GitHub issues](https://img.shields.io/github/issues/kajtteepitech/AI-for-Self-Driving-Car?style=for-the-badge)](https://github.com/kajtteepitech/AI-for-Self-Driving-Car/issues)
[![GitHub license](https://img.shields.io/github/license/kajtteepitech/AI-for-Self-Driving-Car?style=for-the-badge)](https://github.com/kajtteepitech/AI-for-Self-Driving-Car)
[![LinkedIn][linkedin-shield]](https://www.linkedin.com/in/ilia-s-a43b3b203/)
# AI-for-Self-Driving-Car
Simple AI to manipulate a car

## Requirements

 - [Make](https://www.gnu.org/software/make/)
 - [GCC](https://gcc.gnu.org/)
 - [CoppeliaSim (simulator)](https://www.coppeliarobotics.com/files/CoppeliaSim_Edu_V4_2_0_Ubuntu20_04.tar.xz)

## How to use it:

1. **Compile**

Run this command in the root of this repository:
```
make
```

 2. **Run CoppeliaSim simulator**

Execute the `coppeliaSim.sh` script at the root of [CoppeliaSim](https://www.coppeliarobotics.com/files/CoppeliaSim_Edu_V4_2_0_Ubuntu20_04.tar.xz).

 3. **Import a scene**

Create one yourself or choose one already made.
Inside CoppeliaSim: `File` > `Open scene...` and choose one  from those located in the `scene/` folder.

 4. **Start the simulation**

Run this command in the root of this repository:
```
./pipes.sh
```
<img alt="Demo" src="/Info/demo.gif"/>
