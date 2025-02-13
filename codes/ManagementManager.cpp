void __fastcall ManagementManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct ManagementManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct ManagementManager_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct ManagementManager_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDBD5F & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&StringLiteral_8207/*"IsNotificationStatusSend"*/);
    sub_1C21E38(&StringLiteral_8219/*"IsReBootCacheClearKey"*/);
    sub_1C21E38(&StringLiteral_21283/*"ja-JP"*/);
    sub_1C21E38(&StringLiteral_25337/*"yyyy年MM月dd日HH時mm分"*/);
    byte_4BDBD5F = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8207/*"IsNotificationStatusSend"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8207/*"IsNotificationStatusSend"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_8219/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8219/*"IsReBootCacheClearKey"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->RebootCacheClearKey, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_25337/*"yyyy年MM月dd日HH時mm分"*/;
  v16 = ManagementManager_TypeInfo->static_fields;
  v16->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_25337/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->DATE_TIME_DISP_FORMAT, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_21283/*"ja-JP"*/;
  v24 = ManagementManager_TypeInfo->static_fields;
  v24->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_21283/*"ja-JP"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->DEFAULT_CULTURE_NAME, v23, v25, v26, v27, v28, v29, v30);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BDBD5E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_4BDBD5E = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void __fastcall ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  ManagementManager_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  float v22; // s0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x19
  Il2CppObject *v43; // x19
  float v44; // [xsp+Ch] [xbp-34h] BYREF

  v44 = ratio;
  if ( (byte_4BDBD47 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_835/*"):"*/);
    sub_1C21E38(&StringLiteral_6897/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_1C21E38(&StringLiteral_794/*"(ratio: "*/);
    byte_4BDBD47 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6897/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1C21EE0(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.isInitializingData,
        (int64_t)errorText,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v21 = StringLiteral_794/*"(ratio: "*/;
      v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_794/*"(ratio: "*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields.AvalonSceneManager, v21, v15, v16, v17, v18, v19, v20);
      this = (ManagementManager_o *)System_Single__ToString(v22, (const MethodInfo *)&v44);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v14->fields.debugInfoRootObject,
              (int64_t)this,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v35 = StringLiteral_835/*"):"*/,
            v14->fields.statusLabel = (struct UILabel_o *)StringLiteral_835/*"):"*/,
            sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields.statusLabel, v35, v29, v30, v31, v32, v33, v34),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1C2209C(this, errorText);
      }
      v14->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v14->fields._videoPlayer_k__BackingField,
        (int64_t)exceptionMessage,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v42 = (Il2CppObject *)System_String__Concat_63129004((System_String_array *)v14, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v42, 0LL);
      return;
    }
LABEL_19:
    sub_1C22094(this, errorText);
  }
  v43 = (Il2CppObject *)System_String__Concat_63115476(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v43, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BDBD43 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_4BDBD43 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_388D3C4 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  }
}


void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4BDBD5C & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDBD5C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4BDBD5B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBD5B = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1C22094(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4BDBD41 & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    byte_4BDBD41 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  v1->static_fields->isDuringStartup = 0;
}


void __fastcall ManagementManager__EndDifferentCreateUserServerDialog(
        ManagementManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDBD51 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDBD51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4BDBD50 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    byte_4BDBD50 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70662884(0LL);
}


void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4BDBD4F & 1) != 0 )
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
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    byte_4BDBD4F = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70662884(0LL);
}


void __fastcall ManagementManager__HandleLog(
        ManagementManager_o *this,
        System_String_o *condition,
        System_String_o *stackTrace,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4BDBD48 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&StringLiteral_6312/*"ErrorLog: "*/);
    sub_1C21E38(&StringLiteral_56/*"\n StackTrace: "*/);
    byte_4BDBD48 = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v9 = System_String__Concat_63128740(
           (System_String_o *)StringLiteral_6312/*"ErrorLog: "*/,
           condition,
           (System_String_o *)StringLiteral_56/*"\n StackTrace: "*/,
           stackTrace,
           0LL);
    if ( !Instance )
      sub_1C22094(v9, v10);
    CrashReporter__SendErrorLogReport((CrashReporter_o *)Instance, v9, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDBD4A & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
    byte_4BDBD4A = 1;
  }
  v3 = sub_1C22084(ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4BDBD58 & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    byte_4BDBD58 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4BDB610 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    byte_4BDB610 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  return !v2->static_fields->isDuringStartup;
}


