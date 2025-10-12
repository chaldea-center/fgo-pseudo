void CriWareInitializer___ctor(CriWareInitializer_o *this, const MethodInfo *method)
{
  CriFsConfig_o *v3; // x20
  const MethodInfo *v4; // x1
  CriAtomConfig_o *v5; // x20
  const MethodInfo *v6; // x1
  CriManaConfig_o *v7; // x20
  const MethodInfo *v8; // x1
  CriWareDecrypterConfig_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4C311BD & 1) == 0 )
  {
    sub_1C32C20(&CriAtomConfig_TypeInfo);
    sub_1C32C20(&CriFsConfig_TypeInfo);
    sub_1C32C20(&CriManaConfig_TypeInfo);
    sub_1C32C20(&CriWareDecrypterConfig_TypeInfo);
    byte_4C311BD = 1;
  }
  this->fields.initializesFileSystem = 1;
  v3 = (CriFsConfig_o *)sub_1C32E6C(CriFsConfig_TypeInfo);
  CriFsConfig___ctor(v3, v4);
  this->fields.fileSystemConfig = v3;
  sub_1C32BC4(&this->fields.fileSystemConfig, v3);
  this->fields.initializesAtom = 1;
  v5 = (CriAtomConfig_o *)sub_1C32E6C(CriAtomConfig_TypeInfo);
  CriAtomConfig___ctor(v5, v6);
  this->fields.atomConfig = v5;
  sub_1C32BC4(&this->fields.atomConfig, v5);
  this->fields.initializesMana = 1;
  v7 = (CriManaConfig_o *)sub_1C32E6C(CriManaConfig_TypeInfo);
  CriManaConfig___ctor(v7, v8);
  this->fields.manaConfig = v7;
  sub_1C32BC4(&this->fields.manaConfig, v7);
  v9 = (CriWareDecrypterConfig_o *)sub_1C32E6C(CriWareDecrypterConfig_TypeInfo);
  CriWareDecrypterConfig___ctor(v9, v10);
  this->fields.decrypterConfig = v9;
  sub_1C32BC4(&this->fields.decrypterConfig, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0);
}


