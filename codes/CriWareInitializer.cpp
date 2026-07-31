void CriWareInitializer___ctor(CriWareInitializer_o *this, const MethodInfo *method)
{
  CriFsConfig_c *v3; // x0
  CriFsConfig_o *v4; // x20
  const MethodInfo *v5; // x1
  CriAtomConfig_c *v6; // x0
  CriAtomConfig_o *v7; // x20
  const MethodInfo *v8; // x1
  CriManaConfig_c *v9; // x0
  CriManaConfig_o *v10; // x20
  const MethodInfo *v11; // x1
  CriWareDecrypterConfig_o *v12; // x20
  const MethodInfo *v13; // x1

  if ( (byte_5931705 & 1) == 0 )
  {
    sub_21FFC50(&CriAtomConfig_TypeInfo);
    sub_21FFC50(&CriFsConfig_TypeInfo);
    sub_21FFC50(&CriManaConfig_TypeInfo);
    sub_21FFC50(&CriWareDecrypterConfig_TypeInfo);
    byte_5931705 = 1;
  }
  v3 = CriFsConfig_TypeInfo;
  this->fields.initializesFileSystem = 1;
  v4 = (CriFsConfig_o *)sub_21FFEBC(v3);
  CriFsConfig___ctor(v4, v5);
  this->fields.fileSystemConfig = v4;
  sub_21FFBF4(&this->fields.fileSystemConfig, v4);
  v6 = CriAtomConfig_TypeInfo;
  this->fields.initializesAtom = 1;
  v7 = (CriAtomConfig_o *)sub_21FFEBC(v6);
  CriAtomConfig___ctor(v7, v8);
  this->fields.atomConfig = v7;
  sub_21FFBF4(&this->fields.atomConfig, v7);
  v9 = CriManaConfig_TypeInfo;
  this->fields.initializesMana = 1;
  v10 = (CriManaConfig_o *)sub_21FFEBC(v9);
  CriManaConfig___ctor(v10, v11);
  this->fields.manaConfig = v10;
  sub_21FFBF4(&this->fields.manaConfig, v10);
  v12 = (CriWareDecrypterConfig_o *)sub_21FFEBC(CriWareDecrypterConfig_TypeInfo);
  CriWareDecrypterConfig___ctor(v12, v13);
  this->fields.decrypterConfig = v12;
  sub_21FFBF4(&this->fields.decrypterConfig, v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0);
}


