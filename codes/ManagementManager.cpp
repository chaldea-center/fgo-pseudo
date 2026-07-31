void ManagementManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ManagementManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ManagementManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct ManagementManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct ManagementManager_StaticFields *v32; // x8

  if ( (byte_5937E0D & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8386/*"IsNotificationStatusSend"*/);
    sub_21FFC50(&StringLiteral_8399/*"IsReBootCacheClearKey"*/);
    sub_21FFC50(&StringLiteral_22048/*"ja-JP"*/);
    sub_21FFC50(&StringLiteral_26340/*"yyyy年MM月dd日HH時mm分"*/);
    byte_5937E0D = 1;
  }
  v7 = StringLiteral_8386/*"IsNotificationStatusSend"*/;
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8386/*"IsNotificationStatusSend"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ManagementManager_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_8399/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8399/*"IsReBootCacheClearKey"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->RebootCacheClearKey, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_26340/*"yyyy年MM月dd日HH時mm分"*/;
  v17 = ManagementManager_TypeInfo->static_fields;
  v17->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_26340/*"yyyy年MM月dd日HH時mm分"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->DATE_TIME_DISP_FORMAT, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_22048/*"ja-JP"*/;
  v25 = ManagementManager_TypeInfo->static_fields;
  v25->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_22048/*"ja-JP"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->DEFAULT_CULTURE_NAME, v24, v26, v27, v28, v29, v30, v31);
  v32 = ManagementManager_TypeInfo->static_fields;
  v32->OVERRIDE_MOVIE_DEPTH = 10;
  v32->isDuringStartup = 1;
}


void ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  const MethodInfo_476EDF0 *v3; // x1

  if ( (byte_5937E0C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_5937E0C = 1;
  }
  v3 = (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__;
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor((SingletonMonoBehaviour_T__o *)this, v3);
}


void ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ManagementManager_o *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  float v22; // s0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  Il2CppObject *v43; // x19
  __int64 v44; // x1
  Il2CppObject *v45; // x19
  float v46; // [xsp+Ch] [xbp-34h] BYREF

  v46 = ratio;
  if ( (byte_5937DF2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_811/*"):"*/);
    sub_21FFC50(&StringLiteral_7033/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_21FFC50(&StringLiteral_773/*"(ratio: "*/);
    byte_5937DF2 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_7033/*"Firebase.FirebaseApp"*/, 0) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0) >= ratio )
      return;
    this = (ManagementManager_o *)sub_21FFD10(string___TypeInfo, 5);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.checkMoviePlayData.fields.checkMovieState = errorText;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.checkMoviePlayData,
        (int32_t)errorText,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( ((__int64)v14->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_20;
      v21 = StringLiteral_773/*"(ratio: "*/;
      *(_QWORD *)&v14->fields.checkMoviePlayData.fields.phase = StringLiteral_773/*"(ratio: "*/;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v14->fields.checkMoviePlayData.fields.phase,
        v21,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      this = (ManagementManager_o *)System_Single__ToString(v22, (const MethodInfo *)&v46);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (*(_QWORD *)&v14->fields.isInitializingData = this,
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v14->fields.isInitializingData,
              (int32_t)this,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28),
            ((__int64)v14->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0)
        || (v35 = StringLiteral_811/*"):"*/,
            v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_811/*"):"*/,
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v14->fields.AvalonSceneManager,
              v35,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_21FFED4(this);
      }
      v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)exceptionMessage;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v14->fields.debugInfoRootObject,
        (int32_t)exceptionMessage,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v43 = (Il2CppObject *)System_String__Concat_75483816((System_String_array *)v14, 0);
      if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v42);
      UnityEngine_Debug__LogError(v43, 0);
      return;
    }
LABEL_19:
    sub_21FFECC(this, errorText);
  }
  v45 = (Il2CppObject *)System_String__Concat_75438412(errorText, exceptionMessage, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v44);
  UnityEngine_Debug__LogError(v45, 0);
}


void ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5937DEE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_5937DEE = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_476EC6C *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_5937E07 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5937E07 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, boot);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0);
  ManagementManager__BuildInfoOff(this, v4);
}


void ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_5937E06 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937E06 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0) )
  {
    sub_21FFECC(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_Collections_IEnumerator_o *ManagementManager__CheckMovieResume(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937E09 & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager__CheckMovieResume_d__68_TypeInfo);
    byte_5937E09 = 1;
  }
  v3 = sub_21FFEBC(ManagementManager__CheckMovieResume_d__68_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *ManagementManager__CheckPlayMovieFromResumeInfo(
        ManagementManager_o *this,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5937E0A & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager__CheckPlayMovieFromResumeInfo_d__69_TypeInfo);
    byte_5937E0A = 1;
  }
  v5 = sub_21FFEBC(ManagementManager__CheckPlayMovieFromResumeInfo_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_5937DEC & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937DEC = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v1);
    v2 = ManagementManager_TypeInfo;
  }
  v2->static_fields->isDuringStartup = 0;
}


void ManagementManager__EndDifferentCreateUserServerDialog(
        ManagementManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5937DFC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5937DFC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0, 0);
}


void ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_5937DFB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_5937DFB = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, isDecide);
  UnityEngine_Application__Quit_82963804(0);
}


// local variable allocation has failed, the output may be wrong!
void ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_5937DFA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_5937DFA = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, isDecide);
    UnityEngine_Application__Quit_82963804(0);
  }
}


void ManagementManager__HandleLog(
        ManagementManager_o *this,
        System_String_o *condition,
        System_String_o *stackTrace,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_5937DF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&StringLiteral_6431/*"ErrorLog: "*/);
    sub_21FFC50(&StringLiteral_55/*"\n StackTrace: "*/);
    byte_5937DF3 = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v9 = System_String__Concat_75483552(
           (System_String_o *)StringLiteral_6431/*"ErrorLog: "*/,
           condition,
           (System_String_o *)StringLiteral_55/*"\n StackTrace: "*/,
           stackTrace,
           0);
    if ( !Instance )
      sub_21FFECC(v9, v10);
    CrashReporter__SendErrorLogReport((CrashReporter_o *)Instance, v9, 0);
  }
}


System_Collections_IEnumerator_o *ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937DF5 & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager__InitializeAdManagerAndFirebase_d__40_TypeInfo);
    byte_5937DF5 = 1;
  }
  v3 = sub_21FFEBC(ManagementManager__InitializeAdManagerAndFirebase_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_5937E03 & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937E03 = 1;
  }
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
  if ( !byte_5937656 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937656 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
    v2 = ManagementManager_TypeInfo;
  }
  return !v2->static_fields->isDuringStartup;
}


bool ManagementManager__IsLoading(ManagementManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5937E04 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_5937E04 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( NetworkManager__CommunicationIsBusy((const MethodInfo *)v2) )
    return 1;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
  if ( AssetManager__LoadIsBusy(0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0);
}


bool ManagementManager__IsResumeFgo20251220WarIdLastQuest(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w8
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  TerminalPramsManager_c *v8; // x0
  int32_t gender; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t phase[2]; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_5937E0B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5937E0B = 1;
  }
  *(_QWORD *)phase = 0;
  entity = 0;
  v2 = *(&ScriptManager_TypeInfo->_2.cctor_finished + 1);
  gender = 0;
  if ( !v2 )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  if ( ScriptManager__GetMovieResumeInfo(&phase[1], phase, &gender, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
    v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    if ( !v6 )
      goto LABEL_23;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      v6,
                                      &entity,
                                      BalanceConfig_TypeInfo->static_fields->Fgo20251220WarId,
                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return HIDWORD(entity[6].klass) == phase[1];
LABEL_23:
      sub_21FFECC(Master_object, v5);
    }
    return 0;
  }
  else
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
    if ( !byte_59354AD )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59354AD = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
      v8 = TerminalPramsManager_TypeInfo;
    }
    return v8->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField;
  }
}


void ManagementManager__NotifyRequestPermissionsDenied(
        ManagementManager_o *this,
        System_String_o *permissionName,
        const MethodInfo *method)
{
  this->fields.isPermissionRequesting = 0;
}


void ManagementManager__NotifyRequestPermissionsGranted(
        ManagementManager_o *this,
        System_String_o *permissionName,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isPermissionGranted = 1;
}


void ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_5937E08 & 1) == 0 )
  {
    sub_21FFC50(&System_Globalization_CultureInfo_TypeInfo);
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937E08 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v1);
    v2 = ManagementManager_TypeInfo;
  }
  DEFAULT_CULTURE_NAME = v2->static_fields->DEFAULT_CULTURE_NAME;
  if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, v1);
  SpecificCulture = System_Globalization_CultureInfo__CreateSpecificCulture(DEFAULT_CULTURE_NAME, 0);
  System_Globalization_CultureInfo__set_CurrentCulture(SpecificCulture, 0);
}


void ManagementManager__RebootCacheClear(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0
  __int64 v3; // x1
  ManagementManager_c *v4; // x0

  if ( (byte_5937DED & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937DED = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v1);
    v2 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v2->static_fields->RebootCacheClearKey, 0) )
  {
    v4 = ManagementManager_TypeInfo;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v3);
      v4 = ManagementManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->RebootCacheClearKey, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


System_Collections_IEnumerator_o *ManagementManager__SetupFirebaseAppCheck(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5937DF6 & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager__SetupFirebaseAppCheck_d__41_TypeInfo);
    byte_5937DF6 = 1;
  }
  v2 = sub_21FFEBC(ManagementManager__SetupFirebaseAppCheck_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  result = (System_Collections_IEnumerator_o *)v2;
  *(_DWORD *)(v2 + 16) = 0;
  return result;
}


System_Collections_IEnumerator_o *ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5937DF7 & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager__SetupFirebaseCrashlytics_d__42_TypeInfo);
    byte_5937DF7 = 1;
  }
  v2 = sub_21FFEBC(ManagementManager__SetupFirebaseCrashlytics_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  result = (System_Collections_IEnumerator_o *)v2;
  *(_DWORD *)(v2 + 16) = 0;
  return result;
}


void ManagementManager__Start(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppType *v7; // x21
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_5937DEF & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityGamingServicesBehaviour_var);
    byte_5937DEF = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  UnityEngine_Application__set_targetFrameRate(30, 0);
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v3);
  AndroidUtil__TransitionSaveData(0);
  UnityEngine_Screen__set_autorotateToLandscapeLeft(1, 0);
  UnityEngine_Screen__set_autorotateToLandscapeRight(1, 0);
  UnityEngine_Screen__set_autorotateToPortrait(0, 0);
  UnityEngine_Screen__set_autorotateToPortraitUpsideDown(0, 0);
  UnityEngine_Screen__set_orientation(5, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7 = UnityGamingServicesBehaviour_var;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v5);
  v8.fields.value = (intptr_t)v7;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  if ( !gameObject )
    sub_21FFECC(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v12, 0);
}


void ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1

  v2 = this;
  if ( (byte_5937E05 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_5937E05 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v5);
      UnityEngine_Application__Quit_82963804(0);
    }
  }
}


void ManagementManager__callbackAccountRegist(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.isReadAuth = 1;
}


void ManagementManager__callbackPlayLogo(ManagementManager_o *this, const MethodInfo *method)
{
  this->fields.isPlayLogo = 1;
}


void ManagementManager__callbackTerminalTopHome(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagementManager_c *v3; // x0
  struct ManagementManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_5937E02 & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5937E02 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, result);
    v3 = ManagementManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !Instance )
    sub_21FFECC(0, v7);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _47357952; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1

  if ( (byte_5937E01 & 1) == 0 )
  {
    sub_21FFC50(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5937E01 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, result);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    goto LABEL_9;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, result);
  _47357952 = TutorialFlag__Get_47357952(102, 0);
  if ( _47357952 )
  {
LABEL_9:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v9);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_21FFECC(0, v12);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_47357952, v6, v7);
  }
}


void ManagementManager__callbackTopGameData(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.isReadGameData = 1;
}


void ManagementManager__callbackTopHome(ManagementManager_o *this, System_String_o *result, const MethodInfo *method)
{
  ManagementManager_c *v4; // x0
  struct ManagementManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_5937DFF & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5937DFF = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, result);
    v4 = ManagementManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  v6 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v6);
  if ( !Instance )
    sub_21FFECC(0, v8);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, this->fields.scenetype, 0, 0, 0);
}


void ManagementManager__callbackTopLogin(ManagementManager_o *this, System_String_o *result, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  System_String_o *v5; // x1
  const MethodInfo *v6; // x2
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_5937DFE & 1) == 0 )
  {
    sub_21FFC50(&Method_ManagementManager_callbackTopHome__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5937DFE = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, result);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    goto LABEL_9;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, result);
  if ( TutorialFlag__Get_47357952(102, 0) )
  {
LABEL_9:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v8);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_21FFECC(0, v11);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  else
  {
    ManagementManager__callbackTopHome(this, v5, v6);
  }
}


