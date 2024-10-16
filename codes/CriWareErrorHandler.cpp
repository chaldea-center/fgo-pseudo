void __fastcall CriWareErrorHandler___ctor(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  this->fields.dontDestroyOnLoad = 1;
  this->fields.messageBufferCounts = 8;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0LL);
}


void __fastcall CriWareErrorHandler__Awake(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  CriWareErrorHandler_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CriWareErrorHandler_StaticFields *static_fields; // x8
  int32_t initializationCount; // w9
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  CriWareErrorHandler_ErrorCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4AB0425 & 1) == 0 )
  {
    sub_1BAB41C(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, method);
    sub_1BAB41C(&CriWareErrorHandler_TypeInfo, v3);
    sub_1BAB41C(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v4);
    this = (CriWareErrorHandler_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB0425 = 1;
  }
  static_fields = CriWareErrorHandler_TypeInfo->static_fields;
  initializationCount = static_fields->initializationCount;
  static_fields->initializationCount = initializationCount + 1;
  if ( initializationCount )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620((UnityEngine_Object_o *)v2, 0LL);
  }
  else
  {
    CriWareErrorHandler__CRIWAREA2E6711B((const MethodInfo *)this);
    CriWareErrorHandler__CRIWARE527DA518(v2->fields.enableForceCrashOnError, v8);
    CriWareErrorHandler__CRIWARE063A11A2(v2->fields.messageBufferCounts, v9);
    CriWareErrorHandler__CRIWAREDBC6F415(v2->fields.enableDebugPrintOnTerminal, v10);
    v11 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_1BAB668(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    CriWareErrorHandler_ErrorCallbackFunc___ctor(v11, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, v12);
    CriWareErrorHandler__CRIWARED1107B8D(v11, v13);
    if ( v2->fields.dontDestroyOnLoad )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
      if ( !transform )
        sub_1BAB678(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
    }
  }
}


void __fastcall CriWareErrorHandler__CRIWARE063A11A2(uint32_t length, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_4AB0430;
  if ( !qword_4AB0430 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE063A11A2";
    v4[3] = 15LL;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_1BAB9F8(v4);
    qword_4AB0430 = (__int64)v2;
  }
  v2(length, method);
}


