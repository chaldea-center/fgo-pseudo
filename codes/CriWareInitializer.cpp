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

  if ( (byte_4C20B8D & 1) == 0 )
  {
    sub_1C2D490(&CriAtomConfig_TypeInfo);
    sub_1C2D490(&CriFsConfig_TypeInfo);
    sub_1C2D490(&CriManaConfig_TypeInfo);
    sub_1C2D490(&CriWareDecrypterConfig_TypeInfo);
    byte_4C20B8D = 1;
  }
  this->fields.initializesFileSystem = 1;
  v3 = (CriFsConfig_o *)sub_1C2D6DC(CriFsConfig_TypeInfo);
  CriFsConfig___ctor(v3, v4);
  this->fields.fileSystemConfig = v3;
  sub_1C2D434(&this->fields.fileSystemConfig);
  this->fields.initializesAtom = 1;
  v5 = (CriAtomConfig_o *)sub_1C2D6DC(CriAtomConfig_TypeInfo);
  CriAtomConfig___ctor(v5, v6);
  this->fields.atomConfig = v5;
  sub_1C2D434(&this->fields.atomConfig);
  this->fields.initializesMana = 1;
  v7 = (CriManaConfig_o *)sub_1C2D6DC(CriManaConfig_TypeInfo);
  CriManaConfig___ctor(v7, v8);
  this->fields.manaConfig = v7;
  sub_1C2D434(&this->fields.manaConfig);
  v9 = (CriWareDecrypterConfig_o *)sub_1C2D6DC(CriWareDecrypterConfig_TypeInfo);
  CriWareDecrypterConfig___ctor(v9, v10);
  this->fields.decrypterConfig = v9;
  sub_1C2D434(&this->fields.decrypterConfig);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0);
}


