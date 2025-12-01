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

  if ( (byte_4CC6B84 & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8057/*"IsNotificationStatusSend"*/);
    sub_1C713B0(&StringLiteral_8069/*"IsReBootCacheClearKey"*/);
    sub_1C713B0(&StringLiteral_21135/*"ja-JP"*/);
    sub_1C713B0(&StringLiteral_25142/*"yyyy年MM月dd日HH時mm分"*/);
    byte_4CC6B84 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8057/*"IsNotificationStatusSend"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8057/*"IsNotificationStatusSend"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_8069/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8069/*"IsReBootCacheClearKey"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->RebootCacheClearKey, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_25142/*"yyyy年MM月dd日HH時mm分"*/;
  v16 = ManagementManager_TypeInfo->static_fields;
  v16->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_25142/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->DATE_TIME_DISP_FORMAT, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_21135/*"ja-JP"*/;
  v24 = ManagementManager_TypeInfo->static_fields;
  v24->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_21135/*"ja-JP"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->DEFAULT_CULTURE_NAME, v23, v25, v26, v27, v28, v29, v30);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6B83 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_4CC6B83 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F640 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  if ( (byte_4CC6B6C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Debug_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_778/*"):"*/);
    sub_1C713B0(&StringLiteral_6756/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_1C713B0(&StringLiteral_741/*"(ratio: "*/);
    byte_4CC6B6C = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6756/*"Firebase.FirebaseApp"*/, 0) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1C71458(string___TypeInfo, 5);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.isInitializingData,
        (int32_t)errorText,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v21 = StringLiteral_741/*"(ratio: "*/;
      v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_741/*"(ratio: "*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->fields.AvalonSceneManager, v21, v15, v16, v17, v18, v19, v20);
      this = (ManagementManager_o *)System_Single__ToString(v22, (const MethodInfo *)&v44);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v14->fields.debugInfoRootObject,
              (int32_t)this,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v35 = StringLiteral_778/*"):"*/,
            v14->fields.statusLabel = (struct UILabel_o *)StringLiteral_778/*"):"*/,
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->fields.statusLabel, v35, v29, v30, v31, v32, v33, v34),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1C71610(this);
      }
      v14->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v14->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v42 = (Il2CppObject *)System_String__Concat_64072256((System_String_array *)v14, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v42, 0);
      return;
    }
LABEL_19:
    sub_1C71608(this, errorText);
  }
  v43 = (Il2CppObject *)System_String__Concat_64031724(errorText, exceptionMessage, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v43, 0);
}


void ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CC6B68 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_4CC6B68 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_3A5F4C4 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
  }
}


void ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4CC6B81 & 1) == 0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC6B81 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0);
  ManagementManager__BuildInfoOff(this, v4);
}


void ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4CC6B80 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC6B80 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0) )
  {
    sub_1C71608(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ManagementManager__CompletionStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4CC6B66 & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager_TypeInfo);
    byte_4CC6B66 = 1;
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

  if ( (byte_4CC6B76 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC6B76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0, 0);
}


void ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4CC6B75 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    byte_4CC6B75 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71517772(0);
}


void ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4CC6B74 & 1) != 0 )
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
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    byte_4CC6B74 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71517772(0);
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

  if ( (byte_4CC6B6D & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C713B0(&StringLiteral_6177/*"ErrorLog: "*/);
    sub_1C713B0(&StringLiteral_55/*"\n StackTrace: "*/);
    byte_4CC6B6D = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v9 = System_String__Concat_64071992(
           (System_String_o *)StringLiteral_6177/*"ErrorLog: "*/,
           condition,
           (System_String_o *)StringLiteral_55/*"\n StackTrace: "*/,
           stackTrace,
           0);
    if ( !Instance )
      sub_1C71608(v9, v10);
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

  if ( (byte_4CC6B6F & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
    byte_4CC6B6F = 1;
  }
  v3 = sub_1C715FC(ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4CC6B7D & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager_TypeInfo);
    byte_4CC6B7D = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4CC6367 )
  {
    sub_1C713B0(&ManagementManager_TypeInfo);
    byte_4CC6367 = 1;
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

  if ( (byte_4CC6B7E & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4CC6B7E = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v5);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0);
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

  if ( (byte_4CC6B82 & 1) == 0 )
  {
    sub_1C713B0(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C713B0(&ManagementManager_TypeInfo);
    byte_4CC6B82 = 1;
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

  if ( (byte_4CC6B67 & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager_TypeInfo);
    byte_4CC6B67 = 1;
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

  if ( (byte_4CC6B70 & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
    byte_4CC6B70 = 1;
  }
  v2 = sub_1C715FC(ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CC6B71 & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
    byte_4CC6B71 = 1;
  }
  v2 = sub_1C715FC(ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
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

  if ( (byte_4CC6B69 & 1) == 0 )
  {
    sub_1C713B0(&AndroidUtil_TypeInfo);
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&UnityGamingServicesBehaviour_var);
    byte_4CC6B69 = 1;
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
    sub_1C71608(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  ManagementManager__createMovieObj(this, v7);
  v9 = ManagementManager__startCheckAll(this, 0, 0, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4CC6B7F & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1C713B0(&UnityEngine_Application_TypeInfo);
    byte_4CC6B7F = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_71517772(0);
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

  if ( (byte_4CC6B7C & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC6B7C = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _40699620; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4CC6B7B & 1) == 0 )
  {
    sub_1C713B0(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    byte_4CC6B7B = 1;
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
  _40699620 = TutorialFlag__Get_40699620(102, 0);
  if ( _40699620 )
  {
LABEL_9:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v9);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C71608(0, v11);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_40699620, v6, v7);
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

  if ( (byte_4CC6B79 & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC6B79 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v6);
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

  if ( (byte_4CC6B78 & 1) == 0 )
  {
    sub_1C713B0(&Method_ManagementManager_callbackTopHome__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    byte_4CC6B78 = 1;
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
  if ( TutorialFlag__Get_40699620(102, 0) )
  {
LABEL_9:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C71608(0, v10);
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

  if ( (byte_4CC6B6A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C713B0(&UnityEngine_GameObject_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_4607/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_1C713B0(&StringLiteral_9183/*"MovieRoot"*/);
    byte_4CC6B6A = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0, 0) )
  {
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4607/*"CommonUI/UI Root/SystemUICamera"*/, 0);
    v6 = (UnityEngine_GameObject_o *)sub_1C715FC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9183/*"MovieRoot"*/, 0);
    if ( !v6
      || (v9 = UnityEngine_GameObject__AddComponent_object_(
                 v6,
                 (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_1C71354(
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
                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v16) )
    {
      sub_1C71608(Component_object, v8);
    }
    AvalonVideoPlayer__initialize(v16, (UnityEngine_Camera_o *)Component_object, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_36395768(v6, gameObject, 0);
  }
}


int32_t ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CC6B64 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CC6B64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v2);
  return HIDWORD(Instance[4].monitor);
}


bool ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4CC6B65 & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager_TypeInfo);
    byte_4CC6B65 = 1;
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

  if ( (byte_4CC6B6B & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&CTouch_TypeInfo);
    sub_1C713B0(&CommonEffectManager_TypeInfo);
    sub_1C713B0(&FirebaseScript_TypeInfo);
    sub_1C713B0(&System_GC_TypeInfo);
    sub_1C713B0(&ManagementManager_TypeInfo);
    sub_1C713B0(&MyRoomParamsManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CC6B6B = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
      || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
LABEL_32:
      sub_1C71608(Instance, v9);
    }
    PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)Instance, 0);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0);
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    MyRoomParamsManager__Reboot(0);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_1C71608(0, v11);
    AdManager__Initialize((AdManager_o *)v10, 2, 0);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0);
    v13 = ManagementManager__startCheckAll(this, 1, isLogin, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v13, 0);
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

  if ( (byte_4CC6B77 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ManagementManager_callbackTopLogin__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4CC6B77 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C715FC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v5);
  if ( !Instance )
    sub_1C71608(v6, v7);
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

  if ( (byte_4CC6B7A & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4CC6B7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C715FC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v5);
  if ( !Instance )
    sub_1C71608(v6, v7);
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
  sub_1C71354(
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

  if ( (byte_4CC6B6E & 1) == 0 )
  {
    sub_1C713B0(&ManagementManager__startCheckAll_d__35_TypeInfo);
    byte_4CC6B6E = 1;
  }
  v7 = isLogin;
  v8 = sub_1C715FC(ManagementManager__startCheckAll_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v8 + 40), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6B72 & 1) == 0 )
  {
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC6B72 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
}


void ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4CC6B73 & 1) == 0 )
  {
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&ScrTerminalListTop_TypeInfo);
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC6B73 = 1;
  }
  MovieFileMerge__Delete_40765236(0);
  v2 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->NOTICE_LAST_MODIFIED_KEY, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC43CB )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC43CB = 1;
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


void ManagementManager__InitializeAdManagerAndFirebase_d__36___ctor(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__InitializeAdManagerAndFirebase_d__36__MoveNext(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
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

  if ( (byte_4CC6B86 & 1) == 0 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C713B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CC6B86 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C71608(0, v14);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0);
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v15 )
      sub_1C71608(0, v16);
    AdManager__Initialize((AdManager_o *)v15, 1, 0);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0);
    if ( !_4__this )
      sub_1C71608(v17, v18);
    v19 = ManagementManager__SetupFirebaseAppCheck(v17, v18);
    started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_71709800(_4__this, v19, 0);
    v22 = ManagementManager__SetupFirebaseCrashlytics(started, v21);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800(_4__this, v22, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_IEnumerator_Reset(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_IEnumerator_get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__InitializeAdManagerAndFirebase_d__36__System_IDisposable_Dispose(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager__SetupFirebaseAppCheck_d__37___ctor(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__SetupFirebaseAppCheck_d__37__MoveNext(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
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

  if ( (byte_4CC6B87 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&FirebaseScript_TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&StringLiteral_811/*", AppCheckErrorMessage: "*/);
    sub_1C713B0(&StringLiteral_5932/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/);
    sub_1C713B0(&StringLiteral_7993/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/);
    byte_4CC6B87 = 1;
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
      if ( !byte_4CC6C80 )
      {
        sub_1C713B0(&FirebaseScript_TypeInfo);
        byte_4CC6C80 = 1;
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
      if ( !byte_4CC6C81 )
      {
        sub_1C713B0(&FirebaseScript_TypeInfo);
        byte_4CC6C81 = 1;
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
        sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
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
        if ( !byte_4CC6C82 )
        {
          sub_1C713B0(&FirebaseScript_TypeInfo);
          byte_4CC6C82 = 1;
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
        if ( !byte_4CC1129 )
        {
          sub_1C713B0(&FirebaseScript_TypeInfo);
          byte_4CC1129 = 1;
        }
        v17 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v17 = FirebaseScript_TypeInfo;
        }
        if ( v17->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        v18 = (System_String_o *)StringLiteral_7993/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        if ( v17->_2.cctor_finished )
          goto LABEL_73;
LABEL_72:
        j_il2cpp_runtime_class_init_0(v17);
LABEL_73:
        if ( !byte_4CC6C83 )
        {
          sub_1C713B0(&FirebaseScript_TypeInfo);
          byte_4CC6C83 = 1;
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
      if ( !byte_4CC6B5B )
      {
        sub_1C713B0(&FirebaseScript_TypeInfo);
        byte_4CC6B5B = 1;
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
        sub_1C71354((GrandQuestFolderBoardItem_o *)v13, 0, v2, v3, v4, v5, v6, v7);
        *((_DWORD *)v13 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4CC6C82 )
      {
        sub_1C713B0(&FirebaseScript_TypeInfo);
        byte_4CC6C82 = 1;
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
      if ( !byte_4CC6C84 )
      {
        sub_1C713B0(&FirebaseScript_TypeInfo);
        byte_4CC6C84 = 1;
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
      v18 = System_String__Format_64073032((System_String_o *)StringLiteral_5932/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v27, v28, 0);
      if ( (v25 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4CC6C85 )
        {
          sub_1C713B0(&FirebaseScript_TypeInfo);
          byte_4CC6C85 = 1;
        }
        v29 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v29 = FirebaseScript_TypeInfo;
        }
        v18 = System_String__Concat_64069988(
                v18,
                (System_String_o *)StringLiteral_811/*", AppCheckErrorMessage: "*/,
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


Il2CppObject *ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ManagementManager__SetupFirebaseAppCheck_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__SetupFirebaseAppCheck_d__37__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager__SetupFirebaseCrashlytics_d__38___ctor(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__SetupFirebaseCrashlytics_d__38__MoveNext(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
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

  if ( (byte_4CC6B88 & 1) == 0 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4CC6B88 = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4CC6C81 )
  {
    sub_1C713B0(&FirebaseScript_TypeInfo);
    byte_4CC6C81 = 1;
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
    if ( !byte_4CC1129 )
    {
      sub_1C713B0(&FirebaseScript_TypeInfo);
      byte_4CC1129 = 1;
    }
    v10 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v10 = FirebaseScript_TypeInfo;
    }
    if ( v10->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_1C71608(0, v12);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0);
    }
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ManagementManager__SetupFirebaseCrashlytics_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__SetupFirebaseCrashlytics_d__38__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager___c__DisplayClass35_0___ctor(
        ManagementManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ManagementManager___c__DisplayClass35_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass35_0_o *this,
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

  if ( (byte_4CC6B85 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__);
    sub_1C713B0(&ManagementManager___c__DisplayClass35_1_TypeInfo);
    byte_4CC6B85 = 1;
  }
  v5 = sub_1C715FC(ManagementManager___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__,
          0),
        !Instance) )
  {
    sub_1C71608(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v15, 0);
}


void ManagementManager___c__DisplayClass35_1___ctor(
        ManagementManager___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ManagementManager___c__DisplayClass35_1___startCheckAll_b__1(
        ManagementManager___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  struct ManagementManager___c__DisplayClass35_0_o *CS___8__locals1; // x8
  bool flag; // w9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C71608(this, method);
  flag = this->fields.flag;
  CS___8__locals1->fields.confirmed = 1;
  CS___8__locals1->fields.isDecide = flag;
}


void ManagementManager__startCheckAll_d__35___ctor(
        ManagementManager__startCheckAll_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__startCheckAll_d__35__MoveNext(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ManagementManager__startCheckAll_d__35_o *v8; // x19
  ManagementManager__startCheckAll_d__35_Fields *p_fields; // x8
  AndroidUtil_c **v10; // x26
  const MethodInfo_3A5F158 **v11; // x23
  void *_4__this; // x22
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v22; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int v30; // w8
  System_Collections_IEnumerator_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  OptionManager_c *v38; // x0
  const MethodInfo *v39; // x0
  const MethodInfo *v40; // x0
  UnityEngine_Application_LogCallback_o *v41; // x21
  UnityEngine_WaitForEndOfFrame_o *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  ManagementManager__startCheckAll_d__35_o *v55; // x21
  int32_t v56; // w1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  EncryptedPlayerPrefs_c *v77; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  const MethodInfo *v86; // x1
  ManagementManager__startCheckAll_d__35_o *v87; // x29
  struct ManagementManager___c__DisplayClass35_0_o *v88; // x8
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
  UnityEngine_Coroutine_o *v111; // x0
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
  GrandQuestFolderBoardItem_o *v132; // x29
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  int v139; // w8
  UnityEngine_WaitForEndOfFrame_o *v140; // x20
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  LogoMain_c *v154; // x0
  UnityEngine_WaitForEndOfFrame_o *v155; // x20
  int32_t v156; // w2
  int32_t v157; // w3
  System_String_o *v158; // x4
  int32_t v159; // w5
  int64_t v160; // x6
  System_String_o *v161; // x7
  _QWORD *v162; // x0
  System_Reflection_MethodBase_o *v163; // x0
  const MethodInfo *v164; // x3
  _QWORD *v165; // x0
  System_Reflection_MethodBase_o *v166; // x0
  const MethodInfo *v167; // x3
  ManagementManager_c *v168; // x0
  const MethodInfo *v169; // x2
  OptionManager_c *v170; // x0
  bool Notiffication; // w0
  const MethodInfo *v172; // x2
  ManagementManager_c *v173; // x0
  const MethodInfo *v174; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v176; // x0
  UnityEngine_Coroutine_o *v177; // x0
  int32_t v178; // w2
  int32_t v179; // w3
  System_String_o *v180; // x4
  int32_t v181; // w5
  int64_t v182; // x6
  System_String_o *v183; // x7
  LocalizationManager_c *v184; // x0
  UnityEngine_WaitForEndOfFrame_o *v185; // x20
  int32_t v186; // w2
  int32_t v187; // w3
  System_String_o *v188; // x4
  int32_t v189; // w5
  int64_t v190; // x6
  System_String_o *v191; // x7
  UnityEngine_WaitForEndOfFrame_o *v192; // x20
  int32_t v193; // w2
  int32_t v194; // w3
  System_String_o *v195; // x4
  int32_t v196; // w5
  int64_t v197; // x6
  System_String_o *v198; // x7
  NetworkManager_ResultCallbackFunc_o *v199; // x21
  const MethodInfo *v200; // x3
  UnityEngine_WaitForEndOfFrame_o *v201; // x20
  int32_t v202; // w2
  int32_t v203; // w3
  System_String_o *v204; // x4
  int32_t v205; // w5
  int64_t v206; // x6
  System_String_o *v207; // x7
  UnityEngine_WaitForEndOfFrame_o *v208; // x20
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v216; // x20
  int32_t v217; // w2
  int32_t v218; // w3
  System_String_o *v219; // x4
  int32_t v220; // w5
  int64_t v221; // x6
  System_String_o *v222; // x7
  UnityEngine_WaitForEndOfFrame_o *v223; // x20
  int32_t v224; // w2
  int32_t v225; // w3
  System_String_o *v226; // x4
  int32_t v227; // w5
  int64_t v228; // x6
  System_String_o *v229; // x7
  UnityEngine_WaitForEndOfFrame_o *v230; // x20
  int32_t v231; // w2
  int32_t v232; // w3
  System_String_o *v233; // x4
  int32_t v234; // w5
  int64_t v235; // x6
  System_String_o *v236; // x7
  UnityEngine_WaitForEndOfFrame_o *v237; // x20
  int32_t v238; // w2
  int32_t v239; // w3
  System_String_o *v240; // x4
  int32_t v241; // w5
  int64_t v242; // x6
  System_String_o *v243; // x7
  UnityEngine_WaitForSeconds_o *v244; // x20
  int32_t v245; // w2
  int32_t v246; // w3
  System_String_o *v247; // x4
  int32_t v248; // w5
  int64_t v249; // x6
  System_String_o *v250; // x7
  int32_t v251; // w2
  int32_t v252; // w3
  System_String_o *v253; // x4
  int32_t v254; // w5
  int64_t v255; // x6
  System_String_o *v256; // x7
  UnityEngine_WaitForEndOfFrame_o *v257; // x20
  int32_t v258; // w2
  int32_t v259; // w3
  System_String_o *v260; // x4
  int32_t v261; // w5
  int64_t v262; // x6
  System_String_o *v263; // x7
  UnityEngine_WaitForEndOfFrame_o *v264; // x20
  int32_t v265; // w2
  int32_t v266; // w3
  System_String_o *v267; // x4
  int32_t v268; // w5
  int64_t v269; // x6
  System_String_o *v270; // x7
  UnityEngine_WaitForEndOfFrame_o *v271; // x20
  int32_t v272; // w2
  int32_t v273; // w3
  System_String_o *v274; // x4
  int32_t v275; // w5
  int64_t v276; // x6
  System_String_o *v277; // x7
  ManagerConfig_c *v278; // x0
  UnityEngine_WaitForEndOfFrame_o *v279; // x20
  int32_t v280; // w2
  int32_t v281; // w3
  System_String_o *v282; // x4
  int32_t v283; // w5
  int64_t v284; // x6
  System_String_o *v285; // x7
  UnityEngine_WaitForSeconds_o *v286; // x20
  int32_t v287; // w2
  int32_t v288; // w3
  System_String_o *v289; // x4
  int32_t v290; // w5
  int64_t v291; // x6
  System_String_o *v292; // x7
  UnityEngine_WaitForEndOfFrame_o *v293; // x20
  int32_t v294; // w2
  int32_t v295; // w3
  System_String_o *v296; // x4
  int32_t v297; // w5
  int64_t v298; // x6
  System_String_o *v299; // x7
  UnityEngine_WaitForEndOfFrame_o *v300; // x20
  int32_t v301; // w2
  int32_t v302; // w3
  System_String_o *v303; // x4
  int32_t v304; // w5
  int64_t v305; // x6
  System_String_o *v306; // x7
  ManagementManager_c *v307; // x0
  UnityEngine_Coroutine_o *v308; // x0
  int32_t v309; // w2
  int32_t v310; // w3
  System_String_o *v311; // x4
  int32_t v312; // w5
  int64_t v313; // x6
  System_String_o *v314; // x7
  Il2CppObject *v315; // x21
  Il2CppObject *v316; // x20
  System_String_o *v317; // x22
  ErrorDialog_ClickDelegate_o *v318; // x23
  UnityEngine_WaitForEndOfFrame_o *v319; // x20
  int32_t v320; // w2
  int32_t v321; // w3
  System_String_o *v322; // x4
  int32_t v323; // w5
  int64_t v324; // x6
  System_String_o *v325; // x7
  int32_t v326; // w2
  int32_t v327; // w3
  System_String_o *v328; // x4
  int32_t v329; // w5
  int64_t v330; // x6
  System_String_o *v331; // x7
  UnityEngine_WaitForEndOfFrame_o *v332; // x20
  int32_t v333; // w2
  int32_t v334; // w3
  System_String_o *v335; // x4
  int32_t v336; // w5
  int64_t v337; // x6
  System_String_o *v338; // x7
  UnityEngine_WaitForEndOfFrame_o *v339; // x20
  int32_t v340; // w2
  int32_t v341; // w3
  System_String_o *v342; // x4
  int32_t v343; // w5
  int64_t v344; // x6
  System_String_o *v345; // x7
  System_Action_object__o *v346; // x21
  System_Action_object__o *v347; // x22
  System_Action_string__o *v348; // x2
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v352; // x0
  ManagerConfig_c *v353; // x0
  Il2CppObject *v354; // x24
  AndroidUtil_c **v355; // x20
  const MethodInfo_3A5F158 **v356; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v358; // x22
  ErrorDialog_ClickDelegate_o *v359; // x23
  UnityEngine_WaitForEndOfFrame_o *v360; // x20
  int32_t v361; // w2
  int32_t v362; // w3
  System_String_o *v363; // x4
  int32_t v364; // w5
  int64_t v365; // x6
  System_String_o *v366; // x7
  ManagementManager_c *v367; // x0
  const MethodInfo_3A5F158 **v368; // x28
  Il2CppObject *v369; // x21
  int32_t v370; // w2
  int32_t v371; // w3
  System_String_o *v372; // x4
  int32_t v373; // w5
  int64_t v374; // x6
  System_String_o *v375; // x7
  Il2CppObject *v376; // x21
  System_String_o *v377; // x22
  System_String_o *v378; // x24
  System_String_o *v379; // x25
  System_String_o *v380; // x0
  Il2CppObject *_8__1; // x27
  System_String_o *v382; // x23
  CommonConfirmDialog_ClickDelegate_o *v383; // x26
  Il2CppObject *v384; // x21
  System_String_o *v385; // x21
  System_String_o *DispFriendCode; // x22
  Il2CppObject *v387; // x22
  System_String_o *v388; // x23
  System_String_o *v389; // x0
  System_String_o *v390; // x19
  Il2CppObject *v391; // x2
  System_String_o *v392; // x21
  ErrorDialog_ClickDelegate_o *v393; // x23
  ManagementManager_c *v394; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v396; // w2
  int32_t v397; // w3
  System_String_o *v398; // x4
  int32_t v399; // w5
  int64_t v400; // x6
  System_String_o *v401; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-D0h]
  ManagementManager__startCheckAll_d__35_o *v403; // [xsp+48h] [xbp-88h]
  Il2CppObject *object; // [xsp+50h] [xbp-80h]
  System_Enum_o v405; // [xsp+58h] [xbp-78h] BYREF
  int32_t readResult_5__2; // [xsp+68h] [xbp-68h]

  v8 = this;
  if ( (byte_4CC6B89 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_string__TypeInfo);
    sub_1C713B0(&AndroidUtil_TypeInfo);
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&CommonServicePluginScript_TypeInfo);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Application_LogCallback_TypeInfo);
    sub_1C713B0(&LogoMain_TypeInfo);
    sub_1C713B0(&Method_ManagementManager_EndLogDialog__);
    sub_1C713B0(&Method_ManagementManager_EndQuitDialog__);
    sub_1C713B0(&Method_ManagementManager_EndRetryDialog__);
    sub_1C713B0(&Method_ManagementManager_HandleLog__);
    sub_1C713B0(&Method_ManagementManager_NotifyRequestPermissionsDenied__);
    sub_1C713B0(&Method_ManagementManager_NotifyRequestPermissionsGranted__);
    sub_1C713B0(&Method_ManagementManager_callbackAccountRegist__);
    sub_1C713B0(&Method_ManagementManager_callbackTopGameData__);
    sub_1C713B0(&ManagementManager_TypeInfo);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_1C713B0(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    sub_1C713B0(&NetworkManager_ReadResult_TypeInfo);
    sub_1C713B0(&ResolutionManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    sub_1C713B0(&SignedData_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__);
    sub_1C713B0(&ManagementManager___c__DisplayClass35_0_TypeInfo);
    sub_1C713B0(&Method_ManagementManager__startCheckAll_d__35_MoveNext__);
    sub_1C713B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C713B0(&StringLiteral_7457/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_9324/*"NOW_LOADING"*/);
    sub_1C713B0(&StringLiteral_9252/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C713B0(&StringLiteral_6384/*"F39UThNh"*/);
    sub_1C713B0(&StringLiteral_7460/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_1C713B0(&StringLiteral_7458/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_1C713B0(&StringLiteral_7456/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_5079/*"DataServerFolderName"*/);
    sub_1C713B0(&StringLiteral_16784/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_1C713B0(&StringLiteral_9260/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_9253/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_1C713B0(&StringLiteral_12592/*"SYSTEM"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_20974/*"ioqrk4Om"*/);
    sub_1C713B0(&StringLiteral_1371/*"2pC0bIYM"*/);
    sub_1C713B0(&StringLiteral_9254/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__35_o *)sub_1C713B0(&StringLiteral_9261/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4CC6B89 = 1;
  }
  p_fields = &v8->fields;
  v403 = v8;
  v10 = &AndroidUtil_TypeInfo;
  v11 = (const MethodInfo_3A5F158 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
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
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, (int32_t)v14, v15, v16, v17, v18, v19, v20);
      result = 1;
      v8->fields.__1__state = 1;
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
        goto LABEL_420;
      v22 = ManagementManager__InitializeAdManagerAndFirebase((ManagementManager_o *)_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354(p__2__current, (int32_t)v22, v24, v25, v26, v27, v28, v29);
      v30 = 2;
      goto LABEL_376;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      v31 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v8->fields.__2__current = (Il2CppObject *)v31;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v403->fields.__2__current, (int32_t)v31, v32, v33, v34, v35, v36, v37);
      v30 = 3;
      goto LABEL_376;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      AssetManager__Initialize((AssetManager_o *)this, 0);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0);
      v38 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v38);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0);
      OptionManager__AdjustScenarioSpeedSetting(v39);
      OptionManager__AdjustVolume(v40);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0);
      UnityEngine_Input__set_multiTouchEnabled(1, 0);
      if ( v8->fields.isReboot )
        goto LABEL_31;
      v41 = (UnityEngine_Application_LogCallback_o *)sub_1C715FC(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(v41, (Il2CppObject *)_4__this, Method_ManagementManager_HandleLog__, 0);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__add_logMessageReceived(v41, 0);
      if ( v8->fields.isReboot )
      {
LABEL_31:
        v42 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v42, 0);
        v8->fields.__2__current = (Il2CppObject *)v42;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
          (int32_t)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        v30 = 4;
        goto LABEL_376;
      }
LABEL_33:
      this = (ManagementManager__startCheckAll_d__35_o *)sub_1C71458(string___TypeInfo, 3);
      if ( !this )
        goto LABEL_420;
      v55 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v56 = StringLiteral_1371/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1371/*"2pC0bIYM"*/,
            sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.isReboot, v56, v49, v50, v51, v52, v53, v54),
            LODWORD(v55->fields.__2__current) <= 1)
        || (v63 = StringLiteral_6384/*"F39UThNh"*/,
            v55->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6384/*"F39UThNh"*/,
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v55->fields.__4__this, v63, v57, v58, v59, v60, v61, v62),
            LODWORD(v55->fields.__2__current) <= 2) )
      {
        sub_1C71610(this);
      }
      v70 = StringLiteral_20974/*"ioqrk4Om"*/;
      v55->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)StringLiteral_20974/*"ioqrk4Om"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v55->fields.__8__1, v70, v64, v65, v66, v67, v68, v69);
      v77 = EncryptedPlayerPrefs_TypeInfo;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v77 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v77->static_fields;
      static_fields->keys = (struct System_String_array *)v55;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->keys, (int32_t)v55, v71, v72, v73, v74, v75, v76);
      if ( !v8->fields.isReboot )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)AndroidPermissionManager__EnabledRuntimePermission(0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_44;
        if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)AndroidUtil__get_apiLevel(0);
        if ( (int)this >= 33 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)AndroidPermissionManager__CheckPermission(
                                                               (System_String_o *)StringLiteral_16784/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_420;
            *((_BYTE *)_4__this + 81) = 1;
            v346 = (System_Action_object__o *)sub_1C715FC(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v346,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0);
            v347 = (System_Action_object__o *)sub_1C715FC(System_Action_string__TypeInfo);
            System_Action_object____ctor(v347, object, Method_ManagementManager_NotifyRequestPermissionsDenied__, 0);
            v348 = (System_Action_string__o *)v347;
            _4__this = object;
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_16784/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v346,
              v348,
              0,
              0);
LABEL_47:
            if ( *((_BYTE *)_4__this + 81) )
            {
              v79 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v79, 0);
              v8->fields.__2__current = (Il2CppObject *)v79;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C71354(p__2__current, (int32_t)v79, v80, v81, v82, v83, v84, v85);
              v30 = 5;
              goto LABEL_376;
            }
          }
        }
        else
        {
LABEL_44:
          if ( !_4__this )
            goto LABEL_420;
          *((_BYTE *)_4__this + 80) = 1;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0);
          v339 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v339, 0);
          v8->fields.__2__current = (Il2CppObject *)v339;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(p__2__current, (int32_t)v339, v340, v341, v342, v343, v344, v345);
          v30 = 6;
          goto LABEL_376;
        }
LABEL_420:
        sub_1C71608(this, method);
      }
LABEL_50:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
      v8->fields._readResult_5__2 = (int)this;
      if ( !_4__this )
        goto LABEL_420;
      this = (ManagementManager__startCheckAll_d__35_o *)*((_QWORD *)_4__this + 6);
      if ( !this )
        goto LABEL_420;
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_420;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      ManagementManager__BuildInfoOff((ManagementManager_o *)_4__this, v86);
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
        v352 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0);
        if ( FreeSize < v352 )
          FreeSize = v352;
        if ( (FreeSize & 0x8000000000000000LL) == 0 )
        {
          v353 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v353 = ManagerConfig_TypeInfo;
          }
          _4__this = object;
          if ( FreeSize >= v353->static_fields->LIMIT_FREE_SIZE )
            break;
        }
        *((_BYTE *)_4__this + 75) = 1;
        v354 = (Il2CppObject *)_4__this;
        v355 = v10;
        v356 = v11;
        Instance = SingletonMonoBehaviour_object___get_Instance(*v11);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v358 = LocalizationManager__Get((System_String_o *)StringLiteral_9252/*"NETWORK_ERROR_DISK_FULL"*/, 0);
        v359 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v359, v354, Method_ManagementManager_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_420;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v358, v359, 0, 0);
        _4__this = object;
        v11 = v356;
        v10 = v355;
LABEL_374:
        if ( *((_BYTE *)_4__this + 75) )
        {
          v360 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v360, 0);
          v8->fields.__2__current = (Il2CppObject *)v360;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
            (int32_t)v360,
            v361,
            v362,
            v363,
            v364,
            v365,
            v366);
          v30 = 7;
          goto LABEL_376;
        }
      }
      v87 = v8;
      if ( v8->fields._readResult_5__2 < 2u )
      {
        v8->fields._isCacheCheck_5__3 = 0;
LABEL_380:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        DataManager__Initialize((DataManager_o *)this, 0);
        if ( !v87->fields.isReboot && !v87->fields._isCacheCheck_5__3 )
        {
          v87->fields._isCacheCheck_5__3 = 1;
          v367 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v367 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v367->static_fields->RebootCacheClearKey, 0) )
          {
            v368 = v11;
            v369 = (Il2CppObject *)sub_1C715FC(ManagementManager___c__DisplayClass35_0_TypeInfo);
            System_Object___ctor(v369, 0);
            v87->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)v369;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v87->fields.__8__1,
              (int32_t)v369,
              v370,
              v371,
              v372,
              v373,
              v374,
              v375);
            if ( !v87->fields.__8__1 )
              goto LABEL_420;
            v87->fields.__8__1->fields = 0;
            v376 = SingletonMonoBehaviour_object___get_Instance(*v11);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v377 = LocalizationManager__Get((System_String_o *)StringLiteral_7460/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0);
            v378 = LocalizationManager__Get((System_String_o *)StringLiteral_7458/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0);
            v379 = LocalizationManager__Get((System_String_o *)StringLiteral_7457/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0);
            v380 = LocalizationManager__Get((System_String_o *)StringLiteral_7456/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0);
            _8__1 = (Il2CppObject *)v87->fields.__8__1;
            v382 = v380;
            v383 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v383,
              _8__1,
              Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__,
              0);
            if ( !v376 )
              goto LABEL_420;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v376,
              v377,
              v378,
              v379,
              v382,
              v383,
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
            v11 = v368;
LABEL_60:
            v88 = v87->fields.__8__1;
            if ( !v88 )
              goto LABEL_420;
            if ( !v88->fields.confirmed )
            {
              v300 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v300, 0);
              v87->fields.__2__current = (Il2CppObject *)v300;
              v132 = (GrandQuestFolderBoardItem_o *)&v87->fields.__2__current;
              sub_1C71354(v132, (int32_t)v300, v301, v302, v303, v304, v305, v306);
              v139 = 8;
              goto LABEL_419;
            }
            if ( v88->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_420;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v87->fields.__8__1 = 0;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v87->fields.__8__1, 0, v2, v3, v4, v5, v6, v7);
          }
          else
          {
            v394 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v394 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v394->static_fields->RebootCacheClearKey, 1, 0);
            UnityEngine_PlayerPrefs__Save(0);
          }
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance(*v11);
        if ( !this )
          goto LABEL_420;
        CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)DataManager__readMasterVersion((DataManager_o *)this, 0);
        if ( !_4__this )
          goto LABEL_420;
        started = UnityEngine_MonoBehaviour__StartCoroutine_71709800(
                    (UnityEngine_MonoBehaviour_o *)_4__this,
                    (System_Collections_IEnumerator_o *)this,
                    0);
        v87->fields.__2__current = (Il2CppObject *)started;
        v132 = (GrandQuestFolderBoardItem_o *)&v87->fields.__2__current;
        sub_1C71354(v132, (int32_t)started, v396, v397, v398, v399, v400, v401);
        v139 = 9;
        goto LABEL_419;
      }
      v384 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v385 = LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
      }
      else
      {
        if ( !(*v10)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v10);
        DispFriendCode = AndroidUtil__GetFriendCodeFromOldDat(0);
        if ( System_String__IsNullOrEmpty(DispFriendCode, 0) )
          goto LABEL_404;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v385 = LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
      }
      v384 = (Il2CppObject *)System_String__Format(v385, (Il2CppObject *)DispFriendCode, 0);
LABEL_404:
      v387 = SingletonMonoBehaviour_object___get_Instance(*v11);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v388 = LocalizationManager__Get((System_String_o *)StringLiteral_9254/*"NETWORK_ERROR_READ_AUTH"*/, 0);
      v405.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v405.monitor = (void *)-1LL;
      readResult_5__2 = v8->fields._readResult_5__2;
      v389 = System_Enum__ToString(&v405, 0);
      v390 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v389 )
        v391 = (Il2CppObject *)v389;
      else
        v391 = (Il2CppObject *)StringLiteral_1/*""*/;
      v392 = System_String__Format_64073032(v388, v384, v391, 0);
      v393 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v393, object, Method_ManagementManager_EndQuitDialog__, 0);
      if ( !v387 )
        goto LABEL_420;
      CommonUI__OpenErrorDialog((CommonUI_o *)v387, v390, v392, v393, 0, 0);
      return 0;
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_33;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_47;
      goto LABEL_420;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_50;
    case 7:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      goto LABEL_374;
    case 8:
      v87 = v8;
      p_fields->__1__state = -1;
      goto LABEL_60;
    case 9:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4CC6C86 )
      {
        sub_1C713B0(&DataManager_TypeInfo);
        byte_4CC6C86 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)DataManager_TypeInfo;
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
        goto LABEL_420;
      *((_BYTE *)_4__this + 73) = 0;
      v90 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v90,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v91);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v90,
                                                           (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_420;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v92 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v92, 0);
      v8->fields._waitForServerTime_5__7 = v92;
      sub_1C71354(
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
        goto LABEL_420;
      if ( !*((_BYTE *)_4__this + 73) )
      {
LABEL_86:
        waitForServerTime_5__7 = (Il2CppObject *)v8->fields._waitForServerTime_5__7;
        v8->fields.__2__current = waitForServerTime_5__7;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(p__2__current, (int32_t)waitForServerTime_5__7, v2, v3, v4, v5, v6, v7);
        v30 = 10;
        goto LABEL_376;
      }
      *((_BYTE *)_4__this + 73) = 0;
      v99 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v99,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v100);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v99,
                                                           (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_420;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v101 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v101, 0);
      v8->fields._wait_5__8 = v101;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__8,
        (int32_t)v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
LABEL_203:
      wait_5__8 = (Il2CppObject *)v8->fields._wait_5__8;
      v8->fields.__2__current = wait_5__8;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354(p__2__current, (int32_t)wait_5__8, v2, v3, v4, v5, v6, v7);
      v30 = 11;
      goto LABEL_376;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      if ( !*((_BYTE *)_4__this + 73) )
        goto LABEL_203;
      v109 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CC4939 )
      {
        sub_1C713B0(&NetworkManager_TypeInfo);
        byte_4CC4939 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      }
      if ( !v109 )
        goto LABEL_420;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v109,
        (System_String_o *)StringLiteral_5079/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0);
      if ( v8->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0);
          v111 = UnityEngine_MonoBehaviour__StartCoroutine_71709800(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   MasterData,
                   0);
          v8->fields.__2__current = (Il2CppObject *)v111;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
            (int32_t)v111,
            v112,
            v113,
            v114,
            v115,
            v116,
            v117);
          v30 = 12;
          goto LABEL_376;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v8->fields.isReboot,
                                                               0);
          if ( _4__this )
          {
            v119 = UnityEngine_MonoBehaviour__StartCoroutine_71709800(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0);
            v8->fields.__2__current = (Il2CppObject *)v119;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C71354(p__2__current, (int32_t)v119, v120, v121, v122, v123, v124, v125);
            v30 = 14;
            goto LABEL_376;
          }
        }
      }
      goto LABEL_420;
    case 0xC:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4CC6C87 )
      {
        sub_1C713B0(&DataManager_TypeInfo);
        byte_4CC6C87 = 1;
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
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      v264 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v264, 0);
      v8->fields.__2__current = (Il2CppObject *)v264;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
        (int32_t)v264,
        v265,
        v266,
        v267,
        v268,
        v269,
        v270);
      v30 = 13;
      goto LABEL_376;
    case 0xD:
      v87 = v8;
      p_fields->__1__state = -1;
      goto LABEL_380;
    case 0xE:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4CC6C88 )
      {
        sub_1C713B0(&DataManager_TypeInfo);
        byte_4CC6C88 = 1;
      }
      v87 = v8;
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
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0);
      updateMasterResult_5__9 = v8->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        NetworkManager__SetServerSetting_41619596((NetworkManager_o *)this, method);
        v307 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        ManagementManager__RebootCacheClear((const MethodInfo *)v307);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateWebViewData((DataManager_o *)this, 0);
        if ( !_4__this )
          goto LABEL_420;
        v308 = UnityEngine_MonoBehaviour__StartCoroutine_71709800(
                 (UnityEngine_MonoBehaviour_o *)_4__this,
                 (System_Collections_IEnumerator_o *)this,
                 0);
        v8->fields.__2__current = (Il2CppObject *)v308;
        v132 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current,
          (int32_t)v308,
          v309,
          v310,
          v311,
          v312,
          v313,
          v314);
        v139 = 17;