void ManagementManager__createMovieObj(ManagementManager_o *this, const MethodInfo *method)
{
  struct AvalonVideoPlayer_o **p_videoPlayer_k__BackingField; // x20
  UnityEngine_Object_o *videoPlayer_k__BackingField; // x21
  UnityEngine_GameObject_o *v5; // x22
  UnityEngine_GameObject_o *v6; // x21
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  AvalonVideoPlayer_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_5937DF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_4784/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_21FFC50(&StringLiteral_9551/*"MovieRoot"*/);
    byte_5937DF0 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0, 0) )
  {
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4784/*"CommonUI/UI Root/SystemUICamera"*/, 0);
    v6 = (UnityEngine_GameObject_o *)sub_21FFEBC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9551/*"MovieRoot"*/, 0);
    if ( !v6
      || (v9 = UnityEngine_GameObject__AddComponent_object_(
                 v6,
                 (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields._videoPlayer_k__BackingField,
            (int32_t)v9,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15),
          !v5)
      || (v16 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v5,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v16) )
    {
      sub_21FFECC(Component_object, v8);
    }
    AvalonVideoPlayer__initialize(v16, (UnityEngine_Camera_o *)Component_object, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_42881912(v6, gameObject, 0);
  }
}


int32_t ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5937DEA & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_5937DEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return HIDWORD(Instance[5].monitor);
}


bool ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_5937DEB & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937DEB = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v1);
    v2 = ManagementManager_TypeInfo;
  }
  return v2->static_fields->isDuringStartup;
}


AvalonVideoPlayer_o *ManagementManager__get_videoPlayer(ManagementManager_o *this, const MethodInfo *method)
{
  return this->fields._videoPlayer_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void ManagementManager__reboot(ManagementManager_o *this, bool isLogin, bool isFadeInit, const MethodInfo *method)
{
  ManagementManager_c *v7; // x0
  struct ManagementManager_StaticFields *static_fields; // x9
  const MethodInfo_476E8C0 *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_IEnumerator_o *v22; // x1

  if ( (byte_5937DF1 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&FirebaseScript_TypeInfo);
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5937DF1 = 1;
  }
  if ( !this->fields.isInitializingData )
  {
    this->fields.isInitializingData = 1;
    v7 = ManagementManager_TypeInfo;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, isLogin);
      v7 = ManagementManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    v9 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__;
    static_fields->isDuringStartup = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance(v9);
    if ( !Instance )
      goto LABEL_32;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__Reboot(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    SwitchParameterDisplayManager__Reboot((SwitchParameterDisplayManager_o *)Instance, 0);
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v13);
    CommonEffectManager__Reboot(0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v14);
    SoundManager__reboot(0);
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v15);
    CTouch__reboot(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
      || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
LABEL_32:
      sub_21FFECC(Instance, v11);
    }
    PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)Instance, 0);
    if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v16);
    System_GC__Collect(0);
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v17);
    MyRoomParamsManager__Reboot(0);
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v18 )
      sub_21FFECC(0, v19);
    AdManager__Initialize((AdManager_o *)v18, 2, 0);
    if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v20);
    FirebaseScript__Initialize(0);
    v22 = ManagementManager__startCheckAll(this, 1, isLogin, v21);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v22, 0);
  }
}


void ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_5937DFD & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ManagementManager_callbackTopLogin__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_5937DFD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_21FFEBC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v5);
  if ( !Instance )
    sub_21FFECC(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, 1, v8);
}


void ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_5937E00 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_5937E00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_21FFEBC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v5);
  if ( !Instance )
    sub_21FFECC(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, 1, v8);
}


void ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._videoPlayer_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._videoPlayer_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_Collections_IEnumerator_o *ManagementManager__startCheckAll(
        ManagementManager_o *this,
        bool isReboot,
        bool isLogin,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5937DF4 & 1) == 0 )
  {
    sub_21FFC50(&ManagementManager__startCheckAll_d__39_TypeInfo);
    byte_5937DF4 = 1;
  }
  v7 = isReboot;
  v8 = sub_21FFEBC(ManagementManager__startCheckAll_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 32) = v7;
  result = (System_Collections_IEnumerator_o *)v8;
  *(_BYTE *)(v8 + 56) = isLogin;
  return result;
}


void ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_5937DF8 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5937DF8 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  DataManager__ClearCacheAll(0);
}


void ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ScrTerminalListTop_c *v3; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1

  if ( (byte_5937DF9 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ScrTerminalListTop_TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5937DF9 = 1;
  }
  MovieFileMerge__Delete_47422412(0);
  v3 = ScrTerminalListTop_TypeInfo;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v2);
    v3 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->NOTICE_LAST_MODIFIED_KEY, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_59354C6 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354C6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
  AssetStorageCache__ClearCacheAll(1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  DataManager__ClearCacheAll(0);
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v7);
  ServantCommentManager__SetForceReadNewComments(1, 0);
}


void ManagementManager__CheckMovieResume_d__68___ctor(
        ManagementManager__CheckMovieResume_d__68_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__CheckMovieResume_d__68__MoveNext(
        ManagementManager__CheckMovieResume_d__68_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  QuestPhaseMaster_o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  __int64 v6; // x1
  int32_t WarId; // w20
  struct ManagementManager___c__DisplayClass68_0_o *v8; // x8
  __int64 v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  __int64 v17; // x1
  System_String_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  CommonUI_o *v39; // x21
  System_String_o *movieFolder_5__4; // x22
  Il2CppObject *v41; // x24
  System_Action_o *v42; // x23
  Il2CppObject *v43; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int v51; // w8
  struct ManagementManager_o *_4__this; // x20
  Il2CppObject *v53; // x22
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x1
  int32_t *p_questID_5__2; // x22
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct QuestPhaseEntity_o **p_questPhaseEntity_5__3; // x23
  __int64 v69; // x1
  struct System_String_o *MovieFolder; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  Il2CppObject *Instance; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  __int64 v84; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // x23
  long double v86; // q0
  _BOOL4 v87; // w23
  struct ManagementManager___c__DisplayClass68_0_o *_8__1; // x8
  struct CommonUI_o *commonUI_5__5; // x8
  MovieFileMerge_o *MovieFileMerge_k__BackingField; // x20
  Il2CppObject *v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  int32_t v98; // w9
  int32_t v99; // w10
  struct ManagementManager___c__DisplayClass68_0_o *v100; // x21
  System_Action_bool__o *v101; // x22
  const MethodInfo *v102; // x2
  Il2CppObject *v103; // x0
  Il2CppObject **v104; // x19
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v113; // [xsp+10h] [xbp-50h] BYREF
  int32_t gender[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937E11 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&ConnectMark_DownloadCancelDialogData_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_ManagementManager___c__DisplayClass68_0__CheckMovieResume_b__0__);
    sub_21FFC50(&Method_ManagementManager___c__DisplayClass68_0__CheckMovieResume_b__1__);
    sub_21FFC50(&ManagementManager___c__DisplayClass68_0_TypeInfo);
    sub_21FFC50(&StringLiteral_5206/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3821/*"COMMON_CONFIRM_BACK"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_5207/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_MESSAGE"*/);
    byte_5937E11 = 1;
  }
  _1__state = this->fields.__1__state;
  Master_object = 0;
  v113 = 0;
  *(_QWORD *)gender = 0;
  entity = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      if ( _1__state != 3 )
        return (char)Master_object;
      this->fields.__1__state = -1;
LABEL_51:
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
      ScriptManager__DeleteMovieResumeInfo(0);
      goto LABEL_54;
    }
    _8__1 = this->fields.__8__1;
    this->fields.__1__state = -1;
    if ( !_8__1 )
      goto LABEL_76;
    if ( _8__1->fields.isBreak )
      goto LABEL_51;
    commonUI_5__5 = this->fields._commonUI_5__5;
    if ( commonUI_5__5 )
    {
      MovieFileMerge_k__BackingField = commonUI_5__5->fields._MovieFileMerge_k__BackingField;
      Master_object = (QuestPhaseMaster_o *)ManagementManager_TypeInfo;
      if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
      if ( MovieFileMerge_k__BackingField )
      {
        MovieFileMerge_k__BackingField->fields._OverrideDepth_k__BackingField = ManagementManager_TypeInfo->static_fields->OVERRIDE_MOVIE_DEPTH;
        v91 = (Il2CppObject *)MovieFileMerge__PlayMP4(MovieFileMerge_k__BackingField, 0);
        this->fields.__2__current = v91;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v91, v92, v93, v94, v95, v96, v97);
        v51 = 3;
        goto LABEL_61;
      }
    }
    goto LABEL_76;
  }
  if ( !_1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v53 = (Il2CppObject *)sub_21FFEBC(ManagementManager___c__DisplayClass68_0_TypeInfo);
    System_Object___ctor(v53, 0);
    this->fields.__8__1 = (struct ManagementManager___c__DisplayClass68_0_o *)v53;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v53, v54, v55, v56, v57, v58, v59);
    this->fields._questID_5__2 = 0;
    p_questID_5__2 = &this->fields._questID_5__2;
    *(_QWORD *)gender = 0;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v60);
    if ( !ScriptManager__GetMovieResumeInfo(&this->fields._questID_5__2, &gender[1], gender, 0) )
      goto LABEL_54;
    this->fields._questPhaseEntity_5__3 = 0;
    p_questPhaseEntity_5__3 = &this->fields._questPhaseEntity_5__3;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._questPhaseEntity_5__3,
      0,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v69);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( Master_object )
    {
      if ( !QuestPhaseMaster__TryGetEntity(
              Master_object,
              &this->fields._questPhaseEntity_5__3,
              *p_questID_5__2,
              gender[1],
              0) )
        goto LABEL_54;
      Master_object = (QuestPhaseMaster_o *)*p_questPhaseEntity_5__3;
      if ( !*p_questPhaseEntity_5__3 )
        goto LABEL_76;
      MovieFolder = QuestPhaseEntity__GetMovieFolder((QuestPhaseEntity_o *)Master_object, gender[0], 0);
      this->fields._movieFolder_5__4 = MovieFolder;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._movieFolder_5__4,
        (int32_t)MovieFolder,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      if ( System_String__IsNullOrEmpty(this->fields._movieFolder_5__4, 0) )
      {
LABEL_54:
        LOBYTE(Master_object) = 0;
        return (char)Master_object;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      this->fields._commonUI_5__5 = (struct CommonUI_o *)Instance;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._commonUI_5__5,
        (int32_t)Instance,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v84);
      Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
      v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      if ( v85 )
      {
        Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                v85,
                                                &v113,
                                                BalanceConfig_TypeInfo->static_fields->Fgo20251220WarId,
                                                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v113 )
            goto LABEL_76;
          v87 = HIDWORD(v113[6].klass) == *p_questID_5__2;
        }
        else
        {
          v87 = 0;
        }
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v86 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        if ( !byte_59354AD )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_59354AD = 1;
        }
        Master_object = (QuestPhaseMaster_o *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          *(__n128 *)&v86 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
          Master_object = (QuestPhaseMaster_o *)TerminalPramsManager_TypeInfo;
        }
        if ( v87 != (*((_BYTE *)Master_object[2].monitor + 648) != 0) )
        {
          if ( !HIDWORD(Master_object[2].fields._lookup) )
            *(__n128 *)&v86 = j_il2cpp_runtime_class_init_0(Master_object, method);
          sub_2E1F81C(v87, 0, v86);
          TerminalPramsManager__SaveIsTransitionToTerminalAfterMovie(0);
        }
        if ( _4__this )
        {
          v99 = gender[0];
          v98 = gender[1];
          v100 = this->fields.__8__1;
          _4__this->fields.checkMoviePlayData.fields.questID = *p_questID_5__2;
          _4__this->fields.checkMoviePlayData.fields.phase = v98;
          _4__this->fields.checkMoviePlayData.fields.genderType = v99;
          if ( v100 )
          {
            v100->fields.isBreak = 0;
            v101 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
            System_Action_bool____ctor(
              v101,
              (Il2CppObject *)v100,
              Method_ManagementManager___c__DisplayClass68_0__CheckMovieResume_b__0__,
              0);
            v103 = (Il2CppObject *)ManagementManager__CheckPlayMovieFromResumeInfo(_4__this, v101, v102);
            this->fields.__2__current = v103;
            v104 = &this->fields.__2__current;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v104, (int32_t)v103, v105, v106, v107, v108, v109, v110);
            LOBYTE(Master_object) = 1;
            *((_DWORD *)v104 - 2) = 1;
            return (char)Master_object;
          }
        }
      }
    }
    goto LABEL_76;
  }
  if ( _1__state != 1 )
    return (char)Master_object;
  this->fields.__1__state = -1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_76;
  Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          &entity,
                                          this->fields._questID_5__2,
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    goto LABEL_21;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !entity
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = (QuestPhaseMaster_o *)QuestEntity__GetWarId((QuestEntity_o *)entity, 0),
        !v5) )
  {
LABEL_76:
    sub_21FFECC(Master_object, method);
  }
  Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          v5,
                                          &v113,
                                          (int32_t)Master_object,
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !v113 )
      goto LABEL_76;
    Master_object = (QuestPhaseMaster_o *)entity;
    if ( !entity )
      goto LABEL_76;
    if ( HIDWORD(v113[6].klass) == LODWORD(entity[1].klass) )
    {
      WarId = QuestEntity__GetWarId((QuestEntity_o *)entity, 0);
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v6);
      ScriptManager__SavePlayedLastMovie(WarId, 0);
    }
  }
