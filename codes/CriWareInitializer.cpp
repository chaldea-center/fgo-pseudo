void __fastcall CriWareInitializer___ctor(CriWareInitializer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CriFsConfig_o *v6; // x20
  const MethodInfo *v7; // x1
  CriAtomConfig_o *v8; // x20
  const MethodInfo *v9; // x1
  CriManaConfig_o *v10; // x20
  const MethodInfo *v11; // x1
  CriWareDecrypterConfig_o *v12; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4B15F7D & 1) == 0 )
  {
    sub_1BCAFF8(&CriAtomConfig_TypeInfo, method);
    sub_1BCAFF8(&CriFsConfig_TypeInfo, v3);
    sub_1BCAFF8(&CriManaConfig_TypeInfo, v4);
    sub_1BCAFF8(&CriWareDecrypterConfig_TypeInfo, v5);
    byte_4B15F7D = 1;
  }
  this->fields.initializesFileSystem = 1;
  v6 = (CriFsConfig_o *)sub_1BCB244(CriFsConfig_TypeInfo);
  CriFsConfig___ctor(v6, v7);
  this->fields.fileSystemConfig = v6;
  sub_1BCAF9C(&this->fields.fileSystemConfig);
  this->fields.initializesAtom = 1;
  v8 = (CriAtomConfig_o *)sub_1BCB244(CriAtomConfig_TypeInfo);
  CriAtomConfig___ctor(v8, v9);
  this->fields.atomConfig = v8;
  sub_1BCAF9C(&this->fields.atomConfig);
  this->fields.initializesMana = 1;
  v10 = (CriManaConfig_o *)sub_1BCB244(CriManaConfig_TypeInfo);
  CriManaConfig___ctor(v10, v11);
  this->fields.manaConfig = v10;
  sub_1BCAF9C(&this->fields.manaConfig);
  v12 = (CriWareDecrypterConfig_o *)sub_1BCB244(CriWareDecrypterConfig_TypeInfo);
  CriWareDecrypterConfig___ctor(v12, v13);
  this->fields.decrypterConfig = v12;
  sub_1BCAF9C(&this->fields.decrypterConfig);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CriWareInitializer__AddAudioEffectInterface(intptr_t effect_interface, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_IntPtr__o *v5; // x0
  struct System_IntPtr_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  System_Collections_Generic_List_IntPtr__o *effect_interface_list; // [xsp+8h] [xbp-28h] BYREF

  v2 = *(_QWORD *)&effect_interface;
  if ( (byte_4B15F79 & 1) == 0 )
  {
    sub_1BCAFF8(&CriAtomPlugin_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_IntPtr__Add__, v3);
    byte_4B15F79 = 1;
  }
  effect_interface_list = 0LL;
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  if ( CriAtomPlugin__GetAudioEffectInterfaceList(&effect_interface_list, 0LL) )
  {
    v5 = effect_interface_list;
    if ( !effect_interface_list
      || (items = effect_interface_list->fields._items,
          v7 = Method_System_Collections_Generic_List_IntPtr__Add__,
          ++effect_interface_list->fields._version,
          !items) )
    {
      sub_1BCB254(v5, v4);
    }
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_IntPtr___AddWithResize(
        v5,
        v2,
        *(const MethodInfo_36A4430 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      *(_QWORD *)&items->m_Items[2 * size + 1] = v2;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CriWareInitializer_StaticFields *static_fields; // x8
  CriFsPlugin_c *inited; // x0
  CriManaPlugin_c *v13; // x0
  UnityEngine_Transform_o *IsLibraryInitialized; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  CriFsPlugin_c *v17; // x0
  CriManaPlugin_c *v18; // x0
  CriFsPlugin_c *v19; // x0
  CriManaPlugin_c *v20; // x0
  CriManaPlugin_c *v21; // x0
  CriFsPlugin_c *v22; // x0
  struct CriAtomConfig_o *atomConfig; // x20
  int32_t inGamePreviewMode; // w8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B15F76 & 1) == 0 )
  {
    sub_1BCAFF8(&CriAtomPlugin_TypeInfo, method);
    sub_1BCAFF8(&CriFsPlugin_TypeInfo, v3);
    sub_1BCAFF8(&CriManaPlugin_TypeInfo, v4);
    sub_1BCAFF8(&CriWareInitializer_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Debug_TypeInfo, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    sub_1BCAFF8(&StringLiteral_1113/*"0"*/, v9);
    byte_4B15F76 = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  if ( static_fields->initializationCount++ )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)this, 0LL);
    return;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    if ( CriAtomPlugin__IsLibraryInitialized(0LL) )
    {
      v13 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v13 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v13);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
        goto LABEL_76;
    }
  }
  v17 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v17 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v17) )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    if ( CriAtomPlugin__IsLibraryInitialized(0LL) )
    {
      v18 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v18 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v18);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
        goto LABEL_76;
    }
  }
  v19 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v19 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  IsLibraryInitialized = (UnityEngine_Transform_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v19);
  if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriAtomPlugin__IsLibraryInitialized(0LL);
    if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
    {
      v20 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v20 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v20);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
      {
LABEL_76:
        if ( this->fields.initializesMana )
        {
          v21 = CriManaPlugin_TypeInfo;
          if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
            v21 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
          CriManaPlugin__FinalizeLibrary((const MethodInfo *)v21);
        }
        if ( this->fields.initializesAtom )
        {
          while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
            CriAtomExLatencyEstimator__FinalizeModule(0LL);
          if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
          CriAtomPlugin__FinalizeLibrary(0LL);
        }
        if ( this->fields.initializesFileSystem )
        {
          v22 = CriFsPlugin_TypeInfo;
          if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
            v22 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
          CriFsPlugin__FinalizeLibrary((const MethodInfo *)v22);
        }
      }
    }
  }
  if ( this->fields.initializesFileSystem )
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriWareInitializer__InitializeFileSystem(
                                                        this->fields.fileSystemConfig,
                                                        v15);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
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
    CriWareInitializer__InitializeAtom(atomConfig, v15);
  }
  if ( this->fields.initializesMana )
    CriWareInitializer__InitializeMana(this->fields.manaConfig, v15);
  if ( this->fields.useDecrypter )
    CriWareDecrypter__Initialize(this->fields.decrypterConfig, v15);
  else
    CriWareDecrypter__Initialize_30414868(
      (System_String_o *)StringLiteral_1113/*"0"*/,
      (System_String_o *)StringLiteral_1/*""*/,
      0,
      0,
      v16);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DontDestroyOnLoad(gameObject, 0LL);
        return;
      }
    }
