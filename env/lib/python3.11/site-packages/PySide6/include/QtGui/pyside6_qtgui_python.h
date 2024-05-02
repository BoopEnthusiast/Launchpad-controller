// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTGUI_PYTHON_H
#define SBK_QTGUI_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkmodule.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>

// Bound library includes
#include <QAbstractTextDocumentLayout>
#include <QInputMethodEvent>
#include <QPainter>
#include <QPainterPath>
#include <QTextBlock>
#include <QTextFrame>
#include <QTextLayout>
#include <QtGui/qabstractfileiconprovider.h>
#include <QtGui/qabstracttextdocumentlayout.h>
#include <QtGui/qaccessible.h>
#include <QtGui/qaccessible_base.h>
#include <QtGui/qaction.h>
#include <QtGui/qactiongroup.h>
#include <QtGui/qbrush.h>
#include <QtGui/qclipboard.h>
#include <QtGui/qcolor.h>
#include <QtGui/qcolorspace.h>
#include <QtGui/qevent.h>
#include <QtGui/qeventpoint.h>
#include <QtGui/qfont.h>
#include <QtGui/qfontdatabase.h>
#include <QtGui/qgenericmatrix.h>
#include <QtGui/qglyphrun.h>
#include <QtGui/qicon.h>
#include <QtGui/qiconengine.h>
#include <QtGui/qimage.h>
#include <QtGui/qimageiohandler.h>
#include <QtGui/qimagereader.h>
#include <QtGui/qimagewriter.h>
#include <QtGui/qinputdevice.h>
#include <QtGui/qinputmethod.h>
#include <QtGui/qkeysequence.h>
#include <QtGui/qmatrix4x4.h>
#include <QtGui/qmovie.h>
#include <QtGui/qopenglcontext.h>
#include <QtGui/qopenglfunctions.h>
#include <QtGui/qpagedpaintdevice.h>
#include <QtGui/qpagelayout.h>
#include <QtGui/qpageranges.h>
#include <QtGui/qpagesize.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qpaintengine.h>
#include <QtGui/qpainter.h>
#include <QtGui/qpainterpath.h>
#include <QtGui/qpalette.h>
#include <QtGui/qpixelformat.h>
#include <QtGui/qpixmapcache.h>
#include <QtGui/qpointingdevice.h>
#include <QtGui/qrawfont.h>
#include <QtGui/qregion.h>
#include <QtGui/qrgba64.h>
#include <QtGui/qsessionmanager.h>
#include <QtGui/qstandarditemmodel.h>
#include <QtGui/qstatictext.h>
#include <QtGui/qsurface.h>
#include <QtGui/qsurfaceformat.h>
#include <QtGui/qtextcursor.h>
#include <QtGui/qtextdocument.h>
#include <QtGui/qtextformat.h>
#include <QtGui/qtextlayout.h>
#include <QtGui/qtextobject.h>
#include <QtGui/qtextoption.h>
#include <QtGui/qtransform.h>
#include <QtGui/qvalidator.h>
#include <QtGui/qwindow.h>
class QAccessibleActionInterface;
class QAccessibleEditableTextInterface;
class QAccessibleEvent;
class QAccessibleInterface;
class QAccessibleObject;
class QAccessibleStateChangeEvent;
class QAccessibleTableCellInterface;
class QAccessibleTextCursorEvent;
class QAccessibleTextInsertEvent;
class QAccessibleTextInterface;
class QAccessibleTextRemoveEvent;
class QAccessibleTextSelectionEvent;
class QAccessibleTextUpdateEvent;
class QAccessibleValueChangeEvent;
class QAccessibleValueInterface;
class QActionEvent;
class QBackingStore;
class QBitmap;
class QBrush;
class QChildWindowEvent;
class QCloseEvent;
class QColorTransform;
class QConicalGradient;
class QCursor;
class QDesktopServices;
class QDrag;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QExposeEvent;
class QFileOpenEvent;
class QFocusEvent;
class QFontInfo;
class QFontMetrics;
class QFontMetricsF;
class QGuiApplication;
class QHelpEvent;
class QHideEvent;
class QHoverEvent;
class QIconDragEvent;
class QInputEvent;
class QInputMethodQueryEvent;
class QIntValidator;
class QKeyEvent;
class QLinearGradient;
class QMouseEvent;
class QMoveEvent;
class QNativeGestureEvent;
class QOffscreenSurface;
class QOpenGLContextGroup;
class QOpenGLExtraFunctions;
class QPaintDeviceWindow;
class QPaintEngineState;
class QPaintEvent;
class QPainterPathStroker;
class QPdfWriter;
class QPen;
class QPicture;
class QPixmap;
class QPointerEvent;
class QPointingDeviceUniqueId;
class QPolygon;
class QPolygonF;
class QPyTextObject;
class QQuaternion;
class QRadialGradient;
class QRasterWindow;
class QRegularExpressionValidator;
class QResizeEvent;
class QScreen;
class QScrollPrepareEvent;
class QShortcut;
class QShortcutEvent;
class QShowEvent;
class QSinglePointEvent;
class QStandardItemModel;
class QStatusTipEvent;
class QStyleHints;
class QSyntaxHighlighter;
class QTabletEvent;
class QTextBlockGroup;
class QTextBlockUserData;
class QTextDocumentFragment;
class QTextDocumentWriter;
class QTextFragment;
class QTextImageFormat;
class QTextInlineObject;
class QTextList;
class QTextObject;
class QTextObjectInterface;
class QTextTable;
class QTextTableCell;
class QTextTableCellFormat;
class QTextTableFormat;
class QToolBarChangeEvent;
class QTouchEvent;
class QUndoCommand;
class QUndoGroup;
class QUndoStack;
class QVector2D;
class QVector3D;
class QVector4D;
class QWhatsThisClickedEvent;
class QWheelEvent;
class QWindowStateChangeEvent;

namespace QtGuiHelper {
    class QOverrideCursorGuard;
}