LABEL_21:
  v8 = this->fields.__8__1;
  if ( !v8 )
    goto LABEL_76;
  if ( v8->fields.isBreak )
    goto LABEL_51;
  v9 = sub_21FFEBC(ConnectMark_DownloadCancelDialogData_TypeInfo);
  ConnectMark_DownloadCancelDialogData___ctor((ConnectMark_DownloadCancelDialogData_o *)v9, 0);
  if ( !v9 )
    goto LABEL_76;
  v16 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v9 + 16) = StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), v16, v10, v11, v12, v13, v14, v15);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5207/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_MESSAGE"*/, 0);
  *(_QWORD *)(v9 + 24) = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5206/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_DECIDE"*/, 0);
  *(_QWORD *)(v9 + 32) = v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"COMMON_CONFIRM_BACK"*/, 0);
  *(_QWORD *)(v9 + 40) = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  movieFolder_5__4 = this->fields._movieFolder_5__4;
  v39 = this->fields._commonUI_5__5;
  v41 = (Il2CppObject *)this->fields.__8__1;
  *(_BYTE *)(v9 + 48) = 1;
  v42 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v42, v41, Method_ManagementManager___c__DisplayClass68_0__CheckMovieResume_b__1__, 0);
  Master_object = (QuestPhaseMaster_o *)this->fields._questPhaseEntity_5__3;
  if ( !Master_object )
    goto LABEL_76;
  Master_object = (QuestPhaseMaster_o *)QuestPhaseEntity__IsEnableSkipMovie((QuestPhaseEntity_o *)Master_object, 0);
  if ( !v39 )
    goto LABEL_76;
  v43 = (Il2CppObject *)CommonUI__DownloadMovieAndWaitUI(
                          v39,
                          movieFolder_5__4,
                          0,
                          v42,
                          (unsigned __int8)Master_object & 1,
                          (ConnectMark_DownloadCancelDialogData_o *)v9,
                          0);
  this->fields.__2__current = v43;
  p__2__current = &this->fields.__2__current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = 2;
LABEL_61:
  *((_DWORD *)p__2__current - 2) = v51;
  LOBYTE(Master_object) = 1;
  return (char)Master_object;
}


Il2CppObject *ManagementManager__CheckMovieResume_d__68__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__CheckMovieResume_d__68_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__CheckMovieResume_d__68__System_Collections_IEnumerator_Reset(
        ManagementManager__CheckMovieResume_d__68_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ManagementManager__CheckMovieResume_d__68_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ManagementManager__CheckMovieResume_d__68__System_Collections_IEnumerator_get_Current(
        ManagementManager__CheckMovieResume_d__68_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__CheckMovieResume_d__68__System_IDisposable_Dispose(
        ManagementManager__CheckMovieResume_d__68_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager__CheckPlayMovieFromResumeInfo_d__69___ctor(
        ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__CheckPlayMovieFromResumeInfo_d__69__MoveNext(
        ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *v8; // x19
  int32_t _1__state; // w8
  struct ManagementManager_o *_4__this; // x29
  Il2CppObject *v11; // x21
  struct ManagementManager___c__DisplayClass69_0_o **p__8__1; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct ManagementManager_o *v25; // x1
  struct ManagementManager___c__DisplayClass69_0_o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  __int64 v40; // x1
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_String_o *monitor; // x1
  struct ManagementManager___c__DisplayClass69_0_o *v50; // x20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *MoviePlayTime; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct System_Action_bool__o *callback; // x8
  struct ManagementManager___c__DisplayClass69_0_o *v65; // x23
  System_String_o *v66; // x20
  System_String_o *v67; // x0
  System_String_o *v68; // x21
  System_String_o *v69; // x22
  struct ManagementManager___c__DisplayClass69_0_o *v70; // x26
  ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *v71; // x23
  CommonConfirmDialog_ClickDelegate_o *_9__3; // x25
  CommonUI_o *v73; // x24
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  int32_t questID; // w20
  int32_t phase; // w22
  CommonConfirmDialog_ClickDelegate_o *_9__0; // x24
  CommonUI_o *v83; // x21
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  System_Action_o *_9__1; // x25
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_String_o *v97; // x20
  struct ManagementManager___c__DisplayClass69_0_o *v98; // x23
  ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *v99; // x21
  CommonConfirmDialog_ClickDelegate_o *_9__2; // x24
  CommonUI_o *commonUI; // x22
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct ManagementManager___c__DisplayClass69_0_o *v108; // x8
  int32_t checkMovieState; // w8
  struct System_Action_bool__o *v110; // x8
  struct ManagementManager___c__DisplayClass69_0_o *_8__1; // x9
  bool result; // w0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_5937E12 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__0__);
    sub_21FFC50(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__1__);
    sub_21FFC50(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__2__);
    sub_21FFC50(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__3__);
    sub_21FFC50(&ManagementManager___c__DisplayClass69_0_TypeInfo);
    sub_21FFC50(&StringLiteral_11599/*"RESUME_MOVIE_DIALOG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_11600/*"RESUME_MOVIE_DIALOG_DETAIL"*/);
    sub_21FFC50(&StringLiteral_12730/*"SKIP_MOVIE_DIALOG_DETAIL"*/);
    sub_21FFC50(&StringLiteral_12731/*"SKIP_MOVIE_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_11598/*"RESUME_MOVIE_DIALOG_CANCEL"*/);
    sub_21FFC50(&StringLiteral_11601/*"RESUME_MOVIE_DIALOG_TITLE"*/);
    this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937E12 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  entity = 0;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_49;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v11 = (Il2CppObject *)sub_21FFEBC(ManagementManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor(v11, 0);
  v8->fields.__8__1 = (struct ManagementManager___c__DisplayClass69_0_o *)v11;
  p__8__1 = &v8->fields.__8__1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)v8->fields.__8__1;
  if ( !this )
    goto LABEL_59;
  v25 = v8->fields.__4__this;
  this->fields.__4__this = v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__4__this, (int32_t)v25, v19, v20, v21, v22, v23, v24);
  if ( !_4__this )
    goto LABEL_59;
  v26 = *p__8__1;
  _4__this->fields.checkMoviePlayData.fields.checkMovieState = 1;
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v26 )
    goto LABEL_59;
  v26->fields.commonUI = (struct CommonUI_o *)this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->fields, (int32_t)this, v27, v28, v29, v30, v31, v32);
  if ( !*p__8__1 )
    goto LABEL_59;
  *(_WORD *)&(*p__8__1)->fields.isWaitDialog = 0;
  v39 = (int)StringLiteral_1/*""*/;
  v8->fields._questName_5__2 = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._questName_5__2, v39, v33, v34, v35, v36, v37, v38);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_59;
  v41 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          _4__this->fields.checkMoviePlayData.fields.questID,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v41 )
  {
    monitor = (struct System_String_o *)v41[1].monitor;
    v8->fields._questName_5__2 = monitor;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._questName_5__2,
      (int32_t)monitor,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  entity = 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !this )
    goto LABEL_59;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)this,
          &entity,
          _4__this->fields.checkMoviePlayData.fields.questID,
          _4__this->fields.checkMoviePlayData.fields.phase,
          0) )
  {
    callback = v8->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        1,
        callback->fields.method);
    return 0;
  }
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)entity;
  if ( !entity )
    goto LABEL_59;
  v50 = *p__8__1;
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)QuestPhaseEntity__GetMovieFolder(
                                                                      entity,
                                                                      _4__this->fields.checkMoviePlayData.fields.genderType,
                                                                      0);
  if ( !v50 )
    goto LABEL_59;
  v50->fields.movieFolder = (struct System_String_o *)this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v50->fields.movieFolder, (int32_t)this, v51, v52, v53, v54, v55, v56);
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)entity;
  if ( !entity )
    goto LABEL_59;
  MoviePlayTime = QuestPhaseEntity__GetMoviePlayTime(entity, 0);
  v8->fields._playTime_5__3 = MoviePlayTime;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields._playTime_5__3,
    (int32_t)MoviePlayTime,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  do
  {
    if ( !_4__this )
      goto LABEL_59;
    checkMovieState = _4__this->fields.checkMoviePlayData.fields.checkMovieState;
    if ( checkMovieState == 4 )
    {
      v110 = v8->fields.callback;
      if ( !v110 )
        return 0;
      _8__1 = v8->fields.__8__1;
      if ( _8__1 )
      {
        ((void (__fastcall *)(intptr_t, bool, intptr_t))v110->fields.invoke_impl)(
          v110->fields.method_code,
          _8__1->fields.isSkipped,
          v110->fields.method);
        return 0;
      }
LABEL_59:
      sub_21FFECC(this, method);
    }
    v65 = v8->fields.__8__1;
    if ( !v65 )
      goto LABEL_59;
    v65->fields.isWaitDialog = 1;
    switch ( checkMovieState )
    {
      case 3:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12731/*"SKIP_MOVIE_DIALOG_TITLE"*/, 0);
        this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_12730/*"SKIP_MOVIE_DIALOG_DETAIL"*/,
                                                                            0);
        v98 = v8->fields.__8__1;
        if ( !v98 )
          goto LABEL_59;
        v99 = this;
        _9__2 = v98->fields.__9__2;
        commonUI = v98->fields.commonUI;
        if ( !_9__2 )
        {
          _9__2 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__2,
            (Il2CppObject *)v98,
            Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__2__,
            0);
          v98->fields.__9__2 = _9__2;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v98->fields.__9__2,
            (int32_t)_9__2,
            v102,
            v103,
            v104,
            v105,
            v106,
            v107);
        }
        if ( !commonUI )
          goto LABEL_59;
        CommonUI__OpenLockDecideDialog(commonUI, v97, (System_String_o *)v99, _9__2, 0);
        break;
      case 2:
        questID = _4__this->fields.checkMoviePlayData.fields.questID;
        phase = _4__this->fields.checkMoviePlayData.fields.phase;
        _9__0 = v65->fields.__9__0;
        v83 = v65->fields.commonUI;
        if ( !_9__0 )
        {
          _9__0 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__0,
            (Il2CppObject *)v65,
            Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__0__,
            0);
          v65->fields.__9__0 = _9__0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v65->fields.__9__0,
            (int32_t)_9__0,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89);
          v65 = v8->fields.__8__1;
          if ( !v65 )
            goto LABEL_59;
        }
        _9__1 = v65->fields.__9__1;
        if ( !_9__1 )
        {
          _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__1,
            (Il2CppObject *)v65,
            Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__1__,
            0);
          v65->fields.__9__1 = _9__1;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v65->fields.__9__1,
            (int32_t)_9__1,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
        }
        if ( !v83 )
          goto LABEL_59;
        CommonUI__OpenDownloadMovieDialog(v83, questID, phase, _9__0, _9__1, 0, 0);
        break;
      case 1:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"RESUME_MOVIE_DIALOG_TITLE"*/, 0);
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11600/*"RESUME_MOVIE_DIALOG_DETAIL"*/, 0);
        v68 = System_String__Format_75484576(
                v67,
                (Il2CppObject *)v8->fields._questName_5__2,
                (Il2CppObject *)v8->fields._playTime_5__3,
                0);
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11599/*"RESUME_MOVIE_DIALOG_DECIDE"*/, 0);
        this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_11598/*"RESUME_MOVIE_DIALOG_CANCEL"*/,
                                                                            0);
        v70 = v8->fields.__8__1;
        if ( !v70 )
          goto LABEL_59;
        v71 = this;
        _9__3 = v70->fields.__9__3;
        v73 = v70->fields.commonUI;
        if ( !_9__3 )
        {
          _9__3 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__3,
            (Il2CppObject *)v70,
            Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__3__,
            0);
          v70->fields.__9__3 = _9__3;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v70->fields.__9__3,
            (int32_t)_9__3,
            v74,
            v75,
            v76,
            v77,
            v78,
            v79);
        }
        if ( !v73 )
          goto LABEL_59;
        CommonUI__OpenConfirmDialog_37292368(
          v73,
          v66,
          v68,
          v69,
          (System_String_o *)v71,
          1,
          _9__3,
          23,
          13.0,
          0,
          24,
          24,
          0);
        break;
    }
