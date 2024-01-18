void __fastcall CriWareErrorHandler___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall CriWareErrorHandler___ctor(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  BYTE2(this->fields.messageBufferCounts) = 1;
  *((_DWORD *)&this->fields + 7) = 8;
  CriMonoBehaviour___ctor((CriMonoBehaviour_o *)this, method);
}


void __fastcall CriWareErrorHandler__Awake(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CriWareErrorHandler_c *inited; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  CriWareErrorHandler_ErrorCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_417DF1D & 1) == 0 )
  {
    sub_B2C35C(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, method);
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, v3);
    sub_B2C35C(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_417DF1D = 1;
  }
  inited = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    inited = CriWareErrorHandler_TypeInfo;
  }
  if ( ++inited->static_fields->initializationCount == 1 )
  {
    if ( (BYTE3(inited->vtable._0_Equals.methodPtr) & 4) != 0 && !inited->_2.cctor_finished )
      inited = (CriWareErrorHandler_c *)j_il2cpp_runtime_class_init_0(inited);
    CriWareErrorHandler__CRIWAREA2E6711B((const MethodInfo *)inited);
    CriWareErrorHandler__CRIWARE527DA518(BYTE1(this->fields.messageBufferCounts), v7);
    CriWareErrorHandler__CRIWARE063A11A2(*((_DWORD *)&this->fields + 7), v8);
    CriWareErrorHandler__CRIWAREDBC6F415(this->fields.messageBufferCounts, v9);
    v10 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_B2C42C(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    CriWareErrorHandler_ErrorCallbackFunc___ctor(v10, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, 0LL);
    CriWareErrorHandler__CRIWARED1107B8D(v10, v11);
    if ( BYTE2(this->fields.messageBufferCounts) )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        sub_B2C434(0LL, v13);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
    }
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall CriWareErrorHandler__CRIWARE063A11A2(uint32_t length, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_417DF28;
  if ( !qword_417DF28 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE063A11A2";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_B2C7E0(v4);
    qword_417DF28 = (__int64)v2;
  }
  v2(length, method);
}


void __fastcall CriWareErrorHandler__CRIWARE3BCC893C(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_417DF38;
  if ( !qword_417DF38 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE3BCC893C";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B2C7E0(v2);
    qword_417DF38 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE4A393AE0(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_417DF48;
  if ( !qword_417DF48 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE4A393AE0";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B2C7E0(v2);
    qword_417DF48 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE527DA518(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_417DF58;
  if ( !qword_417DF58 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE527DA518";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_B2C7E0(v4);
    qword_417DF58 = (__int64)v2;
  }
  v2(sw, method);
}


intptr_t __fastcall CriWareErrorHandler__CRIWARE841C0338(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  __int64 v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)qword_417DF50;
  if ( !qword_417DF50 )
  {
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE841C0338";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    method = (const MethodInfo *)sub_B2C7E0(v3);
    v1 = method;
    qword_417DF50 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


void __fastcall CriWareErrorHandler__CRIWAREA2E6711B(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_417DF30;
  if ( !qword_417DF30 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWAREA2E6711B";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B2C7E0(v2);
    qword_417DF30 = (__int64)v1;
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
  __int64 v7[5]; // [xsp+0h] [xbp-40h] BYREF
  int v8; // [xsp+28h] [xbp-18h]
  char v9; // [xsp+2Ch] [xbp-14h]

  if ( !qword_417DF60 )
  {
    v7[0] = (__int64)"cri_ware_unity";
    v7[1] = 14LL;
    v7[2] = (__int64)"CRIWARED1107B8D";
    v7[3] = 15LL;
    v7[4] = 0x200000000LL;
    v8 = 8;
    v9 = 0;
    qword_417DF60 = (__int64 (__fastcall *)(_QWORD))sub_B2C7E0(v7);
  }
  v6 = sub_B2C7D8(callback, method, v2, v3, v4);
  qword_417DF60(v6);
}


void __fastcall CriWareErrorHandler__CRIWAREDBC6F415(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_417DF40;
  if ( !qword_417DF40 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWAREDBC6F415";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_B2C7E0(v4);
    qword_417DF40 = (__int64)v2;
  }
  v2(sw, method);
}


void __fastcall CriWareErrorHandler__CriInternalLateUpdate(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CriWareErrorHandler__CriInternalUpdate(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  if ( !LOBYTE(this->fields.messageBufferCounts) )
    CriWareErrorHandler__DequeueErrorMessages(this, method);
}


void __fastcall CriWareErrorHandler__DequeueErrorMessages(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  int v5; // w23
  CriWareErrorHandler_c *inited; // x0
  intptr_t v7; // w22
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  int v10; // w23
  const MethodInfo *v11; // x1
  _DWORD v12[2]; // [xsp+0h] [xbp-70h]
  int v13; // [xsp+8h] [xbp-68h]
  int v14; // [xsp+18h] [xbp-58h]

  if ( (byte_417DF21 & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, method);
    sub_B2C35C(&IntPtr_TypeInfo, v2);
    sub_B2C35C(&System_Runtime_InteropServices_Marshal_TypeInfo, v3);
    sub_B2C35C(&string_TypeInfo, v4);
    byte_417DF21 = 1;
  }
  v14 = 0;
  v5 = 0;
  do
  {
    inited = CriWareErrorHandler_TypeInfo;
    v13 = v5;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      inited = (CriWareErrorHandler_c *)j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    }
    v7 = CriWareErrorHandler__CRIWARE841C0338((const MethodInfo *)inited);
    if ( System_IntPtr__op_Equality(v7, 0, 0LL) )
      break;
    if ( (BYTE3(System_Runtime_InteropServices_Marshal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
    }
    v8 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v7, 0LL);
    v12[v5] = 2;
    v9 = v8;
    v10 = ++v13;
    if ( v8 && System_String__op_Inequality(v8, string_TypeInfo->static_fields->Empty, 0LL) )
    {
      if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
      }
      CriWareErrorHandler__HandleMessage(v9, v11);
    }
    if ( !v10 )
      break;
    v5 = v10 - 1;
  }
  while ( v12[v5] == 2 );
}


void __fastcall CriWareErrorHandler__ErrorCallbackFromNative(System_String_o *errmsg, const MethodInfo *method)
{
  if ( (byte_417DF24 & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, method);
    byte_417DF24 = 1;
  }
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
  }
  CriWareErrorHandler__HandleMessage(errmsg, method);
}


void __fastcall CriWareErrorHandler__HandleMessage(System_String_o *errmsg, const MethodInfo *method)
{
  CriWareErrorHandler_c *v3; // x0
  struct CriWareErrorHandler_StaticFields *static_fields; // x8
  CriWareErrorHandler_Callback_o *OnCallback; // x8
  __int64 inited; // x0
  __int64 v7; // x1
  CriWareErrorHandler_Callback_o *callback; // x8

  if ( (byte_417DF22 & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, method);
    byte_417DF22 = 1;
  }
  if ( errmsg )
  {
    v3 = CriWareErrorHandler_TypeInfo;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
      v3 = CriWareErrorHandler_TypeInfo;
    }
    static_fields = v3->static_fields;
    if ( static_fields->OnCallback )
      goto LABEL_36;
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = CriWareErrorHandler_TypeInfo;
      static_fields = CriWareErrorHandler_TypeInfo->static_fields;
    }
    if ( static_fields->callback )
    {
LABEL_36:
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = CriWareErrorHandler_TypeInfo;
      }
      OnCallback = v3->static_fields->OnCallback;
      if ( OnCallback )
      {
        if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
        {
          inited = j_il2cpp_runtime_class_init_0(v3);
          OnCallback = CriWareErrorHandler_TypeInfo->static_fields->OnCallback;
          if ( !OnCallback )
            goto LABEL_33;
        }
        CriWareErrorHandler_Callback__Invoke(OnCallback, errmsg, 0LL);
        v3 = CriWareErrorHandler_TypeInfo;
      }
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = CriWareErrorHandler_TypeInfo;
      }
      callback = v3->static_fields->callback;
      if ( callback )
      {
        if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) == 0
          || v3->_2.cctor_finished
          || (inited = j_il2cpp_runtime_class_init_0(v3),
              (callback = CriWareErrorHandler_TypeInfo->static_fields->callback) != 0LL) )
        {
          CriWareErrorHandler_Callback__Invoke(callback, errmsg, 0LL);
          return;
        }
LABEL_33:
        sub_B2C434(inited, v7);
      }
    }
    else
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      CriWareErrorHandler__OutputDefaultLog(errmsg, method);
    }
  }
}


