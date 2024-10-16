void __fastcall UserPaymentLimitMaster___ctor(UserPaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E60 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string___ctor__, method);
    byte_4AB6E60 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    509,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserPaymentLimitEntity_o *__fastcall UserPaymentLimitMaster__GetEntity(
        UserPaymentLimitMaster_o *this,
        int64_t userId,
        int32_t paymentLimitId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6E61 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__GetEntity__, userId);
    byte_4AB6E61 = 1;
  }
  PK = (Il2CppObject *)UserPaymentLimitEntity__CreatePK(userId, paymentLimitId, *(const MethodInfo **)&paymentLimitId);
  return (UserPaymentLimitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31640E8 *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__GetEntity__);
}


bool __fastcall UserPaymentLimitMaster__TryGetEntity(
        UserPaymentLimitMaster_o *this,
        UserPaymentLimitEntity_o **entity,
        int64_t userId,
        int32_t paymentLimitId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6E62 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__TryGetEntity__, entity);
    byte_4AB6E62 = 1;
  }
  PK = (Il2CppObject *)UserPaymentLimitEntity__CreatePK(userId, paymentLimitId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserPaymentLimitMaster__UserPaymentLimitEntity__string__TryGetEntity__);
}