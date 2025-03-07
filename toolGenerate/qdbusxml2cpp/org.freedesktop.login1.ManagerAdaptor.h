/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-session/dbus/interface/org.freedesktop.login1.Manager.xml -a ./dde-session/toolGenerate/qdbusxml2cpp/org.freedesktop.login1.ManagerAdaptor -i ./dde-session/toolGenerate/qdbusxml2cpp/org.freedesktop.login1.Manager.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_FREEDESKTOP_LOGIN1_MANAGERADAPTOR_H
#define ORG_FREEDESKTOP_LOGIN1_MANAGERADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-session/toolGenerate/qdbusxml2cpp/org.freedesktop.login1.Manager.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.freedesktop.login1.Manager
 */
class ManagerAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.freedesktop.login1.Manager")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.freedesktop.login1.Manager\">\n"
"    <property access=\"readwrite\" type=\"b\" name=\"EnableWallMessages\">\n"
"      <annotation value=\"false\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"      <annotation value=\"true\" name=\"org.freedesktop.systemd1.Privileged\"/>\n"
"    </property>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"WallMessage\">\n"
"      <annotation value=\"false\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"      <annotation value=\"true\" name=\"org.freedesktop.systemd1.Privileged\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"u\" name=\"NAutoVTs\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"as\" name=\"KillOnlyUsers\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"as\" name=\"KillExcludeUsers\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"b\" name=\"KillUserProcesses\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"b\" name=\"RebootToFirmwareSetup\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"b\" name=\"IdleHint\"/>\n"
"    <property access=\"read\" type=\"t\" name=\"IdleSinceHint\"/>\n"
"    <property access=\"read\" type=\"t\" name=\"IdleSinceHintMonotonic\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"BlockInhibited\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"DelayInhibited\"/>\n"
"    <property access=\"read\" type=\"t\" name=\"InhibitDelayMaxUSec\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"HandlePowerKey\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"HandleSuspendKey\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"HandleHibernateKey\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"HandleLidSwitch\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"HandleLidSwitchDocked\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"t\" name=\"HoldoffTimeoutUSec\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"IdleAction\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"t\" name=\"IdleActionUSec\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"b\" name=\"PreparingForShutdown\">\n"
"      <annotation value=\"false\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"b\" name=\"PreparingForSleep\">\n"
"      <annotation value=\"false\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"b\" name=\"Docked\">\n"
"      <annotation value=\"false\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"b\" name=\"RemoveIPC\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"t\" name=\"RuntimeDirectorySize\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"t\" name=\"InhibitorsMax\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"t\" name=\"NCurrentInhibitors\">\n"
"      <annotation value=\"false\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"t\" name=\"SessionsMax\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"t\" name=\"NCurrentSessions\">\n"
"      <annotation value=\"false\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"t\" name=\"UserTasksMax\">\n"
"      <annotation value=\"const\" name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\"/>\n"
"    </property>\n"
"    <method name=\"GetSession\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"GetSessionByPID\">\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"out\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"GetUser\">\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"out\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"GetUserByPID\">\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"out\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"GetSeat\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"ReleaseSession\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <annotation value=\"true\" name=\"org.freedesktop.systemd1.Privileged\"/>\n"
"    </method>\n"
"    <method name=\"ActivateSession\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"ActivateSessionOnSeat\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"LockSession\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"UnlockSession\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"LockSessions\"/>\n"
"    <method name=\"UnlockSessions\"/>\n"
"    <method name=\"KillSession\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"    </method>\n"
"    <method name=\"KillUser\">\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"    </method>\n"
"    <method name=\"TerminateSession\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"TerminateUser\">\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"    </method>\n"
"    <method name=\"TerminateSeat\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"SetUserLinger\">\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"AttachDevice\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"FlushDevices\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"PowerOff\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"Reboot\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"Suspend\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"Hibernate\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"HybridSleep\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"CanPowerOff\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"CanReboot\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"CanSuspend\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"CanHibernate\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"CanHybridSleep\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"ScheduleShutdown\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"t\"/>\n"
"    </method>\n"
"    <method name=\"CancelScheduledShutdown\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"Inhibit\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"h\"/>\n"
"    </method>\n"
"    <method name=\"CanRebootToFirmwareSetup\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"SetRebootToFirmwareSetup\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"SetWallMessage\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <signal name=\"SessionNew\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"o\"/>\n"
"    </signal>\n"
"    <signal name=\"SessionRemoved\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"o\"/>\n"
"    </signal>\n"
"    <signal name=\"UserNew\">\n"
"      <arg type=\"u\"/>\n"
"      <arg type=\"o\"/>\n"
"    </signal>\n"
"    <signal name=\"UserRemoved\">\n"
"      <arg type=\"u\"/>\n"
"      <arg type=\"o\"/>\n"
"    </signal>\n"
"    <signal name=\"SeatNew\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"o\"/>\n"
"    </signal>\n"
"    <signal name=\"SeatRemoved\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"o\"/>\n"
"    </signal>\n"
"    <signal name=\"PrepareForShutdown\">\n"
"      <arg type=\"b\"/>\n"
"    </signal>\n"
"    <signal name=\"PrepareForSleep\">\n"
"      <arg type=\"b\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    ManagerAdaptor(QObject *parent);
    virtual ~ManagerAdaptor();