// Type indices
enum [[deprecated]] : int {
    SBK_QABSTRACTFILEICONPROVIDER_ICONTYPE_IDX               = 2,
    SBK_QABSTRACTFILEICONPROVIDER_OPTION_IDX                 = 4,
    SBK_QFLAGS_QABSTRACTFILEICONPROVIDER_OPTION_IDX          = 144,
    SBK_QABSTRACTFILEICONPROVIDER_IDX                        = 0,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_IDX                      = 6,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_PAINTCONTEXT_IDX         = 8,
    SBK_QABSTRACTTEXTDOCUMENTLAYOUT_SELECTION_IDX            = 10,
    SBK_QACCESSIBLE_EVENT_IDX                                = 14,
    SBK_QACCESSIBLE_ROLE_IDX                                 = 20,
    SBK_QACCESSIBLE_TEXT_IDX                                 = 24,
    SBK_QACCESSIBLE_RELATIONFLAG_IDX                         = 18,
    SBK_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX                  = 146,
    SBK_QACCESSIBLE_INTERFACETYPE_IDX                        = 16,
    SBK_QACCESSIBLE_TEXTBOUNDARYTYPE_IDX                     = 26,
    SBK_QACCESSIBLE_IDX                                      = 12,
    SBK_QACCESSIBLE_STATE_IDX                                = 22,
    SBK_QACCESSIBLEACTIONINTERFACE_IDX                       = 28,
    SBK_QACCESSIBLEEDITABLETEXTINTERFACE_IDX                 = 30,
    SBK_QACCESSIBLEEVENT_IDX                                 = 32,
    SBK_QACCESSIBLEINTERFACE_IDX                             = 34,
    SBK_QACCESSIBLEOBJECT_IDX                                = 36,
    SBK_QACCESSIBLESTATECHANGEEVENT_IDX                      = 38,
    SBK_QACCESSIBLETABLECELLINTERFACE_IDX                    = 40,
    SBK_QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_IDX = 44,
    SBK_QACCESSIBLETABLEMODELCHANGEEVENT_IDX                 = 42,
    SBK_QACCESSIBLETEXTCURSOREVENT_IDX                       = 46,
    SBK_QACCESSIBLETEXTINSERTEVENT_IDX                       = 48,
    SBK_QACCESSIBLETEXTINTERFACE_IDX                         = 50,
    SBK_QACCESSIBLETEXTREMOVEEVENT_IDX                       = 52,
    SBK_QACCESSIBLETEXTSELECTIONEVENT_IDX                    = 54,
    SBK_QACCESSIBLETEXTUPDATEEVENT_IDX                       = 56,
    SBK_QACCESSIBLEVALUECHANGEEVENT_IDX                      = 58,
    SBK_QACCESSIBLEVALUEINTERFACE_IDX                        = 60,
    SBK_QACTION_MENUROLE_IDX                                 = 66,
    SBK_QACTION_PRIORITY_IDX                                 = 68,
    SBK_QACTION_ACTIONEVENT_IDX                              = 64,
    SBK_QACTION_IDX                                          = 62,
    SBK_QACTIONEVENT_IDX                                     = 70,
    SBK_QACTIONGROUP_EXCLUSIONPOLICY_IDX                     = 74,
    SBK_QACTIONGROUP_IDX                                     = 72,
    SBK_QBACKINGSTORE_IDX                                    = 76,
    SBK_QBITMAP_IDX                                          = 78,
    SBK_QBRUSH_IDX                                           = 80,
    SBK_QCHILDWINDOWEVENT_IDX                                = 82,
    SBK_QCLIPBOARD_MODE_IDX                                  = 86,
    SBK_QCLIPBOARD_IDX                                       = 84,
    SBK_QCLOSEEVENT_IDX                                      = 88,
    SBK_QCOLOR_SPEC_IDX                                      = 94,
    SBK_QCOLOR_NAMEFORMAT_IDX                                = 92,
    SBK_QCOLOR_IDX                                           = 90,
    SBK_QTGUIQCOLORCONSTANTS_IDX                             = 96,
    SBK_QTGUIQCOLORCONSTANTS_SVG_IDX                         = 98,
    SBK_QCOLORSPACE_NAMEDCOLORSPACE_IDX                      = 102,
    SBK_QCOLORSPACE_PRIMARIES_IDX                            = 104,
    SBK_QCOLORSPACE_TRANSFERFUNCTION_IDX                     = 106,
    SBK_QCOLORSPACE_IDX                                      = 100,
    SBK_QCOLORTRANSFORM_IDX                                  = 108,
    SBK_QCONICALGRADIENT_IDX                                 = 110,
    SBK_QCONTEXTMENUEVENT_REASON_IDX                         = 114,
    SBK_QCONTEXTMENUEVENT_IDX                                = 112,
    SBK_QCURSOR_IDX                                          = 116,
    SBK_QDESKTOPSERVICES_IDX                                 = 118,
    SBK_QDOUBLEVALIDATOR_NOTATION_IDX                        = 122,
    SBK_QDOUBLEVALIDATOR_IDX                                 = 120,
    SBK_QDRAG_IDX                                            = 124,
    SBK_QDRAGENTEREVENT_IDX                                  = 126,
    SBK_QDRAGLEAVEEVENT_IDX                                  = 128,
    SBK_QDRAGMOVEEVENT_IDX                                   = 130,
    SBK_QDROPEVENT_IDX                                       = 132,
    SBK_QENTEREVENT_IDX                                      = 134,
    SBK_QEVENTPOINT_STATE_IDX                                = 138,
    SBK_QEVENTPOINT_IDX                                      = 136,
    SBK_QEXPOSEEVENT_IDX                                     = 140,
    SBK_QFILEOPENEVENT_IDX                                   = 142,
    SBK_QFOCUSEVENT_IDX                                      = 216,
    SBK_QFONT_STYLEHINT_IDX                                  = 228,
    SBK_QFONT_STYLESTRATEGY_IDX                              = 230,
    SBK_QFONT_HINTINGPREFERENCE_IDX                          = 940,
    SBK_QFONT_WEIGHT_IDX                                     = 234,
    SBK_QFONT_STYLE_IDX                                      = 226,
    SBK_QFONT_STRETCH_IDX                                    = 224,
    SBK_QFONT_CAPITALIZATION_IDX                             = 220,
    SBK_QFONT_SPACINGTYPE_IDX                                = 222,
    SBK_QFONT_IDX                                            = 218,
    SBK_QFONT_TAG_IDX                                        = 232,
    SBK_QFONTDATABASE_WRITINGSYSTEM_IDX                      = 240,
    SBK_QFONTDATABASE_SYSTEMFONT_IDX                         = 238,
    SBK_QFONTDATABASE_IDX                                    = 236,
    SBK_QFONTINFO_IDX                                        = 242,
    SBK_QFONTMETRICS_IDX                                     = 244,
    SBK_QFONTMETRICSF_IDX                                    = 246,
    SBK_QGLYPHRUN_GLYPHRUNFLAG_IDX                           = 250,
    SBK_QFLAGS_QGLYPHRUN_GLYPHRUNFLAG_IDX                    = 148,
    SBK_QGLYPHRUN_IDX                                        = 248,
    SBK_QGRADIENT_TYPE_IDX                                   = 262,
    SBK_QGRADIENT_SPREAD_IDX                                 = 260,
    SBK_QGRADIENT_COORDINATEMODE_IDX                         = 254,
    SBK_QGRADIENT_INTERPOLATIONMODE_IDX                      = 256,
    SBK_QGRADIENT_PRESET_IDX                                 = 258,
    SBK_QGRADIENT_IDX                                        = 252,
    SBK_QGUIAPPLICATION_IDX                                  = 264,
    SBK_QHELPEVENT_IDX                                       = 266,
    SBK_QHIDEEVENT_IDX                                       = 268,
    SBK_QHOVEREVENT_IDX                                      = 270,
    SBK_QICON_MODE_IDX                                       = 274,
    SBK_QICON_STATE_IDX                                      = 276,
    SBK_QICON_THEMEICON_IDX                                  = 278,
    SBK_QICON_IDX                                            = 272,
    SBK_QICONDRAGEVENT_IDX                                   = 280,
    SBK_QICONENGINE_ICONENGINEHOOK_IDX                       = 284,
    SBK_QICONENGINE_IDX                                      = 282,
    SBK_QICONENGINE_SCALEDPIXMAPARGUMENT_IDX                 = 286,
    SBK_QIMAGE_INVERTMODE_IDX                                = 292,
    SBK_QIMAGE_FORMAT_IDX                                    = 290,
    SBK_QIMAGE_IDX                                           = 288,
    SBK_QIMAGEIOHANDLER_IMAGEOPTION_IDX                      = 296,
    SBK_QIMAGEIOHANDLER_TRANSFORMATION_IDX                   = 298,
    SBK_QFLAGS_QIMAGEIOHANDLER_TRANSFORMATION_IDX            = 150,
    SBK_QIMAGEIOHANDLER_IDX                                  = 294,
    SBK_QIMAGEREADER_IMAGEREADERERROR_IDX                    = 302,
    SBK_QIMAGEREADER_IDX                                     = 300,
    SBK_QIMAGEWRITER_IMAGEWRITERERROR_IDX                    = 306,
    SBK_QIMAGEWRITER_IDX                                     = 304,
    SBK_QINPUTDEVICE_DEVICETYPE_IDX                          = 312,
    SBK_QFLAGS_QINPUTDEVICE_DEVICETYPE_IDX                   = 154,
    SBK_QINPUTDEVICE_CAPABILITY_IDX                          = 310,
    SBK_QFLAGS_QINPUTDEVICE_CAPABILITY_IDX                   = 152,
    SBK_QINPUTDEVICE_IDX                                     = 308,
    SBK_QINPUTEVENT_IDX                                      = 314,
    SBK_QINPUTMETHOD_ACTION_IDX                              = 318,
    SBK_QINPUTMETHOD_IDX                                     = 316,
    SBK_QINPUTMETHODEVENT_ATTRIBUTETYPE_IDX                  = 324,
    SBK_QINPUTMETHODEVENT_IDX                                = 320,
    SBK_QINPUTMETHODEVENT_ATTRIBUTE_IDX                      = 322,
    SBK_QINPUTMETHODQUERYEVENT_IDX                           = 326,
    SBK_QINTVALIDATOR_IDX                                    = 328,
    SBK_QKEYEVENT_IDX                                        = 330,
    SBK_QKEYSEQUENCE_STANDARDKEY_IDX                         = 338,
    SBK_QKEYSEQUENCE_SEQUENCEFORMAT_IDX                      = 334,
    SBK_QKEYSEQUENCE_SEQUENCEMATCH_IDX                       = 336,
    SBK_QKEYSEQUENCE_IDX                                     = 332,
    SBK_QLINEARGRADIENT_IDX                                  = 340,
    SBK_QMATRIX2X2_IDX                                       = 342,
    SBK_QGENERICMATRIX_2_2_FLOAT_IDX                         = 342,
    SBK_QMATRIX2X3_IDX                                       = 344,
    SBK_QGENERICMATRIX_2_3_FLOAT_IDX                         = 344,
    SBK_QMATRIX2X4_IDX                                       = 346,
    SBK_QGENERICMATRIX_2_4_FLOAT_IDX                         = 346,
    SBK_QMATRIX3X2_IDX                                       = 348,
    SBK_QGENERICMATRIX_3_2_FLOAT_IDX                         = 348,
    SBK_QMATRIX3X3_IDX                                       = 350,
    SBK_QGENERICMATRIX_3_3_FLOAT_IDX                         = 350,
    SBK_QMATRIX3X4_IDX                                       = 352,
    SBK_QGENERICMATRIX_3_4_FLOAT_IDX                         = 352,
    SBK_QMATRIX4X2_IDX                                       = 354,
    SBK_QGENERICMATRIX_4_2_FLOAT_IDX                         = 354,
    SBK_QMATRIX4X3_IDX                                       = 356,
    SBK_QGENERICMATRIX_4_3_FLOAT_IDX                         = 356,
    SBK_QMATRIX4X4_FLAG_IDX                                  = 360,
    SBK_QFLAGS_QMATRIX4X4_FLAG_IDX                           = 156,
    SBK_QMATRIX4X4_IDX                                       = 358,
    SBK_QMOUSEEVENT_IDX                                      = 362,
    SBK_QMOVEEVENT_IDX                                       = 364,
    SBK_QMOVIE_MOVIESTATE_IDX                                = 370,
    SBK_QMOVIE_CACHEMODE_IDX                                 = 368,
    SBK_QMOVIE_IDX                                           = 366,
    SBK_QNATIVEGESTUREEVENT_IDX                              = 372,
    SBK_QTGUIQNATIVEINTERFACE_IDX                            = 374,
    SBK_QNATIVEINTERFACE_QX11APPLICATION_IDX                 = 378,
    SBK_QOFFSCREENSURFACE_IDX                                = 380,
    SBK_QOPENGLCONTEXT_OPENGLMODULETYPE_IDX                  = 384,
    SBK_QOPENGLCONTEXT_IDX                                   = 382,
    SBK_QOPENGLCONTEXTGROUP_IDX                              = 386,
    SBK_QOPENGLEXTRAFUNCTIONS_IDX                            = 388,
    SBK_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX                   = 392,
    SBK_QFLAGS_QOPENGLFUNCTIONS_OPENGLFEATURE_IDX            = 158,
    SBK_QOPENGLFUNCTIONS_IDX                                 = 390,
    SBK_QPAGELAYOUT_UNIT_IDX                                 = 400,
    SBK_QPAGELAYOUT_ORIENTATION_IDX                          = 398,
    SBK_QPAGELAYOUT_MODE_IDX                                 = 396,
    SBK_QPAGELAYOUT_IDX                                      = 394,
    SBK_QPAGERANGES_IDX                                      = 402,
    SBK_QPAGERANGES_RANGE_IDX                                = 404,
    SBK_QPAGESIZE_PAGESIZEID_IDX                             = 408,
    SBK_QPAGESIZE_UNIT_IDX                                   = 412,
    SBK_QPAGESIZE_SIZEMATCHPOLICY_IDX                        = 410,
    SBK_QPAGESIZE_IDX                                        = 406,
    SBK_QPAGEDPAINTDEVICE_PDFVERSION_IDX                     = 416,
    SBK_QPAGEDPAINTDEVICE_IDX                                = 414,
    SBK_QPAINTDEVICE_PAINTDEVICEMETRIC_IDX                   = 420,
    SBK_QPAINTDEVICE_IDX                                     = 418,
    SBK_QPAINTDEVICEWINDOW_IDX                               = 422,
    SBK_QPAINTENGINE_PAINTENGINEFEATURE_IDX                  = 428,
    SBK_QFLAGS_QPAINTENGINE_PAINTENGINEFEATURE_IDX           = 162,
    SBK_QPAINTENGINE_DIRTYFLAG_IDX                           = 426,
    SBK_QFLAGS_QPAINTENGINE_DIRTYFLAG_IDX                    = 160,
    SBK_QPAINTENGINE_POLYGONDRAWMODE_IDX                     = 430,
    SBK_QPAINTENGINE_TYPE_IDX                                = 432,
    SBK_QPAINTENGINE_IDX                                     = 424,
    SBK_QPAINTENGINESTATE_IDX                                = 434,
    SBK_QPAINTEVENT_IDX                                      = 436,
    SBK_QPAINTER_RENDERHINT_IDX                              = 446,
    SBK_QFLAGS_QPAINTER_RENDERHINT_IDX                       = 166,
    SBK_QPAINTER_PIXMAPFRAGMENTHINT_IDX                      = 444,
    SBK_QFLAGS_QPAINTER_PIXMAPFRAGMENTHINT_IDX               = 164,
    SBK_QPAINTER_COMPOSITIONMODE_IDX                         = 440,
    SBK_QPAINTER_IDX                                         = 438,
    SBK_QPAINTER_PIXMAPFRAGMENT_IDX                          = 442,
    SBK_QPAINTERPATH_ELEMENTTYPE_IDX                         = 452,
    SBK_QPAINTERPATH_IDX                                     = 448,
    SBK_QPAINTERPATH_ELEMENT_IDX                             = 450,
    SBK_QPAINTERPATHSTROKER_IDX                              = 454,
    SBK_QPALETTE_COLORGROUP_IDX                              = 458,
    SBK_QPALETTE_COLORROLE_IDX                               = 460,
    SBK_QPALETTE_IDX                                         = 456,
    SBK_QPDFWRITER_IDX                                       = 462,
    SBK_QPEN_IDX                                             = 464,
    SBK_QPICTURE_IDX                                         = 466,
    SBK_QPIXELFORMAT_COLORMODEL_IDX                          = 478,
    SBK_QPIXELFORMAT_ALPHAUSAGE_IDX                          = 474,
    SBK_QPIXELFORMAT_ALPHAPOSITION_IDX                       = 470,
    SBK_QPIXELFORMAT_ALPHAPREMULTIPLIED_IDX                  = 472,
    SBK_QPIXELFORMAT_TYPEINTERPRETATION_IDX                  = 480,
    SBK_QPIXELFORMAT_YUVLAYOUT_IDX                           = 482,
    SBK_QPIXELFORMAT_BYTEORDER_IDX                           = 476,
    SBK_QPIXELFORMAT_IDX                                     = 468,
    SBK_QPIXMAP_IDX                                          = 484,
    SBK_QPIXMAPCACHE_IDX                                     = 486,
    SBK_QPIXMAPCACHE_KEY_IDX                                 = 488,
    SBK_QPLATFORMSURFACEEVENT_SURFACEEVENTTYPE_IDX           = 492,
    SBK_QPLATFORMSURFACEEVENT_IDX                            = 490,
    SBK_QPOINTEREVENT_IDX                                    = 494,
    SBK_QPOINTINGDEVICE_POINTERTYPE_IDX                      = 500,
    SBK_QFLAGS_QPOINTINGDEVICE_POINTERTYPE_IDX               = 168,
    SBK_QPOINTINGDEVICE_GRABTRANSITION_IDX                   = 498,
    SBK_QPOINTINGDEVICE_IDX                                  = 496,
    SBK_QPOINTINGDEVICEUNIQUEID_IDX                          = 502,
    SBK_QPOLYGON_IDX                                         = 504,
    SBK_QPOLYGONF_IDX                                        = 506,
    SBK_QPYTEXTOBJECT_IDX                                    = 508,
    SBK_QQUATERNION_IDX                                      = 510,
    SBK_QRADIALGRADIENT_IDX                                  = 512,
    SBK_QRASTERWINDOW_IDX                                    = 514,
    SBK_QRAWFONT_ANTIALIASINGTYPE_IDX                        = 518,
    SBK_QRAWFONT_LAYOUTFLAG_IDX                              = 520,
    SBK_QFLAGS_QRAWFONT_LAYOUTFLAG_IDX                       = 170,
    SBK_QRAWFONT_IDX                                         = 516,
    SBK_QREGION_REGIONTYPE_IDX                               = 524,
    SBK_QREGION_IDX                                          = 522,
    SBK_QREGULAREXPRESSIONVALIDATOR_IDX                      = 526,
    SBK_QRESIZEEVENT_IDX                                     = 528,
    SBK_QRGBA64_IDX                                          = 530,
    SBK_QRHI_IMPLEMENTATION_IDX                              = 544,
    SBK_QRHI_FLAG_IDX                                        = 540,
    SBK_QFLAGS_QRHI_FLAG_IDX                                 = 176,
    SBK_QRHI_FRAMEOPRESULT_IDX                               = 542,
    SBK_QRHI_FEATURE_IDX                                     = 538,
    SBK_QRHI_BEGINFRAMEFLAG_IDX                              = 534,
    SBK_QFLAGS_QRHI_BEGINFRAMEFLAG_IDX                       = 172,
    SBK_QRHI_ENDFRAMEFLAG_IDX                                = 536,
    SBK_QFLAGS_QRHI_ENDFRAMEFLAG_IDX                         = 174,
    SBK_QRHI_RESOURCELIMIT_IDX                               = 546,
    SBK_QRHI_IDX                                             = 532,
    SBK_QRHIBUFFER_TYPE_IDX                                  = 550,
    SBK_QRHIBUFFER_USAGEFLAG_IDX                             = 552,
    SBK_QFLAGS_QRHIBUFFER_USAGEFLAG_IDX                      = 178,
    SBK_QRHIBUFFER_IDX                                       = 548,
    SBK_QRHICOLORATTACHMENT_IDX                              = 554,
    SBK_QRHICOMMANDBUFFER_INDEXFORMAT_IDX                    = 560,
    SBK_QRHICOMMANDBUFFER_BEGINPASSFLAG_IDX                  = 558,
    SBK_QFLAGS_QRHICOMMANDBUFFER_BEGINPASSFLAG_IDX           = 180,
    SBK_QRHICOMMANDBUFFER_IDX                                = 556,
    SBK_QRHICOMPUTEPIPELINE_FLAG_IDX                         = 564,
    SBK_QFLAGS_QRHICOMPUTEPIPELINE_FLAG_IDX                  = 182,
    SBK_QRHICOMPUTEPIPELINE_IDX                              = 562,
    SBK_QRHIDEPTHSTENCILCLEARVALUE_IDX                       = 566,
    SBK_QRHIDRIVERINFO_DEVICETYPE_IDX                        = 570,
    SBK_QRHIDRIVERINFO_IDX                                   = 568,
    SBK_QRHIGLES2INITPARAMS_IDX                              = 572,
    SBK_QRHIGLES2NATIVEHANDLES_IDX                           = 574,
    SBK_QRHIGRAPHICSPIPELINE_FLAG_IDX                        = 588,
    SBK_QFLAGS_QRHIGRAPHICSPIPELINE_FLAG_IDX                 = 186,
    SBK_QRHIGRAPHICSPIPELINE_TOPOLOGY_IDX                    = 600,
    SBK_QRHIGRAPHICSPIPELINE_CULLMODE_IDX                    = 586,
    SBK_QRHIGRAPHICSPIPELINE_FRONTFACE_IDX                   = 590,
    SBK_QRHIGRAPHICSPIPELINE_COLORMASKCOMPONENT_IDX          = 582,
    SBK_QFLAGS_QRHIGRAPHICSPIPELINE_COLORMASKCOMPONENT_IDX   = 184,
    SBK_QRHIGRAPHICSPIPELINE_BLENDFACTOR_IDX                 = 578,
    SBK_QRHIGRAPHICSPIPELINE_BLENDOP_IDX                     = 580,
    SBK_QRHIGRAPHICSPIPELINE_COMPAREOP_IDX                   = 584,
    SBK_QRHIGRAPHICSPIPELINE_STENCILOP_IDX                   = 594,
    SBK_QRHIGRAPHICSPIPELINE_POLYGONMODE_IDX                 = 592,
    SBK_QRHIGRAPHICSPIPELINE_IDX                             = 576,
    SBK_QRHIGRAPHICSPIPELINE_STENCILOPSTATE_IDX              = 596,
    SBK_QRHIGRAPHICSPIPELINE_TARGETBLEND_IDX                 = 598,
    SBK_QRHIINITPARAMS_IDX                                   = 602,
    SBK_QRHINATIVEHANDLES_IDX                                = 604,
    SBK_QRHINULLINITPARAMS_IDX                               = 606,
    SBK_QRHIREADBACKDESCRIPTION_IDX                          = 608,
    SBK_QRHIREADBACKRESULT_IDX                               = 610,
    SBK_QRHIRENDERBUFFER_TYPE_IDX                            = 616,
    SBK_QRHIRENDERBUFFER_FLAG_IDX                            = 614,
    SBK_QFLAGS_QRHIRENDERBUFFER_FLAG_IDX                     = 188,
    SBK_QRHIRENDERBUFFER_IDX                                 = 612,
    SBK_QRHIRENDERPASSDESCRIPTOR_IDX                         = 618,
    SBK_QRHIRENDERTARGET_IDX                                 = 620,
    SBK_QRHIRESOURCE_TYPE_IDX                                = 624,
    SBK_QRHIRESOURCE_IDX                                     = 622,
    SBK_QRHIRESOURCEUPDATEBATCH_IDX                          = 626,
    SBK_QRHISAMPLER_FILTER_IDX                               = 634,
    SBK_QRHISAMPLER_ADDRESSMODE_IDX                          = 630,
    SBK_QRHISAMPLER_COMPAREOP_IDX                            = 632,
    SBK_QRHISAMPLER_IDX                                      = 628,
    SBK_QRHISCISSOR_IDX                                      = 636,
    SBK_QRHISHADERRESOURCEBINDING_TYPE_IDX                   = 650,
    SBK_QRHISHADERRESOURCEBINDING_STAGEFLAG_IDX              = 646,
    SBK_QFLAGS_QRHISHADERRESOURCEBINDING_STAGEFLAG_IDX       = 190,
    SBK_QRHISHADERRESOURCEBINDING_IDX                        = 638,
    SBK_QRHISHADERRESOURCEBINDING_DATA_IDX                   = 640,
    SBK_QRHISHADERRESOURCEBINDING_DATA_STORAGEBUFFERDATA_IDX = 642,
    SBK_QRHISHADERRESOURCEBINDING_DATA_STORAGEIMAGEDATA_IDX  = 644,
    SBK_QRHISHADERRESOURCEBINDING_TEXTUREANDSAMPLER_IDX      = 648,
    SBK_QRHISHADERRESOURCEBINDINGS_UPDATEFLAG_IDX            = 654,
    SBK_QFLAGS_QRHISHADERRESOURCEBINDINGS_UPDATEFLAG_IDX     = 192,
    SBK_QRHISHADERRESOURCEBINDINGS_IDX                       = 652,
    SBK_QRHISHADERSTAGE_TYPE_IDX                             = 658,
    SBK_QRHISHADERSTAGE_IDX                                  = 656,
    SBK_QRHISTATS_IDX                                        = 660,
    SBK_QRHISWAPCHAIN_FLAG_IDX                               = 664,
    SBK_QFLAGS_QRHISWAPCHAIN_FLAG_IDX                        = 194,
    SBK_QRHISWAPCHAIN_FORMAT_IDX                             = 666,
    SBK_QRHISWAPCHAIN_STEREOTARGETBUFFER_IDX                 = 668,
    SBK_QRHISWAPCHAIN_IDX                                    = 662,
    SBK_QRHISWAPCHAINRENDERTARGET_IDX                        = 670,
    SBK_QRHITEXTURE_FLAG_IDX                                 = 674,
    SBK_QFLAGS_QRHITEXTURE_FLAG_IDX                          = 196,
    SBK_QRHITEXTURE_FORMAT_IDX                               = 676,
    SBK_QRHITEXTURE_IDX                                      = 672,
    SBK_QRHITEXTURECOPYDESCRIPTION_IDX                       = 678,
    SBK_QRHITEXTURERENDERTARGET_FLAG_IDX                     = 682,
    SBK_QFLAGS_QRHITEXTURERENDERTARGET_FLAG_IDX              = 198,
    SBK_QRHITEXTURERENDERTARGET_IDX                          = 680,
    SBK_QRHITEXTURERENDERTARGETDESCRIPTION_IDX               = 684,
    SBK_QRHITEXTURESUBRESOURCEUPLOADDESCRIPTION_IDX          = 686,
    SBK_QRHITEXTUREUPLOADDESCRIPTION_IDX                     = 688,
    SBK_QRHITEXTUREUPLOADENTRY_IDX                           = 690,
    SBK_QRHIVERTEXINPUTATTRIBUTE_FORMAT_IDX                  = 694,
    SBK_QRHIVERTEXINPUTATTRIBUTE_IDX                         = 692,
    SBK_QRHIVERTEXINPUTBINDING_CLASSIFICATION_IDX            = 698,
    SBK_QRHIVERTEXINPUTBINDING_IDX                           = 696,
    SBK_QRHIVERTEXINPUTLAYOUT_IDX                            = 700,
    SBK_QRHIVIEWPORT_IDX                                     = 702,
    SBK_QSCREEN_IDX                                          = 704,
    SBK_QSCROLLEVENT_SCROLLSTATE_IDX                         = 708,
    SBK_QSCROLLEVENT_IDX                                     = 706,
    SBK_QSCROLLPREPAREEVENT_IDX                              = 710,
    SBK_QSESSIONMANAGER_RESTARTHINT_IDX                      = 714,
    SBK_QSESSIONMANAGER_IDX                                  = 712,
    SBK_QSHADER_STAGE_IDX                                    = 722,
    SBK_QSHADER_SOURCE_IDX                                   = 720,
    SBK_QSHADER_VARIANT_IDX                                  = 724,
    SBK_QSHADER_SERIALIZEDFORMATVERSION_IDX                  = 718,
    SBK_QSHADER_IDX                                          = 716,
    SBK_QSHADERCODE_IDX                                      = 726,
    SBK_QSHADERKEY_IDX                                       = 728,
    SBK_QSHADERVERSION_FLAG_IDX                              = 732,
    SBK_QFLAGS_QSHADERVERSION_FLAG_IDX                       = 200,
    SBK_QSHADERVERSION_IDX                                   = 730,
    SBK_QSHORTCUT_IDX                                        = 734,
    SBK_QSHORTCUTEVENT_IDX                                   = 736,
    SBK_QSHOWEVENT_IDX                                       = 738,
    SBK_QSINGLEPOINTEVENT_IDX                                = 740,
    SBK_QSTANDARDITEM_ITEMTYPE_IDX                           = 744,
    SBK_QSTANDARDITEM_IDX                                    = 742,
    SBK_QSTANDARDITEMMODEL_IDX                               = 746,
    SBK_QSTATICTEXT_PERFORMANCEHINT_IDX                      = 750,
    SBK_QSTATICTEXT_IDX                                      = 748,
    SBK_QSTATUSTIPEVENT_IDX                                  = 752,
    SBK_QSTYLEHINTS_IDX                                      = 754,
    SBK_QSURFACE_SURFACECLASS_IDX                            = 758,
    SBK_QSURFACE_SURFACETYPE_IDX                             = 760,
    SBK_QSURFACE_IDX                                         = 756,
    SBK_QSURFACEFORMAT_FORMATOPTION_IDX                      = 766,
    SBK_QFLAGS_QSURFACEFORMAT_FORMATOPTION_IDX               = 202,
    SBK_QSURFACEFORMAT_SWAPBEHAVIOR_IDX                      = 772,
    SBK_QSURFACEFORMAT_RENDERABLETYPE_IDX                    = 770,
    SBK_QSURFACEFORMAT_OPENGLCONTEXTPROFILE_IDX              = 768,
    SBK_QSURFACEFORMAT_COLORSPACE_IDX                        = 764,
    SBK_QSURFACEFORMAT_IDX                                   = 762,
    SBK_QSYNTAXHIGHLIGHTER_IDX                               = 774,
    SBK_QTABLETEVENT_IDX                                     = 776,
    SBK_QTEXTBLOCK_IDX                                       = 778,
    SBK_QTEXTBLOCK_ITERATOR_IDX                              = 780,
    SBK_QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_IDX                 = 942,
    SBK_QTEXTBLOCKFORMAT_MARKERTYPE_IDX                      = 784,
    SBK_QTEXTBLOCKFORMAT_IDX                                 = 782,
    SBK_QTEXTBLOCKGROUP_IDX                                  = 786,
    SBK_QTEXTBLOCKUSERDATA_IDX                               = 788,
    SBK_QTEXTCHARFORMAT_VERTICALALIGNMENT_IDX                = 796,
    SBK_QTEXTCHARFORMAT_UNDERLINESTYLE_IDX                   = 794,
    SBK_QTEXTCHARFORMAT_FONTPROPERTIESINHERITANCEBEHAVIOR_IDX = 792,
    SBK_QTEXTCHARFORMAT_IDX                                  = 790,
    SBK_QTEXTCURSOR_MOVEMODE_IDX                             = 800,
    SBK_QTEXTCURSOR_MOVEOPERATION_IDX                        = 802,
    SBK_QTEXTCURSOR_SELECTIONTYPE_IDX                        = 804,
    SBK_QTEXTCURSOR_IDX                                      = 798,
    SBK_QTEXTDOCUMENT_METAINFORMATION_IDX                    = 812,
    SBK_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX                    = 810,
    SBK_QFLAGS_QTEXTDOCUMENT_MARKDOWNFEATURE_IDX             = 206,
    SBK_QTEXTDOCUMENT_FINDFLAG_IDX                           = 808,
    SBK_QFLAGS_QTEXTDOCUMENT_FINDFLAG_IDX                    = 204,
    SBK_QTEXTDOCUMENT_RESOURCETYPE_IDX                       = 814,
    SBK_QTEXTDOCUMENT_STACKS_IDX                             = 816,
    SBK_QTEXTDOCUMENT_IDX                                    = 806,
    SBK_QTEXTDOCUMENTFRAGMENT_IDX                            = 818,
    SBK_QTEXTDOCUMENTWRITER_IDX                              = 820,
    SBK_QTEXTFORMAT_FORMATTYPE_IDX                           = 824,
    SBK_QTEXTFORMAT_PROPERTY_IDX                             = 830,
    SBK_QTEXTFORMAT_OBJECTTYPES_IDX                          = 826,
    SBK_QTEXTFORMAT_PAGEBREAKFLAG_IDX                        = 828,
    SBK_QFLAGS_QTEXTFORMAT_PAGEBREAKFLAG_IDX                 = 208,
    SBK_QTEXTFORMAT_IDX                                      = 822,
    SBK_QTEXTFRAGMENT_IDX                                    = 832,
    SBK_QTEXTFRAME_IDX                                       = 834,
    SBK_QTEXTFRAME_ITERATOR_IDX                              = 836,
    SBK_QTEXTFRAMEFORMAT_POSITION_IDX                        = 842,
    SBK_QTEXTFRAMEFORMAT_BORDERSTYLE_IDX                     = 840,
    SBK_QTEXTFRAMEFORMAT_IDX                                 = 838,
    SBK_QTEXTIMAGEFORMAT_IDX                                 = 844,
    SBK_QTEXTINLINEOBJECT_IDX                                = 846,
    SBK_QTEXTITEM_RENDERFLAG_IDX                             = 850,
    SBK_QFLAGS_QTEXTITEM_RENDERFLAG_IDX                      = 210,
    SBK_QTEXTITEM_IDX                                        = 848,
    SBK_QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_IDX                = 858,
    SBK_QFLAGS_QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_IDX         = 212,
    SBK_QTEXTLAYOUT_CURSORMODE_IDX                           = 854,
    SBK_QTEXTLAYOUT_IDX                                      = 852,
    SBK_QTEXTLAYOUT_FORMATRANGE_IDX                          = 856,
    SBK_QTEXTLENGTH_TYPE_IDX                                 = 862,
    SBK_QTEXTLENGTH_IDX                                      = 860,
    SBK_QTEXTLINE_EDGE_IDX                                   = 868,
    SBK_QTEXTLINE_CURSORPOSITION_IDX                         = 866,
    SBK_QTEXTLINE_IDX                                        = 864,
    SBK_QTEXTLIST_IDX                                        = 870,
    SBK_QTEXTLISTFORMAT_STYLE_IDX                            = 874,
    SBK_QTEXTLISTFORMAT_IDX                                  = 872,
    SBK_QTEXTOBJECT_IDX                                      = 876,
    SBK_QTEXTOBJECTINTERFACE_IDX                             = 878,
    SBK_QTEXTOPTION_TABTYPE_IDX                              = 886,
    SBK_QTEXTOPTION_WRAPMODE_IDX                             = 888,
    SBK_QTEXTOPTION_FLAG_IDX                                 = 882,
    SBK_QFLAGS_QTEXTOPTION_FLAG_IDX                          = 214,
    SBK_QTEXTOPTION_IDX                                      = 880,
    SBK_QTEXTOPTION_TAB_IDX                                  = 884,
    SBK_QTEXTTABLE_IDX                                       = 890,
    SBK_QTEXTTABLECELL_IDX                                   = 892,
    SBK_QTEXTTABLECELLFORMAT_IDX                             = 894,
    SBK_QTEXTTABLEFORMAT_IDX                                 = 896,
    SBK_QTOOLBARCHANGEEVENT_IDX                              = 898,
    SBK_QTOUCHEVENT_IDX                                      = 900,
    SBK_QTRANSFORM_TRANSFORMATIONTYPE_IDX                    = 904,
    SBK_QTRANSFORM_IDX                                       = 902,
    SBK_QUNDOCOMMAND_IDX                                     = 906,
    SBK_QUNDOGROUP_IDX                                       = 908,
    SBK_QUNDOSTACK_IDX                                       = 910,
    SBK_QVALIDATOR_STATE_IDX                                 = 914,
    SBK_QVALIDATOR_IDX                                       = 912,
    SBK_QVECTOR2D_IDX                                        = 916,
    SBK_QVECTOR3D_IDX                                        = 918,
    SBK_QVECTOR4D_IDX                                        = 920,
    SBK_QWHATSTHISCLICKEDEVENT_IDX                           = 922,
    SBK_QWHEELEVENT_IDX                                      = 924,
    SBK_QWINDOW_VISIBILITY_IDX                               = 930,
    SBK_QWINDOW_ANCESTORMODE_IDX                             = 928,
    SBK_QWINDOW_IDX                                          = 926,
    SBK_QWINDOWSTATECHANGEEVENT_IDX                          = 932,
    SBK_QTGUIQT_IDX                                          = 934,
    SBK_QTGUIHELPER_QOVERRIDECURSORGUARD_IDX                 = 938,
    SBK_QTGUI_IDX_COUNT                                      = 944,
};