LABEL_73:
    sub_1BCB254(IsLibraryInitialized, v15);
  }
}


bool __fastcall CriWareInitializer__InitializeAtom(CriAtomConfig_o *config, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CriAtomEx_c *IsLibraryInitialized; // x0
  __int64 v9; // x1
  char v10; // w20
  int32_t maxVirtualVoices; // w21
  int32_t RequiredMaxVirtualVoices; // w22
  struct CriAtomConfig_StandardVoicePoolConfig_o *standardVoicePoolConfig; // x8
  struct CriAtomConfig_HcaMxVoicePoolConfig_o *hcaMxVoicePoolConfig; // x9
  struct CriAtomConfig_InGamePreviewConfig_o *inGamePreviewConfig; // x8
  struct CriAtomConfig_EditorPcmOutputConfig_o *editorPcmOutputConfig; // x8
  bool iosEnableSonicSync; // w21
  int32_t v18; // w0
  double v19; // d0
  int32_t v20; // w8
  double v21; // d0
  int32_t v22; // w8
  int v23; // w21
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
  bool v35; // w8
  struct CriAtomConfig_Ps4Atrac9VoicePoolConfig_o *ps4Atrac9VoicePoolConfig; // x10
  struct CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig_o *voicePoolConfig; // x9
  struct CriAtomConfig_SwitchOpusVoicePoolConfig_o *switchOpusVoicePoolConfig; // x8
  struct CriAtomConfig_WebGLWebAudioVoicePoolConfig_o *webglWebAudioVoicePoolConfig; // x8
  uint32_t Ticks; // w21
  struct System_String_o *acfFileName; // x21
  System_String_o *streamingAssetsPath; // x22
  bool keepPlayingSoundOnPause; // w19
  CriAtomServer_c *v44; // x0
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF
  System_DateTime_o v47; // 0:x0.8

  if ( (byte_4B15F7B & 1) == 0 )
  {
    sub_1BCAFF8(&CriAtomEx_TypeInfo, method);
    sub_1BCAFF8(&CriAtomPlugin_TypeInfo, v3);
    sub_1BCAFF8(&CriAtomServer_TypeInfo, v4);
    sub_1BCAFF8(&System_DateTime_TypeInfo, v5);
    sub_1BCAFF8(&System_Math_TypeInfo, v6);
    sub_1BCAFF8(&System_IO_Path_TypeInfo, v7);
    byte_4B15F7B = 1;
  }
  dateData = 0LL;
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  IsLibraryInitialized = (CriAtomEx_c *)CriAtomPlugin__IsLibraryInitialized(0LL);
  v10 = (char)IsLibraryInitialized;
  if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
  {
    if ( !config )
      goto LABEL_54;
    maxVirtualVoices = config->fields.maxVirtualVoices;
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    RequiredMaxVirtualVoices = CriAtomPlugin__GetRequiredMaxVirtualVoices(config, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    IsLibraryInitialized = (CriAtomEx_c *)System_Math__Max_63972460(maxVirtualVoices, RequiredMaxVirtualVoices, 0LL);
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
    v18 = System_Math__Max_63972460(config->fields.iosBufferingTime, 16, 0LL);
    CriAtomPlugin__SetConfigAdditionalParameters_IOS(iosEnableSonicSync, v18, config->fields.iosOverrideIPodMusic, 0LL);
    if ( !config->fields.androidBufferingTime )
    {
      v19 = 4000.0 / config->fields.serverFrequency;
      v20 = (int)v19;
      if ( v19 == INFINITY )
        v20 = 0x80000000;
      config->fields.androidBufferingTime = v20;
    }
    if ( !config->fields.androidStartBufferingTime )
    {
      v21 = 3000.0 / config->fields.serverFrequency;
      v22 = (int)v21;
      if ( v21 == INFINITY )
        v22 = 0x80000000;
      config->fields.androidStartBufferingTime = v22;
    }
    IsLibraryInitialized = CriAtomEx_TypeInfo;
    v23 = 2 * config->fields.androidForceToUseAsrForDefaultPlayback;
    if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
      IsLibraryInitialized = CriAtomEx_TypeInfo;
    }
    IsLibraryInitialized->static_fields->androidDefaultSoundRendererType = v23;
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
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
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
    v35 = config->fields.vrMode || ps4Audio3dConfig->fields.useAudio3D;
    ps4Audio3dConfig->fields.useAudio3D = v35;
    ps4Atrac9VoicePoolConfig = config->fields.ps4Atrac9VoicePoolConfig;
    if ( !ps4Atrac9VoicePoolConfig )
      goto LABEL_54;
    voicePoolConfig = ps4Audio3dConfig->fields.voicePoolConfig;
    if ( !voicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_PS4(
      ps4Atrac9VoicePoolConfig->fields.memoryVoices,
      ps4Atrac9VoicePoolConfig->fields.streamingVoices,
      v35,
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
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0LL).fields._dateData;
      v47.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v47, 0LL);
      if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
      CriAtomEx__SetRandomSeed(Ticks, 0LL);
    }
    acfFileName = config->fields.acfFileName;
    if ( !acfFileName )
LABEL_54:
      sub_1BCB254(IsLibraryInitialized, v9);
    if ( acfFileName->fields._stringLength )
    {
      if ( CriWare_Common__IsStreamingAssetsPath(config->fields.acfFileName, 0LL) )
      {
        streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0LL);
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        acfFileName = System_IO_Path__Combine(streamingAssetsPath, acfFileName, 0LL);
      }
      if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
      CriAtomEx__RegisterAcf(0LL, acfFileName, 0LL);
    }
    keepPlayingSoundOnPause = config->fields.keepPlayingSoundOnPause;
    v44 = CriAtomServer_TypeInfo;
    if ( !CriAtomServer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomServer_TypeInfo);
      v44 = CriAtomServer_TypeInfo;
    }
    v44->static_fields->KeepPlayingSoundOnPause = keepPlayingSoundOnPause;
  }
  return (v10 & 1) == 0;
}