LABEL_419:
        LODWORD(v132[-1].fields._ClosedMessage_k__BackingField) = v139;
        return 1;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_420;
        *((_BYTE *)_4__this + 75) = 1;
        v128 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v129 = LocalizationManager__Get((System_String_o *)StringLiteral_9260/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0);
        v130 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v130, object, Method_ManagementManager_EndLogDialog__, 0);
        if ( !v128 )
          goto LABEL_420;
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
        v11 = (const MethodInfo_3A5F158 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( *((_BYTE *)_4__this + 75) )
        {
          v131 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v131, 0);
          v87->fields.__2__current = (Il2CppObject *)v131;
          v132 = (GrandQuestFolderBoardItem_o *)&v87->fields.__2__current;
          sub_1C71354(v132, (int32_t)v131, v133, v134, v135, v136, v137, v138);
          v139 = 15;
          goto LABEL_419;
        }
        if ( v87->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_346:
          v87->fields._waitForServerTime_5__7 = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v87->fields._waitForServerTime_5__7, 0, v2, v3, v4, v5, v6, v7);
          v87->fields._wait_5__8 = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v87->fields._wait_5__8, 0, v326, v327, v328, v329, v330, v331);
          goto LABEL_380;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_420;
      }
      *((_BYTE *)_4__this + 75) = 1;
      v315 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v316 = (Il2CppObject *)_4__this;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v317 = LocalizationManager__Get((System_String_o *)StringLiteral_9261/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
      v318 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v318, v316, Method_ManagementManager_EndRetryDialog__, 0);
      if ( !v315 )
        goto LABEL_420;
      CommonUI__OpenRetryDialog((CommonUI_o *)v315, (System_String_o *)StringLiteral_1/*""*/, v317, v318, 0, 0);
      _4__this = object;
      v11 = (const MethodInfo_3A5F158 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_344:
      if ( *((_BYTE *)_4__this + 75) )
      {
        v319 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v319, 0);
        v87->fields.__2__current = (Il2CppObject *)v319;
        v132 = (GrandQuestFolderBoardItem_o *)&v87->fields.__2__current;
        sub_1C71354(v132, (int32_t)v319, v320, v321, v322, v323, v324, v325);
        v139 = 16;
        goto LABEL_419;
      }
      goto LABEL_346;
    case 0xF:
      v87 = v8;
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_127;
      goto LABEL_420;
    case 0x10:
      v87 = v8;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      goto LABEL_344;
    case 0x11:
      v8->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      v403->fields.__1__state = -1;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v403->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      v30 = 18;
      goto LABEL_376;
    case 0x12:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) < 1 )
        goto LABEL_204;
      goto LABEL_137;
    case 0x13:
      p_fields->__1__state = -1;
