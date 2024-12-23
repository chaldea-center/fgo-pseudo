void __fastcall EventDiggingRewardMaster___ctor(EventDiggingRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B1E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__, method);
    byte_4B66B1E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    350,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__);
}