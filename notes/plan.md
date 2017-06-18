
# 使用的开发平台
- Windows7 x64
- VS2015 Community
- Qt5.8.0 http://download.qt.io/archive/qt/5.8/5.8.0/
	qt-opensource-windows-x86-msvc2015_64-5.8.0.exe
- Qt下载地址 http://download.qt.io/archive/qt/

# 使用插件对程序进行拓展
使用QtPluginLoader完成插件设计

# 可更换界面皮肤
qss样式表

# 读取文目录建立缓存
存储文件格式db格式
定时扫描文件目录

# 统一规划动态库路径
qt.conf配置文件

# 多国语言系统
使用qt自带的语言模块进行翻译

# 单实例模式
SingleApplication

# 日志输出
spdlog

# 配置文件
使用QSetting 存放配置文件，配置文件拟采用ini格式

# 跨平台特性
初始阶段，先在windows平台下进行开发和调试。
后续可能会考录在linux上移植


# 实现注意事项
使用统一的src路径作为代码开发的根目录
编码风格参照Qt和Google的风格
各种模板尽量使用Qt风格的模板
开源代码所遵循的协议，GPL协议

# 程序发布阶段
建立GitHub上的标签





