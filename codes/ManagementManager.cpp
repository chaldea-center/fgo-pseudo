void __fastcall ManagementManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  struct ManagementManager_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  struct ManagementManager_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct ManagementManager_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BC72C9 & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_8197/*"IsNotificationStatusSend"*/, v8);
    sub_1C1ABD4(&StringLiteral_8209/*"IsReBootCacheClearKey"*/, v9);
    sub_1C1ABD4(&StringLiteral_21265/*"ja-JP"*/, v10);
    sub_1C1ABD4(&StringLiteral_25315/*"yyyy年MM月dd日HH時mm分"*/, v11);
    byte_4BC72C9 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8197/*"IsNotificationStatusSend"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8197/*"IsNotificationStatusSend"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_8209/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8209/*"IsReBootCacheClearKey"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->RebootCacheClearKey, v12, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_25315/*"yyyy年MM月dd日HH時mm分"*/;
  v21 = ManagementManager_TypeInfo->static_fields;
  v21->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_25315/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v21->DATE_TIME_DISP_FORMAT, v20, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_21265/*"ja-JP"*/;
  v29 = ManagementManager_TypeInfo->static_fields;
  v29->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_21265/*"ja-JP"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v29->DEFAULT_CULTURE_NAME, v28, v30, v31, v32, v33, v34, v35);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BC72C8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_4BC72C8 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_387ACC0 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void __fastcall ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  ManagementManager_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  float v26; // s0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject *v46; // x19
  Il2CppObject *v47; // x19
  float v48; // [xsp+Ch] [xbp-34h] BYREF

  v48 = ratio;
  if ( (byte_4BC72B1 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1C1ABD4(&string___TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_835/*"):"*/, v9);
    sub_1C1ABD4(&StringLiteral_6887/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1C1ABD4(&StringLiteral_794/*"(ratio: "*/, v11);
    byte_4BC72B1 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6887/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1C1AC7C(string___TypeInfo, 5LL);
    if ( this )
    {
      v18 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.isInitializingData,
        (int64_t)errorText,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v25 = StringLiteral_794/*"(ratio: "*/;
      v18->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_794/*"(ratio: "*/;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v18->fields.AvalonSceneManager, v25, v19, v20, v21, v22, v23, v24);
      this = (ManagementManager_o *)System_Single__ToString(v26, (const MethodInfo *)&v48);
      if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 2
        || (v18->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&v18->fields.debugInfoRootObject,
              (int64_t)this,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32),
            LODWORD(v18->fields.m_CancellationTokenSource) <= 3)
        || (v39 = StringLiteral_835/*"):"*/,
            v18->fields.statusLabel = (struct UILabel_o *)StringLiteral_835/*"):"*/,
            sub_1C1AB78((PartyOrganizationUtility_o *)&v18->fields.statusLabel, v39, v33, v34, v35, v36, v37, v38),
            LODWORD(v18->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1C1AE38(this, errorText);
      }
      v18->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v18->fields._videoPlayer_k__BackingField,
        (int64_t)exceptionMessage,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v46 = (Il2CppObject *)System_String__Concat_63053896((System_String_array *)v18, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v46, 0LL);
      return;
    }
LABEL_19:
    sub_1C1AE30(this, errorText);
  }
  v47 = (Il2CppObject *)System_String__Concat_63040368(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v47, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BC72AD & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_4BC72AD = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_387AC14 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4BC72C6 & 1) == 0 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, boot);
    byte_4BC72C6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4BC72C5 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC72C5 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1C1AE30(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4BC72AB & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager_TypeInfo, v1);
    byte_4BC72AB = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  v2->static_fields->isDuringStartup = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndDifferentCreateUserServerDialog(
        ManagementManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC72BB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_4BC72BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4BC72BA & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4BC72BA = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70587684(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4BC72B9 & 1) != 0 )
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
    sub_1C1ABD4(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4BC72B9 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70587684(0LL);
}


void __fastcall ManagementManager__HandleLog(
        ManagementManager_o *this,
        System_String_o *condition,
        System_String_o *stackTrace,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4BC72B2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, condition);
    sub_1C1ABD4(&StringLiteral_6302/*"ErrorLog: "*/, v8);
    sub_1C1ABD4(&StringLiteral_56/*"\n StackTrace: "*/, v9);
    byte_4BC72B2 = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v11 = System_String__Concat_63053632(
            (System_String_o *)StringLiteral_6302/*"ErrorLog: "*/,
            condition,
            (System_String_o *)StringLiteral_56/*"\n StackTrace: "*/,
            stackTrace,
            0LL);
    if ( !Instance )
      sub_1C1AE30(v11, v12);
    CrashReporter__SendErrorLogReport((CrashReporter_o *)Instance, v11, 0LL);
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

  if ( (byte_4BC72B4 & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo, method);
    byte_4BC72B4 = 1;
  }
  v3 = sub_1C1AE20(ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4BC72C2 & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager_TypeInfo, method);
    byte_4BC72C2 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4BC6B7A )
  {
    sub_1C1ABD4(&ManagementManager_TypeInfo, method);
    byte_4BC6B7A = 1;
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
  __int64 v2; // x1
  __int64 v3; // x1
  NetworkManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BC72C3 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v2);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_4BC72C3 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__CommunicationIsBusy((const MethodInfo *)v4) )
    return 1;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__LoadIsBusy(0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v7);
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
  __int64 v1; // x1
  __int64 v2; // x1
  ManagementManager_c *v3; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4BC72C7 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1C1ABD4(&ManagementManager_TypeInfo, v2);
    byte_4BC72C7 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  DEFAULT_CULTURE_NAME = v3->static_fields->DEFAULT_CULTURE_NAME;
  if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
  SpecificCulture = System_Globalization_CultureInfo__CreateSpecificCulture(DEFAULT_CULTURE_NAME, 0LL);
  System_Globalization_CultureInfo__set_CurrentCulture(SpecificCulture, 0LL);
}


void __fastcall ManagementManager__RebootCacheClear(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0
  ManagementManager_c *v3; // x0

  if ( (byte_4BC72AC & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager_TypeInfo, v1);
    byte_4BC72AC = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v2->static_fields->RebootCacheClearKey, 0LL) )
  {
    v3 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v3 = ManagementManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->RebootCacheClearKey, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__SetupFirebaseAppCheck(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4BC72B5 & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo, method);
    byte_4BC72B5 = 1;
  }
  v2 = sub_1C1AE20(ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4BC72B6 & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo, method);
    byte_4BC72B6 = 1;
  }
  v2 = sub_1C1AE20(ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void __fastcall ManagementManager__Start(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  intptr_t v8; // w21
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *v12; // x1
  System_RuntimeTypeHandle_o v13; // 0:w0.4

  if ( (byte_4BC72AE & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Application_TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&System_Type_TypeInfo, v5);
    sub_1C1ABD4(&UnityGamingServicesBehaviour_var, v6);
    byte_4BC72AE = 1;
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
  v8 = (int)UnityGamingServicesBehaviour_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v13.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v13, 0LL);
  if ( !gameObject )
    sub_1C1AE30(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4BC72C4 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1C1ABD4(&UnityEngine_Application_TypeInfo, method);
    byte_4BC72C4 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_70587684(0LL);
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
  __int64 v3; // x1
  ManagementManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BC72C1 & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager_TypeInfo, result);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4BC72C1 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v6);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ManagerConfig_c *v9; // x0
  _BOOL8 _38884588; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4BC72C0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v4);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C1ABD4(&TutorialFlag_TypeInfo, v8);
    byte_4BC72C0 = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    goto LABEL_9;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38884588 = TutorialFlag__Get_38884588(102, 0LL);
  if ( _38884588 )
  {
LABEL_9:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v14);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C1AE30(0LL, v16);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_38884588, v11, v12);
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
  __int64 v4; // x1
  ManagementManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BC72BE & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager_TypeInfo, result);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4BC72BE = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v7);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, this->fields.scenetype, 0, 0LL, 0LL);
}