void CriWareInitializer__AddAudioEffectInterface(intptr_t effect_interface, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_IntPtr__o *v5; // x0
  struct System_IntPtr_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  System_Collections_Generic_List_IntPtr__o *effect_interface_list; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5931701 & 1) == 0 )
  {
    sub_21FFC50(&CriAtomPlugin_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_IntPtr__Add__);
    byte_5931701 = 1;
  }
  effect_interface_list = 0;
  if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, method, v2);
  if ( CriAtomPlugin__GetAudioEffectInterfaceList(&effect_interface_list, 0) )
  {
    v5 = effect_interface_list;
    if ( !effect_interface_list
      || (items = effect_interface_list->fields._items,
          v7 = Method_System_Collections_Generic_List_IntPtr__Add__,
          ++effect_interface_list->fields._version,
          !items) )
    {
      sub_21FFECC(v5, v4);
    }
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_IntPtr___AddWithResize(
        v5,
        effect_interface,
        *(const MethodInfo_443A978 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
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
  __int64 v2; // x2
  struct CriWareInitializer_StaticFields *static_fields; // x8
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  CriManaPlugin_c *v9; // x0
  UnityEngine_Transform_o *IsLibraryInitialized; // x0
  const MethodInfo *v11; // x4
  CriFsPlugin_c *v12; // x0
  CriManaPlugin_c *v13; // x0
  CriFsPlugin_c *v14; // x0
  CriManaPlugin_c *v15; // x0
  CriManaPlugin_c *v16; // x0
  CriAtomExLatencyEstimator_EstimatorInfo_o v17; // x1
  CriAtomExLatencyEstimator_EstimatorInfo_o v18; // x2
  CriFsPlugin_c *v19; // x0
  struct CriAtomConfig_o *atomConfig; // x20
  int32_t inGamePreviewMode; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_59316FE & 1) == 0 )
  {
    sub_21FFC50(&CriAtomPlugin_TypeInfo);
    sub_21FFC50(&CriFsPlugin_TypeInfo);
    sub_21FFC50(&CriManaPlugin_TypeInfo);
    sub_21FFC50(&CriWareInitializer_TypeInfo);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_59316FE = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  if ( static_fields->initializationCount++ )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)this, 0);
    return;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v7, v8);
    if ( CriAtomPlugin__IsLibraryInitialized(0) )
    {
      v9 = CriManaPlugin_TypeInfo;
      if ( !*(&CriManaPlugin_TypeInfo->_2.cctor_finished + 1) )
        v9 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v7, v8);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v9);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
        goto LABEL_75;
    }
  }
  v12 = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    v12 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v7, v8);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v12) )
  {
    if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v7, v8);
    if ( CriAtomPlugin__IsLibraryInitialized(0) )
    {
      v13 = CriManaPlugin_TypeInfo;
      if ( !*(&CriManaPlugin_TypeInfo->_2.cctor_finished + 1) )
        v13 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v7, v8);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v13);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
        goto LABEL_75;
    }
  }
  v14 = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    v14 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v7, v8);
  IsLibraryInitialized = (UnityEngine_Transform_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)v14);
  if ( ((unsigned __int8)IsLibraryInitialized & 1) != 0 )
  {
    if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v7, v8);
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriAtomPlugin__IsLibraryInitialized(0);
    if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
    {
      v15 = CriManaPlugin_TypeInfo;
      if ( !*(&CriManaPlugin_TypeInfo->_2.cctor_finished + 1) )
        v15 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v7, v8);
      IsLibraryInitialized = (UnityEngine_Transform_o *)CriManaPlugin__IsLibraryInitialized((const MethodInfo *)v15);
      if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
      {
LABEL_75:
        if ( this->fields.initializesMana )
        {
          v16 = CriManaPlugin_TypeInfo;
          if ( !*(&CriManaPlugin_TypeInfo->_2.cctor_finished + 1) )
            v16 = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v7, v8);
          CriManaPlugin__FinalizeLibrary((const MethodInfo *)v16);
        }
        if ( this->fields.initializesAtom )
        {
          while ( CriAtomExLatencyEstimator__GetCurrentInfo(0).fields.status )
            CriAtomExLatencyEstimator__FinalizeModule(0);
          if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(
              CriAtomPlugin_TypeInfo,
              v17,
              v18);
          CriAtomPlugin__FinalizeLibrary(0);
        }
        if ( this->fields.initializesFileSystem )
        {
          v19 = CriFsPlugin_TypeInfo;
          if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
            v19 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v7, v8);
          CriFsPlugin__FinalizeLibrary((const MethodInfo *)v19);
        }
      }
    }
  }
  if ( this->fields.initializesFileSystem )
    IsLibraryInitialized = (UnityEngine_Transform_o *)CriWareInitializer__InitializeFileSystem(
                                                        this->fields.fileSystemConfig,
                                                        v7);
  if ( this->fields.initializesAtom )
  {
    atomConfig = this->fields.atomConfig;
    if ( !atomConfig )
      goto LABEL_72;
    inGamePreviewMode = atomConfig->fields.inGamePreviewMode;
    switch ( inGamePreviewMode )
    {
      case 2:
        if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v7, v8);
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
    CriWareInitializer__InitializeAtom(atomConfig, v7);
  }
  if ( this->fields.initializesMana )
    CriWareInitializer__InitializeMana(this->fields.manaConfig, v7);
  if ( this->fields.useDecrypter )
    CriWareDecrypter__Initialize(this->fields.decrypterConfig, v7);
  else
    CriWareDecrypter__Initialize_36947724(
      (System_String_o *)StringLiteral_1198/*"0"*/,
      (System_String_o *)StringLiteral_1/*""*/,
      0,
      0,
      v11);
  if ( this->fields.dontDestroyOnLoad )
  {
    IsLibraryInitialized = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( IsLibraryInitialized )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)IsLibraryInitialized,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
      UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
      return;
    }
LABEL_72:
    sub_21FFECC(IsLibraryInitialized, v7);
  }
}


