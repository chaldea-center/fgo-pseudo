void CriWareErrorHandler___ctor(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  this->fields.dontDestroyOnLoad = 1;
  this->fields.messageBufferCounts = 8;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0);
}


void CriWareErrorHandler__Awake(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CriWareErrorHandler_o *v3; // x19
  struct CriWareErrorHandler_StaticFields *static_fields; // x8
  int32_t initializationCount; // w9
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  CriWareErrorHandler_ErrorCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *gameObject; // x19

  v3 = this;
  if ( (byte_59316AC & 1) == 0 )
  {
    sub_21FFC50(&Method_CriWareErrorHandler_ErrorCallbackFromNative__);
    sub_21FFC50(&CriWareErrorHandler_TypeInfo);
    sub_21FFC50(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    this = (CriWareErrorHandler_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59316AC = 1;
  }
  static_fields = CriWareErrorHandler_TypeInfo->static_fields;
  initializationCount = static_fields->initializationCount;
  static_fields->initializationCount = initializationCount + 1;
  if ( initializationCount )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)v3, 0);
  }
  else
  {
    CriWareErrorHandler__CRIWAREA2E6711B((const MethodInfo *)this);
    CriWareErrorHandler__CRIWARE527DA518(v3->fields.enableForceCrashOnError, v6);
    CriWareErrorHandler__CRIWARE063A11A2(v3->fields.messageBufferCounts, v7);
    CriWareErrorHandler__CRIWAREDBC6F415(v3->fields.enableDebugPrintOnTerminal, v8);
    v9 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_21FFEBC(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    CriWareErrorHandler_ErrorCallbackFunc___ctor(v9, 0, Method_CriWareErrorHandler_ErrorCallbackFromNative__, v10);
    CriWareErrorHandler__CRIWARED1107B8D(v9, v11);
    if ( v3->fields.dontDestroyOnLoad )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0);
      if ( !transform )
        sub_21FFECC(0, v13);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
    }
  }
}


void CriWareErrorHandler__CRIWARE063A11A2(uint32_t length, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v3 = off_59316B8;
  if ( !off_59316B8 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "CRIWARE063A11A2";
    v4[3] = 15;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v3 = (void *)sub_2200304(v4);
    off_59316B8 = v3;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v3)(length, method);
}


void CriWareErrorHandler__CRIWARE3BCC893C(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_59316C8;
  if ( !off_59316C8 )
  {
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWARE3BCC893C";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void *)sub_2200304(v2);
    off_59316C8 = v1;
  }
  ((void (*)(void))v1)();
}


void CriWareErrorHandler__CRIWARE4A393AE0(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_59316D8;
  if ( !off_59316D8 )
  {
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWARE4A393AE0";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void *)sub_2200304(v2);
    off_59316D8 = v1;
  }
  ((void (*)(void))v1)();
}


void CriWareErrorHandler__CRIWARE527DA518(bool sw, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v3 = off_59316E8;
  if ( !off_59316E8 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "CRIWARE527DA518";
    v4[3] = 15;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v3 = (void *)sub_2200304(v4);
    off_59316E8 = v3;
  }
  ((void (__fastcall *)(bool, const MethodInfo *))v3)(sw, method);
}


intptr_t CriWareErrorHandler__CRIWARE841C0338(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = off_59316E0;
  if ( !off_59316E0 )
  {
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE841C0338";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    v1 = (void *)sub_2200304(v3);
    off_59316E0 = v1;
  }
  return ((__int64 (*)(void))v1)();
}


void CriWareErrorHandler__CRIWAREA2E6711B(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_59316C0;
  if ( !off_59316C0 )
  {
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWAREA2E6711B";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void *)sub_2200304(v2);
    off_59316C0 = v1;
  }
  ((void (*)(void))v1)();
}


void CriWareErrorHandler__CRIWARED1107B8D(CriWareErrorHandler_ErrorCallbackFunc_o *callback, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x0
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  if ( !off_59316F0 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "CRIWARED1107B8D";
    v7[3] = 15;
    v7[4] = 0x200000000LL;
    v8 = 8;
    v9 = 0;
    off_59316F0 = (__int64 (__fastcall *)(_QWORD))sub_2200304(v7);
  }
  v6 = sub_22002FC(callback, method, v2, v3, v4);
  off_59316F0(v6);
}


void CriWareErrorHandler__CRIWAREDBC6F415(bool sw, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v3 = off_59316D0;
  if ( !off_59316D0 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "CRIWAREDBC6F415";
    v4[3] = 15;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v3 = (void *)sub_2200304(v4);
    off_59316D0 = v3;
  }
  ((void (__fastcall *)(bool, const MethodInfo *))v3)(sw, method);
}