void __fastcall CriWareErrorHandler__CRIWARE3BCC893C(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_4AB0440;
  if ( !qword_4AB0440 )
  {
    v3 = 0;
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE3BCC893C";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v4 = 0;
    v1 = (void (*)(void))sub_1BAB9F8(v2);
    qword_4AB0440 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE4A393AE0(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_4AB0450;
  if ( !qword_4AB0450 )
  {
    v3 = 0;
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE4A393AE0";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v4 = 0;
    v1 = (void (*)(void))sub_1BAB9F8(v2);
    qword_4AB0450 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE527DA518(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_4AB0460;
  if ( !qword_4AB0460 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE527DA518";
    v4[3] = 15LL;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_1BAB9F8(v4);
    qword_4AB0460 = (__int64)v2;
  }
  v2(sw, method);
}


intptr_t __fastcall CriWareErrorHandler__CRIWARE841C0338(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  __int64 v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)qword_4AB0458;
  if ( !qword_4AB0458 )
  {
    v4 = 0;
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE841C0338";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1BAB9F8(v3);
    v1 = method;
    qword_4AB0458 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


void __fastcall CriWareErrorHandler__CRIWAREA2E6711B(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_4AB0438;
  if ( !qword_4AB0438 )
  {
    v3 = 0;
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWAREA2E6711B";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v4 = 0;
    v1 = (void (*)(void))sub_1BAB9F8(v2);
    qword_4AB0438 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARED1107B8D(
        CriWareErrorHandler_ErrorCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x0
  __int64 v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  if ( !qword_4AB0468 )
  {
    v7[0] = (__int64)"cri_ware_unity";
    v7[1] = 14LL;
    v7[2] = (__int64)"CRIWARED1107B8D";
    v7[3] = 15LL;
    v8 = 8;
    v7[4] = 0x200000000LL;
    v9 = 0;
    qword_4AB0468 = (__int64 (__fastcall *)(_QWORD))sub_1BAB9F8(v7);
  }
  v6 = sub_1BAB9F0(callback, method, v2, v3, v4);
  qword_4AB0468(v6);
}


void __fastcall CriWareErrorHandler__CRIWAREDBC6F415(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_4AB0448;
  if ( !qword_4AB0448 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWAREDBC6F415";
    v4[3] = 15LL;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_1BAB9F8(v4);
    qword_4AB0448 = (__int64)v2;
  }
  v2(sw, method);
}


void __fastcall CriWareErrorHandler__CriInternalLateUpdate(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CriWareErrorHandler__CriInternalUpdate(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  if ( !this->fields.enableDebugPrintOnTerminal )
    CriWareErrorHandler__DequeueErrorMessages(this, method);
}


void __fastcall CriWareErrorHandler__DequeueErrorMessages(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  intptr_t i; // w21
  System_String_o *v4; // x0
  System_String_o *v5; // x22
  const MethodInfo *v6; // x1

  if ( (byte_4AB0428 & 1) == 0 )
  {
    sub_1BAB41C(&System_Runtime_InteropServices_Marshal_TypeInfo, method);
    this = (CriWareErrorHandler_o *)sub_1BAB41C(&string_TypeInfo, v2);
    byte_4AB0428 = 1;
  }
  for ( i = CriWareErrorHandler__CRIWARE841C0338((const MethodInfo *)this);
        !System_IntPtr__op_Equality(i, 0, 0LL);
        i = CriWareErrorHandler__CRIWARE841C0338((const MethodInfo *)v4) )
  {
    if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
    v4 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(i, 0LL);
    v5 = v4;
    if ( v4 )
    {
      v4 = (System_String_o *)System_String__op_Inequality(v4, string_TypeInfo->static_fields->Empty, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
        CriWareErrorHandler__HandleMessage(v5, v6);
    }
  }
}


void __fastcall CriWareErrorHandler__HandleMessage(System_String_o *errmsg, const MethodInfo *method)
{
  struct CriWareErrorHandler_StaticFields *static_fields; // x9
  struct CriWareErrorHandler_Callback_o *OnCallback; // x8
  struct CriWareErrorHandler_Callback_o *callback; // x8

  if ( (byte_4AB0429 & 1) == 0 )
  {
    sub_1BAB41C(&CriWareErrorHandler_TypeInfo, method);
    byte_4AB0429 = 1;
  }
  if ( errmsg )
  {
    static_fields = CriWareErrorHandler_TypeInfo->static_fields;
    OnCallback = static_fields->OnCallback;
    if ( OnCallback )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))OnCallback->fields.m_target)(
        OnCallback->fields.original_method_info,
        errmsg,
        *(_QWORD *)&OnCallback->fields.extra_arg);
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      errmsg,
      *(_QWORD *)&callback->fields.extra_arg);
  }
}


void __fastcall CriWareErrorHandler__OnDestroy(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  struct CriWareErrorHandler_StaticFields *static_fields; // x8
  int v3; // w9
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4AB0427 & 1) == 0 )
  {
    sub_1BAB41C(&CriWareErrorHandler_TypeInfo, method);
    byte_4AB0427 = 1;
  }
  static_fields = CriWareErrorHandler_TypeInfo->static_fields;
  v3 = static_fields->initializationCount - 1;
  static_fields->initializationCount = v3;
  if ( !v3 )
  {
    CriWareErrorHandler__CRIWARED1107B8D(0LL, method);
    CriWareErrorHandler__CRIWARE4A393AE0(v4);
    CriWareErrorHandler__CRIWARE3BCC893C(v5);
  }
}


void __fastcall CriWareErrorHandler__OnDisable(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x1

  CriMonoBehaviour__OnDisable((CriMonoBehaviour_o *)this, method);
  CriWareErrorHandler__CRIWARED1107B8D(0LL, v2);
}


void __fastcall CriWareErrorHandler__OnEnable(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CriWareErrorHandler_ErrorCallbackFunc_o *v4; // x19
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4AB0426 & 1) == 0 )
  {
    sub_1BAB41C(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, method);
    sub_1BAB41C(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v3);
    byte_4AB0426 = 1;
  }
  CriMonoBehaviour__OnEnable((CriMonoBehaviour_o *)this, method);
  v4 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_1BAB668(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
  CriWareErrorHandler_ErrorCallbackFunc___ctor(v4, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, v5);
  CriWareErrorHandler__CRIWARED1107B8D(v4, v6);
}


void __fastcall CriWareErrorHandler__OutputDefaultLog(System_String_o *errmsg, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1

  v2 = errmsg;
  if ( (byte_4AB042A & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_15410/*"W"*/, method);
    errmsg = (System_String_o *)sub_1BAB41C(&StringLiteral_5430/*"E"*/, v3);
    byte_4AB042A = 1;
  }
  if ( !v2 )
    sub_1BAB678(errmsg, method);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_5430/*"E"*/, 0LL) )
    System_String__StartsWith(v2, (System_String_o *)StringLiteral_15410/*"W"*/, 0LL);
}