void __fastcall ManagementManager__callbackTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ManagerConfig_c *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_4BC72BD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ManagementManager_callbackTopHome__, result);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v4);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C1ABD4(&TutorialFlag_TypeInfo, v8);
    byte_4BC72BD = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    goto LABEL_9;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38884588(102, 0LL) )
  {
LABEL_9:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v13);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C1AE30(0LL, v15);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTopHome(this, v10, v11);
  }
}


void __fastcall ManagementManager__createMovieObj(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct AvalonVideoPlayer_o **p_videoPlayer_k__BackingField; // x20
  UnityEngine_Object_o *videoPlayer_k__BackingField; // x21
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *Component_object; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  AvalonVideoPlayer_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_4BC72AF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1C1ABD4(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_4728/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1C1ABD4(&StringLiteral_9333/*"MovieRoot"*/, v7);
    byte_4BC72AF = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4728/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_1C1AE20(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_9333/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  v11,
                  (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields._videoPlayer_k__BackingField,
            (int64_t)v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20),
          !v10)
      || (v21 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v21) )
    {
      sub_1C1AE30(Component_object, v13);
    }
    AvalonVideoPlayer__initialize(v21, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34762256(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BC72A9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_4BC72A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v3);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4BC72AA & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager_TypeInfo, v1);
    byte_4BC72AA = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  return v2->static_fields->isDuringStartup;
}


AvalonVideoPlayer_o *__fastcall ManagementManager__get_videoPlayer(ManagementManager_o *this, const MethodInfo *method)
{
  return this->fields._videoPlayer_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__reboot(
        ManagementManager_o *this,
        bool isLogin,
        bool isFadeInit,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  ManagementManager_c *v22; // x0
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  System_Collections_IEnumerator_o *v28; // x1

  if ( (byte_4BC72B0 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, isLogin);
    sub_1C1ABD4(&CTouch_TypeInfo, v7);
    sub_1C1ABD4(&CommonEffectManager_TypeInfo, v8);
    sub_1C1ABD4(&FirebaseScript_TypeInfo, v9);
    sub_1C1ABD4(&System_GC_TypeInfo, v10);
    sub_1C1ABD4(&ManagementManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1C1ABD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_1C1ABD4(&SoundManager_TypeInfo, v21);
    byte_4BC72B0 = 1;
  }
  if ( !this->fields.isInitializingData )
  {
    this->fields.isInitializingData = 1;
    v22 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v22 = ManagementManager_TypeInfo;
    }
    v22->static_fields->isDuringStartup = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1C1AE30(Instance, v24);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_64086932(0LL);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v25 )
      sub_1C1AE30(0LL, v26);
    AdManager__Initialize((AdManager_o *)v25, 2, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    v28 = ManagementManager__startCheckAll(this, 1, isLogin, v27);
    UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4BC72BC & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4BC72BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1C1AE20(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v7);
  if ( !Instance )
    sub_1C1AE30(v8, v9);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v10);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4BC72BF & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4BC72BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1C1AE20(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v7);
  if ( !Instance )
    sub_1C1AE30(v8, v9);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v10);
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
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._videoPlayer_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4BC72B3 & 1) == 0 )
  {
    sub_1C1ABD4(&ManagementManager__startCheckAll_d__35_TypeInfo, isReboot);
    byte_4BC72B3 = 1;
  }
  v7 = isLogin;
  v8 = sub_1C1AE20(ManagementManager__startCheckAll_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BC72B7 & 1) == 0 )
  {
    sub_1C1ABD4(&DataManager_TypeInfo, method);
    byte_4BC72B7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
}


