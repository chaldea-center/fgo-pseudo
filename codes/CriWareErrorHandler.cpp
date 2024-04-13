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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CriWareErrorHandler_c *inited; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  CriWareErrorHandler_ErrorCallbackFunc_o *v18; // x20
  const MethodInfo *v19; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42DEE0D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42DEE0D = 1;
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
    CriWareErrorHandler__CRIWARE527DA518(BYTE1(this->fields.messageBufferCounts), v15);
    CriWareErrorHandler__CRIWARE063A11A2(*((_DWORD *)&this->fields + 7), v16);
    CriWareErrorHandler__CRIWAREDBC6F415(this->fields.messageBufferCounts, v17);
    v18 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_B5D694(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
    CriWareErrorHandler_ErrorCallbackFunc___ctor(v18, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, 0LL);
    CriWareErrorHandler__CRIWARED1107B8D(v18, v19);
    if ( BYTE2(this->fields.messageBufferCounts) )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        sub_B5D69C(0LL, v21);
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
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall CriWareErrorHandler__CRIWARE063A11A2(uint32_t length, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_42DEE18;
  if ( !qword_42DEE18 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE063A11A2";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_B5DA48(v4);
    qword_42DEE18 = (__int64)v2;
  }
  v2(length, method);
}


void __fastcall CriWareErrorHandler__CRIWARE3BCC893C(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_42DEE28;
  if ( !qword_42DEE28 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE3BCC893C";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B5DA48(v2);
    qword_42DEE28 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE4A393AE0(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_42DEE38;
  if ( !qword_42DEE38 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE4A393AE0";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B5DA48(v2);
    qword_42DEE38 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE527DA518(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_42DEE48;
  if ( !qword_42DEE48 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE527DA518";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_B5DA48(v4);
    qword_42DEE48 = (__int64)v2;
  }
  v2(sw, method);
}


intptr_t __fastcall CriWareErrorHandler__CRIWARE841C0338(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  __int64 v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)qword_42DEE40;
  if ( !qword_42DEE40 )
  {
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE841C0338";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    method = (const MethodInfo *)sub_B5DA48(v3);
    v1 = method;
    qword_42DEE40 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


void __fastcall CriWareErrorHandler__CRIWAREA2E6711B(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_42DEE20;
  if ( !qword_42DEE20 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWAREA2E6711B";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B5DA48(v2);
    qword_42DEE20 = (__int64)v1;
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

  if ( !qword_42DEE50 )
  {
    v7[0] = (__int64)"cri_ware_unity";
    v7[1] = 14LL;
    v7[2] = (__int64)"CRIWARED1107B8D";
    v7[3] = 15LL;
    v7[4] = 0x200000000LL;
    v8 = 8;
    v9 = 0;
    qword_42DEE50 = (__int64 (__fastcall *)(_QWORD))sub_B5DA48(v7);
  }
  v6 = sub_B5DA40(callback, method, v2, v3, v4);
  qword_42DEE50(v6);
}


void __fastcall CriWareErrorHandler__CRIWAREDBC6F415(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_42DEE30;
  if ( !qword_42DEE30 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWAREDBC6F415";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_B5DA48(v4);
    qword_42DEE30 = (__int64)v2;
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w23
  CriWareErrorHandler_c *inited; // x0
  intptr_t v15; // w22
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  int v18; // w23
  const MethodInfo *v19; // x1
  _DWORD v20[2]; // [xsp+0h] [xbp-70h]
  int v21; // [xsp+8h] [xbp-68h]
  int v22; // [xsp+18h] [xbp-58h]

  if ( (byte_42DEE11 & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&IntPtr_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&System_Runtime_InteropServices_Marshal_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&string_TypeInfo, v10, v11, v12);
    byte_42DEE11 = 1;
  }
  v22 = 0;
  v13 = 0;
  do
  {
    inited = CriWareErrorHandler_TypeInfo;
    v21 = v13;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      inited = (CriWareErrorHandler_c *)j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    }
    v15 = CriWareErrorHandler__CRIWARE841C0338((const MethodInfo *)inited);
    if ( System_IntPtr__op_Equality(v15, 0, 0LL) )
      break;
    if ( (BYTE3(System_Runtime_InteropServices_Marshal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
    }
    v16 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v15, 0LL);
    v20[v13] = 2;
    v17 = v16;
    v18 = ++v21;
    if ( v16 && System_String__op_Inequality(v16, string_TypeInfo->static_fields->Empty, 0LL) )
    {
      if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
      }
      CriWareErrorHandler__HandleMessage(v17, v19);
    }
    if ( !v18 )
      break;
    v13 = v18 - 1;
  }
  while ( v20[v13] == 2 );
}


void __fastcall CriWareErrorHandler__ErrorCallbackFromNative(System_String_o *errmsg, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42DEE14 & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEE14 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  CriWareErrorHandler_c *v5; // x0
  struct CriWareErrorHandler_StaticFields *static_fields; // x8
  CriWareErrorHandler_Callback_o *OnCallback; // x8
  __int64 inited; // x0
  __int64 v9; // x1
  CriWareErrorHandler_Callback_o *callback; // x8

  if ( (byte_42DEE12 & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEE12 = 1;
  }
  if ( errmsg )
  {
    v5 = CriWareErrorHandler_TypeInfo;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
      v5 = CriWareErrorHandler_TypeInfo;
    }
    static_fields = v5->static_fields;
    if ( static_fields->OnCallback )
      goto LABEL_36;
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = CriWareErrorHandler_TypeInfo;
      static_fields = CriWareErrorHandler_TypeInfo->static_fields;
    }
    if ( static_fields->callback )
    {
LABEL_36:
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = CriWareErrorHandler_TypeInfo;
      }
      OnCallback = v5->static_fields->OnCallback;
      if ( OnCallback )
      {
        if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
        {
          inited = j_il2cpp_runtime_class_init_0(v5);
          OnCallback = CriWareErrorHandler_TypeInfo->static_fields->OnCallback;
          if ( !OnCallback )
            goto LABEL_33;
        }
        CriWareErrorHandler_Callback__Invoke(OnCallback, errmsg, 0LL);
        v5 = CriWareErrorHandler_TypeInfo;
      }
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = CriWareErrorHandler_TypeInfo;
      }
      callback = v5->static_fields->callback;
      if ( callback )
      {
        if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) == 0
          || v5->_2.cctor_finished
          || (inited = j_il2cpp_runtime_class_init_0(v5),
              (callback = CriWareErrorHandler_TypeInfo->static_fields->callback) != 0LL) )
        {
          CriWareErrorHandler_Callback__Invoke(callback, errmsg, 0LL);
          return;
        }
LABEL_33:
        sub_B5D69C(inited, v9);
      }
    }
    else
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v5);
      CriWareErrorHandler__OutputDefaultLog(errmsg, method);
    }
  }
}