LABEL_137:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) >= 1 )
      {
        v140 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v140, 0);
        v8->fields.__2__current = (Il2CppObject *)v140;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
          (int32_t)v140,
          v141,
          v142,
          v143,
          v144,
          v145,
          v146);
        v30 = 19;
        goto LABEL_376;
      }
LABEL_204:
      v8->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_310:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v293 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v293, 0);
          v8->fields.__2__current = (Il2CppObject *)v293;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
            (int32_t)v293,
            v294,
            v295,
            v296,
            v297,
            v298,
            v299);
          v30 = 20;
          goto LABEL_376;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_420;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12592/*"SYSTEM"*/,
          *((_DWORD *)_4__this + 19),
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__getDownloadSize(0) >= 1 )
        {
          v278 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v278 = ManagerConfig_TypeInfo;
          }
          if ( v278->static_fields->UseStandaloneAsset )
          {
            v8->fields._isLoad_5__4 = 1;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm((System_String_o *)StringLiteral_9324/*"NOW_LOADING"*/, 0);
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_420;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_324:
            v279 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v279, 0);
            v8->fields.__2__current = (Il2CppObject *)v279;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
              (int32_t)v279,
              v280,
              v281,
              v282,
              v283,
              v284,
              v285);
            v30 = 21;
            goto LABEL_376;
          }