public: // PROPERTIES
    Q_PROPERTY(QString BlockInhibited READ blockInhibited)
    QString blockInhibited() const;

    Q_PROPERTY(QString DelayInhibited READ delayInhibited)
    QString delayInhibited() const;

    Q_PROPERTY(bool Docked READ docked)
    bool docked() const;

    Q_PROPERTY(bool EnableWallMessages READ enableWallMessages WRITE setEnableWallMessages)
    bool enableWallMessages() const;
    void setEnableWallMessages(bool value);

    Q_PROPERTY(QString HandleHibernateKey READ handleHibernateKey)
    QString handleHibernateKey() const;

    Q_PROPERTY(QString HandleLidSwitch READ handleLidSwitch)
    QString handleLidSwitch() const;

    Q_PROPERTY(QString HandleLidSwitchDocked READ handleLidSwitchDocked)
    QString handleLidSwitchDocked() const;

    Q_PROPERTY(QString HandlePowerKey READ handlePowerKey)
    QString handlePowerKey() const;

    Q_PROPERTY(QString HandleSuspendKey READ handleSuspendKey)
    QString handleSuspendKey() const;

    Q_PROPERTY(qulonglong HoldoffTimeoutUSec READ holdoffTimeoutUSec)
    qulonglong holdoffTimeoutUSec() const;

    Q_PROPERTY(QString IdleAction READ idleAction)
    QString idleAction() const;

    Q_PROPERTY(qulonglong IdleActionUSec READ idleActionUSec)
    qulonglong idleActionUSec() const;

    Q_PROPERTY(bool IdleHint READ idleHint)
    bool idleHint() const;

    Q_PROPERTY(qulonglong IdleSinceHint READ idleSinceHint)
    qulonglong idleSinceHint() const;

    Q_PROPERTY(qulonglong IdleSinceHintMonotonic READ idleSinceHintMonotonic)
    qulonglong idleSinceHintMonotonic() const;

    Q_PROPERTY(qulonglong InhibitDelayMaxUSec READ inhibitDelayMaxUSec)
    qulonglong inhibitDelayMaxUSec() const;

    Q_PROPERTY(qulonglong InhibitorsMax READ inhibitorsMax)
    qulonglong inhibitorsMax() const;

    Q_PROPERTY(QStringList KillExcludeUsers READ killExcludeUsers)
    QStringList killExcludeUsers() const;

    Q_PROPERTY(QStringList KillOnlyUsers READ killOnlyUsers)
    QStringList killOnlyUsers() const;

    Q_PROPERTY(bool KillUserProcesses READ killUserProcesses)
    bool killUserProcesses() const;

    Q_PROPERTY(uint NAutoVTs READ nAutoVTs)
    uint nAutoVTs() const;

    Q_PROPERTY(qulonglong NCurrentInhibitors READ nCurrentInhibitors)
    qulonglong nCurrentInhibitors() const;

    Q_PROPERTY(qulonglong NCurrentSessions READ nCurrentSessions)
    qulonglong nCurrentSessions() const;

    Q_PROPERTY(bool PreparingForShutdown READ preparingForShutdown)
    bool preparingForShutdown() const;

    Q_PROPERTY(bool PreparingForSleep READ preparingForSleep)
    bool preparingForSleep() const;

    Q_PROPERTY(bool RebootToFirmwareSetup READ rebootToFirmwareSetup)
    bool rebootToFirmwareSetup() const;

    Q_PROPERTY(bool RemoveIPC READ removeIPC)
    bool removeIPC() const;

    Q_PROPERTY(qulonglong RuntimeDirectorySize READ runtimeDirectorySize)
    qulonglong runtimeDirectorySize() const;

    Q_PROPERTY(qulonglong SessionsMax READ sessionsMax)
    qulonglong sessionsMax() const;

    Q_PROPERTY(qulonglong UserTasksMax READ userTasksMax)
    qulonglong userTasksMax() const;

    Q_PROPERTY(QString WallMessage READ wallMessage WRITE setWallMessage)
    QString wallMessage() const;
    void setWallMessage(const QString &value);