void __fastcall CriWareErrorHandler__OnDestroy(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CriWareErrorHandler_c *v4; // x0
  const MethodInfo *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_42DEE10 & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEE10 = 1;
  }
  v4 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v4 = CriWareErrorHandler_TypeInfo;
  }
  if ( !--v4->static_fields->initializationCount )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    CriWareErrorHandler__CRIWARED1107B8D(0LL, method);
    CriWareErrorHandler__CRIWARE4A393AE0(v5);
    CriWareErrorHandler__CRIWARE3BCC893C(v6);
  }
}


void __fastcall CriWareErrorHandler__OnDisable(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42DEE0F & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEE0F = 1;
  }
  CriMonoBehaviour__OnDisable((CriMonoBehaviour_o *)this, method);
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
  }
  CriWareErrorHandler__CRIWARED1107B8D(0LL, v5);
}


void __fastcall CriWareErrorHandler__OnEnable(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CriWareErrorHandler_ErrorCallbackFunc_o *v11; // x19
  const MethodInfo *v12; // x1

  if ( (byte_42DEE0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v8, v9, v10);
    byte_42DEE0E = 1;
  }
  CriMonoBehaviour__OnEnable((CriMonoBehaviour_o *)this, method);
  v11 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_B5D694(CriWareErrorHandler_ErrorCallbackFunc_TypeInfo);
  CriWareErrorHandler_ErrorCallbackFunc___ctor(v11, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, 0LL);
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
  }
  CriWareErrorHandler__CRIWARED1107B8D(v11, v12);
}


void __fastcall CriWareErrorHandler__OutputDefaultLog(System_String_o *errmsg, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  v4 = errmsg;
  if ( (byte_42DEE13 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15386/*"W"*/, (_DWORD)method, v2, v3);
    errmsg = (System_String_o *)sub_B5D5C4(&StringLiteral_5509/*"E"*/, v5, v6, v7);
    byte_42DEE13 = 1;
  }
  if ( !v4 )
    sub_B5D69C(errmsg, method);
  if ( !System_String__StartsWith(v4, (System_String_o *)StringLiteral_5509/*"E"*/, 0LL) )
    System_String__StartsWith(v4, (System_String_o *)StringLiteral_15386/*"W"*/, 0LL);
}


