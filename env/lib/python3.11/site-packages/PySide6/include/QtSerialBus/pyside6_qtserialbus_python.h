// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTSERIALBUS_PYTHON_H
#define SBK_QTSERIALBUS_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkmodule.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtnetwork_python.h>
#include <pyside6_qtserialport_python.h>

// Bound library includes
#include <QtSerialBus/qcanbusdevice.h>
#include <QtSerialBus/qcanbusframe.h>
#include <QtSerialBus/qmodbusdataunit.h>
#include <QtSerialBus/qmodbusdevice.h>
#include <QtSerialBus/qmodbusdeviceidentification.h>
#include <QtSerialBus/qmodbuspdu.h>
#include <QtSerialBus/qmodbusreply.h>
#include <QtSerialBus/qmodbusserver.h>
class QCanBus;
class QCanBusDeviceInfo;
class QCanBusFactory;
class QModbusClient;
class QModbusRequest;
class QModbusRtuSerialClient;
class QModbusRtuSerialServer;
class QModbusTcpClient;
class QModbusTcpConnectionObserver;
class QModbusTcpServer;

// Type indices
enum [[deprecated]] : int {
    SBK_QCANBUS_IDX                                          = 0,
    SBK_QCANBUSDEVICE_CANBUSERROR_IDX                        = 6,
    SBK_QCANBUSDEVICE_CANBUSDEVICESTATE_IDX                  = 4,
    SBK_QCANBUSDEVICE_CANBUSSTATUS_IDX                       = 8,
    SBK_QCANBUSDEVICE_CONFIGURATIONKEY_IDX                   = 10,
    SBK_QCANBUSDEVICE_DIRECTION_IDX                          = 12,
    SBK_QFLAGS_QCANBUSDEVICE_DIRECTION_IDX                   = 30,
    SBK_QCANBUSDEVICE_IDX                                    = 2,
    SBK_QCANBUSDEVICE_FILTER_FORMATFILTER_IDX                = 16,
    SBK_QFLAGS_QCANBUSDEVICE_FILTER_FORMATFILTER_IDX         = 32,
    SBK_QCANBUSDEVICE_FILTER_IDX                             = 14,
    SBK_QCANBUSDEVICEINFO_IDX                                = 18,
    SBK_QCANBUSFACTORY_IDX                                   = 20,
    SBK_QCANBUSFRAME_FRAMETYPE_IDX                           = 26,
    SBK_QCANBUSFRAME_FRAMEERROR_IDX                          = 24,
    SBK_QFLAGS_QCANBUSFRAME_FRAMEERROR_IDX                   = 34,
    SBK_QCANBUSFRAME_IDX                                     = 22,
    SBK_QCANBUSFRAME_TIMESTAMP_IDX                           = 28,
    SBK_QMODBUSCLIENT_IDX                                    = 36,
    SBK_QMODBUSDATAUNIT_REGISTERTYPE_IDX                     = 40,
    SBK_QMODBUSDATAUNIT_IDX                                  = 38,
    SBK_QMODBUSDEVICE_ERROR_IDX                              = 46,
    SBK_QMODBUSDEVICE_STATE_IDX                              = 50,
    SBK_QMODBUSDEVICE_CONNECTIONPARAMETER_IDX                = 44,
    SBK_QMODBUSDEVICE_INTERMEDIATEERROR_IDX                  = 48,
    SBK_QMODBUSDEVICE_IDX                                    = 42,
    SBK_QMODBUSDEVICEIDENTIFICATION_OBJECTID_IDX             = 56,
    SBK_QMODBUSDEVICEIDENTIFICATION_READDEVICEIDCODE_IDX     = 58,
    SBK_QMODBUSDEVICEIDENTIFICATION_CONFORMITYLEVEL_IDX      = 54,
    SBK_QMODBUSDEVICEIDENTIFICATION_IDX                      = 52,
    SBK_QMODBUSPDU_EXCEPTIONCODE_IDX                         = 62,
    SBK_QMODBUSPDU_FUNCTIONCODE_IDX                          = 64,
    SBK_QMODBUSPDU_IDX                                       = 60,
    SBK_QMODBUSREPLY_REPLYTYPE_IDX                           = 68,
    SBK_QMODBUSREPLY_IDX                                     = 66,
    SBK_QMODBUSREQUEST_IDX                                   = 70,
    SBK_QMODBUSRTUSERIALCLIENT_IDX                           = 72,
    SBK_QMODBUSRTUSERIALSERVER_IDX                           = 74,
    SBK_QMODBUSSERVER_OPTION_IDX                             = 78,
    SBK_QMODBUSSERVER_IDX                                    = 76,
    SBK_QMODBUSTCPCLIENT_IDX                                 = 80,
    SBK_QMODBUSTCPCONNECTIONOBSERVER_IDX                     = 82,
    SBK_QMODBUSTCPSERVER_IDX                                 = 84,
    SBK_QTSERIALBUS_IDX_COUNT                                = 86,
};

