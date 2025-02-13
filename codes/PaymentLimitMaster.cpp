void __fastcall PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC99B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
    byte_4BDC99B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    512,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
}


int32_t __fastcall PaymentLimitMaster__GetBuyableCount(
        PaymentLimitMaster_o *this,
        int32_t limitId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *klass_high; // x0
  char v8; // w8
  int32_t count; // w8
  bool v10; // vf
  int v11; // w8
  UserPaymentLimitEntity_o *v13; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BDC99A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC99A = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    LODWORD(klass_high) = -1;
    return (int)klass_high;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  klass_high = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    klass_high = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_22;
  klass_high = (NetworkManager_c *)UserPaymentLimitMaster__TryGetEntity(
                                     (UserPaymentLimitMaster_o *)Master_object,
                                     &v13,
                                     klass_high->static_fields->userIdNumber,
                                     limitId,
                                     0LL);
  if ( !entity )
    goto LABEL_22;
  v8 = (char)klass_high;
  klass_high = (NetworkManager_c *)HIDWORD(entity[1].klass);
  if ( (v8 & 1) == 0 )
    return (int)klass_high;
  if ( !v13 )
LABEL_22:
    sub_1C22094(klass_high, v5);
  count = v13->fields.count;
  v10 = __OFSUB__((_DWORD)klass_high, count);
  v11 = (_DWORD)klass_high - count;
  if ( (v11 < 0) ^ v10 | (v11 == 0) )
    LODWORD(klass_high) = 0;
  else
    LODWORD(klass_high) = v11;
  return (int)klass_high;
}


bool __fastcall PaymentLimitMaster__IsBuyable(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  UserPaymentLimitEntity_o *v9; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BDC999 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC999 = 1;
  }
  entity = 0LL;
  v9 = 0LL;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    v7 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v7 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_20;
    v7 = (NetworkManager_c *)UserPaymentLimitMaster__TryGetEntity(
                               (UserPaymentLimitMaster_o *)Master_object,
                               &v9,
                               v7->static_fields->userIdNumber,
                               limitId,
                               0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( entity && v9 )
        return SHIDWORD(entity[1].klass) > v9->fields.count;
LABEL_20:
      sub_1C22094(v7, v5);
    }
  }
  return 1;
}