void __fastcall ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ScrTerminalListTop_c *v5; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4BC72B8 & 1) == 0 )
  {
    sub_1C1ABD4(&DataManager_TypeInfo, method);
    sub_1C1ABD4(&ScrTerminalListTop_TypeInfo, v2);
    sub_1C1ABD4(&ServantCommentManager_TypeInfo, v3);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v4);
    byte_4BC72B8 = 1;
  }
  MovieFileMerge__Delete_38946984(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC4BDD )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v6);
    byte_4BC4BDD = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v6; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  ManagementManager_o *v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_IEnumerator_o *v21; // x1
  ManagementManager_o *started; // x0
  const MethodInfo *v23; // x1
  System_Collections_IEnumerator_o *v24; // x1

  if ( (byte_4BC72CB & 1) == 0 )
  {
    sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_1C1ABD4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_4BC72CB = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C1AE30(0LL, v16);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v17 )
      sub_1C1AE30(0LL, v18);
    AdManager__Initialize((AdManager_o *)v17, 1, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    if ( !_4__this )
      sub_1C1AE30(v19, v20);
    v21 = ManagementManager__SetupFirebaseAppCheck(v19, v20);
    started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_70779684(_4__this, v21, 0LL);
    v24 = ManagementManager__SetupFirebaseCrashlytics(started, v23);
    UnityEngine_MonoBehaviour__StartCoroutine_70779684(_4__this, v24, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t _1__state; // w8
  FirebaseScript_c *v16; // x0
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  FirebaseScript_c *v24; // x0
  FirebaseScript_c *v25; // x0
  Il2CppObject **v26; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  FirebaseScript_c *v29; // x0
  FirebaseScript_c *v30; // x0
  System_String_o *prevKeyName_5__3; // x0
  System_String_o *v32; // x1
  __int64 v33; // x1
  float time; // s8
  FirebaseScript_c *v35; // x0
  float beginTime_5__2; // s9
  FirebaseScript_c *v37; // x0
  float v38; // s8
  char IsNullOrEmpty; // w0
  char v40; // w22
  bool v41; // w23
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x20
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  System_String_o *v51; // x20
  FirebaseScript_c *v52; // x0
  char v53[4]; // [xsp+8h] [xbp-48h] BYREF
  float v54; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BC72CC & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, method);
    sub_1C1ABD4(&FirebaseScript_TypeInfo, v9);
    sub_1C1ABD4(&float_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_870/*", AppCheckErrorMessage: "*/, v11);
    sub_1C1ABD4(&StringLiteral_17080/*"appCheckPrevMessage"*/, v12);
    sub_1C1ABD4(&StringLiteral_6043/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v13);
    sub_1C1ABD4(&StringLiteral_8135/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/, v14);
    byte_4BC72CC = 1;
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
      if ( !byte_4BC73C3 )
      {
        sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
        byte_4BC73C3 = 1;
      }
      v16 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v16 = FirebaseScript_TypeInfo;
      }
      v16->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0LL);
      v17 = StringLiteral_17080/*"appCheckPrevMessage"*/;
      this->fields._prevKeyName_5__3 = (struct System_String_o *)StringLiteral_17080/*"appCheckPrevMessage"*/;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields._prevKeyName_5__3, v17, v18, v19, v20, v21, v22, v23);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4BC73C4 )
      {
        sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
        byte_4BC73C4 = 1;
      }
      v24 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v24 = FirebaseScript_TypeInfo;
      }
      if ( !v24->static_fields->_IsFirebaseInitialized_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_1C1AB78((PartyOrganizationUtility_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !v24->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v24);
      if ( !FirebaseScript__GetAppCheckToken(0LL) )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4BC73C5 )
        {
          sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
          byte_4BC73C5 = 1;
        }
        v29 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v29 = FirebaseScript_TypeInfo;
        }
        if ( v29->static_fields->_IsSendAppCheckToken_k__BackingField )
          return 0;
        if ( !v29->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v29);
        if ( !byte_4BC2584 )
        {
          sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
          byte_4BC2584 = 1;
        }
        v30 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v30 = FirebaseScript_TypeInfo;
        }
        if ( v30->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        prevKeyName_5__3 = this->fields._prevKeyName_5__3;
        v32 = (System_String_o *)StringLiteral_8135/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        goto LABEL_71;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4BC71F2 )
      {
        sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
        byte_4BC71F2 = 1;
      }
      v25 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v25 = FirebaseScript_TypeInfo;
      }
      if ( v25->static_fields->_IsRunningGetAppCheckToken_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        v26 = &this->fields.__2__current;
        sub_1C1AB78((PartyOrganizationUtility_o *)v26, 0LL, v2, v3, v4, v5, v6, v7);
        *((_DWORD *)v26 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0LL);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4BC73C5 )
      {
        sub_1C1ABD4(&FirebaseScript_TypeInfo, v33);
        byte_4BC73C5 = 1;
      }
      v35 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v35 = FirebaseScript_TypeInfo;
      }
      if ( v35->static_fields->_IsSendAppCheckToken_k__BackingField )
        return 0;
      beginTime_5__2 = this->fields._beginTime_5__2;
      if ( !v35->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v35);
      if ( !byte_4BC73C6 )
      {
        sub_1C1ABD4(&FirebaseScript_TypeInfo, v33);
        byte_4BC73C6 = 1;
      }
      v37 = FirebaseScript_TypeInfo;
      v38 = time - beginTime_5__2;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v37 = FirebaseScript_TypeInfo;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v37->static_fields->_AppCheckToken_k__BackingField, 0LL);
      v40 = ~IsNullOrEmpty;
      v41 = (IsNullOrEmpty & 1) == 0;
      v54 = v38;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v42, v43, v44);
      v53[0] = v41;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v53, v46, v47, v48);
      v51 = System_String__Format_63054740((System_String_o *)StringLiteral_6043/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v45, v49, 0LL);
      if ( (v40 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4BC73C7 )
        {
          sub_1C1ABD4(&FirebaseScript_TypeInfo, v50);
          byte_4BC73C7 = 1;
        }
        v52 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v52 = FirebaseScript_TypeInfo;
        }
        v51 = System_String__Concat_63051628(
                v51,
                (System_String_o *)StringLiteral_870/*", AppCheckErrorMessage: "*/,
                v52->static_fields->_AppCheckTokenError_k__BackingField,
                0LL);
      }
      prevKeyName_5__3 = this->fields._prevKeyName_5__3;
      v32 = v51;