public Q_SLOTS: // METHODS
    void ActivateSession(const QString &in0);
    void ActivateSessionOnSeat(const QString &in0, const QString &in1);
    void AttachDevice(const QString &in0, const QString &in1, bool in2);
    QString CanHibernate();
    QString CanHybridSleep();
    QString CanPowerOff();
    QString CanReboot();
    QString CanRebootToFirmwareSetup();
    QString CanSuspend();
    bool CancelScheduledShutdown();
    void FlushDevices(bool in0);
    QDBusObjectPath GetSeat(const QString &in0);
    QDBusObjectPath GetSession(const QString &in0);
    QDBusObjectPath GetSessionByPID(uint in0);
    QDBusObjectPath GetUser(uint in0);
    QDBusObjectPath GetUserByPID(uint in0);
    void Hibernate(bool in0);
    void HybridSleep(bool in0);
    QDBusUnixFileDescriptor Inhibit(const QString &in0, const QString &in1, const QString &in2, const QString &in3);
    void KillSession(const QString &in0, const QString &in1, int in2);
    void KillUser(uint in0, int in1);
    void LockSession(const QString &in0);
    void LockSessions();
    void PowerOff(bool in0);
    void Reboot(bool in0);
    void ReleaseSession(const QString &in0);
    void ScheduleShutdown(const QString &in0, qulonglong in1);
    void SetRebootToFirmwareSetup(bool in0);
    void SetUserLinger(uint in0, bool in1, bool in2);
    void SetWallMessage(const QString &in0, bool in1);
    void Suspend(bool in0);
    void TerminateSeat(const QString &in0);
    void TerminateSession(const QString &in0);
    void TerminateUser(uint in0);
    void UnlockSession(const QString &in0);
    void UnlockSessions();
Q_SIGNALS: // SIGNALS
    void PrepareForShutdown(bool in0);
    void PrepareForSleep(bool in0);
    void SeatNew(const QString &in0, const QDBusObjectPath &in1);
    void SeatRemoved(const QString &in0, const QDBusObjectPath &in1);
    void SessionNew(const QString &in0, const QDBusObjectPath &in1);
    void SessionRemoved(const QString &in0, const QDBusObjectPath &in1);
    void UserNew(uint in0, const QDBusObjectPath &in1);
    void UserRemoved(uint in0, const QDBusObjectPath &in1);
};

#endif
