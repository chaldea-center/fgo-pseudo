void UserPaymentLimitMaster___ctor(UserPaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939AE4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string___ctor__);
    byte_5939AE4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    518,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserPaymentLimitEntity_o *UserPaymentLimitMaster__GetEntity(
        UserPaymentLimitMaster_o *this,
        int64_t userId,
        int32_t paymentLimitId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939AE5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__GetEntity__);
    byte_5939AE5 = 1;
  }
  PK = (Il2CppObject *)UserPaymentLimitEntity__CreatePK(userId, paymentLimitId, *(const MethodInfo **)&paymentLimitId);
  return (UserPaymentLimitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__GetEntity__);
}


bool UserPaymentLimitMaster__TryGetEntity(
        UserPaymentLimitMaster_o *this,
        UserPaymentLimitEntity_o **entity,
        int64_t userId,
        int32_t paymentLimitId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939AE6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__TryGetEntity__);
    byte_5939AE6 = 1;
  }
  PK = (Il2CppObject *)UserPaymentLimitEntity__CreatePK(userId, paymentLimitId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__TryGetEntity__);
}