void CriWareInitializer__AddAudioEffectInterface(intptr_t effect_interface, const MethodInfo *method)
{
  System_Collections_Generic_List_IntPtr__o *v3; // x0
  struct System_IntPtr_array *items; // x8
  _QWORD *v5; // x9
  __int64 size; // x10
  System_Collections_Generic_List_IntPtr__o *effect_interface_list; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C311B9 & 1) == 0 )
  {
    sub_1C32C20(&CriAtomPlugin_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_IntPtr__Add__);
    byte_4C311B9 = 1;
  }
  effect_interface_list = 0;
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  if ( CriAtomPlugin__GetAudioEffectInterfaceList(&effect_interface_list, 0) )
  {
    v3 = effect_interface_list;
    if ( !effect_interface_list
      || (items = effect_interface_list->fields._items,
          v5 = Method_System_Collections_Generic_List_IntPtr__Add__,
          ++effect_interface_list->fields._version,
          !items) )
    {
      sub_1C32E7C(v3);
    }
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_IntPtr___AddWithResize(
        v3,
        effect_interface,
        *(const MethodInfo_378301C **)(*(_QWORD *)(v5[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size] = effect_interface;
    }
  }
}


void CriWareInitializer__Awake(CriWareInitializer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CriWare_Common__CheckBinaryVersionCompatibility(0);
  if ( !this->fields.dontInitializeOnAwake )
    CriWareInitializer__Initialize(this, v3);
}


void CriWareInitializer__CriInternalLateUpdate(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}


void CriWareInitializer__CriInternalUpdate(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}


void CriWareInitializer__Initialize(CriWareInitializer_o *this, const MethodInfo *method)
{
  struct CriWareInitializer_StaticFields *static_fields; // x8
  CriFsPlugin_c *inited; // x0
  CriManaPlugin_c *v6; // x0
  UnityEngine_Transform_o *IsLibraryInitialized; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x4
  CriFsPlugin_c *v10; // x0
  CriManaPlugin_c *v11; // x0
  CriFsPlugin_c *v12; // x0
  CriManaPlugin_c *v13; // x0
  CriManaPlugin_c *v14; // x0
  CriFsPlugin_c *v15; // x0
  struct CriAtomConfig_o *atomConfig; // x20
  int32_t inGamePreviewMode; // w8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C311B6 & 1) == 0 )
  {
    sub_1C32C20(&CriAtomPlugin_TypeInfo);
    sub_1C32C20(&CriFsPlugin_TypeInfo);
    sub_1C32C20(&CriManaPlugin_TypeInfo);
    sub_1C32C20(&CriWareInitializer_TypeInfo);
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C311B6 = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  if ( static_fields->initializationCount++ )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)this, 0);
    return;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    if ( CriAtomPlugin__IsLibraryInitialized(0) )
    {
      v6 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v6 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v6);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
        goto LABEL_75;
    }
  }
  v10 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v10 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v10) )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    if ( CriAtomPlugin__IsLibraryInitialized(0) )
    {
      v11 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v11 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v11);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
        goto LABEL_75;
    }
  }
  v12 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    v12 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  IsLibraryInitialized = (UnityEngine_Transform_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v12);
  if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
  {
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriAtomPlugin__IsLibraryInitialized(0);
    if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
    {
      v13 = CriManaPlugin_TypeInfo;
      if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
        v13 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v13);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
      {
LABEL_75:
        if ( this->fields.initializesMana )
        {
          v14 = CriManaPlugin_TypeInfo;
          if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
            v14 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
          CriManaPlugin__FinalizeLibrary((const MethodInfo *)v14);
        }
        if ( this->fields.initializesAtom )
        {
          while ( CriAtomExLatencyEstimator__GetCurrentInfo(0).fields.status )
            CriAtomExLatencyEstimator__FinalizeModule(0);
          if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
          CriAtomPlugin__FinalizeLibrary(0);
        }
        if ( this->fields.initializesFileSystem )
        {
          v15 = CriFsPlugin_TypeInfo;
          if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
            v15 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
          CriFsPlugin__FinalizeLibrary((const MethodInfo *)v15);
        }
      }
    }
  }
  if ( this->fields.initializesFileSystem )
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriWareInitializer__InitializeFileSystem(
                                                        this->fields.fileSystemConfig,
                                                        v8);
  if ( this->fields.initializesAtom )
  {
    atomConfig = this->fields.atomConfig;
    if ( !atomConfig )
      goto LABEL_72;
    inGamePreviewMode = atomConfig->fields.inGamePreviewMode;
    switch ( inGamePreviewMode )
    {
      case 2:
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        atomConfig->fields.usesInGamePreview = UnityEngine_Debug__get_isDebugBuild(0);
        atomConfig = this->fields.atomConfig;
        break;
      case 1:
        atomConfig->fields.usesInGamePreview = 1;
        break;
      case 0:
        atomConfig->fields.usesInGamePreview = 0;
        break;
    }
    CriWareInitializer__InitializeAtom(atomConfig, v8);
  }
  if ( this->fields.initializesMana )
    CriWareInitializer__InitializeMana(this->fields.manaConfig, v8);
  if ( this->fields.useDecrypter )
    CriWareDecrypter__Initialize(this->fields.decrypterConfig, v8);
  else
    CriWareDecrypter__Initialize_30840880(
      (System_String_o *)StringLiteral_1122/*"0"*/,
      (System_String_o *)StringLiteral_1/*""*/,
      0,
      0,
      v9);
  if ( this->fields.dontDestroyOnLoad )
  {
    IsLibraryInitialized = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( IsLibraryInitialized )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)IsLibraryInitialized,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
      return;
    }
LABEL_72:
    sub_1C32E7C(IsLibraryInitialized);
  }
}


