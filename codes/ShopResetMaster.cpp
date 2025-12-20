void ShopResetMaster___ctor(ShopResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DB97 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string___ctor__);
    byte_4D2DB97 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    528,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopResetEntity_o *ShopResetMaster__GetEntity(
        ShopResetMaster_o *this,
        int32_t shopId,
        int32_t consumeItemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2DB98 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string__GetEntity__);
    byte_4D2DB98 = 1;
  }
  PK = (Il2CppObject *)ShopResetEntity__CreatePK(shopId, consumeItemId, *(const MethodInfo **)&consumeItemId);
  return (ShopResetEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_345FF78 *)Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ShopResetMaster__TryGetEntity(
        ShopResetMaster_o *this,
        ShopResetEntity_o **entity,
        int32_t shopId,
        int32_t consumeItemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2DB99 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string__TryGetEntity__);
    byte_4D2DB99 = 1;
  }
  PK = (Il2CppObject *)ShopResetEntity__CreatePK(shopId, consumeItemId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string__TryGetEntity__);
}