void CriWareErrorHandler__CriInternalLateUpdate(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  ;
}


void CriWareErrorHandler__CriInternalUpdate(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  if ( !this->fields.enableDebugPrintOnTerminal )
    CriWareErrorHandler__DequeueErrorMessages(this, method);
}


void CriWareErrorHandler__DequeueErrorMessages(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  intptr_t v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  intptr_t v5; // x21
  const MethodInfo *v6; // x1
  System_String_o *v7; // [xsp+28h] [xbp-48h]

  if ( (byte_59316AF & 1) == 0 )
  {
    this = (CriWareErrorHandler_o *)sub_21FFC50(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_59316AF = 1;
  }
  while ( 1 )
  {
    v2 = CriWareErrorHandler__CRIWARE841C0338((const MethodInfo *)this);
    if ( !v2 )
      break;
    v5 = v2;
    if ( !*(&System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v3, v4);
    v7 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v5, 0);
    if ( v7 )
    {
      if ( System_String__op_Inequality(v7, **(System_String_o ***)(qword_594C0B8 + 184), 0) )
        CriWareErrorHandler__HandleMessage(v7, v6);
    }
    this = 0;
  }
}


void CriWareErrorHandler__HandleMessage(System_String_o *errmsg, const MethodInfo *method)
{
  struct CriWareErrorHandler_StaticFields *static_fields; // x9
  struct CriWareErrorHandler_Callback_o *OnCallback; // x8
  struct CriWareErrorHandler_Callback_o *callback; // x8

  if ( (byte_59316B0 & 1) == 0 )
  {
    sub_21FFC50(&CriWareErrorHandler_TypeInfo);
    byte_59316B0 = 1;
  }
  if ( errmsg )
  {
    static_fields = CriWareErrorHandler_TypeInfo->static_fields;
    OnCallback = static_fields->OnCallback;
    if ( OnCallback )
    {
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))OnCallback->fields.invoke_impl)(
        OnCallback->fields.method_code,
        errmsg,
        OnCallback->fields.method);
      callback = CriWareErrorHandler_TypeInfo->static_fields->callback;
      if ( !callback )
        return;
    }
    else
    {
      callback = static_fields->callback;
      if ( !callback )
      {
        CriWareErrorHandler__OutputDefaultLog(errmsg, method);
        return;
      }
    }
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      errmsg,
      callback->fields.method);
  }
}


void CriWareErrorHandler__OnDestroy(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  struct CriWareErrorHandler_StaticFields *static_fields; // x8
  int v3; // w9
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_59316AE & 1) == 0 )
  {
    sub_21FFC50(&CriWareErrorHandler_TypeInfo);
    byte_59316AE = 1;
  }
  static_fields = CriWareErrorHandler_TypeInfo->static_fields;
  v3 = static_fields->initializationCount - 1;
  static_fields->initializationCount = v3;
  if ( !v3 )
  {
    CriWareErrorHandler__CRIWARED1107B8D(0, method);
    CriWareErrorHandler__CRIWARE4A393AE0(v4);
    CriWareErrorHandler__CRIWARE3BCC893C(v5);
  }
}


void CriWareErrorHandler__OnDisable(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x1

  CriMonoBehaviour__OnDisable((CriMonoBehaviour_o *)this, method);
  CriWareErrorHandler__CRIWARED1107B8D(0, v2);
}


void CriWareErrorHandler__OnEnable(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  CriWareErrorHandler_ErrorCallbackFunc_o *v3; // x19
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x1

  if ( (byte_59316AD & 1) == 0 )
  {
    sub_21FFC50(&Method_CriWareErrorHandler_ErrorCallbackFromNative__);
    sub_21FFC50(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    byte_59316AD = 1;
  }
  CriMonoBehaviour__OnEnable((CriMonoBehaviour_o *)this, method);
  v3 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_21FFEBC(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
  CriWareErrorHandler_ErrorCallbackFunc___ctor(v3, 0, Method_CriWareErrorHandler_ErrorCallbackFromNative__, v4);
  CriWareErrorHandler__CRIWARED1107B8D(v3, v5);
}


void CriWareErrorHandler__OutputDefaultLog(System_String_o *errmsg, const MethodInfo *method)
{
  System_String_o *v2; // x19

  v2 = errmsg;
  if ( (byte_59316B1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_15946/*"W"*/);
    errmsg = (System_String_o *)sub_21FFC50(&StringLiteral_5586/*"E"*/);
    byte_59316B1 = 1;
  }
  if ( !v2 )
    sub_21FFECC(errmsg, method);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_5586/*"E"*/, 0) )
    System_String__StartsWith(v2, (System_String_o *)StringLiteral_15946/*"W"*/, 0);
}