bool CriWareInitializer__InitializeAtom(CriAtomConfig_o *config, const MethodInfo *method)
{
  CriAtomEx_c *IsLibraryInitialized; // x0
  char v4; // w20
  int32_t maxVirtualVoices; // w21
  int32_t RequiredMaxVirtualVoices; // w22
  struct CriAtomConfig_StandardVoicePoolConfig_o *standardVoicePoolConfig; // x8
  struct CriAtomConfig_HcaMxVoicePoolConfig_o *hcaMxVoicePoolConfig; // x9
  struct CriAtomConfig_InGamePreviewConfig_o *inGamePreviewConfig; // x8
  struct CriAtomConfig_EditorPcmOutputConfig_o *editorPcmOutputConfig; // x8
  bool iosEnableSonicSync; // w21
  int32_t v12; // w0
  double v13; // d0
  int32_t v14; // w8
  double v15; // d0
  int32_t v16; // w8
  int v17; // w21
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
  bool v29; // w8
  struct CriAtomConfig_Ps4Atrac9VoicePoolConfig_o *ps4Atrac9VoicePoolConfig; // x10
  struct CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig_o *voicePoolConfig; // x9
  struct CriAtomConfig_SwitchOpusVoicePoolConfig_o *switchOpusVoicePoolConfig; // x8
  struct CriAtomConfig_WebGLWebAudioVoicePoolConfig_o *webglWebAudioVoicePoolConfig; // x8
  System_DateTime_o v34; // x0
  uint32_t Ticks; // w21
  struct System_String_o *acfFileName; // x21
  System_String_o *streamingAssetsPath; // x22
  bool keepPlayingSoundOnPause; // w19
  CriAtomServer_c *v39; // x0
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4C311BB & 1) == 0 )
  {
    sub_1C32C20(&CriAtomEx_TypeInfo);
    sub_1C32C20(&CriAtomPlugin_TypeInfo);
    sub_1C32C20(&CriAtomServer_TypeInfo);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&System_IO_Path_TypeInfo);
    byte_4C311BB = 1;
  }
  dateData = 0;
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  IsLibraryInitialized = (CriAtomEx_c *)CriAtomPlugin__IsLibraryInitialized(0);
  v4 = (char)IsLibraryInitialized;
  if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
  {
    if ( !config )
      goto LABEL_54;
    maxVirtualVoices = config->fields.maxVirtualVoices;
    if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
    RequiredMaxVirtualVoices = CriAtomPlugin__GetRequiredMaxVirtualVoices(config, 0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    IsLibraryInitialized = (CriAtomEx_c *)System_Math__Max_65041976(maxVirtualVoices, RequiredMaxVirtualVoices, 0);
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
      0);
    inGamePreviewConfig = config->fields.inGamePreviewConfig;
    if ( !inGamePreviewConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigMonitorParametes(
      inGamePreviewConfig->fields.maxPreviewObjects,
      inGamePreviewConfig->fields.communicationBufferSize,
      inGamePreviewConfig->fields.playbackPositionUpdateInterval,
      0);
    editorPcmOutputConfig = config->fields.editorPcmOutputConfig;
    if ( !editorPcmOutputConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_EDITOR(
      editorPcmOutputConfig->fields.enable,
      editorPcmOutputConfig->fields.bufferLength,
      0);
    CriAtomPlugin__SetConfigAdditionalParameters_PC(config->fields.pcBufferingTime, 0);
    CriAtomPlugin__SetConfigAdditionalParameters_LINUX(
      config->fields.linuxOutput,
      config->fields.linuxPulseLatencyUsec,
      0);
    iosEnableSonicSync = config->fields.iosEnableSonicSync;
    v12 = System_Math__Max_65041976(config->fields.iosBufferingTime, 16, 0);
    CriAtomPlugin__SetConfigAdditionalParameters_IOS(iosEnableSonicSync, v12, config->fields.iosOverrideIPodMusic, 0);
    if ( !config->fields.androidBufferingTime )
    {
      v13 = 4000.0 / config->fields.serverFrequency;
      v14 = (int)v13;
      if ( v13 == INFINITY )
        v14 = 0x80000000;
      config->fields.androidBufferingTime = v14;
    }
    if ( !config->fields.androidStartBufferingTime )
    {
      v15 = 3000.0 / config->fields.serverFrequency;
      v16 = (int)v15;
      if ( v15 == INFINITY )
        v16 = 0x80000000;
      config->fields.androidStartBufferingTime = v16;
    }
    IsLibraryInitialized = CriAtomEx_TypeInfo;
    v17 = 2 * config->fields.androidForceToUseAsrForDefaultPlayback;
    if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
      IsLibraryInitialized = CriAtomEx_TypeInfo;
    }
    IsLibraryInitialized->static_fields->androidDefaultSoundRendererType = v17;
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
      0);
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
      0);
    ps4Audio3dConfig = config->fields.ps4Audio3dConfig;
    if ( !ps4Audio3dConfig )
      goto LABEL_54;
    v29 = config->fields.vrMode || ps4Audio3dConfig->fields.useAudio3D;
    ps4Audio3dConfig->fields.useAudio3D = v29;
    ps4Atrac9VoicePoolConfig = config->fields.ps4Atrac9VoicePoolConfig;
    if ( !ps4Atrac9VoicePoolConfig )
      goto LABEL_54;
    voicePoolConfig = ps4Audio3dConfig->fields.voicePoolConfig;
    if ( !voicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_PS4(
      ps4Atrac9VoicePoolConfig->fields.memoryVoices,
      ps4Atrac9VoicePoolConfig->fields.streamingVoices,
      v29,
      voicePoolConfig->fields.memoryVoices,
      voicePoolConfig->fields.streamingVoices,
      0);
    switchOpusVoicePoolConfig = config->fields.switchOpusVoicePoolConfig;
    if ( !switchOpusVoicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_SWITCH(
      switchOpusVoicePoolConfig->fields.memoryVoices,
      switchOpusVoicePoolConfig->fields.streamingVoices,
      config->fields.switchInitializeSocket,
      0);
    webglWebAudioVoicePoolConfig = config->fields.webglWebAudioVoicePoolConfig;
    if ( !webglWebAudioVoicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_WEBGL(webglWebAudioVoicePoolConfig->fields.voices, 0);
    CriAtomPlugin__InitializeLibrary(0);
    if ( config->fields.useRandomSeedWithTime )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0).fields._dateData;
      v34.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v34, 0);
      if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
      CriAtomEx__SetRandomSeed(Ticks, 0);
    }
    acfFileName = config->fields.acfFileName;
    if ( !acfFileName )