LABEL_49:
    v108 = v8->fields.__8__1;
    if ( !v108 )
      goto LABEL_59;
  }
  while ( !v108->fields.isWaitDialog );
  v8->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v2, v3, v4, v5, v6, v7);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *ManagementManager__CheckPlayMovieFromResumeInfo_d__69__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__CheckPlayMovieFromResumeInfo_d__69__System_Collections_IEnumerator_Reset(
        ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ManagementManager__CheckPlayMovieFromResumeInfo_d__69_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ManagementManager__CheckPlayMovieFromResumeInfo_d__69__System_Collections_IEnumerator_get_Current(
        ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__CheckPlayMovieFromResumeInfo_d__69__System_IDisposable_Dispose(
        ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager__InitializeAdManagerAndFirebase_d__40___ctor(
        ManagementManager__InitializeAdManagerAndFirebase_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__InitializeAdManagerAndFirebase_d__40__MoveNext(
        ManagementManager__InitializeAdManagerAndFirebase_d__40_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w21
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  ManagementManager_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_IEnumerator_o *v12; // x1
  ManagementManager_o *started; // x0
  const MethodInfo *v14; // x1
  System_Collections_IEnumerator_o *v15; // x1
  UnityEngine_WaitForEndOfFrame_o *v16; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5937E13 & 1) == 0 )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_5937E13 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
      this->fields.__1__state = -1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !Instance )
        sub_21FFECC(0, v6);
      AdManager__Initialize((AdManager_o *)Instance, 0, 0);
      v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !v7 )
        sub_21FFECC(0, v8);
      AdManager__Initialize((AdManager_o *)v7, 1, 0);
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v9);
      FirebaseScript__Initialize(0);
      if ( !_4__this )
        sub_21FFECC(v10, v11);
      v12 = ManagementManager__SetupFirebaseAppCheck(v10, v11);
      started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_83231452(_4__this, v12, 0);
      v15 = ManagementManager__SetupFirebaseCrashlytics(started, v14);
      UnityEngine_MonoBehaviour__StartCoroutine_83231452(_4__this, v15, 0);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v16, 0);
    this->fields.__2__current = (Il2CppObject *)v16;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *ManagementManager__InitializeAdManagerAndFirebase_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__InitializeAdManagerAndFirebase_d__40__System_Collections_IEnumerator_Reset(
        ManagementManager__InitializeAdManagerAndFirebase_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__40_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ManagementManager__InitializeAdManagerAndFirebase_d__40__System_Collections_IEnumerator_get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__InitializeAdManagerAndFirebase_d__40__System_IDisposable_Dispose(
        ManagementManager__InitializeAdManagerAndFirebase_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager__SetupFirebaseAppCheck_d__41___ctor(
        ManagementManager__SetupFirebaseAppCheck_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__SetupFirebaseAppCheck_d__41__MoveNext(
        ManagementManager__SetupFirebaseAppCheck_d__41_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  FirebaseScript_c *v10; // x0
  FirebaseScript_c *v11; // x0
  FirebaseScript_c *v12; // x0
  long double v13; // q0
  FirebaseScript_c *v14; // x0
  FirebaseScript_c *v15; // x0
  System_String_o *v16; // x19
  System_String_o *AppCheckPrevMessageKey_k__BackingField; // x0
  FirebaseScript_c *v18; // x0
  Il2CppObject **v19; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  __int64 v22; // x1
  float time; // s8
  FirebaseScript_c *v24; // x0
  float beginTime_5__2; // s9
  FirebaseScript_c *v26; // x0
  float v27; // s8
  char IsNullOrEmpty; // w0
  char v29; // w22
  bool v30; // w23
  Il2CppObject *v31; // x19
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  FirebaseScript_c *v34; // x0
  FirebaseScript_c *v35; // x0
  bool v36[4]; // [xsp+8h] [xbp-48h] BYREF
  float v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5937E14 & 1) == 0 )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    sub_21FFC50(&StringLiteral_872/*", AppCheckErrorMessage: "*/);
    sub_21FFC50(&StringLiteral_6177/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/);
    sub_21FFC50(&StringLiteral_8322/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/);
    byte_5937E14 = 1;
  }
  _1__state = this->fields.__1__state;
  switch ( _1__state )
  {
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_42;
    case 1:
      this->fields.__1__state = -1;
      goto LABEL_14;
    case 0:
      v10 = FirebaseScript_TypeInfo;
      this->fields.__1__state = -1;
      if ( !*(&v10->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v10, method);
      if ( !byte_5937EFE )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937EFE = 1;
      }
      v11 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
        v11 = FirebaseScript_TypeInfo;
      }
      v11->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0);
LABEL_14:
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      if ( !byte_5937EFF )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937EFF = 1;
      }
      v12 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
        v12 = FirebaseScript_TypeInfo;
      }
      if ( !v12->static_fields->_IsFirebaseInitialized_k__BackingField )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !*(&v12->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v12, method);
      if ( !FirebaseScript__GetAppCheckToken(0, 0) )
      {
        if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
        if ( !byte_5937F00 )
        {
          sub_21FFC50(&FirebaseScript_TypeInfo);
          byte_5937F00 = 1;
        }
        v14 = FirebaseScript_TypeInfo;
        if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        {
          *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
          v14 = FirebaseScript_TypeInfo;
        }
        if ( v14->static_fields->_IsSendAppCheckToken_k__BackingField )
          return 0;
        if ( !*(&v14->_2.cctor_finished + 1) )
          *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(v14, method);
        if ( !byte_5931D51 )
        {
          sub_21FFC50(&FirebaseScript_TypeInfo);
          byte_5931D51 = 1;
        }
        v15 = FirebaseScript_TypeInfo;
        if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        {
          *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
          v15 = FirebaseScript_TypeInfo;
        }
        if ( v15->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        v16 = (System_String_o *)StringLiteral_8322/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        if ( !*(&v15->_2.cctor_finished + 1) )
          *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(v15, method);
        AppCheckPrevMessageKey_k__BackingField = (System_String_o *)sub_2E1F87C(0, v13);
        goto LABEL_79;
      }
LABEL_42:
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      if ( !byte_5937DE1 )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937DE1 = 1;
      }
      v18 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
        v18 = FirebaseScript_TypeInfo;
      }
      if ( v18->static_fields->_IsRunningGetAppCheckToken_k__BackingField )
      {
        this->fields.__2__current = 0;
        v19 = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v19, 0, v2, v3, v4, v5, v6, v7);
        result = 1;
        *((_DWORD *)v19 - 2) = 2;
        return result;
      }
      time = UnityEngine_Time__get_time(0);
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v22);
      if ( !byte_5937F00 )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937F00 = 1;
      }
      v24 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v22);
        v24 = FirebaseScript_TypeInfo;
      }
      if ( v24->static_fields->_IsSendAppCheckToken_k__BackingField )
        return 0;
      beginTime_5__2 = this->fields._beginTime_5__2;
      if ( !*(&v24->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v24, v22);
      if ( !byte_5937F02 )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937F02 = 1;
      }
      v26 = FirebaseScript_TypeInfo;
      v27 = time - beginTime_5__2;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v22);
        v26 = FirebaseScript_TypeInfo;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v26->static_fields->_AppCheckToken_k__BackingField, 0);
      v29 = ~IsNullOrEmpty;
      v30 = (IsNullOrEmpty & 1) == 0;
      v37 = v27;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v37);
      v36[0] = v30;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C050, v36);
      v16 = System_String__Format_75484576((System_String_o *)StringLiteral_6177/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v31, v32, 0);
      if ( (v29 & 1) == 0 )
      {
        if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v33);
        if ( !byte_5937F03 )
        {
          sub_21FFC50(&FirebaseScript_TypeInfo);
          byte_5937F03 = 1;
        }
        v34 = FirebaseScript_TypeInfo;
        if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v33);
          v34 = FirebaseScript_TypeInfo;
        }
        v16 = System_String__Concat_75481624(
                v16,
                (System_String_o *)StringLiteral_872/*", AppCheckErrorMessage: "*/,
                v34->static_fields->_AppCheckTokenError_k__BackingField,
                0);
      }
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v33);
      if ( !byte_5937F01 )
      {
        sub_21FFC50(&FirebaseScript_TypeInfo);
        byte_5937F01 = 1;
      }
      v35 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v33);
        v35 = FirebaseScript_TypeInfo;
      }
      AppCheckPrevMessageKey_k__BackingField = v35->static_fields->_AppCheckPrevMessageKey_k__BackingField;
LABEL_79:
      UnityEngine_PlayerPrefs__SetString(AppCheckPrevMessageKey_k__BackingField, v16, 0);
      UnityEngine_PlayerPrefs__Save(0);
      break;
  }
  return 0;
}


Il2CppObject *ManagementManager__SetupFirebaseAppCheck_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__SetupFirebaseAppCheck_d__41__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseAppCheck_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ManagementManager__SetupFirebaseAppCheck_d__41_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ManagementManager__SetupFirebaseAppCheck_d__41__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__SetupFirebaseAppCheck_d__41__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseAppCheck_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager__SetupFirebaseCrashlytics_d__42___ctor(
        ManagementManager__SetupFirebaseCrashlytics_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__SetupFirebaseCrashlytics_d__42__MoveNext(
        ManagementManager__SetupFirebaseCrashlytics_d__42_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  FirebaseScript_c *v9; // x0
  FirebaseScript_c *v10; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_5937E15 & 1) == 0 )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_5937E15 = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
  if ( !byte_5937EFF )
  {
    sub_21FFC50(&FirebaseScript_TypeInfo);
    byte_5937EFF = 1;
  }
  v9 = FirebaseScript_TypeInfo;
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
    v9 = FirebaseScript_TypeInfo;
  }
  if ( v9->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v9, method);
    if ( !byte_5931D51 )
    {
      sub_21FFC50(&FirebaseScript_TypeInfo);
      byte_5931D51 = 1;
    }
    v10 = FirebaseScript_TypeInfo;
    if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      v10 = FirebaseScript_TypeInfo;
    }
    if ( v10->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_21FFECC(0, v12);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0);
    }
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *ManagementManager__SetupFirebaseCrashlytics_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__SetupFirebaseCrashlytics_d__42__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseCrashlytics_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ManagementManager__SetupFirebaseCrashlytics_d__42_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ManagementManager__SetupFirebaseCrashlytics_d__42__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__SetupFirebaseCrashlytics_d__42__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseCrashlytics_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager___c__DisplayClass39_0___ctor(
        ManagementManager___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ManagementManager___c__DisplayClass39_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass39_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_5937E0E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_ManagementManager___c__DisplayClass39_1__startCheckAll_b__1__);
    sub_21FFC50(&ManagementManager___c__DisplayClass39_1_TypeInfo);
    byte_5937E0E = 1;
  }
  v5 = sub_21FFEBC(ManagementManager___c__DisplayClass39_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass39_1__startCheckAll_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37292452((CommonUI_o *)Instance, v16, 0);
}


