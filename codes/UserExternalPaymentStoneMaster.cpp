void __fastcall UserExternalPaymentStoneMaster___ctor(UserExternalPaymentStoneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67D21 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__,
      method);
    byte_4B67D21 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    503,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__);
}


UserExternalPaymentStoneEntity_o *__fastcall UserExternalPaymentStoneMaster__GetEntity(
        UserExternalPaymentStoneMaster_o *this,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67D22 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__,
      userId);
    byte_4B67D22 = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0LL);
  return (UserExternalPaymentStoneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__);
}


bool __fastcall UserExternalPaymentStoneMaster__TryGetEntity(
        UserExternalPaymentStoneMaster_o *this,
        UserExternalPaymentStoneEntity_o **entity,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67D23 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__,
      entity);
    byte_4B67D23 = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__);
}