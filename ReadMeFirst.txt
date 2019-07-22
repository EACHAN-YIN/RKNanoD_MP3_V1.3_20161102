
v1.3更新说明：
1.本次发布的NanoD SDK工程支持的格式包括：mp3、wav、aac、ogg、hifi alac、hifi ape、hifi flac、DSF、DFF。
	注意：1）hifi ape目前仅支持96khz采样率以下的歌曲解码支持，超过96Khz的歌曲已在解码库中做了判断，做不支持处理。
		  后期等优化解码库后再对172Khz\196Khz等采样率的解码支持。
		  2）支持aac（包括aac、m4a、mp4、3gp）与hifi alac格式解码的兼容。
		  3）不支持16bit ape格式，16bit flac格式，因为无法与hifi ape与hifi flac 做区分。
		  4）DSD格式支持DSD64，DSD128，DSD256。需要指出的是DSD128、DSD256的仅支持DSF后缀的歌曲。

2.本次发布的NanoD SDK工程主要更新：
	1）增加支持DFF、DSF格式的歌曲，支持DSD64，DSD128，DSD256各级别。
	2）调整了脚本支持320*240大小的LCD显示屏。
	3）优化并改善了BT发射功能。
	4）支持USB Host 播放。
	5）修补某些音频格式播放。

★SPI nor flash工程使用说明：

	1.本工程支持SPI Nor flash，编译时确保SysConfig.h中的_SPINOR_ 宏打开。
	2.SPI NorFlash的NanoD工程因为flash大小有限，不支持媒体库。
	3.不支持Beep声，因为数据源占用flash空间太大。
	4.开发工具使用keil V4.72.1以上版本。
	5.根据所选择芯片封装的不同，需要选择不同的宏定义，SysConfig.h 中，
		RKNANOD_CHIP_TYPE 宏定义可选择 RKNANOD_L - LQFP封装  RKNANOD_G- BGA封装  RKNANOD_N - QFN封装。
		默认定义为RKNANOD_L，请用户根据所选择芯片封装定义想要的宏。


★将资源文件放置在SD中的操作说明：
	1.工程编译通过后，使用\Development\firmware_generate_SPI\ 目录下的工具生成固件，
	  其中:系统代码选择build目录下的 RkNano.bin
		   菜单选择\Development\firmware_generate_SPI 下的menu.res  （大小为0，实际放在SD中，防止工具报错）
		   图片选择\Development\firmware_generate_SPI 下的 image.uis （大小为0，实际放在SD中，防止工具报错）
		   固件选择\Firmware 目录。

	2.固件生成成功后，大小约1.2M左右，插入SD卡，烧写固件，固件升级后会自动连接USB，弹出U盘，这实际上是SD卡，打开磁盘，将
		\Development\firmware_generate_SPI\Resource 目录下的所有文件拷贝进磁盘，然后复位系统，此时就可以正常加载字符串资源以及图片资源，
		可以正常显示UI。

以上！
	开发过程中如有疑问或发现问题，请发邮件至chad.ma@rock-chips.com 并CC to：zyz@rock-chips.com，或来电至0591-83991906 转8303 谢谢！
