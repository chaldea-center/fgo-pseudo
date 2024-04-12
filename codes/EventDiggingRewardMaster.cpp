void __fastcall EventDiggingRewardMaster___ctor(EventDiggingRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B27FB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__);
    byte_42B27FB = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    345,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__);
}