void CriWareInitializer__AddAudioEffectInterface(intptr_t effect_interface, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_IntPtr__o *v4; // x0
  struct System_IntPtr_array *items; // x8
  _QWORD *v6; // x9
  __int64 size; // x10
  System_Collections_Generic_List_IntPtr__o *effect_interface_list; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20B89 & 1) == 0 )
  {
    sub_1C2D490(&CriAtomPlugin_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_IntPtr__Add__);
    byte_4C20B89 = 1;
  }
  effect_interface_list = 0;
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  if ( CriAtomPlugin__GetAudioEffectInterfaceList(&effect_interface_list, 0) )
  {
    v4 = effect_interface_list;
    if ( !effect_interface_list
      || (items = effect_interface_list->fields._items,
          v6 = Method_System_Collections_Generic_List_IntPtr__Add__,
          ++effect_interface_list->fields._version,
          !items) )
    {
      sub_1C2D6EC(v4, v3);
    }
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_IntPtr___AddWithResize(
        v4,
        effect_interface,
        *(const MethodInfo_37743E4 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    }
    else
    {
      v4->fields._size = size + 1;
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

  if ( (byte_4C20B86 & 1) == 0 )
  {
    sub_1C2D490(&CriAtomPlugin_TypeInfo);
    sub_1C2D490(&CriFsPlugin_TypeInfo);
    sub_1C2D490(&CriManaPlugin_TypeInfo);
    sub_1C2D490(&CriWareInitializer_TypeInfo);
    sub_1C2D490(&UnityEngine_Debug_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    byte_4C20B86 = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  if ( static_fields->initializationCount++ )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)this, 0);
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
        goto LABEL_76;
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
        goto LABEL_76;
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
LABEL_76:
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
      goto LABEL_73;
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
    CriWareDecrypter__Initialize_30818472(
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
      IsLibraryInitialized = UnityEngine_Transform__get_root(IsLibraryInitialized, 0);
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
    }
LABEL_73:
    sub_1C2D6EC(IsLibraryInitialized, v8);
  }
}


bool CriWareInitializer__InitializeAtom(CriAtomConfig_o *config, const MethodInfo *method)
{
  CriAtomEx_c *IsLibraryInitialized; // x0
  __int64 v4; // x1
  char v5; // w20
  int32_t maxVirtualVoices; // w21
  int32_t RequiredMaxVirtualVoices; // w22
  struct CriAtomConfig_StandardVoicePoolConfig_o *standardVoicePoolConfig; // x8
  struct CriAtomConfig_HcaMxVoicePoolConfig_o *hcaMxVoicePoolConfig; // x9
  struct CriAtomConfig_InGamePreviewConfig_o *inGamePreviewConfig; // x8
  struct CriAtomConfig_EditorPcmOutputConfig_o *editorPcmOutputConfig; // x8
  bool iosEnableSonicSync; // w21
  int32_t v13; // w0
  double v14; // d0
  int32_t v15; // w8
  double v16; // d0
  int32_t v17; // w8
  int v18; // w21
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
  bool v30; // w8
  struct CriAtomConfig_Ps4Atrac9VoicePoolConfig_o *ps4Atrac9VoicePoolConfig; // x10
  struct CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig_o *voicePoolConfig; // x9
  struct CriAtomConfig_SwitchOpusVoicePoolConfig_o *switchOpusVoicePoolConfig; // x8
  struct CriAtomConfig_WebGLWebAudioVoicePoolConfig_o *webglWebAudioVoicePoolConfig; // x8
  System_DateTime_o v35; // x0
  uint32_t Ticks; // w21
  struct System_String_o *acfFileName; // x21
  System_String_o *streamingAssetsPath; // x22
  bool keepPlayingSoundOnPause; // w19
  CriAtomServer_c *v40; // x0
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4C20B8B & 1) == 0 )
  {
    sub_1C2D490(&CriAtomEx_TypeInfo);
    sub_1C2D490(&CriAtomPlugin_TypeInfo);
    sub_1C2D490(&CriAtomServer_TypeInfo);
    sub_1C2D490(&System_DateTime_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&System_IO_Path_TypeInfo);
    byte_4C20B8B = 1;
  }
  dateData = 0;
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  IsLibraryInitialized = (CriAtomEx_c *)CriAtomPlugin__IsLibraryInitialized(0);
  v5 = (char)IsLibraryInitialized;
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
    IsLibraryInitialized = (CriAtomEx_c *)System_Math__Max_64982040(maxVirtualVoices, RequiredMaxVirtualVoices, 0);
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
    v13 = System_Math__Max_64982040(config->fields.iosBufferingTime, 16, 0);
    CriAtomPlugin__SetConfigAdditionalParameters_IOS(iosEnableSonicSync, v13, config->fields.iosOverrideIPodMusic, 0);
    if ( !config->fields.androidBufferingTime )
    {
      v14 = 4000.0 / config->fields.serverFrequency;
      v15 = (int)v14;
      if ( v14 == INFINITY )
        v15 = 0x80000000;
      config->fields.androidBufferingTime = v15;
    }
    if ( !config->fields.androidStartBufferingTime )
    {
      v16 = 3000.0 / config->fields.serverFrequency;
      v17 = (int)v16;
      if ( v16 == INFINITY )
        v17 = 0x80000000;
      config->fields.androidStartBufferingTime = v17;
    }
    IsLibraryInitialized = CriAtomEx_TypeInfo;
    v18 = 2 * config->fields.androidForceToUseAsrForDefaultPlayback;
    if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
      IsLibraryInitialized = CriAtomEx_TypeInfo;
    }
    IsLibraryInitialized->static_fields->androidDefaultSoundRendererType = v18;
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
    v30 = config->fields.vrMode || ps4Audio3dConfig->fields.useAudio3D;
    ps4Audio3dConfig->fields.useAudio3D = v30;
    ps4Atrac9VoicePoolConfig = config->fields.ps4Atrac9VoicePoolConfig;
    if ( !ps4Atrac9VoicePoolConfig )
      goto LABEL_54;
    voicePoolConfig = ps4Audio3dConfig->fields.voicePoolConfig;
    if ( !voicePoolConfig )
      goto LABEL_54;
    CriAtomPlugin__SetConfigAdditionalParameters_PS4(
      ps4Atrac9VoicePoolConfig->fields.memoryVoices,
      ps4Atrac9VoicePoolConfig->fields.streamingVoices,
      v30,
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
      v35.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v35, 0);
      if ( !CriAtomEx_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo);
      CriAtomEx__SetRandomSeed(Ticks, 0);
    }
    acfFileName = config->fields.acfFileName;
    if ( !acfFileName )
