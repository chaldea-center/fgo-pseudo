void PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970E64 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
    byte_5970E64 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    517,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
}


int32_t PaymentLimitMaster__GetBuyableCount(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v8; // x0
  int klass_high; // w8
  int32_t count; // w9
  bool v11; // vf
  int32_t v12; // w8
  UserPaymentLimitEntity_o *v14; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5970E63 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970E63 = 1;
  }
  entity = 0;
  v14 = 0;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    return -1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_24:
    sub_2213CDC(v8, v6);
  v8 = (NetworkManager_c *)UserPaymentLimitMaster__TryGetEntity(
                             (UserPaymentLimitMaster_o *)Master_object,
                             &v14,
                             v8->static_fields->userIdNumber,
                             limitId,
                             0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
    goto LABEL_24;
  }
  if ( !entity || !v14 )
    goto LABEL_24;
  klass_high = HIDWORD(entity[1].klass);
  count = v14->fields.count;
  v11 = __OFSUB__(klass_high, count);
  v12 = klass_high - count;
  if ( (v12 < 0) ^ v11 | (v12 == 0) )
    return 0;
  else
    return v12;
}


bool PaymentLimitMaster__IsBuyable(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v8; // x0
  UserPaymentLimitEntity_o *v10; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5970E62 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970E62 = 1;
  }
  entity = 0;
  v10 = 0;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v8 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
      v8 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_20;
    v8 = (NetworkManager_c *)UserPaymentLimitMaster__TryGetEntity(
                               (UserPaymentLimitMaster_o *)Master_object,
                               &v10,
                               v8->static_fields->userIdNumber,
                               limitId,
                               0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( entity && v10 )
        return SHIDWORD(entity[1].klass) > v10->fields.count;
LABEL_20:
      sub_2213CDC(v8, v6);
    }
  }
  return 1;
}