void __fastcall PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B578 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
    byte_4A5B578 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    508,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
}


int32_t __fastcall PaymentLimitMaster__GetBuyableCount(
        PaymentLimitMaster_o *this,
        int32_t limitId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v7; // x1
  char v8; // w8
  int32_t count; // w8
  bool v10; // vf
  int v11; // w8
  UserPaymentLimitEntity_o *v13; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B577 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B577 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    LODWORD(UserId) = -1;
    return UserId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  UserId = UserPaymentLimitMaster__TryGetEntity((UserPaymentLimitMaster_o *)Master_object, &v13, UserId, limitId, 0LL);
  if ( !entity )
    goto LABEL_18;
  v8 = UserId;
  UserId = HIDWORD(entity[1].klass);
  if ( (v8 & 1) == 0 )
    return UserId;
  if ( !v13 )
LABEL_18:
    sub_1B8880C(UserId, v7);
  count = v13->fields.count;
  v10 = __OFSUB__((_DWORD)UserId, count);
  v11 = UserId - count;
  if ( (v11 < 0) ^ v10 | (v11 == 0) )
    LODWORD(UserId) = 0;
  else
    LODWORD(UserId) = v11;
  return UserId;
}


bool __fastcall PaymentLimitMaster__IsBuyable(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v7; // x1
  UserPaymentLimitEntity_o *v9; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B576 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B576 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_16;
    UserId = UserPaymentLimitMaster__TryGetEntity((UserPaymentLimitMaster_o *)Master_object, &v9, UserId, limitId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( entity && v9 )
        return SHIDWORD(entity[1].klass) > v9->fields.count;
LABEL_16:
      sub_1B8880C(UserId, v7);
    }
  }
  return 1;
}