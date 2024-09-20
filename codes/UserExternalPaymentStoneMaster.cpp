void __fastcall UserExternalPaymentStoneMaster___ctor(UserExternalPaymentStoneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C24B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__);
    byte_4A5C24B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    499,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__);
}


UserExternalPaymentStoneEntity_o *__fastcall UserExternalPaymentStoneMaster__GetEntity(
        UserExternalPaymentStoneMaster_o *this,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C24C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__);
    byte_4A5C24C = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0LL);
  return (UserExternalPaymentStoneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_311DC8C *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__);
}


bool __fastcall UserExternalPaymentStoneMaster__TryGetEntity(
        UserExternalPaymentStoneMaster_o *this,
        UserExternalPaymentStoneEntity_o **entity,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C24D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__);
    byte_4A5C24D = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__);
}