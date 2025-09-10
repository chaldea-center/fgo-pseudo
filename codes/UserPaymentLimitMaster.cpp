void UserPaymentLimitMaster___ctor(UserPaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C285C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string___ctor__);
    byte_4C285C0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    516,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserPaymentLimitEntity_o *UserPaymentLimitMaster__GetEntity(
        UserPaymentLimitMaster_o *this,
        int64_t userId,
        int32_t paymentLimitId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C285C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__GetEntity__);
    byte_4C285C1 = 1;
  }
  PK = (Il2CppObject *)UserPaymentLimitEntity__CreatePK(userId, paymentLimitId, *(const MethodInfo **)&paymentLimitId);
  return (UserPaymentLimitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_338C850 *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__GetEntity__);
}


bool UserPaymentLimitMaster__TryGetEntity(
        UserPaymentLimitMaster_o *this,
        UserPaymentLimitEntity_o **entity,
        int64_t userId,
        int32_t paymentLimitId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C285C2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__TryGetEntity__);
    byte_4C285C2 = 1;
  }
  PK = (Il2CppObject *)UserPaymentLimitEntity__CreatePK(userId, paymentLimitId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__TryGetEntity__);
}