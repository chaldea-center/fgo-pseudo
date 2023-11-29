void __fastcall CriWareInitializer___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall CriWareInitializer___ctor(CriWareInitializer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CriFsConfig_o *v9; // x20
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  CriAtomConfig_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  CriManaConfig_o *v32; // x20
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  CriWareDecrypterConfig_o *v44; // x20
  const MethodInfo *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x1

  if ( (byte_40F0391 & 1) == 0 )
  {
    sub_B16FFC(&CriAtomConfig_TypeInfo, method);
    sub_B16FFC(&CriFsConfig_TypeInfo, v6);
    sub_B16FFC(&CriManaConfig_TypeInfo, v7);
    sub_B16FFC(&CriWareDecrypterConfig_TypeInfo, v8);
    byte_40F0391 = 1;
  }
  LOBYTE(this->fields.fileSystemConfig) = 1;
  v9 = (CriFsConfig_o *)sub_B170CC(CriFsConfig_TypeInfo, method, v2, v3, v4);
  CriFsConfig___ctor(v9, v10);
  *(_QWORD *)&this->fields.initializesAtom = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.initializesAtom,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  LOBYTE(this->fields.atomConfig) = 1;
  v21 = (CriAtomConfig_o *)sub_B170CC(CriAtomConfig_TypeInfo, v17, v18, v19, v20);
  CriAtomConfig___ctor(v21, 0LL);
  *(_QWORD *)&this->fields.initializesMana = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.initializesMana,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  LOBYTE(this->fields.manaConfig) = 1;
  v32 = (CriManaConfig_o *)sub_B170CC(CriManaConfig_TypeInfo, v28, v29, v30, v31);
  CriManaConfig___ctor(v32, v33);
  *(_QWORD *)&this->fields.useDecrypter = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useDecrypter,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v44 = (CriWareDecrypterConfig_o *)sub_B170CC(CriWareDecrypterConfig_TypeInfo, v40, v41, v42, v43);
  CriWareDecrypterConfig___ctor(v44, v45);
  *(_QWORD *)&this->fields.dontInitializeOnAwake = v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dontInitializeOnAwake,
    (System_Int32_array **)v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  CriMonoBehaviour___ctor((CriMonoBehaviour_o *)this, v52);
}


void __fastcall CriWareInitializer__AddAudioEffectInterface(intptr_t effect_interface, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_IntPtr__o *effect_interface_list; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F038C & 1) == 0 )
  {
    sub_B16FFC(&CriAtomPlugin_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_IntPtr__Add__, v3);
    byte_40F038C = 1;
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
      sub_B170D4();
    System_Collections_Generic_List_IntPtr___Add(
      effect_interface_list,
      effect_interface,
      (const MethodInfo_2F19478 *)Method_System_Collections_Generic_List_IntPtr__Add__);
  }
}


