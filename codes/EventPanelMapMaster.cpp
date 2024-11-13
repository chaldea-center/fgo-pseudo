void __fastcall EventPanelMapMaster___ctor(EventPanelMapMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16246 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__, method, v2);
    byte_4B16246 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    341,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int___ctor__);
}