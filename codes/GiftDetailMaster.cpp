void __fastcall GiftDetailMaster___ctor(GiftDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6022 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__, method);
    byte_4AB6022 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    421,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
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

  if ( (byte_4AB6023 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__, *(_QWORD *)&giftId);
    sub_1BAB41C(&StringLiteral_1/*""*/, v5);
    byte_4AB6023 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          giftId,
          (const MethodInfo_3163DE4 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1BAB678(0LL, v6);
  return GiftDetailEntity__GetOverwritePhaseRewardImageId((GiftDetailEntity_o *)entity, v6);
}