void GiftDetailMaster___ctor(GiftDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C275EE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
    byte_4C275EE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    427,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
}


System_String_o *GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(
        GiftDetailMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C275EF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C275EF = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          giftId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1C2D6EC(0, v5);
  return GiftDetailEntity__GetOverwritePhaseRewardImageId((GiftDetailEntity_o *)entity, v5);
}