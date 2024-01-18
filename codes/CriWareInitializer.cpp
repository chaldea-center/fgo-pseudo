void __fastcall CriWareInitializer___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall CriWareInitializer___ctor(CriWareInitializer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CriFsConfig_o *v6; // x20
  const MethodInfo *v7; // x1
  CriAtomConfig_o *v8; // x20
  CriManaConfig_o *v9; // x20
  const MethodInfo *v10; // x1
  CriWareDecrypterConfig_o *v11; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_417DF71 & 1) == 0 )
  {
    sub_B2C35C(&CriAtomConfig_TypeInfo, method);
    sub_B2C35C(&CriFsConfig_TypeInfo, v3);
    sub_B2C35C(&CriManaConfig_TypeInfo, v4);
    sub_B2C35C(&CriWareDecrypterConfig_TypeInfo, v5);
    byte_417DF71 = 1;
  }
  LOBYTE(this->fields.fileSystemConfig) = 1;
  v6 = (CriFsConfig_o *)sub_B2C42C(CriFsConfig_TypeInfo);
  CriFsConfig___ctor(v6, v7);
  *(_QWORD *)&this->fields.initializesAtom = v6;
  sub_B2C2F8(&this->fields.initializesAtom, v6);
  LOBYTE(this->fields.atomConfig) = 1;
  v8 = (CriAtomConfig_o *)sub_B2C42C(CriAtomConfig_TypeInfo);
  CriAtomConfig___ctor(v8, 0LL);
  *(_QWORD *)&this->fields.initializesMana = v8;
  sub_B2C2F8(&this->fields.initializesMana, v8);
  LOBYTE(this->fields.manaConfig) = 1;
  v9 = (CriManaConfig_o *)sub_B2C42C(CriManaConfig_TypeInfo);
  CriManaConfig___ctor(v9, v10);
  *(_QWORD *)&this->fields.useDecrypter = v9;
  sub_B2C2F8(&this->fields.useDecrypter, v9);
  v11 = (CriWareDecrypterConfig_o *)sub_B2C42C(CriWareDecrypterConfig_TypeInfo);
  CriWareDecrypterConfig___ctor(v11, v12);
  *(_QWORD *)&this->fields.dontInitializeOnAwake = v11;
  sub_B2C2F8(&this->fields.dontInitializeOnAwake, v11);
  CriMonoBehaviour___ctor((CriMonoBehaviour_o *)this, v13);
}


void __fastcall CriWareInitializer__AddAudioEffectInterface(intptr_t effect_interface, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_IntPtr__o *effect_interface_list; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_417DF6C & 1) == 0 )
  {
    sub_B2C35C(&CriAtomPlugin_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_IntPtr__Add__, v3);
    byte_417DF6C = 1;
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
      sub_B2C434(0LL, v4);
    System_Collections_Generic_List_IntPtr___Add(
      effect_interface_list,
      effect_interface,
      (const MethodInfo_2EE7C00 *)Method_System_Collections_Generic_List_IntPtr__Add__);
  }
}


