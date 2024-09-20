void __fastcall GiftDetailMaster___ctor(GiftDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B42E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
    byte_4A5B42E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    421,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
}


System_String_o *__fastcall GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(
        GiftDetailMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B42F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B42F = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          giftId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1B8880C(0LL, v5);
  return GiftDetailEntity__GetOverwritePhaseRewardImageId((GiftDetailEntity_o *)entity, v5);
}