void __fastcall EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC498 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
    byte_4BDC498 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    126,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}