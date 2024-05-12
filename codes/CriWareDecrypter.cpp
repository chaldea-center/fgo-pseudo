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
  if ( !qword_43816E0 )
  {
    v11[0] = (__int64)"cri_ware_unity";
    v11[1] = 14LL;
    v11[2] = (__int64)"CRIWARE3D9A5BE6";
    v11[3] = 15LL;
    v11[4] = 0x200000000LL;
    v12 = 24;
    v13 = 0;
    qword_43816E0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_B77A48(
                                                                              v11,
                                                                              enable_mana_decryption,
                                                                              func,
                                                                              obj,
                                                                              method);
  }
  v9 = sub_B77A40(func, enable_mana_decryption, func, *(_QWORD *)&obj, method);
  return qword_43816E0(enable_atom_decryption, enable_mana_decryption, v9, v5);
}


uint64_t __fastcall CriWareDecrypter__CallbackFromNative(intptr_t ptr1, const MethodInfo *method)
{
  CriWareDecrypter_c *v2; // x0

  if ( (byte_43816DF & 1) == 0 )
  {
    sub_B775C4(&CriWareDecrypter_TypeInfo, method);
    byte_43816DF = 1;
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
  if ( (byte_43816DD & 1) == 0 )
  {
    config = (CriWareDecrypterConfig_o *)sub_B775C4(&CriWareDecrypter_TypeInfo, method);
    byte_43816DD = 1;
  }
  if ( !v3 )
    sub_B7769C(config, method);
  key = v3->fields.key;
  authenticationFile = v3->fields.authenticationFile;
  enableAtomDecryption = v3->fields.enableAtomDecryption;
  enableManaDecryption = v3->fields.enableManaDecryption;
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0();
  }
  return CriWareDecrypter__Initialize_14647912(key, authenticationFile, enableAtomDecryption, enableManaDecryption, v2);
}


bool __fastcall CriWareDecrypter__Initialize_14647912(
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

  if ( (byte_43816DE & 1) == 0 )
  {
    sub_B775C4(&CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo, authenticationFile);
    sub_B775C4(&CriWare_Common_TypeInfo, v9);
    sub_B775C4(&System_Convert_TypeInfo, v10);
    sub_B775C4(&CriFsPlugin_TypeInfo, v11);
    sub_B775C4(&Method_CriWareDecrypter_CallbackFromNative__, v12);
    sub_B775C4(&CriWareDecrypter_TypeInfo, v13);
    sub_B775C4(&IntPtr_TypeInfo, v14);
    sub_B775C4(&System_IO_Path_TypeInfo, v15);
    byte_43816DE = 1;
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
    sub_B7769C(v17, v18);
  v19 = 0xD47EB533AEF7E5LL;
  if ( key->fields.m_stringLength )
  {
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    }
    v19 = System_Convert__ToUInt64_42785140(key, 0LL) ^ 0xD47EB533AEF7E5LL;
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
  v22 = (CriWareDecrypter_CallbackFromNativeDelegate_o *)sub_B77694(CriWareDecrypter_CallbackFromNativeDelegate_TypeInfo);
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
  sub_B77560(
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
  if ( (byte_43915DA & 1) == 0 )
  {
    sub_B775C4(&IntPtr_TypeInfo);
    byte_43915DA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


uint64_t __fastcall CriWareDecrypter_CallbackFromNativeDelegate__EndInvoke(
        CriWareDecrypter_CallbackFromNativeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  v3 = sub_B7756C(result, 0LL, method);
  if ( !v3 )
    sub_B7769C(0LL, v4);
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
        sub_B77680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&ptr1);
      if ( (sub_B775F4(v21) & 1) == 0 )
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
      v23 = sub_B775EC(v21);
      v24 = sub_B779F0(v21);
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
            v17 = sub_B0F4C0(v20, v26, v27);
          }
          v15 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (__int64 (__fastcall **)(__int64 *, __int64, _QWORD))sub_B77674(v15, v21);
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
            v14 = sub_B0F4C0(v20, class_0, v9);
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