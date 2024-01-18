void __fastcall GiftDetailMaster___ctor(GiftDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188F0A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__, method);
    byte_4188F0A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    419,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(
        GiftDetailMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188F0B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__, *(_QWORD *)&giftId);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4188F0B = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          giftId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_B2C434(0LL, v6);
  return GiftDetailEntity__GetOverwritePhaseRewardImageId((GiftDetailEntity_o *)entity, v6);
}