void __fastcall CriWareInitializer___ctor(CriWareInitializer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CriFsConfig_o *v11; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  CriAtomConfig_o *v16; // x20
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  CriManaConfig_o *v21; // x20
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  CriWareDecrypterConfig_o *v26; // x20
  const MethodInfo *v27; // x1

  if ( (byte_4B107AD & 1) == 0 )
  {
    sub_1BCA7E0(&CriAtomConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CriFsConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&CriManaConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&CriWareDecrypterConfig_TypeInfo, v9, v10);
    byte_4B107AD = 1;
  }
  this->fields.initializesFileSystem = 1;
  v11 = (CriFsConfig_o *)sub_1BCAA2C(CriFsConfig_TypeInfo, method, v2, v3);
  CriFsConfig___ctor(v11, v12);
  this->fields.fileSystemConfig = v11;
  sub_1BCA784(&this->fields.fileSystemConfig, v11);
  this->fields.initializesAtom = 1;
  v16 = (CriAtomConfig_o *)sub_1BCAA2C(CriAtomConfig_TypeInfo, v13, v14, v15);
  CriAtomConfig___ctor(v16, v17);
  this->fields.atomConfig = v16;
  sub_1BCA784(&this->fields.atomConfig, v16);
  this->fields.initializesMana = 1;
  v21 = (CriManaConfig_o *)sub_1BCAA2C(CriManaConfig_TypeInfo, v18, v19, v20);
  CriManaConfig___ctor(v21, v22);
  this->fields.manaConfig = v21;
  sub_1BCA784(&this->fields.manaConfig, v21);
  v26 = (CriWareDecrypterConfig_o *)sub_1BCAA2C(CriWareDecrypterConfig_TypeInfo, v23, v24, v25);
  CriWareDecrypterConfig___ctor(v26, v27);
  this->fields.decrypterConfig = v26;
  sub_1BCA784(&this->fields.decrypterConfig, v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CriWareInitializer__AddAudioEffectInterface(intptr_t effect_interface, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  System_Collections_Generic_List_IntPtr__o *v7; // x0
  struct System_IntPtr_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_Collections_Generic_List_IntPtr__o *effect_interface_list; // [xsp+8h] [xbp-28h] BYREF

  v3 = *(_QWORD *)&effect_interface;
  if ( (byte_4B107A9 & 1) == 0 )
  {
    sub_1BCA7E0(&CriAtomPlugin_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IntPtr__Add__, v4, v5);
    byte_4B107A9 = 1;
  }
  effect_interface_list = 0LL;
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, method);
  if ( CriAtomPlugin__GetAudioEffectInterfaceList(&effect_interface_list, 0LL) )
  {
    v7 = effect_interface_list;
    if ( !effect_interface_list
      || (items = effect_interface_list->fields._items,
          v9 = Method_System_Collections_Generic_List_IntPtr__Add__,
          ++effect_interface_list->fields._version,
          !items) )
    {
      sub_1BCAA3C(v7, v6);
    }
    size = v7->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_IntPtr___AddWithResize(
        v7,
        v3,
        *(const MethodInfo_358C4BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = size + 1;
      *(_QWORD *)&items->m_Items[2 * size + 1] = v3;
    }
  }
}


void __fastcall CriWareInitializer__Awake(CriWareInitializer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  if ( !this->fields.dontInitializeOnAwake )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct CriWareInitializer_StaticFields *static_fields; // x8
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v21; // x1
  CriManaPlugin_c *v22; // x0
  UnityEngine_Transform_o *IsLibraryInitialized; // x0
  const MethodInfo *v24; // x4
  CriFsPlugin_c *v25; // x0
  CriManaPlugin_c *v26; // x0
  CriFsPlugin_c *v27; // x0
  CriManaPlugin_c *v28; // x0
  CriManaPlugin_c *v29; // x0
  CriAtomExLatencyEstimator_EstimatorInfo_o v30; // x1
  CriFsPlugin_c *v31; // x0
  struct CriAtomConfig_o *atomConfig; // x20
  int32_t inGamePreviewMode; // w8
  __int64 v34; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B107A6 & 1) == 0 )
  {
    sub_1BCA7E0(&CriAtomPlugin_TypeInfo, method, v2);
    sub_1BCA7E0(&CriFsPlugin_TypeInfo, v4, v5);
    sub_1BCA7E0(&CriManaPlugin_TypeInfo, v6, v7);
    sub_1BCA7E0(&CriWareInitializer_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v16, v17);
    byte_4B107A6 = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  if ( static_fields->initializationCount++ )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)this, 0LL);
    return;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v21);
    if ( CriAtomPlugin__IsLibraryInitialized(0LL) )
    {
      v22 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v22 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v21);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v22);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
        goto LABEL_76;
    }
  }
  v25 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v25 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v21);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v25) )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v21);
    if ( CriAtomPlugin__IsLibraryInitialized(0LL) )
    {
      v26 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v26 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v21);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v26);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
        goto LABEL_76;
    }
  }
  v27 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v27 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v21);
  IsLibraryInitialized = (UnityEngine_Transform_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v27);
  if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v21);
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriAtomPlugin__IsLibraryInitialized(0LL);
    if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
    {
      v28 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v28 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v21);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v28);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
      {
LABEL_76:
        if ( this->fields.initializesMana )
        {
          v29 = CriManaPlugin_TypeInfo;
          if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
            v29 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v21);
          CriManaPlugin__FinalizeLibrary((const MethodInfo *)v29);
        }
        if ( this->fields.initializesAtom )
        {
          while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
            CriAtomExLatencyEstimator__FinalizeModule(0LL);
          if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
            ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(CriAtomPlugin_TypeInfo, v30);
          CriAtomPlugin__FinalizeLibrary(0LL);
        }
        if ( this->fields.initializesFileSystem )
        {
          v31 = CriFsPlugin_TypeInfo;
          if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
            v31 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v21);
          CriFsPlugin__FinalizeLibrary((const MethodInfo *)v31);
        }
      }
    }
  }
  if ( this->fields.initializesFileSystem )
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriWareInitializer__InitializeFileSystem(
                                                        this->fields.fileSystemConfig,
                                                        v21);
  if ( this->fields.initializesAtom )
  {
    atomConfig = this->fields.atomConfig;
    if ( !atomConfig )
      goto LABEL_73;
    inGamePreviewMode = atomConfig->fields.inGamePreviewMode;
    switch ( inGamePreviewMode )
    {
      case 2:
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v21);
        atomConfig->fields.usesInGamePreview = UnityEngine_Debug__get_isDebugBuild(0LL);
        atomConfig = this->fields.atomConfig;
        break;
      case 1:
        atomConfig->fields.usesInGamePreview = 1;
        break;
      case 0:
        atomConfig->fields.usesInGamePreview = 0;
        break;
    }
    CriWareInitializer__InitializeAtom(atomConfig, v21);
  }
  if ( this->fields.initializesMana )
    CriWareInitializer__InitializeMana(this->fields.manaConfig, v21);
  if ( this->fields.useDecrypter )
    CriWareDecrypter__Initialize(this->fields.decrypterConfig, v21);
  else
    CriWareDecrypter__Initialize_30420184(
      (System_String_o *)StringLiteral_1209/*"0"*/,
      (System_String_o *)StringLiteral_1/*""*/,
      0,
      0,
      v24);
  if ( this->fields.dontDestroyOnLoad )
  {
    IsLibraryInitialized = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( IsLibraryInitialized )
    {
      IsLibraryInitialized = UnityEngine_Transform__get_root(IsLibraryInitialized, 0LL);
      if ( IsLibraryInitialized )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)IsLibraryInitialized,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
        UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
        return;
      }
    }
