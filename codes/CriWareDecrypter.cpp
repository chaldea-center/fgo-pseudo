void __fastcall CriWareDecrypter___cctor(const MethodInfo *method)
{
  ;
}


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
  if ( !qword_417DF10 )
  {
    v11[0] = (__int64)"cri_ware_unity";
    v11[1] = 14LL;
    v11[2] = (__int64)"CRIWARE3D9A5BE6";
    v11[3] = 15LL;
    v11[4] = 0x200000000LL;
    v12 = 24;
    v13 = 0;
    qword_417DF10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_B2C7E0(
                                                                              v11,
                                                                              enable_mana_decryption,
                                                                              func,
                                                                              obj,
                                                                              method);
  }
  v9 = sub_B2C7D8(func, enable_mana_decryption, func, *(_QWORD *)&obj, method);
  return qword_417DF10(enable_atom_decryption, enable_mana_decryption, v9, v5);
}


uint64_t __fastcall CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  CriWareDecrypter_c *v2; // x0

  if ( (byte_417DF0F & 1) == 0 )
  {
    sub_B2C35C(&CriWareDecrypter_TypeInfo, method);
    byte_417DF0F = 1;
  }
  v2 = CriWareDecrypter_TypeInfo;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    v2 = CriWareDecrypter_TypeInfo;
  }
  return v2->static_fields->temporalStorage;
}


bool __fastcall CriWareDecrypter__Initialize(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CriWareDecrypterConfig_o *v3; // x19
  System_String_o *authenticationFile; // x20
  System_String_o *key; // x21
  _BOOL4 enableAtomDecryption; // w22
  _BOOL4 enableManaDecryption; // w19

  v3 = config;
  if ( (byte_417DF0D & 1) == 0 )
  {
    config = (CriWareDecrypterConfig_o *)sub_B2C35C(&CriWareDecrypter_TypeInfo, method);
    byte_417DF0D = 1;
  }
  if ( !v3 )
    sub_B2C434(config, method);
  key = v3->fields.key;
  authenticationFile = v3->fields.authenticationFile;
  enableAtomDecryption = v3->fields.enableAtomDecryption;
  enableManaDecryption = v3->fields.enableManaDecryption;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0();
  }
  return CriWareDecrypter__Initialize_14247272(key, authenticationFile, enableAtomDecryption, enableManaDecryption, v2);
}


bool __fastcall CriWareDecrypter__Initialize_14247272(
        System_String_o *key,
        System_String_o *authenticationFile,
        bool enableAtomDecryption,
        bool enableManaDecryption,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  CriFsPlugin_c *v16; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  uint64_t v19; // x23
  System_String_o *streamingAssetsPath; // x22
  CriWareDecrypter_c *v21; // x0
  CriWareDecrypter_CallbackFromNativeDelegate_o *v22; // x21
  const MethodInfo *v23; // x4
  bool result; // w0

  if ( (byte_417DF0E & 1) == 0 )
  {
    sub_B2C35C(&CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo, authenticationFile);
    sub_B2C35C(&CriWare_Common_TypeInfo, v9);
    sub_B2C35C(&System_Convert_TypeInfo, v10);
    sub_B2C35C(&CriFsPlugin_TypeInfo, v11);
    sub_B2C35C(&Method_CriWareDecrypter_CallbackFromNative__, v12);
    sub_B2C35C(&CriWareDecrypter_TypeInfo, v13);
    sub_B2C35C(&IntPtr_TypeInfo, v14);
    sub_B2C35C(&System_IO_Path_TypeInfo, v15);
    byte_417DF0E = 1;
  }
  v16 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v16 = (CriFsPlugin_c *)((__int64 (*)(void))j_il2cpp_runtime_class_init_0)();
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v16) )
    return 0;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    ((void (*)(void))j_il2cpp_runtime_class_init_0)();
  }
  v17 = CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  if ( !v17 )
    return 0;
  if ( !key )
    sub_B2C434(v17, v18);
  v19 = 0xD47EB533AEF7E5LL;
  if ( key->fields.m_stringLength )
  {
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    }
    v19 = System_Convert__ToUInt64_42137064(key, 0LL) ^ 0xD47EB533AEF7E5LL;
  }
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    ((void (*)(void))j_il2cpp_runtime_class_init_0)();
  }
  if ( CriWare_Common__IsStreamingAssetsPath(authenticationFile, 0LL) )
  {
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    }
    streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0LL);
    if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_IO_Path_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    }
    System_IO_Path__Combine(streamingAssetsPath, authenticationFile, 0LL);
  }
  v21 = CriWareDecrypter_TypeInfo;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    v21 = CriWareDecrypter_TypeInfo;
  }
  v21->static_fields->temporalStorage = v19;
  v22 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_B2C42C(CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
  CriWareDecrypter_CallbackFromNativeDelegate___ctor(v22, 0LL, Method_CriWareDecrypter_CallbackFromNative__, 0LL);
  CriWareDecrypter__CRIWARE3D9A5BE6(enableAtomDecryption, enableManaDecryption, v22, 0, v23);
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


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CriWareDecrypter_CallbackFromNativeDelegate__BeginInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v10; // [xsp+18h] [xbp-28h] BYREF

  v10 = *(_QWORD *)&ptr1;
  if ( (byte_418D792 & 1) == 0 )
  {
    sub_B2C35C(&IntPtr_TypeInfo, *(_QWORD *)&ptr1);
    byte_418D792 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  v3 = sub_B2C304(result, 0LL, method);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  return *(_QWORD *)j_il2cpp_object_unbox_0(v3);
}


// local variable allocation has failed, the output may be wrong!
uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__Invoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x20
  __int64 v7; // x24
  CriWareDecrypter_CallbackFromNativeDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  uint64_t result; // x0
  __int64 v19; // x0
  __int64 (__fastcall **v20)(__int64 *, __int64, _QWORD); // x0
  CriWareDecrypter_CallbackFromNativeDelegate_o *v21; // x8
  __int64 *v22; // x21
  __int64 v23; // x22
  __int64 (__fastcall *v24)(__int64, __int64); // x23
  char v25; // w23
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  CriWareDecrypter_CallbackFromNativeDelegate_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  v6 = *(_QWORD *)&ptr1;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CriWareDecrypter_CallbackFromNativeDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(__int64 (__fastcall **)(__int64, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&ptr1, method, v3);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 1 )
        goto LABEL_36;
      result = v24(v6, v23);
LABEL_37:
      if ( ++v9 == v7 )
        return result;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v29, v30, v27);
          }
          v17 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (__int64 (__fastcall **)(__int64 *, __int64, _QWORD))sub_B2C40C(v17, v23);
        result = (*v20)(v22, v6, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v22, class_0, v10, v12);
          }
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))v16)(v22, v6, *(_QWORD *)(v16 + 8));
        }
        else
        {
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v22
                                                                         + 16LL * *(unsigned __int16 *)(v23 + 72)
                                                                         + 312))(
                     v22,
                     v6,
                     *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    result = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v24)(v22, v6, v23);
    goto LABEL_37;
  }
  return 0LL;
}