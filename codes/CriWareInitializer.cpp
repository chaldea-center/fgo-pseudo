void __fastcall CriWareInitializer___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall CriWareInitializer___ctor(CriWareInitializer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CriFsConfig_o *v14; // x20
  const MethodInfo *v15; // x1
  CriAtomConfig_o *v16; // x20
  CriManaConfig_o *v17; // x20
  const MethodInfo *v18; // x1
  CriWareDecrypterConfig_o *v19; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_42DEE61 & 1) == 0 )
  {
    sub_B5D5C4(&CriAtomConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CriFsConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CriManaConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CriWareDecrypterConfig_TypeInfo, v11, v12, v13);
    byte_42DEE61 = 1;
  }
  LOBYTE(this->fields.fileSystemConfig) = 1;
  v14 = (CriFsConfig_o *)sub_B5D694(CriFsConfig_TypeInfo);
  CriFsConfig___ctor(v14, v15);
  *(_QWORD *)&this->fields.initializesAtom = v14;
  sub_B5D560(&this->fields.initializesAtom);
  LOBYTE(this->fields.atomConfig) = 1;
  v16 = (CriAtomConfig_o *)sub_B5D694(CriAtomConfig_TypeInfo);
  CriAtomConfig___ctor(v16, 0LL);
  *(_QWORD *)&this->fields.initializesMana = v16;
  sub_B5D560(&this->fields.initializesMana);
  LOBYTE(this->fields.manaConfig) = 1;
  v17 = (CriManaConfig_o *)sub_B5D694(CriManaConfig_TypeInfo);
  CriManaConfig___ctor(v17, v18);
  *(_QWORD *)&this->fields.useDecrypter = v17;
  sub_B5D560(&this->fields.useDecrypter);
  v19 = (CriWareDecrypterConfig_o *)sub_B5D694(CriWareDecrypterConfig_TypeInfo);
  CriWareDecrypterConfig___ctor(v19, v20);
  *(_QWORD *)&this->fields.dontInitializeOnAwake = v19;
  sub_B5D560(&this->fields.dontInitializeOnAwake);
  CriMonoBehaviour___ctor((CriMonoBehaviour_o *)this, v21);
}


void __fastcall CriWareInitializer__AddAudioEffectInterface(intptr_t effect_interface, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  System_Collections_Generic_List_IntPtr__o *effect_interface_list; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42DEE5C & 1) == 0 )
  {
    sub_B5D5C4(&CriAtomPlugin_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IntPtr__Add__, v5, v6, v7);
    byte_42DEE5C = 1;
  }
  effect_interface_list = 0LL;
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  if ( CriAtomPlugin__GetAudioEffectInterfaceList(&effect_interface_list, method) )
  {
    if ( !effect_interface_list )
      sub_B5D69C(0LL, v8);
    System_Collections_Generic_List_IntPtr___Add(
      effect_interface_list,
      effect_interface,
      (const MethodInfo_304A760 *)Method_System_Collections_Generic_List_IntPtr__Add__);
  }
}


void __fastcall CriWareInitializer__Awake(CriWareInitializer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42DEE58 & 1) == 0 )
  {
    sub_B5D5C4(&CriWare_Common_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEE58 = 1;
  }
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  if ( !LOBYTE(this[1].klass) )
    CriWareInitializer__Initialize(this, v5);
}


