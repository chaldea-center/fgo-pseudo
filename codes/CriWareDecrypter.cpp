// local variable allocation has failed, the output may be wrong!
int32_t CriWareDecrypter__CRIWARE3D9A5BE6(
        bool enable_atom_decryption,
        bool enable_mana_decryption,
        CriWareDecrypter_CallbackFromNativeDelegate_o *func,
        intptr_t obj,
        const MethodInfo *method)
{
  __int64 v9; // x0
  _QWORD v11[5]; // [xsp+0h] [xbp-60h] BYREF
  int v12; // [xsp+28h] [xbp-38h]
  char v13; // [xsp+2Ch] [xbp-34h]

  if ( !off_4C20B28 )
  {
    v11[0] = "cri_ware_unity";
    v11[1] = 14;
    v11[2] = "CRIWARE3D9A5BE6";
    v11[3] = 15;
    v12 = 24;
    v11[4] = 0x200000000LL;
    v13 = 0;
    off_4C20B28 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1C2DA6C(
                                                                            v11,
                                                                            enable_mana_decryption,
                                                                            func,
                                                                            obj,
                                                                            method);
  }
  v9 = sub_1C2DA64(func, enable_mana_decryption, func, obj, method);
  return off_4C20B28(enable_atom_decryption, enable_mana_decryption, v9, obj);
}


uint64_t CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  if ( (byte_4C20B26 & 1) == 0 )
  {
    sub_1C2D490(&CriWareDecrypter_TypeInfo);
    byte_4C20B26 = 1;
  }
  return CriWareDecrypter_TypeInfo->static_fields->temporalStorage;
}


bool CriWareDecrypter__Initialize(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !config )
    sub_1C2D6EC(0, method);
  return CriWareDecrypter__Initialize_30818472(
           config->fields.key,
           config->fields.authenticationFile,
           config->fields.enableAtomDecryption,
           config->fields.enableManaDecryption,
           v2);
}


bool CriWareDecrypter__Initialize_30818472(
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

  if ( (byte_4C20B25 & 1) == 0 )
  {
    sub_1C2D490(&CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&CriFsPlugin_TypeInfo);
    sub_1C2D490(&Method_CriWareDecrypter_CallbackFromNative__);
    sub_1C2D490(&CriWareDecrypter_TypeInfo);
    sub_1C2D490(&System_IO_Path_TypeInfo);
    byte_4C20B25 = 1;
  }
  v9 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v9 = (CriFsPlugin_c *)((__int64 (*)(void))j_il2cpp_runtime_class_init_0)();
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v9) )
    return 0;
  v10 = CriWare_Common__CheckBinaryVersionCompatibility(0);
  if ( !v10 )
    return 0;
  if ( !key )
    sub_1C2D6EC(v10, v11);
  v12 = 0xD47EB533AEF7E5LL;
  if ( key->fields._stringLength )
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    v12 = System_Convert__ToUInt64_64550260(key, 0) ^ 0xD47EB533AEF7E5LL;
  }
  if ( CriWare_Common__IsStreamingAssetsPath(authenticationFile, 0) )
  {
    streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0);
    if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    System_IO_Path__Combine(streamingAssetsPath, authenticationFile, 0);
  }
  CriWareDecrypter_TypeInfo->static_fields->temporalStorage = v12;
  v14 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_1C2D6DC(CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
  CriWareDecrypter_CallbackFromNativeDelegate___ctor(v14, 0, Method_CriWareDecrypter_CallbackFromNative__, v15);
  CriWareDecrypter__CRIWARE3D9A5BE6(enableAtomDecryption, enableManaDecryption, v14, 0, v16);
  result = 1;
  CriWareDecrypter_TypeInfo->static_fields->temporalStorage = 0;
  return result;
}


void CriWareDecrypter_CallbackFromNativeDelegate___ctor(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A67214;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A671C4;
}


System_IAsyncResult_o *CriWareDecrypter_CallbackFromNativeDelegate__BeginInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  intptr_t v10; // [xsp+18h] [xbp-38h] BYREF

  v10 = ptr1;
  if ( (byte_4C20B30 & 1) == 0 )
  {
    sub_1C2D490(&IntPtr_TypeInfo);
    byte_4C20B30 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


uint64_t CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C2D448(result, 0, method) )
    sub_1C2D6EC(0, v3);
  return *(_QWORD *)j_il2cpp_object_unbox_0();
}


uint64_t CriWareDecrypter_CallbackFromNativeDelegate__Invoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, intptr_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           ptr1,
           this->fields.method);
}