bool __fastcall ManagementManager__IsLoading(ManagementManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDBD59 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4BDBD59 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__CommunicationIsBusy((const MethodInfo *)v2) )
    return 1;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__LoadIsBusy(0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsDenied(
        ManagementManager_o *this,
        System_String_o *permissionName,
        const MethodInfo *method)
{
  this->fields.isPermissionRequesting = 0;
}


void __fastcall ManagementManager__NotifyRequestPermissionsGranted(
        ManagementManager_o *this,
        System_String_o *permissionName,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4BDBD5D & 1) == 0 )
  {
    sub_1C21E38(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    byte_4BDBD5D = 1;
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
  SpecificCulture = System_Globalization_CultureInfo__CreateSpecificCulture(DEFAULT_CULTURE_NAME, 0LL);
  System_Globalization_CultureInfo__set_CurrentCulture(SpecificCulture, 0LL);
}


void __fastcall ManagementManager__RebootCacheClear(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0
  ManagementManager_c *v2; // x0

  if ( (byte_4BDBD42 & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    byte_4BDBD42 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v1->static_fields->RebootCacheClearKey, 0LL) )
  {
    v2 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v2 = ManagementManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->RebootCacheClearKey, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__SetupFirebaseAppCheck(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4BDBD4B & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
    byte_4BDBD4B = 1;
  }
  v2 = sub_1C22084(ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4BDBD4C & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
    byte_4BDBD4C = 1;
  }
  v2 = sub_1C22084(ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void __fastcall ManagementManager__Start(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  intptr_t v4; // w21
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3
  System_Collections_IEnumerator_o *v8; // x1
  System_RuntimeTypeHandle_o v9; // 0:w0.4

  if ( (byte_4BDBD44 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    sub_1C21E38(&UnityGamingServicesBehaviour_var);
    byte_4BDBD44 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(30, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__TransitionSaveData(0LL);
  UnityEngine_Screen__set_autorotateToLandscapeLeft(1, 0LL);
  UnityEngine_Screen__set_autorotateToLandscapeRight(1, 0LL);
  UnityEngine_Screen__set_autorotateToPortrait(0, 0LL);
  UnityEngine_Screen__set_autorotateToPortraitUpsideDown(0, 0LL);
  UnityEngine_Screen__set_orientation(5, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = (int)UnityGamingServicesBehaviour_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9.fields.value = v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0LL);
  if ( !gameObject )
    sub_1C22094(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v6);
  v8 = ManagementManager__startCheckAll(this, 0, 0, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4BDBD5A & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1C21E38(&UnityEngine_Application_TypeInfo);
    byte_4BDBD5A = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_70662884(0LL);
    }
  }
}


void __fastcall ManagementManager__callbackAccountRegist(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.isReadAuth = 1;
}


void __fastcall ManagementManager__callbackPlayLogo(ManagementManager_o *this, const MethodInfo *method)
{
  this->fields.isPlayLogo = 1;
}


void __fastcall ManagementManager__callbackTerminalTopHome(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagementManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDBD57 & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDBD57 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _38930984; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4BDBD56 & 1) == 0 )
  {
    sub_1C21E38(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BDBD56 = 1;
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
  _38930984 = TutorialFlag__Get_38930984(102, 0LL);
  if ( _38930984 )
  {
LABEL_9:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v9);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C22094(0LL, v11);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_38930984, v6, v7);
  }
}


void __fastcall ManagementManager__callbackTopGameData(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.isReadGameData = 1;
}


void __fastcall ManagementManager__callbackTopHome(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagementManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BDBD54 & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDBD54 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, this->fields.scenetype, 0, 0LL, 0LL);
}


void __fastcall ManagementManager__callbackTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  System_String_o *v5; // x1
  const MethodInfo *v6; // x2
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_4BDBD53 & 1) == 0 )
  {
    sub_1C21E38(&Method_ManagementManager_callbackTopHome__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BDBD53 = 1;
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
  if ( TutorialFlag__Get_38930984(102, 0LL) )
  {
LABEL_9:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C22094(0LL, v10);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTopHome(this, v5, v6);
  }
}


void __fastcall ManagementManager__createMovieObj(ManagementManager_o *this, const MethodInfo *method)
{
  struct AvalonVideoPlayer_o **p_videoPlayer_k__BackingField; // x20
  UnityEngine_Object_o *videoPlayer_k__BackingField; // x21
  UnityEngine_GameObject_o *v5; // x22
  UnityEngine_GameObject_o *v6; // x21
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  AvalonVideoPlayer_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_4BDBD45 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_4738/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_1C21E38(&StringLiteral_9343/*"MovieRoot"*/);
    byte_4BDBD45 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4738/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v6 = (UnityEngine_GameObject_o *)sub_1C22084(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9343/*"MovieRoot"*/, 0LL);
    if ( !v6
      || (v9 = UnityEngine_GameObject__AddComponent_object_(
                 v6,
                 (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields._videoPlayer_k__BackingField,
            (int64_t)v9,
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
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v16) )
    {
      sub_1C22094(Component_object, v8);
    }
    AvalonVideoPlayer__initialize(v16, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34803616(v6, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BDBD3F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4BDBD3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4BDBD40 & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    byte_4BDBD40 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  return v1->static_fields->isDuringStartup;
}


AvalonVideoPlayer_o *__fastcall ManagementManager__get_videoPlayer(ManagementManager_o *this, const MethodInfo *method)
{
  return this->fields._videoPlayer_k__BackingField;
}


void __fastcall ManagementManager__reboot(
        ManagementManager_o *this,
        bool isLogin,
        bool isFadeInit,
        const MethodInfo *method)
{
  ManagementManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4BDBD46 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&CTouch_TypeInfo);
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&FirebaseScript_TypeInfo);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDBD46 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    SwitchParameterDisplayManager__Reboot((SwitchParameterDisplayManager_o *)Instance, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Reboot(0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__reboot(0LL);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1C22094(Instance, v9);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_64162132(0LL);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_1C22094(0LL, v11);
    AdManager__Initialize((AdManager_o *)v10, 2, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    v13 = ManagementManager__startCheckAll(this, 1, isLogin, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BDBD52 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ManagementManager_callbackTopLogin__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4BDBD52 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C22084(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v5);
  if ( !Instance )
    sub_1C22094(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, v8);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BDBD55 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4BDBD55 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C22084(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v5);
  if ( !Instance )
    sub_1C22094(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, v8);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._videoPlayer_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._videoPlayer_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__startCheckAll(
        ManagementManager_o *this,
        bool isReboot,
        bool isLogin,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDBD49 & 1) == 0 )
  {
    sub_1C21E38(&ManagementManager__startCheckAll_d__35_TypeInfo);
    byte_4BDBD49 = 1;
  }
  v7 = isLogin;
  v8 = sub_1C22084(ManagementManager__startCheckAll_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BDBD4D & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDBD4D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
}


void __fastcall ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4BDBD4E & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ScrTerminalListTop_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDBD4E = 1;
  }
  MovieFileMerge__Delete_38993380(0LL);
  v2 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD966C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD966C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
  AssetStorageCache__ClearCacheAll(1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetForceReadNewComments(1, 0LL);
}


void __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36___ctor(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36__MoveNext(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
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

  if ( (byte_4BDBD61 & 1) == 0 )
  {
    sub_1C21E38(&FirebaseScript_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDBD61 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v14);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v15 )
      sub_1C22094(0LL, v16);
    AdManager__Initialize((AdManager_o *)v15, 1, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    if ( !_4__this )
      sub_1C22094(v17, v18);
    v19 = ManagementManager__SetupFirebaseAppCheck(v17, v18);
    started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(_4__this, v19, 0LL);
    v22 = ManagementManager__SetupFirebaseCrashlytics(started, v21);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884(_4__this, v22, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_IEnumerator_Reset(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_IEnumerator_get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36__System_IDisposable_Dispose(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager__SetupFirebaseAppCheck_d__37___ctor(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__SetupFirebaseAppCheck_d__37__MoveNext(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  FirebaseScript_c *v10; // x0
  int64_t v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  FirebaseScript_c *v18; // x0
  FirebaseScript_c *v19; // x0
  Il2CppObject **v20; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  FirebaseScript_c *v23; // x0
  FirebaseScript_c *v24; // x0
  System_String_o *prevKeyName_5__3; // x0
  System_String_o *v26; // x1
  float time; // s8
  FirebaseScript_c *v28; // x0
  float beginTime_5__2; // s9
  FirebaseScript_c *v30; // x0
  float v31; // s8
  char IsNullOrEmpty; // w0
  char v33; // w22
  bool v34; // w23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x20
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  System_String_o *v43; // x20
  FirebaseScript_c *v44; // x0
  char v45[4]; // [xsp+8h] [xbp-48h] BYREF
  float v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDBD62 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&FirebaseScript_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_870/*", AppCheckErrorMessage: "*/);
    sub_1C21E38(&StringLiteral_17093/*"appCheckPrevMessage"*/);
    sub_1C21E38(&StringLiteral_6053/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/);
    sub_1C21E38(&StringLiteral_8145/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/);
    byte_4BDBD62 = 1;
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
      if ( !byte_4BDBE59 )
      {
        sub_1C21E38(&FirebaseScript_TypeInfo);
        byte_4BDBE59 = 1;
      }
      v10 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v10 = FirebaseScript_TypeInfo;
      }
      v10->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0LL);
      v11 = StringLiteral_17093/*"appCheckPrevMessage"*/;
      this->fields._prevKeyName_5__3 = (struct System_String_o *)StringLiteral_17093/*"appCheckPrevMessage"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._prevKeyName_5__3, v11, v12, v13, v14, v15, v16, v17);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4BDBE5A )
      {
        sub_1C21E38(&FirebaseScript_TypeInfo);
        byte_4BDBE5A = 1;
      }
      v18 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v18 = FirebaseScript_TypeInfo;
      }
      if ( !v18->static_fields->_IsFirebaseInitialized_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !v18->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v18);
      if ( !FirebaseScript__GetAppCheckToken(0LL) )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4BDBE5B )
        {
          sub_1C21E38(&FirebaseScript_TypeInfo);
          byte_4BDBE5B = 1;
        }
        v23 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v23 = FirebaseScript_TypeInfo;
        }
        if ( v23->static_fields->_IsSendAppCheckToken_k__BackingField )
          return 0;
        if ( !v23->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v23);
        if ( !byte_4BD6FF4 )
        {
          sub_1C21E38(&FirebaseScript_TypeInfo);
          byte_4BD6FF4 = 1;
        }
        v24 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v24 = FirebaseScript_TypeInfo;
        }
        if ( v24->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        prevKeyName_5__3 = this->fields._prevKeyName_5__3;
        v26 = (System_String_o *)StringLiteral_8145/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        goto LABEL_71;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4BDBC88 )
      {
        sub_1C21E38(&FirebaseScript_TypeInfo);
        byte_4BDBC88 = 1;
      }
      v19 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v19 = FirebaseScript_TypeInfo;
      }
      if ( v19->static_fields->_IsRunningGetAppCheckToken_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        v20 = &this->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)v20, 0LL, v2, v3, v4, v5, v6, v7);
        *((_DWORD *)v20 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0LL);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4BDBE5B )
      {
        sub_1C21E38(&FirebaseScript_TypeInfo);
        byte_4BDBE5B = 1;
      }
      v28 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v28 = FirebaseScript_TypeInfo;
      }
      if ( v28->static_fields->_IsSendAppCheckToken_k__BackingField )
        return 0;
      beginTime_5__2 = this->fields._beginTime_5__2;
      if ( !v28->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v28);
      if ( !byte_4BDBE5C )
      {
        sub_1C21E38(&FirebaseScript_TypeInfo);
        byte_4BDBE5C = 1;
      }
      v30 = FirebaseScript_TypeInfo;
      v31 = time - beginTime_5__2;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v30 = FirebaseScript_TypeInfo;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v30->static_fields->_AppCheckToken_k__BackingField, 0LL);
      v33 = ~IsNullOrEmpty;
      v34 = (IsNullOrEmpty & 1) == 0;
      v46 = v31;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v46, v35, v36, v37);
      v45[0] = v34;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v45, v39, v40, v41);
      v43 = System_String__Format_63129848((System_String_o *)StringLiteral_6053/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v38, v42, 0LL);
      if ( (v33 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4BDBE5D )
        {
          sub_1C21E38(&FirebaseScript_TypeInfo);
          byte_4BDBE5D = 1;
        }
        v44 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v44 = FirebaseScript_TypeInfo;
        }
        v43 = System_String__Concat_63126736(
                v43,
                (System_String_o *)StringLiteral_870/*", AppCheckErrorMessage: "*/,
                v44->static_fields->_AppCheckTokenError_k__BackingField,
                0LL);
      }
      prevKeyName_5__3 = this->fields._prevKeyName_5__3;
      v26 = v43;
LABEL_71:
      UnityEngine_PlayerPrefs__SetString(prevKeyName_5__3, v26, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      break;
  }
  return 0;
}


Il2CppObject *__fastcall ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ManagementManager__SetupFirebaseAppCheck_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__SetupFirebaseAppCheck_d__37__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager__SetupFirebaseCrashlytics_d__38___ctor(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__SetupFirebaseCrashlytics_d__38__MoveNext(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  FirebaseScript_c *v9; // x0
  FirebaseScript_c *v10; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4BDBD63 & 1) == 0 )
  {
    sub_1C21E38(&FirebaseScript_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4BDBD63 = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4BDBE5A )
  {
    sub_1C21E38(&FirebaseScript_TypeInfo);
    byte_4BDBE5A = 1;
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
    if ( !byte_4BD6FF4 )
    {
      sub_1C21E38(&FirebaseScript_TypeInfo);
      byte_4BD6FF4 = 1;
    }
    v10 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v10 = FirebaseScript_TypeInfo;
    }
    if ( v10->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_1C22094(0LL, v12);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0LL);
    }
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ManagementManager__SetupFirebaseCrashlytics_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__SetupFirebaseCrashlytics_d__38__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager___c__DisplayClass35_0___ctor(
        ManagementManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass35_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass35_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4BDBD60 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__);
    sub_1C21E38(&ManagementManager___c__DisplayClass35_1_TypeInfo);
    byte_4BDBD60 = 1;
  }
  v5 = sub_1C22084(ManagementManager___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31128756((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass35_1___ctor(
        ManagementManager___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass35_1___startCheckAll_b__1(
        ManagementManager___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  struct ManagementManager___c__DisplayClass35_0_o *CS___8__locals1; // x8
  bool flag; // w9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C22094(this, method);
  flag = this->fields.flag;
  CS___8__locals1->fields.confirmed = 1;
  CS___8__locals1->fields.isDecide = flag;
}


void __fastcall ManagementManager__startCheckAll_d__35___ctor(
        ManagementManager__startCheckAll_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__startCheckAll_d__35__MoveNext(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ManagementManager__startCheckAll_d__35_o *v8; // x19
  ManagementManager__startCheckAll_d__35_Fields *p_fields; // x8
  ManagerConfig_c **v10; // x26
  const MethodInfo_388D058 **v11; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v14; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v23; // x0
  PartyOrganizationUtility_o *v24; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int v31; // w8
  System_Collections_IEnumerator_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  OptionManager_c *v39; // x0
  const MethodInfo *v40; // x0
  const MethodInfo *v41; // x0
  UnityEngine_Application_LogCallback_o *v42; // x21
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  ManagementManager__startCheckAll_d__35_o *v56; // x21
  int64_t v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  EncryptedPlayerPrefs_c *v78; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v80; // x20
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  const MethodInfo *v87; // x1
  struct ManagementManager___c__DisplayClass35_0_o *v88; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v90; // x21
  const MethodInfo *v91; // x3
  UnityEngine_WaitForEndOfFrame_o *v92; // x20
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  NetworkManager_ResultCallbackFunc_o *v99; // x21
  const MethodInfo *v100; // x3
  UnityEngine_WaitForEndOfFrame_o *v101; // x20
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t waitForServerTime_5__7; // x1
  Il2CppObject *v109; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *started; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  DataManager_c *v118; // x0
  UnityEngine_Coroutine_o *v119; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  DataManager_c *v126; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v128; // x21
  System_String_o *v129; // x22
  ErrorDialog_ClickDelegate_o *v130; // x23
  UnityEngine_WaitForEndOfFrame_o *v131; // x20
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  UnityEngine_WaitForEndOfFrame_o *v138; // x20
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  UnityEngine_WaitForEndOfFrame_o *v145; // x20
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  LogoMain_c *v152; // x0
  UnityEngine_WaitForEndOfFrame_o *v153; // x20
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  _QWORD *v160; // x0
  System_Reflection_MethodBase_o *v161; // x0
  const MethodInfo *v162; // x3
  _QWORD *v163; // x0
  System_Reflection_MethodBase_o *v164; // x0
  const MethodInfo *v165; // x3
  ManagementManager_c *v166; // x0
  const MethodInfo *v167; // x2
  OptionManager_c *v168; // x0
  bool Notiffication; // w0
  const MethodInfo *v170; // x2
  ManagementManager_c *v171; // x0
  const MethodInfo *v172; // x1
  int64_t wait_5__8; // x1
  System_Collections_IEnumerator_o *v174; // x0
  UnityEngine_Coroutine_o *v175; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  LocalizationManager_c *v182; // x0
  UnityEngine_WaitForEndOfFrame_o *v183; // x20
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  FSUtility_c *v190; // x0
  UnityEngine_WaitForEndOfFrame_o *v191; // x20
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  UnityEngine_WaitForEndOfFrame_o *v198; // x20
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v206; // x20
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  UnityEngine_WaitForEndOfFrame_o *v213; // x20
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  UnityEngine_WaitForEndOfFrame_o *v220; // x20
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  UnityEngine_WaitForEndOfFrame_o *v227; // x20
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  UnityEngine_WaitForSeconds_o *v234; // x20
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  UnityEngine_WaitForEndOfFrame_o *v247; // x20
  int64_t v248; // x2
  int32_t v249; // w3
  System_String_o *v250; // x4
  BattleSetupInfo_o *v251; // x5
  FollowerInfo_o *v252; // x6
  PartyListViewItem_o *v253; // x7
  UnityEngine_WaitForEndOfFrame_o *v254; // x20
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  UnityEngine_WaitForEndOfFrame_o *v261; // x20
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  ManagerConfig_c *v268; // x0
  UnityEngine_WaitForEndOfFrame_o *v269; // x20
  int64_t v270; // x2
  int32_t v271; // w3
  System_String_o *v272; // x4
  BattleSetupInfo_o *v273; // x5
  FollowerInfo_o *v274; // x6
  PartyListViewItem_o *v275; // x7
  UnityEngine_WaitForSeconds_o *v276; // x20
  int64_t v277; // x2
  int32_t v278; // w3
  System_String_o *v279; // x4
  BattleSetupInfo_o *v280; // x5
  FollowerInfo_o *v281; // x6
  PartyListViewItem_o *v282; // x7
  UnityEngine_WaitForEndOfFrame_o *v283; // x20
  int64_t v284; // x2
  int32_t v285; // w3
  System_String_o *v286; // x4
  BattleSetupInfo_o *v287; // x5
  FollowerInfo_o *v288; // x6
  PartyListViewItem_o *v289; // x7
  UnityEngine_WaitForEndOfFrame_o *v290; // x20
  int64_t v291; // x2
  int32_t v292; // w3
  System_String_o *v293; // x4
  BattleSetupInfo_o *v294; // x5
  FollowerInfo_o *v295; // x6
  PartyListViewItem_o *v296; // x7
  ManagementManager_c *v297; // x0
  UnityEngine_Coroutine_o *v298; // x0
  int64_t v299; // x2
  int32_t v300; // w3
  System_String_o *v301; // x4
  BattleSetupInfo_o *v302; // x5
  FollowerInfo_o *v303; // x6
  PartyListViewItem_o *v304; // x7
  Il2CppObject *v305; // x21
  System_String_o *v306; // x22
  ErrorDialog_ClickDelegate_o *v307; // x23
  UnityEngine_WaitForEndOfFrame_o *v308; // x20
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  int64_t v315; // x2
  int32_t v316; // w3
  System_String_o *v317; // x4
  BattleSetupInfo_o *v318; // x5
  FollowerInfo_o *v319; // x6
  PartyListViewItem_o *v320; // x7
  UnityEngine_WaitForEndOfFrame_o *v321; // x20
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  UnityEngine_WaitForEndOfFrame_o *v328; // x20
  int64_t v329; // x2
  int32_t v330; // w3
  System_String_o *v331; // x4
  BattleSetupInfo_o *v332; // x5
  FollowerInfo_o *v333; // x6
  PartyListViewItem_o *v334; // x7
  System_Action_object__o *v335; // x21
  System_Action_object__o *v336; // x22
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v340; // x0
  ManagerConfig_c *v341; // x0
  ManagerConfig_c **v342; // x19
  const MethodInfo_388D058 **v343; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v345; // x22
  ErrorDialog_ClickDelegate_o *v346; // x23
  UnityEngine_WaitForEndOfFrame_o *v347; // x20
  int64_t v348; // x2
  int32_t v349; // w3
  System_String_o *v350; // x4
  BattleSetupInfo_o *v351; // x5
  FollowerInfo_o *v352; // x6
  PartyListViewItem_o *v353; // x7
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v355; // x21
  const MethodInfo *v356; // x3
  UnityEngine_WaitForEndOfFrame_o *v357; // x20
  int64_t v358; // x2
  int32_t v359; // w3
  System_String_o *v360; // x4
  BattleSetupInfo_o *v361; // x5
  FollowerInfo_o *v362; // x6
  PartyListViewItem_o *v363; // x7
  ManagementManager_c *v364; // x0
  const MethodInfo_388D058 **v365; // x28
  Il2CppObject *v366; // x21
  int64_t v367; // x2
  int32_t v368; // w3
  System_String_o *v369; // x4
  BattleSetupInfo_o *v370; // x5
  FollowerInfo_o *v371; // x6
  PartyListViewItem_o *v372; // x7
  Il2CppObject *v373; // x21
  System_String_o *v374; // x22
  System_String_o *v375; // x24
  System_String_o *v376; // x25
  System_String_o *v377; // x0
  Il2CppObject *_8__1; // x27
  System_String_o *v379; // x23
  CommonConfirmDialog_ClickDelegate_o *v380; // x26
  Il2CppObject *v381; // x21
  System_String_o *v382; // x21
  Il2CppObject *DispFriendCode; // x22
  Il2CppObject *v384; // x22
  System_String_o *v385; // x23
  System_String_o *v386; // x0
  System_String_o *v387; // x19
  Il2CppObject *v388; // x2
  System_String_o *v389; // x21
  ErrorDialog_ClickDelegate_o *v390; // x23
  ManagementManager_c *v391; // x0
  UnityEngine_Coroutine_o *v392; // x0
  int64_t v393; // x2
  int32_t v394; // w3
  System_String_o *v395; // x4
  BattleSetupInfo_o *v396; // x5
  FollowerInfo_o *v397; // x6
  PartyListViewItem_o *v398; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__35_o *v400; // [xsp+40h] [xbp-80h]
  System_Enum_o v401; // [xsp+48h] [xbp-78h] BYREF
  int32_t v402; // [xsp+58h] [xbp-68h]

  v8 = this;
  if ( (byte_4BDBD64 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_string__TypeInfo);
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&CommonServicePluginScript_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Application_LogCallback_TypeInfo);
    sub_1C21E38(&LogoMain_TypeInfo);
    sub_1C21E38(&Method_ManagementManager_EndLogDialog__);
    sub_1C21E38(&Method_ManagementManager_EndQuitDialog__);
    sub_1C21E38(&Method_ManagementManager_EndRetryDialog__);
    sub_1C21E38(&Method_ManagementManager_HandleLog__);
    sub_1C21E38(&Method_ManagementManager_NotifyRequestPermissionsDenied__);
    sub_1C21E38(&Method_ManagementManager_NotifyRequestPermissionsGranted__);
    sub_1C21E38(&Method_ManagementManager_callbackAccountRegist__);
    sub_1C21E38(&Method_ManagementManager_callbackTopGameData__);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_1C21E38(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&NetworkManager_ReadResult_TypeInfo);
    sub_1C21E38(&ResolutionManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&SignedData_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__);
    sub_1C21E38(&ManagementManager___c__DisplayClass35_0_TypeInfo);
    sub_1C21E38(&Method_ManagementManager__startCheckAll_d__35_MoveNext__);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&StringLiteral_7547/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_9490/*"NOW_LOADING"*/);
    sub_1C21E38(&StringLiteral_9419/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C21E38(&StringLiteral_6523/*"F39UThNh"*/);
    sub_1C21E38(&StringLiteral_7550/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_1C21E38(&StringLiteral_7548/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_1C21E38(&StringLiteral_7546/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_5229/*"DataServerFolderName"*/);
    sub_1C21E38(&StringLiteral_17044/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_1C21E38(&StringLiteral_9427/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_9420/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_1C21E38(&StringLiteral_12719/*"SYSTEM"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_21142/*"ioqrk4Om"*/);
    sub_1C21E38(&StringLiteral_1473/*"2pC0bIYM"*/);
    sub_1C21E38(&StringLiteral_9421/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__35_o *)sub_1C21E38(&StringLiteral_9428/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4BDBD64 = 1;
  }
  p_fields = &v8->fields;
  v10 = &ManagerConfig_TypeInfo;
  v11 = (const MethodInfo_388D058 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      isReboot = v8->fields.isReboot;
      v8->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v14 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v8->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v14, v16, v17, v18, v19, v20, v21);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_7:
      if ( !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData__RefillSigningData(3, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__Initialize(0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initialize(0LL);
      if ( !_4__this )
        goto LABEL_417;
      v23 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v23;
      v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v24, (int64_t)v23, v25, v26, v27, v28, v29, v30);
      v31 = 2;
      goto LABEL_416;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      v32 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v8->fields.__2__current = (Il2CppObject *)v32;
      v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v24, (int64_t)v32, v33, v34, v35, v36, v37, v38);
      v31 = 3;
      goto LABEL_416;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0LL);
      v39 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v39);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(v40);
      OptionManager__AdjustVolume(v41);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v8->fields.isReboot )
        goto LABEL_31;
      v42 = (UnityEngine_Application_LogCallback_o *)sub_1C22084(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(
        v42,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_HandleLog__,
        0LL);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__add_logMessageReceived(v42, 0LL);
      if ( v8->fields.isReboot )
      {
LABEL_31:
        v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v43, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v43;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v43, v44, v45, v46, v47, v48, v49);
        v31 = 4;
        goto LABEL_416;
      }
LABEL_33:
      this = (ManagementManager__startCheckAll_d__35_o *)sub_1C21EE0(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_417;
      v56 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v57 = StringLiteral_1473/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1473/*"2pC0bIYM"*/,
            sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.isReboot, v57, v50, v51, v52, v53, v54, v55),
            LODWORD(v56->fields.__2__current) <= 1)
        || (v64 = StringLiteral_6523/*"F39UThNh"*/,
            v56->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6523/*"F39UThNh"*/,
            sub_1C21DDC((PartyOrganizationUtility_o *)&v56->fields.__4__this, v64, v58, v59, v60, v61, v62, v63),
            LODWORD(v56->fields.__2__current) <= 2) )
      {
        sub_1C2209C(this, method);
      }
      v71 = StringLiteral_21142/*"ioqrk4Om"*/;
      v56->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)StringLiteral_21142/*"ioqrk4Om"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v56->fields.__8__1, v71, v65, v66, v67, v68, v69, v70);
      v78 = EncryptedPlayerPrefs_TypeInfo;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v78 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v78->static_fields;
      static_fields->keys = (struct System_String_array *)v56;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->keys, (int64_t)v56, v72, v73, v74, v75, v76, v77);
      if ( !v8->fields.isReboot )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_44;
        if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)AndroidUtil__get_apiLevel(0LL);
        if ( (int)this >= 33 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)AndroidPermissionManager__CheckPermission(
                                                               (System_String_o *)StringLiteral_17044/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_417;
            _4__this->fields.isPermissionRequesting = 1;
            v335 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v335,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0LL);
            v336 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v336,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsDenied__,
              0LL);
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_17044/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v335,
              (System_Action_string__o *)v336,
              0LL,
              0LL);
LABEL_47:
            if ( _4__this->fields.isPermissionRequesting )
            {
              v80 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v80, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v80;
              v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v24, (int64_t)v80, v81, v82, v83, v84, v85, v86);
              v31 = 5;
              goto LABEL_416;
            }
          }
        }
        else
        {
LABEL_44:
          if ( !_4__this )
            goto LABEL_417;
          _4__this->fields.isPermissionGranted = 1;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
          v328 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v328, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v328;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, (int64_t)v328, v329, v330, v331, v332, v333, v334);
          v31 = 6;
          goto LABEL_416;
        }
LABEL_417:
        sub_1C22094(this, method);
      }
LABEL_50:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
      v8->fields._readResult_5__2 = (int)this;
      if ( !_4__this )
        goto LABEL_417;
      this = (ManagementManager__startCheckAll_d__35_o *)_4__this->fields.debugInfoRootObject;
      if ( !this )
        goto LABEL_417;
      v400 = v8;
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
      if ( !this )
        goto LABEL_417;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      ManagementManager__BuildInfoOff(_4__this, v87);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      TerminalPramsManager__Load_SaveData(0LL);
      while ( 1 )
      {
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
        temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
        if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
        FreeSize = CommonServicePluginScript__GetFreeSize(temporaryCachePath, 0LL);
        if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
        DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
        v340 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
        if ( FreeSize < v340 )
          FreeSize = v340;
        if ( FreeSize < 1 )
          break;
        v341 = *v10;
        if ( !(*v10)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v341);
          v341 = *v10;
        }
        if ( FreeSize >= v341->static_fields->LIMIT_FREE_SIZE )
          break;
        _4__this->fields.isErrorDialog = 1;
        v342 = v10;
        v343 = v11;
        Instance = SingletonMonoBehaviour_object___get_Instance(*v11);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v345 = LocalizationManager__Get((System_String_o *)StringLiteral_9419/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
        v346 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v346, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_417;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v345, v346, 0, 0LL);
        v11 = v343;
        v10 = v342;
LABEL_367:
        if ( _4__this->fields.isErrorDialog )
        {
          v347 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v347, 0LL);
          v400->fields.__2__current = (Il2CppObject *)v347;
          v24 = (PartyOrganizationUtility_o *)&v400->fields.__2__current;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v400->fields.__2__current,
            (int64_t)v347,
            v348,
            v349,
            v350,
            v351,
            v352,
            v353);
          v31 = 7;
          goto LABEL_416;
        }
      }
      readResult_5__2 = v400->fields._readResult_5__2;
      if ( !readResult_5__2 )
      {
LABEL_376:
        v8 = v400;
        v400->fields._isCacheCheck_5__3 = 0;
        goto LABEL_377;
      }
      if ( readResult_5__2 == 1 )
      {
        _4__this->fields.isReadAuth = 0;
        v355 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v355,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          v356);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                             v355,
                                                             (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_417;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_375:
        v357 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v357, 0LL);
        v400->fields.__2__current = (Il2CppObject *)v357;
        v24 = (PartyOrganizationUtility_o *)&v400->fields.__2__current;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v400->fields.__2__current,
          (int64_t)v357,
          v358,
          v359,
          v360,
          v361,
          v362,
          v363);
        v31 = 8;
        goto LABEL_416;
      }
      v381 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v382 = LocalizationManager__Get((System_String_o *)StringLiteral_9420/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        DispFriendCode = (Il2CppObject *)NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
        goto LABEL_400;
      }
      if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      DispFriendCode = (Il2CppObject *)AndroidUtil__GetFriendCodeFromOldDat(0LL);
      if ( !System_String__IsNullOrEmpty((System_String_o *)DispFriendCode, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v382 = LocalizationManager__Get((System_String_o *)StringLiteral_9420/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
LABEL_400:
        v381 = (Il2CppObject *)System_String__Format(v382, DispFriendCode, 0LL);
      }
      v384 = SingletonMonoBehaviour_object___get_Instance(*v11);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v385 = LocalizationManager__Get((System_String_o *)StringLiteral_9421/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
      v401.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v401.monitor = (void *)-1LL;
      v402 = v400->fields._readResult_5__2;
      v386 = System_Enum__ToString(&v401, 0LL);
      v387 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v386 )
        v388 = (Il2CppObject *)v386;
      else
        v388 = (Il2CppObject *)StringLiteral_1/*""*/;
      v389 = System_String__Format_63129848(v385, v381, v388, 0LL);
      v390 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v390, (Il2CppObject *)_4__this, Method_ManagementManager_EndQuitDialog__, 0LL);
      if ( !v384 )
        goto LABEL_417;
      CommonUI__OpenErrorDialog((CommonUI_o *)v384, v387, v389, v390, 0, 0LL);
      return 0;
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_33;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_47;
      goto LABEL_417;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_50;
    case 7:
      v400 = v8;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      goto LABEL_367;
    case 8:
      v400 = v8;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_375;
      goto LABEL_376;
    case 9:
      p_fields->__1__state = -1;
      goto LABEL_63;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_4BDBE5E )
      {
        sub_1C21E38(&DataManager_TypeInfo);
        byte_4BDBE5E = 1;
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
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_417;
      _4__this->fields.isReadGameData = 0;
      v90 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v90,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v91);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v90,
                                                           (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_417;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v92 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v92, 0LL);
      v8->fields._waitForServerTime_5__7 = v92;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._waitForServerTime_5__7,
        (int64_t)v92,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
      goto LABEL_89;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      if ( !_4__this->fields.isReadGameData )
      {
LABEL_89:
        waitForServerTime_5__7 = (int64_t)v8->fields._waitForServerTime_5__7;
        v8->fields.__2__current = (Il2CppObject *)waitForServerTime_5__7;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, waitForServerTime_5__7, v2, v3, v4, v5, v6, v7);
        v31 = 11;
        goto LABEL_416;
      }
      _4__this->fields.isReadGameData = 0;
      v99 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v99,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v100);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v99,
                                                           (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_417;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v101 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v101, 0LL);
      v8->fields._wait_5__8 = v101;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__8,
        (int64_t)v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
LABEL_203:
      wait_5__8 = (int64_t)v8->fields._wait_5__8;
      v8->fields.__2__current = (Il2CppObject *)wait_5__8;
      v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v24, wait_5__8, v2, v3, v4, v5, v6, v7);
      v31 = 12;
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_203;
      v109 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD9C33 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD9C33 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      }
      if ( !v109 )
        goto LABEL_417;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v109,
        (System_String_o *)StringLiteral_5229/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0LL);
      if ( v8->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          started = UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                      (UnityEngine_MonoBehaviour_o *)_4__this,
                      MasterData,
                      0LL);
          v8->fields.__2__current = (Il2CppObject *)started;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, (int64_t)started, v112, v113, v114, v115, v116, v117);
          v31 = 13;
          goto LABEL_416;
        }
      }
      else
      {
LABEL_108:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v8->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v119 = UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v8->fields.__2__current = (Il2CppObject *)v119;
            v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(v24, (int64_t)v119, v120, v121, v122, v123, v124, v125);
            v31 = 15;
            goto LABEL_416;
          }
        }
      }
      goto LABEL_417;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_4BDBE5F )
      {
        sub_1C21E38(&DataManager_TypeInfo);
        byte_4BDBE5F = 1;
      }
      v118 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v118 = DataManager_TypeInfo;
      }
      if ( v118->static_fields->readMasterDataResult == 1 )
        goto LABEL_108;
      if ( !v118->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v118);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v254;
      v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v24, (int64_t)v254, v255, v256, v257, v258, v259, v260);
      v31 = 14;
      goto LABEL_416;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_377;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_4BDBE60 )
      {
        sub_1C21E38(&DataManager_TypeInfo);
        byte_4BDBE60 = 1;
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
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v8->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_39782912((NetworkManager_o *)this, method);
          v297 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v297);
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v298 = UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v8->fields.__2__current = (Il2CppObject *)v298;
              v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v24, (int64_t)v298, v299, v300, v301, v302, v303, v304);
              v31 = 18;
              goto LABEL_416;
            }
          }
        }
        goto LABEL_417;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_417;
        _4__this->fields.isErrorDialog = 1;
        v128 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v129 = LocalizationManager__Get((System_String_o *)StringLiteral_9427/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v130 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v130, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v128 )
          goto LABEL_417;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
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
          0LL);
        v11 = (const MethodInfo_388D058 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_130:
        if ( _4__this->fields.isErrorDialog )
        {
          v131 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v131, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v131;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, (int64_t)v131, v132, v133, v134, v135, v136, v137);
          v31 = 16;
          goto LABEL_416;
        }
        if ( v8->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_339:
          v8->fields._waitForServerTime_5__7 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._waitForServerTime_5__7, 0LL, v2, v3, v4, v5, v6, v7);
          v8->fields._wait_5__8 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._wait_5__8, 0LL, v315, v316, v317, v318, v319, v320);
