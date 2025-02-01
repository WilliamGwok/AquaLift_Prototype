# AquaLift_Prototype

## はじめに

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Team_photo_with_prototype.jpg" width="710px">
</div>
<br>
<p align="center">本プロジェクトは、2025年1月4日から1月25日まで、香港科学技術教育センターが主催するInnoX冬季キャンプで、グループで完成させました。技術面の実装は私が担当し、香港科技大学ISDラボで構築しました。</p>

## プロジェクト概要

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/AquaLift%20Poster/1.png" width="710px">
</div>
<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/AquaLift%20Poster/2.png" width="710px">
</div>

## 作業内容

プロトタイプの開発は、製品の技術的な特徴を示すことを目的としています。深海養殖用のネットケージの技術的な特徴は、昇降システム、リアルタイム監視システム、および管理システムです。これを基に、エアバッグの膨張・収縮を制御し、温度センサーからデータを受信し、シンプルなIoTシステムを構築することで、これらの機能を実現しました。

### 材料リスト

| アイテムの説明                     | 画像                   | 価格    | 数量 | 備考 |
| ---------------------------------- | ---------------------- | ------- | ---- | ---- |
| 高圧PUチューブ、透明8*5             | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_8.png) | ¥2.00   | 2    | カスタムエアバッグに接続 |
| 高圧PUチューブ、透明10*6.5          | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_10.png) | ¥0.87   | 2    | エアポンプ、ソレノイドバルブ、圧力調整バルブに接続 |
| 3M防水PTFEテープ                   | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/PTFE_Tape.png) | ¥27.00  | 1    | 漏気を防ぐ |
| 一方向弁AKH10-00                   | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/one_flow.png) | ¥3.00   | 1    | エアポンプのエア出口ラインに接続 |
| PCチューブフィッティングPC10-01    | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_head.png) | ¥2.65   | 10   | チューブと機器の接続 |
| チューブ径変更接続10から8           | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/transfer10_8.png) | ¥2.95   | 1    | 主気路とエアバッグ気路の接続 |
| 圧力調整バルブIR2000-02            | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/pressure_control.jpg) | ¥68.00  | 1    | エア放出速度を調整 |
| SMC型2位3通ソレノイドバルブVT307Y-6G1_01 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/valve.jpg) | ¥81.20  | 1    | エアバッグの膨張と収縮を制御 |
| 小型エアコンプレッサーKMTP-C4A      | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/pump.png) | ¥160.00 | 1    | 空気供給機 |
| カスタムリングエアバッグ            | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/air_bag.jpg) | ¥280.00 | 1    | 飼育槽サイズに基づいてカスタマイズ |
| リレーモジュール                    | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/electric_relay.png) | ¥17.80  | 2    | エアポンプとソレノイドバルブを制御 |
| DS18B20温度センサー                 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/temp_sensor.png) | ¥17.90  | 1    | 開発ボードから電力供給 |
| KCD3船用電源スイッチ                | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/switch.png) | ¥7.80   | 1    | 電源のON/OFF |
| ESP8266 Wi-FiモジュールNodeMCU     | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/micro_unit.png) | ¥26.40  | 1    | データ送受信、簡単な回路制御 |
| 12Vバッテリー                       | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/12V_battery.png) | ¥7.70   | 1    | -- |
| 3.7Vバッテリー                      | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/3_7V_battery.png) | ¥28.00  | 1    | -- |
| ブレッドボードキット                | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/bread_board.png) | ¥36.36  | 1    | -- |
| 展示用アクアリウム (直径25mm, 高さ50mm) | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tank_25_50.png) | ¥164.31 | 1    | -- |
| 小型孵化用ネットケージ              | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/net_cage.png) | ¥12.95  | 1    | -- |

### 回路設計

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/tech_electric.jpg" width="710px">
</div>
<br>

<p align="center">回路設計は比較的簡単で、リレー関連のトポロジーを整理することが鍵です。重要なのは、電源を入れる前にすべてのデバイスが共通のグラウンドを持っているか確認することです。加えて、回路トポロジーはブレッドボード上に配置され、同僚ZJHの提案でシリコンワイヤーとヘッダーピンを使ってデバイスとブレッドボードを接続しました（壊れやすいジャンパーワイヤーの使用を避けて回路の安定性を向上させるため）。</p>

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/relay_cir.jpg" width="710px">
</div>
<p align="center">リレー関連のトポロジーは上記の図の通りです。</p>

### エアルート設計

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/air_route.png" width="710px">
</div>
この設計は、単一のチャンバーを膨張・収縮させることを目的としていますので、エアルートは複雑ではありません。図では一方向バルブが欠けており、これはエアポンプとソレノイドバルブの間の気路に接続する必要があります。すべてのチューブ接続部分にはPTFEテープを巻くことをお勧めします。テスト結果によれば、これにより接続部分の漏気を防ぐ効果があります。

### IoTシステム設計

この設計の目的は、遠隔地から水温を監視し、水中のネットケージの昇降を簡単に制御することです。

開発時間が限られていたため、無料のIoTプラットフォームであるBlynkを直接使用しました。

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/blynk.png" width="710px">
</div>

実装フローは以下の通りです：

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/flow_chart.png" width="710px">
</div>

### テスト結果
[テスト結果リンク](https://github.com/user-attachments/assets/17f17435-935e-403c-b7f5-fe6d85c77b0a)

## 結論
