void PaymentHistoryRequest___cctor(const MethodInfo *method)
{
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8

  if ( (byte_4D3254B & 1) == 0 )
  {
    sub_1C93AD4(&PaymentHistoryRequest_TypeInfo);
    byte_4D3254B = 1;
  }
  static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
  static_fields->reflectResetTime = -1;
  static_fields->reflectResetRemainSecond = 0;
  static_fields->reflectResetRemainTime = -1;
  static_fields->reflectTimeUpdate = 0;
}


void PaymentHistoryRequest__SetRemainTime(int64_t remain, const MethodInfo *method)
{
  PaymentHistoryRequest_c *v3; // x0

  if ( (byte_4D32549 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&PaymentHistoryRequest_TypeInfo);
    byte_4D32549 = 1;
  }
  v3 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v3 = PaymentHistoryRequest_TypeInfo;
  }
  v3->static_fields->reflectResetRemainSecond = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  PaymentHistoryRequest_TypeInfo->static_fields->reflectResetRemainTime = NetworkManager__getTime(0) + remain;
}


// local variable allocation has failed, the output may be wrong!
void PaymentHistoryRequest__beginRequest(PaymentHistoryRequest_o *this, bool isFirstReflect, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  PaymentHistoryRequest_c *v6; // x0

  if ( (byte_4D32545 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&PaymentHistoryRequest_TypeInfo);
    byte_4D32545 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, (const MethodInfo *)isFirstReflect);
  RequestBase__WriteParameter((RequestBase_o *)this, v5);
  v6 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v6 = PaymentHistoryRequest_TypeInfo;
  }
  v6->static_fields->reflectTimeUpdate = !isFirstReflect;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


bool PaymentHistoryRequest__checkReflectRate(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  int64_t Time; // x0
  PaymentHistoryRequest_c *v3; // x8
  int64_t v4; // x19

  if ( (byte_4D32547 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&PaymentHistoryRequest_TypeInfo);
    byte_4D32547 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  if ( v1->static_fields->paymentHistoryReflectResetTime < 0 )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v3 = PaymentHistoryRequest_TypeInfo;
  v4 = Time;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v3 = PaymentHistoryRequest_TypeInfo;
  }
  return v4 >= v3->static_fields->reflectResetTime;
}


void PaymentHistoryRequest__clearReflectRate(const MethodInfo *method)
{
  PaymentHistoryRequest_c *v1; // x0

  if ( (byte_4D32546 & 1) == 0 )
  {
    sub_1C93AD4(&PaymentHistoryRequest_TypeInfo);
    byte_4D32546 = 1;
  }
  v1 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v1 = PaymentHistoryRequest_TypeInfo;
  }
  v1->static_fields->reflectResetTime = -1;
}


int64_t PaymentHistoryRequest__getReflectRemain(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  PaymentHistoryRequest_c *v2; // x0
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  int64_t reflectResetRemainTime; // x9
  int64_t reflectResetTime; // x19
  int64_t Time; // x0

  if ( (byte_4D32548 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&PaymentHistoryRequest_TypeInfo);
    byte_4D32548 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  if ( v1->static_fields->paymentHistoryReflectResetTime < 0 )
    return 0;
  v2 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v2 = PaymentHistoryRequest_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( static_fields->reflectResetTime == -1 )
    return 0;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = PaymentHistoryRequest_TypeInfo;
    static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
  }
  if ( static_fields->reflectResetRemainSecond )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = PaymentHistoryRequest_TypeInfo;
      static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
    }
    reflectResetRemainTime = static_fields->reflectResetRemainTime;
    static_fields->reflectResetRemainSecond = 0;
    static_fields->reflectResetTime = reflectResetRemainTime;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = PaymentHistoryRequest_TypeInfo;
  }
  reflectResetTime = v2->static_fields->reflectResetTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return (reflectResetTime - Time) & ~((reflectResetTime - Time) >> 63);
}


System_String_o *PaymentHistoryRequest__getURL(PaymentHistoryRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D32544 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_23723/*"shop/paymentHistory"*/);
    byte_4D32544 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_23723/*"shop/paymentHistory"*/, 0);
}


void PaymentHistoryRequest__requestCompleted(
        PaymentHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  PaymentHistoryRequest_o *v4; // x19
  ResponseData_o *v5; // x8
  PaymentHistoryRequest_c *v6; // x0
  int64_t Time; // x20
  BalanceConfig_c *v8; // x8
  PaymentHistoryRequest_c *v9; // x0
  __int64 paymentHistoryReflectResetTime; // x22
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v13; // x9

  v4 = this;
  if ( (byte_4D3254A & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&PaymentHistoryRequest_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (PaymentHistoryRequest_o *)sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D3254A = 1;
  }
  if ( !responseList )
    sub_1C93D2C(this, responseList);
  if ( !LODWORD(responseList->max_length) )
    sub_1C93D34(this);
  v5 = responseList->m_Items[0];
  if ( v5 && ResponseData__checkError((ResponseData_o *)this, v5->fields.resCode, method) )
  {
    v6 = PaymentHistoryRequest_TypeInfo;
    if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
      v6 = PaymentHistoryRequest_TypeInfo;
    }
    if ( v6->static_fields->reflectTimeUpdate )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      v8 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v8 = BalanceConfig_TypeInfo;
      }
      v9 = PaymentHistoryRequest_TypeInfo;
      paymentHistoryReflectResetTime = v8->static_fields->paymentHistoryReflectResetTime;
      if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
        v9 = PaymentHistoryRequest_TypeInfo;
      }
      static_fields = v9->static_fields;
      static_fields->reflectResetTime = Time + paymentHistoryReflectResetTime;
      static_fields->reflectTimeUpdate = 0;
    }
    else
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = PaymentHistoryRequest_TypeInfo;
      }
      v6->static_fields->reflectResetTime = 0;
    }
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v13 = &StringLiteral_22655/*"ok"*/;
      goto LABEL_24;
    }
  }
  else
  {
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v13 = &StringLiteral_22483/*"ng"*/;
LABEL_24:
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        *v13,
        CallBack->fields.method);
    }
  }
}