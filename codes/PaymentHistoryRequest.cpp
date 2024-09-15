void __fastcall PaymentHistoryRequest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8

  if ( (byte_4A2F828 & 1) == 0 )
  {
    sub_1B761C0(&PaymentHistoryRequest_TypeInfo, v1);
    byte_4A2F828 = 1;
  }
  static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
  static_fields->reflectResetTime = -1LL;
  static_fields->reflectResetRemainSecond = 0;
  static_fields->reflectResetRemainTime = -1LL;
  static_fields->reflectTimeUpdate = 0;
}


void __fastcall PaymentHistoryRequest__SetRemainTime(int64_t remain, const MethodInfo *method)
{
  __int64 v3; // x1
  PaymentHistoryRequest_c *v4; // x0

  if ( (byte_4A2F826 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&PaymentHistoryRequest_TypeInfo, v3);
    byte_4A2F826 = 1;
  }
  v4 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v4 = PaymentHistoryRequest_TypeInfo;
  }
  v4->static_fields->reflectResetRemainSecond = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  PaymentHistoryRequest_TypeInfo->static_fields->reflectResetRemainTime = NetworkManager__getTime(0LL) + remain;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaymentHistoryRequest__beginRequest(
        PaymentHistoryRequest_o *this,
        bool isFirstReflect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  PaymentHistoryRequest_c *v7; // x0

  if ( (byte_4A2F822 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, isFirstReflect);
    sub_1B761C0(&PaymentHistoryRequest_TypeInfo, v5);
    byte_4A2F822 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, (const MethodInfo *)isFirstReflect);
  RequestBase__WriteParameter((RequestBase_o *)this, v6);
  v7 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v7 = PaymentHistoryRequest_TypeInfo;
  }
  v7->static_fields->reflectTimeUpdate = !isFirstReflect;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall PaymentHistoryRequest__checkReflectRate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  int64_t Time; // x0
  PaymentHistoryRequest_c *v6; // x8
  int64_t v7; // x19

  if ( (byte_4A2F824 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, v1);
    sub_1B761C0(&NetworkManager_TypeInfo, v2);
    sub_1B761C0(&PaymentHistoryRequest_TypeInfo, v3);
    byte_4A2F824 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( (v4->static_fields->paymentHistoryReflectResetTime & 0x80000000) != 0 )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v6 = PaymentHistoryRequest_TypeInfo;
  v7 = Time;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v6 = PaymentHistoryRequest_TypeInfo;
  }
  return v7 >= v6->static_fields->reflectResetTime;
}


void __fastcall PaymentHistoryRequest__clearReflectRate(const MethodInfo *method)
{
  __int64 v1; // x1
  PaymentHistoryRequest_c *v2; // x0

  if ( (byte_4A2F823 & 1) == 0 )
  {
    sub_1B761C0(&PaymentHistoryRequest_TypeInfo, v1);
    byte_4A2F823 = 1;
  }
  v2 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v2 = PaymentHistoryRequest_TypeInfo;
  }
  v2->static_fields->reflectResetTime = -1LL;
}


int64_t __fastcall PaymentHistoryRequest__getReflectRemain(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  PaymentHistoryRequest_c *v5; // x0
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  int64_t reflectResetRemainTime; // x9
  int64_t reflectResetTime; // x19
  int64_t Time; // x0

  if ( (byte_4A2F825 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, v1);
    sub_1B761C0(&NetworkManager_TypeInfo, v2);
    sub_1B761C0(&PaymentHistoryRequest_TypeInfo, v3);
    byte_4A2F825 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( (v4->static_fields->paymentHistoryReflectResetTime & 0x80000000) != 0 )
    return 0LL;
  v5 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v5 = PaymentHistoryRequest_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->reflectResetTime == -1 )
    return 0LL;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = PaymentHistoryRequest_TypeInfo;
    static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
  }
  if ( static_fields->reflectResetRemainSecond )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PaymentHistoryRequest_TypeInfo;
      static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
    }
    reflectResetRemainTime = static_fields->reflectResetRemainTime;
    static_fields->reflectResetRemainSecond = 0;
    static_fields->reflectResetTime = reflectResetRemainTime;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = PaymentHistoryRequest_TypeInfo;
  }
  reflectResetTime = v5->static_fields->reflectResetTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return (reflectResetTime - Time) & ~((reflectResetTime - Time) >> 63);
}


System_String_o *__fastcall PaymentHistoryRequest__getURL(PaymentHistoryRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F821 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_23255/*"shop/paymentHistory"*/, v2);
    byte_4A2F821 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_23255/*"shop/paymentHistory"*/, 0LL);
}


void __fastcall PaymentHistoryRequest__requestCompleted(
        PaymentHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  PaymentHistoryRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ResponseData_o *v9; // x8
  PaymentHistoryRequest_c *v10; // x0
  int64_t Time; // x20
  BalanceConfig_c *v12; // x8
  PaymentHistoryRequest_c *v13; // x0
  __int64 paymentHistoryReflectResetTime; // x22
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v17; // x9

  v4 = this;
  if ( (byte_4A2F827 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, responseList);
    sub_1B761C0(&NetworkManager_TypeInfo, v5);
    sub_1B761C0(&PaymentHistoryRequest_TypeInfo, v6);
    sub_1B761C0(&StringLiteral_22216/*"ok"*/, v7);
    this = (PaymentHistoryRequest_o *)sub_1B761C0(&StringLiteral_22046/*"ng"*/, v8);
    byte_4A2F827 = 1;
  }
  if ( !responseList )
    sub_1B7641C(this, responseList);
  if ( !responseList->max_length )
    sub_1B76424(this, responseList);
  v9 = responseList->m_Items[0];
  if ( v9 && ResponseData__checkError((ResponseData_o *)this, v9->fields.resCode, method) )
  {
    v10 = PaymentHistoryRequest_TypeInfo;
    if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
      v10 = PaymentHistoryRequest_TypeInfo;
    }
    if ( v10->static_fields->reflectTimeUpdate )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      v12 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      v13 = PaymentHistoryRequest_TypeInfo;
      paymentHistoryReflectResetTime = v12->static_fields->paymentHistoryReflectResetTime;
      if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
        v13 = PaymentHistoryRequest_TypeInfo;
      }
      static_fields = v13->static_fields;
      static_fields->reflectResetTime = Time + paymentHistoryReflectResetTime;
      static_fields->reflectTimeUpdate = 0;
    }
    else
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = PaymentHistoryRequest_TypeInfo;
      }
      v10->static_fields->reflectResetTime = 0LL;
    }
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v17 = &StringLiteral_22216/*"ok"*/;
      goto LABEL_24;
    }
  }
  else
  {
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v17 = &StringLiteral_22046/*"ng"*/;
LABEL_24:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v17,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
}