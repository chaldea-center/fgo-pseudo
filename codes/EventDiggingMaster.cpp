void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BADCA & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__, method);
    byte_49BADCA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    351,
    (const MethodInfo_319B678 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}