void __fastcall CriWareErrorHandler__Start(CriWareErrorHandler_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CriWareErrorHandler__add_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CriWareErrorHandler_c *v8; // x0
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v10; // x0
  System_Delegate_o *v11; // x21
  CriWareErrorHandler_c *v12; // x0
  __int64 v13; // x0
  bool v14; // zf
  CriWareErrorHandler_Callback_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42DEE0B & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, v5, v6, v7);
    byte_42DEE0B = 1;
  }
  v8 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v8 = CriWareErrorHandler_TypeInfo;
  }
  OnCallback = (System_Delegate_o *)v8->static_fields->OnCallback;
  while ( 1 )
  {
    v10 = System_Delegate__Combine(OnCallback, (System_Delegate_o *)value, 0LL);
    v11 = v10;
    if ( v10 )
    {
      if ( (CriWareErrorHandler_Callback_c *)v10->klass != CriWareErrorHandler_Callback_TypeInfo )
        break;
    }
    v12 = CriWareErrorHandler_TypeInfo;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
      v12 = CriWareErrorHandler_TypeInfo;
    }
    v13 = sub_B51FDC(&v12->static_fields->OnCallback, v11, OnCallback);
    v14 = OnCallback == (System_Delegate_o *)v13;
    OnCallback = (System_Delegate_o *)v13;
    if ( v14 )
      return;
  }
  v15 = (CriWareErrorHandler_Callback_o *)sub_B5D990(v10);
  CriWareErrorHandler__remove_OnCallback(v15, v16);
}


System_String_o *__fastcall CriWareErrorHandler__get_errorMessage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CriWareErrorHandler_c *v4; // x0

  if ( (byte_42DEE09 & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, v1, v2, v3);
    byte_42DEE09 = 1;
  }
  v4 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v4 = CriWareErrorHandler_TypeInfo;
  }
  return v4->static_fields->_errorMessage_k__BackingField;
}


void __fastcall CriWareErrorHandler__remove_OnCallback(CriWareErrorHandler_Callback_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CriWareErrorHandler_c *v8; // x0
  System_Delegate_o *OnCallback; // x20
  System_Delegate_o *v10; // x0
  System_Delegate_o *v11; // x21
  CriWareErrorHandler_c *v12; // x0
  __int64 v13; // x0
  bool v14; // zf
  CriWareErrorHandler_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42DEE0C & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, v5, v6, v7);
    byte_42DEE0C = 1;
  }
  v8 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v8 = CriWareErrorHandler_TypeInfo;
  }
  OnCallback = (System_Delegate_o *)v8->static_fields->OnCallback;
  while ( 1 )
  {
    v10 = System_Delegate__Remove(OnCallback, (System_Delegate_o *)value, 0LL);
    v11 = v10;
    if ( v10 )
    {
      if ( (CriWareErrorHandler_Callback_c *)v10->klass != CriWareErrorHandler_Callback_TypeInfo )
        break;
    }
    v12 = CriWareErrorHandler_TypeInfo;
    if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
      v12 = CriWareErrorHandler_TypeInfo;
    }
    v13 = sub_B51FDC(&v12->static_fields->OnCallback, v11, OnCallback);
    v14 = OnCallback == (System_Delegate_o *)v13;
    OnCallback = (System_Delegate_o *)v13;
    if ( v14 )
      return;
  }
  v15 = (CriWareErrorHandler_o *)sub_B5D990(v10);
  CriWareErrorHandler__Awake(v15, v16);
}


void __fastcall CriWareErrorHandler__set_errorMessage(System_String_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CriWareErrorHandler_c *v5; // x0
  struct CriWareErrorHandler_StaticFields *static_fields; // x0

  if ( (byte_42DEE0A & 1) == 0 )
  {
    sub_B5D5C4(&CriWareErrorHandler_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEE0A = 1;
  }
  v5 = CriWareErrorHandler_TypeInfo;
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
    v5 = CriWareErrorHandler_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_errorMessage_k__BackingField = value;
  sub_B5D560(static_fields);
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
  sub_B5D560(
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall CriWareErrorHandler_Callback__EndInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall CriWareErrorHandler_Callback__Invoke(
        CriWareErrorHandler_Callback_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CriWareErrorHandler_Callback_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_String_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_String_o *, _QWORD); // x0
  CriWareErrorHandler_Callback_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_String_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_String_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  CriWareErrorHandler_Callback_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CriWareErrorHandler_Callback_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_String_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, message, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = message->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(message, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(message, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(message, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(message, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(message, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, message, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v23)(v31, message, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v31
                                                                           + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                           + 312))(
                v31,
                message,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v32)(v31, message, v30);
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
  sub_B5D560(
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall CriWareErrorHandler_ErrorCallbackFunc__EndInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall CriWareErrorHandler_ErrorCallbackFunc__Invoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_String_o *errmsg,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CriWareErrorHandler_ErrorCallbackFunc_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_String_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_String_o *, _QWORD); // x0
  CriWareErrorHandler_ErrorCallbackFunc_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_String_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_String_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  CriWareErrorHandler_ErrorCallbackFunc_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CriWareErrorHandler_ErrorCallbackFunc_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_String_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, errmsg, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = errmsg->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&errmsg->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&errmsg->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(errmsg, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&errmsg->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(errmsg, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(errmsg, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(errmsg, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&errmsg->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  errmsg,
                  *((_QWORD *)&errmsg->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(errmsg, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, errmsg, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v23)(v31, errmsg, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v31
                                                                           + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                           + 312))(
                v31,
                errmsg,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v32)(v31, errmsg, v30);
    }
  }
}