void CriWareErrorHandler___ctor(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  this->fields.dontDestroyOnLoad = 1;
  this->fields.messageBufferCounts = 8;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0);
}


void CriWareErrorHandler__Awake(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  CriWareErrorHandler_o *v2; // x19
  struct CriWareErrorHandler_StaticFields *static_fields; // x8
  int32_t initializationCount; // w9
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  CriWareErrorHandler_ErrorCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4CE7BC5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CriWareErrorHandler_ErrorCallbackFromNative__);
    sub_1C7BAE8(&CriWareErrorHandler_TypeInfo);
    sub_1C7BAE8(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    this = (CriWareErrorHandler_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE7BC5 = 1;
  }
  static_fields = CriWareErrorHandler_TypeInfo->static_fields;
  initializationCount = static_fields->initializationCount;
  static_fields->initializationCount = initializationCount + 1;
  if ( initializationCount )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)v2, 0);
  }
  else
  {
    CriWareErrorHandler__CRIWAREA2E6711B((const MethodInfo *)this);
    CriWareErrorHandler__CRIWARE527DA518(v2->fields.enableForceCrashOnError, v5);
    CriWareErrorHandler__CRIWARE063A11A2(v2->fields.messageBufferCounts, v6);
    CriWareErrorHandler__CRIWAREDBC6F415(v2->fields.enableDebugPrintOnTerminal, v7);
    v8 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_1C7BD34(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    CriWareErrorHandler_ErrorCallbackFunc___ctor(v8, 0, Method_CriWareErrorHandler_ErrorCallbackFromNative__, v9);
    CriWareErrorHandler__CRIWARED1107B8D(v8, v10);
    if ( v2->fields.dontDestroyOnLoad )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
      if ( !transform )
        sub_1C7BD40(0, v12);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
    }
  }
}


void CriWareErrorHandler__CRIWARE063A11A2(uint32_t length, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = off_4CE7BD0;
  if ( !off_4CE7BD0 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "CRIWARE063A11A2";
    v4[3] = 15;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void *)sub_1C7C198(v4);
    off_4CE7BD0 = v2;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v2)(length, method);
}


void CriWareErrorHandler__CRIWARE3BCC893C(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_4CE7BE0;
  if ( !off_4CE7BE0 )
  {
    v3 = 0;
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWARE3BCC893C";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v4 = 0;
    v1 = (void *)sub_1C7C198(v2);
    off_4CE7BE0 = v1;
  }
  ((void (*)(void))v1)();
}


void CriWareErrorHandler__CRIWARE4A393AE0(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_4CE7BF0;
  if ( !off_4CE7BF0 )
  {
    v3 = 0;
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWARE4A393AE0";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v4 = 0;
    v1 = (void *)sub_1C7C198(v2);
    off_4CE7BF0 = v1;
  }
  ((void (*)(void))v1)();
}


void CriWareErrorHandler__CRIWARE527DA518(bool sw, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = off_4CE7C00;
  if ( !off_4CE7C00 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "CRIWARE527DA518";
    v4[3] = 15;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void *)sub_1C7C198(v4);
    off_4CE7C00 = v2;
  }
  ((void (__fastcall *)(bool, const MethodInfo *))v2)(sw, method);
}


