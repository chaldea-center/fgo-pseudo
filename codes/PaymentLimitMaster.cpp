void __fastcall PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70284 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__, method);
    byte_4A70284 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    508,
    (const MethodInfo_312C568 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PaymentLimitMaster__GetBuyableCount(
        PaymentLimitMaster_o *this,
        int32_t limitId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v10; // x1
  char v11; // w8
  int32_t count; // w8
  bool v13; // vf
  int v14; // w8
  UserPaymentLimitEntity_o *v16; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A70283 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_UserPaymentLimitMaster___, *(_QWORD *)&limitId);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__, v6);
    sub_1B90010(&NetworkManager_TypeInfo, v7);
    byte_4A70283 = 1;
  }
  v16 = 0LL;
  entity = 0LL;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_312C5FC *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    LODWORD(UserId) = -1;
    return UserId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  UserId = UserPaymentLimitMaster__TryGetEntity((UserPaymentLimitMaster_o *)Master_object, &v16, UserId, limitId, 0LL);
  if ( !entity )
    goto LABEL_18;
  v11 = UserId;
  UserId = HIDWORD(entity[1].klass);
  if ( (v11 & 1) == 0 )
    return UserId;
  if ( !v16 )
LABEL_18:
    sub_1B9026C(UserId, v10);
  count = v16->fields.count;
  v13 = __OFSUB__((_DWORD)UserId, count);
  v14 = UserId - count;
  if ( (v14 < 0) ^ v13 | (v14 == 0) )
    LODWORD(UserId) = 0;
  else
    LODWORD(UserId) = v14;
  return UserId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PaymentLimitMaster__IsBuyable(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v10; // x1
  UserPaymentLimitEntity_o *v12; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A70282 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_UserPaymentLimitMaster___, *(_QWORD *)&limitId);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__, v6);
    sub_1B90010(&NetworkManager_TypeInfo, v7);
    byte_4A70282 = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_312C5FC *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_16;
    UserId = UserPaymentLimitMaster__TryGetEntity((UserPaymentLimitMaster_o *)Master_object, &v12, UserId, limitId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( entity && v12 )
        return SHIDWORD(entity[1].klass) > v12->fields.count;
LABEL_16:
      sub_1B9026C(UserId, v10);
    }
  }
  return 1;
}