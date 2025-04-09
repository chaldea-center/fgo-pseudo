void __fastcall UserExternalPaymentStoneMaster___ctor(UserExternalPaymentStoneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BC064 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__,
      method);
    byte_49BC064 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    506,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__);
}


UserExternalPaymentStoneEntity_o *__fastcall UserExternalPaymentStoneMaster__GetEntity(
        UserExternalPaymentStoneMaster_o *this,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BC065 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__,
      userId);
    byte_49BC065 = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0LL);
  return (UserExternalPaymentStoneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31A2454 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__);
}


bool __fastcall UserExternalPaymentStoneMaster__TryGetEntity(
        UserExternalPaymentStoneMaster_o *this,
        UserExternalPaymentStoneEntity_o **entity,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BC066 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__,
      entity);
    byte_49BC066 = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__);
}