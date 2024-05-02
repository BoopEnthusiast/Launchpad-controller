// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTQUICK_PYTHON_H
#define SBK_QTQUICK_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkmodule.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtopengl_python.h>
#include <pyside6_qtgui_python.h>
#include <pyside6_qtqml_python.h>

// Bound library includes
#include <QtQuick/qquickframebufferobject.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickitemgrabresult.h>
#include <QtQuick/qquickpainteditem.h>
#include <QtQuick/qquickrhiitem.h>
#include <QtQuick/qquicktextdocument.h>
#include <QtQuick/qquickview.h>
#include <QtQuick/qquickwindow.h>
#include <QtQuick/qsggeometry.h>
#include <QtQuick/qsgmaterial.h>
#include <QtQuick/qsgmaterialshader.h>
#include <QtQuick/qsgnode.h>
#include <QtQuick/qsgrendererinterface.h>
#include <QtQuick/qsgrendernode.h>
#include <QtQuick/qsgsimpletexturenode.h>
#include <QtQuick/qsgtextnode.h>
#include <QtQuick/qsgtexture.h>
#include <qsharedpointer.h>
class QQuickAsyncImageProvider;
class QQuickGraphicsConfiguration;
class QQuickGraphicsDevice;
class QQuickImageProvider;
class QQuickImageResponse;
class QQuickRenderControl;
class QQuickRenderTarget;
class QQuickRhiItemRenderer;
class QQuickTextureFactory;
class QSGBasicGeometryNode;
class QSGClipNode;
class QSGDynamicTexture;
class QSGFlatColorMaterial;
class QSGGeometryNode;
struct QSGMaterialType;
class QSGOpacityNode;
class QSGOpaqueTextureMaterial;
class QSGRectangleNode;
class QSGSimpleRectNode;
class QSGTextureMaterial;
class QSGTextureProvider;
class QSGTransformNode;
class QSGVertexColorMaterial;

