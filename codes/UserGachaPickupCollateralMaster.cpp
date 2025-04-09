void __fastcall UserGachaPickupCollateralMaster___ctor(
        UserGachaPickupCollateralMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BBC5A & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserGachaPickupCollateralMaster__UserGachaPickupCollateralEntity__string___ctor__,
      method);
    byte_49BBC5A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    35,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserGachaPickupCollateralMaster__UserGachaPickupCollateralEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGachaPickupCollateralEntity_o *__fastcall UserGachaPickupCollateralMaster__GetEntity(
        UserGachaPickupCollateralMaster_o *this,
        int64_t userId,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BBC58 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserGachaPickupCollateralMaster__UserGachaPickupCollateralEntity__string__GetEntity__,
      userId);
    byte_49BBC58 = 1;
  }
  PK = (Il2CppObject *)UserGachaPickupCollateralEntity__CreatePK(
                         userId,
                         gachaPickupCollateralGroupId,
                         type,
                         rarity,
                         *(const MethodInfo **)&rarity);
  return (UserGachaPickupCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_31A2454 *)Method_DataMasterBase_UserGachaPickupCollateralMaster__UserGachaPickupCollateralEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaPickupCollateralMaster__TryGetEntity(
        UserGachaPickupCollateralMaster_o *this,
        UserGachaPickupCollateralEntity_o **entity,
        int64_t userId,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BBC59 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserGachaPickupCollateralMaster__UserGachaPickupCollateralEntity__string__TryGetEntity__,
      entity);
    byte_49BBC59 = 1;
  }
  PK = (Il2CppObject *)UserGachaPickupCollateralEntity__CreatePK(
                         userId,
                         gachaPickupCollateralGroupId,
                         type,
                         rarity,
                         *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserGachaPickupCollateralMaster__UserGachaPickupCollateralEntity__string__TryGetEntity__);
}