bool __fastcall CriWareInitializer__InitializeFileSystem(CriFsConfig_o *config, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  struct System_String_o *IsLibraryInitialized; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x7
  char v7; // w20
  int32_t numberOfLoaders; // w21
  int32_t numberOfBinders; // w22
  int32_t numberOfInstallers; // w24
  int32_t installBufferSize; // w26
  int32_t maxPath; // w23
  _BOOL4 minimizeFileDescriptorUsage; // w27
  _BOOL4 enableCrcCheck; // w28
  const MethodInfo *v15; // x1
  int32_t androidDeviceReadBitrate; // w21
  const MethodInfo *v17; // x0

  if ( (byte_4B15F7A & 1) == 0 )
  {
    sub_1BCAFF8(&CriFsPlugin_TypeInfo, method);
    byte_4B15F7A = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  IsLibraryInitialized = (struct System_String_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v7 = (char)IsLibraryInitialized;
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
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    CriFsPlugin__SetConfigAdditionalParameters_ANDROID(androidDeviceReadBitrate, v15);
    CriFsPlugin__InitializeLibrary(v17);
    IsLibraryInitialized = config->fields.userAgentString;
    if ( !IsLibraryInitialized )
LABEL_17:
      sub_1BCB254(IsLibraryInitialized, v5);
    if ( IsLibraryInitialized->fields._stringLength )
      CriFsUtility__CRIWARE14C89F34(IsLibraryInitialized, v5);
  }
  return (v7 & 1) == 0;
}


bool __fastcall CriWareInitializer__InitializeMana(CriManaConfig_o *config, const MethodInfo *method)
{
  __int64 v3; // x1
  CriManaPlugin_c *inited; // x0
  _BOOL8 IsLibraryInitialized; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  bool v8; // w19
  _BOOL4 graphicsMultiThreaded; // w22
  int32_t numberOfMaxEntries; // w20
  int32_t numberOfDecoders; // w21
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x0

  if ( (byte_4B15F7C & 1) == 0 )
  {
    sub_1BCAFF8(&CriManaPlugin_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_3893/*"CRI_LINEAR_COLORSPACE"*/, v3);
    byte_4B15F7C = 1;
  }
  inited = CriManaPlugin_TypeInfo;
  if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  IsLibraryInitialized = CriManaPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v8 = IsLibraryInitialized;
  if ( !IsLibraryInitialized )
  {
    if ( !config )
      sub_1BCB254(IsLibraryInitialized, v6);
    graphicsMultiThreaded = config->fields.graphicsMultiThreaded;
    numberOfDecoders = config->fields.numberOfDecoders;
    numberOfMaxEntries = config->fields.numberOfMaxEntries;
    if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
    CriManaPlugin__SetConfigParameters(graphicsMultiThreaded, numberOfDecoders, numberOfMaxEntries, v7);
    CriManaPlugin__SetConfigAdditonalParameters_ANDROID(1, 0, v12);
    CriManaPlugin__InitializeLibrary(v13);
    if ( UnityEngine_QualitySettings__get_activeColorSpace(0LL) == 1 )
      UnityEngine_Shader__EnableKeyword((System_String_o *)StringLiteral_3893/*"CRI_LINEAR_COLORSPACE"*/, 0LL);
  }
  return !v8;
}


bool __fastcall CriWareInitializer__IsInitialized(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t initializationCount; // w19

  if ( (byte_4B15F78 & 1) == 0 )
  {
    sub_1BCAFF8(&CriWareInitializer_TypeInfo, v1);
    byte_4B15F78 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CriWareInitializer_StaticFields *static_fields; // x8
  bool v7; // zf
  int v8; // w9
  CriManaPlugin_c *inited; // x0
  CriFsPlugin_c *v10; // x0

  if ( (byte_4B15F77 & 1) == 0 )
  {
    sub_1BCAFF8(&CriAtomPlugin_TypeInfo, method);
    sub_1BCAFF8(&CriFsPlugin_TypeInfo, v3);
    sub_1BCAFF8(&CriManaPlugin_TypeInfo, v4);
    sub_1BCAFF8(&CriWareInitializer_TypeInfo, v5);
    byte_4B15F77 = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  v8 = static_fields->initializationCount - 1;
  v7 = static_fields->initializationCount == 1;
  static_fields->initializationCount = v8;
  if ( v7 )
  {
    if ( this->fields.initializesMana )
    {
      inited = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      CriManaPlugin__FinalizeLibrary((const MethodInfo *)inited);
    }
    if ( this->fields.initializesAtom )
    {
      while ( CriAtomExLatencyEstimator__GetCurrentInfo(0LL).fields.status )
        CriAtomExLatencyEstimator__FinalizeModule(0LL);
      if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
      CriAtomPlugin__FinalizeLibrary(0LL);
    }
    if ( this->fields.initializesFileSystem )
    {
      v10 = CriFsPlugin_TypeInfo;
      if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
        v10 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
      CriFsPlugin__FinalizeLibrary((const MethodInfo *)v10);
    }
  }
  else
  {
    static_fields->initializationCount = v8 & ~(v8 >> 31);
  }
}


void __fastcall CriWareInitializer__Start(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}