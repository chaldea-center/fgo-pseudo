void __fastcall ShopResetMaster___ctor(ShopResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8C1F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string___ctor__, method);
    byte_4BC8C1F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    525,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopResetEntity_o *__fastcall ShopResetMaster__GetEntity(
        ShopResetMaster_o *this,
        int32_t shopId,
        int32_t consumeItemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8C20 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_4BC8C20 = 1;
  }
  PK = (Il2CppObject *)ShopResetEntity__CreatePK(shopId, consumeItemId, *(const MethodInfo **)&consumeItemId);
  return (ShopResetEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_324D130 *)Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopResetMaster__TryGetEntity(
        ShopResetMaster_o *this,
        ShopResetEntity_o **entity,
        int32_t shopId,
        int32_t consumeItemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC8C21 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string__TryGetEntity__, entity);
    byte_4BC8C21 = 1;
  }
  PK = (Il2CppObject *)ShopResetEntity__CreatePK(shopId, consumeItemId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_ShopResetMaster__ShopResetEntity__string__TryGetEntity__);
}