LABEL_71:
      UnityEngine_PlayerPrefs__SetString(prevKeyName_5__3, v32, 0LL);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_ManagementManager__SetupFirebaseAppCheck_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  __int64 v9; // x1
  FirebaseScript_c *v10; // x0
  FirebaseScript_c *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4BC72CD & 1) == 0 )
  {
    sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v9);
    byte_4BC72CD = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4BC73C4 )
  {
    sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
    byte_4BC73C4 = 1;
  }
  v10 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v10 = FirebaseScript_TypeInfo;
  }
  if ( v10->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    if ( !byte_4BC2584 )
    {
      sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
      byte_4BC2584 = 1;
    }
    v11 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v11 = FirebaseScript_TypeInfo;
    }
    if ( v11->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_1C1AE30(0LL, v13);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0LL);
    }
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1C1AB78((PartyOrganizationUtility_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_ManagementManager__SetupFirebaseCrashlytics_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager___c__DisplayClass35_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass35_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4BC72CA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, flag);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__, v6);
    sub_1C1ABD4(&ManagementManager___c__DisplayClass35_1_TypeInfo, v7);
    byte_4BC72CA = 1;
  }
  v8 = sub_1C1AE20(ManagementManager___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1C1AE30(v9, v10);
  }
  CommonUI__CloseConfirmDialog_31099464((CommonUI_o *)Instance, v18, 0LL);
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
    sub_1C1AE30(this, method);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  ManagementManager__startCheckAll_d__35_Fields *p_fields; // x8
  ManagerConfig_c **v79; // x26
  const MethodInfo_387A8A8 **v80; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v83; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v92; // x0
  PartyOrganizationUtility_o *v93; // x19
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int v100; // w8
  System_Collections_IEnumerator_o *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  OptionManager_c *v108; // x0
  const MethodInfo *v109; // x0
  const MethodInfo *v110; // x0
  UnityEngine_Application_LogCallback_o *v111; // x21
  UnityEngine_WaitForEndOfFrame_o *v112; // x20
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  ManagementManager__startCheckAll_d__35_o *v125; // x21
  int64_t v126; // x1
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int64_t v140; // x1
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  EncryptedPlayerPrefs_c *v147; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v149; // x20
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  const MethodInfo *v156; // x1
  struct ManagementManager___c__DisplayClass35_0_o *v157; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v159; // x21
  const MethodInfo *v160; // x3
  UnityEngine_WaitForEndOfFrame_o *v161; // x20
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  NetworkManager_ResultCallbackFunc_o *v168; // x21
  const MethodInfo *v169; // x3
  UnityEngine_WaitForEndOfFrame_o *v170; // x20
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t waitForServerTime_5__7; // x1
  Il2CppObject *v178; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *started; // x0
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  DataManager_c *v187; // x0
  UnityEngine_Coroutine_o *v188; // x0
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  DataManager_c *v195; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v197; // x21
  System_String_o *v198; // x22
  ErrorDialog_ClickDelegate_o *v199; // x23
  UnityEngine_WaitForEndOfFrame_o *v200; // x20
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  UnityEngine_WaitForEndOfFrame_o *v207; // x20
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  UnityEngine_WaitForEndOfFrame_o *v214; // x20
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  __int64 v221; // x1
  LogoMain_c *v222; // x0
  UnityEngine_WaitForEndOfFrame_o *v223; // x20
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  _QWORD *v230; // x0
  System_Reflection_MethodBase_o *v231; // x0
  const MethodInfo *v232; // x3
  _QWORD *v233; // x0
  System_Reflection_MethodBase_o *v234; // x0
  const MethodInfo *v235; // x3
  ManagementManager_c *v236; // x0
  const MethodInfo *v237; // x2
  OptionManager_c *v238; // x0
  bool Notiffication; // w0
  const MethodInfo *v240; // x2
  ManagementManager_c *v241; // x0
  const MethodInfo *v242; // x1
  int64_t wait_5__8; // x1
  System_Collections_IEnumerator_o *v244; // x0
  UnityEngine_Coroutine_o *v245; // x0
  int64_t v246; // x2
  int32_t v247; // w3
  System_String_o *v248; // x4
  BattleSetupInfo_o *v249; // x5
  FollowerInfo_o *v250; // x6
  PartyListViewItem_o *v251; // x7
  LocalizationManager_c *v252; // x0
  UnityEngine_WaitForEndOfFrame_o *v253; // x20
  int64_t v254; // x2
  int32_t v255; // w3
  System_String_o *v256; // x4
  BattleSetupInfo_o *v257; // x5
  FollowerInfo_o *v258; // x6
  PartyListViewItem_o *v259; // x7
  FSUtility_c *v260; // x0
  UnityEngine_WaitForEndOfFrame_o *v261; // x20
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  UnityEngine_WaitForEndOfFrame_o *v268; // x20
  int64_t v269; // x2
  int32_t v270; // w3
  System_String_o *v271; // x4
  BattleSetupInfo_o *v272; // x5
  FollowerInfo_o *v273; // x6
  PartyListViewItem_o *v274; // x7
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v276; // x20
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
  UnityEngine_WaitForEndOfFrame_o *v297; // x20
  int64_t v298; // x2
  int32_t v299; // w3
  System_String_o *v300; // x4
  BattleSetupInfo_o *v301; // x5
  FollowerInfo_o *v302; // x6
  PartyListViewItem_o *v303; // x7
  UnityEngine_WaitForSeconds_o *v304; // x20
  int64_t v305; // x2
  int32_t v306; // w3
  System_String_o *v307; // x4
  BattleSetupInfo_o *v308; // x5
  FollowerInfo_o *v309; // x6
  PartyListViewItem_o *v310; // x7
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  UnityEngine_WaitForEndOfFrame_o *v317; // x20
  int64_t v318; // x2
  int32_t v319; // w3
  System_String_o *v320; // x4
  BattleSetupInfo_o *v321; // x5
  FollowerInfo_o *v322; // x6
  PartyListViewItem_o *v323; // x7
  UnityEngine_WaitForEndOfFrame_o *v324; // x20
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  UnityEngine_WaitForEndOfFrame_o *v331; // x20
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  ManagerConfig_c *v338; // x0
  UnityEngine_WaitForEndOfFrame_o *v339; // x20
  int64_t v340; // x2
  int32_t v341; // w3
  System_String_o *v342; // x4
  BattleSetupInfo_o *v343; // x5
  FollowerInfo_o *v344; // x6
  PartyListViewItem_o *v345; // x7
  UnityEngine_WaitForSeconds_o *v346; // x20
  int64_t v347; // x2
  int32_t v348; // w3
  System_String_o *v349; // x4
  BattleSetupInfo_o *v350; // x5
  FollowerInfo_o *v351; // x6
  PartyListViewItem_o *v352; // x7
  UnityEngine_WaitForEndOfFrame_o *v353; // x20
  int64_t v354; // x2
  int32_t v355; // w3
  System_String_o *v356; // x4
  BattleSetupInfo_o *v357; // x5
  FollowerInfo_o *v358; // x6
  PartyListViewItem_o *v359; // x7
  UnityEngine_WaitForEndOfFrame_o *v360; // x20
  int64_t v361; // x2
  int32_t v362; // w3
  System_String_o *v363; // x4
  BattleSetupInfo_o *v364; // x5
  FollowerInfo_o *v365; // x6
  PartyListViewItem_o *v366; // x7
  ManagementManager_c *v367; // x0
  UnityEngine_Coroutine_o *v368; // x0
  int64_t v369; // x2
  int32_t v370; // w3
  System_String_o *v371; // x4
  BattleSetupInfo_o *v372; // x5
  FollowerInfo_o *v373; // x6
  PartyListViewItem_o *v374; // x7
  Il2CppObject *v375; // x21
  System_String_o *v376; // x22
  ErrorDialog_ClickDelegate_o *v377; // x23
  UnityEngine_WaitForEndOfFrame_o *v378; // x20
  int64_t v379; // x2
  int32_t v380; // w3
  System_String_o *v381; // x4
  BattleSetupInfo_o *v382; // x5
  FollowerInfo_o *v383; // x6
  PartyListViewItem_o *v384; // x7
  int64_t v385; // x2
  int32_t v386; // w3
  System_String_o *v387; // x4
  BattleSetupInfo_o *v388; // x5
  FollowerInfo_o *v389; // x6
  PartyListViewItem_o *v390; // x7
  UnityEngine_WaitForEndOfFrame_o *v391; // x20
  int64_t v392; // x2
  int32_t v393; // w3
  System_String_o *v394; // x4
  BattleSetupInfo_o *v395; // x5
  FollowerInfo_o *v396; // x6
  PartyListViewItem_o *v397; // x7
  UnityEngine_WaitForEndOfFrame_o *v398; // x20
  int64_t v399; // x2
  int32_t v400; // w3
  System_String_o *v401; // x4
  BattleSetupInfo_o *v402; // x5
  FollowerInfo_o *v403; // x6
  PartyListViewItem_o *v404; // x7
  System_Action_object__o *v405; // x21
  System_Action_object__o *v406; // x22
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v410; // x0
  ManagerConfig_c *v411; // x0
  ManagerConfig_c **v412; // x19
  const MethodInfo_387A8A8 **v413; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v415; // x22
  ErrorDialog_ClickDelegate_o *v416; // x23
  UnityEngine_WaitForEndOfFrame_o *v417; // x20
  int64_t v418; // x2
  int32_t v419; // w3
  System_String_o *v420; // x4
  BattleSetupInfo_o *v421; // x5
  FollowerInfo_o *v422; // x6
  PartyListViewItem_o *v423; // x7
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v425; // x21
  const MethodInfo *v426; // x3
  UnityEngine_WaitForEndOfFrame_o *v427; // x20
  int64_t v428; // x2
  int32_t v429; // w3
  System_String_o *v430; // x4
  BattleSetupInfo_o *v431; // x5
  FollowerInfo_o *v432; // x6
  PartyListViewItem_o *v433; // x7
  ManagementManager_c *v434; // x0
  const MethodInfo_387A8A8 **v435; // x28
  Il2CppObject *v436; // x21
  int64_t v437; // x2
  int32_t v438; // w3
  System_String_o *v439; // x4
  BattleSetupInfo_o *v440; // x5
  FollowerInfo_o *v441; // x6
  PartyListViewItem_o *v442; // x7
  Il2CppObject *v443; // x21
  System_String_o *v444; // x22
  System_String_o *v445; // x24
  System_String_o *v446; // x25
  System_String_o *v447; // x0
  Il2CppObject *_8__1; // x27
  System_String_o *v449; // x23
  CommonConfirmDialog_ClickDelegate_o *v450; // x26
  Il2CppObject *v451; // x21
  System_String_o *v452; // x21
  Il2CppObject *DispFriendCode; // x22
  Il2CppObject *v454; // x22
  System_String_o *v455; // x23
  System_String_o *v456; // x0
  System_String_o *v457; // x19
  Il2CppObject *v458; // x2
  System_String_o *v459; // x21
  ErrorDialog_ClickDelegate_o *v460; // x23
  ManagementManager_c *v461; // x0
  UnityEngine_Coroutine_o *v462; // x0
  int64_t v463; // x2
  int32_t v464; // w3
  System_String_o *v465; // x4
  BattleSetupInfo_o *v466; // x5
  FollowerInfo_o *v467; // x6
  PartyListViewItem_o *v468; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__35_o *v470; // [xsp+40h] [xbp-80h]
  System_Enum_o v471; // [xsp+48h] [xbp-78h] BYREF
  int32_t v472; // [xsp+58h] [xbp-68h]

  v8 = this;
  if ( (byte_4BC72CE & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_string__TypeInfo, method);
    sub_1C1ABD4(&AndroidUtil_TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Application_TypeInfo, v10);
    sub_1C1ABD4(&AssetManager_TypeInfo, v11);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v12);
    sub_1C1ABD4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v13);
    sub_1C1ABD4(&ErrorDialog_ClickDelegate_TypeInfo, v14);
    sub_1C1ABD4(&CommonServicePluginScript_TypeInfo, v15);
    sub_1C1ABD4(&DataManager_TypeInfo, v16);
    sub_1C1ABD4(&EncryptedPlayerPrefs_TypeInfo, v17);
    sub_1C1ABD4(&FSUtility_TypeInfo, v18);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v19);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v20);
    sub_1C1ABD4(&UnityEngine_Application_LogCallback_TypeInfo, v21);
    sub_1C1ABD4(&LogoMain_TypeInfo, v22);
    sub_1C1ABD4(&Method_ManagementManager_EndLogDialog__, v23);
    sub_1C1ABD4(&Method_ManagementManager_EndQuitDialog__, v24);
    sub_1C1ABD4(&Method_ManagementManager_EndRetryDialog__, v25);
    sub_1C1ABD4(&Method_ManagementManager_HandleLog__, v26);
    sub_1C1ABD4(&Method_ManagementManager_NotifyRequestPermissionsDenied__, v27);
    sub_1C1ABD4(&Method_ManagementManager_NotifyRequestPermissionsGranted__, v28);
    sub_1C1ABD4(&Method_ManagementManager_callbackAccountRegist__, v29);
    sub_1C1ABD4(&Method_ManagementManager_callbackTopGameData__, v30);
    sub_1C1ABD4(&ManagementManager_TypeInfo, v31);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v32);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_AccountRegistRequest___, v33);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TopGameDataRequest___, v34);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v35);
    sub_1C1ABD4(&OptionManager_TypeInfo, v36);
    sub_1C1ABD4(&PurchaseBehaviour_TypeInfo, v37);
    sub_1C1ABD4(&NetworkManager_ReadResult_TypeInfo, v38);
    sub_1C1ABD4(&ResolutionManager_TypeInfo, v39);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v40);
    sub_1C1ABD4(&ServantCommentManager_TypeInfo, v41);
    sub_1C1ABD4(&SignedData_TypeInfo, v42);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v43);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v44);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v45);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v47);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v48);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v49);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v50);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v51);
    sub_1C1ABD4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v52);
    sub_1C1ABD4(&SoundManager_TypeInfo, v53);
    sub_1C1ABD4(&string___TypeInfo, v54);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v55);
    sub_1C1ABD4(&Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__, v56);
    sub_1C1ABD4(&ManagementManager___c__DisplayClass35_0_TypeInfo, v57);
    sub_1C1ABD4(&Method_ManagementManager__startCheckAll_d__35_MoveNext__, v58);
    sub_1C1ABD4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v59);
    sub_1C1ABD4(&UnityEngine_WaitForSeconds_TypeInfo, v60);
    sub_1C1ABD4(&StringLiteral_7537/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v61);
    sub_1C1ABD4(&StringLiteral_9480/*"NOW_LOADING"*/, v62);
    sub_1C1ABD4(&StringLiteral_9409/*"NETWORK_ERROR_DISK_FULL"*/, v63);
    sub_1C1ABD4(&StringLiteral_6513/*"F39UThNh"*/, v64);
    sub_1C1ABD4(&StringLiteral_7540/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v65);
    sub_1C1ABD4(&StringLiteral_7538/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v66);
    sub_1C1ABD4(&StringLiteral_7536/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v67);
    sub_1C1ABD4(&StringLiteral_5219/*"DataServerFolderName"*/, v68);
    sub_1C1ABD4(&StringLiteral_17032/*"android.permission.POST_NOTIFICATIONS"*/, v69);
    sub_1C1ABD4(&StringLiteral_9417/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v70);
    sub_1C1ABD4(&StringLiteral_9410/*"NETWORK_ERROR_FIEND_CODE"*/, v71);
    sub_1C1ABD4(&StringLiteral_12709/*"SYSTEM"*/, v72);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v73);
    sub_1C1ABD4(&StringLiteral_21124/*"ioqrk4Om"*/, v74);
    sub_1C1ABD4(&StringLiteral_1474/*"2pC0bIYM"*/, v75);
    sub_1C1ABD4(&StringLiteral_9411/*"NETWORK_ERROR_READ_AUTH"*/, v76);
    this = (ManagementManager__startCheckAll_d__35_o *)sub_1C1ABD4(&StringLiteral_9418/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v77);
    byte_4BC72CE = 1;
  }
  p_fields = &v8->fields;
  v79 = &ManagerConfig_TypeInfo;
  v80 = (const MethodInfo_387A8A8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      isReboot = v8->fields.isReboot;
      v8->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v83 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v8->fields.__2__current = (Il2CppObject *)v83;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(p__2__current, (int64_t)v83, v85, v86, v87, v88, v89, v90);
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
      v92 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v92;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v93, (int64_t)v92, v94, v95, v96, v97, v98, v99);
      v100 = 2;
      goto LABEL_416;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      v101 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v8->fields.__2__current = (Il2CppObject *)v101;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v93, (int64_t)v101, v102, v103, v104, v105, v106, v107);
      v100 = 3;
      goto LABEL_416;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0LL);
      v108 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v108);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(v109);
      OptionManager__AdjustVolume(v110);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v8->fields.isReboot )
        goto LABEL_31;
      v111 = (UnityEngine_Application_LogCallback_o *)sub_1C1AE20(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(
        v111,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_HandleLog__,
        0LL);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__add_logMessageReceived(v111, 0LL);
      if ( v8->fields.isReboot )
      {
LABEL_31:
        v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v112, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v112;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v112, v113, v114, v115, v116, v117, v118);
        v100 = 4;
        goto LABEL_416;
      }