void ManagementManager___c__DisplayClass39_1___ctor(
        ManagementManager___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ManagementManager___c__DisplayClass39_1___startCheckAll_b__1(
        ManagementManager___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  struct ManagementManager___c__DisplayClass39_0_o *CS___8__locals1; // x8
  bool flag; // w9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_21FFECC(this, method);
  flag = this->fields.flag;
  CS___8__locals1->fields.confirmed = 1;
  CS___8__locals1->fields.isDecide = flag;
}


void ManagementManager___c__DisplayClass68_0___ctor(
        ManagementManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ManagementManager___c__DisplayClass68_0___CheckMovieResume_b__0(
        ManagementManager___c__DisplayClass68_0_o *this,
        bool isSkipped,
        const MethodInfo *method)
{
  this->fields.isBreak = isSkipped;
}


void ManagementManager___c__DisplayClass68_0___CheckMovieResume_b__1(
        ManagementManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  this->fields.isBreak = 1;
}


void ManagementManager___c__DisplayClass69_0___ctor(
        ManagementManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ManagementManager___c__DisplayClass69_0___CheckPlayMovieFromResumeInfo_b__0(
        ManagementManager___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ManagementManager_o *_4__this; // x8
  int v4; // w9

  _4__this = this->fields.__4__this;
  if ( !isDecide )
  {
    if ( _4__this )
    {
      v4 = 1;
      goto LABEL_6;
    }
LABEL_7:
    sub_21FFECC(this, isDecide);
  }
  if ( !_4__this )
    goto LABEL_7;
  v4 = 4;
LABEL_6:
  _4__this->fields.checkMoviePlayData.fields.checkMovieState = v4;
}


void ManagementManager___c__DisplayClass69_0___CheckPlayMovieFromResumeInfo_b__1(
        ManagementManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWaitDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void ManagementManager___c__DisplayClass69_0___CheckPlayMovieFromResumeInfo_b__2(
        ManagementManager___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ManagementManager___c__DisplayClass69_0_o *v4; // x19
  struct ManagementManager_o *_4__this; // x8
  int v6; // w9
  CommonUI_o *v7; // x20
  System_Action_o *_9__5; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v4 = this;
  if ( (byte_5937E10 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ManagementManager___c__DisplayClass69_0_o *)sub_21FFC50(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__5__);
    byte_5937E10 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.isSkipped = 1;
    if ( !_4__this )
      goto LABEL_12;
    v6 = 4;
  }
  else
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    v6 = 1;
  }
  _4__this->fields.checkMoviePlayData.fields.checkMovieState = v6;
  this = (ManagementManager___c__DisplayClass69_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)this;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v9, v10, v11, v12, v13, v14);
  }
  if ( !v7 )
LABEL_12:
    sub_21FFECC(this, isDecide);
  CommonUI__CloseLockDecideDialog(v7, _9__5, 0);
}


// local variable allocation has failed, the output may be wrong!
void ManagementManager___c__DisplayClass69_0___CheckPlayMovieFromResumeInfo_b__3(
        ManagementManager___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ManagementManager___c__DisplayClass69_0_o *v4; // x19
  struct CommonUI_o *commonUI; // x8
  struct ManagementManager_o *_4__this; // x8
  int v7; // w9
  CommonUI_o *v8; // x20
  System_Action_o *_9__4; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v4 = this;
  if ( (byte_5937E0F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ManagementManager___c__DisplayClass69_0_o *)sub_21FFC50(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__4__);
    byte_5937E0F = 1;
  }
  if ( isDecide )
  {
    commonUI = v4->fields.commonUI;
    if ( !commonUI )
      goto LABEL_17;
    this = (ManagementManager___c__DisplayClass69_0_o *)commonUI->fields._MovieFileMerge_k__BackingField;
    if ( !this )
      goto LABEL_17;
    this = (ManagementManager___c__DisplayClass69_0_o *)MovieFileMerge__ExistCRCCheckedMovieFile(
                                                          (MovieFileMerge_o *)this,
                                                          v4->fields.movieFolder,
                                                          0);
    _4__this = v4->fields.__4__this;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_17;
      v7 = 4;
    }
    else
    {
      if ( !_4__this )
        goto LABEL_17;
      v7 = 2;
    }
  }
  else
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_17;
    v7 = 3;
  }
  _4__this->fields.checkMoviePlayData.fields.checkMovieState = v7;
  this = (ManagementManager___c__DisplayClass69_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)this;
  _9__4 = v4->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__4__,
      0);
    v4->fields.__9__4 = _9__4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
LABEL_17:
    sub_21FFECC(this, isDecide);
  CommonUI__CloseConfirmDialog_37292452(v8, _9__4, 0);
}


void ManagementManager___c__DisplayClass69_0___CheckPlayMovieFromResumeInfo_b__4(
        ManagementManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWaitDialog = 0;
}


void ManagementManager___c__DisplayClass69_0___CheckPlayMovieFromResumeInfo_b__5(
        ManagementManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWaitDialog = 0;
}


void ManagementManager__startCheckAll_d__39___ctor(
        ManagementManager__startCheckAll_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__startCheckAll_d__39__MoveNext(
        ManagementManager__startCheckAll_d__39_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ManagementManager__startCheckAll_d__39_o *v8; // x29
  AndroidUtil_c **v9; // x26
  const MethodInfo_476E8C0 **v10; // x23
  LocalizationManager_c **v11; // x22
  struct ManagementManager_o *_4__this; // x28
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v14; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x29
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  bool result; // w0
  const MethodInfo_476E8C0 *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  MissionNaviTransitionBoardItem_o *v25; // x29
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int v32; // w8
  const MethodInfo_476E8C0 *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  __int64 v35; // x1
  DataManager_c *v36; // x0
  struct DataManager_StaticFields *v37; // x9
  ServantCommentManager_c *v38; // x0
  int32_t updateMasterDataResult; // w8
  __int64 v40; // x1
  int32_t updateMasterResult_5__9; // w8
  const MethodInfo_476E8C0 *v42; // x0
  __int64 v43; // x1
  Il2CppObject *v44; // x21
  System_String_o *v45; // x22
  ErrorDialog_ClickDelegate_o *v46; // x23
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  long double v49; // q0
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *started; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  ManagementManager__startCheckAll_d__39_o *v64; // x21
  int32_t v65; // w1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  int32_t v79; // w1
  __int64 v80; // x1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  EncryptedPlayerPrefs_c *v87; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  DataManager_c *v89; // x0
  UnityEngine_Coroutine_o *v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v98; // x21
  const MethodInfo *v99; // x3
  __int64 v100; // x1
  UnityEngine_WaitForEndOfFrame_o *v101; // x20
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  long double v108; // q0
  __int64 v109; // x1
  System_Collections_IEnumerator_o *v110; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  UnityEngine_WaitForEndOfFrame_o *v117; // x20
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  __int64 v124; // x1
  __int64 v125; // x1
  OptionManager_c *v126; // x0
  __int64 v127; // x1
  const MethodInfo *v128; // x0
  const MethodInfo *v129; // x0
  __int64 v130; // x1
  UnityEngine_Application_LogCallback_o *v131; // x21
  __int64 v132; // x1
  UnityEngine_WaitForEndOfFrame_o *v133; // x20
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  __int64 v140; // x1
  __int64 v141; // x1
  System_Collections_IEnumerator_o *v142; // x0
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  UnityEngine_WaitForEndOfFrame_o *v149; // x20
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  const MethodInfo_476E8C0 *v156; // x0
  const MethodInfo *v157; // x1
  __int64 v158; // x1
  NetworkManager_ResultCallbackFunc_o *v159; // x21
  const MethodInfo *v160; // x3
  __int64 v161; // x1
  UnityEngine_WaitForEndOfFrame_o *v162; // x20
  System_String_o *v163; // x2
  System_String_o *v164; // x3
  int32_t v165; // w4
  int32_t v166; // w5
  bool v167; // w6
  bool v168; // w7
  Il2CppObject *wait_5__8; // x1
  Il2CppObject *waitForServerTime_5__7; // x1
  struct ManagementManager___c__DisplayClass39_0_o *v171; // x8
  UnityEngine_WaitForEndOfFrame_o *v172; // x20
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  UnityEngine_WaitForEndOfFrame_o *v179; // x20
  System_String_o *v180; // x2
  System_String_o *v181; // x3
  int32_t v182; // w4
  int32_t v183; // w5
  bool v184; // w6
  bool v185; // w7
  ManagementManager_c *v186; // x0
  const MethodInfo *v187; // x2
  OptionManager_c *v188; // x0
  bool Notiffication; // w0
  const MethodInfo *v190; // x2
  __int64 v191; // x1
  ManagementManager_c *v192; // x0
  const MethodInfo_476E8C0 *v193; // x0
  UnityEngine_WaitForEndOfFrame_o *v194; // x20
  System_String_o *v195; // x2
  System_String_o *v196; // x3
  int32_t v197; // w4
  int32_t v198; // w5
  bool v199; // w6
  bool v200; // w7
  System_Collections_IEnumerator_o *v201; // x0
  UnityEngine_Coroutine_o *v202; // x0
  System_String_o *v203; // x2
  System_String_o *v204; // x3
  int32_t v205; // w4
  int32_t v206; // w5
  bool v207; // w6
  bool v208; // w7
  LocalizationManager_c *v209; // x0
  UnityEngine_WaitForEndOfFrame_o *v210; // x20
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  UnityEngine_WaitForEndOfFrame_o *v217; // x20
  System_String_o *v218; // x2
  System_String_o *v219; // x3
  int32_t v220; // w4
  int32_t v221; // w5
  bool v222; // w6
  bool v223; // w7
  NetworkManager_ResultCallbackFunc_o *v224; // x21
  const MethodInfo *v225; // x3
  __int64 v226; // x1
  UnityEngine_WaitForEndOfFrame_o *v227; // x20
  System_String_o *v228; // x2
  System_String_o *v229; // x3
  int32_t v230; // w4
  int32_t v231; // w5
  bool v232; // w6
  bool v233; // w7
  __int64 v234; // x1
  __int64 v235; // x1
  UnityEngine_WaitForEndOfFrame_o *v236; // x20
  System_String_o *v237; // x2
  System_String_o *v238; // x3
  int32_t v239; // w4
  int32_t v240; // w5
  bool v241; // w6
  bool v242; // w7
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v244; // x20
  System_String_o *v245; // x2
  System_String_o *v246; // x3
  int32_t v247; // w4
  int32_t v248; // w5
  bool v249; // w6
  bool v250; // w7
  UnityEngine_WaitForEndOfFrame_o *v251; // x20
  System_String_o *v252; // x2
  System_String_o *v253; // x3
  int32_t v254; // w4
  int32_t v255; // w5
  bool v256; // w6
  bool v257; // w7
  UnityEngine_WaitForEndOfFrame_o *v258; // x20
  System_String_o *v259; // x2
  System_String_o *v260; // x3
  int32_t v261; // w4
  int32_t v262; // w5
  bool v263; // w6
  bool v264; // w7
  UnityEngine_WaitForEndOfFrame_o *v265; // x20
  System_String_o *v266; // x2
  System_String_o *v267; // x3
  int32_t v268; // w4
  int32_t v269; // w5
  bool v270; // w6
  bool v271; // w7
  __int64 v272; // x1
  __int64 v273; // x1
  UnityEngine_WaitForSeconds_o *v274; // x20
  System_String_o *v275; // x2
  System_String_o *v276; // x3
  int32_t v277; // w4
  int32_t v278; // w5
  bool v279; // w6
  bool v280; // w7
  UnityEngine_WaitForEndOfFrame_o *v281; // x20
  System_String_o *v282; // x2
  System_String_o *v283; // x3
  int32_t v284; // w4
  int32_t v285; // w5
  bool v286; // w6
  bool v287; // w7
  UnityEngine_WaitForEndOfFrame_o *v288; // x20
  System_String_o *v289; // x2
  System_String_o *v290; // x3
  int32_t v291; // w4
  int32_t v292; // w5
  bool v293; // w6
  bool v294; // w7
  UnityEngine_WaitForEndOfFrame_o *v295; // x20
  System_String_o *v296; // x2
  System_String_o *v297; // x3
  int32_t v298; // w4
  int32_t v299; // w5
  bool v300; // w6
  bool v301; // w7
  __int64 v302; // x1
  ManagerConfig_c *v303; // x0
  UnityEngine_WaitForEndOfFrame_o *v304; // x20
  System_String_o *v305; // x2
  System_String_o *v306; // x3
  int32_t v307; // w4
  int32_t v308; // w5
  bool v309; // w6
  bool v310; // w7
  UnityEngine_WaitForSeconds_o *v311; // x20
  System_String_o *v312; // x2
  System_String_o *v313; // x3
  int32_t v314; // w4
  int32_t v315; // w5
  bool v316; // w6
  bool v317; // w7
  UnityEngine_WaitForEndOfFrame_o *v318; // x20
  System_String_o *v319; // x2
  System_String_o *v320; // x3
  int32_t v321; // w4
  int32_t v322; // w5
  bool v323; // w6
  bool v324; // w7
  UnityEngine_WaitForEndOfFrame_o *v325; // x20
  System_String_o *v326; // x2
  System_String_o *v327; // x3
  int32_t v328; // w4
  int32_t v329; // w5
  bool v330; // w6
  bool v331; // w7
  System_Collections_IEnumerator_o *v332; // x0
  System_String_o *v333; // x2
  System_String_o *v334; // x3
  int32_t v335; // w4
  int32_t v336; // w5
  bool v337; // w6
  bool v338; // w7
  __int64 v339; // x1
  ManagementManager_c *v340; // x0
  UnityEngine_Coroutine_o *v341; // x0
  System_String_o *v342; // x2
  System_String_o *v343; // x3
  int32_t v344; // w4
  int32_t v345; // w5
  bool v346; // w6
  bool v347; // w7
  const MethodInfo_476E8C0 *v348; // x0
  __int64 v349; // x1
  Il2CppObject *v350; // x21
  System_String_o *v351; // x22
  ErrorDialog_ClickDelegate_o *v352; // x23
  UnityEngine_WaitForEndOfFrame_o *v353; // x20
  System_String_o *v354; // x2
  System_String_o *v355; // x3
  int32_t v356; // w4
  int32_t v357; // w5
  bool v358; // w6
  bool v359; // w7
  System_String_o *v360; // x2
  System_String_o *v361; // x3
  int32_t v362; // w4
  int32_t v363; // w5
  bool v364; // w6
  bool v365; // w7
  UnityEngine_WaitForEndOfFrame_o *v366; // x20
  System_String_o *v367; // x2
  System_String_o *v368; // x3
  int32_t v369; // w4
  int32_t v370; // w5
  bool v371; // w6
  bool v372; // w7
  UnityEngine_WaitForEndOfFrame_o *v373; // x20
  System_String_o *v374; // x2
  System_String_o *v375; // x3
  int32_t v376; // w4
  int32_t v377; // w5
  bool v378; // w6
  bool v379; // w7
  System_Action_object__o *v380; // x21
  System_Action_object__o *v381; // x22
  __int64 v382; // x1
  System_String_o *temporaryCachePath; // x21
  __int64 v384; // x1
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v387; // x0
  __int64 v388; // x1
  ManagerConfig_c *v389; // x0
  const MethodInfo_476E8C0 *v390; // x0
  AndroidUtil_c **v391; // x19
  ManagementManager__startCheckAll_d__39_o *v392; // x26
  const MethodInfo_476E8C0 **v393; // x27
  LocalizationManager_c **v394; // x29
  __int64 v395; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v397; // x22
  ErrorDialog_ClickDelegate_o *v398; // x23
  UnityEngine_WaitForEndOfFrame_o *v399; // x20
  System_String_o *v400; // x2
  System_String_o *v401; // x3
  int32_t v402; // w4
  int32_t v403; // w5
  bool v404; // w6
  bool v405; // w7
  __int64 v406; // x1
  ManagementManager_c *v407; // x0
  __int64 v408; // x1
  struct ManagementManager_o *v409; // x19
  Il2CppObject *v410; // x21
  System_String_o *v411; // x2
  System_String_o *v412; // x3
  int32_t v413; // w4
  int32_t v414; // w5
  bool v415; // w6
  bool v416; // w7
  const MethodInfo_476E8C0 *v417; // x0
  const MethodInfo_476E8C0 **v418; // x28
  __int64 v419; // x1
  Il2CppObject *v420; // x21
  System_String_o *v421; // x22
  System_String_o *v422; // x23
  System_String_o *v423; // x25
  System_String_o *v424; // x0
  Il2CppObject *_8__1; // x27
  System_String_o *v426; // x24
  CommonConfirmDialog_ClickDelegate_o *v427; // x26
  LocalizationManager_c **v428; // x24
  Il2CppObject *v429; // x21
  __int64 v430; // x1
  System_String_o *v431; // x21
  Il2CppObject *DispFriendCode; // x1
  System_String_o *v433; // x0
  System_String_o *FriendCodeFromOldDat; // x22
  __int64 v435; // x1
  __int64 v436; // x1
  Il2CppObject *v437; // x22
  System_String_o *v438; // x23
  System_String_o *v439; // x0
  System_String_o *v440; // x19
  Il2CppObject *v441; // x2
  System_String_o *v442; // x21
  ErrorDialog_ClickDelegate_o *v443; // x23
  ManagementManager_c *v444; // x0
  UnityEngine_Coroutine_o *v445; // x0
  System_String_o *v446; // x2
  System_String_o *v447; // x3
  int32_t v448; // w4
  int32_t v449; // w5
  bool v450; // w6
  bool v451; // w7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  System_Enum_o v453; // [xsp+48h] [xbp-78h] BYREF
  int32_t readResult_5__2; // [xsp+58h] [xbp-68h]

  v8 = this;
  if ( (byte_5937E16 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&CommonServicePluginScript_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Application_LogCallback_TypeInfo);
    sub_21FFC50(&LogoMain_TypeInfo);
    sub_21FFC50(&Method_ManagementManager_EndLogDialog__);
    sub_21FFC50(&Method_ManagementManager_EndQuitDialog__);
    sub_21FFC50(&Method_ManagementManager_EndRetryDialog__);
    sub_21FFC50(&Method_ManagementManager_HandleLog__);
    sub_21FFC50(&Method_ManagementManager_NotifyRequestPermissionsDenied__);
    sub_21FFC50(&Method_ManagementManager_NotifyRequestPermissionsGranted__);
    sub_21FFC50(&Method_ManagementManager_callbackAccountRegist__);
    sub_21FFC50(&Method_ManagementManager_callbackTopGameData__);
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_21FFC50(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&NetworkManager_ReadResult_TypeInfo);
    sub_21FFC50(&ResolutionManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&SignedData_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_ManagementManager___c__DisplayClass39_0__startCheckAll_b__0__);
    sub_21FFC50(&ManagementManager___c__DisplayClass39_0_TypeInfo);
    sub_21FFC50(&Method_ManagementManager__startCheckAll_d__39_MoveNext__);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_21FFC50(&StringLiteral_7768/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_9695/*"NOW_LOADING"*/);
    sub_21FFC50(&StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_21FFC50(&StringLiteral_6649/*"F39UThNh"*/);
    sub_21FFC50(&StringLiteral_7771/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_21FFC50(&StringLiteral_7769/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_21FFC50(&StringLiteral_7767/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_5264/*"DataServerFolderName"*/);
    sub_21FFC50(&StringLiteral_17438/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_21FFC50(&StringLiteral_9631/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9624/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_21FFC50(&StringLiteral_13082/*"SYSTEM"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_21858/*"ioqrk4Om"*/);
    sub_21FFC50(&StringLiteral_1453/*"2pC0bIYM"*/);
    sub_21FFC50(&StringLiteral_9625/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__39_o *)sub_21FFC50(&StringLiteral_9632/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_5937E16 = 1;
  }
  v9 = &AndroidUtil_TypeInfo;
  v10 = (const MethodInfo_476E8C0 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  v11 = &LocalizationManager_TypeInfo;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      isReboot = v8->fields.isReboot;
      v8->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_120;
      v14 = UnityEngine_Resources__UnloadUnusedAssets(0);
      v8->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v14, v16, v17, v18, v19, v20, v21);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
LABEL_120:
      if ( !*(&SignedData_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method);
      SignedData__RefillSigningData(3, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v140);
      LocalizationManager__Initialize(0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v141);
      SoundManager__initialize(0);
      if ( !_4__this )
        goto LABEL_416;
      v142 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v142;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v25, (int32_t)v142, v143, v144, v145, v146, v147, v148);
      v32 = 2;
      goto LABEL_415;
    case 2:
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      v110 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v8->fields.__2__current = (Il2CppObject *)v110;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v25, (int32_t)v110, v111, v112, v113, v114, v115, v116);
      v32 = 3;
      goto LABEL_415;
    case 3:
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AssetManager__Initialize((AssetManager_o *)this, 0);
      if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v124);
      ResolutionManager__Initialize(0);
      v126 = OptionManager_TypeInfo;
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v125);
      OptionManager__Initialize((const MethodInfo *)v126);
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v127);
      FSUtility__Initialize(0);
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0);
      OptionManager__AdjustScenarioSpeedSetting(v128);
      OptionManager__AdjustVolume(v129);
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v130);
      UnityEngine_Application__set_targetFrameRate(30, 0);
      UnityEngine_Input__set_multiTouchEnabled(1, 0);
      if ( v8->fields.isReboot )
        goto LABEL_116;
      v131 = (UnityEngine_Application_LogCallback_o *)sub_21FFEBC(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(
        v131,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_HandleLog__,
        0);
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v132);
      UnityEngine_Application__add_logMessageReceived(v131, 0);
      if ( v8->fields.isReboot )
      {
LABEL_116:
        v133 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v133, 0);
        v8->fields.__2__current = (Il2CppObject *)v133;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v133, v134, v135, v136, v137, v138, v139);
        v32 = 4;
        goto LABEL_415;
      }
