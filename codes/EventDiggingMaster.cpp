void EventDiggingMaster___ctor(EventDiggingMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE5ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
    byte_4CEE5ED = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    351,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int___ctor__);
}