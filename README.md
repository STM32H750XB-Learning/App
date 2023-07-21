# APP

Board: ArtPi

Analyzing HardFaults: [SEGGER - The Embedded Experts - Downloads - Application Notes](https://www.segger.com/downloads/application-notes/)

Reference: 安富莱_STM32-V7开发板_用户手册，含BSP驱动包设计（V3.5）

Note: 

1. 注释以下这段代码：

```c
  /*
   * Disable the FMC bank1 (enabled after reset).
   * This, prevents CPU speculation access on this bank which blocks the use of FMC during
   * 24us. During this time the others FMC master (such as LTDC) cannot use it!
   */
//  FMC_Bank1_R->BTCR[0] = 0x000030D2;
```

![image-20230715155522407](figures/image-20230715155522407.png)

# EventRecorder Config

Reference：[konosubakonoakua/stm32f1-EventRecorder-Keil5: Keil5 segger event-recorder tutorial (github.com)](https://github.com/konosubakonoakua/stm32f1-EventRecorder-Keil5)