LABEL_73:
    sub_1BCAA3C(IsLibraryInitialized, v21);
  }
}


bool __fastcall CriWareInitializer__InitializeAtom(CriAtomConfig_o *config, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  CriAtomEx_c *IsLibraryInitialized; // x0
  __int64 v15; // x1
  char v16; // w20
  int32_t maxVirtualVoices; // w21
  __int64 v18; // x1
  int32_t RequiredMaxVirtualVoices; // w22
  struct CriAtomConfig_StandardVoicePoolConfig_o *standardVoicePoolConfig; // x8
  struct CriAtomConfig_HcaMxVoicePoolConfig_o *hcaMxVoicePoolConfig; // x9
  struct CriAtomConfig_InGamePreviewConfig_o *inGamePreviewConfig; // x8
  struct CriAtomConfig_EditorPcmOutputConfig_o *editorPcmOutputConfig; // x8
  bool iosEnableSonicSync; // w21
  int32_t v25; // w0
  double v26; // d0
  int32_t v27; // w8
  double v28; // d0
  int32_t v29; // w8
  int v30; // w21
  struct CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig_o *androidLowLatencyStandardVoicePoolConfig; // x8
  _BOOL4 androidEnableSonicSync; // w26
  int32_t memoryVoices; // w21
  int32_t streamingVoices; // w22
  int32_t androidStartBufferingTime; // w23
  int32_t androidBufferingTime; // w24
  _BOOL4 androidUsesAndroidFastMixer; // w27
  _BOOL4 androidUsesAAudio; // w28
  struct CriAtomConfig_VitaAtrac9VoicePoolConfig_o *vitaAtrac9VoicePoolConfig; // x8
  struct CriAtomConfig_VitaManaVoicePoolConfig_o *vitaManaVoicePoolConfig; // x9
  struct CriAtomConfig_Ps4Audio3dConfig_o *ps4Audio3dConfig; // x9
  bool v42; // w8
  struct CriAtomConfig_Ps4Atrac9VoicePoolConfig_o *ps4Atrac9VoicePoolConfig; // x10
  struct CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig_o *voicePoolConfig; // x9
  struct CriAtomConfig_SwitchOpusVoicePoolConfig_o *switchOpusVoicePoolConfig; // x8
  struct CriAtomConfig_WebGLWebAudioVoicePoolConfig_o *webglWebAudioVoicePoolConfig; // x8
  __int64 v47; // x1
  uint32_t Ticks; // w21
  struct System_String_o *acfFileName; // x21
  __int64 v50; // x1
  __int64 v51; // x1
  System_String_o *streamingAssetsPath; // x22
  bool keepPlayingSoundOnPause; // w19
  CriAtomServer_c *v54; // x0
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF
  System_DateTime_o v57; // 0:x0.8

  if ( (byte_4B107AB & 1) == 0 )
  {
    sub_1BCA7E0(&CriAtomEx_TypeInfo, method, v2);
    sub_1BCA7E0(&CriAtomPlugin_TypeInfo, v4, v5);
    sub_1BCA7E0(&CriAtomServer_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Math_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IO_Path_TypeInfo, v12, v13);
    byte_4B107AB = 1;
  }
  dateData = 0LL;
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, method);
  IsLibraryInitialized = (CriAtomEx_c *)CriAtomPlugin__IsLibraryInitialized(0LL);
  v16 = (char)IsLibraryInitialized;
  if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
  {
    if ( !config )
      goto LABEL_54;
    maxVirtualVoices = config->fields.maxVirtualVoices;
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v15);
    RequiredMaxVirtualVoices = CriAtomPlugin__GetRequiredMaxVirtualVoices(config, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
    IsLibraryInitialized = (CriAtomEx_c *)System_Math__Max_63220196(maxVirtualVoices, RequiredMaxVirtualVoices, 0LL);
    standardVoicePoolConfig = config->fields.standardVoicePoolConfig;
    if ( !standardVoicePoolConfig )
      goto LABEL_54;
    hcaMxVoicePoolConfig = config->fields.hcaMxVoicePoolConfig;
    if ( !hcaMxVoicePoolConfig )
      goto LABEL_54;
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
      0LL);
    inGamePreviewConfig = config->fields.inGamePreviewConfig;
    if ( !inGamePreviewConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigMonitorParametes(
      inGamePreviewConfig->fields.maxPreviewObjects,
      inGamePreviewConfig->fields.communicationBufferSize,
      inGamePreviewConfig->fields.playbackPositionUpdateInterval,
      0LL);
    editorPcmOutputConfig = config->fields.editorPcmOutputConfig;
    if ( !editorPcmOutputConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_EDITOR(
      editorPcmOutputConfig->fields.enable,
      editorPcmOutputConfig->fields.bufferLength,
      0LL);
    CriAtomPlugin__SetConfigAdditionalParameters_PC(config->fields.pcBufferingTime, 0LL);
    CriAtomPlugin__SetConfigAdditionalParameters_LINUX(
      config->fields.linuxOutput,
      config->fields.linuxPulseLatencyUsec,
      0LL);
    iosEnableSonicSync = config->fields.iosEnableSonicSync;
    v25 = System_Math__Max_63220196(config->fields.iosBufferingTime, 16, 0LL);
    CriAtomPlugin__SetConfigAdditionalParameters_IOS(iosEnableSonicSync, v25, config->fields.iosOverrideIPodMusic, 0LL);
    if ( !config->fields.androidBufferingTime )
    {
      v26 = 4000.0 / config->fields.serverFrequency;
      v27 = (int)v26;
      if ( v26 == INFINITY )
        v27 = 0x80000000;
      config->fields.androidBufferingTime = v27;
    }
    if ( !config->fields.androidStartBufferingTime )
    {
      v28 = 3000.0 / config->fields.serverFrequency;
      v29 = (int)v28;
      if ( v28 == INFINITY )
        v29 = 0x80000000;
      config->fields.androidStartBufferingTime = v29;
    }
    IsLibraryInitialized = CriAtomEx_TypeInfo;
    v30 = 2 * config->fields.androidForceToUseAsrForDefaultPlayback;
    if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo, v15);
      IsLibraryInitialized = CriAtomEx_TypeInfo;
    }
    IsLibraryInitialized->static_fields->androidDefaultSoundRendererType = v30;
    androidLowLatencyStandardVoicePoolConfig = config->fields.androidLowLatencyStandardVoicePoolConfig;
    if ( !androidLowLatencyStandardVoicePoolConfig )
      goto LABEL_54;
    androidEnableSonicSync = config->fields.androidEnableSonicSync;
    memoryVoices = androidLowLatencyStandardVoicePoolConfig->fields.memoryVoices;
    streamingVoices = androidLowLatencyStandardVoicePoolConfig->fields.streamingVoices;
    androidBufferingTime = config->fields.androidBufferingTime;
    androidStartBufferingTime = config->fields.androidStartBufferingTime;
    androidUsesAndroidFastMixer = config->fields.androidUsesAndroidFastMixer;
    androidUsesAAudio = config->fields.androidUsesAAudio;
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v15);
    CriAtomPlugin__SetConfigAdditionalParameters_ANDROID(
      androidEnableSonicSync,
      memoryVoices,
      streamingVoices,
      androidBufferingTime,
      androidStartBufferingTime,
      androidUsesAndroidFastMixer,
      androidUsesAAudio,
      0LL);
    vitaAtrac9VoicePoolConfig = config->fields.vitaAtrac9VoicePoolConfig;
    if ( !vitaAtrac9VoicePoolConfig )
      goto LABEL_54;
    vitaManaVoicePoolConfig = config->fields.vitaManaVoicePoolConfig;
    if ( !vitaManaVoicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_VITA(
      vitaAtrac9VoicePoolConfig->fields.memoryVoices,
      vitaAtrac9VoicePoolConfig->fields.streamingVoices,
      vitaManaVoicePoolConfig->fields.numberOfManaDecoders,
      0LL);
    ps4Audio3dConfig = config->fields.ps4Audio3dConfig;
    if ( !ps4Audio3dConfig )
      goto LABEL_54;
    v42 = config->fields.vrMode || ps4Audio3dConfig->fields.useAudio3D;
    ps4Audio3dConfig->fields.useAudio3D = v42;
    ps4Atrac9VoicePoolConfig = config->fields.ps4Atrac9VoicePoolConfig;
    if ( !ps4Atrac9VoicePoolConfig )
      goto LABEL_54;
    voicePoolConfig = ps4Audio3dConfig->fields.voicePoolConfig;
    if ( !voicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_PS4(
      ps4Atrac9VoicePoolConfig->fields.memoryVoices,
      ps4Atrac9VoicePoolConfig->fields.streamingVoices,
      v42,
      voicePoolConfig->fields.memoryVoices,
      voicePoolConfig->fields.streamingVoices,
      0LL);
    switchOpusVoicePoolConfig = config->fields.switchOpusVoicePoolConfig;
    if ( !switchOpusVoicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_SWITCH(
      switchOpusVoicePoolConfig->fields.memoryVoices,
      switchOpusVoicePoolConfig->fields.streamingVoices,
      config->fields.switchInitializeSocket,
      0LL);
    webglWebAudioVoicePoolConfig = config->fields.webglWebAudioVoicePoolConfig;
    if ( !webglWebAudioVoicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_WEBGL(webglWebAudioVoicePoolConfig->fields.voices, 0LL);
    CriAtomPlugin__InitializeLibrary(0LL);
    if ( config->fields.useRandomSeedWithTime )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v15);
      dateData = System_DateTime__get_Now(0LL).fields._dateData;
      v57.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v57, 0LL);
      if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo, v47);
      CriAtomEx__SetRandomSeed(Ticks, 0LL);
    }
    acfFileName = config->fields.acfFileName;
    if ( !acfFileName )
