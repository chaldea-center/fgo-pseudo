void UserExternalPaymentStoneMaster___ctor(UserExternalPaymentStoneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939AD7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__);
    byte_5939AD7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    508,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string___ctor__);
}


UserExternalPaymentStoneEntity_o *UserExternalPaymentStoneMaster__GetEntity(
        UserExternalPaymentStoneMaster_o *this,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939AD8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__);
    byte_5939AD8 = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0);
  return (UserExternalPaymentStoneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__GetEntity__);
}


bool UserExternalPaymentStoneMaster__TryGetEntity(
        UserExternalPaymentStoneMaster_o *this,
        UserExternalPaymentStoneEntity_o **entity,
        int64_t userId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939AD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__);
    byte_5939AD9 = 1;
  }
  PK = (Il2CppObject *)UserExternalPaymentStoneEntity__CreatePK(userId, type, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserExternalPaymentStoneMaster__UserExternalPaymentStoneEntity__string__TryGetEntity__);
}