void ManagementManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ManagementManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ManagementManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct ManagementManager_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct ManagementManager_StaticFields *v31; // x8

  if ( (byte_4CEDE49 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8076/*"IsNotificationStatusSend"*/);
    sub_1C7BAE8(&StringLiteral_8089/*"IsReBootCacheClearKey"*/);
    sub_1C7BAE8(&StringLiteral_21236/*"ja-JP"*/);
    sub_1C7BAE8(&StringLiteral_25267/*"yyyy年MM月dd日HH時mm分"*/);
    byte_4CEDE49 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8076/*"IsNotificationStatusSend"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8076/*"IsNotificationStatusSend"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_8089/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8089/*"IsReBootCacheClearKey"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->RebootCacheClearKey, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_25267/*"yyyy年MM月dd日HH時mm分"*/;
  v16 = ManagementManager_TypeInfo->static_fields;
  v16->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_25267/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->DATE_TIME_DISP_FORMAT, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_21236/*"ja-JP"*/;
  v24 = ManagementManager_TypeInfo->static_fields;
  v24->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_21236/*"ja-JP"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v24->DEFAULT_CULTURE_NAME, v23, v25, v26, v27, v28, v29, v30);
  v31 = ManagementManager_TypeInfo->static_fields;
  v31->OVERRIDE_MOVIE_DEPTH = 10;
  v31->isDuringStartup = 1;
}


void ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CEDE48 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_4CEDE48 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ManagementManager_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  float v22; // s0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  Il2CppObject *v42; // x19
  Il2CppObject *v43; // x19
  float v44; // [xsp+Ch] [xbp-34h] BYREF

  v44 = ratio;
  if ( (byte_4CEDE2E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_779/*"):"*/);
    sub_1C7BAE8(&StringLiteral_6769/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_1C7BAE8(&StringLiteral_742/*"(ratio: "*/);
    byte_4CEDE2E = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6769/*"Firebase.FirebaseApp"*/, 0) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1C7BB90(string___TypeInfo, 5);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.checkMoviePlayData.fields.checkMovieState = errorText;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.checkMoviePlayData,
        (int32_t)errorText,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v21 = StringLiteral_742/*"(ratio: "*/;
      *(_QWORD *)&v14->fields.checkMoviePlayData.fields.phase = StringLiteral_742/*"(ratio: "*/;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v14->fields.checkMoviePlayData.fields.phase,
        v21,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      this = (ManagementManager_o *)System_Single__ToString(v22, (const MethodInfo *)&v44);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (*(_QWORD *)&v14->fields.isInitializingData = this,
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&v14->fields.isInitializingData,
              (int32_t)this,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v35 = StringLiteral_779/*"):"*/,
            v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_779/*"):"*/,
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&v14->fields.AvalonSceneManager,
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
        sub_1C7BD48(this);
      }
      v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)exceptionMessage;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v14->fields.debugInfoRootObject,
        (int32_t)exceptionMessage,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v42 = (Il2CppObject *)System_String__Concat_64217444((System_String_array *)v14, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v42, 0);
      return;
    }
LABEL_19:
    sub_1C7BD40(this, errorText);
  }
  v43 = (Il2CppObject *)System_String__Concat_64176912(errorText, exceptionMessage, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v43, 0);
}


void ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CEDE2A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_4CEDE2A = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_3A8C914 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
  }
}


void ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4CEDE43 & 1) == 0 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEDE43 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0);
  ManagementManager__BuildInfoOff(this, v4);
}


void ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4CEDE42 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDE42 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0) )
  {
    sub_1C7BD40(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_Collections_IEnumerator_o *ManagementManager__CheckMovieResume(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEDE45 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager__CheckMovieResume_d__68_TypeInfo);
    byte_4CEDE45 = 1;
  }
  v3 = sub_1C7BD34(ManagementManager__CheckMovieResume_d__68_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *ManagementManager__CheckPlayMovieFromResumeInfo(
        ManagementManager_o *this,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CEDE46 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager__CheckPlayMovieFromResumeInfo_d__69_TypeInfo);
    byte_4CEDE46 = 1;
  }
  v5 = sub_1C7BD34(ManagementManager__CheckPlayMovieFromResumeInfo_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void ManagementManager__CompletionStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4CEDE28 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    byte_4CEDE28 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  v1->static_fields->isDuringStartup = 0;
}


void ManagementManager__EndDifferentCreateUserServerDialog(
        ManagementManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEDE38 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEDE38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0, 0);
}


void ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4CEDE37 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    byte_4CEDE37 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71663312(0);
}


void ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4CEDE36 & 1) != 0 )
  {
    if ( isDecide )
    {
LABEL_3:
      this->fields.isErrorDialog = 0;
      return;
    }
  }
  else
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    byte_4CEDE36 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71663312(0);
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

  if ( (byte_4CEDE2F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C7BAE8(&StringLiteral_6194/*"ErrorLog: "*/);
    sub_1C7BAE8(&StringLiteral_55/*"\n StackTrace: "*/);
    byte_4CEDE2F = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v9 = System_String__Concat_64217180(
           (System_String_o *)StringLiteral_6194/*"ErrorLog: "*/,
           condition,
           (System_String_o *)StringLiteral_55/*"\n StackTrace: "*/,
           stackTrace,
           0);
    if ( !Instance )
      sub_1C7BD40(v9, v10);
    CrashReporter__SendErrorLogReport((CrashReporter_o *)Instance, v9, 0);
  }
}


System_Collections_IEnumerator_o *ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEDE31 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager__InitializeAdManagerAndFirebase_d__40_TypeInfo);
    byte_4CEDE31 = 1;
  }
  v3 = sub_1C7BD34(ManagementManager__InitializeAdManagerAndFirebase_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4CEDE3F & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    byte_4CEDE3F = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4CED618 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    byte_4CED618 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  return !v2->static_fields->isDuringStartup;
}


bool ManagementManager__IsLoading(ManagementManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CEDE40 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4CEDE40 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__CommunicationIsBusy((const MethodInfo *)v2) )
    return 1;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__LoadIsBusy(0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0);
}


bool ManagementManager__IsResumeFgo20251220WarIdLastQuest(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  TerminalPramsManager_c *v6; // x0
  int32_t gender; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t phase[2]; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4CEDE47 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEDE47 = 1;
  }
  *(_QWORD *)phase = 0;
  entity = 0;
  gender = 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetMovieResumeInfo(&phase[1], phase, &gender, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarMaster___);
    v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v4 )
      goto LABEL_23;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      v4,
                                      &entity,
                                      BalanceConfig_TypeInfo->static_fields->Fgo20251220WarId,
                                      (const MethodInfo_342E348 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return HIDWORD(entity[6].klass) == phase[1];
LABEL_23:
      sub_1C7BD40(Master_object, v3);
    }
    return 0;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CEB5E7 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEB5E7 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    return v6->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField;
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
  ManagementManager_c *v1; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4CEDE44 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    byte_4CEDE44 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  DEFAULT_CULTURE_NAME = v1->static_fields->DEFAULT_CULTURE_NAME;
  if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
  SpecificCulture = System_Globalization_CultureInfo__CreateSpecificCulture(DEFAULT_CULTURE_NAME, 0);
  System_Globalization_CultureInfo__set_CurrentCulture(SpecificCulture, 0);
}


void ManagementManager__RebootCacheClear(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0
  ManagementManager_c *v2; // x0

  if ( (byte_4CEDE29 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    byte_4CEDE29 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v1->static_fields->RebootCacheClearKey, 0) )
  {
    v2 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v2 = ManagementManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->RebootCacheClearKey, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


System_Collections_IEnumerator_o *ManagementManager__SetupFirebaseAppCheck(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CEDE32 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager__SetupFirebaseAppCheck_d__41_TypeInfo);
    byte_4CEDE32 = 1;
  }
  v2 = sub_1C7BD34(ManagementManager__SetupFirebaseAppCheck_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CEDE33 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager__SetupFirebaseCrashlytics_d__42_TypeInfo);
    byte_4CEDE33 = 1;
  }
  v2 = sub_1C7BD34(ManagementManager__SetupFirebaseCrashlytics_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void ManagementManager__Start(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppType *v4; // x21
  System_RuntimeTypeHandle_o v5; // x0
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4CEDE2B & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Type_TypeInfo);
    sub_1C7BAE8(&UnityGamingServicesBehaviour_var);
    byte_4CEDE2B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(30, 0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__TransitionSaveData(0);
  UnityEngine_Screen__set_autorotateToLandscapeLeft(1, 0);
  UnityEngine_Screen__set_autorotateToLandscapeRight(1, 0);
  UnityEngine_Screen__set_autorotateToPortrait(0, 0);
  UnityEngine_Screen__set_autorotateToPortraitUpsideDown(0, 0);
  UnityEngine_Screen__set_orientation(5, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = UnityGamingServicesBehaviour_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (intptr_t)v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  if ( !gameObject )
    sub_1C7BD40(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  ManagementManager__createMovieObj(this, v7);
  v9 = ManagementManager__startCheckAll(this, 0, 0, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4CEDE41 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    byte_4CEDE41 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_71663312(0);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CEDE3E & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEDE3E = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _40989036; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4CEDE3D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CEDE3D = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    goto LABEL_9;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40989036 = TutorialFlag__Get_40989036(102, 0);
  if ( _40989036 )
  {
LABEL_9:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v9);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C7BD40(0, v11);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_40989036, v6, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CEDE3B & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEDE3B = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v6);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, this->fields.scenetype, 0, 0, 0);
}


void ManagementManager__callbackTopLogin(ManagementManager_o *this, System_String_o *result, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  System_String_o *v5; // x1
  const MethodInfo *v6; // x2
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_4CEDE3A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ManagementManager_callbackTopHome__);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CEDE3A = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    goto LABEL_9;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40989036(102, 0) )
  {
LABEL_9:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C7BD40(0, v10);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  AvalonVideoPlayer_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_4CEDE2C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4618/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_1C7BAE8(&StringLiteral_9207/*"MovieRoot"*/);
    byte_4CEDE2C = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0, 0) )
  {
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4618/*"CommonUI/UI Root/SystemUICamera"*/, 0);
    v6 = (UnityEngine_GameObject_o *)sub_1C7BD34(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9207/*"MovieRoot"*/, 0);
    if ( !v6
      || (v9 = UnityEngine_GameObject__AddComponent_object_(
                 v6,
                 (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields._videoPlayer_k__BackingField,
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
                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v16) )
    {
      sub_1C7BD40(Component_object, v8);
    }
    AvalonVideoPlayer__initialize(v16, (UnityEngine_Camera_o *)Component_object, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_36529116(v6, gameObject, 0);
  }
}


int32_t ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CEDE26 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CEDE26 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return HIDWORD(Instance[5].monitor);
}