void __fastcall CriWareErrorHandler__Start(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CriWareErrorHandler__add_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v5; // x0
  __int64 v6; // x0
  bool v7; // zf
  CriWareErrorHandler_Callback_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4AB0423 & 1) == 0 )
  {
    sub_1BAB41C(&CriWareErrorHandler_Callback_TypeInfo, method);
    sub_1BAB41C(&CriWareErrorHandler_TypeInfo, v3);
    byte_4AB0423 = 1;
  }
  OnCallback = (System_Delegate_o *)CriWareErrorHandler_TypeInfo->static_fields->OnCallback;
  while ( 1 )
  {
    v5 = System_Delegate__Combine(OnCallback, (System_Delegate_o *)value, 0LL);
    if ( v5 )
    {
      if ( (CriWareErrorHandler_Callback_c *)v5->klass != CriWareErrorHandler_Callback_TypeInfo )
        break;
    }
    v6 = sub_1BE690C(&CriWareErrorHandler_TypeInfo->static_fields->OnCallback, v5, OnCallback);
    v7 = OnCallback == (System_Delegate_o *)v6;
    OnCallback = (System_Delegate_o *)v6;
    if ( v7 )
      return;
  }
  v8 = (CriWareErrorHandler_Callback_o *)sub_1BAB938(v5);
  CriWareErrorHandler__remove_OnCallback(v8, v9);
}


System_String_o *__fastcall CriWareErrorHandler__get_errorMessage(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB0421 & 1) == 0 )
  {
    sub_1BAB41C(&CriWareErrorHandler_TypeInfo, v1);
    byte_4AB0421 = 1;
  }
  return CriWareErrorHandler_TypeInfo->static_fields->_errorMessage_k__BackingField;
}


void __fastcall CriWareErrorHandler__remove_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v5; // x0
  __int64 v6; // x0
  bool v7; // zf
  CriWareErrorHandler_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4AB0424 & 1) == 0 )
  {
    sub_1BAB41C(&CriWareErrorHandler_Callback_TypeInfo, method);
    sub_1BAB41C(&CriWareErrorHandler_TypeInfo, v3);
    byte_4AB0424 = 1;
  }
  OnCallback = (System_Delegate_o *)CriWareErrorHandler_TypeInfo->static_fields->OnCallback;
  while ( 1 )
  {
    v5 = System_Delegate__Remove(OnCallback, (System_Delegate_o *)value, 0LL);
    if ( v5 )
    {
      if ( (CriWareErrorHandler_Callback_c *)v5->klass != CriWareErrorHandler_Callback_TypeInfo )
        break;
    }
    v6 = sub_1BE690C(&CriWareErrorHandler_TypeInfo->static_fields->OnCallback, v5, OnCallback);
    v7 = OnCallback == (System_Delegate_o *)v6;
    OnCallback = (System_Delegate_o *)v6;
    if ( v7 )
      return;
  }
  v8 = (CriWareErrorHandler_o *)sub_1BAB938(v5);
  CriWareErrorHandler__Awake(v8, v9);
}


void __fastcall CriWareErrorHandler__set_errorMessage(System_String_o *value, const MethodInfo *method)
{
  if ( (byte_4AB0422 & 1) == 0 )
  {
    sub_1BAB41C(&CriWareErrorHandler_TypeInfo, method);
    byte_4AB0422 = 1;
  }
  CriWareErrorHandler_TypeInfo->static_fields->_errorMessage_k__BackingField = value;
  sub_1BAB3C0(CriWareErrorHandler_TypeInfo->static_fields);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CriWareErrorHandler_Callback___ctor(
        CriWareErrorHandler_Callback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BAB3C0(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19E5468;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19E5448;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E5400;
}


System_IAsyncResult_o *__fastcall CriWareErrorHandler_Callback__BeginInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_String_o *message,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = message;
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, &v6, callback, object);
}


void __fastcall CriWareErrorHandler_Callback__EndInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
}


void __fastcall CriWareErrorHandler_Callback__Invoke(
        CriWareErrorHandler_Callback_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    message,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CriWareErrorHandler_ErrorCallbackFunc___ctor(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BAB3C0(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19E550C;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19E54EC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E54A4;
}


System_IAsyncResult_o *__fastcall CriWareErrorHandler_ErrorCallbackFunc__BeginInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_String_o *errmsg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = errmsg;
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, &v6, callback, object);
}


void __fastcall CriWareErrorHandler_ErrorCallbackFunc__EndInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
}


void __fastcall CriWareErrorHandler_ErrorCallbackFunc__Invoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_String_o *errmsg,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    errmsg,
    *(_QWORD *)&this->fields.extra_arg);
}