// Type indices
enum : int {
    SBK_QAbstractFileIconProvider_IconType_IDX               = 1,
    SBK_QAbstractFileIconProvider_Option_IDX                 = 2,
    SBK_QFlags_QAbstractFileIconProvider_Option_IDX          = 72,
    SBK_QAbstractFileIconProvider_IDX                        = 0,
    SBK_QAbstractTextDocumentLayout_IDX                      = 3,
    SBK_QAbstractTextDocumentLayout_PaintContext_IDX         = 4,
    SBK_QAbstractTextDocumentLayout_Selection_IDX            = 5,
    SBK_QAccessible_Event_IDX                                = 7,
    SBK_QAccessible_Role_IDX                                 = 10,
    SBK_QAccessible_Text_IDX                                 = 12,
    SBK_QAccessible_RelationFlag_IDX                         = 9,
    SBK_QFlags_QAccessible_RelationFlag_IDX                  = 73,
    SBK_QAccessible_InterfaceType_IDX                        = 8,
    SBK_QAccessible_TextBoundaryType_IDX                     = 13,
    SBK_QAccessible_IDX                                      = 6,
    SBK_QAccessible_State_IDX                                = 11,
    SBK_QAccessibleActionInterface_IDX                       = 14,
    SBK_QAccessibleEditableTextInterface_IDX                 = 15,
    SBK_QAccessibleEvent_IDX                                 = 16,
    SBK_QAccessibleInterface_IDX                             = 17,
    SBK_QAccessibleObject_IDX                                = 18,
    SBK_QAccessibleStateChangeEvent_IDX                      = 19,
    SBK_QAccessibleTableCellInterface_IDX                    = 20,
    SBK_QAccessibleTableModelChangeEvent_ModelChangeType_IDX = 22,
    SBK_QAccessibleTableModelChangeEvent_IDX                 = 21,
    SBK_QAccessibleTextCursorEvent_IDX                       = 23,
    SBK_QAccessibleTextInsertEvent_IDX                       = 24,
    SBK_QAccessibleTextInterface_IDX                         = 25,
    SBK_QAccessibleTextRemoveEvent_IDX                       = 26,
    SBK_QAccessibleTextSelectionEvent_IDX                    = 27,
    SBK_QAccessibleTextUpdateEvent_IDX                       = 28,
    SBK_QAccessibleValueChangeEvent_IDX                      = 29,
    SBK_QAccessibleValueInterface_IDX                        = 30,
    SBK_QAction_MenuRole_IDX                                 = 33,
    SBK_QAction_Priority_IDX                                 = 34,
    SBK_QAction_ActionEvent_IDX                              = 32,
    SBK_QAction_IDX                                          = 31,
    SBK_QActionEvent_IDX                                     = 35,
    SBK_QActionGroup_ExclusionPolicy_IDX                     = 37,
    SBK_QActionGroup_IDX                                     = 36,
    SBK_QBackingStore_IDX                                    = 38,
    SBK_QBitmap_IDX                                          = 39,
    SBK_QBrush_IDX                                           = 40,
    SBK_QChildWindowEvent_IDX                                = 41,
    SBK_QClipboard_Mode_IDX                                  = 43,
    SBK_QClipboard_IDX                                       = 42,
    SBK_QCloseEvent_IDX                                      = 44,
    SBK_QColor_Spec_IDX                                      = 47,
    SBK_QColor_NameFormat_IDX                                = 46,
    SBK_QColor_IDX                                           = 45,
    SBK_QtGuiQColorConstants_IDX                             = 48,
    SBK_QtGuiQColorConstants_Svg_IDX                         = 49,
    SBK_QColorSpace_NamedColorSpace_IDX                      = 51,
    SBK_QColorSpace_Primaries_IDX                            = 52,
    SBK_QColorSpace_TransferFunction_IDX                     = 53,
    SBK_QColorSpace_IDX                                      = 50,
    SBK_QColorTransform_IDX                                  = 54,
    SBK_QConicalGradient_IDX                                 = 55,
    SBK_QContextMenuEvent_Reason_IDX                         = 57,
    SBK_QContextMenuEvent_IDX                                = 56,
    SBK_QCursor_IDX                                          = 58,
    SBK_QDesktopServices_IDX                                 = 59,
    SBK_QDoubleValidator_Notation_IDX                        = 61,
    SBK_QDoubleValidator_IDX                                 = 60,
    SBK_QDrag_IDX                                            = 62,
    SBK_QDragEnterEvent_IDX                                  = 63,
    SBK_QDragLeaveEvent_IDX                                  = 64,
    SBK_QDragMoveEvent_IDX                                   = 65,
    SBK_QDropEvent_IDX                                       = 66,
    SBK_QEnterEvent_IDX                                      = 67,
    SBK_QEventPoint_State_IDX                                = 69,
    SBK_QEventPoint_IDX                                      = 68,
    SBK_QExposeEvent_IDX                                     = 70,
    SBK_QFileOpenEvent_IDX                                   = 71,
    SBK_QFocusEvent_IDX                                      = 108,
    SBK_QFont_StyleHint_IDX                                  = 114,
    SBK_QFont_StyleStrategy_IDX                              = 115,
    SBK_QFont_HintingPreference_IDX                          = 470,
    SBK_QFont_Weight_IDX                                     = 117,
    SBK_QFont_Style_IDX                                      = 113,
    SBK_QFont_Stretch_IDX                                    = 112,
    SBK_QFont_Capitalization_IDX                             = 110,
    SBK_QFont_SpacingType_IDX                                = 111,
    SBK_QFont_IDX                                            = 109,
    SBK_QFont_Tag_IDX                                        = 116,
    SBK_QFontDatabase_WritingSystem_IDX                      = 120,
    SBK_QFontDatabase_SystemFont_IDX                         = 119,
    SBK_QFontDatabase_IDX                                    = 118,
    SBK_QFontInfo_IDX                                        = 121,
    SBK_QFontMetrics_IDX                                     = 122,
    SBK_QFontMetricsF_IDX                                    = 123,
    SBK_QGlyphRun_GlyphRunFlag_IDX                           = 125,
    SBK_QFlags_QGlyphRun_GlyphRunFlag_IDX                    = 74,
    SBK_QGlyphRun_IDX                                        = 124,
    SBK_QGradient_Type_IDX                                   = 131,
    SBK_QGradient_Spread_IDX                                 = 130,
    SBK_QGradient_CoordinateMode_IDX                         = 127,
    SBK_QGradient_InterpolationMode_IDX                      = 128,
    SBK_QGradient_Preset_IDX                                 = 129,
    SBK_QGradient_IDX                                        = 126,
    SBK_QGuiApplication_IDX                                  = 132,
    SBK_QHelpEvent_IDX                                       = 133,
    SBK_QHideEvent_IDX                                       = 134,
    SBK_QHoverEvent_IDX                                      = 135,
    SBK_QIcon_Mode_IDX                                       = 137,
    SBK_QIcon_State_IDX                                      = 138,
    SBK_QIcon_ThemeIcon_IDX                                  = 139,
    SBK_QIcon_IDX                                            = 136,
    SBK_QIconDragEvent_IDX                                   = 140,
    SBK_QIconEngine_IconEngineHook_IDX                       = 142,
    SBK_QIconEngine_IDX                                      = 141,
    SBK_QIconEngine_ScaledPixmapArgument_IDX                 = 143,
    SBK_QImage_InvertMode_IDX                                = 146,
    SBK_QImage_Format_IDX                                    = 145,
    SBK_QImage_IDX                                           = 144,
    SBK_QImageIOHandler_ImageOption_IDX                      = 148,
    SBK_QImageIOHandler_Transformation_IDX                   = 149,
    SBK_QFlags_QImageIOHandler_Transformation_IDX            = 75,
    SBK_QImageIOHandler_IDX                                  = 147,
    SBK_QImageReader_ImageReaderError_IDX                    = 151,
    SBK_QImageReader_IDX                                     = 150,
    SBK_QImageWriter_ImageWriterError_IDX                    = 153,
    SBK_QImageWriter_IDX                                     = 152,
    SBK_QInputDevice_DeviceType_IDX                          = 156,
    SBK_QFlags_QInputDevice_DeviceType_IDX                   = 77,
    SBK_QInputDevice_Capability_IDX                          = 155,
    SBK_QFlags_QInputDevice_Capability_IDX                   = 76,
    SBK_QInputDevice_IDX                                     = 154,
    SBK_QInputEvent_IDX                                      = 157,
    SBK_QInputMethod_Action_IDX                              = 159,
    SBK_QInputMethod_IDX                                     = 158,
    SBK_QInputMethodEvent_AttributeType_IDX                  = 162,
    SBK_QInputMethodEvent_IDX                                = 160,
    SBK_QInputMethodEvent_Attribute_IDX                      = 161,
    SBK_QInputMethodQueryEvent_IDX                           = 163,
    SBK_QIntValidator_IDX                                    = 164,
    SBK_QKeyEvent_IDX                                        = 165,
    SBK_QKeySequence_StandardKey_IDX                         = 169,
    SBK_QKeySequence_SequenceFormat_IDX                      = 167,
    SBK_QKeySequence_SequenceMatch_IDX                       = 168,
    SBK_QKeySequence_IDX                                     = 166,
    SBK_QLinearGradient_IDX                                  = 170,
    SBK_QMatrix2x2_IDX                                       = 171,
    SBK_QGenericMatrix_2_2_float_IDX                         = 171,
    SBK_QMatrix2x3_IDX                                       = 172,
    SBK_QGenericMatrix_2_3_float_IDX                         = 172,
    SBK_QMatrix2x4_IDX                                       = 173,
    SBK_QGenericMatrix_2_4_float_IDX                         = 173,
    SBK_QMatrix3x2_IDX                                       = 174,
    SBK_QGenericMatrix_3_2_float_IDX                         = 174,
    SBK_QMatrix3x3_IDX                                       = 175,
    SBK_QGenericMatrix_3_3_float_IDX                         = 175,
    SBK_QMatrix3x4_IDX                                       = 176,
    SBK_QGenericMatrix_3_4_float_IDX                         = 176,
    SBK_QMatrix4x2_IDX                                       = 177,
    SBK_QGenericMatrix_4_2_float_IDX                         = 177,
    SBK_QMatrix4x3_IDX                                       = 178,
    SBK_QGenericMatrix_4_3_float_IDX                         = 178,
    SBK_QMatrix4x4_Flag_IDX                                  = 180,
    SBK_QFlags_QMatrix4x4_Flag_IDX                           = 78,
    SBK_QMatrix4x4_IDX                                       = 179,
    SBK_QMouseEvent_IDX                                      = 181,
    SBK_QMoveEvent_IDX                                       = 182,
    SBK_QMovie_MovieState_IDX                                = 185,
    SBK_QMovie_CacheMode_IDX                                 = 184,
    SBK_QMovie_IDX                                           = 183,
    SBK_QNativeGestureEvent_IDX                              = 186,
    SBK_QtGuiQNativeInterface_IDX                            = 187,
    SBK_QNativeInterface_QX11Application_IDX                 = 189,
    SBK_QOffscreenSurface_IDX                                = 190,
    SBK_QOpenGLContext_OpenGLModuleType_IDX                  = 192,
    SBK_QOpenGLContext_IDX                                   = 191,
    SBK_QOpenGLContextGroup_IDX                              = 193,
    SBK_QOpenGLExtraFunctions_IDX                            = 194,
    SBK_QOpenGLFunctions_OpenGLFeature_IDX                   = 196,
    SBK_QFlags_QOpenGLFunctions_OpenGLFeature_IDX            = 79,
    SBK_QOpenGLFunctions_IDX                                 = 195,
    SBK_QPageLayout_Unit_IDX                                 = 200,
    SBK_QPageLayout_Orientation_IDX                          = 199,
    SBK_QPageLayout_Mode_IDX                                 = 198,
    SBK_QPageLayout_IDX                                      = 197,
    SBK_QPageRanges_IDX                                      = 201,
    SBK_QPageRanges_Range_IDX                                = 202,
    SBK_QPageSize_PageSizeId_IDX                             = 204,
    SBK_QPageSize_Unit_IDX                                   = 206,
    SBK_QPageSize_SizeMatchPolicy_IDX                        = 205,
    SBK_QPageSize_IDX                                        = 203,
    SBK_QPagedPaintDevice_PdfVersion_IDX                     = 208,
    SBK_QPagedPaintDevice_IDX                                = 207,
    SBK_QPaintDevice_PaintDeviceMetric_IDX                   = 210,
    SBK_QPaintDevice_IDX                                     = 209,
    SBK_QPaintDeviceWindow_IDX                               = 211,
    SBK_QPaintEngine_PaintEngineFeature_IDX                  = 214,
    SBK_QFlags_QPaintEngine_PaintEngineFeature_IDX           = 81,
    SBK_QPaintEngine_DirtyFlag_IDX                           = 213,
    SBK_QFlags_QPaintEngine_DirtyFlag_IDX                    = 80,
    SBK_QPaintEngine_PolygonDrawMode_IDX                     = 215,
    SBK_QPaintEngine_Type_IDX                                = 216,
    SBK_QPaintEngine_IDX                                     = 212,
    SBK_QPaintEngineState_IDX                                = 217,
    SBK_QPaintEvent_IDX                                      = 218,
    SBK_QPainter_RenderHint_IDX                              = 223,
    SBK_QFlags_QPainter_RenderHint_IDX                       = 83,
    SBK_QPainter_PixmapFragmentHint_IDX                      = 222,
    SBK_QFlags_QPainter_PixmapFragmentHint_IDX               = 82,
    SBK_QPainter_CompositionMode_IDX                         = 220,
    SBK_QPainter_IDX                                         = 219,
    SBK_QPainter_PixmapFragment_IDX                          = 221,
    SBK_QPainterPath_ElementType_IDX                         = 226,
    SBK_QPainterPath_IDX                                     = 224,
    SBK_QPainterPath_Element_IDX                             = 225,
    SBK_QPainterPathStroker_IDX                              = 227,
    SBK_QPalette_ColorGroup_IDX                              = 229,
    SBK_QPalette_ColorRole_IDX                               = 230,
    SBK_QPalette_IDX                                         = 228,
    SBK_QPdfWriter_IDX                                       = 231,
    SBK_QPen_IDX                                             = 232,
    SBK_QPicture_IDX                                         = 233,
    SBK_QPixelFormat_ColorModel_IDX                          = 239,
    SBK_QPixelFormat_AlphaUsage_IDX                          = 237,
    SBK_QPixelFormat_AlphaPosition_IDX                       = 235,
    SBK_QPixelFormat_AlphaPremultiplied_IDX                  = 236,
    SBK_QPixelFormat_TypeInterpretation_IDX                  = 240,
    SBK_QPixelFormat_YUVLayout_IDX                           = 241,
    SBK_QPixelFormat_ByteOrder_IDX                           = 238,
    SBK_QPixelFormat_IDX                                     = 234,
    SBK_QPixmap_IDX                                          = 242,
    SBK_QPixmapCache_IDX                                     = 243,
    SBK_QPixmapCache_Key_IDX                                 = 244,
    SBK_QPlatformSurfaceEvent_SurfaceEventType_IDX           = 246,
    SBK_QPlatformSurfaceEvent_IDX                            = 245,
    SBK_QPointerEvent_IDX                                    = 247,
    SBK_QPointingDevice_PointerType_IDX                      = 250,
    SBK_QFlags_QPointingDevice_PointerType_IDX               = 84,
    SBK_QPointingDevice_GrabTransition_IDX                   = 249,
    SBK_QPointingDevice_IDX                                  = 248,
    SBK_QPointingDeviceUniqueId_IDX                          = 251,
    SBK_QPolygon_IDX                                         = 252,
    SBK_QPolygonF_IDX                                        = 253,
    SBK_QPyTextObject_IDX                                    = 254,
    SBK_QQuaternion_IDX                                      = 255,
    SBK_QRadialGradient_IDX                                  = 256,
    SBK_QRasterWindow_IDX                                    = 257,
    SBK_QRawFont_AntialiasingType_IDX                        = 259,
    SBK_QRawFont_LayoutFlag_IDX                              = 260,
    SBK_QFlags_QRawFont_LayoutFlag_IDX                       = 85,
    SBK_QRawFont_IDX                                         = 258,
    SBK_QRegion_RegionType_IDX                               = 262,
    SBK_QRegion_IDX                                          = 261,
    SBK_QRegularExpressionValidator_IDX                      = 263,
    SBK_QResizeEvent_IDX                                     = 264,
    SBK_QRgba64_IDX                                          = 265,
    SBK_QRhi_Implementation_IDX                              = 272,
    SBK_QRhi_Flag_IDX                                        = 270,
    SBK_QFlags_QRhi_Flag_IDX                                 = 88,
    SBK_QRhi_FrameOpResult_IDX                               = 271,
    SBK_QRhi_Feature_IDX                                     = 269,
    SBK_QRhi_BeginFrameFlag_IDX                              = 267,
    SBK_QFlags_QRhi_BeginFrameFlag_IDX                       = 86,
    SBK_QRhi_EndFrameFlag_IDX                                = 268,
    SBK_QFlags_QRhi_EndFrameFlag_IDX                         = 87,
    SBK_QRhi_ResourceLimit_IDX                               = 273,
    SBK_QRhi_IDX                                             = 266,
    SBK_QRhiBuffer_Type_IDX                                  = 275,
    SBK_QRhiBuffer_UsageFlag_IDX                             = 276,
    SBK_QFlags_QRhiBuffer_UsageFlag_IDX                      = 89,
    SBK_QRhiBuffer_IDX                                       = 274,
    SBK_QRhiColorAttachment_IDX                              = 277,
    SBK_QRhiCommandBuffer_IndexFormat_IDX                    = 280,
    SBK_QRhiCommandBuffer_BeginPassFlag_IDX                  = 279,
    SBK_QFlags_QRhiCommandBuffer_BeginPassFlag_IDX           = 90,
    SBK_QRhiCommandBuffer_IDX                                = 278,
    SBK_QRhiComputePipeline_Flag_IDX                         = 282,
    SBK_QFlags_QRhiComputePipeline_Flag_IDX                  = 91,
    SBK_QRhiComputePipeline_IDX                              = 281,
    SBK_QRhiDepthStencilClearValue_IDX                       = 283,
    SBK_QRhiDriverInfo_DeviceType_IDX                        = 285,
    SBK_QRhiDriverInfo_IDX                                   = 284,
    SBK_QRhiGles2InitParams_IDX                              = 286,
    SBK_QRhiGles2NativeHandles_IDX                           = 287,
    SBK_QRhiGraphicsPipeline_Flag_IDX                        = 294,
    SBK_QFlags_QRhiGraphicsPipeline_Flag_IDX                 = 93,
    SBK_QRhiGraphicsPipeline_Topology_IDX                    = 300,
    SBK_QRhiGraphicsPipeline_CullMode_IDX                    = 293,
    SBK_QRhiGraphicsPipeline_FrontFace_IDX                   = 295,
    SBK_QRhiGraphicsPipeline_ColorMaskComponent_IDX          = 291,
    SBK_QFlags_QRhiGraphicsPipeline_ColorMaskComponent_IDX   = 92,
    SBK_QRhiGraphicsPipeline_BlendFactor_IDX                 = 289,
    SBK_QRhiGraphicsPipeline_BlendOp_IDX                     = 290,
    SBK_QRhiGraphicsPipeline_CompareOp_IDX                   = 292,
    SBK_QRhiGraphicsPipeline_StencilOp_IDX                   = 297,
    SBK_QRhiGraphicsPipeline_PolygonMode_IDX                 = 296,
    SBK_QRhiGraphicsPipeline_IDX                             = 288,
    SBK_QRhiGraphicsPipeline_StencilOpState_IDX              = 298,
    SBK_QRhiGraphicsPipeline_TargetBlend_IDX                 = 299,
    SBK_QRhiInitParams_IDX                                   = 301,
    SBK_QRhiNativeHandles_IDX                                = 302,
    SBK_QRhiNullInitParams_IDX                               = 303,
    SBK_QRhiReadbackDescription_IDX                          = 304,
    SBK_QRhiReadbackResult_IDX                               = 305,
    SBK_QRhiRenderBuffer_Type_IDX                            = 308,
    SBK_QRhiRenderBuffer_Flag_IDX                            = 307,
    SBK_QFlags_QRhiRenderBuffer_Flag_IDX                     = 94,
    SBK_QRhiRenderBuffer_IDX                                 = 306,
    SBK_QRhiRenderPassDescriptor_IDX                         = 309,
    SBK_QRhiRenderTarget_IDX                                 = 310,
    SBK_QRhiResource_Type_IDX                                = 312,
    SBK_QRhiResource_IDX                                     = 311,
    SBK_QRhiResourceUpdateBatch_IDX                          = 313,
    SBK_QRhiSampler_Filter_IDX                               = 317,
    SBK_QRhiSampler_AddressMode_IDX                          = 315,
    SBK_QRhiSampler_CompareOp_IDX                            = 316,
    SBK_QRhiSampler_IDX                                      = 314,
    SBK_QRhiScissor_IDX                                      = 318,
    SBK_QRhiShaderResourceBinding_Type_IDX                   = 325,
    SBK_QRhiShaderResourceBinding_StageFlag_IDX              = 323,
    SBK_QFlags_QRhiShaderResourceBinding_StageFlag_IDX       = 95,
    SBK_QRhiShaderResourceBinding_IDX                        = 319,
    SBK_QRhiShaderResourceBinding_Data_IDX                   = 320,
    SBK_QRhiShaderResourceBinding_Data_StorageBufferData_IDX = 321,
    SBK_QRhiShaderResourceBinding_Data_StorageImageData_IDX  = 322,
    SBK_QRhiShaderResourceBinding_TextureAndSampler_IDX      = 324,
    SBK_QRhiShaderResourceBindings_UpdateFlag_IDX            = 327,
    SBK_QFlags_QRhiShaderResourceBindings_UpdateFlag_IDX     = 96,
    SBK_QRhiShaderResourceBindings_IDX                       = 326,
    SBK_QRhiShaderStage_Type_IDX                             = 329,
    SBK_QRhiShaderStage_IDX                                  = 328,
    SBK_QRhiStats_IDX                                        = 330,
    SBK_QRhiSwapChain_Flag_IDX                               = 332,
    SBK_QFlags_QRhiSwapChain_Flag_IDX                        = 97,
    SBK_QRhiSwapChain_Format_IDX                             = 333,
    SBK_QRhiSwapChain_StereoTargetBuffer_IDX                 = 334,
    SBK_QRhiSwapChain_IDX                                    = 331,
    SBK_QRhiSwapChainRenderTarget_IDX                        = 335,
    SBK_QRhiTexture_Flag_IDX                                 = 337,
    SBK_QFlags_QRhiTexture_Flag_IDX                          = 98,
    SBK_QRhiTexture_Format_IDX                               = 338,
    SBK_QRhiTexture_IDX                                      = 336,
    SBK_QRhiTextureCopyDescription_IDX                       = 339,
    SBK_QRhiTextureRenderTarget_Flag_IDX                     = 341,
    SBK_QFlags_QRhiTextureRenderTarget_Flag_IDX              = 99,
    SBK_QRhiTextureRenderTarget_IDX                          = 340,
    SBK_QRhiTextureRenderTargetDescription_IDX               = 342,
    SBK_QRhiTextureSubresourceUploadDescription_IDX          = 343,
    SBK_QRhiTextureUploadDescription_IDX                     = 344,
    SBK_QRhiTextureUploadEntry_IDX                           = 345,
    SBK_QRhiVertexInputAttribute_Format_IDX                  = 347,
    SBK_QRhiVertexInputAttribute_IDX                         = 346,
    SBK_QRhiVertexInputBinding_Classification_IDX            = 349,
    SBK_QRhiVertexInputBinding_IDX                           = 348,
    SBK_QRhiVertexInputLayout_IDX                            = 350,
    SBK_QRhiViewport_IDX                                     = 351,
    SBK_QScreen_IDX                                          = 352,
    SBK_QScrollEvent_ScrollState_IDX                         = 354,
    SBK_QScrollEvent_IDX                                     = 353,
    SBK_QScrollPrepareEvent_IDX                              = 355,
    SBK_QSessionManager_RestartHint_IDX                      = 357,
    SBK_QSessionManager_IDX                                  = 356,
    SBK_QShader_Stage_IDX                                    = 361,
    SBK_QShader_Source_IDX                                   = 360,
    SBK_QShader_Variant_IDX                                  = 362,
    SBK_QShader_SerializedFormatVersion_IDX                  = 359,
    SBK_QShader_IDX                                          = 358,
    SBK_QShaderCode_IDX                                      = 363,
    SBK_QShaderKey_IDX                                       = 364,
    SBK_QShaderVersion_Flag_IDX                              = 366,
    SBK_QFlags_QShaderVersion_Flag_IDX                       = 100,
    SBK_QShaderVersion_IDX                                   = 365,
    SBK_QShortcut_IDX                                        = 367,
    SBK_QShortcutEvent_IDX                                   = 368,
    SBK_QShowEvent_IDX                                       = 369,
    SBK_QSinglePointEvent_IDX                                = 370,
    SBK_QStandardItem_ItemType_IDX                           = 372,
    SBK_QStandardItem_IDX                                    = 371,
    SBK_QStandardItemModel_IDX                               = 373,
    SBK_QStaticText_PerformanceHint_IDX                      = 375,
    SBK_QStaticText_IDX                                      = 374,
    SBK_QStatusTipEvent_IDX                                  = 376,
    SBK_QStyleHints_IDX                                      = 377,
    SBK_QSurface_SurfaceClass_IDX                            = 379,
    SBK_QSurface_SurfaceType_IDX                             = 380,
    SBK_QSurface_IDX                                         = 378,
    SBK_QSurfaceFormat_FormatOption_IDX                      = 383,
    SBK_QFlags_QSurfaceFormat_FormatOption_IDX               = 101,
    SBK_QSurfaceFormat_SwapBehavior_IDX                      = 386,
    SBK_QSurfaceFormat_RenderableType_IDX                    = 385,
    SBK_QSurfaceFormat_OpenGLContextProfile_IDX              = 384,
    SBK_QSurfaceFormat_ColorSpace_IDX                        = 382,
    SBK_QSurfaceFormat_IDX                                   = 381,
    SBK_QSyntaxHighlighter_IDX                               = 387,
    SBK_QTabletEvent_IDX                                     = 388,
    SBK_QTextBlock_IDX                                       = 389,
    SBK_QTextBlock_iterator_IDX                              = 390,
    SBK_QTextBlockFormat_LineHeightTypes_IDX                 = 471,
    SBK_QTextBlockFormat_MarkerType_IDX                      = 392,
    SBK_QTextBlockFormat_IDX                                 = 391,
    SBK_QTextBlockGroup_IDX                                  = 393,
    SBK_QTextBlockUserData_IDX                               = 394,
    SBK_QTextCharFormat_VerticalAlignment_IDX                = 398,
    SBK_QTextCharFormat_UnderlineStyle_IDX                   = 397,
    SBK_QTextCharFormat_FontPropertiesInheritanceBehavior_IDX = 396,
    SBK_QTextCharFormat_IDX                                  = 395,
    SBK_QTextCursor_MoveMode_IDX                             = 400,
    SBK_QTextCursor_MoveOperation_IDX                        = 401,
    SBK_QTextCursor_SelectionType_IDX                        = 402,
    SBK_QTextCursor_IDX                                      = 399,
    SBK_QTextDocument_MetaInformation_IDX                    = 406,
    SBK_QTextDocument_MarkdownFeature_IDX                    = 405,
    SBK_QFlags_QTextDocument_MarkdownFeature_IDX             = 103,
    SBK_QTextDocument_FindFlag_IDX                           = 404,
    SBK_QFlags_QTextDocument_FindFlag_IDX                    = 102,
    SBK_QTextDocument_ResourceType_IDX                       = 407,
    SBK_QTextDocument_Stacks_IDX                             = 408,
    SBK_QTextDocument_IDX                                    = 403,
    SBK_QTextDocumentFragment_IDX                            = 409,
    SBK_QTextDocumentWriter_IDX                              = 410,
    SBK_QTextFormat_FormatType_IDX                           = 412,
    SBK_QTextFormat_Property_IDX                             = 415,
    SBK_QTextFormat_ObjectTypes_IDX                          = 413,
    SBK_QTextFormat_PageBreakFlag_IDX                        = 414,
    SBK_QFlags_QTextFormat_PageBreakFlag_IDX                 = 104,
    SBK_QTextFormat_IDX                                      = 411,
    SBK_QTextFragment_IDX                                    = 416,
    SBK_QTextFrame_IDX                                       = 417,
    SBK_QTextFrame_iterator_IDX                              = 418,
    SBK_QTextFrameFormat_Position_IDX                        = 421,
    SBK_QTextFrameFormat_BorderStyle_IDX                     = 420,
    SBK_QTextFrameFormat_IDX                                 = 419,
    SBK_QTextImageFormat_IDX                                 = 422,
    SBK_QTextInlineObject_IDX                                = 423,
    SBK_QTextItem_RenderFlag_IDX                             = 425,
    SBK_QFlags_QTextItem_RenderFlag_IDX                      = 105,
    SBK_QTextItem_IDX                                        = 424,
    SBK_QTextLayout_GlyphRunRetrievalFlag_IDX                = 429,
    SBK_QFlags_QTextLayout_GlyphRunRetrievalFlag_IDX         = 106,
    SBK_QTextLayout_CursorMode_IDX                           = 427,
    SBK_QTextLayout_IDX                                      = 426,
    SBK_QTextLayout_FormatRange_IDX                          = 428,
    SBK_QTextLength_Type_IDX                                 = 431,
    SBK_QTextLength_IDX                                      = 430,
    SBK_QTextLine_Edge_IDX                                   = 434,
    SBK_QTextLine_CursorPosition_IDX                         = 433,
    SBK_QTextLine_IDX                                        = 432,
    SBK_QTextList_IDX                                        = 435,
    SBK_QTextListFormat_Style_IDX                            = 437,
    SBK_QTextListFormat_IDX                                  = 436,
    SBK_QTextObject_IDX                                      = 438,
    SBK_QTextObjectInterface_IDX                             = 439,
    SBK_QTextOption_TabType_IDX                              = 443,
    SBK_QTextOption_WrapMode_IDX                             = 444,
    SBK_QTextOption_Flag_IDX                                 = 441,
    SBK_QFlags_QTextOption_Flag_IDX                          = 107,
    SBK_QTextOption_IDX                                      = 440,
    SBK_QTextOption_Tab_IDX                                  = 442,
    SBK_QTextTable_IDX                                       = 445,
    SBK_QTextTableCell_IDX                                   = 446,
    SBK_QTextTableCellFormat_IDX                             = 447,
    SBK_QTextTableFormat_IDX                                 = 448,
    SBK_QToolBarChangeEvent_IDX                              = 449,
    SBK_QTouchEvent_IDX                                      = 450,
    SBK_QTransform_TransformationType_IDX                    = 452,
    SBK_QTransform_IDX                                       = 451,
    SBK_QUndoCommand_IDX                                     = 453,
    SBK_QUndoGroup_IDX                                       = 454,
    SBK_QUndoStack_IDX                                       = 455,
    SBK_QValidator_State_IDX                                 = 457,
    SBK_QValidator_IDX                                       = 456,
    SBK_QVector2D_IDX                                        = 458,
    SBK_QVector3D_IDX                                        = 459,
    SBK_QVector4D_IDX                                        = 460,
    SBK_QWhatsThisClickedEvent_IDX                           = 461,
    SBK_QWheelEvent_IDX                                      = 462,
    SBK_QWindow_Visibility_IDX                               = 465,
    SBK_QWindow_AncestorMode_IDX                             = 464,
    SBK_QWindow_IDX                                          = 463,
    SBK_QWindowStateChangeEvent_IDX                          = 466,
    SBK_QtGuiQt_IDX                                          = 467,
    SBK_QtGuiHelper_QOverrideCursorGuard_IDX                 = 469,
    SBK_QtGui_IDX_COUNT                                      = 472,
};

