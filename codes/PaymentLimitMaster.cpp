void PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE37 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
    byte_4D2CE37 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    515,
    (const MethodInfo_345919C *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
}


int32_t PaymentLimitMaster__GetBuyableCount(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
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

  if ( (byte_4D2CE36 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2CE36 = 1;
  }
  entity = 0;
  v13 = 0;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    LODWORD(klass_high) = -1;
    return (int)klass_high;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
                                     0);
  if ( !entity )
    goto LABEL_22;
  v8 = (char)klass_high;
  klass_high = (NetworkManager_c *)HIDWORD(entity[1].klass);
  if ( (v8 & 1) == 0 )
    return (int)klass_high;
  if ( !v13 )
LABEL_22:
    sub_1C942F0(klass_high, v5);
  count = v13->fields.count;
  v10 = __OFSUB__((_DWORD)klass_high, count);
  v11 = (_DWORD)klass_high - count;
  if ( (v11 < 0) ^ v10 | (v11 == 0) )
    LODWORD(klass_high) = 0;
  else
    LODWORD(klass_high) = v11;
  return (int)klass_high;
}


bool PaymentLimitMaster__IsBuyable(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  UserPaymentLimitEntity_o *v9; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2CE35 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2CE35 = 1;
  }
  entity = 0;
  v9 = 0;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_345B50C *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
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
                               0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( entity && v9 )
        return SHIDWORD(entity[1].klass) > v9->fields.count;
LABEL_20:
      sub_1C942F0(v7, v5);
    }
  }
  return 1;
}