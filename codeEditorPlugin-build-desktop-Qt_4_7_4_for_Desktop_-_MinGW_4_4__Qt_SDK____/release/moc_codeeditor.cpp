/****************************************************************************
** Meta object code from reading C++ file 'codeeditor.h'
**
** Created: Mon Sep 21 00:02:10 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../codeEditorPlugin/codeeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'codeeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_codeEditor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   12,   11,   11, 0x08,
      57,   11,   11,   11, 0x08,
      82,   80,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_codeEditor[] = {
    "codeEditor\0\0newBlockCount\0"
    "updateLineNumberAreaWidth(int)\0"
    "highlightCurrentLine()\0,\0"
    "updateLineNumberArea(QRect,int)\0"
};

const QMetaObject codeEditor::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_codeEditor,
      qt_meta_data_codeEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &codeEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *codeEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *codeEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_codeEditor))
        return static_cast<void*>(const_cast< codeEditor*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int codeEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateLineNumberAreaWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: highlightCurrentLine(); break;
        case 2: updateLineNumberArea((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
