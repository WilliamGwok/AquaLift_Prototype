# AquaLift_Prototype

## 前言

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Team_photo_with_prototype.jpg" width="710px">
</div>
<br>
<p align="center">本项目为本人在2025年1月4日至1月25日参加香港科创教育中心举办的InnoX冬令营期间以小组形式完成。技术落地部分由本人负责，于香港科技大学ISD实验室搭建完成。</p>

## 项目介绍
<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/AquaLift%20Poster/1.png" width="710px">
</div>
<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/AquaLift%20Poster/2.png" width="710px">
</div>

## 工作内容

### 物料清单

| 物品名称/描述                      | 图片                   | 价格    | 数量 | 备注 |
| ---------------------------------- | ---------------------- | ------- | ---- | ---- |
| 高压 PU 气管，透明 8*5             | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_8.png) | ¥2.00   | 2    |   连接定制气囊   |
| 高压 PU 气管，透明 10*6.5          | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_10.png) | ¥0.87   | 2    |   连接气泵，电磁阀和调压阀   |
| 3M 防水生料带                      | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/PTFE_Tape.png) | ¥27.00  | 1    |  有效防止漏气    |
| 单向阀AKH10-00                     | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/one_flow.png) | ¥3.00   | 1    |  接在气泵出气气路    |
| PC 气管接头 PC10-01                | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_head.png) | ¥2.65   | 10    |   气管与设备连接件   |
| 气管转径接头 10转8                 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/transfer10_8.png) | ¥2.95   | 1    | 连接主气路与气囊气路     |
| 调压减压阀 IR2000-02               | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/pressure_control.jpg) | ¥68.00  | 1    |  接出气气路，调节放气速率    |
| SMC 型 2 位3通电磁阀 VT307Y-6G1_01 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/valve.jpg) | ¥81.20  | 1    | 控制气囊充放气     |
| 小型空气压缩机 KMTP-C4A            | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/pump.png) | ¥160.00 | 1    |  充气设备    |
| 定制环形气囊                       | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/air_bag.jpg) | ¥280.00 | 1    |  根据鱼缸大小定制    |
| 继电器模块                         | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/electric_relay.png) | ¥17.80  | 2    |   控制气泵和电磁阀的通断   |
| DS18B20 温度传感器                 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/temp_sensor.png) | ¥17.90  | 1    |   由开发板供电   |
| KCD3 船用电源开关                  | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/switch.png) | ¥7.80   | 1    |  控制电源通断    |
| ESP8266 Wi-Fi 模块 NodeMCU         | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/micro_unit.png) | ¥26.40  | 1    |   收发数据，进行简单的电路控制   |
| 12V 电池                           | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/12V_battery.png) | ¥7.70   | 1    |  --    |
| 3.7V 电池                          | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/3_7V_battery.png) | ¥28.00  | 1    | --     |
| 面包板套件                         | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/bread_board.png) | ¥36.36  | 1    |  --    |
| 展示用柱状鱼缸口径25高50           | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tank_25_50.png) | ¥164.31 | 1    |   --   |
| 小型孵化网箱                       | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/net_cage.png) | ¥12.95  | 1    |    --  |


### 电路设计

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/tech_electric.jpg" width="710px">
</div>
<br>

<p align="center">电路上难度不大，理清继电器相关拓扑就可以。重要的是上电前检查所有设备是否共地。此外，由于电路拓扑布置在面包板上，在同事ZJH的建议下采用硅胶线加排针的方式实现器件到面包板的连接（减少使用易断的杜邦线以提高电路稳定性）</p>

### 气路设计

设计目的是给单个腔体进行充放气，故气路设计并不复杂。图中少接了一个单向阀，应要接在气泵到电磁阀之间的气路上。值得注意的一点是气管接头都应缠上生料带，经测试发现该做法能有效防止接口处漏气

### IoT系统设计

设计目的为远程监控水体温度，并可简单控制网箱在水中的升降。
鉴于开发时间有限，该项目直接使用免费的IoT平台Blynk。

简单的实现流程如图

### 测试结果


## 项目总结



