# **electronicPetStore**
## **要求实现**： 
店内有不同类型的电子宠物
1.每种电子宠物能通过显示出来的文本提出需要或表示情绪如：饿、渴、饱涨、困、不舒服、高兴、生气、伤心、绝望、无聊等。
2.店员用户通过键盘操作“饲养”电子宠物，给它实施喂饭、喂水、带它上厕所、陪它玩耍、哄它睡觉，带他看病等动作。当“饲养”不当导致电子宠物“死亡”，程序结束。“饲养”良好，当电子宠物活到指定年限“寿终正寝”。
3.可以购买新的宠物或者售出宠物。
4.可以统计宠物数量、查询宠物状态、价格。
5.为店主设计其它业务或管理功能。
## **项目大概**：
1.基于Qt框架实现窗口，包括商店登录页面、商店页面、宠物信息页面。
2.建立Pet类，包含饥饿值、心情值等，由其派生出各种类型，如Labrador,Civet…
3.通过信号与槽实现页面跳转、与宠物互动等操作。
## **设计内容**：
1. 创建Pet类，设置成员变量和函数，派生出Labrador,Samoyed,Civet,Plush等子类。
2. 创建ElectronicPetStore(.ui .h .cpp)，作为登录页面。点击enter按钮可关闭登录页面且显示商店页面。
3. 创建MainWindow(.ui .h .cpp)，作为商店页面。在其中储存宠物，并且可以通过点击按钮实现买入宠物、照顾宠物、售出宠物、查看所有宠物的信息的操作。
4. 创建Care(.ui .h .cpp)，作为照顾页面，点击按钮将按钮编号传回MainWindow以实现对应操作。
5.建立main.cpp创建窗口，实现电子宠物商店。

![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/6d5b1fd4-3984-4dfb-a875-0ae29bd6b91e)
## **项目展示**：
游戏登录页面

![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/8e1fd7d9-88f4-424b-b202-ed328b368840)

 点击enter按钮进入商店页面，登录页面隐藏
 ![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/f0357c41-15d9-40f2-9c92-8be61d677a4b)
 
 点击按钮弹出care窗口

 ![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/fa8994c9-9baa-417b-a1c5-22bae9395b18)

点击pet...按钮弹出Care窗口，选择new..创建宠物

点击其他按钮对宠物进行喂食、喂水、上厕所、玩耍、睡觉、看病、售出操作
![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/410d1c1a-4143-4c5f-be60-3c1d07ce706b)
 
 若某处已有宠物再在此新建会弹出错误提示
 
 ![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/9107eb0e-71dd-466f-b22b-38c2e6da7859)

宠物状态恢复正常后重新显示默认创建图片
![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/1bb53dc2-812a-4206-9f84-ed8513650033)

 对第三个宠物进行sell售出，会显示如下图片 

![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/8b376c98-1713-4206-908c-6276adf3b64e)
创建宠物如下 

![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/0466f5ce-eda7-424a-b5b4-4f7d4e7f2d4e)
点击view all 查看所有宠物的状态 

![image](https://github.com/Jyue3390/electronicPetStore/assets/116416572/fb7dbe09-0cd7-46d1-bb5f-34f4e17cc5d7)
