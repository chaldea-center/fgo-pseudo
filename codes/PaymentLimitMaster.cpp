void __fastcall PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16624 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__, method, v2);
    byte_4B16624 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    508,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PaymentLimitMaster__GetBuyableCount(
        PaymentLimitMaster_o *this,
        int32_t limitId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v15; // x1
  char v16; // w8
  int32_t count; // w8
  bool v18; // vf
  int v19; // w8
  UserPaymentLimitEntity_o *v21; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16623 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserPaymentLimitMaster___, *(_QWORD *)&limitId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B16623 = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    LODWORD(UserId) = -1;
    return UserId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  UserId = UserPaymentLimitMaster__TryGetEntity((UserPaymentLimitMaster_o *)Master_object, &v21, UserId, limitId, 0LL);
  if ( !entity )
    goto LABEL_18;
  v16 = UserId;
  UserId = HIDWORD(entity[1].klass);
  if ( (v16 & 1) == 0 )
    return UserId;
  if ( !v21 )
LABEL_18:
    sub_1BCAA3C(UserId, v15);
  count = v21->fields.count;
  v18 = __OFSUB__((_DWORD)UserId, count);
  v19 = UserId - count;
  if ( (v19 < 0) ^ v18 | (v19 == 0) )
    LODWORD(UserId) = 0;
  else
    LODWORD(UserId) = v19;
  return UserId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PaymentLimitMaster__IsBuyable(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v15; // x1
  UserPaymentLimitEntity_o *v17; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16622 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserPaymentLimitMaster___, *(_QWORD *)&limitId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B16622 = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_16;
    UserId = UserPaymentLimitMaster__TryGetEntity((UserPaymentLimitMaster_o *)Master_object, &v17, UserId, limitId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( entity && v17 )
        return SHIDWORD(entity[1].klass) > v17->fields.count;
LABEL_16:
      sub_1BCAA3C(UserId, v15);
    }
  }
  return 1;
}