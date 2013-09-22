#ifndef _ROBOHUB_8_PORT_XTEDS_H
#define _ROBOHUB_8_PORT_XTEDS_H

#define _STRING_ROBOHUB_8_PORT_XTEDS \
"<?xml version=\"1.0\" encoding=\"utf-8\" ?>" \
"<xTEDS xmlns=\"http://www.interfacecontrol.com/SPA/xTEDS\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"" \
"xsi:schemaLocation=\"http://www.interfacecontrol.com/SPA/xTEDS ../Schema/xTEDS02.xsd\" name=\"Robo_Hub_xTEDS\" version=\"11.16\">" \
"" \
"<Device name=\"RobustHub_8_Port\" kind=\"Robust_Hub\" modelId=\"0001\" >" \
"<Qualifier name=\"Manufacturer\" value=\"DataDesignCorp\"/>" \
"<Qualifier name=\"Model\" value=\"Gen1\"/>" \
"<Qualifier name=\"SerialNumber\" value=\"12345\"/>" \
"</Device>" \
"" \
"<Interface id=\"1\" name=\"InterPanelPortInterface\" description=\"Interface for one of the inter-panel ports\">" \
"<Qualifier name=\"PortID\" value=\"A\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"30.0\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"BreakerCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"BreakerCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"2\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"<Interface id=\"2\" name=\"InterPanelPortInterface\" description=\"Interface for one of the inter-panel ports\">" \
"<Qualifier name=\"portID\" value=\"B\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"30.0\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"BreakerCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"BreakerCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"2\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"<Interface id=\"3\" name=\"InterPanelPortInterface\" description=\"Interface for one of the inter-panel ports\">" \
"<Qualifier name=\"PortID\" value=\"C\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"30.0\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"BreakerCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"BreakerCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"2\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"<Interface id=\"4\" name=\"InterPanelPortInterface\" description=\"Interface for one of the inter-panel ports\">" \
"<Qualifier name=\"PortID\" value=\"D\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"30.0\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"BreakerCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"BreakerCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"2\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"<Interface id=\"5\" name=\"ASIMPortInterface\" description=\"Interface for a single SPA-U port on the hub.\">" \
"<Qualifier name=\"PortID\" value=\"0\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"4.5\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"PortVoltage\" kind=\"Voltage\" format=\"FLOAT32\" scaleUnits=\"Volts\"/>" \
"<Variable name=\"PortCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"SoftCurrentLimit\" kind=\"TripCurrent\" format=\"FLOAT32\" defaultValue=\"1.0\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\" />" \
"<VariableRef name=\"PortVoltage\"/>" \
"<VariableRef name=\"PortCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"ConfigureSoftTrip\">" \
"<VariableRef name=\"SoftCurrentLimit\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"5\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"" \
"<Interface id=\"6\" name=\"ASIMPortInterface\" description=\"Interface for a single SPA-U port on the hub.\">" \
"<Qualifier name=\"PortID\" value=\"1\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"4.5\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"PortVoltage\" kind=\"Voltage\" format=\"FLOAT32\" scaleUnits=\"Volts\"/>" \
"<Variable name=\"PortCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"SoftCurrentLimit\" kind=\"TripCurrent\" format=\"FLOAT32\" defaultValue=\"1.0\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\" />" \
"<VariableRef name=\"PortVoltage\"/>" \
"<VariableRef name=\"PortCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"ConfigureSoftTrip\">" \
"<VariableRef name=\"SoftCurrentLimit\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"5\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"" \
"<Interface id=\"7\" name=\"ASIMPortInterface\" description=\"Interface for a single SPA-U port on the hub.\">" \
"<Qualifier name=\"PortID\" value=\"2\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"4.5\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"PortVoltage\" kind=\"Voltage\" format=\"FLOAT32\" scaleUnits=\"Volts\"/>" \
"<Variable name=\"PortCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"SoftCurrentLimit\" kind=\"TripCurrent\" format=\"FLOAT32\" defaultValue=\"1.0\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\" />" \
"<VariableRef name=\"PortVoltage\"/>" \
"<VariableRef name=\"PortCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"ConfigureSoftTrip\">" \
"<VariableRef name=\"SoftCurrentLimit\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"5\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"" \
"<Interface id=\"8\" name=\"ASIMPortInterface\" description=\"Interface for a single SPA-U port on the hub.\">" \
"<Qualifier name=\"PortID\" value=\"3\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"4.5\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"PortVoltage\" kind=\"Voltage\" format=\"FLOAT32\" scaleUnits=\"Volts\"/>" \
"<Variable name=\"PortCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"SoftCurrentLimit\" kind=\"TripCurrent\" format=\"FLOAT32\" defaultValue=\"1.0\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\" />" \
"<VariableRef name=\"PortVoltage\"/>" \
"<VariableRef name=\"PortCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"ConfigureSoftTrip\">" \
"<VariableRef name=\"SoftCurrentLimit\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"5\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"" \
"<Interface id=\"9\" name=\"ASIMPortInterface\" description=\"Interface for a single SPA-U port on the hub.\">" \
"<Qualifier name=\"PortID\" value=\"4\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"4.5\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"PortVoltage\" kind=\"Voltage\" format=\"FLOAT32\" scaleUnits=\"Volts\"/>" \
"<Variable name=\"PortCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"SoftCurrentLimit\" kind=\"TripCurrent\" format=\"FLOAT32\" defaultValue=\"1.0\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\" />" \
"<VariableRef name=\"PortVoltage\"/>" \
"<VariableRef name=\"PortCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"ConfigureSoftTrip\">" \
"<VariableRef name=\"SoftCurrentLimit\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"5\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"" \
"<Interface id=\"10\" name=\"ASIMPortInterface\" description=\"Interface for a single SPA-U port on the hub.\">" \
"<Qualifier name=\"PortID\" value=\"5\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"4.5\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"PortVoltage\" kind=\"Voltage\" format=\"FLOAT32\" scaleUnits=\"Volts\"/>" \
"<Variable name=\"PortCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"SoftCurrentLimit\" kind=\"TripCurrent\" format=\"FLOAT32\" defaultValue=\"1.0\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\" />" \
"<VariableRef name=\"PortVoltage\"/>" \
"<VariableRef name=\"PortCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"ConfigureSoftTrip\">" \
"<VariableRef name=\"SoftCurrentLimit\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"5\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"" \
"<Interface id=\"11\" name=\"ASIMPortInterface\" description=\"Interface for a single SPA-U port on the hub.\">" \
"<Qualifier name=\"PortID\" value=\"6\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"4.5\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"PortVoltage\" kind=\"Voltage\" format=\"FLOAT32\" scaleUnits=\"Volts\"/>" \
"<Variable name=\"PortCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"SoftCurrentLimit\" kind=\"TripCurrent\" format=\"FLOAT32\" defaultValue=\"1.0\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\" />" \
"<VariableRef name=\"PortVoltage\"/>" \
"<VariableRef name=\"PortCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"ConfigureSoftTrip\">" \
"<VariableRef name=\"SoftCurrentLimit\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"5\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"" \
"<Interface id=\"12\" name=\"ASIMPortInterface\" description=\"Interface for a single SPA-U port on the hub.\">" \
"<Qualifier name=\"PortID\" value=\"7\"/>" \
"<Qualifier name=\"BreakerTripCurrent\" value=\"4.5\" units=\"Amps\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"PortVoltage\" kind=\"Voltage\" format=\"FLOAT32\" scaleUnits=\"Volts\"/>" \
"<Variable name=\"PortCurrent\" kind=\"Current\" format=\"FLOAT32\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"SoftCurrentLimit\" kind=\"TripCurrent\" format=\"FLOAT32\" defaultValue=\"1.0\" scaleUnits=\"Amps\"/>" \
"<Variable name=\"PortPowerState\" kind=\"boolean\" format=\"UINT08\">" \
"<Drange name=\"PowerStateEnum\">" \
"<Option name=\"Off\" value=\"0\"/>" \
"<Option name=\"On\" value=\"1\"/>" \
"<Option name=\"Tripped\" value=\"2\"/>" \
"</Drange>" \
"</Variable>" \
"<Notification>" \
"<DataMsg id=\"1\" name=\"PortStatus\" msgArrival=\"PERIODIC\" msgRate=\"1\" >" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\" />" \
"<VariableRef name=\"PortVoltage\"/>" \
"<VariableRef name=\"PortCurrent\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Notification>" \
"<DataMsg id=\"2\" name=\"PortTripped\" msgArrival=\"EVENT\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"PortPowerState\"/>" \
"</DataMsg>" \
"</Notification>" \
"<Command>" \
"<CommandMsg id=\"3\" name=\"ConfigureSoftTrip\">" \
"<VariableRef name=\"SoftCurrentLimit\"/>" \
"</CommandMsg>" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"4\" name=\"PortPowerOn\" />" \
"</Command>" \
"<Command>" \
"<CommandMsg id=\"5\" name=\"PortPowerOff\" />" \
"</Command>" \
"</Interface>" \
"" \
"" \
"<Interface name=\"CmpSafety\" id=\"13\">" \
"<Qualifier name=\"TemperatureLoKeepout\" value=\"-20.0\" units=\"degC\"/>" \
"<Qualifier name=\"TemperatureLoWarning\" value=\"-10.0\" units=\"degC\"/>" \
"<Qualifier name=\"TemperatureHiWarning\" value=\"50.0\" units=\"degC\"/>" \
"<Qualifier name=\"TemperatureHiKeepout\" value=\"60.0\" units=\"degC\"/>" \
"<Variable kind=\"Time\" name=\"Time\" format=\"UINT32\" units=\"Seconds\" />" \
"<Variable kind=\"SubSeconds\" name=\"SubS\" units=\"Counts\" format=\"UINT32\" scaleFactor=\".0001\" scaleUnits=\"Seconds\" />" \
"<Variable name=\"DeviceTemperature\" kind=\"temperature\" format=\"FLOAT32\" units=\"degC\" />" \
"<Request>" \
"<CommandMsg name=\"GetDeviceTemperature\" id=\"1\" />" \
"<DataReplyMsg name=\"DeviceTempReply\" id=\"2\">" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"DeviceTemperature\"/>" \
"</DataReplyMsg>" \
"</Request>" \
"<Notification>" \
"<DataMsg name=\"DeviceTemp\" id=\"3\" msgArrival=\"PERIODIC\" msgRate=\"1\">" \
"<Qualifier name=\"telemetryLevel\" value=\"1\"/>" \
"<VariableRef name=\"Time\" />" \
"<VariableRef name=\"SubS\" />" \
"<VariableRef name=\"DeviceTemperature\"/>" \
"</DataMsg>" \
"</Notification>" \
"</Interface>" \
"" \
"</xTEDS>" \
""

#endif
