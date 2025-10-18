void PaymentHistoryRequest___cctor(const MethodInfo *method)
{
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8

  if ( (byte_4C44B3A & 1) == 0 )
  {
    sub_1C37058(&PaymentHistoryRequest_TypeInfo);
    byte_4C44B3A = 1;
  }
  static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
  static_fields->reflectResetTime = -1;
  static_fields->reflectResetRemainSecond = 0;
  static_fields->reflectResetRemainTime = -1;
  static_fields->reflectTimeUpdate = 0;
}


void PaymentHistoryRequest___ctor(PaymentHistoryRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void PaymentHistoryRequest__SetRemainTime(int64_t remain, const MethodInfo *method)
{
  PaymentHistoryRequest_c *v3; // x0

  if ( (byte_4C44B38 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PaymentHistoryRequest_TypeInfo);
    byte_4C44B38 = 1;
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


void PaymentHistoryRequest__beginRequest(PaymentHistoryRequest_o *this, bool isFirstReflect, const MethodInfo *method)
{
  PaymentHistoryRequest_c *v5; // x0

  if ( (byte_4C44B34 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PaymentHistoryRequest_TypeInfo);
    byte_4C44B34 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0);
  RequestBase__WriteParameter((RequestBase_o *)this, 0);
  v5 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
    v5 = PaymentHistoryRequest_TypeInfo;
  }
  v5->static_fields->reflectTimeUpdate = !isFirstReflect;
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

  if ( (byte_4C44B36 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PaymentHistoryRequest_TypeInfo);
    byte_4C44B36 = 1;
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

  if ( (byte_4C44B35 & 1) == 0 )
  {
    sub_1C37058(&PaymentHistoryRequest_TypeInfo);
    byte_4C44B35 = 1;
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

  if ( (byte_4C44B37 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PaymentHistoryRequest_TypeInfo);
    byte_4C44B37 = 1;
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

  if ( (byte_4C44B33 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_23438/*"shop/paymentHistory"*/);
    byte_4C44B33 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_23438/*"shop/paymentHistory"*/, 0);
}


void PaymentHistoryRequest__requestCompleted(
        PaymentHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  ResponseData_o *v5; // x0
  PaymentHistoryRequest_c *v6; // x0
  int64_t Time; // x20
  BalanceConfig_c *v8; // x8
  PaymentHistoryRequest_c *v9; // x0
  __int64 paymentHistoryReflectResetTime; // x22
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  __int64 *v12; // x8

  v4 = (RequestBase_o *)this;
  if ( (byte_4C44B39 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PaymentHistoryRequest_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    this = (PaymentHistoryRequest_o *)sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44B39 = 1;
  }
  if ( !responseList )
    sub_1C372B4(this);
  if ( !LODWORD(responseList->max_length) )
    sub_1C372BC(this);
  v5 = responseList->m_Items[0];
  if ( v5 && ResponseData__checkError_44242528(v5, 0) )
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
    v12 = &StringLiteral_22382/*"ok"*/;
  }
  else
  {
    v12 = &StringLiteral_22215/*"ng"*/;
  }
  RequestBase__completed(v4, (System_String_o *)*v12, 0);
}