LABEL_54:
      sub_1BCAA3C(IsLibraryInitialized, v15);
    if ( acfFileName->fields._stringLength )
    {
      if ( CriWare_Common__IsStreamingAssetsPath(config->fields.acfFileName, 0LL) )
      {
        streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0LL);
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v51);
        acfFileName = System_IO_Path__Combine(streamingAssetsPath, acfFileName, 0LL);
      }
      if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo, v50);
      CriAtomEx__RegisterAcf(0LL, acfFileName, 0LL);
    }
    keepPlayingSoundOnPause = config->fields.keepPlayingSoundOnPause;
    v54 = CriAtomServer_TypeInfo;
    if ( !CriAtomServer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomServer_TypeInfo, v15);
      v54 = CriAtomServer_TypeInfo;
    }
    v54->static_fields->KeepPlayingSoundOnPause = keepPlayingSoundOnPause;
  }
  return (v16 & 1) == 0;
}


bool __fastcall CriWareInitializer__InitializeFileSystem(CriFsConfig_o *config, const MethodInfo *method)
{
  __int64 v2; // x2
  CriFsPlugin_c *inited; // x0
  struct System_String_o *IsLibraryInitialized; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x7
  char v8; // w20
  int32_t numberOfLoaders; // w21
  int32_t numberOfBinders; // w22
  int32_t numberOfInstallers; // w24
  int32_t installBufferSize; // w26
  int32_t maxPath; // w23
  _BOOL4 minimizeFileDescriptorUsage; // w27
  _BOOL4 enableCrcCheck; // w28
  const MethodInfo *v16; // x1
  int32_t androidDeviceReadBitrate; // w21
  const MethodInfo *v18; // x0

  if ( (byte_4B107AA & 1) == 0 )
  {
    sub_1BCA7E0(&CriFsPlugin_TypeInfo, method, v2);
    byte_4B107AA = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method);
  IsLibraryInitialized = (struct System_String_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v8 = (char)IsLibraryInitialized;
  if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
  {
    if ( !config )
      goto LABEL_17;
    numberOfLoaders = config->fields.numberOfLoaders;
    numberOfBinders = config->fields.numberOfBinders;
    numberOfInstallers = config->fields.numberOfInstallers;
    installBufferSize = config->fields.installBufferSize;
    maxPath = config->fields.maxPath;
    minimizeFileDescriptorUsage = config->fields.minimizeFileDescriptorUsage;
    enableCrcCheck = config->fields.enableCrcCheck;
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v6);
    CriFsPlugin__SetConfigParameters(
      numberOfLoaders,
      numberOfBinders,
      numberOfInstallers,
      installBufferSize << 10,
      maxPath,
      minimizeFileDescriptorUsage,
      enableCrcCheck,
      v7);
    androidDeviceReadBitrate = config->fields.androidDeviceReadBitrate;
    if ( !androidDeviceReadBitrate )
    {
      androidDeviceReadBitrate = 50000000;
      config->fields.androidDeviceReadBitrate = 50000000;
    }
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v16);
    CriFsPlugin__SetConfigAdditionalParameters_ANDROID(androidDeviceReadBitrate, v16);
    CriFsPlugin__InitializeLibrary(v18);
    IsLibraryInitialized = config->fields.userAgentString;
    if ( !IsLibraryInitialized )
LABEL_17:
      sub_1BCAA3C(IsLibraryInitialized, v6);
    if ( IsLibraryInitialized->fields._stringLength )
      CriFsUtility__CRIWARE14C89F34(IsLibraryInitialized, v6);
  }
  return (v8 & 1) == 0;
}