// This variable stores all Python types exported by this module.
extern Shiboken::Module::TypeInitStruct *SbkPySide6_QtGuiTypeStructs;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtGuiModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtGuiTypeConverters;

// Converter indices
enum [[deprecated]] : int {
    SBK_WID_IDX                                              = 0,
    SBK_QTGUI_QLIST_INT_IDX                                  = 2, // QList<int>
    SBK_QTGUI_QLIST_QVECTOR2D_IDX                            = 4, // QList<QVector2D>
    SBK_QTGUI_QLIST_QVECTOR3D_IDX                            = 6, // QList<QVector3D>
    SBK_QTGUI_QLIST_QVECTOR4D_IDX                            = 8, // QList<QVector4D>
    SBK_QTGUI_QLIST_QREAL_IDX                                = 10, // QList<qreal>
    SBK_QTGUI_QLIST_QTEXTOPTION_TAB_IDX                      = 12, // QList<QTextOption::Tab>
    SBK_QTGUI_QLIST_QGLYPHRUN_IDX                            = 14, // QList<QGlyphRun>
    SBK_QTGUI_QLIST_QTEXTLENGTH_IDX                          = 16, // QList<QTextLength>
    SBK_QTGUI_QMAP_INT_QVARIANT_IDX                          = 18, // QMap<int,QVariant>
    SBK_QTGUI_QLIST_QTEXTLAYOUT_FORMATRANGE_IDX              = 20, // QList<QTextLayout::FormatRange>
    SBK_QTGUI_STD_PAIR_INT_INT_IDX                           = 22, // std::pair<int,int>
    SBK_QTGUI_QLIST_QSTANDARDITEMPTR_IDX                     = 24, // QList<QStandardItem*>
    SBK_QTGUI_QLIST_QSHADERKEY_IDX                           = 26, // QList<QShaderKey>
    SBK_QTGUI_QMAP_INT_STD_PAIR_INT_INT_IDX                  = 28, // QMap<int,std::pair< int,int>>
    SBK_QTGUI_STD_ARRAY_FLOAT_4_IDX                          = 30, // std::array<float,4>
    SBK_QTGUI_QLIST_QRHIVERTEXINPUTATTRIBUTE_IDX             = 32, // QList<QRhiVertexInputAttribute>
    SBK_QTGUI_QLIST_QRHIVERTEXINPUTBINDING_IDX               = 34, // QList<QRhiVertexInputBinding>
    SBK_QTGUI_QLIST_QRHITEXTUREUPLOADENTRY_IDX               = 36, // QList<QRhiTextureUploadEntry>
    SBK_QTGUI_QLIST_QRHICOLORATTACHMENT_IDX                  = 38, // QList<QRhiColorAttachment>
    SBK_QTGUI_STD_ARRAY_INT_4_IDX                            = 40, // std::array<int,4>
    SBK_QTGUI_QLIST_QPOINTF_IDX                              = 42, // QList<QPointF>
    SBK_QTGUI_QLIST_QUINT32_IDX                              = 44, // QList<quint32>
    SBK_QTGUI_QLIST_QFONTDATABASE_WRITINGSYSTEM_IDX          = 46, // QList<QFontDatabase::WritingSystem>
    SBK_QTGUI_QLIST_QPOINT_IDX                               = 48, // QList<QPoint>
    SBK_QTGUI_QLIST_QPOLYGONF_IDX                            = 50, // QList<QPolygonF>
    SBK_QTGUI_QLIST_QPAGERANGES_RANGE_IDX                    = 52, // QList<QPageRanges::Range>
    SBK_QTGUI_QLIST_FLOAT_IDX                                = 54, // QList<float>
    SBK_QTGUI_QLIST_QSIZE_IDX                                = 56, // QList<QSize>
    SBK_QTGUI_STD_PAIR_QREAL_QCOLOR_IDX                      = 58, // std::pair<qreal,QColor>
    SBK_QTGUI_QLIST_STD_PAIR_QREAL_QCOLOR_IDX                = 60, // QList<std::pair< qreal,QColor>>
    SBK_QTGUI_QLIST_QSIZETYPE_IDX                            = 62, // QList<qsizetype>
    SBK_QTGUI_QLIST_QFONT_TAG_IDX                            = 64, // QList<QFont::Tag>
    SBK_QTGUI_QLIST_UINT16_T_IDX                             = 66, // QList<uint16_t>
    SBK_QTGUI_QLIST_QACCESSIBLEINTERFACEPTR_IDX              = 68, // QList<QAccessibleInterface*>
    SBK_QTGUI_STD_PAIR_QACCESSIBLEINTERFACEPTR_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX = 70, // std::pair<QAccessibleInterface*,QFlags<QAccessible::RelationFlag>>
    SBK_QTGUI_QLIST_STD_PAIR_QACCESSIBLEINTERFACEPTR_QFLAGS_QACCESSIBLE_RELATIONFLAG_IDX = 72, // QList<std::pair< QAccessibleInterface*,QFlags<QAccessible::RelationFlag>>>
    SBK_QTGUI_QLIST_UNSIGNEDINT_IDX                          = 74, // QList<unsigned int>
    SBK_QTGUI_QLIST_QLINE_IDX                                = 76, // QList<QLine>
    SBK_QTGUI_QLIST_QLINEF_IDX                               = 78, // QList<QLineF>
    SBK_QTGUI_QLIST_QRECT_IDX                                = 80, // QList<QRect>
    SBK_QTGUI_QLIST_QRECTF_IDX                               = 82, // QList<QRectF>
    SBK_QTGUI_QLIST_QKEYSEQUENCE_IDX                         = 84, // QList<QKeySequence>
    SBK_QTGUI_QLIST_QOBJECTPTR_IDX                           = 86, // QList<QObject*>
    SBK_QTGUI_QLIST_QBYTEARRAY_IDX                           = 88, // QList<QByteArray>
    SBK_QTGUI_QLIST_QUNDOSTACKPTR_IDX                        = 90, // QList<QUndoStack*>
    SBK_QTGUI_QLIST_QTEXTFRAMEPTR_IDX                        = 92, // QList<QTextFrame*>
    SBK_QTGUI_QLIST_QTEXTBLOCK_IDX                           = 94, // QList<QTextBlock>
    SBK_QTGUI_QLIST_QTEXTFORMAT_IDX                          = 96, // QList<QTextFormat>
    SBK_QTGUI_QLIST_QSCREENPTR_IDX                           = 98, // QList<QScreen*>
    SBK_QTGUI_QLIST_QOPENGLCONTEXTPTR_IDX                    = 100, // QList<QOpenGLContext*>
    SBK_QTGUI_QSET_QBYTEARRAY_IDX                            = 102, // QSet<QByteArray>
    SBK_QTGUI_QLIST_CONSTQINPUTDEVICEPTR_IDX                 = 104, // QList<const QInputDevice*>
    SBK_QTGUI_QLIST_QACTIONPTR_IDX                           = 106, // QList<QAction*>
    SBK_QTGUI_QLIST_QABSTRACTTEXTDOCUMENTLAYOUT_SELECTION_IDX = 108, // QList<QAbstractTextDocumentLayout::Selection>
    SBK_QTGUI_QLIST_QINPUTMETHODEVENT_ATTRIBUTE_IDX          = 110, // QList<QInputMethodEvent::Attribute>
    SBK_QTGUI_QLIST_QEVENTPOINT_IDX                          = 112, // QList<QEventPoint>
    SBK_QTGUI_QLIST_QWINDOWPTR_IDX                           = 114, // QList<QWindow*>
    SBK_QTGUI_QLIST_QRHISHADERRESOURCEBINDING_IDX            = 116, // QList<QRhiShaderResourceBinding>
    SBK_QTGUI_QLIST_QRHISHADERSTAGE_IDX                      = 118, // QList<QRhiShaderStage>
    SBK_QTGUI_QLIST_QRHIGRAPHICSPIPELINE_TARGETBLEND_IDX     = 120, // QList<QRhiGraphicsPipeline::TargetBlend>
    SBK_QTGUI_STD_PAIR_INT_UNSIGNEDINT_IDX                   = 122, // std::pair<int,unsigned int>
    SBK_QTGUI_STD_PAIR_QRHIBUFFERPTR_QUINT32_IDX             = 124, // std::pair<QRhiBuffer*,quint32>
    SBK_QTGUI_QLIST_STD_PAIR_QRHIBUFFERPTR_QUINT32_IDX       = 126, // QList<std::pair< QRhiBuffer*,quint32>>
    SBK_QTGUI_STD_PAIR_QRHIBUFFERPTR_UNSIGNEDINT_IDX         = 128, // std::pair<QRhiBuffer*,unsigned int>
    SBK_QTGUI_QLIST_QMODELINDEX_IDX                          = 130, // QList<QModelIndex>
    SBK_QTGUI_QHASH_INT_QBYTEARRAY_IDX                       = 132, // QHash<int,QByteArray>
    SBK_QTGUI_QLIST_QVARIANT_IDX                             = 134, // QList<QVariant>
    SBK_QTGUI_QLIST_QSTRING_IDX                              = 136, // QList<QString>
    SBK_QTGUI_QMAP_QSTRING_QVARIANT_IDX                      = 138, // QMap<QString,QVariant>
    SBK_QTGUI_CONVERTERS_IDX_COUNT                           = 140,
};

