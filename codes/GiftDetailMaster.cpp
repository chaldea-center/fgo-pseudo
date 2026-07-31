void GiftDetailMaster___ctor(GiftDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938AE1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
    byte_5938AE1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    429,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int___ctor__);
}


System_String_o *GiftDetailMaster__GetOverwriteImageIdByQuestPhaseReward(
        GiftDetailMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938AE2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938AE2 = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          giftId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_21FFECC(0, v5);
  return GiftDetailEntity__GetOverwritePhaseRewardImageId((GiftDetailEntity_o *)entity, v5);
}