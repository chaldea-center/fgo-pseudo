void __fastcall PaymentLimitMaster___ctor(PaymentLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDBAA & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__, method);
    byte_4BFDBAA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    512,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int___ctor__);
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
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *klass_high; // x0
  char v11; // w8
  int32_t count; // w8
  bool v13; // vf
  int v14; // w8
  UserPaymentLimitEntity_o *v16; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BFDBA9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserPaymentLimitMaster___, *(_QWORD *)&limitId);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__, v6);
    sub_1C2E12C(&NetworkManager_TypeInfo, v7);
    byte_4BFDBA9 = 1;
  }
  entity = 0LL;
  v16 = 0LL;
  if ( !limitId
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          limitId,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    LODWORD(klass_high) = -1;
    return (int)klass_high;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    byte_4BF81D5 = 1;
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
                                     &v16,
                                     klass_high->static_fields->userIdNumber,
                                     limitId,
                                     0LL);
  if ( !entity )
    goto LABEL_22;
  v11 = (char)klass_high;
  klass_high = (NetworkManager_c *)HIDWORD(entity[1].klass);
  if ( (v11 & 1) == 0 )
    return (int)klass_high;
  if ( !v16 )
LABEL_22:
    sub_1C2E388(klass_high, v8);
  count = v16->fields.count;
  v13 = __OFSUB__((_DWORD)klass_high, count);
  v14 = (_DWORD)klass_high - count;
  if ( (v14 < 0) ^ v13 | (v14 == 0) )
    LODWORD(klass_high) = 0;
  else
    LODWORD(klass_high) = v14;
  return (int)klass_high;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PaymentLimitMaster__IsBuyable(PaymentLimitMaster_o *this, int32_t limitId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v10; // x0
  UserPaymentLimitEntity_o *v12; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BFDBA8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserPaymentLimitMaster___, *(_QWORD *)&limitId);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__, v6);
    sub_1C2E12C(&NetworkManager_TypeInfo, v7);
    byte_4BFDBA8 = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  if ( limitId
    && DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         limitId,
         (const MethodInfo_327B1CC *)Method_DataMasterBase_PaymentLimitMaster__PaymentLimitEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserPaymentLimitMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v8);
      byte_4BF81D5 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_20;
    v10 = (NetworkManager_c *)UserPaymentLimitMaster__TryGetEntity(
                                (UserPaymentLimitMaster_o *)Master_object,
                                &v12,
                                v10->static_fields->userIdNumber,
                                limitId,
                                0LL);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( entity && v12 )
        return SHIDWORD(entity[1].klass) > v12->fields.count;
LABEL_20:
      sub_1C2E388(v10, v8);
    }
  }
  return 1;
}