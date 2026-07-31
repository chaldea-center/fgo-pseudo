void EventDiggingRewardMaster___ctor(EventDiggingRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59385E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__);
    byte_59385E8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    354,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__);
}