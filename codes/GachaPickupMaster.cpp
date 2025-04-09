void __fastcall GachaPickupMaster___ctor(GachaPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BC01C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string___ctor__, method);
    byte_49BC01C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    40,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string___ctor__);
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

  if ( (byte_49BC01D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49BC01D = 1;
  }
  PK = (Il2CppObject *)GachaPickupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&giftId);
  return (GachaPickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31A2454 *)Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string__GetEntity__);
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

  if ( (byte_49BC01E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string__TryGetEntity__, entity);
    byte_49BC01E = 1;
  }
  PK = (Il2CppObject *)GachaPickupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_GachaPickupMaster__GachaPickupEntity__string__TryGetEntity__);
}