void __fastcall CriWareInitializer__Awake(CriWareInitializer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40F0388 & 1) == 0 )
  {
    sub_B16FFC(&CriWare_Common_TypeInfo, method);
    byte_40F0388 = 1;
  }
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  if ( !LOBYTE(this[1].klass) )
    CriWareInitializer__Initialize(this, v3);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CriWareInitializer_c *v11; // x0
  CriFsPlugin_c *v12; // x0
  CriAtomPlugin_c *v13; // x0
  CriManaPlugin_c *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  CriFsPlugin_c *v17; // x0
  CriAtomPlugin_c *v18; // x0
  CriManaPlugin_c *v19; // x0
  CriFsPlugin_c *v20; // x0
  CriAtomPlugin_c *v21; // x0
  CriManaPlugin_c *v22; // x0
  CriManaPlugin_c *v23; // x0
  CriAtomPlugin_c *v24; // x0
  CriFsPlugin_c *v25; // x0
  CriFsConfig_o *v26; // x20
  __int64 v27; // x20
  int v28; // w8
  CriAtomConfig_o *v29; // x20
  CriManaConfig_o *v30; // x20
  CriWareDecrypterConfig_o *v31; // x20
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F0389 & 1) == 0 )
  {
    sub_B16FFC(&CriAtomPlugin_TypeInfo, method);
    sub_B16FFC(&CriFsPlugin_TypeInfo, v3);
    sub_B16FFC(&CriManaPlugin_TypeInfo, v4);
    sub_B16FFC(&CriWareDecrypter_TypeInfo, v5);
    sub_B16FFC(&CriWareInitializer_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    sub_B16FFC(&StringLiteral_951, v10);
    byte_40F0389 = 1;
  }
  v11 = CriWareInitializer_TypeInfo;
  if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareInitializer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    v11 = CriWareInitializer_TypeInfo;
  }
  ++v11->static_fields->initializationCount;
  if ( CriWareInitializer_TypeInfo->static_fields->initializationCount != 1 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)this, 0LL);
    return;
  }
  v12 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v12) )
  {
    v13 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    if ( CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v13) )
    {
      v14 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      if ( CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v14) )
        goto LABEL_109;
    }
  }
  v17 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v17) )
  {
    v18 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    if ( CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v18) )
    {
      v19 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      if ( !CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v19) )
        goto LABEL_109;
    }
  }
  v20 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v20) )
  {
    v21 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    if ( !CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v21) )
    {
      v22 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      if ( !CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v22) )
      {
LABEL_109:
        if ( LOBYTE(this->fields.manaConfig) )
        {
          v23 = CriManaPlugin_TypeInfo;
          if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriManaPlugin_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
          }
          CriManaPlugin__FinalizeLibrary((const MethodInfo *)v23);
        }
        if ( LOBYTE(this->fields.atomConfig) )
        {
          while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
            CriAtomExLatencyEstimator__FinalizeModule(0LL);
          v24 = CriAtomPlugin_TypeInfo;
          if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
          }
          CriAtomPlugin__FinalizeLibrary((const MethodInfo *)v24);
        }
        if ( LOBYTE(this->fields.fileSystemConfig) )
        {
          v25 = CriFsPlugin_TypeInfo;
          if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriFsPlugin_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
          }
          CriFsPlugin__FinalizeLibrary((const MethodInfo *)v25);
        }
      }
    }
  }
  if ( LOBYTE(this->fields.fileSystemConfig) )
  {
    v26 = *(CriFsConfig_o **)&this->fields.initializesAtom;
    if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareInitializer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    }
    CriWareInitializer__InitializeFileSystem(v26, v15);
  }
  if ( LOBYTE(this->fields.atomConfig) )
  {
    v27 = *(_QWORD *)&this->fields.initializesMana;
    if ( !v27 )
      goto LABEL_106;
    v28 = *(_DWORD *)(v27 + 72);
    if ( v28 )
    {
      if ( v28 == 2 )
      {
        if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        }
        LOBYTE(v28) = UnityEngine_Debug__get_isDebugBuild(0LL);
      }
      else if ( v28 != 1 )
      {
LABEL_81:
        v29 = *(CriAtomConfig_o **)&this->fields.initializesMana;
        if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CriWareInitializer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
        }
        CriWareInitializer__InitializeAtom(v29, v15);
        goto LABEL_85;
      }
    }
    *(_BYTE *)(v27 + 68) = v28;
    goto LABEL_81;
  }
LABEL_85:
  if ( LOBYTE(this->fields.manaConfig) )
  {
    v30 = *(CriManaConfig_o **)&this->fields.useDecrypter;
    if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareInitializer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    }
    CriWareInitializer__InitializeMana(v30, v15);
  }
  if ( LOBYTE(this->fields.decrypterConfig) )
  {
    v31 = *(CriWareDecrypterConfig_o **)&this->fields.dontInitializeOnAwake;
    if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    }
    CriWareDecrypter__Initialize(v31, v15);
  }
  else
  {
    if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    }
    CriWareDecrypter__Initialize_14149300(
      (System_String_o *)StringLiteral_951,
      (System_String_o *)StringLiteral_1,
      0,
      0,
      v16);
  }
  if ( BYTE1(this[1].klass) )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
      return;
    }
LABEL_106:
    sub_B170D4();
  }
}