LABEL_49:
      this = (ManagementManager__startCheckAll_d__39_o *)sub_21FFD10(string___TypeInfo, 3);
      if ( !this )
        goto LABEL_416;
      v64 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v65 = StringLiteral_1453/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1453/*"2pC0bIYM"*/,
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.isReboot, v65, v58, v59, v60, v61, v62, v63),
            ((__int64)v64->fields.__2__current & 0xFFFFFFFE) == 0)
        || (v72 = StringLiteral_6649/*"F39UThNh"*/,
            v64->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6649/*"F39UThNh"*/,
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v64->fields.__4__this, v72, v66, v67, v68, v69, v70, v71),
            LODWORD(v64->fields.__2__current) <= 2) )
      {
        sub_21FFED4(this);
      }
      v79 = StringLiteral_21858/*"ioqrk4Om"*/;
      v64->fields.__8__1 = (struct ManagementManager___c__DisplayClass39_0_o *)StringLiteral_21858/*"ioqrk4Om"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v64->fields.__8__1, v79, v73, v74, v75, v76, v77, v78);
      v87 = EncryptedPlayerPrefs_TypeInfo;
      if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v80);
        v87 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v87->static_fields;
      v11 = &LocalizationManager_TypeInfo;
      static_fields->keys = (struct System_String_array *)v64;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->keys, (int32_t)v64, v81, v82, v83, v84, v85, v86);
      if ( !v8->fields.isReboot )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)AndroidPermissionManager__EnabledRuntimePermission(0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_60;
        if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
        this = (ManagementManager__startCheckAll_d__39_o *)AndroidUtil__get_apiLevel(0);
        if ( (int)this >= 33 )
        {
          this = (ManagementManager__startCheckAll_d__39_o *)AndroidPermissionManager__CheckPermission(
                                                               (System_String_o *)StringLiteral_17438/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_416;
            _4__this->fields.isPermissionRequesting = 1;
            v380 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v380,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0);
            v381 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v381,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsDenied__,
              0);
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_17438/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v380,
              (System_Action_string__o *)v381,
              0,
              0);
LABEL_132:
            if ( _4__this->fields.isPermissionRequesting )
            {
              v149 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v149, 0);
              v8->fields.__2__current = (Il2CppObject *)v149;
              v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
              sub_21FFBF4(v25, (int32_t)v149, v150, v151, v152, v153, v154, v155);
              v32 = 5;
              goto LABEL_415;
            }
          }
        }
        else
        {
LABEL_60:
          if ( !_4__this )
            goto LABEL_416;
          _4__this->fields.isPermissionGranted = 1;
        }
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0);
          v373 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v373, 0);
          v8->fields.__2__current = (Il2CppObject *)v373;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)v373, v374, v375, v376, v377, v378, v379);
          v32 = 6;
          goto LABEL_415;
        }
LABEL_416:
        sub_21FFECC(this, method);
      }
LABEL_139:
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
      v8->fields._readResult_5__2 = (int)this;
      if ( !_4__this )
        goto LABEL_416;
      this = (ManagementManager__startCheckAll_d__39_o *)_4__this->fields.debugInfoRootObject;
      if ( !this )
        goto LABEL_416;
      this = (ManagementManager__startCheckAll_d__39_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_416;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      ManagementManager__BuildInfoOff(_4__this, v157);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v158);
      TerminalPramsManager__Load_SaveData(0);
      while ( 1 )
      {
        if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
        temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0);
        if ( !*(&CommonServicePluginScript_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v382);
        FreeSize = CommonServicePluginScript__GetFreeSize(temporaryCachePath, 0);
        if ( !*(&(*v9)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v9, v384);
        DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
        v387 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0);
        if ( FreeSize <= v387 )
          FreeSize = v387;
        if ( (FreeSize & 0x8000000000000000LL) == 0 )
        {
          v389 = ManagerConfig_TypeInfo;
          if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v388);
            v389 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v389->static_fields->LIMIT_FREE_SIZE )
            break;
        }
        v390 = *v10;
        v391 = v9;
        v392 = v8;
        v393 = v10;
        _4__this->fields.isErrorDialog = 1;
        v394 = v11;
        Instance = SingletonMonoBehaviour_object___get_Instance(v390);
        if ( !*(&(*v11)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v11, v395);
        v397 = LocalizationManager__Get((System_String_o *)StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/, 0);
        v398 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v398, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_416;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v397, v398, 0, 0);
        v10 = v393;
        v11 = v394;
        v8 = v392;
        v9 = v391;
LABEL_372:
        if ( _4__this->fields.isErrorDialog )
        {
          v399 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v399, 0);
          v8->fields.__2__current = (Il2CppObject *)v399;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)v399, v400, v401, v402, v403, v404, v405);
          v32 = 7;
          goto LABEL_415;
        }
      }
      if ( v8->fields._readResult_5__2 < 2u )
      {
        v8->fields._isCacheCheck_5__3 = 0;
        goto LABEL_376;
      }
      v428 = v11;
      v429 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !*(&(*v11)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v11, v430);
        v431 = LocalizationManager__Get((System_String_o *)StringLiteral_9624/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        DispFriendCode = (Il2CppObject *)NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
        v433 = v431;
        goto LABEL_399;
      }
      if ( !*(&(*v9)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v9, v430);
      FriendCodeFromOldDat = AndroidUtil__GetFriendCodeFromOldDat(0);
      if ( !System_String__IsNullOrEmpty(FriendCodeFromOldDat, 0) )
      {
        if ( !*(&(*v428)->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(*v428, v435);
        v433 = LocalizationManager__Get((System_String_o *)StringLiteral_9624/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
        DispFriendCode = (Il2CppObject *)FriendCodeFromOldDat;
LABEL_399:
        v429 = (Il2CppObject *)System_String__Format(v433, DispFriendCode, 0);
      }
      v437 = SingletonMonoBehaviour_object___get_Instance(*v10);
      if ( !*(&(*v428)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v428, v436);
      v438 = LocalizationManager__Get((System_String_o *)StringLiteral_9625/*"NETWORK_ERROR_READ_AUTH"*/, 0);
      readResult_5__2 = v8->fields._readResult_5__2;
      v453.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v453.monitor = (void *)-1LL;
      v439 = System_Enum__ToString(&v453, 0);
      v440 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v439 )
        v441 = (Il2CppObject *)v439;
      else
        v441 = (Il2CppObject *)StringLiteral_1/*""*/;
      v442 = System_String__Format_75484576(v438, v429, v441, 0);
      v443 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v443, (Il2CppObject *)_4__this, Method_ManagementManager_EndQuitDialog__, 0);
      if ( !v437 )
        goto LABEL_416;
      CommonUI__OpenErrorDialog((CommonUI_o *)v437, v440, v442, v443, 0, 0);
      return 0;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_49;
    case 5:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_132;
      goto LABEL_416;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_139;
    case 7:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_372;
    case 8:
      v8->fields.__1__state = -1;
      goto LABEL_159;
    case 9:
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_5937F04 )
      {
        sub_21FFC50(&DataManager_TypeInfo);
        byte_5937F04 = 1;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (ManagementManager__startCheckAll_d__39_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v8->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( !*(&this[2].fields.__1__state + 1) )
          j_il2cpp_runtime_class_init_0(this, method);
        DataManager__ClearCacheAll(0);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields.isReadGameData = 0;
      v98 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v98,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v99);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v100);
      this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager__getRequest_object_(
                                                           v98,
                                                           (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      BYTE1(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v101 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v101, 0);
      v8->fields._waitForServerTime_5__7 = v101;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._waitForServerTime_5__7,
        (int32_t)v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      goto LABEL_157;
    case 0xA:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
      {
LABEL_157:
        waitForServerTime_5__7 = (Il2CppObject *)v8->fields._waitForServerTime_5__7;
        v8->fields.__2__current = waitForServerTime_5__7;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)waitForServerTime_5__7, v2, v3, v4, v5, v6, v7);
        v32 = 10;
        goto LABEL_415;
      }
      _4__this->fields.isReadGameData = 0;
      v159 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v159,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v160);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v161);
      this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager__getRequest_object_(
                                                           v159,
                                                           (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v162 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v162, 0);
      v8->fields._wait_5__8 = v162;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._wait_5__8,
        (int32_t)v162,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168);