bool ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4CEDE27 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    byte_4CEDE27 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  return v1->static_fields->isDuringStartup;
}


AvalonVideoPlayer_o *ManagementManager__get_videoPlayer(ManagementManager_o *this, const MethodInfo *method)
{
  return this->fields._videoPlayer_k__BackingField;
}


void ManagementManager__reboot(ManagementManager_o *this, bool isLogin, bool isFadeInit, const MethodInfo *method)
{
  ManagementManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4CEDE2D & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&CommonEffectManager_TypeInfo);
    sub_1C7BAE8(&FirebaseScript_TypeInfo);
    sub_1C7BAE8(&System_GC_TypeInfo);
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEDE2D = 1;
  }
  if ( !this->fields.isInitializingData )
  {
    this->fields.isInitializingData = 1;
    v7 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v7 = ManagementManager_TypeInfo;
    }
    v7->static_fields->isDuringStartup = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    SwitchParameterDisplayManager__Reboot((SwitchParameterDisplayManager_o *)Instance, 0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Reboot(0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__reboot(0);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__reboot(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
      || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
LABEL_32:
      sub_1C7BD40(Instance, v9);
    }
    PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)Instance, 0);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0);
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    MyRoomParamsManager__Reboot(0);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_1C7BD40(0, v11);
    AdManager__Initialize((AdManager_o *)v10, 2, 0);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0);
    v13 = ManagementManager__startCheckAll(this, 1, isLogin, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v13, 0);
  }
}


void ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CEDE39 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ManagementManager_callbackTopLogin__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4CEDE39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C7BD34(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v5);
  if ( !Instance )
    sub_1C7BD40(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, v8);
}


void ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CEDE3C & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4CEDE3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C7BD34(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v5);
  if ( !Instance )
    sub_1C7BD40(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, v8);
}


void ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._videoPlayer_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._videoPlayer_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEDE30 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagementManager__startCheckAll_d__39_TypeInfo);
    byte_4CEDE30 = 1;
  }
  v7 = isLogin;
  v8 = sub_1C7BD34(ManagementManager__startCheckAll_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v8 + 40), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CEDE34 & 1) == 0 )
  {
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEDE34 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
}


void ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4CEDE35 & 1) == 0 )
  {
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ScrTerminalListTop_TypeInfo);
    sub_1C7BAE8(&ServantCommentManager_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEDE35 = 1;
  }
  MovieFileMerge__Delete_41053056(0);
  v2 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->NOTICE_LAST_MODIFIED_KEY, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEB5FF )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB5FF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
  AssetStorageCache__ClearCacheAll(1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
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
  ManagementManager__CheckMovieResume_d__68_o *v2; // x19
  ManagementManager_o *_4__this; // x20
  Il2CppObject *v4; // x22
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ManagementManager__CheckMovieResume_d__68_o **p_questPhaseEntity_5__2; // x22
  System_String_o *MovieFolder; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppObject *Instance; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ManagementManager__CheckMovieResume_d__68_o *v32; // x22
  _BOOL4 v33; // w22
  struct ManagementManager___c__DisplayClass68_0_o *v34; // x8
  __int64 v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w1
  System_String_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  System_String_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_String_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  System_String_o *movieFolder_5__3; // x21
  CommonUI_o *commonUI_5__4; // x22
  Il2CppObject *v66; // x24
  System_Action_o *v67; // x23
  System_Collections_IEnumerator_o *v68; // x0
  GrandQuestFolderBoardItem_o *v69; // x19
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int v76; // w8
  struct ManagementManager___c__DisplayClass68_0_o *v77; // x8
  struct CommonUI_o *v78; // x8
  MovieFileMerge_o *MovieFileMerge_k__BackingField; // x20
  System_Collections_IEnumerator_o *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  bool result; // w0
  TerminalPramsManager_c *v88; // x0
  int32_t v89; // w8
  struct ManagementManager___c__DisplayClass68_0_o *_8__1; // x21
  System_Action_bool__o *v91; // x22
  const MethodInfo *v92; // x2
  System_Collections_IEnumerator_o *v93; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  Il2CppObject *v101; // [xsp+0h] [xbp-50h] BYREF
  int32_t gender; // [xsp+Ch] [xbp-44h] BYREF
  int32_t phase[2]; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4CEDE4D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_bool__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C7BAE8(&ConnectMark_DownloadCancelDialogData_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass68_0__CheckMovieResume_b__0__);
    sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass68_0__CheckMovieResume_b__1__);
    sub_1C7BAE8(&ManagementManager___c__DisplayClass68_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5033/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3689/*"COMMON_CONFIRM_BACK"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    this = (ManagementManager__CheckMovieResume_d__68_o *)sub_1C7BAE8(&StringLiteral_5034/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_MESSAGE"*/);
    byte_4CEDE4D = 1;
  }
  v101 = 0;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      _4__this = v2->fields.__4__this;
      v4 = (Il2CppObject *)sub_1C7BD34(ManagementManager___c__DisplayClass68_0_TypeInfo);
      System_Object___ctor(v4, 0);
      v2->fields.__8__1 = (struct ManagementManager___c__DisplayClass68_0_o *)v4;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, (int32_t)v4, v5, v6, v7, v8, v9, v10);
      *(_QWORD *)phase = 0;
      gender = 0;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !ScriptManager__GetMovieResumeInfo(&phase[1], phase, &gender, 0) )
        return 0;
      v2->fields._questPhaseEntity_5__2 = 0;
      p_questPhaseEntity_5__2 = (ManagementManager__CheckMovieResume_d__68_o **)&v2->fields._questPhaseEntity_5__2;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._questPhaseEntity_5__2, 0, v11, v12, v13, v14, v15, v16);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ManagementManager__CheckMovieResume_d__68_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !this )
        goto LABEL_61;
      if ( !QuestPhaseMaster__TryGetEntity(
              (QuestPhaseMaster_o *)this,
              &v2->fields._questPhaseEntity_5__2,
              phase[1],
              phase[0],
              0) )
        return 0;
      this = *p_questPhaseEntity_5__2;
      if ( !*p_questPhaseEntity_5__2 )
        goto LABEL_61;
      MovieFolder = QuestPhaseEntity__GetMovieFolder((QuestPhaseEntity_o *)this, gender, 0);
      v2->fields._movieFolder_5__3 = MovieFolder;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._movieFolder_5__3,
        (int32_t)MovieFolder,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      if ( System_String__IsNullOrEmpty(v2->fields._movieFolder_5__3, 0) )
        return 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v2->fields._commonUI_5__4 = (struct CommonUI_o *)Instance;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._commonUI_5__4,
        (int32_t)Instance,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ManagementManager__CheckMovieResume_d__68_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarMaster___);
      v32 = this;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v32 )
        goto LABEL_61;
      this = (ManagementManager__CheckMovieResume_d__68_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v32,
                                                              &v101,
                                                              BalanceConfig_TypeInfo->static_fields->Fgo20251220WarId,
                                                              (const MethodInfo_342E348 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v101 )
          goto LABEL_61;
        v33 = HIDWORD(v101[6].klass) == phase[1];
      }
      else
      {
        v33 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEB5E7 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEB5E7 = 1;
      }
      this = (ManagementManager__CheckMovieResume_d__68_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (ManagementManager__CheckMovieResume_d__68_o *)TerminalPramsManager_TypeInfo;
      }
      if ( v33 != (LOBYTE(this[2].fields.__8__1[26].monitor) != 0) )
      {
        if ( !LODWORD(this[3].monitor) )
          j_il2cpp_runtime_class_init_0(this);
        if ( !byte_4CEB5F7 )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          byte_4CEB5F7 = 1;
        }
        v88 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v88 = TerminalPramsManager_TypeInfo;
        }
        v88->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField = v33;
        TerminalPramsManager__SaveIsTransitionToTerminalAfterMovie(0);
      }
      if ( _4__this )
      {
        v89 = phase[0];
        _4__this->fields.checkMoviePlayData.fields.questID = phase[1];
        _4__this->fields.checkMoviePlayData.fields.phase = v89;
        _4__this->fields.checkMoviePlayData.fields.genderType = gender;
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          _8__1->fields.isBreak = 0;
          v91 = (System_Action_bool__o *)sub_1C7BD34(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(
            v91,
            (Il2CppObject *)_8__1,
            Method_ManagementManager___c__DisplayClass68_0__CheckMovieResume_b__0__,
            0);
          v93 = ManagementManager__CheckPlayMovieFromResumeInfo(_4__this, v91, v92);
          v2->fields.__2__current = (Il2CppObject *)v93;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
          sub_1C7BA8C(p__2__current, (int32_t)v93, v95, v96, v97, v98, v99, v100);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
      goto LABEL_61;
    case 1:
      v34 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v34 )
        goto LABEL_61;
      if ( v34->fields.isBreak )
        goto LABEL_38;
      v35 = sub_1C7BD34(ConnectMark_DownloadCancelDialogData_TypeInfo);
      ConnectMark_DownloadCancelDialogData___ctor((ConnectMark_DownloadCancelDialogData_o *)v35, 0);
      if ( !v35 )
        goto LABEL_61;
      v42 = StringLiteral_1/*""*/;
      *(_QWORD *)(v35 + 16) = StringLiteral_1/*""*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 16), v42, v36, v37, v38, v39, v40, v41);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5034/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_MESSAGE"*/, 0);
      *(_QWORD *)(v35 + 24) = v43;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 24), (int32_t)v43, v44, v45, v46, v47, v48, v49);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5033/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_DECIDE"*/, 0);
      *(_QWORD *)(v35 + 32) = v50;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 32), (int32_t)v50, v51, v52, v53, v54, v55, v56);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_BACK"*/, 0);
      *(_QWORD *)(v35 + 40) = v57;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 40), (int32_t)v57, v58, v59, v60, v61, v62, v63);
      *(_BYTE *)(v35 + 48) = 1;
      movieFolder_5__3 = v2->fields._movieFolder_5__3;
      commonUI_5__4 = v2->fields._commonUI_5__4;
      v66 = (Il2CppObject *)v2->fields.__8__1;
      v67 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v67, v66, Method_ManagementManager___c__DisplayClass68_0__CheckMovieResume_b__1__, 0);
      this = (ManagementManager__CheckMovieResume_d__68_o *)v2->fields._questPhaseEntity_5__2;
      if ( !this )
        goto LABEL_61;
      this = (ManagementManager__CheckMovieResume_d__68_o *)QuestPhaseEntity__IsEnableSkipMovie(
                                                              (QuestPhaseEntity_o *)this,
                                                              0);
      if ( !commonUI_5__4 )
        goto LABEL_61;
      v68 = CommonUI__DownloadMovieAndWaitUI(
              commonUI_5__4,
              movieFolder_5__3,
              0,
              v67,
              (unsigned __int8)this & 1,
              (ConnectMark_DownloadCancelDialogData_o *)v35,
              0);
      v2->fields.__2__current = (Il2CppObject *)v68;
      v69 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C7BA8C(v69, (int32_t)v68, v70, v71, v72, v73, v74, v75);
      v76 = 2;
      goto LABEL_36;
    case 2:
      v77 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( !v77 )
        goto LABEL_61;
      if ( v77->fields.isBreak )
      {
LABEL_38:
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__DeleteMovieResumeInfo(0);
        return 0;
      }
      else
      {
        v78 = v2->fields._commonUI_5__4;
        if ( !v78 )
          goto LABEL_61;
        MovieFileMerge_k__BackingField = v78->fields._MovieFileMerge_k__BackingField;
        this = (ManagementManager__CheckMovieResume_d__68_o *)ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !MovieFileMerge_k__BackingField )
