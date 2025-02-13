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
  if ( !qword_4BD6938 )
  {
    v11[0] = (__int64)"cri_ware_unity";
    v11[1] = 14LL;
    v11[2] = (__int64)"CRIWARE3D9A5BE6";
    v11[3] = 15LL;
    v12 = 24;
    v11[4] = 0x200000000LL;
    v13 = 0;
    qword_4BD6938 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1C22414(
                                                                              v11,
                                                                              enable_mana_decryption,
                                                                              func,
                                                                              obj,
                                                                              method);
  }
  v9 = sub_1C2240C(func, enable_mana_decryption, func, *(_QWORD *)&obj, method);
  return qword_4BD6938(enable_atom_decryption, enable_mana_decryption, v9, v5);
}


uint64_t __fastcall CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  if ( (byte_4BD6936 & 1) == 0 )
  {
    sub_1C21E38(&CriWareDecrypter_TypeInfo);
    byte_4BD6936 = 1;
  }
  return CriWareDecrypter_TypeInfo->static_fields->temporalStorage;
}


bool __fastcall CriWareDecrypter__Initialize(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !config )
    sub_1C22094(0LL, method);
  return CriWareDecrypter__Initialize_30778168(
           config->fields.key,
           config->fields.authenticationFile,
           config->fields.enableAtomDecryption,
           config->fields.enableManaDecryption,
           v2);
}


bool __fastcall CriWareDecrypter__Initialize_30778168(
        System_String_o *key,
        System_String_o *authenticationFile,
        bool enableAtomDecryption,
        bool enableManaDecryption,
        const MethodInfo *method)
{
  CriFsPlugin_c *v9; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  uint64_t v12; // x23
  System_String_o *streamingAssetsPath; // x22
  CriWareDecrypter_CallbackFromNativeDelegate_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  bool result; // w0

  if ( (byte_4BD6935 & 1) == 0 )
  {
    sub_1C21E38(&CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&CriFsPlugin_TypeInfo);
    sub_1C21E38(&Method_CriWareDecrypter_CallbackFromNative__);
    sub_1C21E38(&CriWareDecrypter_TypeInfo);
    sub_1C21E38(&System_IO_Path_TypeInfo);
    byte_4BD6935 = 1;
  }
  v9 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v9 = (CriFsPlugin_c *)((__int64 (*)(void))j_il2cpp_runtime_class_init_0)();
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v9) )
    return 0;
  v10 = CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  if ( !v10 )
    return 0;
  if ( !key )
    sub_1C22094(v10, v11);
  v12 = 0xD47EB533AEF7E5LL;
  if ( key->fields._stringLength )
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    v12 = System_Convert__ToUInt64_63776224(key, 0LL) ^ 0xD47EB533AEF7E5LL;
  }
  if ( CriWare_Common__IsStreamingAssetsPath(authenticationFile, 0LL) )
  {
    streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0LL);
    if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    System_IO_Path__Combine(streamingAssetsPath, authenticationFile, 0LL);
  }
  CriWareDecrypter_TypeInfo->static_fields->temporalStorage = v12;
  v14 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_1C22084(CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
  CriWareDecrypter_CallbackFromNativeDelegate___ctor(v14, 0LL, Method_CriWareDecrypter_CallbackFromNative__, v15);
  CriWareDecrypter__CRIWARE3D9A5BE6(enableAtomDecryption, enableManaDecryption, v14, 0, v16);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5951C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A594CC;
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
  if ( (byte_4BD6940 & 1) == 0 )
  {
    sub_1C21E38(&IntPtr_TypeInfo);
    byte_4BD6940 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C21DF0(result, 0LL, method) )
    sub_1C22094(0LL, v3);
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