LABEL_156:
      wait_5__8 = (Il2CppObject *)v8->fields._wait_5__8;
      v8->fields.__2__current = wait_5__8;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v25, (int32_t)wait_5__8, v2, v3, v4, v5, v6, v7);
      v32 = 11;
      goto LABEL_415;
    case 0xB:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_156;
      v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v49 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v47);
      this = (ManagementManager__startCheckAll_d__39_o *)sub_2E1F8CC(0, v49);
      if ( !v48 )
        goto LABEL_416;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v48,
        (System_String_o *)StringLiteral_5264/*"DataServerFolderName"*/,
        (System_String_o *)this,
        0);
      if ( v8->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0);
          started = UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                      (UnityEngine_MonoBehaviour_o *)_4__this,
                      MasterData,
                      0);
          v8->fields.__2__current = (Il2CppObject *)started;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)started, v52, v53, v54, v55, v56, v57);
          v32 = 12;
          goto LABEL_415;
        }
      }
      else
      {
LABEL_68:
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__39_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v8->fields.isReboot,
                                                               0);
          if ( _4__this )
          {
            v90 = UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                    (UnityEngine_MonoBehaviour_o *)_4__this,
                    (System_Collections_IEnumerator_o *)this,
                    0);
            v8->fields.__2__current = (Il2CppObject *)v90;
            v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
            sub_21FFBF4(v25, (int32_t)v90, v91, v92, v93, v94, v95, v96);
            v32 = 14;
            goto LABEL_415;
          }
        }
      }
      goto LABEL_416;
    case 0xC:
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_5937F05 )
      {
        sub_21FFC50(&DataManager_TypeInfo);
        byte_5937F05 = 1;
      }
      v89 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        v89 = DataManager_TypeInfo;
      }
      if ( v89->static_fields->readMasterDataResult == 1 )
        goto LABEL_68;
      if ( !*(&v89->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v89, method);
      DataManager__ClearCacheAll(0);
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      v288 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v288, 0);
      v8->fields.__2__current = (Il2CppObject *)v288;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v25, (int32_t)v288, v289, v290, v291, v292, v293, v294);
      v32 = 13;
      goto LABEL_415;
    case 0xD:
      v8->fields.__1__state = -1;
      goto LABEL_376;
    case 0xE:
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_5937F06 )
      {
        sub_21FFC50(&DataManager_TypeInfo);
        byte_5937F06 = 1;
      }
      v36 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        v36 = DataManager_TypeInfo;
      }
      v37 = v36->static_fields;
      v38 = ServantCommentManager_TypeInfo;
      updateMasterDataResult = v37->updateMasterDataResult;
      LODWORD(v37) = *(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1);
      v8->fields._updateMasterResult_5__9 = updateMasterDataResult;
      if ( !(_DWORD)v37 )
        j_il2cpp_runtime_class_init_0(v38, method);
      ServantCommentManager__checkUIChange(1, 0);
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v40);
      SoundManager__InitializePreDelaySetting(0);
      updateMasterResult_5__9 = v8->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_48288448((NetworkManager_o *)this, method);
          v340 = ManagementManager_TypeInfo;
          if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v339);
          ManagementManager__RebootCacheClear((const MethodInfo *)v340);
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__39_o *)DataManager__updateWebViewData((DataManager_o *)this, 0);
            if ( _4__this )
            {
              v341 = UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0);
              v8->fields.__2__current = (Il2CppObject *)v341;
              v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
              sub_21FFBF4(v25, (int32_t)v341, v342, v343, v344, v345, v346, v347);
              v32 = 17;
              goto LABEL_415;
            }
          }
        }
        goto LABEL_416;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_416;
        v42 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
        _4__this->fields.isErrorDialog = 1;
        v44 = SingletonMonoBehaviour_object___get_Instance(v42);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9631/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0);
        v46 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v46, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0);
        if ( !v44 )
          goto LABEL_416;
        *(_QWORD *)&effectDistance.fields.hasValue = 0;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v44,
          (System_String_o *)StringLiteral_1/*""*/,
          v45,
          v46,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0);
        v10 = (const MethodInfo_476E8C0 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
        v11 = &LocalizationManager_TypeInfo;
LABEL_100:
        if ( _4__this->fields.isErrorDialog )
        {
          v117 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v117, 0);
          v8->fields.__2__current = (Il2CppObject *)v117;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)v117, v118, v119, v120, v121, v122, v123);
          v32 = 15;
          goto LABEL_415;
        }
        if ( v8->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_344:
          v8->fields._waitForServerTime_5__7 = 0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v8->fields._waitForServerTime_5__7,
            0,
            v2,
            v3,
            v4,
            v5,
            v6,
            v7);
          v8->fields._wait_5__8 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._wait_5__8, 0, v360, v361, v362, v363, v364, v365);
LABEL_376:
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          DataManager__Initialize((DataManager_o *)this, 0);
          if ( !v8->fields.isReboot && !v8->fields._isCacheCheck_5__3 )
          {
            v8->fields._isCacheCheck_5__3 = 1;
            v407 = ManagementManager_TypeInfo;
            if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v406);
              v407 = ManagementManager_TypeInfo;
            }
            if ( UnityEngine_PlayerPrefs__HasKey(v407->static_fields->RebootCacheClearKey, 0) )
            {
              v409 = _4__this;
              v410 = (Il2CppObject *)sub_21FFEBC(ManagementManager___c__DisplayClass39_0_TypeInfo);
              System_Object___ctor(v410, 0);
              v8->fields.__8__1 = (struct ManagementManager___c__DisplayClass39_0_o *)v410;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1,
                (int32_t)v410,
                v411,
                v412,
                v413,
                v414,
                v415,
                v416);
              if ( !v8->fields.__8__1 )
                goto LABEL_416;
              v417 = *v10;
              v418 = v10;
              v8->fields.__8__1->fields = 0;
              v420 = SingletonMonoBehaviour_object___get_Instance(v417);
              if ( !*(&(*v11)->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(*v11, v419);
              v421 = LocalizationManager__Get((System_String_o *)StringLiteral_7771/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0);
              v422 = LocalizationManager__Get((System_String_o *)StringLiteral_7769/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0);
              v423 = LocalizationManager__Get((System_String_o *)StringLiteral_7768/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0);
              v424 = LocalizationManager__Get((System_String_o *)StringLiteral_7767/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0);
              _8__1 = (Il2CppObject *)v8->fields.__8__1;
              v426 = v424;
              v427 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
              CommonConfirmDialog_ClickDelegate___ctor(
                v427,
                _8__1,
                Method_ManagementManager___c__DisplayClass39_0__startCheckAll_b__0__,
                0);
              if ( !v420 )
                goto LABEL_416;
              CommonUI__OpenConfirmDecideDlg(
                (CommonUI_o *)v420,
                v421,
                v422,
                v423,
                v426,
                v427,
                0,
                0.0,
                15.0,
                0,
                0,
                0,
                240,
                0,
                1,
                0,
                0,
                0);
              v10 = v418;
              _4__this = v409;
LABEL_159:
              v171 = v8->fields.__8__1;
              if ( !v171 )
                goto LABEL_416;
              if ( !v171->fields.confirmed )
              {
                v325 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v325, 0);
                v8->fields.__2__current = (Il2CppObject *)v325;
                v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
                sub_21FFBF4(v25, (int32_t)v325, v326, v327, v328, v329, v330, v331);
                v32 = 8;
                goto LABEL_415;
              }
              if ( v171->fields.isDecide )
              {
                if ( !_4__this )
                  goto LABEL_416;
                ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
              }
              v8->fields.__8__1 = 0;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, 0, v2, v3, v4, v5, v6, v7);
            }
            else
            {
              v444 = ManagementManager_TypeInfo;
              if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v408);
                v444 = ManagementManager_TypeInfo;
              }
              UnityEngine_PlayerPrefs__SetInt(v444->static_fields->RebootCacheClearKey, 1, 0);
              UnityEngine_PlayerPrefs__Save(0);
            }
          }
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance(*v10);
          if ( !this )
            goto LABEL_416;
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          this = (ManagementManager__startCheckAll_d__39_o *)DataManager__readMasterVersion((DataManager_o *)this, 0);
          if ( !_4__this )
            goto LABEL_416;
          v445 = UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   (System_Collections_IEnumerator_o *)this,
                   0);
          v8->fields.__2__current = (Il2CppObject *)v445;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)v445, v446, v447, v448, v449, v450, v451);
          v32 = 9;
          goto LABEL_415;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_416;
      }
      v348 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      _4__this->fields.isErrorDialog = 1;
      v350 = SingletonMonoBehaviour_object___get_Instance(v348);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v349);
      v351 = LocalizationManager__Get((System_String_o *)StringLiteral_9632/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
      v352 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v352, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0);
      if ( !v350 )
        goto LABEL_416;
      CommonUI__OpenRetryDialog((CommonUI_o *)v350, (System_String_o *)StringLiteral_1/*""*/, v351, v352, 0, 0);
      v10 = (const MethodInfo_476E8C0 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      v11 = &LocalizationManager_TypeInfo;
LABEL_342:
      if ( _4__this->fields.isErrorDialog )
      {
        v353 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v353, 0);
        v8->fields.__2__current = (Il2CppObject *)v353;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v353, v354, v355, v356, v357, v358, v359);
        v32 = 16;
        goto LABEL_415;
      }
      goto LABEL_344;
    case 0xF:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_100;
      goto LABEL_416;
    case 0x10:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_342;
    case 0x11:
      v8->fields.__2__current = 0;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      v25[-1].fields._BoardType_k__BackingField = -1;
      sub_21FFBF4(v25, 0, v2, v3, v4, v5, v6, v7);
      v32 = 18;
      goto LABEL_415;
    case 0x12:
      v8->fields.__1__state = -1;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( AssetManager__getDownloadSize(0) < 1 )
        goto LABEL_205;
      goto LABEL_184;
    case 0x13:
      v8->fields.__1__state = -1;
