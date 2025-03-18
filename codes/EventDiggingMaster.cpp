void __fastcall EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21EB8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__, method);
    byte_4C21EB8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    351,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}