void __fastcall CriWareInitializer__Awake(CriWareInitializer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_417DF68 & 1) == 0 )
  {
    sub_B2C35C(&CriWare_Common_TypeInfo, method);
    byte_417DF68 = 1;
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
  CriFsPlugin_c *inited; // x0
  CriAtomPlugin_c *v13; // x0
  CriManaPlugin_c *v14; // x0
  UnityEngine_Transform_o *IsLibraryInitialized; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x4
  CriFsPlugin_c *v18; // x0
  CriAtomPlugin_c *v19; // x0
  CriManaPlugin_c *v20; // x0
  CriFsPlugin_c *v21; // x0
  CriAtomPlugin_c *v22; // x0
  CriManaPlugin_c *v23; // x0
  CriManaPlugin_c *v24; // x0
  CriAtomPlugin_c *v25; // x0
  CriFsPlugin_c *v26; // x0
  CriFsConfig_o *v27; // x20
  __int64 v28; // x20
  int v29; // w8
  CriAtomConfig_o *v30; // x20
  CriManaConfig_o *v31; // x20
  CriWareDecrypterConfig_o *v32; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_417DF69 & 1) == 0 )
  {
    sub_B2C35C(&CriAtomPlugin_TypeInfo, method);
    sub_B2C35C(&CriFsPlugin_TypeInfo, v3);
    sub_B2C35C(&CriManaPlugin_TypeInfo, v4);
    sub_B2C35C(&CriWareDecrypter_TypeInfo, v5);
    sub_B2C35C(&CriWareInitializer_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v10);
    byte_417DF69 = 1;
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
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)this, 0LL);
    return;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    v13 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      v13 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    if ( CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v13) )
    {
      v14 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        v14 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v14);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
        goto LABEL_109;
    }
  }
  v18 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v18 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v18) )
  {
    v19 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      v19 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    if ( CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v19) )
    {
      v20 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        v20 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v20);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
        goto LABEL_109;
    }
  }
  v21 = CriFsPlugin_TypeInfo;
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v21 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  IsLibraryInitialized = (UnityEngine_Transform_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v21);
  if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
  {
    v22 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      v22 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriAtomPlugin__IsLibraryInitialized((const MethodInfo *)v22);
    if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
    {
      v23 = CriManaPlugin_TypeInfo;
      if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriManaPlugin_TypeInfo->_2.cctor_finished )
      {
        v23 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      }
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v23);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
      {
LABEL_109:
        if ( LOBYTE(this->fields.manaConfig) )
        {
          v24 = CriManaPlugin_TypeInfo;
          if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriManaPlugin_TypeInfo->_2.cctor_finished )
          {
            v24 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
          }
          CriManaPlugin__FinalizeLibrary((const MethodInfo *)v24);
        }
        if ( LOBYTE(this->fields.atomConfig) )
        {
          while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
            CriAtomExLatencyEstimator__FinalizeModule(0LL);
          v25 = CriAtomPlugin_TypeInfo;
          if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
          {
            v25 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
          }
          CriAtomPlugin__FinalizeLibrary((const MethodInfo *)v25);
        }
        if ( LOBYTE(this->fields.fileSystemConfig) )
        {
          v26 = CriFsPlugin_TypeInfo;
          if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CriFsPlugin_TypeInfo->_2.cctor_finished )
          {
            v26 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
          }
          CriFsPlugin__FinalizeLibrary((const MethodInfo *)v26);
        }
      }
    }
  }
  if ( LOBYTE(this->fields.fileSystemConfig) )
  {
    v27 = *(CriFsConfig_o **)&this->fields.initializesAtom;
    if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareInitializer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    }
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriWareInitializer__InitializeFileSystem(v27, v16);
  }
  if ( LOBYTE(this->fields.atomConfig) )
  {
    v28 = *(_QWORD *)&this->fields.initializesMana;
    if ( !v28 )
      goto LABEL_106;
    v29 = *(_DWORD *)(v28 + 72);
    if ( v29 )
    {
      if ( v29 == 2 )
      {
        if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        }
        LOBYTE(v29) = UnityEngine_Debug__get_isDebugBuild(0LL);
      }
      else if ( v29 != 1 )
      {
LABEL_81:
        v30 = *(CriAtomConfig_o **)&this->fields.initializesMana;
        if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CriWareInitializer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
        }
        CriWareInitializer__InitializeAtom(v30, v16);
        goto LABEL_85;
      }
    }
    *(_BYTE *)(v28 + 68) = v29;
    goto LABEL_81;
  }
