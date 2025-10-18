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

  if ( !off_4C3C6A8 )
  {
    v11[0] = "cri_ware_unity";
    v11[1] = 14;
    v11[2] = "CRIWARE3D9A5BE6";
    v11[3] = 15;
    v12 = 24;
    v11[4] = 0x200000000LL;
    v13 = 0;
    off_4C3C6A8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1C37634(v11);
  }
  v9 = sub_1C3762C(func, enable_mana_decryption, func, obj, method);
  return off_4C3C6A8(enable_atom_decryption, enable_mana_decryption, v9, obj);
}


uint64_t CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  if ( (byte_4C3C6A6 & 1) == 0 )
  {
    sub_1C37058(&CriWareDecrypter_TypeInfo);
    byte_4C3C6A6 = 1;
  }
  return CriWareDecrypter_TypeInfo->static_fields->temporalStorage;
}


bool CriWareDecrypter__Initialize(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !config )
    sub_1C372B4(0);
  return CriWareDecrypter__Initialize_30858344(
           config->fields.key,
           config->fields.authenticationFile,
           config->fields.enableAtomDecryption,
           config->fields.enableManaDecryption,
           v2);
}


bool CriWareDecrypter__Initialize_30858344(
        System_String_o *key,
        System_String_o *authenticationFile,
        bool enableAtomDecryption,
        bool enableManaDecryption,
        const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  _BOOL8 v10; // x0
  uint64_t v11; // x23
  System_String_o *streamingAssetsPath; // x22
  CriWareDecrypter_CallbackFromNativeDelegate_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4
  bool result; // w0

  if ( (byte_4C3C6A5 & 1) == 0 )
  {
    sub_1C37058(&CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&CriFsPlugin_TypeInfo);
    sub_1C37058(&Method_CriWareDecrypter_CallbackFromNative__);
    sub_1C37058(&CriWareDecrypter_TypeInfo);
    sub_1C37058(&System_IO_Path_TypeInfo);
    byte_4C3C6A5 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
    return 0;
  v10 = CriWare_Common__CheckBinaryVersionCompatibility(0);
  if ( !v10 )
    return 0;
  if ( !key )
    sub_1C372B4(v10);
  v11 = 0xD47EB533AEF7E5LL;
  if ( key->fields._stringLength )
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v11 = System_Convert__ToUInt64_64653308(key, 0) ^ 0xD47EB533AEF7E5LL;
  }
  if ( CriWare_Common__IsStreamingAssetsPath(authenticationFile, 0) )
  {
    streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0);
    if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    System_IO_Path__Combine(streamingAssetsPath, authenticationFile, 0);
  }
  CriWareDecrypter_TypeInfo->static_fields->temporalStorage = v11;
  v13 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_1C372A4(CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
  CriWareDecrypter_CallbackFromNativeDelegate___ctor(v13, 0, Method_CriWareDecrypter_CallbackFromNative__, v14);
  CriWareDecrypter__CRIWARE3D9A5BE6(enableAtomDecryption, enableManaDecryption, v13, 0, v15);
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
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A708BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7086C;
}


System_IAsyncResult_o *CriWareDecrypter_CallbackFromNativeDelegate__BeginInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  intptr_t v13; // [xsp+18h] [xbp-38h] BYREF

  v13 = ptr1;
  if ( (byte_4C3C6B0 & 1) == 0 )
  {
    sub_1C37058(&IntPtr_TypeInfo);
    byte_4C3C6B0 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


uint64_t CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  if ( !sub_1C37010(result, 0, method) )
    sub_1C372B4(0);
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