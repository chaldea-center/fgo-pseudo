void PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43578 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
    byte_4C43578 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    515,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
}


int32_t PaymentLimitMaster__GetBuyableCount(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  NetworkManager_c *klass_high; // x0
  char v7; // w8
  int32_t count; // w8
  bool v9; // vf
  int v10; // w8
  UserPaymentLimitEntity_o *v12; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C43577 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43577 = 1;
  }
  entity = 0;
  v12 = 0;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    LODWORD(klass_high) = -1;
    return (int)klass_high;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
                                     &v12,
                                     klass_high->static_fields->userIdNumber,
                                     limitId,
                                     0);
  if ( !entity )
    goto LABEL_22;
  v7 = (char)klass_high;
  klass_high = (NetworkManager_c *)HIDWORD(entity[1].klass);
  if ( (v7 & 1) == 0 )
    return (int)klass_high;
  if ( !v12 )
LABEL_22:
    sub_1C372B4(klass_high);
  count = v12->fields.count;
  v9 = __OFSUB__((_DWORD)klass_high, count);
  v10 = (_DWORD)klass_high - count;
  if ( (v10 < 0) ^ v9 | (v10 == 0) )
    LODWORD(klass_high) = 0;
  else
    LODWORD(klass_high) = v10;
  return (int)klass_high;
}


bool PaymentLimitMaster__IsBuyable(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v6; // x0
  UserPaymentLimitEntity_o *v8; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C43576 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43576 = 1;
  }
  entity = 0;
  v8 = 0;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_20;
    v6 = (NetworkManager_c *)UserPaymentLimitMaster__TryGetEntity(
                               (UserPaymentLimitMaster_o *)Master_object,
                               &v8,
                               v6->static_fields->userIdNumber,
                               limitId,
                               0);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      if ( entity && v8 )
        return SHIDWORD(entity[1].klass) > v8->fields.count;
LABEL_20:
      sub_1C372B4(v6);
    }
  }
  return 1;
}