bool __fastcall CriWareInitializer__InitializeAtom(CriAtomConfig_o *config, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CriAtomPlugin_c *v9; // x0
  const MethodInfo *v10; // x1
  bool result; // w0
  int32_t maxVirtualVoices; // w20
  int32_t RequiredMaxVirtualVoices; // w21
  int32_t v14; // w0
  struct CriAtomConfig_StandardVoicePoolConfig_o *standardVoicePoolConfig; // x8
  struct CriAtomConfig_HcaMxVoicePoolConfig_o *hcaMxVoicePoolConfig; // x9
  const MethodInfo *v17; // x3
  struct CriAtomConfig_InGamePreviewConfig_o *inGamePreviewConfig; // x8
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  bool iosEnableSonicSync; // w20
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x7
  double v25; // d0
  double v26; // d0
  CriAtomEx_c *v27; // x0
  int v28; // w20
  struct CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig_o *androidLowLatencyStandardVoicePoolConfig; // x8
  _BOOL4 androidEnableSonicSync; // w25
  int32_t memoryVoices; // w20
  int32_t streamingVoices; // w21
  int32_t androidStartBufferingTime; // w22
  int32_t androidBufferingTime; // w23
  _BOOL4 androidUsesAndroidFastMixer; // w26
  _BOOL4 androidUsesAAudio; // w27
  const MethodInfo *v37; // x0
  struct CriAtomConfig_Ps4Audio3dConfig_o *ps4Audio3dConfig; // x8
  struct CriAtomConfig_Ps4Audio3dConfig_o *v39; // x8
  uint32_t Ticks; // w20
  struct System_String_o *acfFileName; // x20
  System_String_o *streamingAssetsPath; // x21
  bool keepPlayingSoundOnPause; // w19
  CriAtomServer_c *v44; // x0
  struct CriAtomServer_StaticFields *static_fields; // x8
  const MethodInfo *v46; // [xsp+48h] [xbp-58h]
  uint64_t dateData; // [xsp+58h] [xbp-48h] BYREF
  System_DateTime_o v48; // 0:x0.8

  if ( (byte_40F038E & 1) == 0 )
  {
    sub_B16FFC(&CriWare_Common_TypeInfo, method);
    sub_B16FFC(&CriAtomEx_TypeInfo, v3);
    sub_B16FFC(&CriAtomPlugin_TypeInfo, v4);
    sub_B16FFC(&CriAtomServer_TypeInfo, v5);
    sub_B16FFC(&System_DateTime_TypeInfo, v6);
    sub_B16FFC(&System_Math_TypeInfo, v7);
    sub_B16FFC(&System_IO_Path_TypeInfo, v8);
    byte_40F038E = 1;
  }
  dateData = 0LL;
  v9 = CriAtomPlugin_TypeInfo;
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  if ( CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v9) )
    return 0;
  if ( !config )
    goto LABEL_74;
  maxVirtualVoices = config->fields.maxVirtualVoices;
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  RequiredMaxVirtualVoices = CriAtomPlugin__GetRequiredMaxVirtualVoices(config, v10);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = System_Math__Max_44463768(maxVirtualVoices, RequiredMaxVirtualVoices, 0LL);
  standardVoicePoolConfig = config->fields.standardVoicePoolConfig;
  if ( !standardVoicePoolConfig )
    goto LABEL_74;
  hcaMxVoicePoolConfig = config->fields.hcaMxVoicePoolConfig;
  if ( !hcaMxVoicePoolConfig )
    goto LABEL_74;
  CriAtomPlugin__SetConfigParameters(
    v14,
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
    v46);
  inGamePreviewConfig = config->fields.inGamePreviewConfig;
  if ( !inGamePreviewConfig )
    goto LABEL_74;
  CriAtomPlugin__SetConfigMonitorParametes(
    inGamePreviewConfig->fields.maxPreviewObjects,
    inGamePreviewConfig->fields.communicationBufferSize,
    inGamePreviewConfig->fields.playbackPositionUpdateInterval,
    v17);
  if ( !config->fields.editorPcmOutputConfig )
    goto LABEL_74;
  CriAtomPlugin__SetConfigAdditionalParameters_PC(config->fields.pcBufferingTime, v19);
  CriAtomPlugin__SetConfigAdditionalParameters_LINUX(
    config->fields.linuxOutput,
    config->fields.linuxPulseLatencyUsec,
    v20);
  iosEnableSonicSync = config->fields.iosEnableSonicSync;
  v22 = System_Math__Max_44463768(config->fields.iosBufferingTime, 16, 0LL);
  CriAtomPlugin__SetConfigAdditionalParameters_IOS(iosEnableSonicSync, v22, config->fields.iosOverrideIPodMusic, v23);
  if ( !config->fields.androidBufferingTime )
  {
    v25 = 4000.0 / config->fields.serverFrequency;
    if ( v25 == INFINITY )
      v25 = -v25;
    config->fields.androidBufferingTime = (int)v25;
  }
  if ( !config->fields.androidStartBufferingTime )
  {
    v26 = 3000.0 / config->fields.serverFrequency;
    if ( v26 == INFINITY )
      v26 = -v26;
    config->fields.androidStartBufferingTime = (int)v26;
  }
  v27 = CriAtomEx_TypeInfo;
  if ( config->fields.androidForceToUseAsrForDefaultPlayback )
    v28 = 2;
  else
    v28 = 0;
  if ( (BYTE3(CriAtomEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriAtomEx_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
    v27 = CriAtomEx_TypeInfo;
  }
  v27->static_fields->androidDefaultSoundRendererType = v28;
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
    v24);
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
  v39 = config->fields.ps4Audio3dConfig;
  if ( !v39
    || !v39->fields.voicePoolConfig
    || !config->fields.switchOpusVoicePoolConfig
    || !config->fields.webglWebAudioVoicePoolConfig )
  {
    goto LABEL_74;
  }
  CriAtomPlugin__InitializeLibrary(v37);
  if ( config->fields.useRandomSeedWithTime )
  {
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    dateData = System_DateTime__get_Now(0LL).fields.dateData;
    v48.fields.dateData = (uint64_t)&dateData;
    Ticks = System_DateTime__get_Ticks(v48, 0LL);
    if ( (BYTE3(CriAtomEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriAtomEx_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
    CriAtomEx__SetRandomSeed(Ticks, 0LL);
  }
  acfFileName = config->fields.acfFileName;
  if ( !acfFileName )
LABEL_74:
    sub_B170D4();
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
  v44 = CriAtomServer_TypeInfo;
  if ( (BYTE3(CriAtomServer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomServer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomServer_TypeInfo);
    v44 = CriAtomServer_TypeInfo;
  }
  static_fields = v44->static_fields;
  result = 1;
  static_fields->KeepPlayingSoundOnPause = keepPlayingSoundOnPause;
  return result;
}


bool __fastcall CriWareInitializer__InitializeDecrypter(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  if ( (byte_40F0390 & 1) == 0 )
  {
    sub_B16FFC(&CriWareDecrypter_TypeInfo, method);
    byte_40F0390 = 1;
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
  CriFsPlugin_c *v3; // x0
  const MethodInfo *v4; // x7
  int32_t numberOfLoaders; // w20
  int32_t numberOfBinders; // w21
  int32_t numberOfInstallers; // w23
  int32_t installBufferSize; // w25
  int32_t maxPath; // w22
  _BOOL4 minimizeFileDescriptorUsage; // w26
  _BOOL4 enableCrcCheck; // w27
  const MethodInfo *v13; // x1
  int32_t androidDeviceReadBitrate; // w20
  const MethodInfo *v15; // x0
  const MethodInfo *v16; // x1
  struct System_String_o *userAgentString; // x0

  if ( (byte_40F038D & 1) == 0 )
  {
    sub_B16FFC(&CriFsPlugin_TypeInfo, method);
    byte_40F038D = 1;
  }
  v3 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v3) )
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
    v4);
  androidDeviceReadBitrate = config->fields.androidDeviceReadBitrate;
  if ( !androidDeviceReadBitrate )
  {
    androidDeviceReadBitrate = 50000000;
    config->fields.androidDeviceReadBitrate = 50000000;
  }
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  CriFsPlugin__SetConfigAdditionalParameters_ANDROID(androidDeviceReadBitrate, v13);
  CriFsPlugin__InitializeLibrary(v15);
  userAgentString = config->fields.userAgentString;
  if ( !userAgentString )
LABEL_21:
    sub_B170D4();
  if ( userAgentString->fields.m_stringLength )
    CriFsUtility__CRIWARE14C89F34(userAgentString, v16);
  return 1;
}


bool __fastcall CriWareInitializer__InitializeMana(CriManaConfig_o *config, const MethodInfo *method)
{
  __int64 v3; // x1
  CriManaPlugin_c *v4; // x0
  const MethodInfo *v5; // x3
  _BOOL4 graphicsMultiThreaded; // w21
  int32_t numberOfMaxEntries; // w19
  int32_t numberOfDecoders; // w20
  bool v10; // w0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x0

  if ( (byte_40F038F & 1) == 0 )
  {
    sub_B16FFC(&CriManaPlugin_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3433, v3);
    byte_40F038F = 1;
  }
  v4 = CriManaPlugin_TypeInfo;
  if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriManaPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  }
  if ( CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v4) )
    return 0;
  if ( !config )
    sub_B170D4();
  graphicsMultiThreaded = config->fields.graphicsMultiThreaded;
  numberOfDecoders = config->fields.numberOfDecoders;
  numberOfMaxEntries = config->fields.numberOfMaxEntries;
  if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriManaPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  }
  CriManaPlugin__SetConfigParameters(graphicsMultiThreaded, numberOfDecoders, numberOfMaxEntries, v5);
  v10 = UnityEngine_SystemInfo__get_graphicsDeviceType(0LL) == 21;
  CriManaPlugin__SetConfigAdditonalParameters_ANDROID(v10, 0, v11);
  CriManaPlugin__InitializeLibrary(v12);
  if ( UnityEngine_QualitySettings__get_activeColorSpace(0LL) == 1 )
    UnityEngine_Shader__EnableKeyword((System_String_o *)StringLiteral_3433, 0LL);
  return 1;
}