LABEL_146:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getDownloadSize(0) >= 1 )
          {
            v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v147, 0);
            v8->fields.__2__current = (Il2CppObject *)v147;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
              (int32_t)v147,
              v148,
              v149,
              v150,
              v151,
              v152,
              v153);
            v30 = 22;
            goto LABEL_376;
          }
        }
LABEL_325:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__SetOnlineStatus(0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_41619596((NetworkManager_o *)this, method);
          v286 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v286, 0.1, 0);
          v8->fields.__2__current = (Il2CppObject *)v286;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
            (int32_t)v286,
            v287,
            v288,
            v289,
            v290,
            v291,
            v292);
          v30 = 23;
          goto LABEL_376;
        }
        goto LABEL_420;
      }
LABEL_207:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_212:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v257 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v257, 0);
              v8->fields.__2__current = (Il2CppObject *)v257;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
                (int32_t)v257,
                v258,
                v259,
                v260,
                v261,
                v262,
                v263);
              v30 = 24;
              goto LABEL_376;
            }
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v176 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12592/*"SYSTEM"*/,
                       *((_DWORD *)_4__this + 19),
                       0);
              v177 = UnityEngine_MonoBehaviour__StartCoroutine_71709800(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v176,
                       0);
              v8->fields.__2__current = (Il2CppObject *)v177;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
                (int32_t)v177,
                v178,
                v179,
                v180,
                v181,
                v182,
                v183);
              v30 = 25;
              goto LABEL_376;
            }
          }
        }
        goto LABEL_420;
      }