LABEL_61:
          sub_1C7BD40(this, method);
        MovieFileMerge_k__BackingField->fields._OverrideDepth_k__BackingField = ManagementManager_TypeInfo->static_fields->OVERRIDE_MOVIE_DEPTH;
        v80 = MovieFileMerge__PlayMP4(MovieFileMerge_k__BackingField, 0);
        v2->fields.__2__current = (Il2CppObject *)v80;
        v69 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C7BA8C(v69, (int32_t)v80, v81, v82, v83, v84, v85, v86);
        v76 = 3;
LABEL_36:
        LODWORD(v69[-1].fields._ClosedMessage_k__BackingField) = v76;
        return 1;
      }
    case 3:
      v2->fields.__1__state = -1;
      goto LABEL_38;
    default:
      return 0;
  }
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ManagementManager__CheckMovieResume_d__68_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *v8; // x19
  int32_t _1__state; // w8
  struct ManagementManager_o *_4__this; // x28
  Il2CppObject *v11; // x21
  struct ManagementManager___c__DisplayClass69_0_o **p__8__1; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct ManagementManager_o *v25; // x1
  struct ManagementManager___c__DisplayClass69_0_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct System_String_o *monitor; // x1
  struct ManagementManager___c__DisplayClass69_0_o *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_String_o *MoviePlayTime; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_Action_bool__o *callback; // x8
  struct ManagementManager___c__DisplayClass69_0_o *v63; // x23
  System_String_o *v64; // x20
  System_String_o *v65; // x0
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  struct ManagementManager___c__DisplayClass69_0_o *v68; // x26
  CommonConfirmDialog_ClickDelegate_o *_9__3; // x25
  ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *v70; // x23
  CommonUI_o *v71; // x24
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  System_String_o *v78; // x20
  struct ManagementManager___c__DisplayClass69_0_o *v79; // x24
  CommonConfirmDialog_ClickDelegate_o *_9__2; // x23
  ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *v81; // x21
  CommonUI_o *commonUI; // x22
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  CommonConfirmDialog_ClickDelegate_o *_9__0; // x24
  int32_t questID; // w20
  int32_t phase; // w21
  CommonUI_o *v92; // x22
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  System_Action_o *_9__1; // x25
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  struct ManagementManager___c__DisplayClass69_0_o *v106; // x8
  int32_t checkMovieState; // w9
  struct System_Action_bool__o *v108; // x8
  struct ManagementManager___c__DisplayClass69_0_o *_8__1; // x9
  bool result; // w0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4CEDE4E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__0__);
    sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__1__);
    sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__2__);
    sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__3__);
    sub_1C7BAE8(&ManagementManager___c__DisplayClass69_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11180/*"RESUME_MOVIE_DIALOG_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_11181/*"RESUME_MOVIE_DIALOG_DETAIL"*/);
    sub_1C7BAE8(&StringLiteral_12290/*"SKIP_MOVIE_DIALOG_DETAIL"*/);
    sub_1C7BAE8(&StringLiteral_12291/*"SKIP_MOVIE_DIALOG_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_11179/*"RESUME_MOVIE_DIALOG_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11182/*"RESUME_MOVIE_DIALOG_TITLE"*/);
    this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDE4E = 1;
  }
  entity = 0;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_49;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v11 = (Il2CppObject *)sub_1C7BD34(ManagementManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor(v11, 0);
  v8->fields.__8__1 = (struct ManagementManager___c__DisplayClass69_0_o *)v11;
  p__8__1 = &v8->fields.__8__1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)v8->fields.__8__1;
  if ( !this )
    goto LABEL_59;
  v25 = v8->fields.__4__this;
  this->fields.__4__this = v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__4__this, (int32_t)v25, v19, v20, v21, v22, v23, v24);
  if ( !_4__this )
    goto LABEL_59;
  _4__this->fields.checkMoviePlayData.fields.checkMovieState = 1;
  v26 = *p__8__1;
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v26 )
    goto LABEL_59;
  v26->fields.commonUI = (struct CommonUI_o *)this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26->fields, (int32_t)this, v27, v28, v29, v30, v31, v32);
  if ( !*p__8__1 )
    goto LABEL_59;
  *(_WORD *)&(*p__8__1)->fields.isWaitDialog = 0;
  v39 = StringLiteral_1/*""*/;
  v8->fields._questName_5__2 = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._questName_5__2, v39, v33, v34, v35, v36, v37, v38);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_59;
  v40 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          _4__this->fields.checkMoviePlayData.fields.questID,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v40 )
  {
    monitor = (struct System_String_o *)v40[1].monitor;
    v8->fields._questName_5__2 = monitor;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v8->fields._questName_5__2,
      (int32_t)monitor,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v48 = *p__8__1;
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)QuestPhaseEntity__GetMovieFolder(
                                                                      entity,
                                                                      _4__this->fields.checkMoviePlayData.fields.genderType,
                                                                      0);
  if ( !v48 )
    goto LABEL_59;
  v48->fields.movieFolder = (struct System_String_o *)this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v48->fields.movieFolder, (int32_t)this, v49, v50, v51, v52, v53, v54);
  this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)entity;
  if ( !entity )
    goto LABEL_59;
  MoviePlayTime = QuestPhaseEntity__GetMoviePlayTime(entity, 0);
  v8->fields._playTime_5__3 = MoviePlayTime;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields._playTime_5__3,
    (int32_t)MoviePlayTime,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  do
  {
    if ( !_4__this )
      goto LABEL_59;
    checkMovieState = _4__this->fields.checkMoviePlayData.fields.checkMovieState;
    if ( checkMovieState == 4 )
    {
      v108 = v8->fields.callback;
      if ( !v108 )
        return 0;
      _8__1 = v8->fields.__8__1;
      if ( _8__1 )
      {
        ((void (__fastcall *)(intptr_t, bool, intptr_t))v108->fields.invoke_impl)(
          v108->fields.method_code,
          _8__1->fields.isSkipped,
          v108->fields.method);
        return 0;
      }
LABEL_59:
      sub_1C7BD40(this, method);
    }
    v63 = v8->fields.__8__1;
    if ( !v63 )
      goto LABEL_59;
    v63->fields.isWaitDialog = 1;
    switch ( checkMovieState )
    {
      case 3:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12291/*"SKIP_MOVIE_DIALOG_TITLE"*/, 0);
        this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_12290/*"SKIP_MOVIE_DIALOG_DETAIL"*/,
                                                                            0);
        v79 = v8->fields.__8__1;
        if ( !v79 )
          goto LABEL_59;
        _9__2 = v79->fields.__9__2;
        v81 = this;
        commonUI = v79->fields.commonUI;
        if ( !_9__2 )
        {
          _9__2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__2,
            (Il2CppObject *)v79,
            Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__2__,
            0);
          v79->fields.__9__2 = _9__2;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v79->fields.__9__2, (int32_t)_9__2, v83, v84, v85, v86, v87, v88);
        }
        if ( !commonUI )
          goto LABEL_59;
        CommonUI__OpenLockDecideDialog(commonUI, v78, (System_String_o *)v81, _9__2, 0);
        break;
      case 2:
        _9__0 = v63->fields.__9__0;
        questID = _4__this->fields.checkMoviePlayData.fields.questID;
        phase = _4__this->fields.checkMoviePlayData.fields.phase;
        v92 = v63->fields.commonUI;
        if ( !_9__0 )
        {
          _9__0 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__0,
            (Il2CppObject *)v63,
            Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__0__,
            0);
          v63->fields.__9__0 = _9__0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v63->fields.__9__0, (int32_t)_9__0, v93, v94, v95, v96, v97, v98);
          v63 = v8->fields.__8__1;
          if ( !v63 )
            goto LABEL_59;
        }
        _9__1 = v63->fields.__9__1;
        if ( !_9__1 )
        {
          _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(
            _9__1,
            (Il2CppObject *)v63,
            Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__1__,
            0);
          v63->fields.__9__1 = _9__1;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v63->fields.__9__1,
            (int32_t)_9__1,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105);
        }
        if ( !v92 )
          goto LABEL_59;
        CommonUI__OpenDownloadMovieDialog(v92, questID, phase, _9__0, _9__1, 0, 0);
        break;
      case 1:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11182/*"RESUME_MOVIE_DIALOG_TITLE"*/, 0);
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11181/*"RESUME_MOVIE_DIALOG_DETAIL"*/, 0);
        v66 = System_String__Format_64218220(
                v65,
                (Il2CppObject *)v8->fields._questName_5__2,
                (Il2CppObject *)v8->fields._playTime_5__3,
                0);
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11180/*"RESUME_MOVIE_DIALOG_DECIDE"*/, 0);
        this = (ManagementManager__CheckPlayMovieFromResumeInfo_d__69_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_11179/*"RESUME_MOVIE_DIALOG_CANCEL"*/,
                                                                            0);
        v68 = v8->fields.__8__1;
        if ( !v68 )
          goto LABEL_59;
        _9__3 = v68->fields.__9__3;
        v70 = this;
        v71 = v68->fields.commonUI;
        if ( !_9__3 )
        {
          _9__3 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__3,
            (Il2CppObject *)v68,
            Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__3__,
            0);
          v68->fields.__9__3 = _9__3;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v68->fields.__9__3, (int32_t)_9__3, v72, v73, v74, v75, v76, v77);
        }
        if ( !v71 )
          goto LABEL_59;
        CommonUI__OpenConfirmDialog_31483100(
          v71,
          v64,
          v66,
          v67,
          (System_String_o *)v70,
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
    v106 = v8->fields.__8__1;
    if ( !v106 )
      goto LABEL_59;
  }
  while ( !v106->fields.isWaitDialog );
  v8->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C7BA8C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ManagementManager__CheckPlayMovieFromResumeInfo_d__69_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  bool result; // w0
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  ManagementManager_o *v17; // x0
  const MethodInfo *v18; // x1
  System_Collections_IEnumerator_o *v19; // x1
  ManagementManager_o *started; // x0
  const MethodInfo *v21; // x1
  System_Collections_IEnumerator_o *v22; // x1

  if ( (byte_4CEDE4F & 1) == 0 )
  {
    sub_1C7BAE8(&FirebaseScript_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C7BAE8(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CEDE4F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v14);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0);
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v15 )
      sub_1C7BD40(0, v16);
    AdManager__Initialize((AdManager_o *)v15, 1, 0);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0);
    if ( !_4__this )
      sub_1C7BD40(v17, v18);
    v19 = ManagementManager__SetupFirebaseAppCheck(v17, v18);
    started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_71855340(_4__this, v19, 0);
    v22 = ManagementManager__SetupFirebaseCrashlytics(started, v21);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340(_4__this, v22, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  FirebaseScript_c *v10; // x0
  FirebaseScript_c *v11; // x0
  FirebaseScript_c *v12; // x0
  Il2CppObject **v13; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  FirebaseScript_c *v16; // x0
  FirebaseScript_c *v17; // x0
  System_String_o *v18; // x19
  float time; // s8
  FirebaseScript_c *v20; // x0
  float beginTime_5__2; // s9
  FirebaseScript_c *v22; // x0
  float v23; // s8
  char IsNullOrEmpty; // w0
  char v25; // w21
  bool v26; // w22
  Il2CppObject *v27; // x19
  Il2CppObject *v28; // x0
  FirebaseScript_c *v29; // x0
  FirebaseScript_c *v30; // x0
  bool v31[4]; // [xsp+18h] [xbp-28h] BYREF
  float v32; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CEDE50 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&FirebaseScript_TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&StringLiteral_812/*", AppCheckErrorMessage: "*/);
    sub_1C7BAE8(&StringLiteral_5948/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/);
    sub_1C7BAE8(&StringLiteral_8012/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/);
    byte_4CEDE50 = 1;
  }
  _1__state = this->fields.__1__state;
  switch ( _1__state )
  {
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_25;
    case 1:
      this->fields.__1__state = -1;
      goto LABEL_15;
    case 0:
      this->fields.__1__state = -1;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4CEDF35 )
      {
        sub_1C7BAE8(&FirebaseScript_TypeInfo);
        byte_4CEDF35 = 1;
      }
      v10 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v10 = FirebaseScript_TypeInfo;
      }
      v10->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4CEDF36 )
      {
        sub_1C7BAE8(&FirebaseScript_TypeInfo);
        byte_4CEDF36 = 1;
      }
      v11 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v11 = FirebaseScript_TypeInfo;
      }
      if ( !v11->static_fields->_IsFirebaseInitialized_k__BackingField )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !v11->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v11);
      if ( !FirebaseScript__GetAppCheckToken(0, 0) )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4CEDF37 )
        {
          sub_1C7BAE8(&FirebaseScript_TypeInfo);
          byte_4CEDF37 = 1;
        }
        v16 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v16 = FirebaseScript_TypeInfo;
        }
        if ( v16->static_fields->_IsSendAppCheckToken_k__BackingField )
          return 0;
        if ( !v16->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v16);
        if ( !byte_4CE827B )
        {
          sub_1C7BAE8(&FirebaseScript_TypeInfo);
          byte_4CE827B = 1;
        }
        v17 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v17 = FirebaseScript_TypeInfo;
        }
        if ( v17->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        v18 = (System_String_o *)StringLiteral_8012/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        if ( v17->_2.cctor_finished )
          goto LABEL_73;
LABEL_72:
        j_il2cpp_runtime_class_init_0(v17);
LABEL_73:
        if ( !byte_4CEDF38 )
        {
          sub_1C7BAE8(&FirebaseScript_TypeInfo);
          byte_4CEDF38 = 1;
        }
        v30 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v30 = FirebaseScript_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetString(v30->static_fields->_AppCheckPrevMessageKey_k__BackingField, v18, 0);
        UnityEngine_PlayerPrefs__Save(0);
        return 0;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4CEDE1D )
      {
        sub_1C7BAE8(&FirebaseScript_TypeInfo);
        byte_4CEDE1D = 1;
      }
      v12 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v12 = FirebaseScript_TypeInfo;
      }
      if ( v12->static_fields->_IsRunningGetAppCheckToken_k__BackingField )
      {
        this->fields.__2__current = 0;
        v13 = &this->fields.__2__current;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v13, 0, v2, v3, v4, v5, v6, v7);
        *((_DWORD *)v13 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4CEDF37 )
      {
        sub_1C7BAE8(&FirebaseScript_TypeInfo);
        byte_4CEDF37 = 1;
      }
      v20 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v20 = FirebaseScript_TypeInfo;
      }
      if ( v20->static_fields->_IsSendAppCheckToken_k__BackingField )
        return 0;
      beginTime_5__2 = this->fields._beginTime_5__2;
      if ( !v20->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v20);
      if ( !byte_4CEDF39 )
      {
        sub_1C7BAE8(&FirebaseScript_TypeInfo);
        byte_4CEDF39 = 1;
      }
      v22 = FirebaseScript_TypeInfo;
      v23 = time - beginTime_5__2;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v22 = FirebaseScript_TypeInfo;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v22->static_fields->_AppCheckToken_k__BackingField, 0);
      v25 = ~IsNullOrEmpty;
      v26 = (IsNullOrEmpty & 1) == 0;
      v32 = v23;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v32);
      v31[0] = v26;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v31);
      v18 = System_String__Format_64218220((System_String_o *)StringLiteral_5948/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v27, v28, 0);
      if ( (v25 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4CEDF3A )
        {
          sub_1C7BAE8(&FirebaseScript_TypeInfo);
          byte_4CEDF3A = 1;
        }
        v29 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v29 = FirebaseScript_TypeInfo;
        }
        v18 = System_String__Concat_64215176(
                v18,
                (System_String_o *)StringLiteral_812/*", AppCheckErrorMessage: "*/,
                v29->static_fields->_AppCheckTokenError_k__BackingField,
                0);
      }
      v17 = FirebaseScript_TypeInfo;
      if ( FirebaseScript_TypeInfo->_2.cctor_finished )
        goto LABEL_73;
      goto LABEL_72;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ManagementManager__SetupFirebaseAppCheck_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  FirebaseScript_c *v9; // x0
  FirebaseScript_c *v10; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4CEDE51 & 1) == 0 )
  {
    sub_1C7BAE8(&FirebaseScript_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4CEDE51 = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4CEDF36 )
  {
    sub_1C7BAE8(&FirebaseScript_TypeInfo);
    byte_4CEDF36 = 1;
  }
  v9 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v9 = FirebaseScript_TypeInfo;
  }
  if ( v9->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_4CE827B )
    {
      sub_1C7BAE8(&FirebaseScript_TypeInfo);
      byte_4CE827B = 1;
    }
    v10 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v10 = FirebaseScript_TypeInfo;
    }
    if ( v10->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_1C7BD40(0, v12);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0);
    }
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ManagementManager__SetupFirebaseCrashlytics_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4CEDE4A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass39_1__startCheckAll_b__1__);
    sub_1C7BAE8(&ManagementManager___c__DisplayClass39_1_TypeInfo);
    byte_4CEDE4A = 1;
  }
  v5 = sub_1C7BD34(ManagementManager___c__DisplayClass39_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass39_1__startCheckAll_b__1__,
          0),
        !Instance) )
  {
    sub_1C7BD40(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31483188((CommonUI_o *)Instance, v15, 0);
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
    sub_1C7BD40(this, method);
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


void ManagementManager___c__DisplayClass69_0___CheckPlayMovieFromResumeInfo_b__0(
        ManagementManager___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ManagementManager_o *_4__this; // x8
  int v4; // w9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(this, isDecide);
  if ( isDecide )
    v4 = 4;
  else
    v4 = 1;
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
  System_Action_o *_9__5; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v4 = this;
  if ( (byte_4CEDE4C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ManagementManager___c__DisplayClass69_0_o *)sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__5__);
    byte_4CEDE4C = 1;
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
  this = (ManagementManager___c__DisplayClass69_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = v4->fields.__9__5;
  v8 = (CommonUI_o *)this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
LABEL_12:
    sub_1C7BD40(this, isDecide);
  CommonUI__CloseLockDecideDialog(v8, _9__5, 0);
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
  System_Action_o *_9__4; // x22
  CommonUI_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v4 = this;
  if ( (byte_4CEDE4B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ManagementManager___c__DisplayClass69_0_o *)sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__4__);
    byte_4CEDE4B = 1;
  }
  if ( isDecide )
  {
    commonUI = v4->fields.commonUI;
    if ( !commonUI )
      goto LABEL_16;
    this = (ManagementManager___c__DisplayClass69_0_o *)commonUI->fields._MovieFileMerge_k__BackingField;
    if ( !this )
      goto LABEL_16;
    this = (ManagementManager___c__DisplayClass69_0_o *)MovieFileMerge__ExistCRCCheckedMovieFile(
                                                          (MovieFileMerge_o *)this,
                                                          v4->fields.movieFolder,
                                                          0);
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_16;
    if ( ((unsigned __int8)this & 1) != 0 )
      v7 = 4;
    else
      v7 = 2;
  }
  else
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_16;
    v7 = 3;
  }
  _4__this->fields.checkMoviePlayData.fields.checkMovieState = v7;
  this = (ManagementManager___c__DisplayClass69_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__4 = v4->fields.__9__4;
  v9 = (CommonUI_o *)this;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_ManagementManager___c__DisplayClass69_0__CheckPlayMovieFromResumeInfo_b__4__,
      0);
    v4->fields.__9__4 = _9__4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v10, v11, v12, v13, v14, v15);
  }
  if ( !v9 )