LABEL_33:
      this = (ManagementManager__startCheckAll_d__35_o *)sub_1C1AC7C(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_417;
      v125 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v126 = StringLiteral_1474/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1474/*"2pC0bIYM"*/,
            sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.isReboot, v126, v119, v120, v121, v122, v123, v124),
            LODWORD(v125->fields.__2__current) <= 1)
        || (v133 = StringLiteral_6513/*"F39UThNh"*/,
            v125->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6513/*"F39UThNh"*/,
            sub_1C1AB78((PartyOrganizationUtility_o *)&v125->fields.__4__this, v133, v127, v128, v129, v130, v131, v132),
            LODWORD(v125->fields.__2__current) <= 2) )
      {
        sub_1C1AE38(this, method);
      }
      v140 = StringLiteral_21124/*"ioqrk4Om"*/;
      v125->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)StringLiteral_21124/*"ioqrk4Om"*/;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v125->fields.__8__1, v140, v134, v135, v136, v137, v138, v139);
      v147 = EncryptedPlayerPrefs_TypeInfo;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v147 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v147->static_fields;
      static_fields->keys = (struct System_String_array *)v125;
      sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->keys, (int64_t)v125, v141, v142, v143, v144, v145, v146);
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
                                                               (System_String_o *)StringLiteral_17032/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_417;
            _4__this->fields.isPermissionRequesting = 1;
            v405 = (System_Action_object__o *)sub_1C1AE20(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v405,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0LL);
            v406 = (System_Action_object__o *)sub_1C1AE20(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v406,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsDenied__,
              0LL);
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_17032/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v405,
              (System_Action_string__o *)v406,
              0LL,
              0LL);