void __fastcall CriWareInitializer__CriInternalLateUpdate(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CriWareInitializer__CriInternalUpdate(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CriWareInitializer__Initialize(CriWareInitializer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  CriWareInitializer_c *v29; // x0
  CriFsPlugin_c *inited; // x0
  CriAtomPlugin_c *v31; // x0
  CriManaPlugin_c *v32; // x0
  UnityEngine_Transform_o *IsLibraryInitialized; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x4
  CriFsPlugin_c *v36; // x0
  CriAtomPlugin_c *v37; // x0
  CriManaPlugin_c *v38; // x0
  CriFsPlugin_c *v39; // x0
  CriAtomPlugin_c *v40; // x0
  CriManaPlugin_c *v41; // x0
  CriManaPlugin_c *v42; // x0
  CriAtomPlugin_c *v43; // x0
  CriFsPlugin_c *v44; // x0
  CriFsConfig_o *v45; // x20
  __int64 v46; // x20
  int v47; // w8
  CriAtomConfig_o *v48; // x20
  CriManaConfig_o *v49; // x20
  CriWareDecrypterConfig_o *v50; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42DEE59 & 1) == 0 )
  {
    sub_B5D5C4(&CriAtomPlugin_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CriFsPlugin_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CriManaPlugin_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CriWareDecrypter_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CriWareInitializer_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v26, v27, v28);
    byte_42DEE59 = 1;
  }
  v29 = CriWareInitializer_TypeInfo;
  if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareInitializer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    v29 = CriWareInitializer_TypeInfo;
  }
  ++v29->static_fields->initializationCount;
  if ( CriWareInitializer_TypeInfo->static_fields->initializationCount != 1 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)this, 0LL);
    return;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    v31 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      v31 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    if ( CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v31) )
    {
      v32 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        v32 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v32);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
        goto LABEL_109;
    }
  }
  v36 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v36 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v36) )
  {
    v37 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      v37 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    if ( CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v37) )
    {
      v38 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        v38 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v38);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
        goto LABEL_109;
    }
  }
  v39 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v39 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  IsLibraryInitialized = (UnityEngine_Transform_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v39);
  if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
  {
    v40 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      v40 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v40);
    if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
    {
      v41 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        v41 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v41);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
      {
LABEL_109:
        if ( LOBYTE(this->fields.manaConfig) )
        {
          v42 = CriManaPlugin_TypeInfo;
          if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriManaPlugin_TypeInfo->_2.cctor_finished )
          {
            v42 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
          }
          CriManaPlugin__FinalizeLibrary((const MethodInfo *)v42);
        }
        if ( LOBYTE(this->fields.atomConfig) )
        {
          while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
            CriAtomExLatencyEstimator__FinalizeModule(0LL);
          v43 = CriAtomPlugin_TypeInfo;
          if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
          {
            v43 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
          }
          CriAtomPlugin__FinalizeLibrary((const MethodInfo *)v43);
        }
        if ( LOBYTE(this->fields.fileSystemConfig) )
        {
          v44 = CriFsPlugin_TypeInfo;
          if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriFsPlugin_TypeInfo->_2.cctor_finished )
          {
            v44 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
          }
          CriFsPlugin__FinalizeLibrary((const MethodInfo *)v44);
        }
      }
    }
  }
  if ( LOBYTE(this->fields.fileSystemConfig) )
  {
    v45 = *(CriFsConfig_o **)&this->fields.initializesAtom;
    if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareInitializer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    }
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriWareInitializer__InitializeFileSystem(v45, v34);
  }
  if ( LOBYTE(this->fields.atomConfig) )
  {
    v46 = *(_QWORD *)&this->fields.initializesMana;
    if ( !v46 )
      goto LABEL_106;
    v47 = *(_DWORD *)(v46 + 72);
    if ( v47 )
    {
      if ( v47 == 2 )
      {
        if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        }
        LOBYTE(v47) = UnityEngine_Debug__get_isDebugBuild(0LL);
      }
      else if ( v47 != 1 )
      {
LABEL_81:
        v48 = *(CriAtomConfig_o **)&this->fields.initializesMana;
        if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CriWareInitializer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
        }
        CriWareInitializer__InitializeAtom(v48, v34);
        goto LABEL_85;
      }
    }
    *(_BYTE *)(v46 + 68) = v47;
    goto LABEL_81;
  }
LABEL_85:
  if ( LOBYTE(this->fields.manaConfig) )
  {
    v49 = *(CriManaConfig_o **)&this->fields.useDecrypter;
    if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareInitializer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    }
    CriWareInitializer__InitializeMana(v49, v34);
  }
  if ( LOBYTE(this->fields.decrypterConfig) )
  {
    v50 = *(CriWareDecrypterConfig_o **)&this->fields.dontInitializeOnAwake;
    if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    }
    CriWareDecrypter__Initialize(v50, v34);
  }
  else
  {
    if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    }
    CriWareDecrypter__Initialize_14533740(
      (System_String_o *)StringLiteral_973/*"0"*/,
      (System_String_o *)StringLiteral_1/*""*/,
      0,
      0,
      v35);
  }
  if ( BYTE1(this[1].klass) )
  {
    IsLibraryInitialized = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( IsLibraryInitialized )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)IsLibraryInitialized,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
      return;
    }
LABEL_106:
    sub_B5D69C(IsLibraryInitialized, v34);
  }
}