LABEL_16:
    sub_1C7BD40(this, isDecide);
  CommonUI__CloseConfirmDialog_31483188(v9, _9__4, 0);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ManagementManager__startCheckAll_d__39_o *v8; // x26
  ManagementManager__startCheckAll_d__39_Fields *p_fields; // x8
  AndroidUtil_c **v10; // x24
  const MethodInfo_3A8C5A8 **v11; // x23
  void *_4__this; // x22
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v14; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x26
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v23; // x0
  GrandQuestFolderBoardItem_o *v24; // x26
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int v31; // w8
  System_Collections_IEnumerator_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  OptionManager_c *v39; // x0
  const MethodInfo *v40; // x0
  const MethodInfo *v41; // x0
  UnityEngine_Application_LogCallback_o *v42; // x21
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  ManagementManager__startCheckAll_d__39_o *v56; // x21
  int32_t v57; // w1
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  EncryptedPlayerPrefs_c *v78; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v80; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  const MethodInfo *v87; // x1
  struct ManagementManager___c__DisplayClass39_0_o *v88; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v90; // x21
  const MethodInfo *v91; // x3
  UnityEngine_WaitForEndOfFrame_o *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  NetworkManager_ResultCallbackFunc_o *v99; // x21
  const MethodInfo *v100; // x3
  UnityEngine_WaitForEndOfFrame_o *v101; // x20
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v109; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  DataManager_c *v118; // x0
  UnityEngine_Coroutine_o *v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  DataManager_c *v126; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v128; // x21
  System_String_o *v129; // x22
  ErrorDialog_ClickDelegate_o *v130; // x23
  UnityEngine_WaitForEndOfFrame_o *v131; // x20
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  UnityEngine_WaitForEndOfFrame_o *v138; // x20
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  UnityEngine_WaitForEndOfFrame_o *v145; // x20
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  LogoMain_c *v152; // x0
  UnityEngine_WaitForEndOfFrame_o *v153; // x20
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  _QWORD *v160; // x0
  System_Reflection_MethodBase_o *v161; // x0
  _QWORD *v162; // x0
  System_Reflection_MethodBase_o *v163; // x0
  ManagementManager_c *v164; // x0
  const MethodInfo *v165; // x2
  OptionManager_c *v166; // x0
  bool Notiffication; // w0
  const MethodInfo *v168; // x2
  ManagementManager_c *v169; // x0
  System_Collections_IEnumerator_o *v170; // x0
  int32_t v171; // w2
  int32_t v172; // w3
  System_String_o *v173; // x4
  int32_t v174; // w5
  int64_t v175; // x6
  System_String_o *v176; // x7
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v178; // x0
  UnityEngine_Coroutine_o *v179; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  LocalizationManager_c *v186; // x0
  UnityEngine_WaitForEndOfFrame_o *v187; // x20
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  UnityEngine_WaitForEndOfFrame_o *v194; // x20
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  NetworkManager_ResultCallbackFunc_o *v201; // x21
  const MethodInfo *v202; // x3
  UnityEngine_WaitForEndOfFrame_o *v203; // x20
  int32_t v204; // w2
  int32_t v205; // w3
  System_String_o *v206; // x4
  int32_t v207; // w5
  int64_t v208; // x6
  System_String_o *v209; // x7
  UnityEngine_WaitForEndOfFrame_o *v210; // x20
  int32_t v211; // w2
  int32_t v212; // w3
  System_String_o *v213; // x4
  int32_t v214; // w5
  int64_t v215; // x6
  System_String_o *v216; // x7
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v218; // x20
  int32_t v219; // w2
  int32_t v220; // w3
  System_String_o *v221; // x4
  int32_t v222; // w5
  int64_t v223; // x6
  System_String_o *v224; // x7
  UnityEngine_WaitForEndOfFrame_o *v225; // x20
  int32_t v226; // w2
  int32_t v227; // w3
  System_String_o *v228; // x4
  int32_t v229; // w5
  int64_t v230; // x6
  System_String_o *v231; // x7
  UnityEngine_WaitForEndOfFrame_o *v232; // x20
  int32_t v233; // w2
  int32_t v234; // w3
  System_String_o *v235; // x4
  int32_t v236; // w5
  int64_t v237; // x6
  System_String_o *v238; // x7
  UnityEngine_WaitForEndOfFrame_o *v239; // x20
  int32_t v240; // w2
  int32_t v241; // w3
  System_String_o *v242; // x4
  int32_t v243; // w5
  int64_t v244; // x6
  System_String_o *v245; // x7
  UnityEngine_WaitForSeconds_o *v246; // x20
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o *v249; // x4
  int32_t v250; // w5
  int64_t v251; // x6
  System_String_o *v252; // x7
  int32_t v253; // w2
  int32_t v254; // w3
  System_String_o *v255; // x4
  int32_t v256; // w5
  int64_t v257; // x6
  System_String_o *v258; // x7
  UnityEngine_WaitForEndOfFrame_o *v259; // x20
  int32_t v260; // w2
  int32_t v261; // w3
  System_String_o *v262; // x4
  int32_t v263; // w5
  int64_t v264; // x6
  System_String_o *v265; // x7
  UnityEngine_WaitForEndOfFrame_o *v266; // x20
  int32_t v267; // w2
  int32_t v268; // w3
  System_String_o *v269; // x4
  int32_t v270; // w5
  int64_t v271; // x6
  System_String_o *v272; // x7
  UnityEngine_WaitForEndOfFrame_o *v273; // x20
  int32_t v274; // w2
  int32_t v275; // w3
  System_String_o *v276; // x4
  int32_t v277; // w5
  int64_t v278; // x6
  System_String_o *v279; // x7
  ManagerConfig_c *v280; // x0
  UnityEngine_WaitForEndOfFrame_o *v281; // x20
  int32_t v282; // w2
  int32_t v283; // w3
  System_String_o *v284; // x4
  int32_t v285; // w5
  int64_t v286; // x6
  System_String_o *v287; // x7
  UnityEngine_WaitForSeconds_o *v288; // x20
  int32_t v289; // w2
  int32_t v290; // w3
  System_String_o *v291; // x4
  int32_t v292; // w5
  int64_t v293; // x6
  System_String_o *v294; // x7
  UnityEngine_WaitForEndOfFrame_o *v295; // x20
  int32_t v296; // w2
  int32_t v297; // w3
  System_String_o *v298; // x4
  int32_t v299; // w5
  int64_t v300; // x6
  System_String_o *v301; // x7
  UnityEngine_WaitForEndOfFrame_o *v302; // x20
  int32_t v303; // w2
  int32_t v304; // w3
  System_String_o *v305; // x4
  int32_t v306; // w5
  int64_t v307; // x6
  System_String_o *v308; // x7
  ManagementManager_c *v309; // x0
  UnityEngine_Coroutine_o *v310; // x0
  int32_t v311; // w2
  int32_t v312; // w3
  System_String_o *v313; // x4
  int32_t v314; // w5
  int64_t v315; // x6
  System_String_o *v316; // x7
  Il2CppObject *v317; // x21
  Il2CppObject *v318; // x20
  System_String_o *v319; // x22
  ErrorDialog_ClickDelegate_o *v320; // x23
  UnityEngine_WaitForEndOfFrame_o *v321; // x20
  int32_t v322; // w2
  int32_t v323; // w3
  System_String_o *v324; // x4
  int32_t v325; // w5
  int64_t v326; // x6
  System_String_o *v327; // x7
  int32_t v328; // w2
  int32_t v329; // w3
  System_String_o *v330; // x4
  int32_t v331; // w5
  int64_t v332; // x6
  System_String_o *v333; // x7
  UnityEngine_WaitForEndOfFrame_o *v334; // x20
  int32_t v335; // w2
  int32_t v336; // w3
  System_String_o *v337; // x4
  int32_t v338; // w5
  int64_t v339; // x6
  System_String_o *v340; // x7
  UnityEngine_WaitForEndOfFrame_o *v341; // x20
  int32_t v342; // w2
  int32_t v343; // w3
  System_String_o *v344; // x4
  int32_t v345; // w5
  int64_t v346; // x6
  System_String_o *v347; // x7
  System_Action_object__o *v348; // x21
  System_Action_object__o *v349; // x22
  System_Action_string__o *v350; // x2
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v354; // x0
  ManagerConfig_c *v355; // x0
  AndroidUtil_c **v356; // x25
  Il2CppObject *v357; // x24
  ManagementManager__startCheckAll_d__39_o *v358; // x27
  const MethodInfo_3A8C5A8 **v359; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v361; // x22
  ErrorDialog_ClickDelegate_o *v362; // x23
  UnityEngine_WaitForEndOfFrame_o *v363; // x20
  int32_t v364; // w2
  int32_t v365; // w3
  System_String_o *v366; // x4
  int32_t v367; // w5
  int64_t v368; // x6
  System_String_o *v369; // x7
  ManagementManager_c *v370; // x0
  const MethodInfo_3A8C5A8 **v371; // x28
  Il2CppObject *v372; // x21
  int32_t v373; // w2
  int32_t v374; // w3
  System_String_o *v375; // x4
  int32_t v376; // w5
  int64_t v377; // x6
  System_String_o *v378; // x7
  ManagementManager__startCheckAll_d__39_o *v379; // x19
  Il2CppObject *v380; // x21
  System_String_o *v381; // x22
  System_String_o *v382; // x24
  System_String_o *v383; // x25
  System_String_o *v384; // x0
  Il2CppObject *_8__1; // x27
  System_String_o *v386; // x23
  CommonConfirmDialog_ClickDelegate_o *v387; // x26
  Il2CppObject *v388; // x21
  System_String_o *v389; // x21
  Il2CppObject *DispFriendCode; // x22
  Il2CppObject *v391; // x22
  System_String_o *v392; // x23
  System_String_o *v393; // x0
  System_String_o *v394; // x19
  Il2CppObject *v395; // x2
  System_String_o *v396; // x21
  ErrorDialog_ClickDelegate_o *v397; // x23
  ManagementManager_c *v398; // x0
  UnityEngine_Coroutine_o *v399; // x0
  int32_t v400; // w2
  int32_t v401; // w3
  System_String_o *v402; // x4
  int32_t v403; // w5
  int64_t v404; // x6
  System_String_o *v405; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  Il2CppObject *object; // [xsp+40h] [xbp-80h]
  System_Enum_o v408; // [xsp+48h] [xbp-78h] BYREF
  int32_t readResult_5__2; // [xsp+58h] [xbp-68h]

  v8 = this;
  if ( (byte_4CEDE52 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_string__TypeInfo);
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&CommonServicePluginScript_TypeInfo);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Application_LogCallback_TypeInfo);
    sub_1C7BAE8(&LogoMain_TypeInfo);
    sub_1C7BAE8(&Method_ManagementManager_EndLogDialog__);
    sub_1C7BAE8(&Method_ManagementManager_EndQuitDialog__);
    sub_1C7BAE8(&Method_ManagementManager_EndRetryDialog__);
    sub_1C7BAE8(&Method_ManagementManager_HandleLog__);
    sub_1C7BAE8(&Method_ManagementManager_NotifyRequestPermissionsDenied__);
    sub_1C7BAE8(&Method_ManagementManager_NotifyRequestPermissionsGranted__);
    sub_1C7BAE8(&Method_ManagementManager_callbackAccountRegist__);
    sub_1C7BAE8(&Method_ManagementManager_callbackTopGameData__);
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&OptionManager_TypeInfo);
    sub_1C7BAE8(&PurchaseBehaviour_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ReadResult_TypeInfo);
    sub_1C7BAE8(&ResolutionManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&ServantCommentManager_TypeInfo);
    sub_1C7BAE8(&SignedData_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_ManagementManager___c__DisplayClass39_0__startCheckAll_b__0__);
    sub_1C7BAE8(&ManagementManager___c__DisplayClass39_0_TypeInfo);
    sub_1C7BAE8(&Method_ManagementManager__startCheckAll_d__39_MoveNext__);
    sub_1C7BAE8(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7476/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_9348/*"NOW_LOADING"*/);
    sub_1C7BAE8(&StringLiteral_9277/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C7BAE8(&StringLiteral_6398/*"F39UThNh"*/);
    sub_1C7BAE8(&StringLiteral_7479/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_1C7BAE8(&StringLiteral_7477/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_1C7BAE8(&StringLiteral_7475/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_5091/*"DataServerFolderName"*/);
    sub_1C7BAE8(&StringLiteral_16845/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_1C7BAE8(&StringLiteral_9285/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_9278/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_1C7BAE8(&StringLiteral_12639/*"SYSTEM"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_21069/*"ioqrk4Om"*/);
    sub_1C7BAE8(&StringLiteral_1371/*"2pC0bIYM"*/);
    sub_1C7BAE8(&StringLiteral_9279/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__39_o *)sub_1C7BAE8(&StringLiteral_9286/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4CEDE52 = 1;
  }
  p_fields = &v8->fields;
  v10 = &AndroidUtil_TypeInfo;
  v11 = (const MethodInfo_3A8C5A8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v8->fields.__4__this;
  object = (Il2CppObject *)_4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      isReboot = v8->fields.isReboot;
      v8->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v14 = UnityEngine_Resources__UnloadUnusedAssets(0);
      v8->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(p__2__current, (int32_t)v14, v16, v17, v18, v19, v20, v21);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_7:
      if ( !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData__RefillSigningData(3, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__Initialize(0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initialize(0);
      if ( !_4__this )
        goto LABEL_427;
      v23 = ManagementManager__InitializeAdManagerAndFirebase((ManagementManager_o *)_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v23;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(v24, (int32_t)v23, v25, v26, v27, v28, v29, v30);
      v31 = 2;
      goto LABEL_426;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      v32 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v8->fields.__2__current = (Il2CppObject *)v32;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(v24, (int32_t)v32, v33, v34, v35, v36, v37, v38);
      v31 = 3;
      goto LABEL_426;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      AssetManager__Initialize((AssetManager_o *)this, 0);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0);
      v39 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v39);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0);
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0);
      OptionManager__AdjustScenarioSpeedSetting(v40);
      OptionManager__AdjustVolume(v41);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0);
      UnityEngine_Input__set_multiTouchEnabled(1, 0);
      if ( v8->fields.isReboot )
        goto LABEL_31;
      v42 = (UnityEngine_Application_LogCallback_o *)sub_1C7BD34(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(v42, (Il2CppObject *)_4__this, Method_ManagementManager_HandleLog__, 0);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__add_logMessageReceived(v42, 0);
      if ( v8->fields.isReboot )
      {
LABEL_31:
        v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
        v8->fields.__2__current = (Il2CppObject *)v43;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v43, v44, v45, v46, v47, v48, v49);
        v31 = 4;
        goto LABEL_426;
      }
LABEL_33:
      this = (ManagementManager__startCheckAll_d__39_o *)sub_1C7BB90(string___TypeInfo, 3);
      if ( !this )
        goto LABEL_427;
      v56 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v57 = StringLiteral_1371/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1371/*"2pC0bIYM"*/,
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.isReboot, v57, v50, v51, v52, v53, v54, v55),
            LODWORD(v56->fields.__2__current) <= 1)
        || (v64 = StringLiteral_6398/*"F39UThNh"*/,
            v56->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6398/*"F39UThNh"*/,
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v56->fields.__4__this, v64, v58, v59, v60, v61, v62, v63),
            LODWORD(v56->fields.__2__current) <= 2) )
      {
        sub_1C7BD48(this);
      }
      v71 = StringLiteral_21069/*"ioqrk4Om"*/;
      v56->fields.__8__1 = (struct ManagementManager___c__DisplayClass39_0_o *)StringLiteral_21069/*"ioqrk4Om"*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v56->fields.__8__1, v71, v65, v66, v67, v68, v69, v70);
      v78 = EncryptedPlayerPrefs_TypeInfo;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v78 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v78->static_fields;
      static_fields->keys = (struct System_String_array *)v56;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->keys, (int32_t)v56, v72, v73, v74, v75, v76, v77);
      if ( !v8->fields.isReboot )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)AndroidPermissionManager__EnabledRuntimePermission(0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_44;
        if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
        this = (ManagementManager__startCheckAll_d__39_o *)AndroidUtil__get_apiLevel(0);
        if ( (int)this >= 33 )
        {
          this = (ManagementManager__startCheckAll_d__39_o *)AndroidPermissionManager__CheckPermission(
                                                               (System_String_o *)StringLiteral_16845/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_427;
            *((_BYTE *)_4__this + 97) = 1;
            v348 = (System_Action_object__o *)sub_1C7BD34(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v348,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0);
            v349 = (System_Action_object__o *)sub_1C7BD34(System_Action_string__TypeInfo);
            System_Action_object____ctor(v349, object, Method_ManagementManager_NotifyRequestPermissionsDenied__, 0);
            v350 = (System_Action_string__o *)v349;
            _4__this = object;
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_16845/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v348,
              v350,
              0,
              0);
LABEL_47:
            if ( *((_BYTE *)_4__this + 97) )
            {
              v80 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v80, 0);
              v8->fields.__2__current = (Il2CppObject *)v80;
              v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C7BA8C(v24, (int32_t)v80, v81, v82, v83, v84, v85, v86);
              v31 = 5;
              goto LABEL_426;
            }
          }
        }
        else
        {
LABEL_44:
          if ( !_4__this )
            goto LABEL_427;
          *((_BYTE *)_4__this + 96) = 1;
        }
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0);
          v341 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v341, 0);
          v8->fields.__2__current = (Il2CppObject *)v341;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)v341, v342, v343, v344, v345, v346, v347);
          v31 = 6;
          goto LABEL_426;
        }
LABEL_427:
        sub_1C7BD40(this, method);
      }
LABEL_50:
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
      v8->fields._readResult_5__2 = (int)this;
      if ( !_4__this )
        goto LABEL_427;
      this = (ManagementManager__startCheckAll_d__39_o *)*((_QWORD *)_4__this + 8);
      if ( !this )
        goto LABEL_427;
      this = (ManagementManager__startCheckAll_d__39_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_427;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      ManagementManager__BuildInfoOff((ManagementManager_o *)_4__this, v87);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      TerminalPramsManager__Load_SaveData(0);
      while ( 1 )
      {
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
        temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0);
        if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
        FreeSize = CommonServicePluginScript__GetFreeSize(temporaryCachePath, 0);
        if ( !(*v10)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v10);
        DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
        v354 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0);
        if ( FreeSize < v354 )
          FreeSize = v354;
        if ( (FreeSize & 0x8000000000000000LL) == 0 )
        {
          v355 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v355 = ManagerConfig_TypeInfo;
            _4__this = object;
          }
          if ( FreeSize >= v355->static_fields->LIMIT_FREE_SIZE )
            break;
        }
        *((_BYTE *)_4__this + 91) = 1;
        v356 = v10;
        v357 = (Il2CppObject *)_4__this;
        v358 = v8;
        v359 = v11;
        Instance = SingletonMonoBehaviour_object___get_Instance(*v11);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v361 = LocalizationManager__Get((System_String_o *)StringLiteral_9277/*"NETWORK_ERROR_DISK_FULL"*/, 0);
        v362 = (ErrorDialog_ClickDelegate_o *)sub_1C7BD34(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v362, v357, Method_ManagementManager_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_427;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v361, v362, 0, 0);
        _4__this = object;
        v11 = v359;
        v8 = v358;
        v10 = v356;
