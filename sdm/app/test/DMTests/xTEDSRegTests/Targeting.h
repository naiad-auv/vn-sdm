#ifndef _TARGETINGCONTROL_XTEDS_H
#define _TARGETINGCONTROL_XTEDS_H

#define _STRING_TARGETINGCONTROL_XTEDS \
"<?xml version=\"1.0\" encoding=\"utf-8\" ?>" \
"<xTEDS xmlns=\"http://www.interfacecontrol.com/SPA/xTEDS\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"" \
"xsi:schemaLocation=\"http://www.interfacecontrol.com/SPA/xTEDS ../Schema/xTEDS02.xsd\" name=\"Targeting_App_xTeds\" version=\"2.1\">" \
"<Application name=\"TargetingControl\" version=\"1.0\" kind=\"SHAP\" description=\"Calculates current attitude errors for use by the control law application\" />" \
"<Interface name=\"TargetingInterface\" id=\"1\">" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"AttitudeError\" kind=\"attitudeDelta\" length=\"4\" format=\"FLOAT32\" description=\"Difference between current and desired attitude\">" \
"<Qualifier name=\"representation\" value=\"quaternion\"/>" \
"<Qualifier name=\"frameFrom\" value=\"SVF\"/>" \
"<Qualifier name=\"frameTo\" value=\"SVF\"/>" \
"</Variable>" \
"<Variable name=\"Offset\" kind=\"rollPitchYaw\" length=\"3\" units=\"rad\" format=\"FLOAT32\" description=\"pushbroom offsets from LVLH [rad]\"/>" \
"<Variable name=\"ADCSMode\" kind=\"mode\" format=\"UINT08\" defaultValue=\"Attitude Control Mode\">" \
"<Drange name=\"ADCSModeEnum\">" \
"<Option name=\"Standby\" value=\"0\"/>" \
"<Option name=\"Detumble\" value=\"1\"/>" \
"<Option name=\"SunTrack\" value=\"2\"/>" \
"<Option name=\"NadirTrack\" value=\"3\"/>" \
"<Option name=\"TargetTrack\" value=\"4\"/>" \
"</Drange>" \
"</Variable>" \
"<Variable name=\"Target\" kind=\"position\" length=\"3\" units=\"km\" format=\"FLOAT64\" description=\"ECI position vector of a target at which we wish to point\">" \
"<Qualifier name=\"representation\" value=\"vector\"/>" \
"<Qualifier name=\"frameMeasured\" value=\"ECIMOD\"/>" \
"<Qualifier name=\"frameResolved\" value=\"ECIMOD\"/>" \
"</Variable>" \
"<Notification>" \
"<DataMsg name=\"AttitudeErrorMsg\" id=\"1\" msgArrival=\"PERIODIC\" msgRate=\"100\"  description=\"100HZ broadcast of attitude error\">" \
"<VariableRef name=\"Time\"/>" \
"<VariableRef name=\"SubS\"/>" \
"<VariableRef name=\"AttitudeError\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"2\" name=\"SetADCSMode\" description=\"Command to set the control mode\">" \
"<VariableRef name=\"ADCSMode\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"SetPushBroomOffset\" description=\"Sets the tracking offset\">" \
"<VariableRef name=\"Offset\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"SetTarget\" description=\"Sets the target at which we wish to point\">" \
"<VariableRef name=\"Target\"/>" \
"</CommandMsg>" \
"</Command>" \
"</Interface>" \
"</xTEDS>" \
""

#endif