LABEL_47:
            if ( _4__this->fields.isPermissionRequesting )
            {
              v149 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v149, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v149;
              v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C1AB78(v93, (int64_t)v149, v150, v151, v152, v153, v154, v155);
              v100 = 5;
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
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
          v398 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v398, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v398;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, (int64_t)v398, v399, v400, v401, v402, v403, v404);
          v100 = 6;
          goto LABEL_416;
        }
LABEL_417:
        sub_1C1AE30(this, method);
      }
LABEL_50:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
      v8->fields._readResult_5__2 = (int)this;
      if ( !_4__this )
        goto LABEL_417;
      this = (ManagementManager__startCheckAll_d__35_o *)_4__this->fields.debugInfoRootObject;
      if ( !this )
        goto LABEL_417;
      v470 = v8;
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
      if ( !this )
        goto LABEL_417;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      ManagementManager__BuildInfoOff(_4__this, v156);
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
        v410 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
        if ( FreeSize < v410 )
          FreeSize = v410;
        if ( FreeSize < 1 )
          break;
        v411 = *v79;
        if ( !(*v79)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v411);
          v411 = *v79;
        }
        if ( FreeSize >= v411->static_fields->LIMIT_FREE_SIZE )
          break;
        _4__this->fields.isErrorDialog = 1;
        v412 = v79;
        v413 = v80;
        Instance = SingletonMonoBehaviour_object___get_Instance(*v80);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v415 = LocalizationManager__Get((System_String_o *)StringLiteral_9409/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
        v416 = (ErrorDialog_ClickDelegate_o *)sub_1C1AE20(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v416, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_417;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v415, v416, 0, 0LL);
        v80 = v413;
        v79 = v412;
LABEL_367:
        if ( _4__this->fields.isErrorDialog )
        {
          v417 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v417, 0LL);
          v470->fields.__2__current = (Il2CppObject *)v417;
          v93 = (PartyOrganizationUtility_o *)&v470->fields.__2__current;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&v470->fields.__2__current,
            (int64_t)v417,
            v418,
            v419,
            v420,
            v421,
            v422,
            v423);
          v100 = 7;
          goto LABEL_416;
        }
      }
      readResult_5__2 = v470->fields._readResult_5__2;
      if ( !readResult_5__2 )
      {
LABEL_376:
        v8 = v470;
        v470->fields._isCacheCheck_5__3 = 0;
        goto LABEL_377;
      }
      if ( readResult_5__2 == 1 )
      {
        _4__this->fields.isReadAuth = 0;
        v425 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v425,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          v426);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                             v425,
                                                             (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_417;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_375:
        v427 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v427, 0LL);
        v470->fields.__2__current = (Il2CppObject *)v427;
        v93 = (PartyOrganizationUtility_o *)&v470->fields.__2__current;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&v470->fields.__2__current,
          (int64_t)v427,
          v428,
          v429,
          v430,
          v431,
          v432,
          v433);
        v100 = 8;
        goto LABEL_416;
      }
      v451 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v452 = LocalizationManager__Get((System_String_o *)StringLiteral_9410/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
        v452 = LocalizationManager__Get((System_String_o *)StringLiteral_9410/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
LABEL_400:
        v451 = (Il2CppObject *)System_String__Format(v452, DispFriendCode, 0LL);
      }
      v454 = SingletonMonoBehaviour_object___get_Instance(*v80);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v455 = LocalizationManager__Get((System_String_o *)StringLiteral_9411/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
      v471.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v471.monitor = (void *)-1LL;
      v472 = v470->fields._readResult_5__2;
      v456 = System_Enum__ToString(&v471, 0LL);
      v457 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v456 )
        v458 = (Il2CppObject *)v456;
      else
        v458 = (Il2CppObject *)StringLiteral_1/*""*/;
      v459 = System_String__Format_63054740(v455, v451, v458, 0LL);
      v460 = (ErrorDialog_ClickDelegate_o *)sub_1C1AE20(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v460, (Il2CppObject *)_4__this, Method_ManagementManager_EndQuitDialog__, 0LL);
      if ( !v454 )
        goto LABEL_417;
      CommonUI__OpenErrorDialog((CommonUI_o *)v454, v457, v459, v460, 0, 0LL);
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
      v470 = v8;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      goto LABEL_367;
    case 8:
      v470 = v8;
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
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_4BC73C8 )
      {
        sub_1C1ABD4(&DataManager_TypeInfo, method);
        byte_4BC73C8 = 1;
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
      v159 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v159,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v160);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v159,
                                                           (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_417;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v161 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v161, 0LL);
      v8->fields._waitForServerTime_5__7 = v161;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v8->fields._waitForServerTime_5__7,
        (int64_t)v161,
        v162,
        v163,
        v164,
        v165,
        v166,
        v167);
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
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, waitForServerTime_5__7, v2, v3, v4, v5, v6, v7);
        v100 = 11;
        goto LABEL_416;
      }
      _4__this->fields.isReadGameData = 0;
      v168 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v168,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v169);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v168,
                                                           (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_417;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v170 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v170, 0LL);
      v8->fields._wait_5__8 = v170;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__8,
        (int64_t)v170,
        v171,
        v172,
        v173,
        v174,
        v175,
        v176);