LABEL_217:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__LoadAssetData(0);
LABEL_220:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4CC6C8A )
      {
        sub_1C713B0(&LocalizationManager_TypeInfo);
        byte_4CC6C8A = 1;
      }
      v184 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v184 = LocalizationManager_TypeInfo;
      }
      if ( v184->static_fields->isBusySetAssetData )
      {
        v185 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v185, 0);
        v8->fields.__2__current = (Il2CppObject *)v185;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
          (int32_t)v185,
          v186,
          v187,
          v188,
          v189,
          v190,
          v191);
        v30 = 28;
        goto LABEL_376;
      }
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0);
LABEL_231:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_4CC6C8B )
      {
        sub_1C713B0(&FSUtility_TypeInfo);
        byte_4CC6C8B = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)FSUtility_TypeInfo;
      }
      if ( this[1].fields._waitForServerTime_5__7->klass )
      {
        v192 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v192, 0);
        v8->fields.__2__current = (Il2CppObject *)v192;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
          (int32_t)v192,
          v193,
          v194,
          v195,
          v196,
          v197,
          v198);
        v30 = 29;
        goto LABEL_376;
      }
      if ( v8->fields._readResult_5__2 == 1 )
      {
        if ( !_4__this )
          goto LABEL_420;
        *((_BYTE *)_4__this + 72) = 0;
        v199 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v199,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          v200);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                             v199,
                                                             (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_420;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0);