LABEL_383:
        if ( *((_BYTE *)_4__this + 91) )
        {
          v363 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v363, 0);
          v8->fields.__2__current = (Il2CppObject *)v363;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)v363, v364, v365, v366, v367, v368, v369);
          v31 = 7;
          goto LABEL_426;
        }
      }
      if ( v8->fields._readResult_5__2 < 2u )
      {
        v8->fields._isCacheCheck_5__3 = 0;
        goto LABEL_387;
      }
      v388 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v389 = LocalizationManager__Get((System_String_o *)StringLiteral_9278/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_427;
        DispFriendCode = (Il2CppObject *)NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
        goto LABEL_410;
      }
      if ( !(*v10)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v10);
      DispFriendCode = (Il2CppObject *)AndroidUtil__GetFriendCodeFromOldDat(0);
      if ( !System_String__IsNullOrEmpty((System_String_o *)DispFriendCode, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v389 = LocalizationManager__Get((System_String_o *)StringLiteral_9278/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
LABEL_410:
        v388 = (Il2CppObject *)System_String__Format(v389, DispFriendCode, 0);
      }
      v391 = SingletonMonoBehaviour_object___get_Instance(*v11);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v392 = LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NETWORK_ERROR_READ_AUTH"*/, 0);
      v408.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v408.monitor = (void *)-1LL;
      readResult_5__2 = v8->fields._readResult_5__2;
      v393 = System_Enum__ToString(&v408, 0);
      v394 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v393 )
        v395 = (Il2CppObject *)v393;
      else
        v395 = (Il2CppObject *)StringLiteral_1/*""*/;
      v396 = System_String__Format_64218220(v392, v388, v395, 0);
      v397 = (ErrorDialog_ClickDelegate_o *)sub_1C7BD34(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v397, object, Method_ManagementManager_EndQuitDialog__, 0);
      if ( !v391 )
        goto LABEL_427;
      CommonUI__OpenErrorDialog((CommonUI_o *)v391, v394, v396, v397, 0, 0);
      return 0;
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_33;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_47;
      goto LABEL_427;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_50;
    case 7:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_427;
      goto LABEL_383;
    case 8:
      p_fields->__1__state = -1;
      goto LABEL_60;
    case 9:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( !byte_4CEDF3B )
      {
        sub_1C7BAE8(&DataManager_TypeInfo);
        byte_4CEDF3B = 1;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__39_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v8->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( !this[2].fields.__1__state )
          j_il2cpp_runtime_class_init_0(this);
        DataManager__ClearCacheAll(0);
      }
      if ( !_4__this )
        goto LABEL_427;
      *((_BYTE *)_4__this + 89) = 0;
      v90 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v90,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v91);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager__getRequest_object_(
                                                           v90,
                                                           (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_427;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v92 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v92, 0);
      v8->fields._waitForServerTime_5__7 = v92;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._waitForServerTime_5__7,
        (int32_t)v92,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
      goto LABEL_86;
    case 0xA:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_427;
      if ( !*((_BYTE *)_4__this + 89) )
      {
LABEL_86:
        waitForServerTime_5__7 = (Il2CppObject *)v8->fields._waitForServerTime_5__7;
        v8->fields.__2__current = waitForServerTime_5__7;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)waitForServerTime_5__7, v2, v3, v4, v5, v6, v7);
        v31 = 10;
        goto LABEL_426;
      }
      *((_BYTE *)_4__this + 89) = 0;
      v99 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v99,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v100);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager__getRequest_object_(
                                                           v99,
                                                           (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_427;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v101 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v101, 0);
      v8->fields._wait_5__8 = v101;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__8,
        (int32_t)v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
LABEL_212:
      wait_5__8 = (Il2CppObject *)v8->fields._wait_5__8;
      v8->fields.__2__current = wait_5__8;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(v24, (int32_t)wait_5__8, v2, v3, v4, v5, v6, v7);
      v31 = 11;
      goto LABEL_426;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_427;
      if ( !*((_BYTE *)_4__this + 89) )
        goto LABEL_212;
      v109 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CEBBA5 )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CEBBA5 = 1;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager_TypeInfo;
      }
      if ( !v109 )
        goto LABEL_427;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v109,
        (System_String_o *)StringLiteral_5091/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0);
      if ( v8->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0);
          started = UnityEngine_MonoBehaviour__StartCoroutine_71855340(
                      (UnityEngine_MonoBehaviour_o *)_4__this,
                      MasterData,
                      0);
          v8->fields.__2__current = (Il2CppObject *)started;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)started, v112, v113, v114, v115, v116, v117);
          v31 = 12;
          goto LABEL_426;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__39_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v8->fields.isReboot,
                                                               0);
          if ( _4__this )
          {
            v119 = UnityEngine_MonoBehaviour__StartCoroutine_71855340(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0);
            v8->fields.__2__current = (Il2CppObject *)v119;
            v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C7BA8C(v24, (int32_t)v119, v120, v121, v122, v123, v124, v125);
            v31 = 14;
            goto LABEL_426;
          }
        }
      }
      goto LABEL_427;
    case 0xC:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( !byte_4CEDF3C )
      {
        sub_1C7BAE8(&DataManager_TypeInfo);
        byte_4CEDF3C = 1;
      }
      v118 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v118 = DataManager_TypeInfo;
      }
      if ( v118->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v118->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v118);
      DataManager__ClearCacheAll(0);
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      v266 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v266, 0);
      v8->fields.__2__current = (Il2CppObject *)v266;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(v24, (int32_t)v266, v267, v268, v269, v270, v271, v272);
      v31 = 13;
      goto LABEL_426;
    case 0xD:
      p_fields->__1__state = -1;
      goto LABEL_387;
    case 0xE:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( !byte_4CEDF3D )
      {
        sub_1C7BAE8(&DataManager_TypeInfo);
        byte_4CEDF3D = 1;
      }
      v126 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v126 = DataManager_TypeInfo;
      }
      v8->fields._updateMasterResult_5__9 = v126->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0);
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0);
      updateMasterResult_5__9 = v8->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_41919424((NetworkManager_o *)this, method);
          v309 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v309);
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__39_o *)DataManager__updateWebViewData((DataManager_o *)this, 0);
            if ( _4__this )
            {
              v310 = UnityEngine_MonoBehaviour__StartCoroutine_71855340(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0);
              v8->fields.__2__current = (Il2CppObject *)v310;
              v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C7BA8C(v24, (int32_t)v310, v311, v312, v313, v314, v315, v316);
              v31 = 17;
              goto LABEL_426;
            }
          }
        }
        goto LABEL_427;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_427;
        *((_BYTE *)_4__this + 91) = 1;
        v128 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v129 = LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0);
        v130 = (ErrorDialog_ClickDelegate_o *)sub_1C7BD34(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v130, object, Method_ManagementManager_EndLogDialog__, 0);
        if ( !v128 )
          goto LABEL_427;
        *(_QWORD *)&effectDistance.fields.hasValue = 0;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v128,
          (System_String_o *)StringLiteral_1/*""*/,
          v129,
          v130,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0);
        _4__this = object;
        v11 = (const MethodInfo_3A8C5A8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( *((_BYTE *)_4__this + 91) )
        {
          v131 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v131, 0);
          v8->fields.__2__current = (Il2CppObject *)v131;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)v131, v132, v133, v134, v135, v136, v137);
          v31 = 15;
          goto LABEL_426;
        }
        if ( v8->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_355:
          v8->fields._waitForServerTime_5__7 = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._waitForServerTime_5__7, 0, v2, v3, v4, v5, v6, v7);
          v8->fields._wait_5__8 = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__8, 0, v328, v329, v330, v331, v332, v333);
