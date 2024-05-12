void __fastcall GiftDetailMaster___ctor(GiftDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C8D9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
    byte_438C8D9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    420,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
}


System_String_o *__fastcall GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(
        GiftDetailMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C8DA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C8DA = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          giftId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_B7769C(0LL, v5);
  return GiftDetailEntity__GetOverwritePhaseRewardImageId((GiftDetailEntity_o *)entity, v5);
}