LABEL_377:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_417;
          DataManager__Initialize((DataManager_o *)this, 0LL);
          if ( !v8->fields.isReboot && !v8->fields._isCacheCheck_5__3 )
          {
            v8->fields._isCacheCheck_5__3 = 1;
            v364 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v364 = ManagementManager_TypeInfo;
            }
            if ( UnityEngine_PlayerPrefs__HasKey(v364->static_fields->RebootCacheClearKey, 0LL) )
            {
              v365 = v11;
              v366 = (Il2CppObject *)sub_1C22084(ManagementManager___c__DisplayClass35_0_TypeInfo);
              System_Object___ctor(v366, 0LL);
              v8->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)v366;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v8->fields.__8__1,
                (int64_t)v366,
                v367,
                v368,
                v369,
                v370,
                v371,
                v372);
              if ( !v8->fields.__8__1 )
                goto LABEL_417;
              v8->fields.__8__1->fields = 0;
              v373 = SingletonMonoBehaviour_object___get_Instance(*v11);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v374 = LocalizationManager__Get((System_String_o *)StringLiteral_7550/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
              v375 = LocalizationManager__Get((System_String_o *)StringLiteral_7548/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
              v376 = LocalizationManager__Get((System_String_o *)StringLiteral_7547/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
              v377 = LocalizationManager__Get((System_String_o *)StringLiteral_7546/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
              _8__1 = (Il2CppObject *)v8->fields.__8__1;
              v379 = v377;
              v380 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
              CommonConfirmDialog_ClickDelegate___ctor(
                v380,
                _8__1,
                Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__,
                0LL);
              if ( !v373 )
                goto LABEL_417;
              CommonUI__OpenConfirmDecideDlg(
                (CommonUI_o *)v373,
                v374,
                v375,
                v376,
                v379,
                v380,
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
                0LL);
              v11 = v365;
LABEL_63:
              v88 = v8->fields.__8__1;
              if ( !v88 )
                goto LABEL_417;
              if ( !v88->fields.confirmed )
              {
                v290 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v290, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v290;
                v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1C21DDC(v24, (int64_t)v290, v291, v292, v293, v294, v295, v296);
                v31 = 9;
                goto LABEL_416;
              }
              if ( v88->fields.isDecide )
              {
                if ( !_4__this )
                  goto LABEL_417;
                ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
              }
              v8->fields.__8__1 = 0LL;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, 0LL, v2, v3, v4, v5, v6, v7);
            }
            else
            {
              v391 = ManagementManager_TypeInfo;
              if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                v391 = ManagementManager_TypeInfo;
              }
              UnityEngine_PlayerPrefs__SetInt(v391->static_fields->RebootCacheClearKey, 1, 0LL);
              UnityEngine_PlayerPrefs__Save(0LL);
            }
          }
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance(*v11);
          if ( !this )
            goto LABEL_417;
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_417;
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__readMasterVersion((DataManager_o *)this, 0LL);
          if ( !_4__this )
            goto LABEL_417;
          v392 = UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   (System_Collections_IEnumerator_o *)this,
                   0LL);
          v8->fields.__2__current = (Il2CppObject *)v392;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, (int64_t)v392, v393, v394, v395, v396, v397, v398);
          v31 = 10;
          goto LABEL_416;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_417;
      }
      _4__this->fields.isErrorDialog = 1;
      v305 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v306 = LocalizationManager__Get((System_String_o *)StringLiteral_9428/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v307 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v307, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v305 )
        goto LABEL_417;
      CommonUI__OpenRetryDialog((CommonUI_o *)v305, (System_String_o *)StringLiteral_1/*""*/, v306, v307, 0, 0LL);
      v11 = (const MethodInfo_388D058 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_337:
      if ( _4__this->fields.isErrorDialog )
      {
        v308 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v308, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v308;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v308, v309, v310, v311, v312, v313, v314);
        v31 = 17;
        goto LABEL_416;
      }
      goto LABEL_339;
    case 0x10:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_130;
      goto LABEL_417;
    case 0x11:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      goto LABEL_337;
    case 0x12:
      v8->fields.__2__current = 0LL;
      v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&v24[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1C21DDC(v24, 0LL, v2, v3, v4, v5, v6, v7);
      v31 = 19;
      goto LABEL_416;
    case 0x13:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_204;
      goto LABEL_140;
    case 0x14:
      p_fields->__1__state = -1;
LABEL_140:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v138 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v138, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v138;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v138, v139, v140, v141, v142, v143, v144);
        v31 = 20;
        goto LABEL_416;
      }
