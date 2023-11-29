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
  __int64 v12; // x3
  __int64 v13; // x4
  CriWareErrorHandler_ErrorCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F033D & 1) == 0 )
  {
    sub_B16FFC(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, method);
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, v3);
    sub_B16FFC(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F033D = 1;
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
    v14 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_B170CC(
                                                       CriWareErrorHandler_ErrorCallbackFunc_TypeInfo,
                                                       v10,
                                                       v11,
                                                       v12,
                                                       v13);
    CriWareErrorHandler_ErrorCallbackFunc___ctor(v14, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, 0LL);
    CriWareErrorHandler__CRIWARED1107B8D(v14, v15);
    if ( BYTE2(this->fields.messageBufferCounts) )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        sub_B170D4();
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
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)this, 0LL);
  }
}


void __fastcall CriWareErrorHandler__CRIWARE063A11A2(uint32_t length, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_40F0348;
  if ( !qword_40F0348 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE063A11A2";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_B17480(v4);
    qword_40F0348 = (__int64)v2;
  }
  v2(length, method);
}


void __fastcall CriWareErrorHandler__CRIWARE3BCC893C(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_40F0358;
  if ( !qword_40F0358 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE3BCC893C";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B17480(v2);
    qword_40F0358 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE4A393AE0(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_40F0368;
  if ( !qword_40F0368 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWARE4A393AE0";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B17480(v2);
    qword_40F0368 = (__int64)v1;
  }
  v1();
}


void __fastcall CriWareErrorHandler__CRIWARE527DA518(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_40F0378;
  if ( !qword_40F0378 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWARE527DA518";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_B17480(v4);
    qword_40F0378 = (__int64)v2;
  }
  v2(sw, method);
}


intptr_t __fastcall CriWareErrorHandler__CRIWARE841C0338(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  __int64 v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)qword_40F0370;
  if ( !qword_40F0370 )
  {
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE841C0338";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    method = (const MethodInfo *)sub_B17480(v3);
    v1 = method;
    qword_40F0370 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


void __fastcall CriWareErrorHandler__CRIWAREA2E6711B(const MethodInfo *method)
{
  void (*v1)(void); // x0
  __int64 v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = (void (*)(void))qword_40F0350;
  if ( !qword_40F0350 )
  {
    v2[0] = (__int64)"cri_ware_unity";
    v2[1] = 14LL;
    v2[2] = (__int64)"CRIWAREA2E6711B";
    v2[3] = 15LL;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void (*)(void))sub_B17480(v2);
    qword_40F0350 = (__int64)v1;
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

  if ( !qword_40F0380 )
  {
    v7[0] = (__int64)"cri_ware_unity";
    v7[1] = 14LL;
    v7[2] = (__int64)"CRIWARED1107B8D";
    v7[3] = 15LL;
    v7[4] = 0x200000000LL;
    v8 = 8;
    v9 = 0;
    qword_40F0380 = (__int64 (__fastcall *)(_QWORD))sub_B17480(v7);
  }
  v6 = sub_B17478(callback, method, v2, v3, v4);
  qword_40F0380(v6);
}


void __fastcall CriWareErrorHandler__CRIWAREDBC6F415(bool sw, const MethodInfo *method)
{
  void (__fastcall *v2)(bool, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(bool, const MethodInfo *))qword_40F0360;
  if ( !qword_40F0360 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"CRIWAREDBC6F415";
    v4[3] = 15LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(bool, const MethodInfo *))sub_B17480(v4);
    qword_40F0360 = (__int64)v2;
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

  if ( (byte_40F0341 & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, method);
    sub_B16FFC(&IntPtr_TypeInfo, v2);
    sub_B16FFC(&System_Runtime_InteropServices_Marshal_TypeInfo, v3);
    sub_B16FFC(&string_TypeInfo, v4);
    byte_40F0341 = 1;
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
  if ( (byte_40F0344 & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, method);
    byte_40F0344 = 1;
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
  CriWareErrorHandler_Callback_o *callback; // x8

  if ( (byte_40F0342 & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, method);
    byte_40F0342 = 1;
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
        sub_B170D4();
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

  if ( (byte_40F0340 & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, method);
    byte_40F0340 = 1;
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

  if ( (byte_40F033F & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, method);
    byte_40F033F = 1;
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
  __int64 v7; // x3
  __int64 v8; // x4
  CriWareErrorHandler_ErrorCallbackFunc_o *v9; // x19
  const MethodInfo *v10; // x1

  if ( (byte_40F033E & 1) == 0 )
  {
    sub_B16FFC(&Method_CriWareErrorHandler_ErrorCallbackFromNative__, method);
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, v3);
    sub_B16FFC(&CriWareErrorHandler_ErrorCallbackFunc_TypeInfo, v4);
    byte_40F033E = 1;
  }
  CriMonoBehaviour__OnEnable((CriMonoBehaviour_o *)this, method);
  v9 = (CriWareErrorHandler_ErrorCallbackFunc_o *)sub_B170CC(
                                                    CriWareErrorHandler_ErrorCallbackFunc_TypeInfo,
                                                    v5,
                                                    v6,
                                                    v7,
                                                    v8);
  CriWareErrorHandler_ErrorCallbackFunc___ctor(v9, 0LL, Method_CriWareErrorHandler_ErrorCallbackFromNative__, 0LL);
  if ( (BYTE3(CriWareErrorHandler_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareErrorHandler_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareErrorHandler_TypeInfo);
  }
  CriWareErrorHandler__CRIWARED1107B8D(v9, v10);
}


void __fastcall CriWareErrorHandler__OutputDefaultLog(System_String_o *errmsg, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_40F0343 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15167, method);
    sub_B16FFC(&StringLiteral_5413, v3);
    byte_40F0343 = 1;
  }
  if ( !errmsg )
    sub_B170D4();
  if ( !System_String__StartsWith(errmsg, (System_String_o *)StringLiteral_5413, 0LL) )
    System_String__StartsWith(errmsg, (System_String_o *)StringLiteral_15167, 0LL);
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

  if ( (byte_40F033B & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_Callback_TypeInfo, method);
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, v3);
    byte_40F033B = 1;
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
    v9 = sub_B0BA14(&v8->static_fields->OnCallback, v7, OnCallback);
    v10 = OnCallback == (System_Delegate_o *)v9;
    OnCallback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CriWareErrorHandler_Callback_o *)sub_B173C8(v6);
  CriWareErrorHandler__remove_OnCallback(v11, v12);
}


System_String_o *__fastcall CriWareErrorHandler__get_errorMessage(const MethodInfo *method)
{
  __int64 v1; // x1
  CriWareErrorHandler_c *v2; // x0

  if ( (byte_40F0339 & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, v1);
    byte_40F0339 = 1;
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

  if ( (byte_40F033C & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_Callback_TypeInfo, method);
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, v3);
    byte_40F033C = 1;
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
    v9 = sub_B0BA14(&v8->static_fields->OnCallback, v7, OnCallback);
    v10 = OnCallback == (System_Delegate_o *)v9;
    OnCallback = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CriWareErrorHandler_o *)sub_B173C8(v6);
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

  if ( (byte_40F033A & 1) == 0 )
  {
    sub_B16FFC(&CriWareErrorHandler_TypeInfo, method);
    byte_40F033A = 1;
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
  sub_B16F98(static_fields, (System_Int32_array **)value, v2, v3, v4, v5, v6, v7);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall CriWareErrorHandler_Callback__EndInvoke(
        CriWareErrorHandler_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  CriWareErrorHandler_Callback_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  CriWareErrorHandler_Callback_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
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
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, message, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = message->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(message, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(message, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = message->klass;
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(message, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(message, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(message, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, message, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, message, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                message,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, message, v28);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall CriWareErrorHandler_ErrorCallbackFunc__EndInvoke(
        CriWareErrorHandler_ErrorCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  CriWareErrorHandler_ErrorCallbackFunc_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  CriWareErrorHandler_ErrorCallbackFunc_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
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
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, errmsg, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = errmsg->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&errmsg->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&errmsg->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(errmsg, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&errmsg->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(errmsg, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = errmsg->klass;
                if ( *(_WORD *)&errmsg->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&errmsg->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(errmsg, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(errmsg, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&errmsg->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  errmsg,
                  *((_QWORD *)&errmsg->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(errmsg, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, errmsg, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, errmsg, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                errmsg,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, errmsg, v28);
    }
  }
}