LABEL_387:
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_427;
          DataManager__Initialize((DataManager_o *)this, 0);
          if ( !v8->fields.isReboot && !v8->fields._isCacheCheck_5__3 )
          {
            v8->fields._isCacheCheck_5__3 = 1;
            v370 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v370 = ManagementManager_TypeInfo;
            }
            if ( UnityEngine_PlayerPrefs__HasKey(v370->static_fields->RebootCacheClearKey, 0) )
            {
              v371 = v11;
              v372 = (Il2CppObject *)sub_1C7BD34(ManagementManager___c__DisplayClass39_0_TypeInfo);
              System_Object___ctor(v372, 0);
              v8->fields.__8__1 = (struct ManagementManager___c__DisplayClass39_0_o *)v372;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&v8->fields.__8__1,
                (int32_t)v372,
                v373,
                v374,
                v375,
                v376,
                v377,
                v378);
              if ( !v8->fields.__8__1 )
                goto LABEL_427;
              v8->fields.__8__1->fields = 0;
              v379 = v8;
              v380 = SingletonMonoBehaviour_object___get_Instance(*v11);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v381 = LocalizationManager__Get((System_String_o *)StringLiteral_7479/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0);
              v382 = LocalizationManager__Get((System_String_o *)StringLiteral_7477/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0);
              v383 = LocalizationManager__Get((System_String_o *)StringLiteral_7476/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0);
              v384 = LocalizationManager__Get((System_String_o *)StringLiteral_7475/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0);
              _8__1 = (Il2CppObject *)v8->fields.__8__1;
              v386 = v384;
              v387 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
              CommonConfirmDialog_ClickDelegate___ctor(
                v387,
                _8__1,
                Method_ManagementManager___c__DisplayClass39_0__startCheckAll_b__0__,
                0);
              if ( !v380 )
                goto LABEL_427;
              CommonUI__OpenConfirmDecideDlg(
                (CommonUI_o *)v380,
                v381,
                v382,
                v383,
                v386,
                v387,
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
              _4__this = object;
              v11 = v371;
              v8 = v379;
LABEL_60:
              v88 = v8->fields.__8__1;
              if ( !v88 )
                goto LABEL_427;
              if ( !v88->fields.confirmed )
              {
                v302 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v302, 0);
                v8->fields.__2__current = (Il2CppObject *)v302;
                v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
                sub_1C7BA8C(v24, (int32_t)v302, v303, v304, v305, v306, v307, v308);
                v31 = 8;
                goto LABEL_426;
              }
              if ( v88->fields.isDecide )
              {
                if ( !_4__this )
                  goto LABEL_427;
                ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
              }
              v8->fields.__8__1 = 0;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, 0, v2, v3, v4, v5, v6, v7);
            }
            else
            {
              v398 = ManagementManager_TypeInfo;
              if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                v398 = ManagementManager_TypeInfo;
              }
              UnityEngine_PlayerPrefs__SetInt(v398->static_fields->RebootCacheClearKey, 1, 0);
              UnityEngine_PlayerPrefs__Save(0);
            }
          }
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance(*v11);
          if ( !this )
            goto LABEL_427;
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_427;
          this = (ManagementManager__startCheckAll_d__39_o *)DataManager__readMasterVersion((DataManager_o *)this, 0);
          if ( !_4__this )
            goto LABEL_427;
          v399 = UnityEngine_MonoBehaviour__StartCoroutine_71855340(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   (System_Collections_IEnumerator_o *)this,
                   0);
          v8->fields.__2__current = (Il2CppObject *)v399;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)v399, v400, v401, v402, v403, v404, v405);
          v31 = 9;
          goto LABEL_426;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_427;
      }
      *((_BYTE *)_4__this + 91) = 1;
      v317 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v318 = (Il2CppObject *)_4__this;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v319 = LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
      v320 = (ErrorDialog_ClickDelegate_o *)sub_1C7BD34(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v320, v318, Method_ManagementManager_EndRetryDialog__, 0);
      if ( !v317 )
        goto LABEL_427;
      CommonUI__OpenRetryDialog((CommonUI_o *)v317, (System_String_o *)StringLiteral_1/*""*/, v319, v320, 0, 0);
      _4__this = object;
      v11 = (const MethodInfo_3A8C5A8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_353:
      if ( *((_BYTE *)_4__this + 91) )
      {
        v321 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v321, 0);
        v8->fields.__2__current = (Il2CppObject *)v321;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v321, v322, v323, v324, v325, v326, v327);
        v31 = 16;
        goto LABEL_426;
      }
      goto LABEL_355;
    case 0xF:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_127;
      goto LABEL_427;
    case 0x10:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_427;
      goto LABEL_353;
    case 0x11:
      v8->fields.__2__current = 0;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      LODWORD(v24[-1].fields._ClosedMessage_k__BackingField) = -1;
      sub_1C7BA8C(v24, 0, v2, v3, v4, v5, v6, v7);
      v31 = 18;
      goto LABEL_426;
    case 0x12:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) < 1 )
        goto LABEL_213;
      goto LABEL_137;
    case 0x13:
      p_fields->__1__state = -1;