LABEL_204:
      v8->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_303:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v283 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v283, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v283;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, (int64_t)v283, v284, v285, v286, v287, v288, v289);
          v31 = 21;
          goto LABEL_416;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_417;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12719/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v268 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v268 = ManagerConfig_TypeInfo;
          }
          if ( v268->static_fields->UseStandaloneAsset )
          {
            v8->fields._isLoad_5__4 = 1;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm((System_String_o *)StringLiteral_9490/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_417;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_317:
            v269 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v269, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v269;
            v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(v24, (int64_t)v269, v270, v271, v272, v273, v274, v275);
            v31 = 22;
            goto LABEL_416;
          }
LABEL_149:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getDownloadSize(0LL) >= 1 )
          {
            v145 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v145, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v145;
            v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(v24, (int64_t)v145, v146, v147, v148, v149, v150, v151);
            v31 = 23;
            goto LABEL_416;
          }
        }
LABEL_318:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__SetOnlineStatus(0LL);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_39782912((NetworkManager_o *)this, method);
          v276 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v276, 0.1, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v276;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, (int64_t)v276, v277, v278, v279, v280, v281, v282);
          v31 = 24;
          goto LABEL_416;
        }
        goto LABEL_417;
      }
LABEL_207:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_212:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v247 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v247, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v247;
              v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v24, (int64_t)v247, v248, v249, v250, v251, v252, v253);
              v31 = 25;
              goto LABEL_416;
            }
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v174 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12719/*"SYSTEM"*/,
                       _4__this->fields.downloadParallelMax,
                       0LL);
              v175 = UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v174,
                       0LL);
              v8->fields.__2__current = (Il2CppObject *)v175;
              v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v24, (int64_t)v175, v176, v177, v178, v179, v180, v181);
              v31 = 26;
              goto LABEL_416;
            }
          }
        }
        goto LABEL_417;
      }