LABEL_54:
      sub_1C32E7C(IsLibraryInitialized);
    if ( acfFileName->fields._stringLength )
    {
      if ( CriWare_Common__IsStreamingAssetsPath(config->fields.acfFileName, 0) )
      {
        streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0);
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        acfFileName = System_IO_Path__Combine(streamingAssetsPath, acfFileName, 0);
      }
      if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
      CriAtomEx__RegisterAcf(0, acfFileName, 0);
    }
    keepPlayingSoundOnPause = config->fields.keepPlayingSoundOnPause;
    v39 = CriAtomServer_TypeInfo;
    if ( !CriAtomServer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomServer_TypeInfo);
      v39 = CriAtomServer_TypeInfo;
    }
    v39->static_fields->KeepPlayingSoundOnPause = keepPlayingSoundOnPause;
  }
  return (v4 & 1) == 0;
}


bool CriWareInitializer__InitializeFileSystem(CriFsConfig_o *config, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  struct System_String_o *IsLibraryInitialized; // x0
  const MethodInfo *v5; // x7
  char v6; // w20
  int32_t numberOfLoaders; // w21
  int32_t numberOfBinders; // w22
  int32_t numberOfInstallers; // w24
  int32_t installBufferSize; // w26
  int32_t maxPath; // w23
  _BOOL4 minimizeFileDescriptorUsage; // w27
  _BOOL4 enableCrcCheck; // w28
  const MethodInfo *v14; // x1
  int32_t androidDeviceReadBitrate; // w21
  const MethodInfo *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4C311BA & 1) == 0 )
  {
    sub_1C32C20(&CriFsPlugin_TypeInfo);
    byte_4C311BA = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  IsLibraryInitialized = (struct System_String_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v6 = (char)IsLibraryInitialized;
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
      v5);
    androidDeviceReadBitrate = config->fields.androidDeviceReadBitrate;
    if ( !androidDeviceReadBitrate )
    {
      androidDeviceReadBitrate = 50000000;
      config->fields.androidDeviceReadBitrate = 50000000;
    }
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    CriFsPlugin__SetConfigAdditionalParameters_ANDROID(androidDeviceReadBitrate, v14);
    CriFsPlugin__InitializeLibrary(v16);
    IsLibraryInitialized = config->fields.userAgentString;
    if ( !IsLibraryInitialized )
LABEL_17:
      sub_1C32E7C(IsLibraryInitialized);
    if ( IsLibraryInitialized->fields._stringLength )
      CriFsUtility__CRIWARE14C89F34(IsLibraryInitialized, v17);
  }
  return (v6 & 1) == 0;
}