void __fastcall CriWareErrorHandler__OnDestroy(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  CriWareErrorHandler_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_417DF20 & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, method);
    byte_417DF20 = 1;
  }
  v2 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v2 = CriWareErrorHandler_TypeInfo;
  }
  if ( !--v2->static_fields->initializationCount )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v2);
    CriWareErrorHandler__CRIWARED1107B8D(0LL, method);
    CriWareErrorHandler__CRIWARE4A393AE0(v3);
    CriWareErrorHandler__CRIWARE3BCC893C(v4);
  }
}


void __fastcall CriWareErrorHandler__OnDisable(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_417DF1F & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, method);
    byte_417DF1F = 1;
  }
  CriMonoBehaviour__OnDisable((CriMonoBehaviour_o *)this, method);
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
  }
  CriWareErrorHandler__CRIWARED1107B8D(0LL, v3);
}


void __fastcall CriWareErrorHandler__OnEnable(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CriWareErrorHandler_ErrorCallbackFunc_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_417DF1E & 1) == 0 )
  {
    sub_B2C35C(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, method);
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, v3);
    sub_B2C35C(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v4);
    byte_417DF1E = 1;
  }
  CriMonoBehaviour__OnEnable((CriMonoBehaviour_o *)this, method);
  v5 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_B2C42C(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
  CriWareErrorHandler_ErrorCallbackFunc___ctor(v5, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, 0LL);
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
  }
  CriWareErrorHandler__CRIWARED1107B8D(v5, v6);
}