LABEL_217:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__LoadAssetData(0LL);
LABEL_220:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4BDBE62 )
      {
        sub_1C21E38(&LocalizationManager_TypeInfo);
        byte_4BDBE62 = 1;
      }
      v182 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v182 = LocalizationManager_TypeInfo;
      }
      if ( v182->static_fields->isBusySetAssetData )
      {
        v183 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v183, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v183;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v183, v184, v185, v186, v187, v188, v189);
        v31 = 29;
        goto LABEL_416;
      }
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_231:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_4BDBE63 )
      {
        sub_1C21E38(&FSUtility_TypeInfo);
        byte_4BDBE63 = 1;
      }
      v190 = FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v190 = FSUtility_TypeInfo;
      }
      if ( v190->static_fields->isBusySetAssetData )
      {
        v191 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v191, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v191;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v191, v192, v193, v194, v195, v196, v197);
        v31 = 30;
        goto LABEL_416;
      }
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__initializeAssetStorage(0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__Initialize(0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_417;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, method);
LABEL_247:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__IsBusyInitialize(0LL) )
      {
        v198 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v198, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v198;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v198, v199, v200, v201, v202, v203, v204);
        v31 = 31;
        goto LABEL_416;
      }
      v8->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_252:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_417;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v8->fields._overrideAssetSoundNameWaitCount_5__5;
        v8->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v206 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v206, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v206;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, (int64_t)v206, v207, v208, v209, v210, v211, v212);
          v31 = 32;
          goto LABEL_416;
        }
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_260:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( LOBYTE(this[9].monitor) )
      {
        v213 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v213, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v213;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v213, v214, v215, v216, v217, v218, v219);
        v31 = 33;
        goto LABEL_416;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initializeAssetStorage(0LL);
