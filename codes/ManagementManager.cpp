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

  if ( (byte_4B663D2 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_8174/*"IsNotificationStatusSend"*/, v8);
    sub_1BE4ACC(&StringLiteral_8186/*"IsReBootCacheClearKey"*/, v9);
    sub_1BE4ACC(&StringLiteral_21203/*"ja-JP"*/, v10);
    sub_1BE4ACC(&StringLiteral_25237/*"yyyy年MM月dd日HH時mm分"*/, v11);
    byte_4B663D2 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8174/*"IsNotificationStatusSend"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8174/*"IsNotificationStatusSend"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_8186/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8186/*"IsReBootCacheClearKey"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->RebootCacheClearKey, v12, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_25237/*"yyyy年MM月dd日HH時mm分"*/;
  v21 = ManagementManager_TypeInfo->static_fields;
  v21->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_25237/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v21->DATE_TIME_DISP_FORMAT, v20, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_21203/*"ja-JP"*/;
  v29 = ManagementManager_TypeInfo->static_fields;
  v29->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_21203/*"ja-JP"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v29->DEFAULT_CULTURE_NAME, v28, v30, v31, v32, v33, v34, v35);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B663D1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_4B663D1 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38291E0 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  if ( (byte_4B663BC & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1BE4ACC(&string___TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_832/*"):"*/, v9);
    sub_1BE4ACC(&StringLiteral_6864/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1BE4ACC(&StringLiteral_791/*"(ratio: "*/, v11);
    byte_4B663BC = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6864/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1BE4B74(string___TypeInfo, 5LL);
    if ( this )
    {
      v18 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1BE4A70(
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
      v25 = StringLiteral_791/*"(ratio: "*/;
      v18->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_791/*"(ratio: "*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v18->fields.AvalonSceneManager, v25, v19, v20, v21, v22, v23, v24);
      this = (ManagementManager_o *)System_Single__ToString(v26, (const MethodInfo *)&v48);
      if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 2
        || (v18->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&v18->fields.debugInfoRootObject,
              (int64_t)this,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32),
            LODWORD(v18->fields.m_CancellationTokenSource) <= 3)
        || (v39 = StringLiteral_832/*"):"*/,
            v18->fields.statusLabel = (struct UILabel_o *)StringLiteral_832/*"):"*/,
            sub_1BE4A70((PartyOrganizationUtility_o *)&v18->fields.statusLabel, v39, v33, v34, v35, v36, v37, v38),
            LODWORD(v18->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1BE4D30(this, errorText);
      }
      v18->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v18->fields._videoPlayer_k__BackingField,
        (int64_t)exceptionMessage,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v46 = (Il2CppObject *)System_String__Concat_62712336((System_String_array *)v18, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v46, 0LL);
      return;
    }
LABEL_19:
    sub_1BE4D28(this, errorText);
  }
  v47 = (Il2CppObject *)System_String__Concat_62698808(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v47, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B663B8 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_4B663B8 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_3829134 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4B663CF & 1) == 0 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, boot);
    byte_4B663CF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4B663CE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B663CE = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1BE4D28(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4B663B6 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, v1);
    byte_4B663B6 = 1;
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

  if ( (byte_4B663C4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_4B663C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4B663C3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4B663C3 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70245868(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4B663C2 & 1) != 0 )
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
    sub_1BE4ACC(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4B663C2 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70245868(0LL);
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

  if ( (byte_4B663BE & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager__InitializeAdManagerAndFirebase_d__35_TypeInfo, method);
    byte_4B663BE = 1;
  }
  v3 = sub_1BE4D18(ManagementManager__InitializeAdManagerAndFirebase_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4B663CB & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, method);
    byte_4B663CB = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4B65C8B )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, method);
    byte_4B65C8B = 1;
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

  if ( (byte_4B663CC & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v2);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_4B663CC = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v7);
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

  if ( (byte_4B663D0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1BE4ACC(&ManagementManager_TypeInfo, v2);
    byte_4B663D0 = 1;
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

  if ( (byte_4B663B7 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, v1);
    byte_4B663B7 = 1;
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

  if ( (byte_4B663BF & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager__SetupFirebaseAppCheck_d__36_TypeInfo, method);
    byte_4B663BF = 1;
  }
  v2 = sub_1BE4D18(ManagementManager__SetupFirebaseAppCheck_d__36_TypeInfo);
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

  if ( (byte_4B663B9 & 1) == 0 )
  {
    sub_1BE4ACC(&AndroidUtil_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Application_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&System_Type_TypeInfo, v5);
    sub_1BE4ACC(&UnityGamingServicesBehaviour_var, v6);
    byte_4B663B9 = 1;
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
    sub_1BE4D28(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4B663CD & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1BE4ACC(&UnityEngine_Application_TypeInfo, method);
    byte_4B663CD = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_70245868(0LL);
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

  if ( (byte_4B663CA & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, result);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4B663CA = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v6);
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
  _BOOL8 _38593888; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4B663C9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v4);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v8);
    byte_4B663C9 = 1;
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
  _38593888 = TutorialFlag__Get_38593888(102, 0LL);
  if ( _38593888 )
  {
LABEL_9:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v14);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1BE4D28(0LL, v16);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_38593888, v11, v12);
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

  if ( (byte_4B663C7 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, result);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4B663C7 = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v7);
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

  if ( (byte_4B663C6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ManagementManager_callbackTopHome__, result);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v4);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v8);
    byte_4B663C6 = 1;
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
  if ( TutorialFlag__Get_38593888(102, 0LL) )
  {
LABEL_9:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v13);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1BE4D28(0LL, v15);
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

  if ( (byte_4B663BA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1BE4ACC(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_4722/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1BE4ACC(&StringLiteral_9303/*"MovieRoot"*/, v7);
    byte_4B663BA = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4722/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_1BE4D18(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_9303/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  v11,
                  (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_1BE4A70(
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
                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v21) )
    {
      sub_1BE4D28(Component_object, v13);
    }
    AvalonVideoPlayer__initialize(v21, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34492740(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B663B4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_4B663B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4B663B5 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, v1);
    byte_4B663B5 = 1;
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

  if ( (byte_4B663BB & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, isLogin);
    sub_1BE4ACC(&CTouch_TypeInfo, v7);
    sub_1BE4ACC(&CommonEffectManager_TypeInfo, v8);
    sub_1BE4ACC(&FirebaseScript_TypeInfo, v9);
    sub_1BE4ACC(&System_GC_TypeInfo, v10);
    sub_1BE4ACC(&ManagementManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_1BE4ACC(&SoundManager_TypeInfo, v21);
    byte_4B663BB = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1BE4D28(Instance, v24);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_63745372(0LL);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v25 )
      sub_1BE4D28(0LL, v26);
    AdManager__Initialize((AdManager_o *)v25, 2, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    v28 = ManagementManager__startCheckAll(this, 1, isLogin, v27);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
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

  if ( (byte_4B663C5 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4B663C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1BE4D18(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v7);
  if ( !Instance )
    sub_1BE4D28(v8, v9);
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

  if ( (byte_4B663C8 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4B663C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1BE4D18(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v7);
  if ( !Instance )
    sub_1BE4D28(v8, v9);
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
  sub_1BE4A70(
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

  if ( (byte_4B663BD & 1) == 0 )
  {
    sub_1BE4ACC(&ManagementManager__startCheckAll_d__34_TypeInfo, isReboot);
    byte_4B663BD = 1;
  }
  v7 = isLogin;
  v8 = sub_1BE4D18(ManagementManager__startCheckAll_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B663C0 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    byte_4B663C0 = 1;
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

  if ( (byte_4B663C1 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    sub_1BE4ACC(&ScrTerminalListTop_TypeInfo, v2);
    sub_1BE4ACC(&ServantCommentManager_TypeInfo, v3);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v4);
    byte_4B663C1 = 1;
  }
  MovieFileMerge__Delete_38656284(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B63D0B )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v6);
    byte_4B63D0B = 1;
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


void __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__35___ctor(
        ManagementManager__InitializeAdManagerAndFirebase_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__35__MoveNext(
        ManagementManager__InitializeAdManagerAndFirebase_d__35_o *this,
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

  if ( (byte_4B663D4 & 1) == 0 )
  {
    sub_1BE4ACC(&FirebaseScript_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_4B663D4 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1BE4D28(0LL, v16);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v17 )
      sub_1BE4D28(0LL, v18);
    AdManager__Initialize((AdManager_o *)v17, 1, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    if ( !_4__this )
      sub_1BE4D28(v19, v20);
    v21 = ManagementManager__SetupFirebaseAppCheck(v19, v20);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272(_4__this, v21, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall ManagementManager__InitializeAdManagerAndFirebase_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__InitializeAdManagerAndFirebase_d__35__System_Collections_IEnumerator_Reset(
        ManagementManager__InitializeAdManagerAndFirebase_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__35_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__InitializeAdManagerAndFirebase_d__35__System_Collections_IEnumerator_get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__35__System_IDisposable_Dispose(
        ManagementManager__InitializeAdManagerAndFirebase_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager__SetupFirebaseAppCheck_d__36___ctor(
        ManagementManager__SetupFirebaseAppCheck_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__SetupFirebaseAppCheck_d__36__MoveNext(
        ManagementManager__SetupFirebaseAppCheck_d__36_o *this,
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

  if ( (byte_4B663D5 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, method);
    sub_1BE4ACC(&FirebaseScript_TypeInfo, v9);
    sub_1BE4ACC(&float_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_867/*", AppCheckErrorMessage: "*/, v11);
    sub_1BE4ACC(&StringLiteral_17021/*"appCheckPrevMessage"*/, v12);
    sub_1BE4ACC(&StringLiteral_6022/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v13);
    sub_1BE4ACC(&StringLiteral_8112/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/, v14);
    byte_4B663D5 = 1;
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
      if ( !byte_4B664CA )
      {
        sub_1BE4ACC(&FirebaseScript_TypeInfo, method);
        byte_4B664CA = 1;
      }
      v16 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v16 = FirebaseScript_TypeInfo;
      }
      v16->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0LL);
      v17 = StringLiteral_17021/*"appCheckPrevMessage"*/;
      this->fields._prevKeyName_5__3 = (struct System_String_o *)StringLiteral_17021/*"appCheckPrevMessage"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._prevKeyName_5__3, v17, v18, v19, v20, v21, v22, v23);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4B664CB )
      {
        sub_1BE4ACC(&FirebaseScript_TypeInfo, method);
        byte_4B664CB = 1;
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
        sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
        if ( !byte_4B664CC )
        {
          sub_1BE4ACC(&FirebaseScript_TypeInfo, method);
          byte_4B664CC = 1;
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
        if ( !byte_4B66301 )
        {
          sub_1BE4ACC(&FirebaseScript_TypeInfo, method);
          byte_4B66301 = 1;
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
        v32 = (System_String_o *)StringLiteral_8112/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        goto LABEL_71;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4B66302 )
      {
        sub_1BE4ACC(&FirebaseScript_TypeInfo, method);
        byte_4B66302 = 1;
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
        sub_1BE4A70((PartyOrganizationUtility_o *)v26, 0LL, v2, v3, v4, v5, v6, v7);
        *((_DWORD *)v26 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0LL);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4B664CC )
      {
        sub_1BE4ACC(&FirebaseScript_TypeInfo, v33);
        byte_4B664CC = 1;
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
      if ( !byte_4B664CD )
      {
        sub_1BE4ACC(&FirebaseScript_TypeInfo, v33);
        byte_4B664CD = 1;
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
      v51 = System_String__Format_62713180((System_String_o *)StringLiteral_6022/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v45, v49, 0LL);
      if ( (v40 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4B664CE )
        {
          sub_1BE4ACC(&FirebaseScript_TypeInfo, v50);
          byte_4B664CE = 1;
        }
        v52 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v52 = FirebaseScript_TypeInfo;
        }
        v51 = System_String__Concat_62710068(
                v51,
                (System_String_o *)StringLiteral_867/*", AppCheckErrorMessage: "*/,
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


Il2CppObject *__fastcall ManagementManager__SetupFirebaseAppCheck_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__SetupFirebaseAppCheck_d__36__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseAppCheck_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ManagementManager__SetupFirebaseAppCheck_d__36_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__SetupFirebaseAppCheck_d__36__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__SetupFirebaseAppCheck_d__36__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseAppCheck_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager___c__DisplayClass34_0___ctor(
        ManagementManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager___c__DisplayClass34_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass34_0_o *this,
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

  if ( (byte_4B663D3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, flag);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_ManagementManager___c__DisplayClass34_1__startCheckAll_b__1__, v6);
    sub_1BE4ACC(&ManagementManager___c__DisplayClass34_1_TypeInfo, v7);
    byte_4B663D3 = 1;
  }
  v8 = sub_1BE4D18(ManagementManager___c__DisplayClass34_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass34_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BE4D28(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30874304((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass34_1___ctor(
        ManagementManager___c__DisplayClass34_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass34_1___startCheckAll_b__1(
        ManagementManager___c__DisplayClass34_1_o *this,
        const MethodInfo *method)
{
  struct ManagementManager___c__DisplayClass34_0_o *CS___8__locals1; // x8
  bool flag; // w9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1BE4D28(this, method);
  flag = this->fields.flag;
  CS___8__locals1->fields.confirmed = 1;
  CS___8__locals1->fields.isDecide = flag;
}


void __fastcall ManagementManager__startCheckAll_d__34___ctor(
        ManagementManager__startCheckAll_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__startCheckAll_d__34__MoveNext(
        ManagementManager__startCheckAll_d__34_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ManagementManager__startCheckAll_d__34_o *v8; // x25
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
  ManagementManager__startCheckAll_d__34_Fields *p_fields; // x8
  const MethodInfo_3828DC8 **v77; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v80; // x0
  PartyOrganizationUtility_o *p__2__current; // x25
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v89; // x0
  PartyOrganizationUtility_o *v90; // x25
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int v97; // w8
  System_Collections_IEnumerator_o *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  OptionManager_c *v105; // x0
  const MethodInfo *v106; // x0
  const MethodInfo *v107; // x0
  UnityEngine_WaitForEndOfFrame_o *v108; // x20
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  ManagementManager__startCheckAll_d__34_o *v121; // x21
  int64_t v122; // x1
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x1
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  EncryptedPlayerPrefs_c *v143; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v145; // x20
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  const MethodInfo *v152; // x1
  struct ManagementManager___c__DisplayClass34_0_o *_8__1; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v155; // x21
  const MethodInfo *v156; // x3
  UnityEngine_WaitForEndOfFrame_o *v157; // x20
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  NetworkManager_ResultCallbackFunc_o *v164; // x21
  const MethodInfo *v165; // x3
  UnityEngine_WaitForEndOfFrame_o *v166; // x20
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  int64_t waitForServerTime_5__7; // x1
  Il2CppObject *v174; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v176; // x0
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  DataManager_c *v183; // x0
  UnityEngine_Coroutine_o *v184; // x0
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  DataManager_c *v191; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v193; // x21
  System_String_o *v194; // x22
  ErrorDialog_ClickDelegate_o *v195; // x23
  UnityEngine_WaitForEndOfFrame_o *v196; // x20
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  UnityEngine_WaitForEndOfFrame_o *v203; // x20
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  UnityEngine_WaitForEndOfFrame_o *v210; // x20
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  __int64 v217; // x1
  LogoMain_c *v218; // x0
  UnityEngine_WaitForEndOfFrame_o *v219; // x20
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  _QWORD *v226; // x0
  System_Reflection_MethodBase_o *v227; // x0
  const MethodInfo *v228; // x2
  _QWORD *v229; // x0
  System_Reflection_MethodBase_o *v230; // x0
  const MethodInfo *v231; // x2
  ManagementManager_c *v232; // x0
  const MethodInfo *v233; // x2
  OptionManager_c *v234; // x0
  bool Notiffication; // w0
  const MethodInfo *v236; // x2
  ManagementManager_c *v237; // x0
  const MethodInfo *v238; // x1
  int64_t wait_5__8; // x1
  System_Collections_IEnumerator_o *v240; // x0
  UnityEngine_Coroutine_o *v241; // x0
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  LocalizationManager_c *v248; // x0
  UnityEngine_WaitForEndOfFrame_o *v249; // x20
  int64_t v250; // x2
  int32_t v251; // w3
  System_String_o *v252; // x4
  BattleSetupInfo_o *v253; // x5
  FollowerInfo_o *v254; // x6
  PartyListViewItem_o *v255; // x7
  FSUtility_c *v256; // x0
  UnityEngine_WaitForEndOfFrame_o *v257; // x20
  int64_t v258; // x2
  int32_t v259; // w3
  System_String_o *v260; // x4
  BattleSetupInfo_o *v261; // x5
  FollowerInfo_o *v262; // x6
  PartyListViewItem_o *v263; // x7
  UnityEngine_WaitForEndOfFrame_o *v264; // x20
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v272; // x20
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  UnityEngine_WaitForEndOfFrame_o *v279; // x20
  int64_t v280; // x2
  int32_t v281; // w3
  System_String_o *v282; // x4
  BattleSetupInfo_o *v283; // x5
  FollowerInfo_o *v284; // x6
  PartyListViewItem_o *v285; // x7
  UnityEngine_WaitForEndOfFrame_o *v286; // x20
  int64_t v287; // x2
  int32_t v288; // w3
  System_String_o *v289; // x4
  BattleSetupInfo_o *v290; // x5
  FollowerInfo_o *v291; // x6
  PartyListViewItem_o *v292; // x7
  UnityEngine_WaitForEndOfFrame_o *v293; // x20
  int64_t v294; // x2
  int32_t v295; // w3
  System_String_o *v296; // x4
  BattleSetupInfo_o *v297; // x5
  FollowerInfo_o *v298; // x6
  PartyListViewItem_o *v299; // x7
  UnityEngine_WaitForSeconds_o *v300; // x20
  int64_t v301; // x2
  int32_t v302; // w3
  System_String_o *v303; // x4
  BattleSetupInfo_o *v304; // x5
  FollowerInfo_o *v305; // x6
  PartyListViewItem_o *v306; // x7
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  UnityEngine_WaitForEndOfFrame_o *v313; // x20
  int64_t v314; // x2
  int32_t v315; // w3
  System_String_o *v316; // x4
  BattleSetupInfo_o *v317; // x5
  FollowerInfo_o *v318; // x6
  PartyListViewItem_o *v319; // x7
  UnityEngine_WaitForEndOfFrame_o *v320; // x20
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  UnityEngine_WaitForEndOfFrame_o *v327; // x20
  int64_t v328; // x2
  int32_t v329; // w3
  System_String_o *v330; // x4
  BattleSetupInfo_o *v331; // x5
  FollowerInfo_o *v332; // x6
  PartyListViewItem_o *v333; // x7
  ManagerConfig_c *v334; // x0
  UnityEngine_WaitForEndOfFrame_o *v335; // x20
  int64_t v336; // x2
  int32_t v337; // w3
  System_String_o *v338; // x4
  BattleSetupInfo_o *v339; // x5
  FollowerInfo_o *v340; // x6
  PartyListViewItem_o *v341; // x7
  UnityEngine_WaitForSeconds_o *v342; // x20
  int64_t v343; // x2
  int32_t v344; // w3
  System_String_o *v345; // x4
  BattleSetupInfo_o *v346; // x5
  FollowerInfo_o *v347; // x6
  PartyListViewItem_o *v348; // x7
  UnityEngine_WaitForEndOfFrame_o *v349; // x20
  int64_t v350; // x2
  int32_t v351; // w3
  System_String_o *v352; // x4
  BattleSetupInfo_o *v353; // x5
  FollowerInfo_o *v354; // x6
  PartyListViewItem_o *v355; // x7
  UnityEngine_WaitForEndOfFrame_o *v356; // x20
  int64_t v357; // x2
  int32_t v358; // w3
  System_String_o *v359; // x4
  BattleSetupInfo_o *v360; // x5
  FollowerInfo_o *v361; // x6
  PartyListViewItem_o *v362; // x7
  ManagementManager_c *v363; // x0
  UnityEngine_Coroutine_o *v364; // x0
  Il2CppObject **v365; // x19
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  int v372; // w8
  Il2CppObject *v373; // x21
  System_String_o *v374; // x22
  ErrorDialog_ClickDelegate_o *v375; // x23
  UnityEngine_WaitForEndOfFrame_o *v376; // x20
  int64_t v377; // x2
  int32_t v378; // w3
  System_String_o *v379; // x4
  BattleSetupInfo_o *v380; // x5
  FollowerInfo_o *v381; // x6
  PartyListViewItem_o *v382; // x7
  int64_t v383; // x2
  int32_t v384; // w3
  System_String_o *v385; // x4
  BattleSetupInfo_o *v386; // x5
  FollowerInfo_o *v387; // x6
  PartyListViewItem_o *v388; // x7
  UnityEngine_WaitForEndOfFrame_o *v389; // x20
  int64_t v390; // x2
  int32_t v391; // w3
  System_String_o *v392; // x4
  BattleSetupInfo_o *v393; // x5
  FollowerInfo_o *v394; // x6
  PartyListViewItem_o *v395; // x7
  UnityEngine_WaitForEndOfFrame_o *v396; // x20
  int64_t v397; // x2
  int32_t v398; // w3
  System_String_o *v399; // x4
  BattleSetupInfo_o *v400; // x5
  FollowerInfo_o *v401; // x6
  PartyListViewItem_o *v402; // x7
  System_Action_object__o *v403; // x21
  System_Action_object__o *v404; // x22
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v408; // x0
  ManagerConfig_c *v409; // x0
  const MethodInfo_3828DC8 **v410; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v412; // x22
  ErrorDialog_ClickDelegate_o *v413; // x23
  UnityEngine_WaitForEndOfFrame_o *v414; // x20
  int64_t v415; // x2
  int32_t v416; // w3
  System_String_o *v417; // x4
  BattleSetupInfo_o *v418; // x5
  FollowerInfo_o *v419; // x6
  PartyListViewItem_o *v420; // x7
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v422; // x21
  const MethodInfo *v423; // x3
  UnityEngine_WaitForEndOfFrame_o *v424; // x20
  int64_t v425; // x2
  int32_t v426; // w3
  System_String_o *v427; // x4
  BattleSetupInfo_o *v428; // x5
  FollowerInfo_o *v429; // x6
  PartyListViewItem_o *v430; // x7
  ManagementManager_c *v431; // x0
  const MethodInfo_3828DC8 **v432; // x28
  Il2CppObject *v433; // x21
  Il2CppObject **p__8__1; // x23
  int64_t v435; // x2
  int32_t v436; // w3
  System_String_o *v437; // x4
  BattleSetupInfo_o *v438; // x5
  FollowerInfo_o *v439; // x6
  PartyListViewItem_o *v440; // x7
  ManagementManager__startCheckAll_d__34_o *v441; // x19
  Il2CppObject *v442; // x21
  System_String_o *v443; // x22
  System_String_o *v444; // x24
  System_String_o *v445; // x25
  System_String_o *v446; // x0
  Il2CppObject *v447; // x27
  System_String_o *v448; // x23
  CommonConfirmDialog_ClickDelegate_o *v449; // x26
  Il2CppObject *v450; // x21
  System_String_o *v451; // x21
  System_String_o *DispFriendCode; // x22
  Il2CppObject *v453; // x22
  System_String_o *v454; // x23
  System_String_o *v455; // x0
  System_String_o *v456; // x19
  Il2CppObject *v457; // x2
  System_String_o *v458; // x21
  ErrorDialog_ClickDelegate_o *v459; // x23
  ManagementManager_c *v460; // x0
  UnityEngine_Coroutine_o *started; // x0
  int64_t v462; // x2
  int32_t v463; // w3
  System_String_o *v464; // x4
  BattleSetupInfo_o *v465; // x5
  FollowerInfo_o *v466; // x6
  PartyListViewItem_o *v467; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__34_o *v469; // [xsp+40h] [xbp-80h]
  System_Enum_o v470; // [xsp+48h] [xbp-78h] BYREF
  int32_t v471; // [xsp+58h] [xbp-68h]

  v8 = this;
  if ( (byte_4B663D6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_string__TypeInfo, method);
    sub_1BE4ACC(&AndroidUtil_TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Application_TypeInfo, v10);
    sub_1BE4ACC(&AssetManager_TypeInfo, v11);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v12);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v13);
    sub_1BE4ACC(&ErrorDialog_ClickDelegate_TypeInfo, v14);
    sub_1BE4ACC(&CommonServicePluginScript_TypeInfo, v15);
    sub_1BE4ACC(&DataManager_TypeInfo, v16);
    sub_1BE4ACC(&EncryptedPlayerPrefs_TypeInfo, v17);
    sub_1BE4ACC(&FSUtility_TypeInfo, v18);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v19);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v20);
    sub_1BE4ACC(&LogoMain_TypeInfo, v21);
    sub_1BE4ACC(&Method_ManagementManager_EndLogDialog__, v22);
    sub_1BE4ACC(&Method_ManagementManager_EndQuitDialog__, v23);
    sub_1BE4ACC(&Method_ManagementManager_EndRetryDialog__, v24);
    sub_1BE4ACC(&Method_ManagementManager_NotifyRequestPermissionsDenied__, v25);
    sub_1BE4ACC(&Method_ManagementManager_NotifyRequestPermissionsGranted__, v26);
    sub_1BE4ACC(&Method_ManagementManager_callbackAccountRegist__, v27);
    sub_1BE4ACC(&Method_ManagementManager_callbackTopGameData__, v28);
    sub_1BE4ACC(&ManagementManager_TypeInfo, v29);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v30);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_AccountRegistRequest___, v31);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_TopGameDataRequest___, v32);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v33);
    sub_1BE4ACC(&OptionManager_TypeInfo, v34);
    sub_1BE4ACC(&PurchaseBehaviour_TypeInfo, v35);
    sub_1BE4ACC(&NetworkManager_ReadResult_TypeInfo, v36);
    sub_1BE4ACC(&ResolutionManager_TypeInfo, v37);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v38);
    sub_1BE4ACC(&ServantCommentManager_TypeInfo, v39);
    sub_1BE4ACC(&SignedData_TypeInfo, v40);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v41);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v43);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v45);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v46);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v47);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v48);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v49);
    sub_1BE4ACC(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v50);
    sub_1BE4ACC(&SoundManager_TypeInfo, v51);
    sub_1BE4ACC(&string___TypeInfo, v52);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v53);
    sub_1BE4ACC(&Method_ManagementManager___c__DisplayClass34_0__startCheckAll_b__0__, v54);
    sub_1BE4ACC(&ManagementManager___c__DisplayClass34_0_TypeInfo, v55);
    sub_1BE4ACC(&Method_ManagementManager__startCheckAll_d__34_MoveNext__, v56);
    sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v57);
    sub_1BE4ACC(&UnityEngine_WaitForSeconds_TypeInfo, v58);
    sub_1BE4ACC(&StringLiteral_7514/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v59);
    sub_1BE4ACC(&StringLiteral_9450/*"NOW_LOADING"*/, v60);
    sub_1BE4ACC(&StringLiteral_9379/*"NETWORK_ERROR_DISK_FULL"*/, v61);
    sub_1BE4ACC(&StringLiteral_6491/*"F39UThNh"*/, v62);
    sub_1BE4ACC(&StringLiteral_7517/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v63);
    sub_1BE4ACC(&StringLiteral_7515/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v64);
    sub_1BE4ACC(&StringLiteral_7513/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v65);
    sub_1BE4ACC(&StringLiteral_5205/*"DataServerFolderName"*/, v66);
    sub_1BE4ACC(&StringLiteral_16973/*"android.permission.POST_NOTIFICATIONS"*/, v67);
    sub_1BE4ACC(&StringLiteral_9387/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v68);
    sub_1BE4ACC(&StringLiteral_9380/*"NETWORK_ERROR_FIEND_CODE"*/, v69);
    sub_1BE4ACC(&StringLiteral_12667/*"SYSTEM"*/, v70);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v71);
    sub_1BE4ACC(&StringLiteral_21062/*"ioqrk4Om"*/, v72);
    sub_1BE4ACC(&StringLiteral_1471/*"2pC0bIYM"*/, v73);
    sub_1BE4ACC(&StringLiteral_9381/*"NETWORK_ERROR_READ_AUTH"*/, v74);
    this = (ManagementManager__startCheckAll_d__34_o *)sub_1BE4ACC(&StringLiteral_9388/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v75);
    byte_4B663D6 = 1;
  }
  p_fields = &v8->fields;
  v77 = (const MethodInfo_3828DC8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      isReboot = v8->fields.isReboot;
      v8->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v80 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v8->fields.__2__current = (Il2CppObject *)v80;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(p__2__current, (int64_t)v80, v82, v83, v84, v85, v86, v87);
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
        goto LABEL_416;
      v89 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v89;
      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v90, (int64_t)v89, v91, v92, v93, v94, v95, v96);
      v97 = 2;
      goto LABEL_414;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      v98 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v8->fields.__2__current = (Il2CppObject *)v98;
      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v90, (int64_t)v98, v99, v100, v101, v102, v103, v104);
      v97 = 3;
      goto LABEL_414;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0LL);
      v105 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v105);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(v106);
      OptionManager__AdjustVolume(v107);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( !v8->fields.isReboot )
      {
LABEL_30:
        this = (ManagementManager__startCheckAll_d__34_o *)sub_1BE4B74(string___TypeInfo, 3LL);
        if ( !this )
          goto LABEL_416;
        v121 = this;
        if ( !LODWORD(this->fields.__2__current)
          || (v122 = StringLiteral_1471/*"2pC0bIYM"*/,
              *(_QWORD *)&this->fields.isReboot = StringLiteral_1471/*"2pC0bIYM"*/,
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&this->fields.isReboot,
                v122,
                v115,
                v116,
                v117,
                v118,
                v119,
                v120),
              LODWORD(v121->fields.__2__current) <= 1)
          || (v129 = StringLiteral_6491/*"F39UThNh"*/,
              v121->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6491/*"F39UThNh"*/,
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&v121->fields.__4__this,
                v129,
                v123,
                v124,
                v125,
                v126,
                v127,
                v128),
              LODWORD(v121->fields.__2__current) <= 2) )
        {
          sub_1BE4D30(this, method);
        }
        v136 = StringLiteral_21062/*"ioqrk4Om"*/;
        v121->fields.__8__1 = (struct ManagementManager___c__DisplayClass34_0_o *)StringLiteral_21062/*"ioqrk4Om"*/;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v121->fields.__8__1, v136, v130, v131, v132, v133, v134, v135);
        v143 = EncryptedPlayerPrefs_TypeInfo;
        if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
          v143 = EncryptedPlayerPrefs_TypeInfo;
        }
        static_fields = v143->static_fields;
        static_fields->keys = (struct System_String_array *)v121;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->keys,
          (int64_t)v121,
          v137,
          v138,
          v139,
          v140,
          v141,
          v142);
        if ( !v8->fields.isReboot )
        {
          this = (ManagementManager__startCheckAll_d__34_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_41;
          if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
          this = (ManagementManager__startCheckAll_d__34_o *)AndroidUtil__get_apiLevel(0LL);
          if ( (int)this >= 33 )
          {
            this = (ManagementManager__startCheckAll_d__34_o *)AndroidPermissionManager__CheckPermission(
                                                                 (System_String_o *)StringLiteral_16973/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !_4__this )
                goto LABEL_416;
              _4__this->fields.isPermissionRequesting = 1;
              v403 = (System_Action_object__o *)sub_1BE4D18(System_Action_string__TypeInfo);
              System_Action_object____ctor(
                v403,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_NotifyRequestPermissionsGranted__,
                0LL);
              v404 = (System_Action_object__o *)sub_1BE4D18(System_Action_string__TypeInfo);
              System_Action_object____ctor(
                v404,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_NotifyRequestPermissionsDenied__,
                0LL);
              AndroidPermissionManager__RequestPermission(
                (System_String_o *)StringLiteral_16973/*"android.permission.POST_NOTIFICATIONS"*/,
                (System_Action_string__o *)v403,
                (System_Action_string__o *)v404,
                0LL,
                0LL);
LABEL_44:
              if ( _4__this->fields.isPermissionRequesting )
              {
                v145 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v145, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v145;
                v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1BE4A70(v90, (int64_t)v145, v146, v147, v148, v149, v150, v151);
                v97 = 5;
                goto LABEL_414;
              }
            }
          }
          else
          {
LABEL_41:
            if ( !_4__this )
              goto LABEL_416;
            _4__this->fields.isPermissionGranted = 1;
          }
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
          if ( this )
          {
            LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
            v396 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v396, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v396;
            v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BE4A70(v90, (int64_t)v396, v397, v398, v399, v400, v401, v402);
            v97 = 6;
            goto LABEL_414;
          }
          goto LABEL_416;
        }
LABEL_47:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
        v8->fields._readResult_5__2 = (int)this;
        if ( !_4__this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__34_o *)_4__this->fields.debugInfoRootObject;
        if ( !this )
          goto LABEL_416;
        v469 = v8;
        this = (ManagementManager__startCheckAll_d__34_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
        if ( !this )
          goto LABEL_416;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        ManagementManager__BuildInfoOff(_4__this, v152);
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
          v408 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
          if ( FreeSize < v408 )
            FreeSize = v408;
          if ( FreeSize < 1 )
            break;
          v409 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v409 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v409->static_fields->LIMIT_FREE_SIZE )
            break;
          _4__this->fields.isErrorDialog = 1;
          v410 = v77;
          Instance = SingletonMonoBehaviour_object___get_Instance(*v77);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v412 = LocalizationManager__Get((System_String_o *)StringLiteral_9379/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
          v413 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v413,
            (Il2CppObject *)_4__this,
            Method_ManagementManager_EndRetryDialog__,
            0LL);
          if ( !Instance )
            goto LABEL_416;
          CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v412, v413, 0, 0LL);
          v77 = v410;
LABEL_364:
          if ( _4__this->fields.isErrorDialog )
          {
            v414 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v414, 0LL);
            v469->fields.__2__current = (Il2CppObject *)v414;
            v365 = &v469->fields.__2__current;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&v469->fields.__2__current,
              (int64_t)v414,
              v415,
              v416,
              v417,
              v418,
              v419,
              v420);
            v372 = 7;
            goto LABEL_373;
          }
        }
        readResult_5__2 = v469->fields._readResult_5__2;
        if ( readResult_5__2 )
        {
          if ( readResult_5__2 == 1 )
          {
            _4__this->fields.isReadAuth = 0;
            v422 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v422,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_callbackAccountRegist__,
              v423);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                                 v422,
                                                                 (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
            if ( this )
            {
              AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_372:
              v424 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v424, 0LL);
              v469->fields.__2__current = (Il2CppObject *)v424;
              v365 = &v469->fields.__2__current;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&v469->fields.__2__current,
                (int64_t)v424,
                v425,
                v426,
                v427,
                v428,
                v429,
                v430);
              v372 = 8;
LABEL_373:
              *((_DWORD *)v365 - 2) = v372;
              return 1;
            }
            goto LABEL_416;
          }
          v450 = (Il2CppObject *)StringLiteral_1/*""*/;
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v451 = LocalizationManager__Get((System_String_o *)StringLiteral_9380/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_416;
            DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
          }
          else
          {
            if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
            DispFriendCode = AndroidUtil__GetFriendCodeFromOldDat(0LL);
            if ( System_String__IsNullOrEmpty(DispFriendCode, 0LL) )
            {
LABEL_399:
              v453 = SingletonMonoBehaviour_object___get_Instance(*v77);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v454 = LocalizationManager__Get((System_String_o *)StringLiteral_9381/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
              v470.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
              v470.monitor = (void *)-1LL;
              v471 = v469->fields._readResult_5__2;
              v455 = System_Enum__ToString(&v470, 0LL);
              v456 = (System_String_o *)StringLiteral_1/*""*/;
              if ( v455 )
                v457 = (Il2CppObject *)v455;
              else
                v457 = (Il2CppObject *)StringLiteral_1/*""*/;
              v458 = System_String__Format_62713180(v454, v450, v457, 0LL);
              v459 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v459,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_EndQuitDialog__,
                0LL);
              if ( v453 )
              {
                CommonUI__OpenErrorDialog((CommonUI_o *)v453, v456, v458, v459, 0, 0LL);
                return 0;
              }
              goto LABEL_416;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v451 = LocalizationManager__Get((System_String_o *)StringLiteral_9380/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
          }
          v450 = (Il2CppObject *)System_String__Format(v451, (Il2CppObject *)DispFriendCode, 0LL);
          goto LABEL_399;
        }
LABEL_374:
        v8 = v469;
        v469->fields._isCacheCheck_5__3 = 0;
LABEL_375:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        DataManager__Initialize((DataManager_o *)this, 0LL);
        if ( !v8->fields.isReboot && !v8->fields._isCacheCheck_5__3 )
        {
          v8->fields._isCacheCheck_5__3 = 1;
          v431 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v431 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v431->static_fields->RebootCacheClearKey, 0LL) )
          {
            v432 = v77;
            v433 = (Il2CppObject *)sub_1BE4D18(ManagementManager___c__DisplayClass34_0_TypeInfo);
            System_Object___ctor(v433, 0LL);
            v8->fields.__8__1 = (struct ManagementManager___c__DisplayClass34_0_o *)v433;
            p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&v8->fields.__8__1,
              (int64_t)v433,
              v435,
              v436,
              v437,
              v438,
              v439,
              v440);
            if ( !v8->fields.__8__1 )
              goto LABEL_416;
            v8->fields.__8__1->fields = 0;
            v441 = v8;
            v442 = SingletonMonoBehaviour_object___get_Instance(*v432);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v443 = LocalizationManager__Get((System_String_o *)StringLiteral_7517/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
            v444 = LocalizationManager__Get((System_String_o *)StringLiteral_7515/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
            v445 = LocalizationManager__Get((System_String_o *)StringLiteral_7514/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
            v446 = LocalizationManager__Get((System_String_o *)StringLiteral_7513/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
            v447 = *p__8__1;
            v448 = v446;
            v449 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v449,
              v447,
              Method_ManagementManager___c__DisplayClass34_0__startCheckAll_b__0__,
              0LL);
            if ( !v442 )
              goto LABEL_416;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v442,
              v443,
              v444,
              v445,
              v448,
              v449,
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
            v77 = v432;
            v8 = v441;
LABEL_60:
            _8__1 = v8->fields.__8__1;
            if ( !_8__1 )
              goto LABEL_416;
            if ( !_8__1->fields.confirmed )
            {
              v356 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v356, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v356;
              v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v90, (int64_t)v356, v357, v358, v359, v360, v361, v362);
              v97 = 9;
              goto LABEL_414;
            }
            if ( _8__1->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_416;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v8->fields.__8__1 = 0LL;
            sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__1, 0LL, v2, v3, v4, v5, v6, v7);
          }
          else
          {
            v460 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v460 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v460->static_fields->RebootCacheClearKey, 1, 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
          }
        }
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance(*v77);
        if ( this )
        {
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__34_o *)DataManager__readMasterVersion(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              started = UnityEngine_MonoBehaviour__StartCoroutine_70437272(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          (System_Collections_IEnumerator_o *)this,
                          0LL);
              v8->fields.__2__current = (Il2CppObject *)started;
              v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v90, (int64_t)started, v462, v463, v464, v465, v466, v467);
              v97 = 10;
              goto LABEL_414;
            }
          }
        }