LABEL_245:
        v201 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v201, 0);
        v8->fields.__2__current = (Il2CppObject *)v201;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(p__2__current, (int32_t)v201, v202, v203, v204, v205, v206, v207);
        v30 = 30;
        goto LABEL_376;
      }
LABEL_246:
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__initializeAssetStorage(0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__Initialize(0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0);
      if ( !this )
        goto LABEL_420;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, method);
LABEL_254:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__IsBusyInitialize(0) )
      {
        v208 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v208, 0);
        v8->fields.__2__current = (Il2CppObject *)v208;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
          (int32_t)v208,
          v209,
          v210,
          v211,
          v212,
          v213,
          v214);
        v30 = 31;
        goto LABEL_376;
      }
      v8->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_259:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0);
      if ( !this )
        goto LABEL_420;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v8->fields._overrideAssetSoundNameWaitCount_5__5;
        v8->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v216 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v216, 0);
          v8->fields.__2__current = (Il2CppObject *)v216;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(p__2__current, (int32_t)v216, v217, v218, v219, v220, v221, v222);
          v30 = 32;
          goto LABEL_376;
        }
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0);
LABEL_267:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( LOBYTE(this[9].monitor) )
      {
        v223 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v223, 0);
        v8->fields.__2__current = (Il2CppObject *)v223;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
          (int32_t)v223,
          v224,
          v225,
          v226,
          v227,
          v228,
          v229);
        v30 = 33;
        goto LABEL_376;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initializeAssetStorage(0);
