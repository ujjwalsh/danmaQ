#include <QApplication>
#include <ctime>
#include <QWidget>
#include <QDebug>
#include <QString>
#include <QDesktopWidget>

#include "tests.h"
#include "danmaQ_app_base.h"
#include "danmaku_window.h"
#include "danmaku_ui.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	std::srand(std::time(0));
	BaseDanmakuApp dmapp;
	dmapp.screenCount = 1;
	dmapp.fontSize = 36;
	dmapp.lineHeight = 42;
	dmapp.fontFamily = QString(
		"WenQuanYi Micro Hei, Source Han Sans CN, WenQuanYi Zen Hei,"
		"Microsoft YaHei, SimHei, "
		"STHeiti, Hiragino Sans GB, "
		"sans-serif"
	);

	DMWindow* w = new DMWindow(0, &dmapp);
	w->new_danmaku("test", "white", "fly");
	return app.exec();
}