// Converter indices
enum : int {
    SBK_WId_IDX                                              = 0,
    SBK_QtGui_QList_int_IDX                                  = 1, // QList<int>
    SBK_QtGui_QList_QVector2D_IDX                            = 2, // QList<QVector2D>
    SBK_QtGui_QList_QVector3D_IDX                            = 3, // QList<QVector3D>
    SBK_QtGui_QList_QVector4D_IDX                            = 4, // QList<QVector4D>
    SBK_QtGui_QList_qreal_IDX                                = 5, // QList<qreal>
    SBK_QtGui_QList_QTextOption_Tab_IDX                      = 6, // QList<QTextOption::Tab>
    SBK_QtGui_QList_QGlyphRun_IDX                            = 7, // QList<QGlyphRun>
    SBK_QtGui_QList_QTextLength_IDX                          = 8, // QList<QTextLength>
    SBK_QtGui_QMap_int_QVariant_IDX                          = 9, // QMap<int,QVariant>
    SBK_QtGui_QList_QTextLayout_FormatRange_IDX              = 10, // QList<QTextLayout::FormatRange>
    SBK_QtGui_std_pair_int_int_IDX                           = 11, // std::pair<int,int>
    SBK_QtGui_QList_QStandardItemPTR_IDX                     = 12, // QList<QStandardItem*>
    SBK_QtGui_QList_QShaderKey_IDX                           = 13, // QList<QShaderKey>
    SBK_QtGui_QMap_int_std_pair_int_int_IDX                  = 14, // QMap<int,std::pair< int,int>>
    SBK_QtGui_std_array_float_4_IDX                          = 15, // std::array<float,4>
    SBK_QtGui_QList_QRhiVertexInputAttribute_IDX             = 16, // QList<QRhiVertexInputAttribute>
    SBK_QtGui_QList_QRhiVertexInputBinding_IDX               = 17, // QList<QRhiVertexInputBinding>
    SBK_QtGui_QList_QRhiTextureUploadEntry_IDX               = 18, // QList<QRhiTextureUploadEntry>
    SBK_QtGui_QList_QRhiColorAttachment_IDX                  = 19, // QList<QRhiColorAttachment>
    SBK_QtGui_std_array_int_4_IDX                            = 20, // std::array<int,4>
    SBK_QtGui_QList_QPointF_IDX                              = 21, // QList<QPointF>
    SBK_QtGui_QList_quint32_IDX                              = 22, // QList<quint32>
    SBK_QtGui_QList_QFontDatabase_WritingSystem_IDX          = 23, // QList<QFontDatabase::WritingSystem>
    SBK_QtGui_QList_QPoint_IDX                               = 24, // QList<QPoint>
    SBK_QtGui_QList_QPolygonF_IDX                            = 25, // QList<QPolygonF>
    SBK_QtGui_QList_QPageRanges_Range_IDX                    = 26, // QList<QPageRanges::Range>
    SBK_QtGui_QList_float_IDX                                = 27, // QList<float>
    SBK_QtGui_QList_QSize_IDX                                = 28, // QList<QSize>
    SBK_QtGui_std_pair_qreal_QColor_IDX                      = 29, // std::pair<qreal,QColor>
    SBK_QtGui_QList_std_pair_qreal_QColor_IDX                = 30, // QList<std::pair< qreal,QColor>>
    SBK_QtGui_QList_qsizetype_IDX                            = 31, // QList<qsizetype>
    SBK_QtGui_QList_QFont_Tag_IDX                            = 32, // QList<QFont::Tag>
    SBK_QtGui_QList_uint16_t_IDX                             = 33, // QList<uint16_t>
    SBK_QtGui_QList_QAccessibleInterfacePTR_IDX              = 34, // QList<QAccessibleInterface*>
    SBK_QtGui_std_pair_QAccessibleInterfacePTR_QFlags_QAccessible_RelationFlag_IDX = 35, // std::pair<QAccessibleInterface*,QFlags<QAccessible::RelationFlag>>
    SBK_QtGui_QList_std_pair_QAccessibleInterfacePTR_QFlags_QAccessible_RelationFlag_IDX = 36, // QList<std::pair< QAccessibleInterface*,QFlags<QAccessible::RelationFlag>>>
    SBK_QtGui_QList_unsignedint_IDX                          = 37, // QList<unsigned int>
    SBK_QtGui_QList_QLine_IDX                                = 38, // QList<QLine>
    SBK_QtGui_QList_QLineF_IDX                               = 39, // QList<QLineF>
    SBK_QtGui_QList_QRect_IDX                                = 40, // QList<QRect>
    SBK_QtGui_QList_QRectF_IDX                               = 41, // QList<QRectF>
    SBK_QtGui_QList_QKeySequence_IDX                         = 42, // QList<QKeySequence>
    SBK_QtGui_QList_QObjectPTR_IDX                           = 43, // QList<QObject*>
    SBK_QtGui_QList_QByteArray_IDX                           = 44, // QList<QByteArray>
    SBK_QtGui_QList_QUndoStackPTR_IDX                        = 45, // QList<QUndoStack*>
    SBK_QtGui_QList_QTextFramePTR_IDX                        = 46, // QList<QTextFrame*>
    SBK_QtGui_QList_QTextBlock_IDX                           = 47, // QList<QTextBlock>
    SBK_QtGui_QList_QTextFormat_IDX                          = 48, // QList<QTextFormat>
    SBK_QtGui_QList_QScreenPTR_IDX                           = 49, // QList<QScreen*>
    SBK_QtGui_QList_QOpenGLContextPTR_IDX                    = 50, // QList<QOpenGLContext*>
    SBK_QtGui_QSet_QByteArray_IDX                            = 51, // QSet<QByteArray>
    SBK_QtGui_QList_constQInputDevicePTR_IDX                 = 52, // QList<const QInputDevice*>
    SBK_QtGui_QList_QActionPTR_IDX                           = 53, // QList<QAction*>
    SBK_QtGui_QList_QAbstractTextDocumentLayout_Selection_IDX = 54, // QList<QAbstractTextDocumentLayout::Selection>
    SBK_QtGui_QList_QInputMethodEvent_Attribute_IDX          = 55, // QList<QInputMethodEvent::Attribute>
    SBK_QtGui_QList_QEventPoint_IDX                          = 56, // QList<QEventPoint>
    SBK_QtGui_QList_QWindowPTR_IDX                           = 57, // QList<QWindow*>
    SBK_QtGui_QList_QRhiShaderResourceBinding_IDX            = 58, // QList<QRhiShaderResourceBinding>
    SBK_QtGui_QList_QRhiShaderStage_IDX                      = 59, // QList<QRhiShaderStage>
    SBK_QtGui_QList_QRhiGraphicsPipeline_TargetBlend_IDX     = 60, // QList<QRhiGraphicsPipeline::TargetBlend>
    SBK_QtGui_std_pair_int_unsignedint_IDX                   = 61, // std::pair<int,unsigned int>
    SBK_QtGui_std_pair_QRhiBufferPTR_quint32_IDX             = 62, // std::pair<QRhiBuffer*,quint32>
    SBK_QtGui_QList_std_pair_QRhiBufferPTR_quint32_IDX       = 63, // QList<std::pair< QRhiBuffer*,quint32>>
    SBK_QtGui_std_pair_QRhiBufferPTR_unsignedint_IDX         = 64, // std::pair<QRhiBuffer*,unsigned int>
    SBK_QtGui_QList_QModelIndex_IDX                          = 65, // QList<QModelIndex>
    SBK_QtGui_QHash_int_QByteArray_IDX                       = 66, // QHash<int,QByteArray>
    SBK_QtGui_QList_QVariant_IDX                             = 67, // QList<QVariant>
    SBK_QtGui_QList_QString_IDX                              = 68, // QList<QString>
    SBK_QtGui_QMap_QString_QVariant_IDX                      = 69, // QMap<QString,QVariant>
    SBK_QtGui_CONVERTERS_IDX_COUNT                           = 70,
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QAbstractFileIconProvider::IconType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAbstractFileIconProvider_IconType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractFileIconProvider::Option >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAbstractFileIconProvider_Option_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QAbstractFileIconProvider::Option> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QAbstractFileIconProvider_Option_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractFileIconProvider >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAbstractFileIconProvider_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAbstractTextDocumentLayout_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout::PaintContext >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAbstractTextDocumentLayout_PaintContext_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAbstractTextDocumentLayout::Selection >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAbstractTextDocumentLayout_Selection_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::Event >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessible_Event_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::Role >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessible_Role_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::Text >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessible_Text_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::RelationFlag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessible_RelationFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QAccessible::RelationFlag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QAccessible_RelationFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::InterfaceType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessible_InterfaceType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::TextBoundaryType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessible_TextBoundaryType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessible_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessible::State >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessible_State_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleActionInterface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleActionInterface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleEditableTextInterface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleEditableTextInterface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleInterface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleInterface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleObject >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleObject_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleStateChangeEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleStateChangeEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableCellInterface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTableCellInterface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableModelChangeEvent::ModelChangeType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTableModelChangeEvent_ModelChangeType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTableModelChangeEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTableModelChangeEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextCursorEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTextCursorEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextInsertEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTextInsertEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextInterface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTextInterface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextRemoveEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTextRemoveEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextSelectionEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTextSelectionEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleTextUpdateEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleTextUpdateEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleValueChangeEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleValueChangeEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAccessibleValueInterface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAccessibleValueInterface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAction::MenuRole >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAction_MenuRole_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAction::Priority >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAction_Priority_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAction::ActionEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAction_ActionEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QAction >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QAction_IDX]); }
template<> inline PyTypeObject *SbkType< ::QActionEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QActionEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QActionGroup::ExclusionPolicy >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QActionGroup_ExclusionPolicy_IDX]); }
template<> inline PyTypeObject *SbkType< ::QActionGroup >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QActionGroup_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBackingStore >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QBackingStore_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBitmap >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QBitmap_IDX]); }
template<> inline PyTypeObject *SbkType< ::QBrush >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QBrush_IDX]); }
template<> inline PyTypeObject *SbkType< ::QChildWindowEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QChildWindowEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QClipboard::Mode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QClipboard_Mode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QClipboard >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QClipboard_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCloseEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QCloseEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColor::Spec >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QColor_Spec_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColor::NameFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QColor_NameFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColor >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QColor_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColorSpace::NamedColorSpace >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QColorSpace_NamedColorSpace_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColorSpace::Primaries >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QColorSpace_Primaries_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColorSpace::TransferFunction >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QColorSpace_TransferFunction_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColorSpace >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QColorSpace_IDX]); }
template<> inline PyTypeObject *SbkType< ::QColorTransform >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QColorTransform_IDX]); }
template<> inline PyTypeObject *SbkType< ::QConicalGradient >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QConicalGradient_IDX]); }
template<> inline PyTypeObject *SbkType< ::QContextMenuEvent::Reason >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QContextMenuEvent_Reason_IDX]); }
template<> inline PyTypeObject *SbkType< ::QContextMenuEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QContextMenuEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCursor >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QCursor_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDesktopServices >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QDesktopServices_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDoubleValidator::Notation >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QDoubleValidator_Notation_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDoubleValidator >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QDoubleValidator_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDrag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QDrag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragEnterEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QDragEnterEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragLeaveEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QDragLeaveEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDragMoveEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QDragMoveEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QDropEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QDropEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEnterEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QEnterEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEventPoint::State >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QEventPoint_State_IDX]); }
template<> inline PyTypeObject *SbkType< ::QEventPoint >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QEventPoint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QExposeEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QExposeEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFileOpenEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFileOpenEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFocusEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFocusEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::StyleHint >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_StyleHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::StyleStrategy >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_StyleStrategy_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::HintingPreference >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_HintingPreference_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::Weight >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_Weight_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::Style >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_Style_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::Stretch >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_Stretch_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::Capitalization >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_Capitalization_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::SpacingType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_SpacingType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFont::Tag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFont_Tag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontDatabase::WritingSystem >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFontDatabase_WritingSystem_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontDatabase::SystemFont >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFontDatabase_SystemFont_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontDatabase >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFontDatabase_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontInfo >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFontInfo_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontMetrics >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFontMetrics_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFontMetricsF >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFontMetricsF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGlyphRun::GlyphRunFlag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGlyphRun_GlyphRunFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QGlyphRun::GlyphRunFlag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QGlyphRun_GlyphRunFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGlyphRun >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGlyphRun_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGradient::Type >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGradient_Type_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGradient::Spread >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGradient_Spread_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGradient::CoordinateMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGradient_CoordinateMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGradient::InterpolationMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGradient_InterpolationMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGradient::Preset >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGradient_Preset_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGradient >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGradient_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGuiApplication >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QGuiApplication_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHelpEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QHelpEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHideEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QHideEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QHoverEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QHoverEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIcon::Mode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIcon_Mode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIcon::State >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIcon_State_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIcon::ThemeIcon >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIcon_ThemeIcon_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIcon >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIcon_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconDragEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIconDragEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconEngine::IconEngineHook >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIconEngine_IconEngineHook_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconEngine >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIconEngine_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIconEngine::ScaledPixmapArgument >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIconEngine_ScaledPixmapArgument_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImage::InvertMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImage_InvertMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImage::Format >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImage_Format_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImage >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImage_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler::ImageOption >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImageIOHandler_ImageOption_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler::Transformation >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImageIOHandler_Transformation_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QImageIOHandler::Transformation> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QImageIOHandler_Transformation_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageIOHandler >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImageIOHandler_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageReader::ImageReaderError >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImageReader_ImageReaderError_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageReader >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImageReader_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageWriter::ImageWriterError >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImageWriter_ImageWriterError_IDX]); }
template<> inline PyTypeObject *SbkType< ::QImageWriter >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QImageWriter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputDevice::DeviceType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputDevice_DeviceType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QInputDevice::DeviceType> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QInputDevice_DeviceType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputDevice::Capability >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputDevice_Capability_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QInputDevice::Capability> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QInputDevice_Capability_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputDevice >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputDevice_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethod::Action >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputMethod_Action_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethod >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputMethod_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent::AttributeType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputMethodEvent_AttributeType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputMethodEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodEvent::Attribute >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputMethodEvent_Attribute_IDX]); }
template<> inline PyTypeObject *SbkType< ::QInputMethodQueryEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QInputMethodQueryEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QIntValidator >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QIntValidator_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeyEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QKeyEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeySequence::StandardKey >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QKeySequence_StandardKey_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeySequence::SequenceFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QKeySequence_SequenceFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeySequence::SequenceMatch >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QKeySequence_SequenceMatch_IDX]); }
template<> inline PyTypeObject *SbkType< ::QKeySequence >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QKeySequence_IDX]); }
template<> inline PyTypeObject *SbkType< ::QLinearGradient >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QLinearGradient_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x2 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix2x2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x3 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix2x3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix2x4 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix2x4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x2 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix3x2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x3 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix3x3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix3x4 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix3x4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x2 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix4x2_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x3 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix4x3_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x4::Flag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix4x4_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QMatrix4x4::Flag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QMatrix4x4_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMatrix4x4 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMatrix4x4_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMouseEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMouseEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMoveEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMoveEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMovie::MovieState >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMovie_MovieState_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMovie::CacheMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMovie_CacheMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QMovie >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QMovie_IDX]); }
template<> inline PyTypeObject *SbkType< ::QNativeGestureEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QNativeGestureEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOffscreenSurface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QOffscreenSurface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLContext::OpenGLModuleType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QOpenGLContext_OpenGLModuleType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLContext >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QOpenGLContext_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLContextGroup >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QOpenGLContextGroup_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLExtraFunctions >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QOpenGLExtraFunctions_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions::OpenGLFeature >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QOpenGLFunctions_OpenGLFeature_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QOpenGLFunctions::OpenGLFeature> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QOpenGLFunctions_OpenGLFeature_IDX]); }
template<> inline PyTypeObject *SbkType< ::QOpenGLFunctions >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QOpenGLFunctions_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Unit >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageLayout_Unit_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Orientation >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageLayout_Orientation_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageLayout::Mode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageLayout_Mode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageLayout >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageLayout_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageRanges >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageRanges_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageRanges::Range >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageRanges_Range_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageSize::PageSizeId >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageSize_PageSizeId_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageSize::Unit >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageSize_Unit_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageSize::SizeMatchPolicy >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageSize_SizeMatchPolicy_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPageSize >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPageSize_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPagedPaintDevice::PdfVersion >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPagedPaintDevice_PdfVersion_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPagedPaintDevice >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPagedPaintDevice_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintDevice::PaintDeviceMetric >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintDevice_PaintDeviceMetric_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintDevice >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintDevice_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintDeviceWindow >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintDeviceWindow_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::PaintEngineFeature >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintEngine_PaintEngineFeature_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QPaintEngine::PaintEngineFeature> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QPaintEngine_PaintEngineFeature_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::DirtyFlag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintEngine_DirtyFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QPaintEngine::DirtyFlag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QPaintEngine_DirtyFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::PolygonDrawMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintEngine_PolygonDrawMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngine::Type >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintEngine_Type_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngine >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintEngine_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEngineState >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintEngineState_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPaintEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPaintEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter::RenderHint >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainter_RenderHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QPainter::RenderHint> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QPainter_RenderHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter::PixmapFragmentHint >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainter_PixmapFragmentHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QPainter::PixmapFragmentHint> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QPainter_PixmapFragmentHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter::CompositionMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainter_CompositionMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainter::PixmapFragment >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainter_PixmapFragment_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPath::ElementType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainterPath_ElementType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPath >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainterPath_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPath::Element >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainterPath_Element_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPainterPathStroker >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPainterPathStroker_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPalette::ColorGroup >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPalette_ColorGroup_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPalette::ColorRole >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPalette_ColorRole_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPalette >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPalette_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPdfWriter >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPdfWriter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPen >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPen_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPicture >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPicture_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::ColorModel >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixelFormat_ColorModel_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaUsage >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixelFormat_AlphaUsage_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaPosition >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixelFormat_AlphaPosition_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::AlphaPremultiplied >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixelFormat_AlphaPremultiplied_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::TypeInterpretation >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixelFormat_TypeInterpretation_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::YUVLayout >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixelFormat_YUVLayout_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat::ByteOrder >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixelFormat_ByteOrder_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixelFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixelFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmap >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixmap_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmapCache >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixmapCache_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPixmapCache::Key >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPixmapCache_Key_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlatformSurfaceEvent::SurfaceEventType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPlatformSurfaceEvent_SurfaceEventType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlatformSurfaceEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPlatformSurfaceEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointerEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPointerEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointingDevice::PointerType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPointingDevice_PointerType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QPointingDevice::PointerType> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QPointingDevice_PointerType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointingDevice::GrabTransition >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPointingDevice_GrabTransition_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointingDevice >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPointingDevice_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPointingDeviceUniqueId >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPointingDeviceUniqueId_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPolygon >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPolygon_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPolygonF >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPolygonF_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPyTextObject >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QPyTextObject_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuaternion >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QQuaternion_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRadialGradient >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRadialGradient_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRasterWindow >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRasterWindow_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRawFont::AntialiasingType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRawFont_AntialiasingType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRawFont::LayoutFlag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRawFont_LayoutFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QRawFont::LayoutFlag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QRawFont_LayoutFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRawFont >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRawFont_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegion::RegionType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRegion_RegionType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegion >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRegion_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRegularExpressionValidator >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRegularExpressionValidator_IDX]); }
template<> inline PyTypeObject *SbkType< ::QResizeEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QResizeEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QRgba64 >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QRgba64_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScreen >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QScreen_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScrollEvent::ScrollState >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QScrollEvent_ScrollState_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScrollEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QScrollEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QScrollPrepareEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QScrollPrepareEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSessionManager::RestartHint >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSessionManager_RestartHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSessionManager >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSessionManager_IDX]); }
template<> inline PyTypeObject *SbkType< ::QShortcut >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QShortcut_IDX]); }
template<> inline PyTypeObject *SbkType< ::QShortcutEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QShortcutEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QShowEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QShowEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSinglePointEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSinglePointEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStandardItem::ItemType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QStandardItem_ItemType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStandardItem >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QStandardItem_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStandardItemModel >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QStandardItemModel_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStaticText::PerformanceHint >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QStaticText_PerformanceHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStaticText >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QStaticText_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStatusTipEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QStatusTipEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QStyleHints >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QStyleHints_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurface::SurfaceClass >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurface_SurfaceClass_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurface::SurfaceType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurface_SurfaceType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::FormatOption >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurfaceFormat_FormatOption_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSurfaceFormat::FormatOption> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QSurfaceFormat_FormatOption_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::SwapBehavior >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurfaceFormat_SwapBehavior_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::RenderableType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurfaceFormat_RenderableType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::OpenGLContextProfile >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurfaceFormat_OpenGLContextProfile_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat::ColorSpace >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurfaceFormat_ColorSpace_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSurfaceFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSurfaceFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSyntaxHighlighter >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QSyntaxHighlighter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTabletEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTabletEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlock >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextBlock_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlock::iterator >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextBlock_iterator_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat::LineHeightTypes >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextBlockFormat_LineHeightTypes_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat::MarkerType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextBlockFormat_MarkerType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextBlockFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockGroup >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextBlockGroup_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextBlockUserData >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextBlockUserData_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::VerticalAlignment >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextCharFormat_VerticalAlignment_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::UnderlineStyle >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextCharFormat_UnderlineStyle_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat::FontPropertiesInheritanceBehavior >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextCharFormat_FontPropertiesInheritanceBehavior_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCharFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextCharFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCursor::MoveMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextCursor_MoveMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCursor::MoveOperation >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextCursor_MoveOperation_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCursor::SelectionType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextCursor_SelectionType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextCursor >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextCursor_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocument::MetaInformation >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextDocument_MetaInformation_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocument::MarkdownFeature >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextDocument_MarkdownFeature_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextDocument::MarkdownFeature> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QTextDocument_MarkdownFeature_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocument::FindFlag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextDocument_FindFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextDocument::FindFlag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QTextDocument_FindFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocument::ResourceType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextDocument_ResourceType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocument::Stacks >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextDocument_Stacks_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocument >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextDocument_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocumentFragment >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextDocumentFragment_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextDocumentWriter >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextDocumentWriter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFormat::FormatType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFormat_FormatType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFormat::Property >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFormat_Property_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFormat::ObjectTypes >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFormat_ObjectTypes_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFormat::PageBreakFlag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFormat_PageBreakFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextFormat::PageBreakFlag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QTextFormat_PageBreakFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFragment >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFragment_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrame >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFrame_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrame::iterator >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFrame_iterator_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat::Position >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFrameFormat_Position_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat::BorderStyle >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFrameFormat_BorderStyle_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextFrameFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextFrameFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextImageFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextImageFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextInlineObject >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextInlineObject_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextItem::RenderFlag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextItem_RenderFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextItem::RenderFlag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QTextItem_RenderFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextItem >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextItem_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLayout::GlyphRunRetrievalFlag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLayout_GlyphRunRetrievalFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextLayout::GlyphRunRetrievalFlag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QTextLayout_GlyphRunRetrievalFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLayout::CursorMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLayout_CursorMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLayout >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLayout_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLayout::FormatRange >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLayout_FormatRange_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLength::Type >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLength_Type_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLength >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLength_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLine::Edge >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLine_Edge_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLine::CursorPosition >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLine_CursorPosition_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextLine >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextLine_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextList >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextList_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextListFormat::Style >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextListFormat_Style_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextListFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextListFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextObject >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextObject_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextObjectInterface >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextObjectInterface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption::TabType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextOption_TabType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption::WrapMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextOption_WrapMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption::Flag >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextOption_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QTextOption::Flag> >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QFlags_QTextOption_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextOption_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextOption::Tab >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextOption_Tab_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTable >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextTable_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableCell >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextTableCell_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableCellFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextTableCellFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTextTableFormat >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTextTableFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QToolBarChangeEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QToolBarChangeEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTouchEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTouchEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTransform::TransformationType >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTransform_TransformationType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QTransform >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QTransform_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUndoCommand >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QUndoCommand_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUndoGroup >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QUndoGroup_IDX]); }
template<> inline PyTypeObject *SbkType< ::QUndoStack >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QUndoStack_IDX]); }
template<> inline PyTypeObject *SbkType< ::QValidator::State >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QValidator_State_IDX]); }
template<> inline PyTypeObject *SbkType< ::QValidator >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QValidator_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector2D >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QVector2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector3D >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QVector3D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QVector4D >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QVector4D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWhatsThisClickedEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QWhatsThisClickedEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWheelEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QWheelEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWindow::Visibility >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QWindow_Visibility_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWindow::AncestorMode >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QWindow_AncestorMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWindow >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QWindow_IDX]); }
template<> inline PyTypeObject *SbkType< ::QWindowStateChangeEvent >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QWindowStateChangeEvent_IDX]); }
template<> inline PyTypeObject *SbkType< ::QtGuiHelper::QOverrideCursorGuard >() { return Shiboken::Module::get(SbkPySide6_QtGuiTypeStructs[SBK_QtGuiHelper_QOverrideCursorGuard_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTGUI_PYTHON_H