intptr_t CriWareErrorHandler__CRIWARE841C0338(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)off_4CE7BF8;
  if ( !off_4CE7BF8 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE841C0338";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C7C198(v3);
    v1 = method;
    off_4CE7BF8 = method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


void CriWareErrorHandler__CRIWAREA2E6711B(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_4CE7BD8;
  if ( !off_4CE7BD8 )
  {
    v3 = 0;
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWAREA2E6711B";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v4 = 0;
    v1 = (void *)sub_1C7C198(v2);
    off_4CE7BD8 = v1;
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

  if ( !off_4CE7C08 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "CRIWARED1107B8D";
    v7[3] = 15;
    v8 = 8;
    v7[4] = 0x200000000LL;
    v9 = 0;
    off_4CE7C08 = (__int64 (__fastcall *)(_QWORD))sub_1C7C198(v7);
  }
  v6 = sub_1C49EE8(callback, method, v2, v3, v4);
  off_4CE7C08(v6);
}


void CriWareErrorHandler__CRIWAREDBC6F415(bool sw, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = off_4CE7BE8;
  if ( !off_4CE7BE8 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "CRIWAREDBC6F415";
    v4[3] = 15;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void *)sub_1C7C198(v4);
    off_4CE7BE8 = v2;
  }
  ((void (__fastcall *)(bool, const MethodInfo *))v2)(sw, method);
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
  intptr_t i; // x21
  System_String_o *v3; // x0
  System_String_o *v4; // x22
  const MethodInfo *v5; // x1

  if ( (byte_4CE7BC8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Runtime_InteropServices_Marshal_TypeInfo);
    this = (CriWareErrorHandler_o *)sub_1C7BAE8(&string_TypeInfo);
    byte_4CE7BC8 = 1;
  }
  for ( i = CriWareErrorHandler__CRIWARE841C0338((const MethodInfo *)this);
        !System_IntPtr__op_Equality(i, 0, 0);
        i = CriWareErrorHandler__CRIWARE841C0338((const MethodInfo *)v3) )
  {
    if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
    v3 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(i, 0);
    v4 = v3;
    if ( v3 )
    {
      v3 = (System_String_o *)System_String__op_Inequality(v3, string_TypeInfo->static_fields->Empty, 0);
      if ( ((unsigned __int8)v3 & 1) != 0 )
        CriWareErrorHandler__HandleMessage(v4, v5);
    }
  }
}


void CriWareErrorHandler__HandleMessage(System_String_o *errmsg, const MethodInfo *method)
{
  struct CriWareErrorHandler_StaticFields *static_fields; // x9
  struct CriWareErrorHandler_Callback_o *OnCallback; // x8
  struct CriWareErrorHandler_Callback_o *callback; // x8

  if ( (byte_4CE7BC9 & 1) == 0 )
  {
    sub_1C7BAE8(&CriWareErrorHandler_TypeInfo);
    byte_4CE7BC9 = 1;
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

  if ( (byte_4CE7BC7 & 1) == 0 )
  {
    sub_1C7BAE8(&CriWareErrorHandler_TypeInfo);
    byte_4CE7BC7 = 1;
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

  if ( (byte_4CE7BC6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CriWareErrorHandler_ErrorCallbackFromNative__);
    sub_1C7BAE8(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    byte_4CE7BC6 = 1;
  }
  CriMonoBehaviour__OnEnable((CriMonoBehaviour_o *)this, method);
  v3 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_1C7BD34(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
  CriWareErrorHandler_ErrorCallbackFunc___ctor(v3, 0, Method_CriWareErrorHandler_ErrorCallbackFromNative__, v4);
  CriWareErrorHandler__CRIWARED1107B8D(v3, v5);
}


void CriWareErrorHandler__OutputDefaultLog(System_String_o *errmsg, const MethodInfo *method)
{
  System_String_o *v2; // x19

  v2 = errmsg;
  if ( (byte_4CE7BCA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15423/*"W"*/);
    errmsg = (System_String_o *)sub_1C7BAE8(&StringLiteral_5410/*"E"*/);
    byte_4CE7BCA = 1;
  }
  if ( !v2 )
    sub_1C7BD40(errmsg, method);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_5410/*"E"*/, 0) )
    System_String__StartsWith(v2, (System_String_o *)StringLiteral_15423/*"W"*/, 0);
}


void CriWareErrorHandler__Start(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  ;
}


void CriWareErrorHandler__add_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v4; // x0
  __int64 v5; // x0
  bool v6; // zf
  CriWareErrorHandler_Callback_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4CE7BC3 & 1) == 0 )
  {
    sub_1C7BAE8(&CriWareErrorHandler_Callback_TypeInfo);
    sub_1C7BAE8(&CriWareErrorHandler_TypeInfo);
    byte_4CE7BC3 = 1;
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
    v5 = sub_1CD78BC(&CriWareErrorHandler_TypeInfo->static_fields->OnCallback, v4, OnCallback);
    v6 = OnCallback == (System_Delegate_o *)v5;
    OnCallback = (System_Delegate_o *)v5;
    if ( v6 )
      return;
  }
  v7 = (CriWareErrorHandler_Callback_o *)sub_1C7C0DC(v4);
  CriWareErrorHandler__remove_OnCallback(v7, v8);
}


System_String_o *CriWareErrorHandler__get_errorMessage(const MethodInfo *method)
{
  if ( (byte_4CE7BC1 & 1) == 0 )
  {
    sub_1C7BAE8(&CriWareErrorHandler_TypeInfo);
    byte_4CE7BC1 = 1;
  }
  return CriWareErrorHandler_TypeInfo->static_fields->_errorMessage_k__BackingField;
}


void CriWareErrorHandler__remove_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v4; // x0
  __int64 v5; // x0
  bool v6; // zf
  CriWareErrorHandler_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4CE7BC4 & 1) == 0 )
  {
    sub_1C7BAE8(&CriWareErrorHandler_Callback_TypeInfo);
    sub_1C7BAE8(&CriWareErrorHandler_TypeInfo);
    byte_4CE7BC4 = 1;
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
    v5 = sub_1CD78BC(&CriWareErrorHandler_TypeInfo->static_fields->OnCallback, v4, OnCallback);
    v6 = OnCallback == (System_Delegate_o *)v5;
    OnCallback = (System_Delegate_o *)v5;
    if ( v6 )
      return;
  }
  v7 = (CriWareErrorHandler_o *)sub_1C7C0DC(v4);
  CriWareErrorHandler__Awake(v7, v8);
}


void CriWareErrorHandler__set_errorMessage(System_String_o *value, const MethodInfo *method)
{
  if ( (byte_4CE7BC2 & 1) == 0 )
  {
    sub_1C7BAE8(&CriWareErrorHandler_TypeInfo);
    byte_4CE7BC2 = 1;
  }
  CriWareErrorHandler_TypeInfo->static_fields->_errorMessage_k__BackingField = value;
  sub_1C7BA8C(CriWareErrorHandler_TypeInfo->static_fields, value);
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1AA62A8;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1AA6288;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AA6240;
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
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v6, callback, object);
}


void CriWareErrorHandler_Callback__EndInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1AA634C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1AA632C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AA62E4;
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
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v6, callback, object);
}


void CriWareErrorHandler_ErrorCallbackFunc__EndInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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