LABEL_416:
        sub_1BE4D28(this, method);
      }
      v108 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v108, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v108;
      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v90, (int64_t)v108, v109, v110, v111, v112, v113, v114);
      v97 = 4;
LABEL_414:
      *(_DWORD *)&v90[-1].fields._IsQuestStartMenuMode_k__BackingField = v97;
      return 1;
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_30;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_44;
      goto LABEL_416;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_47;
    case 7:
      v469 = v8;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_364;
    case 8:
      v469 = v8;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_372;
      goto LABEL_374;
    case 9:
      p_fields->__1__state = -1;
      goto LABEL_60;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4B664CF )
      {
        sub_1BE4ACC(&DataManager_TypeInfo, method);
        byte_4B664CF = 1;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__34_o *)DataManager_TypeInfo;
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
        goto LABEL_416;
      _4__this->fields.isReadGameData = 0;
      v155 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v155,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v156);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                           v155,
                                                           (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v157 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v157, 0LL);
      v8->fields._waitForServerTime_5__7 = v157;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._waitForServerTime_5__7,
        (int64_t)v157,
        v158,
        v159,
        v160,
        v161,
        v162,
        v163);
      goto LABEL_86;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
      {
LABEL_86:
        waitForServerTime_5__7 = (int64_t)v8->fields._waitForServerTime_5__7;
        v8->fields.__2__current = (Il2CppObject *)waitForServerTime_5__7;
        v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v90, waitForServerTime_5__7, v2, v3, v4, v5, v6, v7);
        v97 = 11;
        goto LABEL_414;
      }
      _4__this->fields.isReadGameData = 0;
      v164 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v164,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v165);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                           v164,
                                                           (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( this )
      {
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v166 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v166, 0LL);
        v8->fields._wait_5__8 = v166;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v8->fields._wait_5__8,
          (int64_t)v166,
          v167,
          v168,
          v169,
          v170,
          v171,
          v172);