LABEL_203:
      wait_5__8 = (int64_t)v8->fields._wait_5__8;
      v8->fields.__2__current = (Il2CppObject *)wait_5__8;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v93, wait_5__8, v2, v3, v4, v5, v6, v7);
      v100 = 12;
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_203;
      v178 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC51A4 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, method);
        byte_4BC51A4 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      }
      if ( !v178 )
        goto LABEL_417;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v178,
        (System_String_o *)StringLiteral_5219/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0LL);
      if ( v8->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          started = UnityEngine_MonoBehaviour__StartCoroutine_70779684(
                      (UnityEngine_MonoBehaviour_o *)_4__this,
                      MasterData,
                      0LL);
          v8->fields.__2__current = (Il2CppObject *)started;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, (int64_t)started, v181, v182, v183, v184, v185, v186);
          v100 = 13;
          goto LABEL_416;
        }
      }
      else
      {
LABEL_108:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v8->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v188 = UnityEngine_MonoBehaviour__StartCoroutine_70779684(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v8->fields.__2__current = (Il2CppObject *)v188;
            v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C1AB78(v93, (int64_t)v188, v189, v190, v191, v192, v193, v194);
            v100 = 15;
            goto LABEL_416;
          }
        }
      }
      goto LABEL_417;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_4BC73C9 )
      {
        sub_1C1ABD4(&DataManager_TypeInfo, method);
        byte_4BC73C9 = 1;
      }
      v187 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v187 = DataManager_TypeInfo;
      }
      if ( v187->static_fields->readMasterDataResult == 1 )
        goto LABEL_108;
      if ( !v187->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v187);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v324 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v324, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v324;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v93, (int64_t)v324, v325, v326, v327, v328, v329, v330);
      v100 = 14;
      goto LABEL_416;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_377;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_4BC73CA )
      {
        sub_1C1ABD4(&DataManager_TypeInfo, method);
        byte_4BC73CA = 1;
      }
      v195 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v195 = DataManager_TypeInfo;
      }
      v8->fields._updateMasterResult_5__9 = v195->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v8->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_39736488((NetworkManager_o *)this, method);
          v367 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v367);
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v368 = UnityEngine_MonoBehaviour__StartCoroutine_70779684(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v8->fields.__2__current = (Il2CppObject *)v368;
              v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C1AB78(v93, (int64_t)v368, v369, v370, v371, v372, v373, v374);
              v100 = 18;
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
        v197 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v198 = LocalizationManager__Get((System_String_o *)StringLiteral_9417/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v199 = (ErrorDialog_ClickDelegate_o *)sub_1C1AE20(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v199, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v197 )
          goto LABEL_417;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v197,
          (System_String_o *)StringLiteral_1/*""*/,
          v198,
          v199,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v80 = (const MethodInfo_387A8A8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_130:
        if ( _4__this->fields.isErrorDialog )
        {
          v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v200, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v200;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, (int64_t)v200, v201, v202, v203, v204, v205, v206);
          v100 = 16;
          goto LABEL_416;
        }
        if ( v8->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_339:
          v8->fields._waitForServerTime_5__7 = 0LL;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._waitForServerTime_5__7, 0LL, v2, v3, v4, v5, v6, v7);
          v8->fields._wait_5__8 = 0LL;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._wait_5__8, 0LL, v385, v386, v387, v388, v389, v390);
LABEL_377:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_417;
          DataManager__Initialize((DataManager_o *)this, 0LL);
          if ( !v8->fields.isReboot && !v8->fields._isCacheCheck_5__3 )
          {
            v8->fields._isCacheCheck_5__3 = 1;
            v434 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v434 = ManagementManager_TypeInfo;
            }
            if ( UnityEngine_PlayerPrefs__HasKey(v434->static_fields->RebootCacheClearKey, 0LL) )
            {
              v435 = v80;
              v436 = (Il2CppObject *)sub_1C1AE20(ManagementManager___c__DisplayClass35_0_TypeInfo);
              System_Object___ctor(v436, 0LL);
              v8->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)v436;
              sub_1C1AB78(
                (PartyOrganizationUtility_o *)&v8->fields.__8__1,
                (int64_t)v436,
                v437,
                v438,
                v439,
                v440,
                v441,
                v442);
              if ( !v8->fields.__8__1 )
                goto LABEL_417;
              v8->fields.__8__1->fields = 0;
              v443 = SingletonMonoBehaviour_object___get_Instance(*v80);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v444 = LocalizationManager__Get((System_String_o *)StringLiteral_7540/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
              v445 = LocalizationManager__Get((System_String_o *)StringLiteral_7538/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
              v446 = LocalizationManager__Get((System_String_o *)StringLiteral_7537/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
              v447 = LocalizationManager__Get((System_String_o *)StringLiteral_7536/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
              _8__1 = (Il2CppObject *)v8->fields.__8__1;
              v449 = v447;
              v450 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C1AE20(CommonConfirmDialog_ClickDelegate_TypeInfo);
              CommonConfirmDialog_ClickDelegate___ctor(
                v450,
                _8__1,
                Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__,
                0LL);
              if ( !v443 )
                goto LABEL_417;
              CommonUI__OpenConfirmDecideDlg(
                (CommonUI_o *)v443,
                v444,
                v445,
                v446,
                v449,
                v450,
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
              v80 = v435;
LABEL_63:
              v157 = v8->fields.__8__1;
              if ( !v157 )
                goto LABEL_417;
              if ( !v157->fields.confirmed )
              {
                v360 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v360, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v360;
                v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1C1AB78(v93, (int64_t)v360, v361, v362, v363, v364, v365, v366);
                v100 = 9;
                goto LABEL_416;
              }
              if ( v157->fields.isDecide )
              {
                if ( !_4__this )
                  goto LABEL_417;
                ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
              }
              v8->fields.__8__1 = 0LL;
              sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields.__8__1, 0LL, v2, v3, v4, v5, v6, v7);
            }
            else
            {
              v461 = ManagementManager_TypeInfo;
              if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                v461 = ManagementManager_TypeInfo;
              }
              UnityEngine_PlayerPrefs__SetInt(v461->static_fields->RebootCacheClearKey, 1, 0LL);
              UnityEngine_PlayerPrefs__Save(0LL);
            }
          }
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance(*v80);
          if ( !this )
            goto LABEL_417;
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_417;
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__readMasterVersion((DataManager_o *)this, 0LL);
          if ( !_4__this )
            goto LABEL_417;
          v462 = UnityEngine_MonoBehaviour__StartCoroutine_70779684(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   (System_Collections_IEnumerator_o *)this,
                   0LL);
          v8->fields.__2__current = (Il2CppObject *)v462;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, (int64_t)v462, v463, v464, v465, v466, v467, v468);
          v100 = 10;
          goto LABEL_416;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_417;
      }
      _4__this->fields.isErrorDialog = 1;
      v375 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v376 = LocalizationManager__Get((System_String_o *)StringLiteral_9418/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v377 = (ErrorDialog_ClickDelegate_o *)sub_1C1AE20(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v377, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v375 )
        goto LABEL_417;
      CommonUI__OpenRetryDialog((CommonUI_o *)v375, (System_String_o *)StringLiteral_1/*""*/, v376, v377, 0, 0LL);
      v80 = (const MethodInfo_387A8A8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_337:
      if ( _4__this->fields.isErrorDialog )
      {
        v378 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v378, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v378;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v378, v379, v380, v381, v382, v383, v384);
        v100 = 17;
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
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&v93[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1C1AB78(v93, 0LL, v2, v3, v4, v5, v6, v7);
      v100 = 19;
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
        v207 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v207, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v207;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v207, v208, v209, v210, v211, v212, v213);
        v100 = 20;
        goto LABEL_416;
      }
LABEL_204:
      v8->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_303:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v353 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v353, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v353;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, (int64_t)v353, v354, v355, v356, v357, v358, v359);
          v100 = 21;
          goto LABEL_416;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_417;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12709/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v338 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v338 = ManagerConfig_TypeInfo;
          }
          if ( v338->static_fields->UseStandaloneAsset )
          {
            v8->fields._isLoad_5__4 = 1;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm((System_String_o *)StringLiteral_9480/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_417;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_317:
            v339 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v339, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v339;
            v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C1AB78(v93, (int64_t)v339, v340, v341, v342, v343, v344, v345);
            v100 = 22;
            goto LABEL_416;
          }
LABEL_149:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getDownloadSize(0LL) >= 1 )
          {
            v214 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v214, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v214;
            v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C1AB78(v93, (int64_t)v214, v215, v216, v217, v218, v219, v220);
            v100 = 23;
            goto LABEL_416;
          }
        }