LABEL_273:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0) )
      {
        v230 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v230, 0);
        v8->fields.__2__current = (Il2CppObject *)v230;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
          (int32_t)v230,
          v231,
          v232,
          v233,
          v234,
          v235,
          v236);
        v30 = 34;
        goto LABEL_376;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      ScriptManager__Initialize((ScriptManager_o *)this, 0);
LABEL_278:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( BYTE1(this[6].monitor) )
      {
        v237 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v237, 0);
        v8->fields.__2__current = (Il2CppObject *)v237;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
          (int32_t)v237,
          v238,
          v239,
          v240,
          v241,
          v242,
          v243);
        v30 = 35;
        goto LABEL_376;
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
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_420;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_351:
          v332 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v332, 0);
          v8->fields.__2__current = (Il2CppObject *)v332;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(p__2__current, (int32_t)v332, v333, v334, v335, v336, v337, v338);
          v30 = 37;
          goto LABEL_376;
        }
LABEL_296:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff((ManagementManager_o *)_4__this, method);
          v8->fields.__2__current = 0;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(p__2__current, 0, v251, v252, v253, v254, v255, v256);
          v30 = 38;
          goto LABEL_376;
        }
        goto LABEL_420;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9324/*"NOW_LOADING"*/, 0) )
      {
LABEL_294:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_420;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
        goto LABEL_296;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__fadeoutBgm(1.0, 0);
      v244 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v244, 1.0, 0);
      v8->fields.__2__current = (Il2CppObject *)v244;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v403->fields.__2__current,
        (int32_t)v244,
        v245,
        v246,
        v247,
        v248,
        v249,
        v250);
      v30 = 36;
LABEL_376:
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = v30;
      return 1;
    case 0x14:
      p_fields->__1__state = -1;
      goto LABEL_310;
    case 0x15:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_324;
      goto LABEL_325;
    case 0x16:
      p_fields->__1__state = -1;
      goto LABEL_146;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_207;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_212;
    case 0x19:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) < 1 )
        goto LABEL_217;
      v8->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_4CC6C89 )
      {
        sub_1C713B0(&LogoMain_TypeInfo);
        byte_4CC6C89 = 1;
      }
      v154 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v154 = LogoMain_TypeInfo;
      }
      if ( !v154->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9324/*"NOW_LOADING"*/, 0);
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_169:
      v155 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v155, 0);
      v8->fields.__2__current = (Il2CppObject *)v155;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354(p__2__current, (int32_t)v155, v156, v157, v158, v159, v160, v161);
      v30 = 26;
      goto LABEL_376;
    case 0x1A:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_305:
      v271 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v271, 0);
      v8->fields.__2__current = (Il2CppObject *)v271;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354(p__2__current, (int32_t)v271, v272, v273, v274, v275, v276, v277);
      v30 = 27;
      goto LABEL_376;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_305;
      v162 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v162 = (_QWORD *)sub_1C713C8(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v163 = (System_Reflection_MethodBase_o *)sub_1C71394(v162, v162[4]);
      OverwriteAssetSoundName__PlaySystemSe(v163, 0, 0, v164);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      goto LABEL_217;
    case 0x1C:
      p_fields->__1__state = -1;
      goto LABEL_220;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_231;
    case 0x1E:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      if ( !*((_BYTE *)_4__this + 72) )
        goto LABEL_245;
      goto LABEL_246;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_254;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_259;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_267;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_273;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_278;
    case 0x24:
      p_fields->__1__state = -1;
      goto LABEL_294;
    case 0x25:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_351;
      v165 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v165 = (_QWORD *)sub_1C713C8(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v166 = (System_Reflection_MethodBase_o *)sub_1C71394(v165, v165[4]);
      OverwriteAssetSoundName__PlaySystemSe(v166, 0, 0, v167);
      goto LABEL_294;
    case 0x26:
      p_fields->__1__state = -1;
      v168 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v168 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v168->static_fields->PushStateSendedKey,
                                                           0,
                                                           0);
      if ( !(_DWORD)this )
      {
        v170 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v170);
        OptionManager__SetNotiffication(Notiffication, 1, v172);
        v173 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v173 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v173->static_fields->PushStateSendedKey, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      if ( !_4__this )
        goto LABEL_420;
      *((_BYTE *)_4__this + 84) = 1;
      *((_BYTE *)_4__this + 32) = 0;
      ManagementManager__BuildInfoDisp((ManagementManager_o *)_4__this, 1, v169);
      if ( v8->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin((ManagementManager_o *)_4__this, v174);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 9, 1, 0, 0);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *ManagementManager__startCheckAll_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__startCheckAll_d__35__System_Collections_IEnumerator_Reset(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ManagementManager__startCheckAll_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ManagementManager__startCheckAll_d__35__System_Collections_IEnumerator_get_Current(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__startCheckAll_d__35__System_IDisposable_Dispose(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  ;
}