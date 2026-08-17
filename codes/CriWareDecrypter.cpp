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

  if ( !off_5969840 )
  {
    v11[0] = "cri_ware_unity";
    v11[1] = 14;
    v11[2] = "CRIWARE3D9A5BE6";
    v11[3] = 15;
    v11[4] = 0x200000000LL;
    v12 = 24;
    v13 = 0;
    off_5969840 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_2214114(v11);
  }
  v9 = sub_221410C(func, enable_mana_decryption, func, obj, method);
  return off_5969840(enable_atom_decryption, enable_mana_decryption, v9, obj);
}


uint64_t CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  if ( (byte_596983D & 1) == 0 )
  {
    sub_2213A60(&CriWareDecrypter_TypeInfo);
    byte_596983D = 1;
  }
  return CriWareDecrypter_TypeInfo->static_fields->temporalStorage;
}


bool CriWareDecrypter__Initialize(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !config )
    sub_2213CDC(0, method);
  return CriWareDecrypter__Initialize_37029140(
           config->fields.key,
           config->fields.authenticationFile,
           config->fields.enableAtomDecryption,
           config->fields.enableManaDecryption,
           v2);
}


// local variable allocation has failed, the output may be wrong!
bool CriWareDecrypter__Initialize_37029140(
        System_String_o *key,
        System_String_o *authenticationFile,
        bool enableAtomDecryption,
        bool enableManaDecryption,
        const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  uint64_t v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *streamingAssetsPath; // x22
  CriWareDecrypter_CallbackFromNativeDelegate_c *v17; // x0
  CriWareDecrypter_CallbackFromNativeDelegate_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4
  bool result; // w0

  if ( (byte_596983C & 1) == 0 )
  {
    sub_2213A60(&CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&CriFsPlugin_TypeInfo);
    sub_2213A60(&Method_CriWareDecrypter_CallbackFromNative__);
    sub_2213A60(&CriWareDecrypter_TypeInfo);
    sub_2213A60(&System_IO_Path_TypeInfo);
    byte_596983C = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(
                                CriFsPlugin_TypeInfo,
                                authenticationFile,
                                enableAtomDecryption);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
    return 0;
  v10 = CriWare_Common__CheckBinaryVersionCompatibility(0);
  if ( !v10 )
    return 0;
  if ( !key )
    sub_2213CDC(v10, v11);
  v13 = 0xD47EB533AEF7E5LL;
  if ( key->fields._stringLength )
  {
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v11, v12);
    v13 = System_Convert__ToUInt64_76690948(key, 0) ^ 0xD47EB533AEF7E5LL;
  }
  if ( CriWare_Common__IsStreamingAssetsPath(authenticationFile, 0) )
  {
    streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0);
    if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v14, v15);
    System_IO_Path__Combine(streamingAssetsPath, authenticationFile, 0);
  }
  v17 = CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo;
  CriWareDecrypter_TypeInfo->static_fields->temporalStorage = v13;
  v18 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_2213CCC(v17);
  CriWareDecrypter_CallbackFromNativeDelegate___ctor(v18, 0, Method_CriWareDecrypter_CallbackFromNative__, v19);
  CriWareDecrypter__CRIWARE3D9A5BE6(enableAtomDecryption, enableManaDecryption, v18, 0, v20);
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
  sub_2213A04(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFC938;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFC8E8;
}


System_IAsyncResult_o *CriWareDecrypter_CallbackFromNativeDelegate__BeginInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  intptr_t v10; // [xsp+18h] [xbp-28h] BYREF

  v9[1] = 0;
  v10 = ptr1;
  v9[0] = j_il2cpp_value_box_0(qword_5984358, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


uint64_t CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_2213A18(result, 0, method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return *(_QWORD *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
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