void __fastcall CriWareErrorHandler__OutputDefaultLog(System_String_o *errmsg, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1

  v2 = errmsg;
  if ( (byte_417DF23 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15227/*"W"*/, method);
    errmsg = (System_String_o *)sub_B2C35C(&StringLiteral_5432/*"E"*/, v3);
    byte_417DF23 = 1;
  }
  if ( !v2 )
    sub_B2C434(errmsg, method);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_5432/*"E"*/, 0LL) )
    System_String__StartsWith(v2, (System_String_o *)StringLiteral_15227/*"W"*/, 0LL);
}


void __fastcall CriWareErrorHandler__Start(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CriWareErrorHandler__add_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CriWareErrorHandler_c *v4; // x0
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CriWareErrorHandler_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CriWareErrorHandler_Callback_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_417DF1B & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_Callback_TypeInfo, method);
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, v3);
    byte_417DF1B = 1;
  }
  v4 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v4 = CriWareErrorHandler_TypeInfo;
  }
  OnCallback = (System_Delegate_o *)v4->static_fields->OnCallback;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(OnCallback, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CriWareErrorHandler_Callback_c *)v6->klass != CriWareErrorHandler_Callback_TypeInfo )
        break;
    }
    v8 = CriWareErrorHandler_TypeInfo;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
      v8 = CriWareErrorHandler_TypeInfo;
    }
    v9 = sub_B20D74(&v8->static_fields->OnCallback, v7, OnCallback);
    v10 = OnCallback == (System_Delegate_o *)v9;
    OnCallback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CriWareErrorHandler_Callback_o *)sub_B2C728(v6);
  CriWareErrorHandler__remove_OnCallback(v11, v12);
}