// Type indices
enum [[deprecated]] : int {
    SBK_QQUICKASYNCIMAGEPROVIDER_IDX                         = 26,
    SBK_QQUICKFRAMEBUFFEROBJECT_IDX                          = 28,
    SBK_QQUICKFRAMEBUFFEROBJECT_RENDERER_IDX                 = 30,
    SBK_QQUICKGRAPHICSCONFIGURATION_IDX                      = 32,
    SBK_QQUICKGRAPHICSDEVICE_IDX                             = 34,
    SBK_QQUICKIMAGEPROVIDER_IDX                              = 36,
    SBK_QQUICKIMAGERESPONSE_IDX                              = 38,
    SBK_QQUICKITEM_FLAG_IDX                                  = 42,
    SBK_QFLAGS_QQUICKITEM_FLAG_IDX                           = 0,
    SBK_QQUICKITEM_ITEMCHANGE_IDX                            = 44,
    SBK_QQUICKITEM_TRANSFORMORIGIN_IDX                       = 46,
    SBK_QQUICKITEM_IDX                                       = 40,
    SBK_QQUICKITEM_UPDATEPAINTNODEDATA_IDX                   = 48,
    SBK_QQUICKITEMGRABRESULT_IDX                             = 50,
    SBK_QQUICKPAINTEDITEM_RENDERTARGET_IDX                   = 56,
    SBK_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX                = 54,
    SBK_QFLAGS_QQUICKPAINTEDITEM_PERFORMANCEHINT_IDX         = 2,
    SBK_QQUICKPAINTEDITEM_IDX                                = 52,
    SBK_QQUICKRENDERCONTROL_IDX                              = 58,
    SBK_QQUICKRENDERTARGET_IDX                               = 60,
    SBK_QQUICKRHIITEM_TEXTUREFORMAT_IDX                      = 64,
    SBK_QQUICKRHIITEM_IDX                                    = 62,
    SBK_QQUICKRHIITEMRENDERER_IDX                            = 66,
    SBK_QQUICKTEXTDOCUMENT_STATUS_IDX                        = 70,
    SBK_QQUICKTEXTDOCUMENT_IDX                               = 68,
    SBK_QQUICKTEXTUREFACTORY_IDX                             = 72,
    SBK_QQUICKTRANSFORM_IDX                                  = 74,
    SBK_QQUICKVIEW_RESIZEMODE_IDX                            = 78,
    SBK_QQUICKVIEW_STATUS_IDX                                = 80,
    SBK_QQUICKVIEW_IDX                                       = 76,
    SBK_QQUICKWINDOW_CREATETEXTUREOPTION_IDX                 = 84,
    SBK_QFLAGS_QQUICKWINDOW_CREATETEXTUREOPTION_IDX          = 4,
    SBK_QQUICKWINDOW_RENDERSTAGE_IDX                         = 86,
    SBK_QQUICKWINDOW_SCENEGRAPHERROR_IDX                     = 88,
    SBK_QQUICKWINDOW_TEXTRENDERTYPE_IDX                      = 90,
    SBK_QQUICKWINDOW_IDX                                     = 82,
    SBK_QSGBASICGEOMETRYNODE_IDX                             = 92,
    SBK_QSGCLIPNODE_IDX                                      = 94,
    SBK_QSGDYNAMICTEXTURE_IDX                                = 96,
    SBK_QSGFLATCOLORMATERIAL_IDX                             = 98,
    SBK_QSGGEOMETRY_ATTRIBUTETYPE_IDX                        = 106,
    SBK_QSGGEOMETRY_DATAPATTERN_IDX                          = 110,
    SBK_QSGGEOMETRY_DRAWINGMODE_IDX                          = 112,
    SBK_QSGGEOMETRY_TYPE_IDX                                 = 118,
    SBK_QSGGEOMETRY_IDX                                      = 100,
    SBK_QSGGEOMETRY_ATTRIBUTE_IDX                            = 102,
    SBK_QSGGEOMETRY_ATTRIBUTESET_IDX                         = 104,
    SBK_QSGGEOMETRY_COLOREDPOINT2D_IDX                       = 108,
    SBK_QSGGEOMETRY_POINT2D_IDX                              = 114,
    SBK_QSGGEOMETRY_TEXTUREDPOINT2D_IDX                      = 116,
    SBK_QSGGEOMETRYNODE_IDX                                  = 120,
    SBK_QSGMATERIAL_FLAG_IDX                                 = 124,
    SBK_QFLAGS_QSGMATERIAL_FLAG_IDX                          = 6,
    SBK_QSGMATERIAL_IDX                                      = 122,
    SBK_QSGMATERIALSHADER_FLAG_IDX                           = 128,
    SBK_QFLAGS_QSGMATERIALSHADER_FLAG_IDX                    = 8,
    SBK_QSGMATERIALSHADER_STAGE_IDX                          = 134,
    SBK_QSGMATERIALSHADER_IDX                                = 126,
    SBK_QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_IDX         = 132,
    SBK_QFLAGS_QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_IDX  = 10,
    SBK_QSGMATERIALSHADER_RENDERSTATE_IDX                    = 130,
    SBK_QSGMATERIALTYPE_IDX                                  = 136,
    SBK_QSGNODE_NODETYPE_IDX                                 = 144,
    SBK_QSGNODE_FLAG_IDX                                     = 142,
    SBK_QFLAGS_QSGNODE_FLAG_IDX                              = 14,
    SBK_QSGNODE_DIRTYSTATEBIT_IDX                            = 140,
    SBK_QFLAGS_QSGNODE_DIRTYSTATEBIT_IDX                     = 12,
    SBK_QSGNODE_IDX                                          = 138,
    SBK_QSGOPACITYNODE_IDX                                   = 146,
    SBK_QSGOPAQUETEXTUREMATERIAL_IDX                         = 148,
    SBK_QSGRECTANGLENODE_IDX                                 = 150,
    SBK_QSGRENDERNODE_STATEFLAG_IDX                          = 158,
    SBK_QFLAGS_QSGRENDERNODE_STATEFLAG_IDX                   = 18,
    SBK_QSGRENDERNODE_RENDERINGFLAG_IDX                      = 156,
    SBK_QFLAGS_QSGRENDERNODE_RENDERINGFLAG_IDX               = 16,
    SBK_QSGRENDERNODE_IDX                                    = 152,
    SBK_QSGRENDERNODE_RENDERSTATE_IDX                        = 154,
    SBK_QSGRENDERERINTERFACE_GRAPHICSAPI_IDX                 = 162,
    SBK_QSGRENDERERINTERFACE_RESOURCE_IDX                    = 166,
    SBK_QSGRENDERERINTERFACE_SHADERTYPE_IDX                  = 172,
    SBK_QSGRENDERERINTERFACE_SHADERCOMPILATIONTYPE_IDX       = 168,
    SBK_QFLAGS_QSGRENDERERINTERFACE_SHADERCOMPILATIONTYPE_IDX = 20,
    SBK_QSGRENDERERINTERFACE_SHADERSOURCETYPE_IDX            = 170,
    SBK_QFLAGS_QSGRENDERERINTERFACE_SHADERSOURCETYPE_IDX     = 22,
    SBK_QSGRENDERERINTERFACE_RENDERMODE_IDX                  = 164,
    SBK_QSGRENDERERINTERFACE_IDX                             = 160,
    SBK_QSGSIMPLERECTNODE_IDX                                = 174,
    SBK_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX = 178,
    SBK_QFLAGS_QSGSIMPLETEXTURENODE_TEXTURECOORDINATESTRANSFORMFLAG_IDX = 24,
    SBK_QSGSIMPLETEXTURENODE_IDX                             = 176,
    SBK_QSGTEXTNODE_TEXTSTYLE_IDX                            = 184,
    SBK_QSGTEXTNODE_RENDERTYPE_IDX                           = 182,
    SBK_QSGTEXTNODE_IDX                                      = 180,
    SBK_QSGTEXTURE_WRAPMODE_IDX                              = 192,
    SBK_QSGTEXTURE_FILTERING_IDX                             = 190,
    SBK_QSGTEXTURE_ANISOTROPYLEVEL_IDX                       = 188,
    SBK_QSGTEXTURE_IDX                                       = 186,
    SBK_QSGTEXTUREMATERIAL_IDX                               = 194,
    SBK_QSGTEXTUREPROVIDER_IDX                               = 196,
    SBK_QSGTRANSFORMNODE_IDX                                 = 198,
    SBK_QSGVERTEXCOLORMATERIAL_IDX                           = 200,
    SBK_QSHAREDPOINTER_QQUICKITEMGRABRESULT_IDX              = 204, // QSharedPointer<QQuickItemGrabResult>
    SBK_QSHAREDPOINTER_CONSTQQUICKITEMGRABRESULT_IDX         = 204, // (const)
    SBK_QTQUICK_IDX_COUNT                                    = 206,
};