LABEL_137:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) >= 1 )
      {
        v138 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v138, 0);
        v8->fields.__2__current = (Il2CppObject *)v138;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v138, v139, v140, v141, v142, v143, v144);
        v31 = 19;
        goto LABEL_426;
      }
LABEL_213:
      v8->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_427;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_319:
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_427;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v295 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v295, 0);
          v8->fields.__2__current = (Il2CppObject *)v295;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)v295, v296, v297, v298, v299, v300, v301);
          v31 = 20;
          goto LABEL_426;
        }
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_427;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12639/*"SYSTEM"*/,
          *((_DWORD *)_4__this + 23),
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__getDownloadSize(0) >= 1 )
        {
          v280 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v280 = ManagerConfig_TypeInfo;
          }
          if ( v280->static_fields->UseStandaloneAsset )
          {
            v8->fields._isLoad_5__4 = 1;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm((System_String_o *)StringLiteral_9348/*"NOW_LOADING"*/, 0);
            this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_427;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_333:
            v281 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v281, 0);
            v8->fields.__2__current = (Il2CppObject *)v281;
            v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C7BA8C(v24, (int32_t)v281, v282, v283, v284, v285, v286, v287);
            v31 = 21;
            goto LABEL_426;
          }
LABEL_146:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getDownloadSize(0) >= 1 )
          {
            v145 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v145, 0);
            v8->fields.__2__current = (Il2CppObject *)v145;
            v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C7BA8C(v24, (int32_t)v145, v146, v147, v148, v149, v150, v151);
            v31 = 22;
            goto LABEL_426;
          }
        }