LABEL_85:
  if ( LOBYTE(this->fields.manaConfig) )
  {
    v31 = *(CriManaConfig_o **)&this->fields.useDecrypter;
    if ( (BYTE3(CriWareInitializer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareInitializer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareInitializer_TypeInfo);
    }
    CriWareInitializer__InitializeMana(v31, v16);
  }
  if ( LOBYTE(this->fields.decrypterConfig) )
  {
    v32 = *(CriWareDecrypterConfig_o **)&this->fields.dontInitializeOnAwake;
    if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    }
    CriWareDecrypter__Initialize(v32, v16);
  }
  else
  {
    if ( (BYTE3(CriWareDecrypter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWareDecrypter_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWareDecrypter_TypeInfo);
    }
    CriWareDecrypter__Initialize_14247272(
      (System_String_o *)StringLiteral_953/*"0"*/,
      (System_String_o *)StringLiteral_1/*""*/,
      0,
      0,
      v17);
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
    sub_B2C434(IsLibraryInitialized, v16);
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
  CriAtomPlugin_c *inited; // x0
  CriAtomEx_c *IsLibraryInitialized; // x0
  const MethodInfo *v11; // x1
  bool result; // w0
  int32_t maxVirtualVoices; // w20
  int32_t RequiredMaxVirtualVoices; // w21
  struct CriAtomConfig_StandardVoicePoolConfig_o *standardVoicePoolConfig; // x8
  struct CriAtomConfig_HcaMxVoicePoolConfig_o *hcaMxVoicePoolConfig; // x9
  const MethodInfo *v17; // x3
  struct CriAtomConfig_InGamePreviewConfig_o *inGamePreviewConfig; // x8
  const MethodInfo *v19; // x2
  bool iosEnableSonicSync; // w20
  int32_t v21; // w0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x7
  double v24; // d0
  double v25; // d0
  int v26; // w20
  struct CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig_o *androidLowLatencyStandardVoicePoolConfig; // x8
  _BOOL4 androidEnableSonicSync; // w25
  int32_t memoryVoices; // w20
  int32_t streamingVoices; // w21
  int32_t androidStartBufferingTime; // w22
  int32_t androidBufferingTime; // w23
  _BOOL4 androidUsesAndroidFastMixer; // w26
  _BOOL4 androidUsesAAudio; // w27
  struct CriAtomConfig_Ps4Audio3dConfig_o *ps4Audio3dConfig; // x8
  struct CriAtomConfig_Ps4Audio3dConfig_o *v36; // x8
  uint32_t Ticks; // w20
  struct System_String_o *acfFileName; // x20
  System_String_o *streamingAssetsPath; // x21
  bool keepPlayingSoundOnPause; // w19
  CriAtomServer_c *v41; // x0
  struct CriAtomServer_StaticFields *static_fields; // x8
  const MethodInfo *v43; // [xsp+48h] [xbp-58h]
  uint64_t dateData; // [xsp+58h] [xbp-48h] BYREF
  System_DateTime_o v45; // 0:x0.8

  if ( (byte_417DF6E & 1) == 0 )
  {
    sub_B2C35C(&CriWare_Common_TypeInfo, method);
    sub_B2C35C(&CriAtomEx_TypeInfo, v3);
    sub_B2C35C(&CriAtomPlugin_TypeInfo, v4);
    sub_B2C35C(&CriAtomServer_TypeInfo, v5);
    sub_B2C35C(&System_DateTime_TypeInfo, v6);
    sub_B2C35C(&System_Math_TypeInfo, v7);
    sub_B2C35C(&System_IO_Path_TypeInfo, v8);
    byte_417DF6E = 1;
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
  RequiredMaxVirtualVoices = CriAtomPlugin__GetRequiredMaxVirtualVoices(config, v11);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  IsLibraryInitialized = (CriAtomEx_c *)System_Math__Max_45012344(maxVirtualVoices, RequiredMaxVirtualVoices, 0LL);
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
    v43);
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
  CriAtomPlugin__SetConfigAdditionalParameters_PC(config->fields.pcBufferingTime, v11);
  CriAtomPlugin__SetConfigAdditionalParameters_LINUX(
    config->fields.linuxOutput,
    config->fields.linuxPulseLatencyUsec,
    v19);
  iosEnableSonicSync = config->fields.iosEnableSonicSync;
  v21 = System_Math__Max_45012344(config->fields.iosBufferingTime, 16, 0LL);
  CriAtomPlugin__SetConfigAdditionalParameters_IOS(iosEnableSonicSync, v21, config->fields.iosOverrideIPodMusic, v22);
  if ( !config->fields.androidBufferingTime )
  {
    v24 = 4000.0 / config->fields.serverFrequency;
    if ( v24 == INFINITY )
      v24 = -v24;
    config->fields.androidBufferingTime = (int)v24;
  }
  if ( !config->fields.androidStartBufferingTime )
  {
    v25 = 3000.0 / config->fields.serverFrequency;
    if ( v25 == INFINITY )
      v25 = -v25;
    config->fields.androidStartBufferingTime = (int)v25;
  }
  IsLibraryInitialized = CriAtomEx_TypeInfo;
  if ( config->fields.androidForceToUseAsrForDefaultPlayback )
    v26 = 2;
  else
    v26 = 0;
  if ( (BYTE3(CriAtomEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriAtomEx_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
    IsLibraryInitialized = CriAtomEx_TypeInfo;
  }
  IsLibraryInitialized->static_fields->androidDefaultSoundRendererType = v26;
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
    v23);
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
  v36 = config->fields.ps4Audio3dConfig;
  if ( !v36
    || !v36->fields.voicePoolConfig
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
    v45.fields.dateData = (uint64_t)&dateData;
    Ticks = System_DateTime__get_Ticks(v45, 0LL);
    if ( (BYTE3(CriAtomEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriAtomEx_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
    CriAtomEx__SetRandomSeed(Ticks, 0LL);
  }
  acfFileName = config->fields.acfFileName;
  if ( !acfFileName )
LABEL_74:
    sub_B2C434(IsLibraryInitialized, v11);
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
  v41 = CriAtomServer_TypeInfo;
  if ( (BYTE3(CriAtomServer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomServer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomServer_TypeInfo);
    v41 = CriAtomServer_TypeInfo;
  }
  static_fields = v41->static_fields;
  result = 1;
  static_fields->KeepPlayingSoundOnPause = keepPlayingSoundOnPause;
  return result;
}


bool __fastcall CriWareInitializer__InitializeDecrypter(CriWareDecrypterConfig_o *config, const MethodInfo *method)
{
  if ( (byte_417DF70 & 1) == 0 )
  {
    sub_B2C35C(&CriWareDecrypter_TypeInfo, method);
    byte_417DF70 = 1;
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
  CriFsPlugin_c *inited; // x0
  struct System_String_o *IsLibraryInitialized; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x7
  int32_t numberOfLoaders; // w20
  int32_t numberOfBinders; // w21
  int32_t numberOfInstallers; // w23
  int32_t installBufferSize; // w25
  int32_t maxPath; // w22
  _BOOL4 minimizeFileDescriptorUsage; // w26
  _BOOL4 enableCrcCheck; // w27
  const MethodInfo *v15; // x1
  int32_t androidDeviceReadBitrate; // w20
  const MethodInfo *v17; // x0

  if ( (byte_417DF6D & 1) == 0 )
  {
    sub_B2C35C(&CriFsPlugin_TypeInfo, method);
    byte_417DF6D = 1;
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
    v6);
  androidDeviceReadBitrate = config->fields.androidDeviceReadBitrate;
  if ( !androidDeviceReadBitrate )
  {
    androidDeviceReadBitrate = 50000000;
    config->fields.androidDeviceReadBitrate = 50000000;
  }
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  CriFsPlugin__SetConfigAdditionalParameters_ANDROID(androidDeviceReadBitrate, v15);
  CriFsPlugin__InitializeLibrary(v17);
  IsLibraryInitialized = config->fields.userAgentString;
  if ( !IsLibraryInitialized )
LABEL_21:
    sub_B2C434(IsLibraryInitialized, v5);
  if ( IsLibraryInitialized->fields.m_stringLength )
    CriFsUtility__CRIWARE14C89F34(IsLibraryInitialized, v5);
  return 1;
}


bool __fastcall CriWareInitializer__InitializeMana(CriManaConfig_o *config, const MethodInfo *method)
{
  __int64 v3; // x1
  CriManaPlugin_c *inited; // x0
  _BOOL8 IsLibraryInitialized; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  _BOOL4 graphicsMultiThreaded; // w21
  int32_t numberOfMaxEntries; // w19
  int32_t numberOfDecoders; // w20
  bool v12; // w0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x0

  if ( (byte_417DF6F & 1) == 0 )
  {
    sub_B2C35C(&CriManaPlugin_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3446/*"CRI_LINEAR_COLORSPACE"*/, v3);
    byte_417DF6F = 1;
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
    sub_B2C434(IsLibraryInitialized, v6);
  graphicsMultiThreaded = config->fields.graphicsMultiThreaded;
  numberOfDecoders = config->fields.numberOfDecoders;
  numberOfMaxEntries = config->fields.numberOfMaxEntries;
  if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriManaPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  }
  CriManaPlugin__SetConfigParameters(graphicsMultiThreaded, numberOfDecoders, numberOfMaxEntries, v7);
  v12 = UnityEngine_SystemInfo__get_graphicsDeviceType(0LL) == 21;
  CriManaPlugin__SetConfigAdditonalParameters_ANDROID(v12, 0, v13);
  CriManaPlugin__InitializeLibrary(v14);
  if ( UnityEngine_QualitySettings__get_activeColorSpace(0LL) == 1 )
    UnityEngine_Shader__EnableKeyword((System_String_o *)StringLiteral_3446/*"CRI_LINEAR_COLORSPACE"*/, 0LL);
  return 1;
}


bool __fastcall CriWareInitializer__IsInitialized(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  CriWareInitializer_c *v3; // x0

  if ( (byte_417DF6B & 1) == 0 )
  {
    sub_B2C35C(&CriWare_Common_TypeInfo, v1);
    sub_B2C35C(&CriWareInitializer_TypeInfo, v2);
    byte_417DF6B = 1;
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
  CriManaPlugin_c *inited; // x0
  CriAtomPlugin_c *v10; // x0
  CriFsPlugin_c *v11; // x0

  if ( (byte_417DF6A & 1) == 0 )
  {
    sub_B2C35C(&CriAtomPlugin_TypeInfo, method);
    sub_B2C35C(&CriFsPlugin_TypeInfo, v3);
    sub_B2C35C(&CriManaPlugin_TypeInfo, v4);
    sub_B2C35C(&CriWareInitializer_TypeInfo, v5);
    byte_417DF6A = 1;
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
    v10 = CriAtomPlugin_TypeInfo;
    if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    {
      v10 = (CriAtomPlugin_c *)j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    }
    CriAtomPlugin__FinalizeLibrary((const MethodInfo *)v10);
  }
  if ( LOBYTE(this->fields.fileSystemConfig) )
  {
    v11 = CriFsPlugin_TypeInfo;
    if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
      v11 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    CriFsPlugin__FinalizeLibrary((const MethodInfo *)v11);
  }
}


void __fastcall CriWareInitializer__Start(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}