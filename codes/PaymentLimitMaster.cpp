void __fastcall PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC81A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__, method);
    byte_49FC81A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    508,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
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
  char v10; // w8
  int32_t count; // w8
  bool v12; // vf
  int v13; // w8
  UserPaymentLimitEntity_o *v15; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC819 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserPaymentLimitMaster___, *(_QWORD *)&limitId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    byte_49FC819 = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    LODWORD(UserId) = -1;
    return UserId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  UserId = UserPaymentLimitMaster__TryGetEntity((UserPaymentLimitMaster_o *)Master_object, &v15, UserId, limitId, 0LL);
  if ( !entity )
    goto LABEL_18;
  v10 = UserId;
  UserId = HIDWORD(entity[1].klass);
  if ( (v10 & 1) == 0 )
    return UserId;
  if ( !v15 )
LABEL_18:
    sub_1B64324(UserId);
  count = v15->fields.count;
  v12 = __OFSUB__((_DWORD)UserId, count);
  v13 = UserId - count;
  if ( (v13 < 0) ^ v12 | (v13 == 0) )
    LODWORD(UserId) = 0;
  else
    LODWORD(UserId) = v13;
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
  UserPaymentLimitEntity_o *v11; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC818 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserPaymentLimitMaster___, *(_QWORD *)&limitId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    byte_49FC818 = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_16;
    UserId = UserPaymentLimitMaster__TryGetEntity((UserPaymentLimitMaster_o *)Master_object, &v11, UserId, limitId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( entity && v11 )
        return SHIDWORD(entity[1].klass) > v11->fields.count;
LABEL_16:
      sub_1B64324(UserId);
    }
  }
  return 1;
}