LABEL_184:
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( AssetManager__getDownloadSize(0) >= 1 )
      {
        v179 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v179, 0);
        v8->fields.__2__current = (Il2CppObject *)v179;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v179, v180, v181, v182, v183, v184, v185);
        v32 = 19;
        goto LABEL_415;
      }
LABEL_205:
      v8->fields._isLoad_5__4 = 0;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( !AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_307:
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v318 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v318, 0);
          v8->fields.__2__current = (Il2CppObject *)v318;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)v318, v319, v320, v321, v322, v323, v324);
          v32 = 20;
          goto LABEL_415;
        }
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_416;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_13082/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v302);
        if ( AssetManager__getDownloadSize(0) >= 1 )
        {
          v303 = ManagerConfig_TypeInfo;
          if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
            v303 = ManagerConfig_TypeInfo;
          }
          if ( v303->static_fields->UseStandaloneAsset )
          {
            v8->fields._isLoad_5__4 = 1;
            if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
            SoundManager__playBgm((System_String_o *)StringLiteral_9695/*"NOW_LOADING"*/, 0);
            this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_416;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_321:
            v304 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v304, 0);
            v8->fields.__2__current = (Il2CppObject *)v304;
            v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
            sub_21FFBF4(v25, (int32_t)v304, v305, v306, v307, v308, v309, v310);
            v32 = 21;
            goto LABEL_415;
          }
LABEL_170:
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
          if ( AssetManager__getDownloadSize(0) >= 1 )
          {
            v172 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v172, 0);
            v8->fields.__2__current = (Il2CppObject *)v172;
            v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
            sub_21FFBF4(v25, (int32_t)v172, v173, v174, v175, v176, v177, v178);
            v32 = 22;
            goto LABEL_415;
          }
        }
LABEL_322:
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
        AssetManager__SetOnlineStatus(0);
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_48288448((NetworkManager_o *)this, method);
          v311 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v311, 0.1, 0);
          v8->fields.__2__current = (Il2CppObject *)v311;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)v311, v312, v313, v314, v315, v316, v317);
          v32 = 23;
          goto LABEL_415;
        }
        goto LABEL_416;
      }
LABEL_208:
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_213:
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v281 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v281, 0);
              v8->fields.__2__current = (Il2CppObject *)v281;
              v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
              sub_21FFBF4(v25, (int32_t)v281, v282, v283, v284, v285, v286, v287);
              v32 = 24;
              goto LABEL_415;
            }
            this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v201 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_13082/*"SYSTEM"*/,
                       _4__this->fields.downloadParallelMax,
                       0);
              v202 = UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v201,
                       0);
              v8->fields.__2__current = (Il2CppObject *)v202;
              v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
              sub_21FFBF4(v25, (int32_t)v202, v203, v204, v205, v206, v207, v208);
              v32 = 25;
              goto LABEL_415;
            }
          }
        }
        goto LABEL_416;
      }
LABEL_218:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
      LocalizationManager__LoadAssetData(0);
LABEL_221:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      if ( !byte_5937F08 )
      {
        sub_21FFC50(&LocalizationManager_TypeInfo);
        byte_5937F08 = 1;
      }
      v209 = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        v209 = LocalizationManager_TypeInfo;
      }
      if ( v209->static_fields->isBusySetAssetData )
      {
        v210 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v210, 0);
        v8->fields.__2__current = (Il2CppObject *)v210;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v210, v211, v212, v213, v214, v215, v216);
        v32 = 28;
        goto LABEL_415;
      }
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
      FSUtility__LoadAssetData(0);
LABEL_232:
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
      if ( !byte_5937F09 )
      {
        sub_21FFC50(&FSUtility_TypeInfo);
        byte_5937F09 = 1;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)FSUtility_TypeInfo;
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
        this = (ManagementManager__startCheckAll_d__39_o *)FSUtility_TypeInfo;
      }
      if ( this[1].fields._waitForServerTime_5__7->klass )
      {
        v217 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v217, 0);
        v8->fields.__2__current = (Il2CppObject *)v217;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v217, v218, v219, v220, v221, v222, v223);
        v32 = 29;
        goto LABEL_415;
      }
      if ( v8->fields._readResult_5__2 == 1 )
      {
        if ( !_4__this )
          goto LABEL_416;
        _4__this->fields.isReadAuth = 0;
        v224 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v224,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          v225);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v226);
        this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager__getRequest_object_(
                                                             v224,
                                                             (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_416;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0);
LABEL_246:
        v227 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v227, 0);
        v8->fields.__2__current = (Il2CppObject *)v227;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v227, v228, v229, v230, v231, v232, v233);
        v32 = 30;
        goto LABEL_415;
      }
LABEL_247:
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method);
      ImageLimitCount__initializeAssetStorage(0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v234);
      AtlasManager__Initialize(0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v235);
      this = (ManagementManager__startCheckAll_d__39_o *)SoundManager__get_OverwriteAssetSoundName(0);
      if ( !this )
        goto LABEL_416;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, 0);
LABEL_255:
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
      if ( AtlasManager__IsBusyInitialize(0) )
      {
        v236 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v236, 0);
        v8->fields.__2__current = (Il2CppObject *)v236;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v236, v237, v238, v239, v240, v241, v242);
        v32 = 31;
        goto LABEL_415;
      }
      v8->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_260:
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      this = (ManagementManager__startCheckAll_d__39_o *)SoundManager__get_OverwriteAssetSoundName(0);
      if ( !this )
        goto LABEL_416;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v8->fields._overrideAssetSoundNameWaitCount_5__5;
        v8->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v244 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v244, 0);
          v8->fields.__2__current = (Il2CppObject *)v244;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)v244, v245, v246, v247, v248, v249, v250);
          v32 = 32;
          goto LABEL_415;
        }
      }
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0);
LABEL_268:
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( LOBYTE(this[9].fields.__2__current) )
      {
        v251 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v251, 0);
        v8->fields.__2__current = (Il2CppObject *)v251;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v251, v252, v253, v254, v255, v256, v257);
        v32 = 33;
        goto LABEL_415;
      }
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      SoundManager__initializeAssetStorage(0);
LABEL_274:
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0) )
      {
        v258 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v258, 0);
        v8->fields.__2__current = (Il2CppObject *)v258;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v258, v259, v260, v261, v262, v263, v264);
        v32 = 34;
        goto LABEL_415;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      ScriptManager__Initialize((ScriptManager_o *)this, 0);
LABEL_279:
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( BYTE1(this[6].monitor) )
      {
        v265 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v265, 0);
        v8->fields.__2__current = (Il2CppObject *)v265;
        v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v25, (int32_t)v265, v266, v267, v268, v269, v270, v271);
        v32 = 35;
        goto LABEL_415;
      }
      if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
      if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0) )
      {
        if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v272);
        PurchaseBehaviour__Ready(0);
      }
      if ( !v8->fields._isLoad_5__4 )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__39_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_416;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_349:
          v366 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v366, 0);
          v8->fields.__2__current = (Il2CppObject *)v366;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, (int32_t)v366, v367, v368, v369, v370, v371, v372);
          v32 = 37;
          goto LABEL_415;
        }
LABEL_13:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff(_4__this, method);
          v8->fields.__2__current = 0;
          v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v25, 0, v26, v27, v28, v29, v30, v31);
          v32 = 38;
          goto LABEL_415;
        }
        goto LABEL_416;
      }
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v272);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9695/*"NOW_LOADING"*/, 0) )
      {
LABEL_11:
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_416;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
        goto LABEL_13;
      }
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v273);
      SoundManager__fadeoutBgm(1.0, 0);
      v274 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v274, 1.0, 0);
      v8->fields.__2__current = (Il2CppObject *)v274;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v25, (int32_t)v274, v275, v276, v277, v278, v279, v280);
      v32 = 36;
LABEL_415:
      v25[-1].fields._BoardType_k__BackingField = v32;
      return 1;
    case 0x14:
      v8->fields.__1__state = -1;
      goto LABEL_307;
    case 0x15:
      v156 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance(v156);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_322;
      goto LABEL_321;
    case 0x16:
      v8->fields.__1__state = -1;
      goto LABEL_170;
    case 0x17:
      v8->fields.__1__state = -1;
      goto LABEL_208;
    case 0x18:
      v8->fields.__1__state = -1;
      goto LABEL_213;
    case 0x19:
      v8->fields.__1__state = -1;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( AssetManager__getDownloadSize(0) < 1 )
        goto LABEL_218;
      v8->fields._isLoad_5__4 = 1;
      if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v108 = j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v35);
      if ( (sub_2E1F91C(0, v108) & 1) == 0 )
      {
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v109);
        SoundManager__playBgm((System_String_o *)StringLiteral_9695/*"NOW_LOADING"*/, 0);
      }
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_204:
      v194 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v194, 0);
      v8->fields.__2__current = (Il2CppObject *)v194;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v25, (int32_t)v194, v195, v196, v197, v198, v199, v200);
      v32 = 26;
      goto LABEL_415;
    case 0x1A:
      v193 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance(v193);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_204;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_302:
      v295 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v295, 0);
      v8->fields.__2__current = (Il2CppObject *)v295;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v25, (int32_t)v295, v296, v297, v298, v299, v300, v301);
      v32 = 27;
      goto LABEL_415;
    case 0x1B:
      v33 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance(v33);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_302;
      v34 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_ManagementManager__startCheckAll_d__39_MoveNext__);
      OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0, 0);
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      goto LABEL_218;
    case 0x1C:
      v8->fields.__1__state = -1;
      goto LABEL_221;
    case 0x1D:
      v8->fields.__1__state = -1;
      goto LABEL_232;
    case 0x1E:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_246;
      goto LABEL_247;
    case 0x1F:
      v8->fields.__1__state = -1;
      goto LABEL_255;
    case 0x20:
      v8->fields.__1__state = -1;
      goto LABEL_260;
    case 0x21:
      v8->fields.__1__state = -1;
      goto LABEL_268;
    case 0x22:
      v8->fields.__1__state = -1;
      goto LABEL_274;
    case 0x23:
      v8->fields.__1__state = -1;
      goto LABEL_279;
    case 0x24:
      v8->fields.__1__state = -1;
      goto LABEL_11;
    case 0x25:
      v23 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      v8->fields.__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance(v23);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_349;
      v24 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_ManagementManager__startCheckAll_d__39_MoveNext__);
      OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
      goto LABEL_11;
    case 0x26:
      v8->fields.__1__state = -1;
      v186 = ManagementManager_TypeInfo;
      if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
        v186 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v186->static_fields->PushStateSendedKey,
                                                           0,
                                                           0);
      if ( !(_DWORD)this )
      {
        v188 = OptionManager_TypeInfo;
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v188);
        OptionManager__SetNotiffication(Notiffication, 1, v190);
        v192 = ManagementManager_TypeInfo;
        if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v191);
          v192 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v192->static_fields->PushStateSendedKey, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 0, v187);
      if ( v8->fields.isLogin )
        goto LABEL_201;
      v332 = ManagementManager__CheckMovieResume(_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v332;
      v25 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v25, (int32_t)v332, v333, v334, v335, v336, v337, v338);
      v32 = 39;
      goto LABEL_415;
    case 0x27:
      v8->fields.__1__state = -1;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_59354AD )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59354AD = 1;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        this = (ManagementManager__startCheckAll_d__39_o *)TerminalPramsManager_TypeInfo;
      }
      if ( LOBYTE(this[1].fields._waitForServerTime_5__7[40].monitor) )
      {
        if ( !_4__this )
          goto LABEL_416;
LABEL_201:
        ManagementManager__requestTerminalLogin(_4__this, method);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 9, 1, 0, 0);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *ManagementManager__startCheckAll_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__startCheckAll_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__startCheckAll_d__39__System_Collections_IEnumerator_Reset(
        ManagementManager__startCheckAll_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ManagementManager__startCheckAll_d__39_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ManagementManager__startCheckAll_d__39__System_Collections_IEnumerator_get_Current(
        ManagementManager__startCheckAll_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__startCheckAll_d__39__System_IDisposable_Dispose(
        ManagementManager__startCheckAll_d__39_o *this,
        const MethodInfo *method)
{
  ;
}