bool __fastcall CriWareInitializer__InitializeMana(CriManaConfig_o *config, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CriManaPlugin_c *inited; // x0
  _BOOL8 IsLibraryInitialized; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  bool v10; // w19
  _BOOL4 graphicsMultiThreaded; // w22
  int32_t numberOfMaxEntries; // w20
  int32_t numberOfDecoders; // w21
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x0

  if ( (byte_4B107AC & 1) == 0 )
  {
    sub_1BCA7E0(&CriManaPlugin_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_4009/*"CRI_LINEAR_COLORSPACE"*/, v4, v5);
    byte_4B107AC = 1;
  }
  inited = CriManaPlugin_TypeInfo;
  if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, method);
  IsLibraryInitialized = CriManaPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v10 = IsLibraryInitialized;
  if ( !IsLibraryInitialized )
  {
    if ( !config )
      sub_1BCAA3C(IsLibraryInitialized, v8);
    graphicsMultiThreaded = config->fields.graphicsMultiThreaded;
    numberOfDecoders = config->fields.numberOfDecoders;
    numberOfMaxEntries = config->fields.numberOfMaxEntries;
    if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v8);
    CriManaPlugin__SetConfigParameters(graphicsMultiThreaded, numberOfDecoders, numberOfMaxEntries, v9);
    CriManaPlugin__SetConfigAdditonalParameters_ANDROID(1, 0, v14);
    CriManaPlugin__InitializeLibrary(v15);
    if ( UnityEngine_QualitySettings__get_activeColorSpace(0LL) == 1 )
      UnityEngine_Shader__EnableKeyword((System_String_o *)StringLiteral_4009/*"CRI_LINEAR_COLORSPACE"*/, 0LL);
  }
  return !v10;
}