LABEL_266:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v220 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v220, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v220;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v220, v221, v222, v223, v224, v225, v226);
        v31 = 34;
        goto LABEL_416;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_271:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
      {
        v227 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v227, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v227;
        v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v24, (int64_t)v227, v228, v229, v230, v231, v232, v233);
        v31 = 35;
        goto LABEL_416;
      }
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
      {
        if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        PurchaseBehaviour__Ready(0LL);
      }
      if ( !v8->fields._isLoad_5__4 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_417;
        this = (ManagementManager__startCheckAll_d__35_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_417;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_344:
          v321 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v321, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v321;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, (int64_t)v321, v322, v323, v324, v325, v326, v327);
          v31 = 37;
          goto LABEL_416;
        }
LABEL_289:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff(_4__this, method);
          v8->fields.__2__current = 0LL;
          v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v24, 0LL, v241, v242, v243, v244, v245, v246);
          v31 = 38;
          goto LABEL_416;
        }
        goto LABEL_417;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9490/*"NOW_LOADING"*/, 0LL) )
      {
LABEL_287:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_417;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
        goto LABEL_289;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__fadeoutBgm(1.0, 0LL);
      v234 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v234, 1.0, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v234;
      v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v24, (int64_t)v234, v235, v236, v237, v238, v239, v240);
      v31 = 36;
