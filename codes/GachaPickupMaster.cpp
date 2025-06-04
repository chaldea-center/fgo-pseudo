void __fastcall GachaPickupMaster___ctor(GachaPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B0325B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string___ctor__, method);
    byte_4B0325B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    40,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaPickupEntity_o *__fastcall GachaPickupMaster__GetEntity(
        GachaPickupMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B0325C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B0325C = 1;
  }
  PK = (Il2CppObject *)GachaPickupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&giftId);
  return (GachaPickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_32B3B28 *)Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaPickupMaster__TryGetEntity(
        GachaPickupMaster_o *this,
        GachaPickupEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B0325D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string__TryGetEntity__, entity);
    byte_4B0325D = 1;
  }
  PK = (Il2CppObject *)GachaPickupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string__TryGetEntity__);
}