bool CriWareInitializer__InitializeAtom(CriAtomConfig_o *config, const MethodInfo *method)
{
  __int64 v2; // x2
  CriAtomEx_c *IsLibraryInitialized; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  char v7; // w20
  int32_t maxVirtualVoices; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t RequiredMaxVirtualVoices; // w22
  struct CriAtomConfig_StandardVoicePoolConfig_o *standardVoicePoolConfig; // x8
  struct CriAtomConfig_HcaMxVoicePoolConfig_o *hcaMxVoicePoolConfig; // x9
  struct CriAtomConfig_InGamePreviewConfig_o *inGamePreviewConfig; // x8
  struct CriAtomConfig_EditorPcmOutputConfig_o *editorPcmOutputConfig; // x8
  bool iosEnableSonicSync; // w21
  int32_t v17; // w0
  __int64 v18; // x2
  double v19; // d0
  int32_t v20; // w8
  double v21; // d0
  int32_t v22; // w8
  int v23; // w21
  struct CriAtomConfig_AndroidLowLatencyStandardVoicePoolConfig_o *androidLowLatencyStandardVoicePoolConfig; // x8
  _BOOL4 androidEnableSonicSync; // w26
  _BOOL4 androidUsesAndroidFastMixer; // w27
  int32_t memoryVoices; // w21
  int32_t streamingVoices; // w22
  int32_t androidBufferingTime; // w23
  int32_t androidStartBufferingTime; // w24
  _BOOL4 androidUsesAAudio; // w28
  struct CriAtomConfig_VitaAtrac9VoicePoolConfig_o *vitaAtrac9VoicePoolConfig; // x8
  struct CriAtomConfig_VitaManaVoicePoolConfig_o *vitaManaVoicePoolConfig; // x9
  struct CriAtomConfig_Ps4Audio3dConfig_o *ps4Audio3dConfig; // x8
  struct CriAtomConfig_Ps4Atrac9VoicePoolConfig_o *ps4Atrac9VoicePoolConfig; // x9
  bool v36; // w10
  struct CriAtomConfig_Ps4Audio3dConfig_VoicePoolConfig_o *voicePoolConfig; // x8
  struct CriAtomConfig_SwitchOpusVoicePoolConfig_o *switchOpusVoicePoolConfig; // x8
  struct CriAtomConfig_WebGLWebAudioVoicePoolConfig_o *webglWebAudioVoicePoolConfig; // x8
  __int64 v40; // x2
  System_DateTime_o v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  uint32_t Ticks; // w21
  struct System_String_o *acfFileName; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  System_String_o *streamingAssetsPath; // x22
  bool keepPlayingSoundOnPause; // w19
  CriAtomServer_c *v52; // x0
  uint64_t dateData; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_5931703 & 1) == 0 )
  {
    sub_21FFC50(&CriAtomEx_TypeInfo);
    sub_21FFC50(&CriAtomPlugin_TypeInfo);
    sub_21FFC50(&CriAtomServer_TypeInfo);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&System_IO_Path_TypeInfo);
    byte_5931703 = 1;
  }
  dateData = 0;
  if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, method, v2);
  IsLibraryInitialized = (CriAtomEx_c *)CriAtomPlugin__IsLibraryInitialized(0);
  v7 = (char)IsLibraryInitialized;
  if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
  {
    if ( !config )
      goto LABEL_56;
    maxVirtualVoices = config->fields.maxVirtualVoices;
    if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v5, v6);
    RequiredMaxVirtualVoices = CriAtomPlugin__GetRequiredMaxVirtualVoices(config, 0);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9, v10);
    IsLibraryInitialized = (CriAtomEx_c *)System_Math__Max_76939956(maxVirtualVoices, RequiredMaxVirtualVoices, 0);
    standardVoicePoolConfig = config->fields.standardVoicePoolConfig;
    if ( !standardVoicePoolConfig )
      goto LABEL_56;
    hcaMxVoicePoolConfig = config->fields.hcaMxVoicePoolConfig;
    if ( !hcaMxVoicePoolConfig )
      goto LABEL_56;
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
      goto LABEL_56;
    CriAtomPlugin__SetConfigMonitorParametes(
      inGamePreviewConfig->fields.maxPreviewObjects,
      inGamePreviewConfig->fields.communicationBufferSize,
      inGamePreviewConfig->fields.playbackPositionUpdateInterval,
      0);
    editorPcmOutputConfig = config->fields.editorPcmOutputConfig;
    if ( !editorPcmOutputConfig )
      goto LABEL_56;
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
    v17 = System_Math__Max_76939956(config->fields.iosBufferingTime, 16, 0);
    CriAtomPlugin__SetConfigAdditionalParameters_IOS(iosEnableSonicSync, v17, config->fields.iosOverrideIPodMusic, 0);
    if ( !config->fields.androidBufferingTime )
    {
      v19 = 4000.0 / config->fields.serverFrequency;
      if ( v19 == INFINITY )
        v20 = 0x80000000;
      else
        v20 = (int)v19;
      config->fields.androidBufferingTime = v20;
    }
    if ( !config->fields.androidStartBufferingTime )
    {
      v21 = 3000.0 / config->fields.serverFrequency;
      if ( v21 == INFINITY )
        v22 = 0x80000000;
      else
        v22 = (int)v21;
      config->fields.androidStartBufferingTime = v22;
    }
    IsLibraryInitialized = CriAtomEx_TypeInfo;
    v23 = 2 * config->fields.androidForceToUseAsrForDefaultPlayback;
    if ( !*(&CriAtomEx_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo, v5, v18);
      IsLibraryInitialized = CriAtomEx_TypeInfo;
    }
    androidLowLatencyStandardVoicePoolConfig = config->fields.androidLowLatencyStandardVoicePoolConfig;
    IsLibraryInitialized->static_fields->androidDefaultSoundRendererType = v23;
    if ( !androidLowLatencyStandardVoicePoolConfig )
      goto LABEL_56;
    androidEnableSonicSync = config->fields.androidEnableSonicSync;
    androidUsesAndroidFastMixer = config->fields.androidUsesAndroidFastMixer;
    memoryVoices = androidLowLatencyStandardVoicePoolConfig->fields.memoryVoices;
    streamingVoices = androidLowLatencyStandardVoicePoolConfig->fields.streamingVoices;
    androidBufferingTime = config->fields.androidBufferingTime;
    androidStartBufferingTime = config->fields.androidStartBufferingTime;
    androidUsesAAudio = config->fields.androidUsesAAudio;
    if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v5, v18);
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
      goto LABEL_56;
    vitaManaVoicePoolConfig = config->fields.vitaManaVoicePoolConfig;
    if ( !vitaManaVoicePoolConfig )
      goto LABEL_56;
    CriAtomPlugin__SetConfigAdditionalParameters_VITA(
      vitaAtrac9VoicePoolConfig->fields.memoryVoices,
      vitaAtrac9VoicePoolConfig->fields.streamingVoices,
      vitaManaVoicePoolConfig->fields.numberOfManaDecoders,
      0);
    ps4Audio3dConfig = config->fields.ps4Audio3dConfig;
    if ( !ps4Audio3dConfig )
      goto LABEL_56;
    ps4Atrac9VoicePoolConfig = config->fields.ps4Atrac9VoicePoolConfig;
    v36 = config->fields.vrMode || ps4Audio3dConfig->fields.useAudio3D;
    ps4Audio3dConfig->fields.useAudio3D = v36;
    if ( !ps4Atrac9VoicePoolConfig )
      goto LABEL_56;
    voicePoolConfig = ps4Audio3dConfig->fields.voicePoolConfig;
    if ( !voicePoolConfig )
      goto LABEL_56;
    CriAtomPlugin__SetConfigAdditionalParameters_PS4(
      ps4Atrac9VoicePoolConfig->fields.memoryVoices,
      ps4Atrac9VoicePoolConfig->fields.streamingVoices,
      v36,
      voicePoolConfig->fields.memoryVoices,
      voicePoolConfig->fields.streamingVoices,
      0);
    switchOpusVoicePoolConfig = config->fields.switchOpusVoicePoolConfig;
    if ( !switchOpusVoicePoolConfig )
      goto LABEL_56;
    CriAtomPlugin__SetConfigAdditionalParameters_SWITCH(
      switchOpusVoicePoolConfig->fields.memoryVoices,
      switchOpusVoicePoolConfig->fields.streamingVoices,
      config->fields.switchInitializeSocket,
      0);
    webglWebAudioVoicePoolConfig = config->fields.webglWebAudioVoicePoolConfig;
    if ( !webglWebAudioVoicePoolConfig )
      goto LABEL_56;
    CriAtomPlugin__SetConfigAdditionalParameters_WEBGL(webglWebAudioVoicePoolConfig->fields.voices, 0);
    CriAtomPlugin__InitializeLibrary(0);
    if ( config->fields.useRandomSeedWithTime )
    {
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v5, v40);
      dateData = System_DateTime__get_Now(0).fields._dateData;
      v41.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v41, 0);
      if ( !*(&CriAtomEx_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo, v42, v43);
      CriAtomEx__SetRandomSeed(Ticks, 0);
    }
    acfFileName = config->fields.acfFileName;
    if ( !acfFileName )