LABEL_416:
      *(_DWORD *)&v24[-1].fields._IsQuestStartMenuMode_k__BackingField = v31;
      return 1;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_303;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_318;
      goto LABEL_317;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_149;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_207;
    case 0x19:
      p_fields->__1__state = -1;
      goto LABEL_212;
    case 0x1A:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_217;
      v8->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_4BDBE61 )
      {
        sub_1C21E38(&LogoMain_TypeInfo);
        byte_4BDBE61 = 1;
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
        SoundManager__playBgm((System_String_o *)StringLiteral_9490/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_172:
      v153 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v153, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v153;
      v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v24, (int64_t)v153, v154, v155, v156, v157, v158, v159);
      v31 = 27;
      goto LABEL_416;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_172;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_298:
      v261 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v261, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v261;
      v24 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v24, (int64_t)v261, v262, v263, v264, v265, v266, v267);
      v31 = 28;
      goto LABEL_416;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_298;
      v160 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v160 = (_QWORD *)sub_1C21E50(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v161 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v160, v160[4]);
      OverwriteAssetSoundName__PlaySystemSe(v161, 0, 0, v162);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      goto LABEL_217;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_220;
    case 0x1E:
      p_fields->__1__state = -1;
      goto LABEL_231;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_247;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_252;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_260;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_266;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_271;
    case 0x24:
      p_fields->__1__state = -1;
      goto LABEL_287;
    case 0x25:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_344;
      v163 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v163 = (_QWORD *)sub_1C21E50(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v164 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v163, v163[4]);
      OverwriteAssetSoundName__PlaySystemSe(v164, 0, 0, v165);
      goto LABEL_287;
    case 0x26:
      p_fields->__1__state = -1;
      v166 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v166 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v166->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        v168 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v168);
        OptionManager__SetNotiffication(Notiffication, 1, v170);
        v171 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v171 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v171->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_417;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v167);
      if ( v8->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v172);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 9, 1, 0LL, 0LL);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ManagementManager__startCheckAll_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__startCheckAll_d__35__System_Collections_IEnumerator_Reset(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ManagementManager__startCheckAll_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__startCheckAll_d__35__System_Collections_IEnumerator_get_Current(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__startCheckAll_d__35__System_IDisposable_Dispose(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  ;
}