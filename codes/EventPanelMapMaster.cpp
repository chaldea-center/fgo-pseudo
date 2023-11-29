void __fastcall EventPanelMapMaster___ctor(EventPanelMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FABF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__, method);
    byte_40FABF3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    339,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
}