LABEL_200:
        wait_5__8 = (int64_t)v8->fields._wait_5__8;
        v8->fields.__2__current = (Il2CppObject *)wait_5__8;
        v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v90, wait_5__8, v2, v3, v4, v5, v6, v7);
        v97 = 12;
        goto LABEL_414;
      }
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_200;
      v174 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B642D1 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, method);
        byte_4B642D1 = 1;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager_TypeInfo;
      }
      if ( !v174 )
        goto LABEL_416;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v174,
        (System_String_o *)StringLiteral_5205/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0LL);
      if ( v8->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v176 = UnityEngine_MonoBehaviour__StartCoroutine_70437272(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   MasterData,
                   0LL);
          v8->fields.__2__current = (Il2CppObject *)v176;
          v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BE4A70(v90, (int64_t)v176, v177, v178, v179, v180, v181, v182);
          v97 = 13;
          goto LABEL_414;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__34_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v8->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v184 = UnityEngine_MonoBehaviour__StartCoroutine_70437272(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v8->fields.__2__current = (Il2CppObject *)v184;
            v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BE4A70(v90, (int64_t)v184, v185, v186, v187, v188, v189, v190);
            v97 = 15;
            goto LABEL_414;
          }
        }
      }
      goto LABEL_416;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4B664D0 )
      {
        sub_1BE4ACC(&DataManager_TypeInfo, method);
        byte_4B664D0 = 1;
      }
      v183 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v183 = DataManager_TypeInfo;
      }
      if ( v183->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v183->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v183);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v320 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v320, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v320;
      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v90, (int64_t)v320, v321, v322, v323, v324, v325, v326);
      v97 = 14;
      goto LABEL_414;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_375;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4B664D1 )
      {
        sub_1BE4ACC(&DataManager_TypeInfo, method);
        byte_4B664D1 = 1;
      }
      v191 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v191 = DataManager_TypeInfo;
      }
      v8->fields._updateMasterResult_5__9 = v191->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v8->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_39441680((NetworkManager_o *)this, method);
          v363 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v363);
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__34_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v364 = UnityEngine_MonoBehaviour__StartCoroutine_70437272(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v8->fields.__2__current = (Il2CppObject *)v364;
              v365 = &v8->fields.__2__current;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&v8->fields.__2__current,
                (int64_t)v364,
                v366,
                v367,
                v368,
                v369,
                v370,
                v371);
              v372 = 18;
              goto LABEL_373;
            }
          }
        }
        goto LABEL_416;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_416;
        _4__this->fields.isErrorDialog = 1;
        v193 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v194 = LocalizationManager__Get((System_String_o *)StringLiteral_9387/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v195 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v195, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v193 )
          goto LABEL_416;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v193,
          (System_String_o *)StringLiteral_1/*""*/,
          v194,
          v195,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v77 = (const MethodInfo_3828DC8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v196 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v196, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v196;
          v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BE4A70(v90, (int64_t)v196, v197, v198, v199, v200, v201, v202);
          v97 = 16;
          goto LABEL_414;
        }
        if ( v8->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_336;
      }
      else if ( !_4__this )
      {
        goto LABEL_416;
      }
      _4__this->fields.isErrorDialog = 1;
      v373 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v374 = LocalizationManager__Get((System_String_o *)StringLiteral_9388/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v375 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v375, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v373 )
        goto LABEL_416;
      CommonUI__OpenRetryDialog((CommonUI_o *)v373, (System_String_o *)StringLiteral_1/*""*/, v374, v375, 0, 0LL);
      v77 = (const MethodInfo_3828DC8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_334:
      if ( _4__this->fields.isErrorDialog )
      {
        v376 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v376, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v376;
        v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v90, (int64_t)v376, v377, v378, v379, v380, v381, v382);
        v97 = 17;
        goto LABEL_414;
      }