LABEL_318:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__SetOnlineStatus(0LL);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_39736488((NetworkManager_o *)this, method);
          v346 = (UnityEngine_WaitForSeconds_o *)sub_1C1AE20(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v346, 0.1, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v346;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, (int64_t)v346, v347, v348, v349, v350, v351, v352);
          v100 = 24;
          goto LABEL_416;
        }
        goto LABEL_417;
      }
LABEL_207:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_212:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v317 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v317, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v317;
              v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C1AB78(v93, (int64_t)v317, v318, v319, v320, v321, v322, v323);
              v100 = 25;
              goto LABEL_416;
            }
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v244 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12709/*"SYSTEM"*/,
                       _4__this->fields.downloadParallelMax,
                       0LL);
              v245 = UnityEngine_MonoBehaviour__StartCoroutine_70779684(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v244,
                       0LL);
              v8->fields.__2__current = (Il2CppObject *)v245;
              v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C1AB78(v93, (int64_t)v245, v246, v247, v248, v249, v250, v251);
              v100 = 26;
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
      if ( !byte_4BC73CC )
      {
        sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
        byte_4BC73CC = 1;
      }
      v252 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v252 = LocalizationManager_TypeInfo;
      }
      if ( v252->static_fields->isBusySetAssetData )
      {
        v253 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v253, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v253;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v253, v254, v255, v256, v257, v258, v259);
        v100 = 29;
        goto LABEL_416;
      }
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_231:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_4BC73CD )
      {
        sub_1C1ABD4(&FSUtility_TypeInfo, method);
        byte_4BC73CD = 1;
      }
      v260 = FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v260 = FSUtility_TypeInfo;
      }
      if ( v260->static_fields->isBusySetAssetData )
      {
        v261 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v261, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v261;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v261, v262, v263, v264, v265, v266, v267);
        v100 = 30;
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
        v268 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v268, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v268;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v268, v269, v270, v271, v272, v273, v274);
        v100 = 31;
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
          v276 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v276, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v276;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, (int64_t)v276, v277, v278, v279, v280, v281, v282);
          v100 = 32;
          goto LABEL_416;
        }
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_260:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( LOBYTE(this[9].monitor) )
      {
        v283 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v283, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v283;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v283, v284, v285, v286, v287, v288, v289);
        v100 = 33;
        goto LABEL_416;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initializeAssetStorage(0LL);
LABEL_266:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v290 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v290, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v290;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v290, v291, v292, v293, v294, v295, v296);
        v100 = 34;
        goto LABEL_416;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_271:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
      {
        v297 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v297, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v297;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v93, (int64_t)v297, v298, v299, v300, v301, v302, v303);
        v100 = 35;
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
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_417;
        this = (ManagementManager__startCheckAll_d__35_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_417;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_344:
          v391 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v391, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v391;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, (int64_t)v391, v392, v393, v394, v395, v396, v397);
          v100 = 37;
          goto LABEL_416;
        }
LABEL_289:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff(_4__this, method);
          v8->fields.__2__current = 0LL;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(v93, 0LL, v311, v312, v313, v314, v315, v316);
          v100 = 38;
          goto LABEL_416;
        }
        goto LABEL_417;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9480/*"NOW_LOADING"*/, 0LL) )
      {
LABEL_287:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_417;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
        goto LABEL_289;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__fadeoutBgm(1.0, 0LL);
      v304 = (UnityEngine_WaitForSeconds_o *)sub_1C1AE20(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v304, 1.0, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v304;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v93, (int64_t)v304, v305, v306, v307, v308, v309, v310);
      v100 = 36;
LABEL_416:
      *(_DWORD *)&v93[-1].fields._IsQuestStartMenuMode_k__BackingField = v100;
      return 1;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_303;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      if ( !byte_4BC73CB )
      {
        sub_1C1ABD4(&LogoMain_TypeInfo, v221);
        byte_4BC73CB = 1;
      }
      v222 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v222 = LogoMain_TypeInfo;
      }
      if ( !v222->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9480/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_172:
      v223 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v223, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v223;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v93, (int64_t)v223, v224, v225, v226, v227, v228, v229);
      v100 = 27;
      goto LABEL_416;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_172;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_298:
      v331 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v331, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v331;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v93, (int64_t)v331, v332, v333, v334, v335, v336, v337);
      v100 = 28;
      goto LABEL_416;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_298;
      v230 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v230 = (_QWORD *)sub_1C1ABEC(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v231 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v230, v230[4]);
      OverwriteAssetSoundName__PlaySystemSe(v231, 0, 0, v232);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_344;
      v233 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v233 = (_QWORD *)sub_1C1ABEC(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v234 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v233, v233[4]);
      OverwriteAssetSoundName__PlaySystemSe(v234, 0, 0, v235);
      goto LABEL_287;
    case 0x26:
      p_fields->__1__state = -1;
      v236 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v236 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v236->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        v238 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v238);
        OptionManager__SetNotiffication(Notiffication, 1, v240);
        v241 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v241 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v241->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_417;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v237);
      if ( v8->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v242);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_ManagementManager__startCheckAll_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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