bool __fastcall CriWareInitializer__IsInitialized(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  CriWareInitializer_c *v3; // x0

  if ( (byte_40F038B & 1) == 0 )
  {
    sub_B16FFC(&CriWare_Common_TypeInfo, v1);
    sub_B16FFC(&CriWareInitializer_TypeInfo, v2);
    byte_40F038B = 1;
  }
  v3 = CriWareInitializer_TypeInfo;
  if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareInitializer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    v3 = CriWareInitializer_TypeInfo;
  }
  if ( v3->static_fields->initializationCount > 0 )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CriWareInitializer_c *v6; // x0
  CriWareInitializer_c *v7; // x0
  int32_t initializationCount; // w21
  CriManaPlugin_c *v9; // x0
  CriAtomPlugin_c *v10; // x0
  CriFsPlugin_c *v11; // x0

  if ( (byte_40F038A & 1) == 0 )
  {
    sub_B16FFC(&CriAtomPlugin_TypeInfo, method);
    sub_B16FFC(&CriFsPlugin_TypeInfo, v3);
    sub_B16FFC(&CriManaPlugin_TypeInfo, v4);
    sub_B16FFC(&CriWareInitializer_TypeInfo, v5);
    byte_40F038A = 1;
  }
  v6 = CriWareInitializer_TypeInfo;
  if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWareInitializer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    v6 = CriWareInitializer_TypeInfo;
  }
  --v6->static_fields->initializationCount;
  v7 = CriWareInitializer_TypeInfo;
  initializationCount = CriWareInitializer_TypeInfo->static_fields->initializationCount;
  if ( initializationCount )
  {
    if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareInitializer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
      v7 = CriWareInitializer_TypeInfo;
      initializationCount = CriWareInitializer_TypeInfo->static_fields->initializationCount;
      if ( (initializationCount & 0x80000000) == 0 )
        goto LABEL_10;
    }
    else if ( (initializationCount & 0x80000000) == 0 )
    {
LABEL_10:
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = CriWareInitializer_TypeInfo;
        initializationCount = CriWareInitializer_TypeInfo->static_fields->initializationCount;
      }
      goto LABEL_33;
    }
    initializationCount = 0;
LABEL_33:
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = CriWareInitializer_TypeInfo;
    }
    v7->static_fields->initializationCount = initializationCount;
    return;
  }
  if ( LOBYTE(this->fields.manaConfig) )
  {
    v9 = CriManaPlugin_TypeInfo;
    if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriManaPlugin_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
    }
    CriManaPlugin__FinalizeLibrary((const MethodInfo *)v9);
  }
  if ( LOBYTE(this->fields.atomConfig) )
  {
    while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
      CriAtomExLatencyEstimator__FinalizeModule(0LL);
    v10 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    CriAtomPlugin__FinalizeLibrary((const MethodInfo *)v10);
  }
  if ( LOBYTE(this->fields.fileSystemConfig) )
  {
    v11 = CriFsPlugin_TypeInfo;
    if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    CriFsPlugin__FinalizeLibrary((const MethodInfo *)v11);
  }
}


void __fastcall CriWareInitializer__Start(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}