LABEL_334:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__SetOnlineStatus(0);
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_41919424((NetworkManager_o *)this, method);
          v288 = (UnityEngine_WaitForSeconds_o *)sub_1C7BD34(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v288, 0.1, 0);
          v8->fields.__2__current = (Il2CppObject *)v288;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)v288, v289, v290, v291, v292, v293, v294);
          v31 = 23;
          goto LABEL_426;
        }
        goto LABEL_427;
      }
LABEL_216:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_221:
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v259 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v259, 0);
              v8->fields.__2__current = (Il2CppObject *)v259;
              v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C7BA8C(v24, (int32_t)v259, v260, v261, v262, v263, v264, v265);
              v31 = 24;
              goto LABEL_426;
            }
            this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v178 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12639/*"SYSTEM"*/,
                       *((_DWORD *)_4__this + 23),
                       0);
              v179 = UnityEngine_MonoBehaviour__StartCoroutine_71855340(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v178,
                       0);
              v8->fields.__2__current = (Il2CppObject *)v179;
              v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C7BA8C(v24, (int32_t)v179, v180, v181, v182, v183, v184, v185);
              v31 = 25;
              goto LABEL_426;
            }
          }
        }
        goto LABEL_427;
      }
LABEL_226:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__LoadAssetData(0);
LABEL_229:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4CEDF3F )
      {
        sub_1C7BAE8(&LocalizationManager_TypeInfo);
        byte_4CEDF3F = 1;
      }
      v186 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v186 = LocalizationManager_TypeInfo;
      }
      if ( v186->static_fields->isBusySetAssetData )
      {
        v187 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v187, 0);
        v8->fields.__2__current = (Il2CppObject *)v187;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v187, v188, v189, v190, v191, v192, v193);
        v31 = 28;
        goto LABEL_426;
      }
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0);
LABEL_240:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_4CEDF40 )
      {
        sub_1C7BAE8(&FSUtility_TypeInfo);
        byte_4CEDF40 = 1;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (ManagementManager__startCheckAll_d__39_o *)FSUtility_TypeInfo;
      }
      if ( this[1].fields._waitForServerTime_5__7->klass )
      {
        v194 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v194, 0);
        v8->fields.__2__current = (Il2CppObject *)v194;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v194, v195, v196, v197, v198, v199, v200);
        v31 = 29;
        goto LABEL_426;
      }
      if ( v8->fields._readResult_5__2 == 1 )
      {
        if ( !_4__this )
          goto LABEL_427;
        *((_BYTE *)_4__this + 88) = 0;
        v201 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v201,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          v202);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__39_o *)NetworkManager__getRequest_object_(
                                                             v201,
                                                             (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_427;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0);
LABEL_254:
        v203 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v203, 0);
        v8->fields.__2__current = (Il2CppObject *)v203;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v203, v204, v205, v206, v207, v208, v209);
        v31 = 30;
        goto LABEL_426;
      }
LABEL_255:
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__initializeAssetStorage(0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__Initialize(0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__39_o *)SoundManager__get_OverwriteAssetSoundName(0);
      if ( !this )
        goto LABEL_427;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, 0);
LABEL_263:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__IsBusyInitialize(0) )
      {
        v210 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v210, 0);
        v8->fields.__2__current = (Il2CppObject *)v210;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v210, v211, v212, v213, v214, v215, v216);
        v31 = 31;
        goto LABEL_426;
      }
      v8->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_268:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__39_o *)SoundManager__get_OverwriteAssetSoundName(0);
      if ( !this )
        goto LABEL_427;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v8->fields._overrideAssetSoundNameWaitCount_5__5;
        v8->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v218 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v218, 0);
          v8->fields.__2__current = (Il2CppObject *)v218;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)v218, v219, v220, v221, v222, v223, v224);
          v31 = 32;
          goto LABEL_426;
        }
      }
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0);
LABEL_276:
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( LOBYTE(this[8].fields._updateMasterResult_5__9) )
      {
        v225 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v225, 0);
        v8->fields.__2__current = (Il2CppObject *)v225;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v225, v226, v227, v228, v229, v230, v231);
        v31 = 33;
        goto LABEL_426;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initializeAssetStorage(0);
LABEL_282:
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0) )
      {
        v232 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v232, 0);
        v8->fields.__2__current = (Il2CppObject *)v232;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v232, v233, v234, v235, v236, v237, v238);
        v31 = 34;
        goto LABEL_426;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      ScriptManager__Initialize((ScriptManager_o *)this, 0);
LABEL_287:
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( BYTE1(this[6].monitor) )
      {
        v239 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v239, 0);
        v8->fields.__2__current = (Il2CppObject *)v239;
        v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(v24, (int32_t)v239, v240, v241, v242, v243, v244, v245);
        v31 = 35;
        goto LABEL_426;
      }
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0) )
      {
        if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        PurchaseBehaviour__Ready(0);
      }
      if ( !v8->fields._isLoad_5__4 )
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_427;
        this = (ManagementManager__startCheckAll_d__39_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_427;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_360:
          v334 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v334, 0);
          v8->fields.__2__current = (Il2CppObject *)v334;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, (int32_t)v334, v335, v336, v337, v338, v339, v340);
          v31 = 37;
          goto LABEL_426;
        }
LABEL_305:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff((ManagementManager_o *)_4__this, method);
          v8->fields.__2__current = 0;
          v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v24, 0, v253, v254, v255, v256, v257, v258);
          v31 = 38;
          goto LABEL_426;
        }
        goto LABEL_427;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9348/*"NOW_LOADING"*/, 0) )
      {
LABEL_303:
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_427;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
        goto LABEL_305;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__fadeoutBgm(1.0, 0);
      v246 = (UnityEngine_WaitForSeconds_o *)sub_1C7BD34(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v246, 1.0, 0);
      v8->fields.__2__current = (Il2CppObject *)v246;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(v24, (int32_t)v246, v247, v248, v249, v250, v251, v252);
      v31 = 36;
LABEL_426:
      LODWORD(v24[-1].fields._ClosedMessage_k__BackingField) = v31;
      return 1;
    case 0x14:
      p_fields->__1__state = -1;
      goto LABEL_319;
    case 0x15:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( !CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_334;
      goto LABEL_333;
    case 0x16:
      p_fields->__1__state = -1;
      goto LABEL_146;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_216;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_221;
    case 0x19:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) < 1 )
        goto LABEL_226;
      v8->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_4CEDF3E )
      {
        sub_1C7BAE8(&LogoMain_TypeInfo);
        byte_4CEDF3E = 1;
      }
      v152 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v152 = LogoMain_TypeInfo;
      }
      if ( !v152->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9348/*"NOW_LOADING"*/, 0);
      }
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_169:
      v153 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v153, 0);
      v8->fields.__2__current = (Il2CppObject *)v153;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(v24, (int32_t)v153, v154, v155, v156, v157, v158, v159);
      v31 = 26;
      goto LABEL_426;
    case 0x1A:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_314:
      v273 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v273, 0);
      v8->fields.__2__current = (Il2CppObject *)v273;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(v24, (int32_t)v273, v274, v275, v276, v277, v278, v279);
      v31 = 27;
      goto LABEL_426;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_314;
      v160 = Method_ManagementManager__startCheckAll_d__39_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__39_MoveNext__ + 83) & 2) != 0 )
        v160 = (_QWORD *)sub_1C7BB00(Method_ManagementManager__startCheckAll_d__39_MoveNext__);
      v161 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v160, v160[4]);
      OverwriteAssetSoundName__PlaySystemSe(v161, 0, 0, 0);
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      goto LABEL_226;
    case 0x1C:
      p_fields->__1__state = -1;
      goto LABEL_229;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_240;
    case 0x1E:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_427;
      if ( !*((_BYTE *)_4__this + 88) )
        goto LABEL_254;
      goto LABEL_255;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_263;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_268;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_276;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_282;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_287;
    case 0x24:
      p_fields->__1__state = -1;
      goto LABEL_303;
    case 0x25:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_427;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_360;
      v162 = Method_ManagementManager__startCheckAll_d__39_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__39_MoveNext__ + 83) & 2) != 0 )
        v162 = (_QWORD *)sub_1C7BB00(Method_ManagementManager__startCheckAll_d__39_MoveNext__);
      v163 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v162, v162[4]);
      OverwriteAssetSoundName__PlaySystemSe(v163, 0, 0, 0);
      goto LABEL_303;
    case 0x26:
      p_fields->__1__state = -1;
      v164 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v164 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v164->static_fields->PushStateSendedKey,
                                                           0,
                                                           0);
      if ( !(_DWORD)this )
      {
        v166 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v166);
        OptionManager__SetNotiffication(Notiffication, 1, v168);
        v169 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v169 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v169->static_fields->PushStateSendedKey, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      if ( !_4__this )
        goto LABEL_427;
      *((_BYTE *)_4__this + 100) = 1;
      *((_BYTE *)_4__this + 48) = 0;
      ManagementManager__BuildInfoDisp((ManagementManager_o *)_4__this, 1, v165);
      if ( v8->fields.isLogin )
        goto LABEL_211;
      v170 = ManagementManager__CheckMovieResume((ManagementManager_o *)_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v170;
      v24 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(v24, (int32_t)v170, v171, v172, v173, v174, v175, v176);
      v31 = 39;
      goto LABEL_426;
    case 0x27:
      p_fields->__1__state = -1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEB5E7 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEB5E7 = 1;
      }
      this = (ManagementManager__startCheckAll_d__39_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__39_o *)TerminalPramsManager_TypeInfo;
      }
      if ( LOBYTE(this[1].fields._waitForServerTime_5__7[39].monitor) )
      {
        if ( !_4__this )
          goto LABEL_427;
LABEL_211:
        ManagementManager__requestTerminalLogin((ManagementManager_o *)_4__this, method);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_427;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ManagementManager__startCheckAll_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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