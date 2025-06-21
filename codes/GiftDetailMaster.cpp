void __fastcall GiftDetailMaster___ctor(GiftDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C835 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__, method);
    byte_4B1C835 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    427,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(
        GiftDetailMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1C836 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__, *(_QWORD *)&giftId);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1C836 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          giftId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1BCB254(0LL, v6);
  return GiftDetailEntity__GetOverwritePhaseRewardImageId((GiftDetailEntity_o *)entity, v6);
}