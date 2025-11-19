void EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6226 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
    byte_4CB6226 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    351,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}