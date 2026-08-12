void PaymentHistoryRequest___cctor(const MethodInfo *method)
{
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8

  if ( (byte_597246C & 1) == 0 )
  {
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    byte_597246C = 1;
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
  NetworkManager_c *v4; // x8
  int v5; // w10

  if ( (byte_597246A & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    byte_597246A = 1;
  }
  v3 = PaymentHistoryRequest_TypeInfo;
  if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, method);
    v3 = PaymentHistoryRequest_TypeInfo;
  }
  v4 = NetworkManager_TypeInfo;
  v5 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  v3->static_fields->reflectResetRemainSecond = 1;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method);
  PaymentHistoryRequest_TypeInfo->static_fields->reflectResetRemainTime = NetworkManager__getTime(0) + remain;
}


// local variable allocation has failed, the output may be wrong!
void PaymentHistoryRequest__beginRequest(PaymentHistoryRequest_o *this, bool isFirstReflect, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  PaymentHistoryRequest_c *v7; // x0
  bool v8; // w20
  NetworkManager_c *v9; // x8
  int v10; // w10

  if ( (byte_5972466 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    byte_5972466 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, (const MethodInfo *)isFirstReflect);
  RequestBase__WriteParameter((RequestBase_o *)this, v5);
  v7 = PaymentHistoryRequest_TypeInfo;
  v8 = !isFirstReflect;
  if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v6);
    v7 = PaymentHistoryRequest_TypeInfo;
  }
  v9 = NetworkManager_TypeInfo;
  v10 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  v7->static_fields->reflectTimeUpdate = v8;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v9, v6);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


bool PaymentHistoryRequest__checkReflectRate(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0
  int64_t Time; // x0
  __int64 v4; // x1
  PaymentHistoryRequest_c *v5; // x8
  int64_t v6; // x19

  if ( (byte_5972468 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    byte_5972468 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v2 = BalanceConfig_TypeInfo;
  }
  if ( v2->static_fields->paymentHistoryReflectResetTime < 0 )
    return 1;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0);
  v5 = PaymentHistoryRequest_TypeInfo;
  v6 = Time;
  if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v4);
    v5 = PaymentHistoryRequest_TypeInfo;
  }
  return v6 >= v5->static_fields->reflectResetTime;
}


void PaymentHistoryRequest__clearReflectRate(const MethodInfo *method)
{
  __int64 v1; // x1
  PaymentHistoryRequest_c *v2; // x0

  if ( (byte_5972467 & 1) == 0 )
  {
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    byte_5972467 = 1;
  }
  v2 = PaymentHistoryRequest_TypeInfo;
  if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v1);
    v2 = PaymentHistoryRequest_TypeInfo;
  }
  v2->static_fields->reflectResetTime = -1;
}


int64_t PaymentHistoryRequest__getReflectRemain(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0
  PaymentHistoryRequest_c *v3; // x0
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  int64_t reflectResetRemainTime; // x9
  int64_t reflectResetTime; // x19
  int64_t Time; // x0

  if ( (byte_5972469 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    byte_5972469 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v2 = BalanceConfig_TypeInfo;
  }
  if ( v2->static_fields->paymentHistoryReflectResetTime < 0 )
    return 0;
  v3 = PaymentHistoryRequest_TypeInfo;
  if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v1);
    v3 = PaymentHistoryRequest_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->reflectResetTime == -1 )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = PaymentHistoryRequest_TypeInfo;
    static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
  }
  if ( static_fields->reflectResetRemainSecond )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1);
      v3 = PaymentHistoryRequest_TypeInfo;
      static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
    }
    reflectResetRemainTime = static_fields->reflectResetRemainTime;
    static_fields->reflectResetRemainSecond = 0;
    static_fields->reflectResetTime = reflectResetRemainTime;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = PaymentHistoryRequest_TypeInfo;
  }
  reflectResetTime = v3->static_fields->reflectResetTime;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0);
  return (reflectResetTime - Time) & ~((reflectResetTime - Time) >> 63);
}


System_String_o *PaymentHistoryRequest__getURL(PaymentHistoryRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972465 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_24666/*"shop/paymentHistory"*/);
    byte_5972465 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_24666/*"shop/paymentHistory"*/, 0);
}


void PaymentHistoryRequest__requestCompleted(
        PaymentHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  PaymentHistoryRequest_o *v4; // x19
  ResponseData_o *v5; // x8
  __int64 v6; // x1
  PaymentHistoryRequest_c *v7; // x0
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  __int64 v9; // x1
  int64_t Time; // x20
  BalanceConfig_c *v11; // x8
  PaymentHistoryRequest_c *v12; // x0
  __int64 paymentHistoryReflectResetTime; // x22
  struct PaymentHistoryRequest_StaticFields *v14; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v16; // x9

  v4 = this;
  if ( (byte_597246B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    this = (PaymentHistoryRequest_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_597246B = 1;
  }
  if ( !responseList )
    sub_2213CDC(this, responseList);
  if ( !LODWORD(responseList->max_length) )
    sub_2213CE4(this);
  v5 = responseList->m_Items[0];
  if ( v5 && ResponseData__checkError((ResponseData_o *)this, v5->fields.resCode, method) )
  {
    v7 = PaymentHistoryRequest_TypeInfo;
    if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v6);
      v7 = PaymentHistoryRequest_TypeInfo;
    }
    static_fields = v7->static_fields;
    if ( static_fields->reflectTimeUpdate )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
      Time = NetworkManager__getTime(0);
      v11 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
        v11 = BalanceConfig_TypeInfo;
      }
      v12 = PaymentHistoryRequest_TypeInfo;
      paymentHistoryReflectResetTime = v11->static_fields->paymentHistoryReflectResetTime;
      if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v9);
        v12 = PaymentHistoryRequest_TypeInfo;
      }
      v14 = v12->static_fields;
      v14->reflectResetTime = Time + paymentHistoryReflectResetTime;
      v14->reflectTimeUpdate = 0;
    }
    else
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v6);
        static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
      }
      static_fields->reflectResetTime = 0;
    }
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v16 = &StringLiteral_23515/*"ok"*/;
      goto LABEL_24;
    }
  }
  else
  {
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v16 = &StringLiteral_23336/*"ng"*/;
LABEL_24:
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        *v16,
        CallBack->fields.method);
    }
  }
}