bool __fastcall CriWareInitializer__IsInitialized(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32_t initializationCount; // w19

  if ( (byte_4B107A8 & 1) == 0 )
  {
    sub_1BCA7E0(&CriWareInitializer_TypeInfo, v1, v2);
    byte_4B107A8 = 1;
  }
  initializationCount = CriWareInitializer_TypeInfo->static_fields->initializationCount;
  if ( initializationCount <= 0 )
    CriWare_Common__CheckBinaryVersionCompatibility(0LL);
  return initializationCount > 0;
}


// attributes: thunk
void __fastcall CriWareInitializer__OnDestroy(CriWareInitializer_o *this, const MethodInfo *method)
{
  CriWareInitializer__Shutdown(this, method);
}


void __fastcall CriWareInitializer__Shutdown(CriWareInitializer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct CriWareInitializer_StaticFields *static_fields; // x8
  bool v11; // zf
  int v12; // w9
  CriManaPlugin_c *inited; // x0
  CriAtomExLatencyEstimator_EstimatorInfo_o v14; // x1
  CriFsPlugin_c *v15; // x0

  if ( (byte_4B107A7 & 1) == 0 )
  {
    sub_1BCA7E0(&CriAtomPlugin_TypeInfo, method, v2);
    sub_1BCA7E0(&CriFsPlugin_TypeInfo, v4, v5);
    sub_1BCA7E0(&CriManaPlugin_TypeInfo, v6, v7);
    sub_1BCA7E0(&CriWareInitializer_TypeInfo, v8, v9);
    byte_4B107A7 = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  v12 = static_fields->initializationCount - 1;
  v11 = static_fields->initializationCount == 1;
  static_fields->initializationCount = v12;
  if ( v11 )
  {
    if ( this->fields.initializesMana )
    {
      inited = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, method);
      CriManaPlugin__FinalizeLibrary((const MethodInfo *)inited);
    }
    if ( this->fields.initializesAtom )
    {
      while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
        CriAtomExLatencyEstimator__FinalizeModule(0LL);
      if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
        ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(CriAtomPlugin_TypeInfo, v14);
      CriAtomPlugin__FinalizeLibrary(0LL);
    }
    if ( this->fields.initializesFileSystem )
    {
      v15 = CriFsPlugin_TypeInfo;
      if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
        v15 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method);
      CriFsPlugin__FinalizeLibrary((const MethodInfo *)v15);
    }
  }
  else
  {
    static_fields->initializationCount = v12 & ~(v12 >> 31);
  }
}


void __fastcall CriWareInitializer__Start(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}