LABEL_54:
      sub_1C2D6EC(IsLibraryInitialized, v4);
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
    v40 = CriAtomServer_TypeInfo;
    if ( !CriAtomServer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriAtomServer_TypeInfo);
      v40 = CriAtomServer_TypeInfo;
    }
    v40->static_fields->KeepPlayingSoundOnPause = keepPlayingSoundOnPause;
  }
  return (v5 & 1) == 0;
}


bool CriWareInitializer__InitializeFileSystem(CriFsConfig_o *config, const MethodInfo *method)
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

  if ( (byte_4C20B8A & 1) == 0 )
  {
    sub_1C2D490(&CriFsPlugin_TypeInfo);
    byte_4C20B8A = 1;
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
      sub_1C2D6EC(IsLibraryInitialized, v5);
    if ( IsLibraryInitialized->fields._stringLength )
      CriFsUtility__CRIWARE14C89F34(IsLibraryInitialized, v5);
  }
  return (v7 & 1) == 0;
}


bool CriWareInitializer__InitializeMana(CriManaConfig_o *config, const MethodInfo *method)
{
  CriManaPlugin_c *inited; // x0
  _BOOL8 IsLibraryInitialized; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  bool v7; // w19
  _BOOL4 graphicsMultiThreaded; // w22
  int32_t numberOfMaxEntries; // w20
  int32_t numberOfDecoders; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x0

  if ( (byte_4C20B8C & 1) == 0 )
  {
    sub_1C2D490(&CriManaPlugin_TypeInfo);
    sub_1C2D490(&StringLiteral_3923/*"CRI_LINEAR_COLORSPACE"*/);
    byte_4C20B8C = 1;
  }
  inited = CriManaPlugin_TypeInfo;
  if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  IsLibraryInitialized = CriManaPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v7 = IsLibraryInitialized;
  if ( !IsLibraryInitialized )
  {
    if ( !config )
      sub_1C2D6EC(IsLibraryInitialized, v5);
    graphicsMultiThreaded = config->fields.graphicsMultiThreaded;
    numberOfDecoders = config->fields.numberOfDecoders;
    numberOfMaxEntries = config->fields.numberOfMaxEntries;
    if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
    CriManaPlugin__SetConfigParameters(graphicsMultiThreaded, numberOfDecoders, numberOfMaxEntries, v6);
    CriManaPlugin__SetConfigAdditonalParameters_ANDROID(1, 0, v11);
    CriManaPlugin__InitializeLibrary(v12);
    if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
      UnityEngine_Shader__EnableKeyword((System_String_o *)StringLiteral_3923/*"CRI_LINEAR_COLORSPACE"*/, 0);
  }
  return !v7;
}


bool CriWareInitializer__IsInitialized(const MethodInfo *method)
{
  if ( (byte_4C20B88 & 1) == 0 )
  {
    sub_1C2D490(&CriWareInitializer_TypeInfo);
    byte_4C20B88 = 1;
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

  if ( (byte_4C20B87 & 1) == 0 )
  {
    sub_1C2D490(&CriAtomPlugin_TypeInfo);
    sub_1C2D490(&CriFsPlugin_TypeInfo);
    sub_1C2D490(&CriManaPlugin_TypeInfo);
    sub_1C2D490(&CriWareInitializer_TypeInfo);
    byte_4C20B87 = 1;
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