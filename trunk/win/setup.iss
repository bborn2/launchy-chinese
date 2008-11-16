; 脚本由韦斯特·金汉化的 Inno Setup 脚本向导 生成！
; 有关创建 Inno Setup 脚本文件的详细资料请查阅帮助文档！

[Setup]
AppName=Launchy 中文修改版
AppVerName=Launchy 中文修改版 2.12
AppPublisher=Code Jelly & Bborn
AppPublisherURL=http://www.launchy.net
AppSupportURL=http://www.launchy.net
AppUpdatesURL=http://www.launchy.net
DefaultDirName={pf}\Launchy
DefaultGroupName=Launchy 中文修改版
LicenseFile=C:\Program Files\Launchy\license.txt
OutputDir=C:\Documents and Settings\Bborn\桌面
OutputBaseFilename=Launchy212zh
SetupIconFile=C:\Program Files\Launchy\Launchy.ico
Compression=lzma
SolidCompression=yes

[Languages]
Name: "chinese"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\Program Files\Launchy\Launchy.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\Launchy.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\Launchy.ico"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\license.txt"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\platform_win.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\QtCore4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\QtGui4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\QtNetwork4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\readme.pdf"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Program Files\Launchy99\Microsoft.VC80.CRT\*"; DestDir: "{app}\Microsoft.VC80.CRT\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Program Files\Launchy99\plugins\*"; DestDir: "{app}\plugins\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Program Files\Launchy99\skins\*"; DestDir: "{app}\skins\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Program Files\Launchy99\tr\*"; DestDir: "{app}\tr\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Program Files\Launchy99\Utilities\*"; DestDir: "{app}\Utilities\"; Flags: ignoreversion recursesubdirs createallsubdirs
; 注意: 不要在任何共享系统文件上使用“Flags: ignoreversion”

[Icons]
Name: "{group}\Launchy 中文修改版"; Filename: "{app}\Launchy.exe"; WorkingDir: {app}
Name: "{group}\{cm:UninstallProgram,Launchy 中文修改版}"; Filename: "{uninstallexe}"
Name: "{userdesktop}\Launchy 中文修改版"; Filename: "{app}\Launchy.exe"; Tasks: desktopicon; WorkingDir: {app}
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\Launchy 中文修改版"; Filename: "{app}\Launchy.exe"; Tasks: quicklaunchicon; WorkingDir: {app}
Name: "{commonstartup}\Launchy 中文修改版"; Filename: "{app}\Launchy.exe"; WorkingDir: {app}
[Run]
Filename: "{app}\Launchy.exe"; Description: "{cm:LaunchProgram,Launchy 中文修改版}"; Flags: nowait postinstall skipifsilent

