void __fastcall EventPanelMapMaster___ctor(EventPanelMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438B52C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
    byte_438B52C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    340,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
}