// Type indices
enum : int {
    SBK_QQuickAsyncImageProvider_IDX                         = 13,
    SBK_QQuickFramebufferObject_IDX                          = 14,
    SBK_QQuickFramebufferObject_Renderer_IDX                 = 15,
    SBK_QQuickGraphicsConfiguration_IDX                      = 16,
    SBK_QQuickGraphicsDevice_IDX                             = 17,
    SBK_QQuickImageProvider_IDX                              = 18,
    SBK_QQuickImageResponse_IDX                              = 19,
    SBK_QQuickItem_Flag_IDX                                  = 21,
    SBK_QFlags_QQuickItem_Flag_IDX                           = 0,
    SBK_QQuickItem_ItemChange_IDX                            = 22,
    SBK_QQuickItem_TransformOrigin_IDX                       = 23,
    SBK_QQuickItem_IDX                                       = 20,
    SBK_QQuickItem_UpdatePaintNodeData_IDX                   = 24,
    SBK_QQuickItemGrabResult_IDX                             = 25,
    SBK_QQuickPaintedItem_RenderTarget_IDX                   = 28,
    SBK_QQuickPaintedItem_PerformanceHint_IDX                = 27,
    SBK_QFlags_QQuickPaintedItem_PerformanceHint_IDX         = 1,
    SBK_QQuickPaintedItem_IDX                                = 26,
    SBK_QQuickRenderControl_IDX                              = 29,
    SBK_QQuickRenderTarget_IDX                               = 30,
    SBK_QQuickRhiItem_TextureFormat_IDX                      = 32,
    SBK_QQuickRhiItem_IDX                                    = 31,
    SBK_QQuickRhiItemRenderer_IDX                            = 33,
    SBK_QQuickTextDocument_Status_IDX                        = 35,
    SBK_QQuickTextDocument_IDX                               = 34,
    SBK_QQuickTextureFactory_IDX                             = 36,
    SBK_QQuickTransform_IDX                                  = 37,
    SBK_QQuickView_ResizeMode_IDX                            = 39,
    SBK_QQuickView_Status_IDX                                = 40,
    SBK_QQuickView_IDX                                       = 38,
    SBK_QQuickWindow_CreateTextureOption_IDX                 = 42,
    SBK_QFlags_QQuickWindow_CreateTextureOption_IDX          = 2,
    SBK_QQuickWindow_RenderStage_IDX                         = 43,
    SBK_QQuickWindow_SceneGraphError_IDX                     = 44,
    SBK_QQuickWindow_TextRenderType_IDX                      = 45,
    SBK_QQuickWindow_IDX                                     = 41,
    SBK_QSGBasicGeometryNode_IDX                             = 46,
    SBK_QSGClipNode_IDX                                      = 47,
    SBK_QSGDynamicTexture_IDX                                = 48,
    SBK_QSGFlatColorMaterial_IDX                             = 49,
    SBK_QSGGeometry_AttributeType_IDX                        = 53,
    SBK_QSGGeometry_DataPattern_IDX                          = 55,
    SBK_QSGGeometry_DrawingMode_IDX                          = 56,
    SBK_QSGGeometry_Type_IDX                                 = 59,
    SBK_QSGGeometry_IDX                                      = 50,
    SBK_QSGGeometry_Attribute_IDX                            = 51,
    SBK_QSGGeometry_AttributeSet_IDX                         = 52,
    SBK_QSGGeometry_ColoredPoint2D_IDX                       = 54,
    SBK_QSGGeometry_Point2D_IDX                              = 57,
    SBK_QSGGeometry_TexturedPoint2D_IDX                      = 58,
    SBK_QSGGeometryNode_IDX                                  = 60,
    SBK_QSGMaterial_Flag_IDX                                 = 62,
    SBK_QFlags_QSGMaterial_Flag_IDX                          = 3,
    SBK_QSGMaterial_IDX                                      = 61,
    SBK_QSGMaterialShader_Flag_IDX                           = 64,
    SBK_QFlags_QSGMaterialShader_Flag_IDX                    = 4,
    SBK_QSGMaterialShader_Stage_IDX                          = 67,
    SBK_QSGMaterialShader_IDX                                = 63,
    SBK_QSGMaterialShader_RenderState_DirtyState_IDX         = 66,
    SBK_QFlags_QSGMaterialShader_RenderState_DirtyState_IDX  = 5,
    SBK_QSGMaterialShader_RenderState_IDX                    = 65,
    SBK_QSGMaterialType_IDX                                  = 68,
    SBK_QSGNode_NodeType_IDX                                 = 72,
    SBK_QSGNode_Flag_IDX                                     = 71,
    SBK_QFlags_QSGNode_Flag_IDX                              = 7,
    SBK_QSGNode_DirtyStateBit_IDX                            = 70,
    SBK_QFlags_QSGNode_DirtyStateBit_IDX                     = 6,
    SBK_QSGNode_IDX                                          = 69,
    SBK_QSGOpacityNode_IDX                                   = 73,
    SBK_QSGOpaqueTextureMaterial_IDX                         = 74,
    SBK_QSGRectangleNode_IDX                                 = 75,
    SBK_QSGRenderNode_StateFlag_IDX                          = 79,
    SBK_QFlags_QSGRenderNode_StateFlag_IDX                   = 9,
    SBK_QSGRenderNode_RenderingFlag_IDX                      = 78,
    SBK_QFlags_QSGRenderNode_RenderingFlag_IDX               = 8,
    SBK_QSGRenderNode_IDX                                    = 76,
    SBK_QSGRenderNode_RenderState_IDX                        = 77,
    SBK_QSGRendererInterface_GraphicsApi_IDX                 = 81,
    SBK_QSGRendererInterface_Resource_IDX                    = 83,
    SBK_QSGRendererInterface_ShaderType_IDX                  = 86,
    SBK_QSGRendererInterface_ShaderCompilationType_IDX       = 84,
    SBK_QFlags_QSGRendererInterface_ShaderCompilationType_IDX = 10,
    SBK_QSGRendererInterface_ShaderSourceType_IDX            = 85,
    SBK_QFlags_QSGRendererInterface_ShaderSourceType_IDX     = 11,
    SBK_QSGRendererInterface_RenderMode_IDX                  = 82,
    SBK_QSGRendererInterface_IDX                             = 80,
    SBK_QSGSimpleRectNode_IDX                                = 87,
    SBK_QSGSimpleTextureNode_TextureCoordinatesTransformFlag_IDX = 89,
    SBK_QFlags_QSGSimpleTextureNode_TextureCoordinatesTransformFlag_IDX = 12,
    SBK_QSGSimpleTextureNode_IDX                             = 88,
    SBK_QSGTextNode_TextStyle_IDX                            = 92,
    SBK_QSGTextNode_RenderType_IDX                           = 91,
    SBK_QSGTextNode_IDX                                      = 90,
    SBK_QSGTexture_WrapMode_IDX                              = 96,
    SBK_QSGTexture_Filtering_IDX                             = 95,
    SBK_QSGTexture_AnisotropyLevel_IDX                       = 94,
    SBK_QSGTexture_IDX                                       = 93,
    SBK_QSGTextureMaterial_IDX                               = 97,
    SBK_QSGTextureProvider_IDX                               = 98,
    SBK_QSGTransformNode_IDX                                 = 99,
    SBK_QSGVertexColorMaterial_IDX                           = 100,
    SBK_QSharedPointer_QQuickItemGrabResult_IDX              = 102, // QSharedPointer<QQuickItemGrabResult>
    SBK_QSharedPointer_constQQuickItemGrabResult_IDX         = 102, // (const)
    SBK_QtQuick_IDX_COUNT                                    = 103,
};

