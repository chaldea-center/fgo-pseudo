void __fastcall EventPanelMapMaster___ctor(EventPanelMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
    byte_4A5B1B7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    341,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
}