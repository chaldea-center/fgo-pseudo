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
  if ( !qword_42DEE00 )
  {
    v11[0] = (__int64)"cri_ware_unity";
    v11[1] = 14LL;
    v11[2] = (__int64)"CRIWARE3D9A5BE6";
    v11[3] = 15LL;
    v11[4] = 0x200000000LL;
    v12 = 24;
    v13 = 0;
    qword_42DEE00 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_B5DA48(
                                                                              v11,
                                                                              enable_mana_decryption,
                                                                              func,
                                                                              obj,
                                                                              method);
  }
  v9 = sub_B5DA40(func, enable_mana_decryption, func, *(_QWORD *)&obj, method);
  return qword_42DEE00(enable_atom_decryption, enable_mana_decryption, v9, v5);
}


uint64_t __fastcall CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CriWareDecrypter_c *v4; // x0

  if ( (byte_42DEDFF & 1) == 0 )
  {
    sub_B5D5C4(&CriWareDecrypter_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEDFF = 1;
  }
  v4 = CriWareDecrypter_TypeInfo;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    v4 = CriWareDecrypter_TypeInfo;
  }
  return v4->static_fields->temporalStorage;
}


bool __fastcall CriWareDecrypter__Initialize(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  CriWareDecrypterConfig_o *v5; // x19
  System_String_o *authenticationFile; // x20
  System_String_o *key; // x21
  _BOOL4 enableAtomDecryption; // w22
  _BOOL4 enableManaDecryption; // w19

  v5 = config;
  if ( (byte_42DEDFD & 1) == 0 )
  {
    config = (CriWareDecrypterConfig_o *)sub_B5D5C4(&CriWareDecrypter_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEDFD = 1;
  }
  if ( !v5 )
    sub_B5D69C(config, method);
  key = v5->fields.key;
  authenticationFile = v5->fields.authenticationFile;
  enableAtomDecryption = v5->fields.enableAtomDecryption;
  enableManaDecryption = v5->fields.enableManaDecryption;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0();
  }
  return CriWareDecrypter__Initialize_14533740(key, authenticationFile, enableAtomDecryption, enableManaDecryption, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CriWareDecrypter__Initialize_14533740(
        System_String_o *key,
        System_String_o *authenticationFile,
        bool enableAtomDecryption,
        bool enableManaDecryption,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  CriFsPlugin_c *v30; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  uint64_t v33; // x23
  System_String_o *streamingAssetsPath; // x22
  CriWareDecrypter_c *v35; // x0
  CriWareDecrypter_CallbackFromNativeDelegate_o *v36; // x21
  const MethodInfo *v37; // x4
  bool result; // w0

  if ( (byte_42DEDFE & 1) == 0 )
  {
    sub_B5D5C4(
      &CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo,
      (_DWORD)authenticationFile,
      enableAtomDecryption,
      enableManaDecryption);
    sub_B5D5C4(&CriWare_Common_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Convert_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CriFsPlugin_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_CriWareDecrypter_CallbackFromNative__, v18, v19, v20);
    sub_B5D5C4(&CriWareDecrypter_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&IntPtr_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v27, v28, v29);
    byte_42DEDFE = 1;
  }
  v30 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v30 = (CriFsPlugin_c *)((__int64 (*)(void))j_il2cpp_runtime_class_init_0)();
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v30) )
    return 0;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    ((void (*)(void))j_il2cpp_runtime_class_init_0)();
  }
  v31 = CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  if ( !v31 )
    return 0;
  if ( !key )
    sub_B5D69C(v31, v32);
  v33 = 0xD47EB533AEF7E5LL;
  if ( key->fields.m_stringLength )
  {
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    }
    v33 = System_Convert__ToUInt64_42791016(key, 0LL) ^ 0xD47EB533AEF7E5LL;
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
  v35 = CriWareDecrypter_TypeInfo;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    v35 = CriWareDecrypter_TypeInfo;
  }
  v35->static_fields->temporalStorage = v33;
  v36 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_B5D694(CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
  CriWareDecrypter_CallbackFromNativeDelegate___ctor(v36, 0LL, Method_CriWareDecrypter_CallbackFromNative__, 0LL);
  CriWareDecrypter__CRIWARE3D9A5BE6(enableAtomDecryption, enableManaDecryption, v36, 0, v37);
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
  if ( (byte_42EE912 & 1) == 0 )
  {
    sub_B5D5C4(&IntPtr_TypeInfo, ptr1, (_DWORD)callback, object);
    byte_42EE912 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  v3 = sub_B5D56C(result, 0LL, method);
  if ( !v3 )
    sub_B5D69C(0LL, v4);
  return *(_QWORD *)j_il2cpp_object_unbox_0(v3);
}


// local variable allocation has failed, the output may be wrong!
uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__Invoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        intptr_t ptr1,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x20
  __int64 v6; // x24
  CriWareDecrypter_CallbackFromNativeDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  uint64_t result; // x0
  __int64 v18; // x0
  __int64 (__fastcall **v19)(__int64 *, __int64, _QWORD); // x0
  CriWareDecrypter_CallbackFromNativeDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  __int64 (__fastcall *v23)(__int64, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CriWareDecrypter_CallbackFromNativeDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  v5 = *(_QWORD *)&ptr1;
  if ( !v3 )
  {
    v7 = &v32;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CriWareDecrypter_CallbackFromNativeDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(__int64 (__fastcall **)(__int64, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&ptr1, method);
      if ( (sub_B5D5F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      result = v23(v5, v22);
LABEL_37:
      if ( ++v8 == v6 )
        return result;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B5D5EC(v22);
      v25 = sub_B5D9F0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AF54C0(v21, v28, v29, v26);
          }
          v16 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (__int64 (__fastcall **)(__int64 *, __int64, _QWORD))sub_B5D674(v16, v22);
        result = (*v19)(v21, v5, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v21, class_0, v9, v11);
          }
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))v15)(v21, v5, *(_QWORD *)(v15 + 8));
        }
        else
        {
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v21
                                                                         + 16LL * *(unsigned __int16 *)(v22 + 72)
                                                                         + 312))(
                     v21,
                     v5,
                     *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    result = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v23)(v21, v5, v22);
    goto LABEL_37;
  }
  return 0LL;
}