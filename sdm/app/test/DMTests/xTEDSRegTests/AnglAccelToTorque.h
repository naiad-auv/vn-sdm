#ifndef _TORQUECONTROL_XTEDS_H
#define _TORQUECONTROL_XTEDS_H

#define _STRING_TORQUECONTROL_XTEDS \
"<?xml version=\"1.0\" encoding=\"utf-8\" ?>" \
"<xTEDS xmlns=\"http://www.interfacecontrol.com/SPA/xTEDS\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"" \
"xsi:schemaLocation=\"http://www.interfacecontrol.com/SPA/xTEDS xTEDS02.xsd\" name=\"Torque_Control_xTeds\"" \
"version=\"2.0\">" \
"<Application name=\"TorqueControl\" version=\"1.0\" kind=\"AHAP\" description=\"Takes commands for angular acceleration, converts to torque, and distributes torque commands to actuators\" />" \
"" \
"<Interface name=\"TorqueControlInterface\" id=\"1\">" \
"<Variable name=\"AnglAccel\" kind=\"angularAcceleration\" length=\"3\" format=\"FLOAT64\" description=\"Commanded angular acceleration\">" \
"<Qualifier name=\"representation\" value=\"vector\"/>" \
"<Qualifier name=\"frameMeasured\" value=\"SVF\"/>" \
"<Qualifier name=\"frameResolved\" value=\"SVF\"/>" \
"</Variable>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable kind=\"Torque\" name=\"X\" units=\"nm\" format=\"FLOAT32\" description=\"X component of torque to apply\" />" \
"<Variable kind=\"Torque\" name=\"Y\" units=\"nm\" format=\"FLOAT32\" description=\"Y component of torque to apply\" />" \
"<Variable kind=\"Torque\" name=\"Z\" units=\"nm\" format=\"FLOAT32\" description=\"Z component of torque to apply\" />" \
"<Command>" \
"<CommandMsg id=\"1\" name=\"SCAngularAccelCmd\" description=\"Command to apply angular acceleration to the spacecraft\">" \
"<VariableRef name=\"AnglAccel\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"SVTorqueToApply\" description=\"Torque equivalent to requested angular acceleration\" msgArrival=\"PERIODIC\" msgRate=\"10\">" \
"<VariableRef name=\"Time\"/>" \
"<VariableRef name=\"SubS\"/>" \
"<VariableRef name=\"X\"/>" \
"<VariableRef name=\"Y\"/>" \
"<VariableRef name=\"Z\"/>" \
"</DataMsg>" \
"</Notification>" \
"</Interface>" \
"</xTEDS>" \
""

#endif