// Type indices
enum : int {
    SBK_QCanBus_IDX                                          = 0,
    SBK_QCanBusDevice_CanBusError_IDX                        = 3,
    SBK_QCanBusDevice_CanBusDeviceState_IDX                  = 2,
    SBK_QCanBusDevice_CanBusStatus_IDX                       = 4,
    SBK_QCanBusDevice_ConfigurationKey_IDX                   = 5,
    SBK_QCanBusDevice_Direction_IDX                          = 6,
    SBK_QFlags_QCanBusDevice_Direction_IDX                   = 15,
    SBK_QCanBusDevice_IDX                                    = 1,
    SBK_QCanBusDevice_Filter_FormatFilter_IDX                = 8,
    SBK_QFlags_QCanBusDevice_Filter_FormatFilter_IDX         = 16,
    SBK_QCanBusDevice_Filter_IDX                             = 7,
    SBK_QCanBusDeviceInfo_IDX                                = 9,
    SBK_QCanBusFactory_IDX                                   = 10,
    SBK_QCanBusFrame_FrameType_IDX                           = 13,
    SBK_QCanBusFrame_FrameError_IDX                          = 12,
    SBK_QFlags_QCanBusFrame_FrameError_IDX                   = 17,
    SBK_QCanBusFrame_IDX                                     = 11,
    SBK_QCanBusFrame_TimeStamp_IDX                           = 14,
    SBK_QModbusClient_IDX                                    = 18,
    SBK_QModbusDataUnit_RegisterType_IDX                     = 20,
    SBK_QModbusDataUnit_IDX                                  = 19,
    SBK_QModbusDevice_Error_IDX                              = 23,
    SBK_QModbusDevice_State_IDX                              = 25,
    SBK_QModbusDevice_ConnectionParameter_IDX                = 22,
    SBK_QModbusDevice_IntermediateError_IDX                  = 24,
    SBK_QModbusDevice_IDX                                    = 21,
    SBK_QModbusDeviceIdentification_ObjectId_IDX             = 28,
    SBK_QModbusDeviceIdentification_ReadDeviceIdCode_IDX     = 29,
    SBK_QModbusDeviceIdentification_ConformityLevel_IDX      = 27,
    SBK_QModbusDeviceIdentification_IDX                      = 26,
    SBK_QModbusPdu_ExceptionCode_IDX                         = 31,
    SBK_QModbusPdu_FunctionCode_IDX                          = 32,
    SBK_QModbusPdu_IDX                                       = 30,
    SBK_QModbusReply_ReplyType_IDX                           = 34,
    SBK_QModbusReply_IDX                                     = 33,
    SBK_QModbusRequest_IDX                                   = 35,
    SBK_QModbusRtuSerialClient_IDX                           = 36,
    SBK_QModbusRtuSerialServer_IDX                           = 37,
    SBK_QModbusServer_Option_IDX                             = 39,
    SBK_QModbusServer_IDX                                    = 38,
    SBK_QModbusTcpClient_IDX                                 = 40,
    SBK_QModbusTcpConnectionObserver_IDX                     = 41,
    SBK_QModbusTcpServer_IDX                                 = 42,
    SBK_QtSerialBus_IDX_COUNT                                = 43,
};

// This variable stores all Python types exported by this module.
extern Shiboken::Module::TypeInitStruct *SbkPySide6_QtSerialBusTypeStructs;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtSerialBusModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtSerialBusTypeConverters;

// Converter indices
enum [[deprecated]] : int {
    SBK_QTSERIALBUS_QLIST_INT_IDX                            = 0, // QList<int>
    SBK_QTSERIALBUS_QLIST_QUINT16_IDX                        = 2, // QList<quint16>
    SBK_QTSERIALBUS_QLIST_QCANBUSDEVICEINFO_IDX              = 4, // QList<QCanBusDeviceInfo>
    SBK_QTSERIALBUS_QLIST_QOBJECTPTR_IDX                     = 6, // QList<QObject*>
    SBK_QTSERIALBUS_QLIST_QBYTEARRAY_IDX                     = 8, // QList<QByteArray>
    SBK_QTSERIALBUS_QLIST_QMODBUSDEVICE_INTERMEDIATEERROR_IDX = 10, // QList<QModbusDevice::IntermediateError>
    SBK_QTSERIALBUS_QMAP_QMODBUSDATAUNIT_REGISTERTYPE_QMODBUSDATAUNIT_IDX = 12, // QMap<QModbusDataUnit::RegisterType,QModbusDataUnit>
    SBK_QTSERIALBUS_QLIST_QCANBUSDEVICE_CONFIGURATIONKEY_IDX = 14, // QList<QCanBusDevice::ConfigurationKey>
    SBK_QTSERIALBUS_QLIST_QCANBUSFRAME_IDX                   = 16, // QList<QCanBusFrame>
    SBK_QTSERIALBUS_QLIST_QVARIANT_IDX                       = 18, // QList<QVariant>
    SBK_QTSERIALBUS_QLIST_QSTRING_IDX                        = 20, // QList<QString>
    SBK_QTSERIALBUS_QMAP_QSTRING_QVARIANT_IDX                = 22, // QMap<QString,QVariant>
    SBK_QTSERIALBUS_CONVERTERS_IDX_COUNT                     = 24,
};

