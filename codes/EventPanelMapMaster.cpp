void __fastcall EventPanelMapMaster___ctor(EventPanelMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4351E69 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
    byte_4351E69 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    340,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
}