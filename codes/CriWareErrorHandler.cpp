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
  CriWareErrorHandler_c *v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  CriWareErrorHandler_ErrorCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_421BC5D & 1) == 0 )
  {
    sub_B0D8A4(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, method);
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, v3);
    sub_B0D8A4(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421BC5D = 1;
  }
  v6 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v6 = CriWareErrorHandler_TypeInfo;
  }
  if ( ++v6->static_fields->initializationCount == 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    CriWareErrorHandler__CRIWAREA2E6711B((const MethodInfo *)v6);
    CriWareErrorHandler__CRIWARE527DA518(BYTE1(this->fields.messageBufferCounts), v7);
    CriWareErrorHandler__CRIWARE063A11A2(*((_DWORD *)&this->fields + 7), v8);
    CriWareErrorHandler__CRIWAREDBC6F415(this->fields.messageBufferCounts, v9);
    v12 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_B0D974(
                                                       CriWareErrorHandler_ErrorCallbackFunc_TypeInfo,
                                                       v10,
                                                       v11);
    CriWareErrorHandler_ErrorCallbackFunc___ctor(v12, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, 0LL);
    CriWareErrorHandler__CRIWARED1107B8D(v12, v13);
    if ( BYTE2(this->fields.messageBufferCounts) )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        sub_B0D97C(0LL);
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
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall CriWareErrorHandler__CRIWARE063A11A2(uint32_t length, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_421BC68;
  if ( !qword_421BC68 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE063A11A2";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_B0DD28(v4);
    qword_421BC68 = (__int64)v2;
  }
  v2(length, method);
}


void __fastcall CriWareErrorHandler__CRIWARE3BCC893C(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_421BC78;
  if ( !qword_421BC78 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE3BCC893C";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B0DD28(v2);
    qword_421BC78 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE4A393AE0(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_421BC88;
  if ( !qword_421BC88 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE4A393AE0";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B0DD28(v2);
    qword_421BC88 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE527DA518(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_421BC98;
  if ( !qword_421BC98 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE527DA518";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_B0DD28(v4);
    qword_421BC98 = (__int64)v2;
  }
  v2(sw, method);
}


intptr_t __fastcall CriWareErrorHandler__CRIWARE841C0338(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  __int64 v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)qword_421BC90;
  if ( !qword_421BC90 )
  {
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE841C0338";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    method = (const MethodInfo *)sub_B0DD28(v3);
    v1 = method;
    qword_421BC90 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


void __fastcall CriWareErrorHandler__CRIWAREA2E6711B(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_421BC70;
  if ( !qword_421BC70 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWAREA2E6711B";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B0DD28(v2);
    qword_421BC70 = (__int64)v1;
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

  if ( !qword_421BCA0 )
  {
    v7[0] = (__int64)"cri_ware_unity";
    v7[1] = 14LL;
    v7[2] = (__int64)"CRIWARED1107B8D";
    v7[3] = 15LL;
    v7[4] = 0x200000000LL;
    v8 = 8;
    v9 = 0;
    qword_421BCA0 = (__int64 (__fastcall *)(_QWORD))sub_B0DD28(v7);
  }
  v6 = sub_B0DD20(callback, method, v2, v3, v4);
  qword_421BCA0(v6);
}


void __fastcall CriWareErrorHandler__CRIWAREDBC6F415(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_421BC80;
  if ( !qword_421BC80 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWAREDBC6F415";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_B0DD28(v4);
    qword_421BC80 = (__int64)v2;
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
  CriWareErrorHandler_c *v6; // x0
  intptr_t v7; // w22
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  int v10; // w23
  const MethodInfo *v11; // x1
  _DWORD v12[2]; // [xsp+0h] [xbp-70h]
  int v13; // [xsp+8h] [xbp-68h]
  int v14; // [xsp+18h] [xbp-58h]

  if ( (byte_421BC61 & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, method);
    sub_B0D8A4(&IntPtr_TypeInfo, v2);
    sub_B0D8A4(&System_Runtime_InteropServices_Marshal_TypeInfo, v3);
    sub_B0D8A4(&string_TypeInfo, v4);
    byte_421BC61 = 1;
  }
  v14 = 0;
  v5 = 0;
  do
  {
    v6 = CriWareErrorHandler_TypeInfo;
    v13 = v5;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    }
    v7 = CriWareErrorHandler__CRIWARE841C0338((const MethodInfo *)v6);
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
  if ( (byte_421BC64 & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, method);
    byte_421BC64 = 1;
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
  __int64 v6; // x0
  CriWareErrorHandler_Callback_o *callback; // x8

  if ( (byte_421BC62 & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, method);
    byte_421BC62 = 1;
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
          j_il2cpp_runtime_class_init_0(v3);
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
          || (j_il2cpp_runtime_class_init_0(v3),
              (callback = CriWareErrorHandler_TypeInfo->static_fields->callback) != 0LL) )
        {
          CriWareErrorHandler_Callback__Invoke(callback, errmsg, 0LL);
          return;
        }
LABEL_33:
        sub_B0D97C(v6);
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

  if ( (byte_421BC60 & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, method);
    byte_421BC60 = 1;
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

  if ( (byte_421BC5F & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, method);
    byte_421BC5F = 1;
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
  __int64 v5; // x1
  __int64 v6; // x2
  CriWareErrorHandler_ErrorCallbackFunc_o *v7; // x19
  const MethodInfo *v8; // x1

  if ( (byte_421BC5E & 1) == 0 )
  {
    sub_B0D8A4(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, method);
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, v3);
    sub_B0D8A4(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v4);
    byte_421BC5E = 1;
  }
  CriMonoBehaviour__OnEnable((CriMonoBehaviour_o *)this, method);
  v7 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_B0D974(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v5, v6);
  CriWareErrorHandler_ErrorCallbackFunc___ctor(v7, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, 0LL);
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
  }
  CriWareErrorHandler__CRIWARED1107B8D(v7, v8);
}


void __fastcall CriWareErrorHandler__OutputDefaultLog(System_String_o *errmsg, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1

  v2 = errmsg;
  if ( (byte_421BC63 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15274/*"W"*/, method);
    errmsg = (System_String_o *)sub_B0D8A4(&StringLiteral_5448/*"E"*/, v3);
    byte_421BC63 = 1;
  }
  if ( !v2 )
    sub_B0D97C(errmsg);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_5448/*"E"*/, 0LL) )
    System_String__StartsWith(v2, (System_String_o *)StringLiteral_15274/*"W"*/, 0LL);
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

  if ( (byte_421BC5B & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_Callback_TypeInfo, method);
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, v3);
    byte_421BC5B = 1;
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
    v9 = sub_B022BC(&v8->static_fields->OnCallback, v7, OnCallback);
    v10 = OnCallback == (System_Delegate_o *)v9;
    OnCallback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v6);
  CriWareErrorHandler__remove_OnCallback(v11, v12);
}


System_String_o *__fastcall CriWareErrorHandler__get_errorMessage(const MethodInfo *method)
{
  __int64 v1; // x1
  CriWareErrorHandler_c *v2; // x0

  if ( (byte_421BC59 & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, v1);
    byte_421BC59 = 1;
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

  if ( (byte_421BC5C & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_Callback_TypeInfo, method);
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, v3);
    byte_421BC5C = 1;
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
    v9 = sub_B022BC(&v8->static_fields->OnCallback, v7, OnCallback);
    v10 = OnCallback == (System_Delegate_o *)v9;
    OnCallback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v6);
  CriWareErrorHandler__Awake(v11, v12);
}


void __fastcall CriWareErrorHandler__set_errorMessage(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CriWareErrorHandler_c *v9; // x0
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_421BC5A & 1) == 0 )
  {
    sub_B0D8A4(&CriWareErrorHandler_TypeInfo, method);
    byte_421BC5A = 1;
  }
  v9 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v9 = CriWareErrorHandler_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v9->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)value;
  sub_B0D840(static_fields, (System_Int32_array **)value, v2, v3, v4, v5, v6, v7);
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
  sub_B0D840(
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall CriWareErrorHandler_Callback__EndInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  CriWareErrorHandler_Callback_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  CriWareErrorHandler_Callback_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
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
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, message, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = message->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(message, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(message, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = message->klass;
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(message, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(message, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(message, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, message, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, message, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                message,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, message, v29);
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
  sub_B0D840(
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall CriWareErrorHandler_ErrorCallbackFunc__EndInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  CriWareErrorHandler_ErrorCallbackFunc_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  CriWareErrorHandler_ErrorCallbackFunc_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
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
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, errmsg, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = errmsg->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&errmsg->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&errmsg->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(errmsg, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&errmsg->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(errmsg, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = errmsg->klass;
                if ( *(_WORD *)&errmsg->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&errmsg->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(errmsg, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(errmsg, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&errmsg->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  errmsg,
                  *((_QWORD *)&errmsg->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(errmsg, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, errmsg, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, errmsg, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                errmsg,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, errmsg, v29);
    }
  }
}