LABEL_56:
      sub_21FFECC(IsLibraryInitialized, v5);
    if ( acfFileName->fields._stringLength )
    {
      if ( CriWare_Common__IsStreamingAssetsPath(config->fields.acfFileName, 0) )
      {
        streamingAssetsPath = CriWare_Common__get_streamingAssetsPath(0);
        if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v48, v49);
        acfFileName = System_IO_Path__Combine(streamingAssetsPath, acfFileName, 0);
      }
      if ( !*(&CriAtomEx_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CriAtomEx_TypeInfo, v46, v47);
      CriAtomEx__RegisterAcf(0, acfFileName, 0);
    }
    keepPlayingSoundOnPause = config->fields.keepPlayingSoundOnPause;
    v52 = CriAtomServer_TypeInfo;
    if ( !*(&CriAtomServer_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriAtomServer_TypeInfo, v5, v40);
      v52 = CriAtomServer_TypeInfo;
    }
    v52->static_fields->KeepPlayingSoundOnPause = keepPlayingSoundOnPause;
  }
  return (v7 & 1) == 0;
}


bool CriWareInitializer__InitializeFileSystem(CriFsConfig_o *config, const MethodInfo *method)
{
  __int64 v2; // x2
  CriFsPlugin_c *inited; // x0
  struct System_String_o *IsLibraryInitialized; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x7
  char v9; // w20
  int32_t maxPath; // w24
  _BOOL4 minimizeFileDescriptorUsage; // w27
  int32_t numberOfLoaders; // w21
  int32_t numberOfBinders; // w22
  int32_t numberOfInstallers; // w23
  int32_t installBufferSize; // w26
  _BOOL4 enableCrcCheck; // w28
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  int32_t androidDeviceReadBitrate; // w21
  const MethodInfo *v20; // x0

  if ( (byte_5931702 & 1) == 0 )
  {
    sub_21FFC50(&CriFsPlugin_TypeInfo);
    byte_5931702 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
  IsLibraryInitialized = (struct System_String_o *)CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v9 = (char)IsLibraryInitialized;
  if ( ((unsigned __int8)IsLibraryInitialized & 1) == 0 )
  {
    if ( !config )
      goto LABEL_17;
    maxPath = config->fields.maxPath;
    minimizeFileDescriptorUsage = config->fields.minimizeFileDescriptorUsage;
    numberOfLoaders = config->fields.numberOfLoaders;
    numberOfBinders = config->fields.numberOfBinders;
    numberOfInstallers = config->fields.numberOfInstallers;
    installBufferSize = config->fields.installBufferSize;
    enableCrcCheck = config->fields.enableCrcCheck;
    if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v6, v7);
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
    if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v17, v18);
    CriFsPlugin__SetConfigAdditionalParameters_ANDROID(androidDeviceReadBitrate, v17);
    CriFsPlugin__InitializeLibrary(v20);
    IsLibraryInitialized = config->fields.userAgentString;
    if ( !IsLibraryInitialized )
LABEL_17:
      sub_21FFECC(IsLibraryInitialized, v6);
    if ( IsLibraryInitialized->fields._stringLength )
      CriFsUtility__CRIWARE14C89F34(IsLibraryInitialized, v6);
  }
  return (v9 & 1) == 0;
}


