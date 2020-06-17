///////////
// This file is a part of the ATools project
// Some parts of code are the property of Microsoft, Qt or Aeonsoft
// The rest is released without license and without any warranty
///////////

#include "stdafx.h"
#include "MainFrame.h"

int main(int argc, char *argv[])
{
	const string workingDir = QFileInfo(string::fromLocal8Bit(argv[0])).absolutePath();
	QCoreApplication::addLibraryPath(workingDir % "/Plugins/");
	QDir::setCurrent(workingDir);

	InstallMsgHandler();

	QApplication app(argc, argv);

	std::string pixMapName;
	pixMapName.append(":/MainFrame/Resources/Splashscreen_");
	pixMapName.append(std::to_string(rand() % 6));
	pixMapName.append(".png");
	//QPixmap pixMap = QPixmap(pixMapName.c_str());
	//QSplashScreen* splash = new QSplashScreen(pixMap);
	//splash->show();
	app.processEvents();

	CMainFrame* mainFrame = new CMainFrame();
	int result = -1;

	if (mainFrame->Initialize())
	{
		mainFrame->show();
		//splash->finish(mainFrame);
		//Delete(splash);

		if (argc >= 2)
			mainFrame->OpenFile(string::fromLocal8Bit(argv[1]));

		mainFrame->UpdateWorldEditor();
		result = app.exec();
	}
	//else
	//	Delete(splash);
	
	Delete(mainFrame);
	return result;
}