bool CriWareInitializer__InitializeMana(CriManaConfig_o *config, const MethodInfo *method)
{
  CriManaPlugin_c *inited; // x0
  _BOOL8 IsLibraryInitialized; // x0
  const MethodInfo *v5; // x3
  bool v6; // w19
  _BOOL4 graphicsMultiThreaded; // w22
  int32_t numberOfMaxEntries; // w20
  int32_t numberOfDecoders; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x0

  if ( (byte_4C311BC & 1) == 0 )
  {
    sub_1C32C20(&CriManaPlugin_TypeInfo);
    sub_1C32C20(&StringLiteral_3930/*"CRI_LINEAR_COLORSPACE"*/);
    byte_4C311BC = 1;
  }
  inited = CriManaPlugin_TypeInfo;
  if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  IsLibraryInitialized = CriManaPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v6 = IsLibraryInitialized;
  if ( !IsLibraryInitialized )
  {
    if ( !config )
      sub_1C32E7C(IsLibraryInitialized);
    graphicsMultiThreaded = config->fields.graphicsMultiThreaded;
    numberOfDecoders = config->fields.numberOfDecoders;
    numberOfMaxEntries = config->fields.numberOfMaxEntries;
    if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
    CriManaPlugin__SetConfigParameters(graphicsMultiThreaded, numberOfDecoders, numberOfMaxEntries, v5);
    CriManaPlugin__SetConfigAdditonalParameters_ANDROID(1, 0, v10);
    CriManaPlugin__InitializeLibrary(v11);
    if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
      UnityEngine_Shader__EnableKeyword((System_String_o *)StringLiteral_3930/*"CRI_LINEAR_COLORSPACE"*/, 0);
  }
  return !v6;
}


bool CriWareInitializer__IsInitialized(const MethodInfo *method)
{
  if ( (byte_4C311B8 & 1) == 0 )
  {
    sub_1C32C20(&CriWareInitializer_TypeInfo);
    byte_4C311B8 = 1;
  }
  if ( CriWareInitializer_TypeInfo->static_fields->initializationCount > 0 )
    return 1;
  CriWare_Common__CheckBinaryVersionCompatibility(0);
  return 0;
}


// attributes: thunk
void CriWareInitializer__OnDestroy(CriWareInitializer_o *this, const MethodInfo *method)
{
  CriWareInitializer__Shutdown(this, method);
}


void CriWareInitializer__Shutdown(CriWareInitializer_o *this, const MethodInfo *method)
{
  struct CriWareInitializer_StaticFields *static_fields; // x8
  bool v4; // zf
  int v5; // w9
  CriManaPlugin_c *inited; // x0
  CriFsPlugin_c *v7; // x0

  if ( (byte_4C311B7 & 1) == 0 )
  {
    sub_1C32C20(&CriAtomPlugin_TypeInfo);
    sub_1C32C20(&CriFsPlugin_TypeInfo);
    sub_1C32C20(&CriManaPlugin_TypeInfo);
    sub_1C32C20(&CriWareInitializer_TypeInfo);
    byte_4C311B7 = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  v5 = static_fields->initializationCount - 1;
  v4 = static_fields->initializationCount == 1;
  static_fields->initializationCount = v5;
  if ( v4 )
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
      while ( CriAtomExLatencyEstimator__GetCurrentInfo(0).fields.status )
        CriAtomExLatencyEstimator__FinalizeModule(0);
      if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
      CriAtomPlugin__FinalizeLibrary(0);
    }
    if ( this->fields.initializesFileSystem )
    {
      v7 = CriFsPlugin_TypeInfo;
      if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
        v7 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
      CriFsPlugin__FinalizeLibrary((const MethodInfo *)v7);
    }
  }
  else
  {
    static_fields->initializationCount = v5 & ~(v5 >> 31);
  }
}


void CriWareInitializer__Start(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}