void CriWareErrorHandler__Start(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  ;
}


void CriWareErrorHandler__add_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v4; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x0
  bool v8; // zf
  CriWareErrorHandler_Callback_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_59316AA & 1) == 0 )
  {
    sub_21FFC50(&CriWareErrorHandler_Callback_TypeInfo);
    sub_21FFC50(&CriWareErrorHandler_TypeInfo);
    byte_59316AA = 1;
  }
  OnCallback = (System_Delegate_o *)CriWareErrorHandler_TypeInfo->static_fields->OnCallback;
  while ( 1 )
  {
    v4 = System_Delegate__Combine(OnCallback, (System_Delegate_o *)value, 0);
    if ( v4 )
    {
      if ( (CriWareErrorHandler_Callback_c *)v4->klass != CriWareErrorHandler_Callback_TypeInfo )
        break;
    }
    v7 = sub_223767C(&CriWareErrorHandler_TypeInfo->static_fields->OnCallback, v4, OnCallback);
    v8 = v7 == (_QWORD)OnCallback;
    OnCallback = (System_Delegate_o *)v7;
    if ( v8 )
      return;
  }
  v9 = (CriWareErrorHandler_Callback_o *)sub_220024C(v4, CriWareErrorHandler_Callback_TypeInfo, v5, v6);
  CriWareErrorHandler__remove_OnCallback(v9, v10);
}


System_String_o *CriWareErrorHandler__get_errorMessage(const MethodInfo *method)
{
  if ( (byte_59316A8 & 1) == 0 )
  {
    sub_21FFC50(&CriWareErrorHandler_TypeInfo);
    byte_59316A8 = 1;
  }
  return CriWareErrorHandler_TypeInfo->static_fields->_errorMessage_k__BackingField;
}


void CriWareErrorHandler__remove_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v4; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x0
  bool v8; // zf
  CriWareErrorHandler_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_59316AB & 1) == 0 )
  {
    sub_21FFC50(&CriWareErrorHandler_Callback_TypeInfo);
    sub_21FFC50(&CriWareErrorHandler_TypeInfo);
    byte_59316AB = 1;
  }
  OnCallback = (System_Delegate_o *)CriWareErrorHandler_TypeInfo->static_fields->OnCallback;
  while ( 1 )
  {
    v4 = System_Delegate__Remove(OnCallback, (System_Delegate_o *)value, 0);
    if ( v4 )
    {
      if ( (CriWareErrorHandler_Callback_c *)v4->klass != CriWareErrorHandler_Callback_TypeInfo )
        break;
    }
    v7 = sub_223767C(&CriWareErrorHandler_TypeInfo->static_fields->OnCallback, v4, OnCallback);
    v8 = v7 == (_QWORD)OnCallback;
    OnCallback = (System_Delegate_o *)v7;
    if ( v8 )
      return;
  }
  v9 = (CriWareErrorHandler_o *)sub_220024C(v4, CriWareErrorHandler_Callback_TypeInfo, v5, v6);
  CriWareErrorHandler__Awake(v9, v10);
}


void CriWareErrorHandler__set_errorMessage(System_String_o *value, const MethodInfo *method)
{
  if ( (byte_59316A9 & 1) == 0 )
  {
    sub_21FFC50(&CriWareErrorHandler_TypeInfo);
    byte_59316A9 = 1;
  }
  CriWareErrorHandler_TypeInfo->static_fields->_errorMessage_k__BackingField = value;
  sub_21FFBF4(CriWareErrorHandler_TypeInfo->static_fields, value);
}


void CriWareErrorHandler_Callback___ctor(
        CriWareErrorHandler_Callback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_21FFBF4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1FE9A04;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1FE99E8;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)&loc_1FE99A0;
}


System_IAsyncResult_o *CriWareErrorHandler_Callback__BeginInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_String_o *message,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = message;
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void CriWareErrorHandler_Callback__EndInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void CriWareErrorHandler_Callback__Invoke(
        CriWareErrorHandler_Callback_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    message,
    this->fields.method);
}


void CriWareErrorHandler_ErrorCallbackFunc___ctor(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_21FFBF4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1FE9AA4;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1FE9A88;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1FE9A40;
}


System_IAsyncResult_o *CriWareErrorHandler_ErrorCallbackFunc__BeginInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_String_o *errmsg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = errmsg;
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void CriWareErrorHandler_ErrorCallbackFunc__EndInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void CriWareErrorHandler_ErrorCallbackFunc__Invoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_String_o *errmsg,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    errmsg,
    this->fields.method);
}