System_String_o *__fastcall CriWareErrorHandler__get_errorMessage(const MethodInfo *method)
{
  __int64 v1; // x1
  CriWareErrorHandler_c *v2; // x0

  if ( (byte_417DF19 & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, v1);
    byte_417DF19 = 1;
  }
  v2 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v2 = CriWareErrorHandler_TypeInfo;
  }
  return v2->static_fields->_errorMessage_k__BackingField;
}


void __fastcall CriWareErrorHandler__remove_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CriWareErrorHandler_c *v4; // x0
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CriWareErrorHandler_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CriWareErrorHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_417DF1C & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_Callback_TypeInfo, method);
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, v3);
    byte_417DF1C = 1;
  }
  v4 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v4 = CriWareErrorHandler_TypeInfo;
  }
  OnCallback = (System_Delegate_o *)v4->static_fields->OnCallback;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(OnCallback, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CriWareErrorHandler_Callback_c *)v6->klass != CriWareErrorHandler_Callback_TypeInfo )
        break;
    }
    v8 = CriWareErrorHandler_TypeInfo;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
      v8 = CriWareErrorHandler_TypeInfo;
    }
    v9 = sub_B20D74(&v8->static_fields->OnCallback, v7, OnCallback);
    v10 = OnCallback == (System_Delegate_o *)v9;
    OnCallback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CriWareErrorHandler_o *)sub_B2C728(v6);
  CriWareErrorHandler__Awake(v11, v12);
}


void __fastcall CriWareErrorHandler__set_errorMessage(System_String_o *value, const MethodInfo *method)
{
  CriWareErrorHandler_c *v3; // x0
  struct CriWareErrorHandler_StaticFields *static_fields; // x0

  if ( (byte_417DF1A & 1) == 0 )
  {
    sub_B2C35C(&CriWareErrorHandler_TypeInfo, method);
    byte_417DF1A = 1;
  }
  v3 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v3 = CriWareErrorHandler_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_errorMessage_k__BackingField = value;
  sub_B2C2F8(static_fields, value);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CriWareErrorHandler_Callback___ctor(
        CriWareErrorHandler_Callback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CriWareErrorHandler_Callback__BeginInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_String_o *message,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)message;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall CriWareErrorHandler_Callback__EndInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall CriWareErrorHandler_Callback__Invoke(
        CriWareErrorHandler_Callback_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CriWareErrorHandler_Callback_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  CriWareErrorHandler_Callback_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  CriWareErrorHandler_Callback_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CriWareErrorHandler_Callback_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, message, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = message->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(message, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(message, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = message->klass;
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(message, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(message, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(message, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, message, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, message, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                message,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, message, v31);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CriWareErrorHandler_ErrorCallbackFunc___ctor(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CriWareErrorHandler_ErrorCallbackFunc__BeginInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_String_o *errmsg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)errmsg;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall CriWareErrorHandler_ErrorCallbackFunc__EndInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall CriWareErrorHandler_ErrorCallbackFunc__Invoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_String_o *errmsg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CriWareErrorHandler_ErrorCallbackFunc_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  CriWareErrorHandler_ErrorCallbackFunc_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  CriWareErrorHandler_ErrorCallbackFunc_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CriWareErrorHandler_ErrorCallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, errmsg, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = errmsg->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&errmsg->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&errmsg->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(errmsg, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&errmsg->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(errmsg, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = errmsg->klass;
                if ( *(_WORD *)&errmsg->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&errmsg->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(errmsg, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(errmsg, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&errmsg->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  errmsg,
                  *((_QWORD *)&errmsg->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(errmsg, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, errmsg, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, errmsg, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                errmsg,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, errmsg, v31);
    }
  }
}