// This variable stores all Python types exported by this module.
extern Shiboken::Module::TypeInitStruct *SbkPySide6_QtQuickTypeStructs;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtQuickModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtQuickTypeConverters;

// Converter indices
enum [[deprecated]] : int {
    SBK_QTQUICK_QLIST_INT_IDX                                = 0, // QList<int>
    SBK_QTQUICK_QLIST_QSGGEOMETRY_POINT2D_IDX                = 2, // QList<QSGGeometry::Point2D>
    SBK_QTQUICK_QLIST_QBYTEARRAY_IDX                         = 4, // QList<QByteArray>
    SBK_QTQUICK_QLIST_QOBJECTPTR_IDX                         = 6, // QList<QObject*>
    SBK_QTQUICK_QLIST_QQUICKITEMPTR_IDX                      = 8, // QList<QQuickItem*>
    SBK_QTQUICK_QLIST_QQMLERROR_IDX                          = 10, // QList<QQmlError>
    SBK_QTQUICK_QMAP_QSTRING_QVARIANT_IDX                    = 12, // QMap<QString,QVariant>
    SBK_QTQUICK_QLIST_QVARIANT_IDX                           = 14, // QList<QVariant>
    SBK_QTQUICK_QLIST_QSTRING_IDX                            = 16, // QList<QString>
    SBK_QTQUICK_CONVERTERS_IDX_COUNT                         = 18,
};