// Converter indices
enum : int {
    SBK_QtSerialBus_QList_int_IDX                            = 0, // QList<int>
    SBK_QtSerialBus_QList_quint16_IDX                        = 1, // QList<quint16>
    SBK_QtSerialBus_QList_QCanBusDeviceInfo_IDX              = 2, // QList<QCanBusDeviceInfo>
    SBK_QtSerialBus_QList_QObjectPTR_IDX                     = 3, // QList<QObject*>
    SBK_QtSerialBus_QList_QByteArray_IDX                     = 4, // QList<QByteArray>
    SBK_QtSerialBus_QList_QModbusDevice_IntermediateError_IDX = 5, // QList<QModbusDevice::IntermediateError>
    SBK_QtSerialBus_QMap_QModbusDataUnit_RegisterType_QModbusDataUnit_IDX = 6, // QMap<QModbusDataUnit::RegisterType,QModbusDataUnit>
    SBK_QtSerialBus_QList_QCanBusDevice_ConfigurationKey_IDX = 7, // QList<QCanBusDevice::ConfigurationKey>
    SBK_QtSerialBus_QList_QCanBusFrame_IDX                   = 8, // QList<QCanBusFrame>
    SBK_QtSerialBus_QList_QVariant_IDX                       = 9, // QList<QVariant>
    SBK_QtSerialBus_QList_QString_IDX                        = 10, // QList<QString>
    SBK_QtSerialBus_QMap_QString_QVariant_IDX                = 11, // QMap<QString,QVariant>
    SBK_QtSerialBus_CONVERTERS_IDX_COUNT                     = 12,
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QCanBus >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBus_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::CanBusError >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDevice_CanBusError_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::CanBusDeviceState >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDevice_CanBusDeviceState_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::CanBusStatus >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDevice_CanBusStatus_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::ConfigurationKey >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDevice_ConfigurationKey_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::Direction >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDevice_Direction_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QCanBusDevice::Direction> >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QFlags_QCanBusDevice_Direction_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDevice_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::Filter::FormatFilter >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDevice_Filter_FormatFilter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QCanBusDevice::Filter::FormatFilter> >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QFlags_QCanBusDevice_Filter_FormatFilter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDevice::Filter >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDevice_Filter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusDeviceInfo >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusDeviceInfo_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusFactory >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusFactory_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusFrame::FrameType >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusFrame_FrameType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusFrame::FrameError >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusFrame_FrameError_IDX]); }
template<> inline PyTypeObject *SbkType< ::QFlags<QCanBusFrame::FrameError> >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QFlags_QCanBusFrame_FrameError_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusFrame >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusFrame_IDX]); }
template<> inline PyTypeObject *SbkType< ::QCanBusFrame::TimeStamp >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QCanBusFrame_TimeStamp_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusClient >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusClient_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDataUnit::RegisterType >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDataUnit_RegisterType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDataUnit >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDataUnit_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDevice::Error >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDevice_Error_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDevice::State >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDevice_State_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDevice::ConnectionParameter >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDevice_ConnectionParameter_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDevice::IntermediateError >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDevice_IntermediateError_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDevice >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDevice_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDeviceIdentification::ObjectId >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDeviceIdentification_ObjectId_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDeviceIdentification::ReadDeviceIdCode >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDeviceIdentification_ReadDeviceIdCode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDeviceIdentification::ConformityLevel >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDeviceIdentification_ConformityLevel_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusDeviceIdentification >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusDeviceIdentification_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusPdu::ExceptionCode >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusPdu_ExceptionCode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusPdu::FunctionCode >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusPdu_FunctionCode_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusPdu >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusPdu_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusReply::ReplyType >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusReply_ReplyType_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusReply >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusReply_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusRequest >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusRequest_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusRtuSerialClient >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusRtuSerialClient_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusRtuSerialServer >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusRtuSerialServer_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusServer::Option >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusServer_Option_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusServer >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusServer_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusTcpClient >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusTcpClient_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusTcpConnectionObserver >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusTcpConnectionObserver_IDX]); }
template<> inline PyTypeObject *SbkType< ::QModbusTcpServer >() { return Shiboken::Module::get(SbkPySide6_QtSerialBusTypeStructs[SBK_QModbusTcpServer_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTSERIALBUS_PYTHON_H

