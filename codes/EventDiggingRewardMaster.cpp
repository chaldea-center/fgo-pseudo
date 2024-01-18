void __fastcall EventDiggingRewardMaster___ctor(EventDiggingRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A36D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__, method);
    byte_418A36D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    344,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventDiggingRewardMaster__EventDiggingRewardEntity__int___ctor__);
}