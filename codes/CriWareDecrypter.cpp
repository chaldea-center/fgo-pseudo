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
  if ( !qword_40F0330 )
  {
    v11[0] = (__int64)"cri_ware_unity";
    v11[1] = 14LL;
    v11[2] = (__int64)"CRIWARE3D9A5BE6";
    v11[3] = 15LL;
    v11[4] = 0x200000000LL;
    v12 = 24;
    v13 = 0;
    qword_40F0330 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_B17480(v11);
  }
  v9 = sub_B17478(func, enable_mana_decryption, func, *(_QWORD *)&obj, method);
  return qword_40F0330(enable_atom_decryption, enable_mana_decryption, v9, v5);
}


uint64_t __fastcall CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  CriWareDecrypter_c *v2; // x0

  if ( (byte_40F032F & 1) == 0 )
  {
    sub_B16FFC(&CriWareDecrypter_TypeInfo, method);
    byte_40F032F = 1;
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
  System_String_o *authenticationFile; // x20
  System_String_o *key; // x21
  _BOOL4 enableAtomDecryption; // w22
  _BOOL4 enableManaDecryption; // w19

  if ( (byte_40F032D & 1) == 0 )
  {
    sub_B16FFC(&CriWareDecrypter_TypeInfo, method);
    byte_40F032D = 1;
  }
  if ( !config )
    sub_B170D4();
  key = config->fields.key;
  authenticationFile = config->fields.authenticationFile;
  enableAtomDecryption = config->fields.enableAtomDecryption;
  enableManaDecryption = config->fields.enableManaDecryption;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
  }
  return CriWareDecrypter__Initialize_14149300(key, authenticationFile, enableAtomDecryption, enableManaDecryption, v2);
}


bool __fastcall CriWareDecrypter__Initialize_14149300(
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
  uint64_t v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_String_o *streamingAssetsPath; // x22
  CriWareDecrypter_c *v23; // x0
  CriWareDecrypter_CallbackFromNativeDelegate_o *v24; // x21
  const MethodInfo *v25; // x4
  bool result; // w0

  if ( (byte_40F032E & 1) == 0 )
  {
    sub_B16FFC(&CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo, authenticationFile);
    sub_B16FFC(&CriWare_Common_TypeInfo, v9);
    sub_B16FFC(&System_Convert_TypeInfo, v10);
    sub_B16FFC(&CriFsPlugin_TypeInfo, v11);
    sub_B16FFC(&Method_CriWareDecrypter_CallbackFromNative__, v12);
    sub_B16FFC(&CriWareDecrypter_TypeInfo, v13);
    sub_B16FFC(&IntPtr_TypeInfo, v14);
    sub_B16FFC(&System_IO_Path_TypeInfo, v15);
    byte_40F032E = 1;
  }
  v16 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v16) )
    return 0;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  if ( !CriWare_Common__CheckBinaryVersionCompatibility(0LL) )
    return 0;
  if ( !key )
    sub_B170D4();
  v17 = 0xD47EB533AEF7E5LL;
  if ( key->fields.m_stringLength )
  {
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v17 = System_Convert__ToUInt64_41751512(key, 0LL) ^ 0xD47EB533AEF7E5LL;
  }
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  if ( CriWare_Common__IsStreamingAssetsPath(authenticationFile, 0LL) )
  {
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
    }
    streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0LL);
    if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_IO_Path_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    }
    System_IO_Path__Combine(streamingAssetsPath, authenticationFile, 0LL);
  }
  v23 = CriWareDecrypter_TypeInfo;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    v23 = CriWareDecrypter_TypeInfo;
  }
  v23->static_fields->temporalStorage = v17;
  v24 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_B170CC(
                                                           CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo,
                                                           v18,
                                                           v19,
                                                           v20,
                                                           v21);
  CriWareDecrypter_CallbackFromNativeDelegate___ctor(v24, 0LL, Method_CriWareDecrypter_CallbackFromNative__, 0LL);
  CriWareDecrypter__CRIWARE3D9A5BE6(enableAtomDecryption, enableManaDecryption, v24, 0, v25);
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
  if ( (byte_40FF9FA & 1) == 0 )
  {
    sub_B16FFC(&IntPtr_TypeInfo, *(_QWORD *)&ptr1);
    byte_40FF9FA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0

  v3 = sub_B16FA4(result, 0LL, method);
  if ( !v3 )
    sub_B170D4();
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  uint64_t result; // x0
  __int64 v17; // x0
  __int64 (__fastcall **v18)(__int64 *, __int64, _QWORD); // x0
  CriWareDecrypter_CallbackFromNativeDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  __int64 (__fastcall *v22)(__int64, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  CriWareDecrypter_CallbackFromNativeDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  v5 = *(_QWORD *)&ptr1;
  if ( !v3 )
  {
    v7 = &v30;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(__int64 (__fastcall **)(__int64, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&ptr1, method);
      if ( (sub_B1702C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      result = v22(v5, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return result;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B17024(v21);
      v24 = sub_B17428(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AAFEF8(v20, v26, v27);
          }
          v15 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (__int64 (__fastcall **)(__int64 *, __int64, _QWORD))sub_B170AC(v15, v21);
        result = (*v18)(v20, v5, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v20, class_0, v9);
          }
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))v14)(v20, v5, *(_QWORD *)(v14 + 8));
        }
        else
        {
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v20
                                                                         + 16LL * *(unsigned __int16 *)(v21 + 72)
                                                                         + 312))(
                     v20,
                     v5,
                     *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    result = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v22)(v20, v5, v21);
    goto LABEL_37;
  }
  return 0LL;
}