bool __fastcall CriWareInitializer__InitializeAtom(CriAtomConfig_o *config, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  CriAtomPlugin_c *inited; // x0
  CriAtomEx_c *IsLibraryInitialized; // x0
  const MethodInfo *v25; // x1
  bool result; // w0
  int32_t maxVirtualVoices; // w20
  int32_t RequiredMaxVirtualVoices; // w21
  struct CriAtomConfig_StandardVoicePoolConfig_o *standardVoicePoolConfig; // x8
  struct CriAtomConfig_HcaMxVoicePoolConfig_o *hcaMxVoicePoolConfig; // x9
  const MethodInfo *v31; // x3
  struct CriAtomConfig_InGamePreviewConfig_o *inGamePreviewConfig; // x8
  const MethodInfo *v33; // x2
  bool iosEnableSonicSync; // w20
  int32_t v35; // w0
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x7
  double v38; // d0
  double v39; // d0
  int v40; // w20
  struct CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig_o *androidLowLatencyStandardVoicePoolConfig; // x8
  _BOOL4 androidEnableSonicSync; // w25
  int32_t memoryVoices; // w20
  int32_t streamingVoices; // w21
  int32_t androidStartBufferingTime; // w22
  int32_t androidBufferingTime; // w23
  _BOOL4 androidUsesAndroidFastMixer; // w26
  _BOOL4 androidUsesAAudio; // w27
  struct CriAtomConfig_Ps4Audio3dConfig_o *ps4Audio3dConfig; // x8
  struct CriAtomConfig_Ps4Audio3dConfig_o *v50; // x8
  uint32_t Ticks; // w20
  struct System_String_o *acfFileName; // x20
  System_String_o *streamingAssetsPath; // x21
  bool keepPlayingSoundOnPause; // w19
  CriAtomServer_c *v55; // x0
  struct CriAtomServer_StaticFields *static_fields; // x8
  const MethodInfo *v57; // [xsp+48h] [xbp-58h]
  uint64_t dateData; // [xsp+58h] [xbp-48h] BYREF
  System_DateTime_o v59; // 0:x0.8

  if ( (byte_42DEE5E & 1) == 0 )
  {
    sub_B5D5C4(&CriWare_Common_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CriAtomEx_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CriAtomPlugin_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CriAtomServer_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_DateTime_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Math_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v20, v21, v22);
    byte_42DEE5E = 1;
  }
  dateData = 0LL;
  inited = CriAtomPlugin_TypeInfo;
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    inited = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  IsLibraryInitialized = (CriAtomEx_c *)CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
    return 0;
  if ( !config )
    goto LABEL_74;
  maxVirtualVoices = config->fields.maxVirtualVoices;
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  RequiredMaxVirtualVoices = CriAtomPlugin__GetRequiredMaxVirtualVoices(config, v25);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  IsLibraryInitialized = (CriAtomEx_c *)System_Math__Max_45149472(maxVirtualVoices, RequiredMaxVirtualVoices, 0LL);
  standardVoicePoolConfig = config->fields.standardVoicePoolConfig;
  if ( !standardVoicePoolConfig )
    goto LABEL_74;
  hcaMxVoicePoolConfig = config->fields.hcaMxVoicePoolConfig;
  if ( !hcaMxVoicePoolConfig )
    goto LABEL_74;
  CriAtomPlugin__SetConfigParameters(
    (int32_t)IsLibraryInitialized,
    config->fields.maxVoiceLimitGroups,
    config->fields.maxCategories,
    config->fields.maxSequenceEventsPerFrame,
    config->fields.maxBeatSyncCallbacksPerFrame,
    config->fields.maxCueLinkCallbacksPerFrame,
    standardVoicePoolConfig->fields.memoryVoices,
    standardVoicePoolConfig->fields.streamingVoices,
    hcaMxVoicePoolConfig->fields.memoryVoices,
    hcaMxVoicePoolConfig->fields.streamingVoices,
    config->fields.outputSamplingRate,
    config->fields.asrOutputChannels,
    config->fields.usesInGamePreview,
    config->fields.serverFrequency,
    config->fields.maxParameterBlocks,
    config->fields.categoriesPerPlayback,
    config->fields.maxBuses,
    config->fields.vrMode,
    v57);
  inGamePreviewConfig = config->fields.inGamePreviewConfig;
  if ( !inGamePreviewConfig )
    goto LABEL_74;
  CriAtomPlugin__SetConfigMonitorParametes(
    inGamePreviewConfig->fields.maxPreviewObjects,
    inGamePreviewConfig->fields.communicationBufferSize,
    inGamePreviewConfig->fields.playbackPositionUpdateInterval,
    v31);
  if ( !config->fields.editorPcmOutputConfig )
    goto LABEL_74;
  CriAtomPlugin__SetConfigAdditionalParameters_PC(config->fields.pcBufferingTime, v25);
  CriAtomPlugin__SetConfigAdditionalParameters_LINUX(
    config->fields.linuxOutput,
    config->fields.linuxPulseLatencyUsec,
    v33);
  iosEnableSonicSync = config->fields.iosEnableSonicSync;
  v35 = System_Math__Max_45149472(config->fields.iosBufferingTime, 16, 0LL);
  CriAtomPlugin__SetConfigAdditionalParameters_IOS(iosEnableSonicSync, v35, config->fields.iosOverrideIPodMusic, v36);
  if ( !config->fields.androidBufferingTime )
  {
    v38 = 4000.0 / config->fields.serverFrequency;
    if ( v38 == INFINITY )
      v38 = -v38;
    config->fields.androidBufferingTime = (int)v38;
  }
  if ( !config->fields.androidStartBufferingTime )
  {
    v39 = 3000.0 / config->fields.serverFrequency;
    if ( v39 == INFINITY )
      v39 = -v39;
    config->fields.androidStartBufferingTime = (int)v39;
  }
  IsLibraryInitialized = CriAtomEx_TypeInfo;
  if ( config->fields.androidForceToUseAsrForDefaultPlayback )
    v40 = 2;
  else
    v40 = 0;
  if ( (BYTE3(CriAtomEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriAtomEx_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
    IsLibraryInitialized = CriAtomEx_TypeInfo;
  }
  IsLibraryInitialized->static_fields->androidDefaultSoundRendererType = v40;
  androidLowLatencyStandardVoicePoolConfig = config->fields.androidLowLatencyStandardVoicePoolConfig;
  if ( !androidLowLatencyStandardVoicePoolConfig )
    goto LABEL_74;
  androidEnableSonicSync = config->fields.androidEnableSonicSync;
  memoryVoices = androidLowLatencyStandardVoicePoolConfig->fields.memoryVoices;
  streamingVoices = androidLowLatencyStandardVoicePoolConfig->fields.streamingVoices;
  androidBufferingTime = config->fields.androidBufferingTime;
  androidStartBufferingTime = config->fields.androidStartBufferingTime;
  androidUsesAndroidFastMixer = config->fields.androidUsesAndroidFastMixer;
  androidUsesAAudio = config->fields.androidUsesAAudio;
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  CriAtomPlugin__SetConfigAdditionalParameters_ANDROID(
    androidEnableSonicSync,
    memoryVoices,
    streamingVoices,
    androidBufferingTime,
    androidStartBufferingTime,
    androidUsesAndroidFastMixer,
    androidUsesAAudio,
    v37);
  if ( !config->fields.vitaAtrac9VoicePoolConfig )
    goto LABEL_74;
  if ( !config->fields.vitaManaVoicePoolConfig )
    goto LABEL_74;
  ps4Audio3dConfig = config->fields.ps4Audio3dConfig;
  if ( !ps4Audio3dConfig )
    goto LABEL_74;
  ps4Audio3dConfig->fields.useAudio3D |= config->fields.vrMode;
  if ( !config->fields.ps4Atrac9VoicePoolConfig )
    goto LABEL_74;
  v50 = config->fields.ps4Audio3dConfig;
  if ( !v50
    || !v50->fields.voicePoolConfig
    || !config->fields.switchOpusVoicePoolConfig
    || !config->fields.webglWebAudioVoicePoolConfig )
  {
    goto LABEL_74;
  }
  CriAtomPlugin__InitializeLibrary((const MethodInfo *)IsLibraryInitialized);
  if ( config->fields.useRandomSeedWithTime )
  {
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    dateData = System_DateTime__get_Now(0LL).fields.dateData;
    v59.fields.dateData = (uint64_t)&dateData;
    Ticks = System_DateTime__get_Ticks(v59, 0LL);
    if ( (BYTE3(CriAtomEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriAtomEx_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
    CriAtomEx__SetRandomSeed(Ticks, 0LL);
  }
  acfFileName = config->fields.acfFileName;
  if ( !acfFileName )
LABEL_74:
    sub_B5D69C(IsLibraryInitialized, v25);
  if ( acfFileName->fields.m_stringLength )
  {
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
    }
    if ( CriWare_Common__IsStreamingAssetsPath(acfFileName, 0LL) )
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
      acfFileName = System_IO_Path__Combine(streamingAssetsPath, acfFileName, 0LL);
    }
    if ( (BYTE3(CriAtomEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriAtomEx_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
    CriAtomEx__RegisterAcf(0LL, acfFileName, 0LL);
  }
  keepPlayingSoundOnPause = config->fields.keepPlayingSoundOnPause;
  v55 = CriAtomServer_TypeInfo;
  if ( (BYTE3(CriAtomServer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomServer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomServer_TypeInfo);
    v55 = CriAtomServer_TypeInfo;
  }
  static_fields = v55->static_fields;
  result = 1;
  static_fields->KeepPlayingSoundOnPause = keepPlayingSoundOnPause;
  return result;
}


bool __fastcall CriWareInitializer__InitializeDecrypter(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42DEE60 & 1) == 0 )
  {
    sub_B5D5C4(&CriWareDecrypter_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEE60 = 1;
  }
  if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
  }
  return CriWareDecrypter__Initialize(config, method);
}


bool __fastcall CriWareInitializer__InitializeFileSystem(CriFsConfig_o *config, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CriFsPlugin_c *inited; // x0
  struct System_String_o *IsLibraryInitialized; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x7
  int32_t numberOfLoaders; // w20
  int32_t numberOfBinders; // w21
  int32_t numberOfInstallers; // w23
  int32_t installBufferSize; // w25
  int32_t maxPath; // w22
  _BOOL4 minimizeFileDescriptorUsage; // w26
  _BOOL4 enableCrcCheck; // w27
  const MethodInfo *v17; // x1
  int32_t androidDeviceReadBitrate; // w20
  const MethodInfo *v19; // x0

  if ( (byte_42DEE5D & 1) == 0 )
  {
    sub_B5D5C4(&CriFsPlugin_TypeInfo, (_DWORD)method, v2, v3);
    byte_42DEE5D = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  IsLibraryInitialized = (struct System_String_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
    return 0;
  if ( !config )
    goto LABEL_21;
  numberOfLoaders = config->fields.numberOfLoaders;
  numberOfBinders = config->fields.numberOfBinders;
  numberOfInstallers = config->fields.numberOfInstallers;
  installBufferSize = config->fields.installBufferSize;
  maxPath = config->fields.maxPath;
  minimizeFileDescriptorUsage = config->fields.minimizeFileDescriptorUsage;
  enableCrcCheck = config->fields.enableCrcCheck;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  CriFsPlugin__SetConfigParameters(
    numberOfLoaders,
    numberOfBinders,
    numberOfInstallers,
    installBufferSize << 10,
    maxPath,
    minimizeFileDescriptorUsage,
    enableCrcCheck,
    v8);
  androidDeviceReadBitrate = config->fields.androidDeviceReadBitrate;
  if ( !androidDeviceReadBitrate )
  {
    androidDeviceReadBitrate = 50000000;
    config->fields.androidDeviceReadBitrate = 50000000;
  }
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  CriFsPlugin__SetConfigAdditionalParameters_ANDROID(androidDeviceReadBitrate, v17);
  CriFsPlugin__InitializeLibrary(v19);
  IsLibraryInitialized = config->fields.userAgentString;
  if ( !IsLibraryInitialized )
LABEL_21:
    sub_B5D69C(IsLibraryInitialized, v7);
  if ( IsLibraryInitialized->fields.m_stringLength )
    CriFsUtility__CRIWARE14C89F34(IsLibraryInitialized, v7);
  return 1;
}


bool __fastcall CriWareInitializer__InitializeMana(CriManaConfig_o *config, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CriManaPlugin_c *inited; // x0
  _BOOL8 IsLibraryInitialized; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  _BOOL4 graphicsMultiThreaded; // w21
  int32_t numberOfMaxEntries; // w19
  int32_t numberOfDecoders; // w20
  bool v16; // w0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x0

  if ( (byte_42DEE5F & 1) == 0 )
  {
    sub_B5D5C4(&CriManaPlugin_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3512/*"CRI_LINEAR_COLORSPACE"*/, v5, v6, v7);
    byte_42DEE5F = 1;
  }
  inited = CriManaPlugin_TypeInfo;
  if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriManaPlugin_TypeInfo->_2.cctor_finished )
  {
    inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  }
  IsLibraryInitialized = CriManaPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  if ( IsLibraryInitialized )
    return 0;
  if ( !config )
    sub_B5D69C(IsLibraryInitialized, v10);
  graphicsMultiThreaded = config->fields.graphicsMultiThreaded;
  numberOfDecoders = config->fields.numberOfDecoders;
  numberOfMaxEntries = config->fields.numberOfMaxEntries;
  if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriManaPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  }
  CriManaPlugin__SetConfigParameters(graphicsMultiThreaded, numberOfDecoders, numberOfMaxEntries, v11);
  v16 = UnityEngine_SystemInfo__get_graphicsDeviceType(0LL) == 21;
  CriManaPlugin__SetConfigAdditonalParameters_ANDROID(v16, 0, v17);
  CriManaPlugin__InitializeLibrary(v18);
  if ( UnityEngine_QualitySettings__get_activeColorSpace(0LL) == 1 )
    UnityEngine_Shader__EnableKeyword((System_String_o *)StringLiteral_3512/*"CRI_LINEAR_COLORSPACE"*/, 0LL);
  return 1;
}


bool __fastcall CriWareInitializer__IsInitialized(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CriWareInitializer_c *v7; // x0

  if ( (byte_42DEE5B & 1) == 0 )
  {
    sub_B5D5C4(&CriWare_Common_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&CriWareInitializer_TypeInfo, v4, v5, v6);
    byte_42DEE5B = 1;
  }
  v7 = CriWareInitializer_TypeInfo;
  if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareInitializer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    v7 = CriWareInitializer_TypeInfo;
  }
  if ( v7->static_fields->initializationCount > 0 )
    return 1;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  return 0;
}


// attributes: thunk
void __fastcall CriWareInitializer__OnDestroy(CriWareInitializer_o *this, const MethodInfo *method)
{
  CriWareInitializer__Shutdown(this, method);
}


void __fastcall CriWareInitializer__Shutdown(CriWareInitializer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CriWareInitializer_c *v14; // x0
  CriWareInitializer_c *v15; // x0
  int32_t initializationCount; // w21
  CriManaPlugin_c *inited; // x0
  CriAtomPlugin_c *v18; // x0
  CriFsPlugin_c *v19; // x0

  if ( (byte_42DEE5A & 1) == 0 )
  {
    sub_B5D5C4(&CriAtomPlugin_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CriFsPlugin_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CriManaPlugin_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CriWareInitializer_TypeInfo, v11, v12, v13);
    byte_42DEE5A = 1;
  }
  v14 = CriWareInitializer_TypeInfo;
  if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareInitializer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    v14 = CriWareInitializer_TypeInfo;
  }
  --v14->static_fields->initializationCount;
  v15 = CriWareInitializer_TypeInfo;
  initializationCount = CriWareInitializer_TypeInfo->static_fields->initializationCount;
  if ( initializationCount )
  {
    if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareInitializer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
      v15 = CriWareInitializer_TypeInfo;
      initializationCount = CriWareInitializer_TypeInfo->static_fields->initializationCount;
      if ( (initializationCount & 0x80000000) == 0 )
        goto LABEL_10;
    }
    else if ( (initializationCount & 0x80000000) == 0 )
    {
LABEL_10:
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CriWareInitializer_TypeInfo;
        initializationCount = CriWareInitializer_TypeInfo->static_fields->initializationCount;
      }
      goto LABEL_33;
    }
    initializationCount = 0;
LABEL_33:
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = CriWareInitializer_TypeInfo;
    }
    v15->static_fields->initializationCount = initializationCount;
    return;
  }
  if ( LOBYTE(this->fields.manaConfig) )
  {
    inited = CriManaPlugin_TypeInfo;
    if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriManaPlugin_TypeInfo->_2.cctor_finished )
    {
      inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
    }
    CriManaPlugin__FinalizeLibrary((const MethodInfo *)inited);
  }
  if ( LOBYTE(this->fields.atomConfig) )
  {
    while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
      CriAtomExLatencyEstimator__FinalizeModule(0LL);
    v18 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      v18 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    CriAtomPlugin__FinalizeLibrary((const MethodInfo *)v18);
  }
  if ( LOBYTE(this->fields.fileSystemConfig) )
  {
    v19 = CriFsPlugin_TypeInfo;
    if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
      v19 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    CriFsPlugin__FinalizeLibrary((const MethodInfo *)v19);
  }
}


void __fastcall CriWareInitializer__Start(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}