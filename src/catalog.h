/*
Launchy: Application Launcher
Copyright (C) 2007  Josh Karlin

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef CATALOG_H
#define CATALOG_H

#include <QString>
#include <QStringList>
#include <QBitArray>
#include <QIcon>
#include <QHash>
#include <QDataStream>
#include <QDir>
#include <QSet>

//#include <QByteArray>
//#include <QTextCodec>
//#include <QDebug>

#ifdef WIN32
	#include "Windows.h"
#endif


class CatItem {
public:
    int id;
	QString fullPath;
	QString shortName;
	QString lowName;
	QString icon;
	int usage;
	void* data;
	

	CatItem() {}


	CatItem(QString full, bool isDir = false) 
		: fullPath(full) {
			int last = fullPath.lastIndexOf("/");
			if (last == -1) {
				shortName = fullPath;

			} else {
				shortName = fullPath.mid(last+1);
				if (!isDir)
					shortName = shortName.mid(0,shortName.lastIndexOf("."));
			}

#ifdef WIN32

			QString tempString;
			tempString = shortName.toLower();
			lowName = GetFirstLetter(tempString);
#else
			lowName = shortName.toLower();
#endif
			data = NULL;
			usage = 0;
			id = 0;
	}


	CatItem(QString full, QString shortN) 
		: fullPath(full), shortName(shortN) 
	{
		lowName = shortName.toLower();
		data = NULL;
		usage = 0;
		id = 0;
	}

	CatItem(QString full, QString shortN, uint i_d) 
		: id(i_d), fullPath(full), shortName(shortN)
	{
		lowName = shortName.toLower();
		data = NULL;
		usage = 0;
	}

	CatItem(QString full, QString shortN, uint i_d, QString iconPath) 
		: id(i_d), fullPath(full), shortName(shortN), icon(iconPath)
	{
		lowName = shortName.toLower();
		data = NULL;
		usage = 0;
	}

	CatItem(const CatItem &s) {
		fullPath = s.fullPath;
		shortName = s.shortName;
		lowName = s.lowName;
		icon = s.icon;
		usage = s.usage;
		data = s.data;
		id = s.id;
	}

	CatItem& operator=( const CatItem &s ) {
		fullPath = s.fullPath;
		shortName = s.shortName;
		lowName = s.lowName;
		icon = s.icon;
		usage = s.usage;
		data = s.data;
		id = s.id;
		return *this;
	}

	bool operator==(const CatItem& other) const{
		if (fullPath == other.fullPath)
			return true;
		return false;
	}

#ifdef WIN32

	QString GetFirstLetter(QString shortName)
	{
		quint8 ucHigh = 0, ucLow = 0; 
		int  nCode = 0;

		char txt[1024];
		wchar_t *pshortName = (wchar_t*) shortName.data();
		WideCharToMultiByte( CP_ACP, 0, pshortName, -1, txt, 1024 , NULL, NULL );
		char temptext[1024] = {0};
		int k = 0;

		char strRet;

		for (int i=0; i< strlen(txt); i++)
		{
			if ( !IsDBCSLeadByteEx( 936 ,txt[i] ))
			{
				temptext[k++] = txt[i];
				continue;
			} 

			ucHigh =  txt[i];
			ucLow  =  txt[i+1];
			if ( ucHigh < 0xa1 || ucLow < 0xa1)
			{
				temptext[k++] = txt[i];
				continue;
			}
			else
				// Treat code by section-position as an int type parameter, 
				// so make following change to nCode. 
				nCode = (ucHigh - 0xa0) * 100 + ucLow - 0xa0;
			FirstLetter(nCode, strRet);
			temptext[k++] = txt[i];
			temptext[k++] = txt[i+1];
			temptext[k++] = strRet;
			//strcat_s(temptext,1024, txt+i);
			//strcat_s(temptext,1024, txt+i+1);
			//strcat_s(temptext,1024, &strRet);
			i++;//one Chinese character need two bytes
			 
		}



		//MultiByteToWideChar(936,0,txt + i,2, &_t ,1);
		//strFirstLetter += _t;

		//////////////////////////////////////////////////////////////////////////

		//QTextCodec *ChineseCodec =QTextCodec::codecForName("GB2312");
		//Q_CHECK_PTR(ChineseCodec);
		//QByteArray text = ChineseCodec->fromUnicode(shortName);
		//QByteArray temptext;

		//QString strRet;
 
		//for (int i=0; i< text.length(); i++)
		//{
		//	ucHigh = text[i];
		//	 
		//	if ( ucHigh <  0xa1 )
		//	{
		//		temptext += text[i];
		//		continue;
		//	}
		//	else
		//	{
		//		ucLow  =  text[i+1];

		//		if ( ucHigh < 0xa1 || ucLow < 0xa1)
		//		{
		//			temptext += text[i];
		//			continue;
		//		}
		//		else
		//			nCode = (ucHigh - 0xa0) * 100 + ucLow - 0xa0;
		//		FirstLetter(nCode, strRet);
		//		temptext += text[i];
		//		temptext += text[i+1];
		//		temptext += strRet;
		//		i++;
		//		strRet = "";
		//	}
		//}

		//wchar_t wtext[1024];
		int len = MultiByteToWideChar(936,0,temptext ,strlen(temptext), NULL, 0);
		wchar_t *pwText;
		//QString t;
		pwText = new wchar_t[len];
		MultiByteToWideChar (936, 0, temptext ,strlen(temptext), pwText, len);

		//t = QString::fromWCharArray(pwText);
		QString t((const QChar*) pwText , len);

	 
		delete []pwText;
		pwText = NULL;
		 
		return t;

		//qDebug()<<ChineseCodec->toUnicode(temptext);
 		//return ChineseCodec->toUnicode(temptext);
		
	}

	void FirstLetter(int nCode, char &strLetter)
	{
		if(nCode >= 1601 && nCode < 1637) strLetter = 'a';
		if(nCode >= 1637 && nCode < 1833) strLetter = 'b'; 
		if(nCode >= 1833 && nCode < 2078) strLetter = 'c';
		if(nCode >= 2078 && nCode < 2274) strLetter = 'd';
		if(nCode >= 2274 && nCode < 2302) strLetter = 'e'; 
		if(nCode >= 2302 && nCode < 2433) strLetter = 'f';
		if(nCode >= 2433 && nCode < 2594) strLetter = 'g';
		if(nCode >= 2594 && nCode < 2787) strLetter = 'h'; 
		if(nCode >= 2787 && nCode < 3106) strLetter = 'j';
		if(nCode >= 3106 && nCode < 3212) strLetter = 'k'; 
		if(nCode >= 3212 && nCode < 3472) strLetter = 'l'; 
		if(nCode >= 3472 && nCode < 3635) strLetter = 'm';
		if(nCode >= 3635 && nCode < 3722) strLetter = 'n';
		if(nCode >= 3722 && nCode < 3730) strLetter = 'o'; 
		if(nCode >= 3730 && nCode < 3858) strLetter = 'p';
		if(nCode >= 3858 && nCode < 4027) strLetter = 'q';
		if(nCode >= 4027 && nCode < 4086) strLetter = 'r'; 
		if(nCode >= 4086 && nCode < 4390) strLetter = 's';
		if(nCode >= 4390 && nCode < 4558) strLetter = 't';
		if(nCode >= 4558 && nCode < 4684) strLetter = 'w'; 
		if(nCode >= 4684 && nCode < 4925) strLetter = 'x';
		if(nCode >= 4925 && nCode < 5249) strLetter = 'y';
		if(nCode >= 5249 && nCode < 5590) strLetter = 'z'; 
	}

#endif

};



class InputData 
{
private:
	QString text;
	QSet<uint> labels;
	CatItem topResult;
	uint id;
public:
	QSet<uint>  getLabels() { return labels; }
	void setLabel(uint l) { labels.insert(l); }
	bool hasLabel(uint l) { return labels.contains(l); }

	void setID(uint i) { id = i; }
	uint getID() { return id; }
	QString  getText() { return text; }
	void setText(QString t) { text = t; }
	CatItem&  getTopResult() { return topResult; }
	void setTopResult(CatItem sr) { topResult = sr; }
	InputData() { id = 0; }
	InputData(QString str) : text(str) { id = 0;}
};

bool CatLess (CatItem* left, CatItem* right); 
bool CatLessNoPtr (CatItem & a, CatItem & b);

inline QDataStream &operator<<(QDataStream &out, const CatItem &item) {
	out << item.fullPath;
	out << item.shortName;
	out << item.lowName;
	out << item.icon;
	out << item.usage;
	out << item.id;
	return out;
}

inline QDataStream &operator>>(QDataStream &in, CatItem &item) {
	in >> item.fullPath;
	in >> item.shortName;
	in >> item.lowName;
	in >> item.icon;
	in >> item.usage;
	in >> item.id;
	return in;
}

class Catalog {
public:
	Catalog() {}
	virtual ~Catalog() {}
	virtual void addItem(CatItem item) = 0;
	virtual int count() = 0;
	virtual const CatItem & getItem(int) = 0;
	static bool matches(CatItem* item, QString& txt);

	void searchCatalogs(QString, QList<CatItem> & );
	virtual void incrementUsage(const CatItem& item) = 0;
	virtual int getUsage(const QString& path) = 0;
	void checkHistory(QString txt, QList<CatItem> & list);

private:	
	virtual QList<CatItem*> search(QString) = 0;

};



// The fast catalog searches quickly but 
// addition of items is slow and uses a lot of memory
class FastCatalog : public Catalog {
private:
	QList<CatItem> catList;
	QHash<QChar, QList<CatItem*> > catIndex;
public:
	FastCatalog() : Catalog() {}
	void addItem(CatItem item);
	QList<CatItem*> search(QString);
	int count() { return catList.count(); }
	const CatItem & getItem(int i) { return catList[i]; }
	void incrementUsage(const CatItem& item);
	int getUsage(const QString& path);
};

// The slow catalog searches slowly but
// adding items is fast and uses less memory
// than FastCatalog
class SlowCatalog : public Catalog {
private:
	QList<CatItem> catList;
public:
	SlowCatalog() : Catalog() {}
	void addItem(CatItem item);
	QList<CatItem*> search(QString);
	int count() { return catList.count(); }
	const CatItem & getItem(int i) { return catList[i]; }
	void incrementUsage(const CatItem& item);
	int getUsage(const QString& path);
};

#endif
