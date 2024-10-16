void __fastcall UserExternalPaymentStoneMaster___ctor(UserExternalPaymentStoneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E53 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__,
      method);
    byte_4AB6E53 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    499,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__);
}


UserExternalPaymentStoneEntity_o *__fastcall UserExternalPaymentStoneMaster__GetEntity(
        UserExternalPaymentStoneMaster_o *this,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6E54 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__,
      userId);
    byte_4AB6E54 = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0LL);
  return (UserExternalPaymentStoneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31640E8 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__);
}


bool __fastcall UserExternalPaymentStoneMaster__TryGetEntity(
        UserExternalPaymentStoneMaster_o *this,
        UserExternalPaymentStoneEntity_o **entity,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6E55 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__,
      entity);
    byte_4AB6E55 = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__);
}