#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QtGui/QWidget>
#include <QPlainTextEdit>

//class codeEditor : public QWidget
//{
//    Q_OBJECT
    
//public:
//    codeEditor(QWidget *parent = 0);
//};

class codeEditor : public QPlainTextEdit
{
    Q_OBJECT

public:
    codeEditor(QWidget *parent = 0);

    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &, int);

private:
    QWidget *lineNumberArea;
};


#endif
