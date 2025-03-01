// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CriWareDecrypter__CRIWARE3D9A5BE6(
        bool enable_atom_decryption,
        bool enable_mana_decryption,
        CriWareDecrypter_CallbackFromNativeDelegate_o *func,
        intptr_t obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v9; // x0
  __int64 v11[5]; // [xsp+0h] [xbp-60h] BYREF
  int v12; // [xsp+28h] [xbp-38h]
  char v13; // [xsp+2Ch] [xbp-34h]

  v5 = *(_QWORD *)&obj;
  if ( !qword_4BF7B18 )
  {
    v11[0] = (__int64)"cri_ware_unity";
    v11[1] = 14LL;
    v11[2] = (__int64)"CRIWARE3D9A5BE6";
    v11[3] = 15LL;
    v12 = 24;
    v11[4] = 0x200000000LL;
    v13 = 0;
    qword_4BF7B18 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1C2E708(
                                                                              v11,
                                                                              enable_mana_decryption,
                                                                              func,
                                                                              obj,
                                                                              method);
  }
  v9 = sub_1C2E700(func, enable_mana_decryption, func, *(_QWORD *)&obj, method);
  return qword_4BF7B18(enable_atom_decryption, enable_mana_decryption, v9, v5);
}


uint64_t __fastcall CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  if ( (byte_4BF7B16 & 1) == 0 )
  {
    sub_1C2E12C(&CriWareDecrypter_TypeInfo, method);
    byte_4BF7B16 = 1;
  }
  return CriWareDecrypter_TypeInfo->static_fields->temporalStorage;
}


bool __fastcall CriWareDecrypter__Initialize(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !config )
    sub_1C2E388(0LL, method);
  return CriWareDecrypter__Initialize_30828068(
           config->fields.key,
           config->fields.authenticationFile,
           config->fields.enableAtomDecryption,
           config->fields.enableManaDecryption,
           v2);
}


bool __fastcall CriWareDecrypter__Initialize_30828068(
        System_String_o *key,
        System_String_o *authenticationFile,
        bool enableAtomDecryption,
        bool enableManaDecryption,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CriFsPlugin_c *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  uint64_t v32; // x23
  System_String_o *streamingAssetsPath; // x22
  CriWareDecrypter_CallbackFromNativeDelegate_o *v34; // x21
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x4
  bool result; // w0

  if ( (byte_4BF7B15 & 1) == 0 )
  {
    sub_1C2E12C(
      &CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo,
      authenticationFile,
      enableAtomDecryption,
      enableManaDecryption,
      method);
    sub_1C2E12C(&System_Convert_TypeInfo, v9, v10, v11, v12);
    sub_1C2E12C(&CriFsPlugin_TypeInfo, v13, v14, v15, v16);
    sub_1C2E12C(&Method_CriWareDecrypter_CallbackFromNative__, v17, v18, v19, v20);
    sub_1C2E12C(&CriWareDecrypter_TypeInfo, v21, v22, v23, v24);
    sub_1C2E12C(&System_IO_Path_TypeInfo, v25, v26, v27, v28);
    byte_4BF7B15 = 1;
  }
  v29 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v29 = (CriFsPlugin_c *)((__int64 (*)(void))j_il2cpp_runtime_class_init_0)();
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v29) )
    return 0;
  v30 = CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  if ( !v30 )
    return 0;
  if ( !key )
    sub_1C2E388(v30, v31);
  v32 = 0xD47EB533AEF7E5LL;
  if ( key->fields._stringLength )
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    v32 = System_Convert__ToUInt64_63896332(key, 0LL) ^ 0xD47EB533AEF7E5LL;
  }
  if ( CriWare_Common__IsStreamingAssetsPath(authenticationFile, 0LL) )
  {
    streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0LL);
    if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    System_IO_Path__Combine(streamingAssetsPath, authenticationFile, 0LL);
  }
  CriWareDecrypter_TypeInfo->static_fields->temporalStorage = v32;
  v34 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_1C2E378(CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
  CriWareDecrypter_CallbackFromNativeDelegate___ctor(v34, 0LL, Method_CriWareDecrypter_CallbackFromNative__, v35);
  CriWareDecrypter__CRIWARE3D9A5BE6(enableAtomDecryption, enableManaDecryption, v34, 0, v36);
  result = 1;
  CriWareDecrypter_TypeInfo->static_fields->temporalStorage = 0LL;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CriWareDecrypter_CallbackFromNativeDelegate___ctor(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A659BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6596C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CriWareDecrypter_CallbackFromNativeDelegate__BeginInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v10; // [xsp+18h] [xbp-38h] BYREF

  v10 = *(_QWORD *)&ptr1;
  if ( (byte_4BF7B20 & 1) == 0 )
  {
    sub_1C2E12C(&IntPtr_TypeInfo, *(_QWORD *)&ptr1);
    byte_4BF7B20 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v9, callback, object);
}


uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C2E0E4(result, 0LL, method) )
    sub_1C2E388(0LL, v3);
  return *(_QWORD *)j_il2cpp_object_unbox_0();
}


uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__Invoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, intptr_t, _QWORD))this->fields.m_target)(
           this->fields.original_method_info,
           ptr1,
           *(_QWORD *)&this->fields.extra_arg);
}