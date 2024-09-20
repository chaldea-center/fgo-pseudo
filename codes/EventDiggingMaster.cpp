void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B0C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
    byte_4A5B0C7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    345,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}