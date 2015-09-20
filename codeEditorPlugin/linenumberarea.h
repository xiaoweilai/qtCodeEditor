#ifndef LINENUMBERAREA_H
#define LINENUMBERAREA_H

#include <QWidget>
#include <QtGui>
#include "codeeditor.h"

class LineNumberArea : public QWidget
{
public:
    LineNumberArea(codeEditor *editor) : QWidget(editor) {
        pcodeEditor = editor;
    }

    QSize sizeHint() const {
        return QSize(pcodeEditor->lineNumberAreaWidth(), 0);
    }

protected:
    void paintEvent(QPaintEvent *event)  {
        pcodeEditor->lineNumberAreaPaintEvent(event);
    }

private:
    codeEditor *pcodeEditor;
    
};

#endif // LINENUMBERAREA_H
