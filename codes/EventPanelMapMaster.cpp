void EventPanelMapMaster___ctor(EventPanelMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E04A88 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
    byte_4E04A88 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    347,
    (const MethodInfo_34E6CE4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
}