bool CriWareInitializer__InitializeMana(CriManaConfig_o *config, const MethodInfo *method)
{
  __int64 v2; // x2
  CriManaPlugin_c *inited; // x0
  _BOOL8 IsLibraryInitialized; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  bool v9; // w19
  _BOOL4 graphicsMultiThreaded; // w22
  int32_t numberOfMaxEntries; // w20
  int32_t numberOfDecoders; // w21
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x0

  if ( (byte_5931704 & 1) == 0 )
  {
    sub_21FFC50(&CriManaPlugin_TypeInfo);
    sub_21FFC50(&StringLiteral_4069/*"CRI_LINEAR_COLORSPACE"*/);
    byte_5931704 = 1;
  }
  inited = CriManaPlugin_TypeInfo;
  if ( !*(&CriManaPlugin_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, method, v2);
  IsLibraryInitialized = CriManaPlugin__IsLibraryInitialized((const MethodInfo *)inited);
  v9 = IsLibraryInitialized;
  if ( !IsLibraryInitialized )
  {
    if ( !config )
      sub_21FFECC(IsLibraryInitialized, v6);
    graphicsMultiThreaded = config->fields.graphicsMultiThreaded;
    numberOfDecoders = config->fields.numberOfDecoders;
    numberOfMaxEntries = config->fields.numberOfMaxEntries;
    if ( !*(&CriManaPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v6, v7);
    CriManaPlugin__SetConfigParameters(graphicsMultiThreaded, numberOfDecoders, numberOfMaxEntries, v8);
    CriManaPlugin__SetConfigAdditonalParameters_ANDROID(1, 0, v13);
    CriManaPlugin__InitializeLibrary(v14);
    if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
      UnityEngine_Shader__EnableKeyword((System_String_o *)StringLiteral_4069/*"CRI_LINEAR_COLORSPACE"*/, 0);
  }
  return !v9;
}


bool CriWareInitializer__IsInitialized(const MethodInfo *method)
{
  if ( (byte_5931700 & 1) == 0 )
  {
    sub_21FFC50(&CriWareInitializer_TypeInfo);
    byte_5931700 = 1;
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
  __int64 v2; // x2
  struct CriWareInitializer_StaticFields *static_fields; // x8
  bool v5; // zf
  int v6; // w9
  CriManaPlugin_c *inited; // x0
  CriAtomExLatencyEstimator_EstimatorInfo_o v8; // x1
  CriAtomExLatencyEstimator_EstimatorInfo_o v9; // x2
  CriFsPlugin_c *v10; // x0

  if ( (byte_59316FF & 1) == 0 )
  {
    sub_21FFC50(&CriAtomPlugin_TypeInfo);
    sub_21FFC50(&CriFsPlugin_TypeInfo);
    sub_21FFC50(&CriManaPlugin_TypeInfo);
    sub_21FFC50(&CriWareInitializer_TypeInfo);
    byte_59316FF = 1;
  }
  static_fields = CriWareInitializer_TypeInfo->static_fields;
  v6 = static_fields->initializationCount - 1;
  v5 = static_fields->initializationCount == 1;
  static_fields->initializationCount = v6;
  if ( v5 )
  {
    if ( this->fields.initializesMana )
    {
      inited = CriManaPlugin_TypeInfo;
      if ( !*(&CriManaPlugin_TypeInfo->_2.cctor_finished + 1) )
        inited = (CriManaPlugin_c *)j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, method, v2);
      CriManaPlugin__FinalizeLibrary((const MethodInfo *)inited);
    }
    if ( this->fields.initializesAtom )
    {
      while ( CriAtomExLatencyEstimator__GetCurrentInfo(0).fields.status )
        CriAtomExLatencyEstimator__FinalizeModule(0);
      if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(CriAtomPlugin_TypeInfo, v8, v9);
      CriAtomPlugin__FinalizeLibrary(0);
    }
    if ( this->fields.initializesFileSystem )
    {
      v10 = CriFsPlugin_TypeInfo;
      if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
        v10 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
      CriFsPlugin__FinalizeLibrary((const MethodInfo *)v10);
    }
  }
  else
  {
    static_fields->initializationCount = v6 & ~(v6 >> 31);
  }
}


void CriWareInitializer__Start(CriWareInitializer_o *this, const MethodInfo *method)
{
  ;
}