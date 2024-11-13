void __fastcall PaymentHistoryRequest___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8

  if ( (byte_4B17B1D & 1) == 0 )
  {
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, v1, v2);
    byte_4B17B1D = 1;
  }
  static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
  static_fields->reflectResetTime = -1LL;
  static_fields->reflectResetRemainSecond = 0;
  static_fields->reflectResetRemainTime = -1LL;
  static_fields->reflectTimeUpdate = 0;
}


void __fastcall PaymentHistoryRequest__SetRemainTime(int64_t remain, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PaymentHistoryRequest_c *v6; // x0

  if ( (byte_4B17B1B & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, v4, v5);
    byte_4B17B1B = 1;
  }
  v6 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, method);
    v6 = PaymentHistoryRequest_TypeInfo;
  }
  v6->static_fields->reflectResetRemainSecond = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  PaymentHistoryRequest_TypeInfo->static_fields->reflectResetRemainTime = NetworkManager__getTime(0LL) + remain;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaymentHistoryRequest__beginRequest(
        PaymentHistoryRequest_o *this,
        bool isFirstReflect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  PaymentHistoryRequest_c *v9; // x0

  if ( (byte_4B17B17 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, isFirstReflect, method);
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, v5, v6);
    byte_4B17B17 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, (const MethodInfo *)isFirstReflect);
  RequestBase__WriteParameter((RequestBase_o *)this, v7);
  v9 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v8);
    v9 = PaymentHistoryRequest_TypeInfo;
  }
  v9->static_fields->reflectTimeUpdate = !isFirstReflect;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall PaymentHistoryRequest__checkReflectRate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x0
  int64_t Time; // x0
  __int64 v9; // x1
  PaymentHistoryRequest_c *v10; // x8
  int64_t v11; // x19

  if ( (byte_4B17B19 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, v5, v6);
    byte_4B17B19 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( (v7->static_fields->paymentHistoryReflectResetTime & 0x80000000) != 0 )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0LL);
  v10 = PaymentHistoryRequest_TypeInfo;
  v11 = Time;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v9);
    v10 = PaymentHistoryRequest_TypeInfo;
  }
  return v11 >= v10->static_fields->reflectResetTime;
}


void __fastcall PaymentHistoryRequest__clearReflectRate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PaymentHistoryRequest_c *v3; // x0

  if ( (byte_4B17B18 & 1) == 0 )
  {
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, v1, v2);
    byte_4B17B18 = 1;
  }
  v3 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v1);
    v3 = PaymentHistoryRequest_TypeInfo;
  }
  v3->static_fields->reflectResetTime = -1LL;
}


int64_t __fastcall PaymentHistoryRequest__getReflectRemain(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x0
  PaymentHistoryRequest_c *v8; // x0
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  int64_t reflectResetRemainTime; // x9
  int64_t reflectResetTime; // x19
  int64_t Time; // x0

  if ( (byte_4B17B1A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, v5, v6);
    byte_4B17B1A = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( (v7->static_fields->paymentHistoryReflectResetTime & 0x80000000) != 0 )
    return 0LL;
  v8 = PaymentHistoryRequest_TypeInfo;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v1);
    v8 = PaymentHistoryRequest_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->reflectResetTime == -1 )
    return 0LL;
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, v1);
    v8 = PaymentHistoryRequest_TypeInfo;
    static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
  }
  if ( static_fields->reflectResetRemainSecond )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8, v1);
      v8 = PaymentHistoryRequest_TypeInfo;
      static_fields = PaymentHistoryRequest_TypeInfo->static_fields;
    }
    reflectResetRemainTime = static_fields->reflectResetRemainTime;
    static_fields->reflectResetRemainSecond = 0;
    static_fields->reflectResetTime = reflectResetRemainTime;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, v1);
    v8 = PaymentHistoryRequest_TypeInfo;
  }
  reflectResetTime = v8->static_fields->reflectResetTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  Time = NetworkManager__getTime(0LL);
  return (reflectResetTime - Time) & ~((reflectResetTime - Time) >> 63);
}


System_String_o *__fastcall PaymentHistoryRequest__getURL(PaymentHistoryRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B16 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23512/*"shop/paymentHistory"*/, v3, v4);
    byte_4B17B16 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23512/*"shop/paymentHistory"*/, 0LL);
}


void __fastcall PaymentHistoryRequest__requestCompleted(
        PaymentHistoryRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  PaymentHistoryRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ResponseData_o *v13; // x0
  __int64 v14; // x1
  PaymentHistoryRequest_c *v15; // x0
  __int64 v16; // x1
  int64_t Time; // x20
  BalanceConfig_c *v18; // x8
  PaymentHistoryRequest_c *v19; // x0
  __int64 paymentHistoryReflectResetTime; // x22
  struct PaymentHistoryRequest_StaticFields *static_fields; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v23; // x9

  v4 = this;
  if ( (byte_4B17B1C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, responseList, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v9, v10);
    this = (PaymentHistoryRequest_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    byte_4B17B1C = 1;
  }
  if ( !responseList )
    sub_1BCAA3C(this, responseList);
  if ( !responseList->max_length )
    sub_1BCAA44(this, responseList);
  v13 = responseList->m_Items[0];
  if ( v13 && ResponseData__checkError_41952396(v13, 0LL) )
  {
    v15 = PaymentHistoryRequest_TypeInfo;
    if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v14);
      v15 = PaymentHistoryRequest_TypeInfo;
    }
    if ( v15->static_fields->reflectTimeUpdate )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
      Time = NetworkManager__getTime(0LL);
      v18 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
        v18 = BalanceConfig_TypeInfo;
      }
      v19 = PaymentHistoryRequest_TypeInfo;
      paymentHistoryReflectResetTime = v18->static_fields->paymentHistoryReflectResetTime;
      if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, v16);
        v19 = PaymentHistoryRequest_TypeInfo;
      }
      static_fields = v19->static_fields;
      static_fields->reflectResetTime = Time + paymentHistoryReflectResetTime;
      static_fields->reflectTimeUpdate = 0;
    }
    else
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15, v14);
        v15 = PaymentHistoryRequest_TypeInfo;
      }
      v15->static_fields->reflectResetTime = 0LL;
    }
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v23 = &StringLiteral_22465/*"ok"*/;
      goto LABEL_24;
    }
  }
  else
  {
    CallBack = v4->fields.CallBack;
    if ( CallBack )
    {
      v23 = &StringLiteral_22292/*"ng"*/;
LABEL_24:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        *v23,
        *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
}