// Converter indices
enum : int {
    SBK_QtQuick_QList_int_IDX                                = 0, // QList<int>
    SBK_QtQuick_QList_QSGGeometry_Point2D_IDX                = 1, // QList<QSGGeometry::Point2D>
    SBK_QtQuick_QList_QByteArray_IDX                         = 2, // QList<QByteArray>
    SBK_QtQuick_QList_QObjectPTR_IDX                         = 3, // QList<QObject*>
    SBK_QtQuick_QList_QQuickItemPTR_IDX                      = 4, // QList<QQuickItem*>
    SBK_QtQuick_QList_QQmlError_IDX                          = 5, // QList<QQmlError>
    SBK_QtQuick_QMap_QString_QVariant_IDX                    = 6, // QMap<QString,QVariant>
    SBK_QtQuick_QList_QVariant_IDX                           = 7, // QList<QVariant>
    SBK_QtQuick_QList_QString_IDX                            = 8, // QList<QString>
    SBK_QtQuick_CONVERTERS_IDX_COUNT                         = 9,
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QQuickAsyncImageProvider >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickAsyncImageProvider_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickFramebufferObject >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickFramebufferObject_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickFramebufferObject::Renderer >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickFramebufferObject_Renderer_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickGraphicsConfiguration >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickGraphicsConfiguration_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickGraphicsDevice >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickGraphicsDevice_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickImageProvider >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickImageProvider_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickImageResponse >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickImageResponse_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem::Flag >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickItem_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickItem::Flag> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QQuickItem_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem::ItemChange >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickItem_ItemChange_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem::TransformOrigin >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickItem_TransformOrigin_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickItem_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItem::UpdatePaintNodeData >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickItem_UpdatePaintNodeData_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickItemGrabResult >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickItemGrabResult_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem::RenderTarget >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickPaintedItem_RenderTarget_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem::PerformanceHint >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickPaintedItem_PerformanceHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickPaintedItem::PerformanceHint> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QQuickPaintedItem_PerformanceHint_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickPaintedItem >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickPaintedItem_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickRenderControl >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickRenderControl_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickRenderTarget >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickRenderTarget_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickRhiItem::TextureFormat >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickRhiItem_TextureFormat_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickRhiItem >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickRhiItem_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickRhiItemRenderer >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickRhiItemRenderer_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTextDocument::Status >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickTextDocument_Status_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTextDocument >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickTextDocument_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTextureFactory >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickTextureFactory_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickTransform >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickTransform_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickView::ResizeMode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickView_ResizeMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickView::Status >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickView_Status_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickView >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickView_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::CreateTextureOption >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickWindow_CreateTextureOption_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QQuickWindow::CreateTextureOption> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QQuickWindow_CreateTextureOption_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::RenderStage >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickWindow_RenderStage_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::SceneGraphError >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickWindow_SceneGraphError_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickWindow::TextRenderType >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickWindow_TextRenderType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QQuickWindow >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QQuickWindow_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGBasicGeometryNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGBasicGeometryNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGClipNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGClipNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGDynamicTexture >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGDynamicTexture_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGFlatColorMaterial >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGFlatColorMaterial_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::AttributeType >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_AttributeType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::DataPattern >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_DataPattern_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::DrawingMode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_DrawingMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Type >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_Type_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Attribute >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_Attribute_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::AttributeSet >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_AttributeSet_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::ColoredPoint2D >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_ColoredPoint2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::Point2D >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_Point2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometry::TexturedPoint2D >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometry_TexturedPoint2D_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGGeometryNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGGeometryNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterial::Flag >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGMaterial_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGMaterial::Flag> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGMaterial_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterial >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGMaterial_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader::Flag >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGMaterialShader_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGMaterialShader::Flag> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGMaterialShader_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader::Stage >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGMaterialShader_Stage_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGMaterialShader_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader::RenderState::DirtyState >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGMaterialShader_RenderState_DirtyState_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGMaterialShader::RenderState::DirtyState> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGMaterialShader_RenderState_DirtyState_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialShader::RenderState >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGMaterialShader_RenderState_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGMaterialType >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGMaterialType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGNode::NodeType >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGNode_NodeType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGNode::Flag >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGNode_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGNode::Flag> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGNode_Flag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGNode::DirtyStateBit >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGNode_DirtyStateBit_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGNode::DirtyStateBit> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGNode_DirtyStateBit_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGOpacityNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGOpacityNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGOpaqueTextureMaterial >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGOpaqueTextureMaterial_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRectangleNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRectangleNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRenderNode::StateFlag >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRenderNode_StateFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGRenderNode::StateFlag> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGRenderNode_StateFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRenderNode::RenderingFlag >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRenderNode_RenderingFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGRenderNode::RenderingFlag> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGRenderNode_RenderingFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRenderNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRenderNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRenderNode::RenderState >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRenderNode_RenderState_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::GraphicsApi >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRendererInterface_GraphicsApi_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::Resource >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRendererInterface_Resource_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::ShaderType >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRendererInterface_ShaderType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::ShaderCompilationType >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRendererInterface_ShaderCompilationType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGRendererInterface::ShaderCompilationType> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGRendererInterface_ShaderCompilationType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::ShaderSourceType >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRendererInterface_ShaderSourceType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGRendererInterface::ShaderSourceType> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGRendererInterface_ShaderSourceType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface::RenderMode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRendererInterface_RenderMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGRendererInterface >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGRendererInterface_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGSimpleRectNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGSimpleRectNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGSimpleTextureNode::TextureCoordinatesTransformFlag >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGSimpleTextureNode_TextureCoordinatesTransformFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QFlags_QSGSimpleTextureNode_TextureCoordinatesTransformFlag_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGSimpleTextureNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGSimpleTextureNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTextNode::TextStyle >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTextNode_TextStyle_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTextNode::RenderType >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTextNode_RenderType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTextNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTextNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTexture::WrapMode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTexture_WrapMode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTexture::Filtering >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTexture_Filtering_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTexture::AnisotropyLevel >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTexture_AnisotropyLevel_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTexture >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTexture_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTextureMaterial >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTextureMaterial_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTextureProvider >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTextureProvider_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGTransformNode >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGTransformNode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSGVertexColorMaterial >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSGVertexColorMaterial_IDX]); }
template<> inline PyTypeObject *SbkType< ::QSharedPointer<QQuickItemGrabResult> >() { return Shiboken::Module::get(SbkPySide6_QtQuickTypeStructs[SBK_QSharedPointer_QQuickItemGrabResult_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTQUICK_PYTHON_H