LABEL_336:
      v8->fields._waitForServerTime_5__7 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._waitForServerTime_5__7, 0LL, v2, v3, v4, v5, v6, v7);
      v8->fields._wait_5__8 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._wait_5__8, 0LL, v383, v384, v385, v386, v387, v388);
      goto LABEL_375;
    case 0x10:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_127;
      goto LABEL_416;
    case 0x11:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_334;
    case 0x12:
      v8->fields.__2__current = 0LL;
      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&v90[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1BE4A70(v90, 0LL, v2, v3, v4, v5, v6, v7);
      v97 = 19;
      goto LABEL_414;
    case 0x13:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_201;
      goto LABEL_137;
    case 0x14:
      p_fields->__1__state = -1;
LABEL_137:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v203 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v203, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v203;
        v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v90, (int64_t)v203, v204, v205, v206, v207, v208, v209);
        v97 = 20;
        goto LABEL_414;
      }
LABEL_201:
      v8->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0LL) )
      {
LABEL_204:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__get_IsOnline(0LL) )
        {
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_209:
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( this )
            {
              if ( !BYTE2(this->fields.__8__1) )
              {
                v313 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v313, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v313;
                v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1BE4A70(v90, (int64_t)v313, v314, v315, v316, v317, v318, v319);
                v97 = 25;
                goto LABEL_414;
              }
              this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
              if ( _4__this )
              {
                if ( this )
                {
                  v240 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                           (AssetManager_o *)this,
                           (System_String_o *)StringLiteral_12667/*"SYSTEM"*/,
                           _4__this->fields.downloadParallelMax,
                           0LL);
                  v241 = UnityEngine_MonoBehaviour__StartCoroutine_70437272(
                           (UnityEngine_MonoBehaviour_o *)_4__this,
                           v240,
                           0LL);
                  v8->fields.__2__current = (Il2CppObject *)v241;
                  v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BE4A70(v90, (int64_t)v241, v242, v243, v244, v245, v246, v247);
                  v97 = 26;
                  goto LABEL_414;
                }
              }
            }
          }
        }
        else
        {
LABEL_214:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LocalizationManager__LoadAssetData(0LL);
LABEL_217:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_4B664D3 )
          {
            sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
            byte_4B664D3 = 1;
          }
          v248 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v248 = LocalizationManager_TypeInfo;
          }
          if ( v248->static_fields->isBusySetAssetData )
          {
            v249 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v249, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v249;
            v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BE4A70(v90, (int64_t)v249, v250, v251, v252, v253, v254, v255);
            v97 = 29;
            goto LABEL_414;
          }
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          FSUtility__LoadAssetData(0LL);
LABEL_228:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          if ( !byte_4B664D4 )
          {
            sub_1BE4ACC(&FSUtility_TypeInfo, method);
            byte_4B664D4 = 1;
          }
          v256 = FSUtility_TypeInfo;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            v256 = FSUtility_TypeInfo;
          }
          if ( v256->static_fields->isBusySetAssetData )
          {
            v257 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v257, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v257;
            v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BE4A70(v90, (int64_t)v257, v258, v259, v260, v261, v262, v263);
            v97 = 30;
            goto LABEL_414;
          }
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          ImageLimitCount__initializeAssetStorage(0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__Initialize(0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          this = (ManagementManager__startCheckAll_d__34_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
          if ( this )
          {
            OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, method);
LABEL_244:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( AtlasManager__IsBusyInitialize(0LL) )
            {
              v264 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v264, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v264;
              v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v90, (int64_t)v264, v265, v266, v267, v268, v269, v270);
              v97 = 31;
              goto LABEL_414;
            }
            v8->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_249:
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__34_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
            if ( this )
            {
              if ( LOBYTE(this->fields.__2__current) )
              {
                overrideAssetSoundNameWaitCount_5__5 = v8->fields._overrideAssetSoundNameWaitCount_5__5;
                v8->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
                if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
                {
                  v272 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v272, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v272;
                  v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BE4A70(v90, (int64_t)v272, v273, v274, v275, v276, v277, v278);
                  v97 = 32;
                  goto LABEL_414;
                }
              }
              this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_257:
                this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  if ( LOBYTE(this[9].monitor) )
                  {
                    v279 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v279, 0LL);
                    v8->fields.__2__current = (Il2CppObject *)v279;
                    v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                    sub_1BE4A70(v90, (int64_t)v279, v280, v281, v282, v283, v284, v285);
                    v97 = 33;
                    goto LABEL_414;
                  }
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__initializeAssetStorage(0LL);
LABEL_263:
                  this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                  if ( this )
                  {
                    if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
                    {
                      v286 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v286, 0LL);
                      v8->fields.__2__current = (Il2CppObject *)v286;
                      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                      sub_1BE4A70(v90, (int64_t)v286, v287, v288, v289, v290, v291, v292);
                      v97 = 34;
                      goto LABEL_414;
                    }
                    this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( this )
                    {
                      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_268:
                      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                      if ( this )
                      {
                        if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
                        {
                          v293 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                          UnityEngine_WaitForEndOfFrame___ctor(v293, 0LL);
                          v8->fields.__2__current = (Il2CppObject *)v293;
                          v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                          sub_1BE4A70(v90, (int64_t)v293, v294, v295, v296, v297, v298, v299);
                          v97 = 35;
                          goto LABEL_414;
                        }
                        if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
                        if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
                        {
                          if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
                          PurchaseBehaviour__Ready(0LL);
                        }
                        if ( v8->fields._isLoad_5__4 )
                        {
                          if ( !SoundManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                          if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9450/*"NOW_LOADING"*/, 0LL) )
                          {
                            if ( !SoundManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                            SoundManager__fadeoutBgm(1.0, 0LL);
                            v300 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
                            UnityEngine_WaitForSeconds___ctor(v300, 1.0, 0LL);
                            v8->fields.__2__current = (Il2CppObject *)v300;
                            v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                            sub_1BE4A70(v90, (int64_t)v300, v301, v302, v303, v304, v305, v306);
                            v97 = 36;
                            goto LABEL_414;
                          }
LABEL_284:
                          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                        }
                        else
                        {
                          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          this = (ManagementManager__startCheckAll_d__34_o *)CommonUI__IsLoadMode(
                                                                               (CommonUI_o *)this,
                                                                               3,
                                                                               0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( this )
                            {
                              CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_341:
                              v389 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                              UnityEngine_WaitForEndOfFrame___ctor(v389, 0LL);
                              v8->fields.__2__current = (Il2CppObject *)v389;
                              v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                              sub_1BE4A70(v90, (int64_t)v389, v390, v391, v392, v393, v394, v395);
                              v97 = 37;
                              goto LABEL_414;
                            }
                            goto LABEL_416;
                          }
                        }
                        if ( _4__this )
                        {
                          ManagementManager__BuildInfoOff(_4__this, method);
                          v8->fields.__2__current = 0LL;
                          v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                          sub_1BE4A70(v90, 0LL, v307, v308, v309, v310, v311, v312);
                          v97 = 38;
                          goto LABEL_414;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_300:
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v349 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v349, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v349;
              v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v90, (int64_t)v349, v350, v351, v352, v353, v354, v355);
              v97 = 21;
              goto LABEL_414;
            }
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this )
            {
              if ( this )
              {
                AssetManager__DownloadAssetStorageAttribute(
                  (AssetManager_o *)this,
                  (System_String_o *)StringLiteral_12667/*"SYSTEM"*/,
                  _4__this->fields.downloadParallelMax,
                  0LL);
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                if ( AssetManager__getDownloadSize(0LL) >= 1 )
                {
                  v334 = ManagerConfig_TypeInfo;
                  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                    v334 = ManagerConfig_TypeInfo;
                  }
                  if ( v334->static_fields->UseStandaloneAsset )
                  {
                    v8->fields._isLoad_5__4 = 1;
                    if ( !SoundManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    SoundManager__playBgm((System_String_o *)StringLiteral_9450/*"NOW_LOADING"*/, 0LL);
                    this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_314:
                      v335 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v335, 0LL);
                      v8->fields.__2__current = (Il2CppObject *)v335;
                      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                      sub_1BE4A70(v90, (int64_t)v335, v336, v337, v338, v339, v340, v341);
                      v97 = 22;
                      goto LABEL_414;
                    }
                    goto LABEL_416;
                  }
LABEL_146:
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                  if ( AssetManager__getDownloadSize(0LL) >= 1 )
                  {
                    v210 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v210, 0LL);
                    v8->fields.__2__current = (Il2CppObject *)v210;
                    v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                    sub_1BE4A70(v90, (int64_t)v210, v211, v212, v213, v214, v215, v216);
                    v97 = 23;
                    goto LABEL_414;
                  }
                }
LABEL_315:
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                AssetManager__SetOnlineStatus(0LL);
                this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( this )
                {
                  NetworkManager__SetServerSetting_39441680((NetworkManager_o *)this, method);
                  v342 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
                  UnityEngine_WaitForSeconds___ctor(v342, 0.1, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v342;
                  v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BE4A70(v90, (int64_t)v342, v343, v344, v345, v346, v347, v348);
                  v97 = 24;
                  goto LABEL_414;
                }
              }
            }
          }
        }
      }
      goto LABEL_416;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_300;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_314;
      goto LABEL_315;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_146;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_204;
    case 0x19:
      p_fields->__1__state = -1;
      goto LABEL_209;
    case 0x1A:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_214;
      v8->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_4B664D2 )
      {
        sub_1BE4ACC(&LogoMain_TypeInfo, v217);
        byte_4B664D2 = 1;
      }
      v218 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v218 = LogoMain_TypeInfo;
      }
      if ( !v218->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9450/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v219 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v219, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v219;
      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v90, (int64_t)v219, v220, v221, v222, v223, v224, v225);
      v97 = 27;
      goto LABEL_414;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_295:
      v327 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v327, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v327;
      v90 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v90, (int64_t)v327, v328, v329, v330, v331, v332, v333);
      v97 = 28;
      goto LABEL_414;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_295;
      v226 = Method_ManagementManager__startCheckAll_d__34_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__34_MoveNext__ + 83) & 2) != 0 )
        v226 = (_QWORD *)sub_1BE4AE4(Method_ManagementManager__startCheckAll_d__34_MoveNext__);
      v227 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v226, v226[4]);
      OverwriteAssetSoundName__PlaySystemSe(v227, 0, v228);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      goto LABEL_214;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_217;
    case 0x1E:
      p_fields->__1__state = -1;
      goto LABEL_228;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_244;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_249;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_257;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_263;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_268;
    case 0x24:
      p_fields->__1__state = -1;
      goto LABEL_284;
    case 0x25:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_341;
      v229 = Method_ManagementManager__startCheckAll_d__34_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__34_MoveNext__ + 83) & 2) != 0 )
        v229 = (_QWORD *)sub_1BE4AE4(Method_ManagementManager__startCheckAll_d__34_MoveNext__);
      v230 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v229, v229[4]);
      OverwriteAssetSoundName__PlaySystemSe(v230, 0, v231);
      goto LABEL_284;
    case 0x26:
      p_fields->__1__state = -1;
      v232 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v232 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v232->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        v234 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v234);
        OptionManager__SetNotiffication(Notiffication, 1, v236);
        v237 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v237 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v237->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v233);
      if ( v8->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v238);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 9, 1, 0LL, 0LL);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ManagementManager__startCheckAll_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__startCheckAll_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__startCheckAll_d__34__System_Collections_IEnumerator_Reset(
        ManagementManager__startCheckAll_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ManagementManager__startCheckAll_d__34_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__startCheckAll_d__34__System_Collections_IEnumerator_get_Current(
        ManagementManager__startCheckAll_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__startCheckAll_d__34__System_IDisposable_Dispose(
        ManagementManager__startCheckAll_d__34_o *this,
        const MethodInfo *method)
{
  ;
}