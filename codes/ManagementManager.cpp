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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct ManagementManager_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct ManagementManager_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct ManagementManager_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B15A1E & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_8155/*"IsNotificationStatusSend"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8167/*"IsReBootCacheClearKey"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_21132/*"ja-JP"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_25149/*"yyyy年MM月dd日HH時mm分"*/, v14, v15);
    byte_4B15A1E = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8155/*"IsNotificationStatusSend"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8155/*"IsNotificationStatusSend"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_8167/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8167/*"IsReBootCacheClearKey"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->RebootCacheClearKey, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_25149/*"yyyy年MM月dd日HH時mm分"*/;
  v25 = ManagementManager_TypeInfo->static_fields;
  v25->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_25149/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->DATE_TIME_DISP_FORMAT, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_21132/*"ja-JP"*/;
  v33 = ManagementManager_TypeInfo->static_fields;
  v33->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_21132/*"ja-JP"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->DEFAULT_CULTURE_NAME, v32, v34, v35, v36, v37, v38, v39);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15A1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method, v2);
    byte_4B15A1D = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void __fastcall ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  ManagementManager_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  float v30; // s0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  Il2CppObject *v51; // x19
  __int64 v52; // x1
  Il2CppObject *v53; // x19
  float v54; // [xsp+Ch] [xbp-34h] BYREF

  v54 = ratio;
  if ( (byte_4B15A08 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, errorText, exceptionMessage);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_832/*"):"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_6846/*"Firebase.FirebaseApp"*/, v12, v13);
    this = (ManagementManager_o *)sub_1BCA7E0(&StringLiteral_791/*"(ratio: "*/, v14, v15);
    byte_4B15A08 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6846/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1BCA888(string___TypeInfo, 5LL);
    if ( this )
    {
      v22 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.isInitializingData,
        (int64_t)errorText,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v29 = StringLiteral_791/*"(ratio: "*/;
      v22->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_791/*"(ratio: "*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v22->fields.AvalonSceneManager, v29, v23, v24, v25, v26, v27, v28);
      this = (ManagementManager_o *)System_Single__ToString(v30, (const MethodInfo *)&v54);
      if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 2
        || (v22->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v22->fields.debugInfoRootObject,
              (int64_t)this,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36),
            LODWORD(v22->fields.m_CancellationTokenSource) <= 3)
        || (v43 = StringLiteral_832/*"):"*/,
            v22->fields.statusLabel = (struct UILabel_o *)StringLiteral_832/*"):"*/,
            sub_1BCA784((PartyOrganizationUtility_o *)&v22->fields.statusLabel, v43, v37, v38, v39, v40, v41, v42),
            LODWORD(v22->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1BCAA44(this, errorText);
      }
      v22->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v22->fields._videoPlayer_k__BackingField,
        (int64_t)exceptionMessage,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      v51 = (Il2CppObject *)System_String__Concat_62414748((System_String_array *)v22, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v50);
      UnityEngine_Debug__LogError(v51, 0LL);
      return;
    }
LABEL_19:
    sub_1BCAA3C(this, errorText);
  }
  v53 = (Il2CppObject *)System_String__Concat_62401220(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v52);
  UnityEngine_Debug__LogError(v53, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B15A04 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v4, v5);
    byte_4B15A04 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_37DEE80 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4B15A1B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, boot, method);
    byte_4B15A1B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, boot);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4B15A1A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B15A1A = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1BCAA3C(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagementManager_c *v3; // x0

  if ( (byte_4B15A02 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, v1, v2);
    byte_4B15A02 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v1);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndDifferentCreateUserServerDialog(
        ManagementManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B15A10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide, method);
    byte_4B15A10 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4B15A0F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, isDecide, method);
    byte_4B15A0F = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, isDecide);
  UnityEngine_Application__Quit_69948112(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4B15A0E & 1) != 0 )
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
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, isDecide, method);
    byte_4B15A0E = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, isDecide);
  UnityEngine_Application__Quit_69948112(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15A0A & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager__InitializeAdManagerAndFirebase_d__35_TypeInfo, method, v2);
    byte_4B15A0A = 1;
  }
  v5 = sub_1BCAA2C(ManagementManager__InitializeAdManagerAndFirebase_d__35_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagementManager_c *v3; // x0

  if ( (byte_4B15A17 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, method, v2);
    byte_4B15A17 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
  if ( !byte_4B152DA )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, method, v2);
    byte_4B152DA = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
    v3 = ManagementManager_TypeInfo;
  }
  return !v3->static_fields->isDuringStartup;
}


bool __fastcall ManagementManager__IsLoading(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  NetworkManager_c *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B15A18 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v5, v6);
    byte_4B15A18 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( NetworkManager__CommunicationIsBusy((const MethodInfo *)v7) )
    return 1;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
  if ( AssetManager__LoadIsBusy(0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ManagementManager_c *v5; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4B15A1C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Globalization_CultureInfo_TypeInfo, v1, v2);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v3, v4);
    byte_4B15A1C = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v1);
    v5 = ManagementManager_TypeInfo;
  }
  DEFAULT_CULTURE_NAME = v5->static_fields->DEFAULT_CULTURE_NAME;
  if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, v1);
  SpecificCulture = System_Globalization_CultureInfo__CreateSpecificCulture(DEFAULT_CULTURE_NAME, 0LL);
  System_Globalization_CultureInfo__set_CurrentCulture(SpecificCulture, 0LL);
}


void __fastcall ManagementManager__RebootCacheClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagementManager_c *v3; // x0
  __int64 v4; // x1
  ManagementManager_c *v5; // x0

  if ( (byte_4B15A03 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, v1, v2);
    byte_4B15A03 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v1);
    v3 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v3->static_fields->RebootCacheClearKey, 0LL) )
  {
    v5 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v4);
      v5 = ManagementManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->RebootCacheClearKey, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__SetupFirebaseAppCheck(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x19

  if ( (byte_4B15A0B & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager__SetupFirebaseAppCheck_d__36_TypeInfo, method, v2);
    byte_4B15A0B = 1;
  }
  v4 = sub_1BCAA2C(ManagementManager__SetupFirebaseAppCheck_d__36_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ManagementManager__Start(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_IEnumerator_o *v20; // x1
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( (byte_4B15A05 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Type_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityGamingServicesBehaviour_var, v10, v11);
    byte_4B15A05 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  UnityEngine_Application__set_targetFrameRate(30, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v12);
  AndroidUtil__TransitionSaveData(0LL);
  UnityEngine_Screen__set_autorotateToLandscapeLeft(1, 0LL);
  UnityEngine_Screen__set_autorotateToLandscapeRight(1, 0LL);
  UnityEngine_Screen__set_autorotateToPortrait(0, 0LL);
  UnityEngine_Screen__set_autorotateToPortraitUpsideDown(0, 0LL);
  UnityEngine_Screen__set_orientation(5, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16 = (int)UnityGamingServicesBehaviour_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v14);
  v21.fields.value = v16;
  TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v18);
  v20 = ManagementManager__startCheckAll(this, 0, 0, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagementManager_o *v3; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1

  v3 = this;
  if ( (byte_4B15A19 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    byte_4B15A19 = 1;
  }
  if ( v3->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v5) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v6);
      UnityEngine_Application__Quit_69948112(0LL);
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
  __int64 v4; // x2
  ManagementManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B15A16 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B15A16 = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, result);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ManagerConfig_c *v15; // x0
  _BOOL8 _38402052; // x0
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  Il2CppObject *Request_object; // x0
  __int64 v21; // x1

  if ( (byte_4B15A15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ManagementManager_callbackTerminalTopHome__, result, method);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TopHomeRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v13, v14);
    byte_4B15A15 = 1;
  }
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, result);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    goto LABEL_9;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, result);
  _38402052 = TutorialFlag__Get_38402052(102, 0LL);
  if ( _38402052 )
  {
LABEL_9:
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   result,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v18);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
    Request_object = NetworkManager__getRequest_object_(
                       v17,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1BCAA3C(0LL, v21);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_38402052, result, method);
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
  __int64 v5; // x2
  ManagementManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B15A13 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    byte_4B15A13 = 1;
  }
  v6 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, result);
    v6 = ManagementManager_TypeInfo;
  }
  v6->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, this->fields.scenetype, 0, 0LL, 0LL);
}


void __fastcall ManagementManager__callbackTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ManagerConfig_c *v15; // x0
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1

  if ( (byte_4B15A12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ManagementManager_callbackTopHome__, result, method);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TopHomeRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v13, v14);
    byte_4B15A12 = 1;
  }
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, result);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    goto LABEL_9;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, result);
  if ( TutorialFlag__Get_38402052(102, 0LL) )
  {
LABEL_9:
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   result,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(v16, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v17);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    Request_object = NetworkManager__getRequest_object_(
                       v16,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1BCAA3C(0LL, v20);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTopHome(this, result, method);
  }
}


void __fastcall ManagementManager__createMovieObj(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct AvalonVideoPlayer_o **p_videoPlayer_k__BackingField; // x20
  UnityEngine_Object_o *videoPlayer_k__BackingField; // x21
  UnityEngine_GameObject_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_GameObject_o *v20; // x21
  Il2CppObject *Component_object; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  AvalonVideoPlayer_o *v30; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_4B15A06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Camera___, v4, v5);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_4711/*"CommonUI/UI Root/SystemUICamera"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9282/*"MovieRoot"*/, v12, v13);
    byte_4B15A06 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v16 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4711/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v20 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, v17, v18, v19);
    UnityEngine_GameObject___ctor(v20, (System_String_o *)StringLiteral_9282/*"MovieRoot"*/, 0LL);
    if ( !v20
      || (v23 = UnityEngine_GameObject__AddComponent_object_(
                  v20,
                  (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v23,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields._videoPlayer_k__BackingField,
            (int64_t)v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29),
          !v16)
      || (v30 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v16,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v30) )
    {
      sub_1BCAA3C(Component_object, v22);
    }
    AvalonVideoPlayer__initialize(v30, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34336992(v20, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B15A00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1, v2);
    byte_4B15A00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagementManager_c *v3; // x0

  if ( (byte_4B15A01 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, v1, v2);
    byte_4B15A01 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v1);
    v3 = ManagementManager_TypeInfo;
  }
  return v3->static_fields->isDuringStartup;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  ManagementManager_c *v37; // x0
  Il2CppObject *Instance; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  System_Collections_IEnumerator_o *v49; // x1

  if ( (byte_4B15A07 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, isLogin, isFadeInit);
    sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&FirebaseScript_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_GC_TypeInfo, v13, v14);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33, v34);
    sub_1BCA7E0(&SoundManager_TypeInfo, v35, v36);
    byte_4B15A07 = 1;
  }
  if ( !this->fields.isInitializingData )
  {
    this->fields.isInitializingData = 1;
    v37 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, isLogin);
      v37 = ManagementManager_TypeInfo;
    }
    v37->static_fields->isDuringStartup = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    SwitchParameterDisplayManager__Reboot((SwitchParameterDisplayManager_o *)Instance, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v41);
    CommonEffectManager__Reboot(0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v42);
    SoundManager__reboot(0LL);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v43);
    CTouch__reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1BCAA3C(Instance, v39);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v44);
    System_GC__Collect_63447616(0LL);
    v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v45 )
      sub_1BCAA3C(0LL, v46);
    AdManager__Initialize((AdManager_o *)v45, 2, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v47);
    FirebaseScript__Initialize(0LL);
    v49 = ManagementManager__startCheckAll(this, 1, isLogin, v48);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v49, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  NetworkManager_LoginCallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3

  if ( (byte_4B15A11 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_LoginCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ManagementManager_callbackTopLogin__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6, v7);
    byte_4B15A11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v12 = (NetworkManager_LoginCallbackFunc_o *)sub_1BCAA2C(NetworkManager_LoginCallbackFunc_TypeInfo, v9, v10, v11);
  NetworkManager_LoginCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v13);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v12, 1, v16);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  NetworkManager_LoginCallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3

  if ( (byte_4B15A14 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_LoginCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ManagementManager_callbackTerminalTopLogin__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6, v7);
    byte_4B15A14 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v12 = (NetworkManager_LoginCallbackFunc_o *)sub_1BCAA2C(NetworkManager_LoginCallbackFunc_TypeInfo, v9, v10, v11);
  NetworkManager_LoginCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v13);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v12, 1, v16);
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
  sub_1BCA784(
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

  if ( (byte_4B15A09 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagementManager__startCheckAll_d__34_TypeInfo, isReboot, isLogin);
    byte_4B15A09 = 1;
  }
  v7 = isLogin;
  v8 = sub_1BCAA2C(ManagementManager__startCheckAll_d__34_TypeInfo, isReboot, isLogin, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15A0C & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15A0C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  DataManager__ClearCacheAll(0LL);
}


void __fastcall ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  ScrTerminalListTop_c *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1

  if ( (byte_4B15A0D & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ScrTerminalListTop_TypeInfo, v3, v4);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B15A0D = 1;
  }
  MovieFileMerge__Delete_38464212(0LL);
  v10 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v9);
    v10 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v10->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
  if ( !byte_4B13389 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    byte_4B13389 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
  AssetStorageCache__ClearCacheAll(1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  DataManager__ClearCacheAll(0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v15);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v10; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  bool result; // w0
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  ManagementManager_o *v24; // x0
  const MethodInfo *v25; // x1
  System_Collections_IEnumerator_o *v26; // x1

  if ( (byte_4B15A20 & 1) == 0 )
  {
    sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v7, v8);
    byte_4B15A20 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v20);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v21 )
      sub_1BCAA3C(0LL, v22);
    AdManager__Initialize((AdManager_o *)v21, 1, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v23);
    FirebaseScript__Initialize(0LL);
    if ( !_4__this )
      sub_1BCAA3C(v24, v25);
    v26 = ManagementManager__SetupFirebaseAppCheck(v24, v25);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516(_4__this, v26, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v10, 0LL);
    this->fields.__2__current = (Il2CppObject *)v10;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_ManagementManager__InitializeAdManagerAndFirebase_d__35_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t _1__state; // w8
  FirebaseScript_c *v22; // x0
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  FirebaseScript_c *v30; // x0
  FirebaseScript_c *v31; // x0
  Il2CppObject **v32; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  FirebaseScript_c *v35; // x0
  FirebaseScript_c *v36; // x0
  System_String_o *prevKeyName_5__3; // x0
  System_String_o *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  float time; // s8
  FirebaseScript_c *v42; // x0
  float beginTime_5__2; // s9
  FirebaseScript_c *v44; // x0
  float v45; // s8
  char IsNullOrEmpty; // w0
  char v47; // w22
  bool v48; // w23
  Il2CppObject *v49; // x20
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  System_String_o *v53; // x20
  FirebaseScript_c *v54; // x0
  char v55[4]; // [xsp+8h] [xbp-48h] BYREF
  float v56; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B15A21 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&FirebaseScript_TypeInfo, v9, v10);
    sub_1BCA7E0(&float_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_867/*", AppCheckErrorMessage: "*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16979/*"appCheckPrevMessage"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_6009/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_8093/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/, v19, v20);
    byte_4B15A21 = 1;
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
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      if ( !byte_4B15B1D )
      {
        sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
        byte_4B15B1D = 1;
      }
      v22 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
        v22 = FirebaseScript_TypeInfo;
      }
      v22->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0LL);
      v23 = StringLiteral_16979/*"appCheckPrevMessage"*/;
      this->fields._prevKeyName_5__3 = (struct System_String_o *)StringLiteral_16979/*"appCheckPrevMessage"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._prevKeyName_5__3, v23, v24, v25, v26, v27, v28, v29);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      if ( !byte_4B15B1E )
      {
        sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
        byte_4B15B1E = 1;
      }
      v30 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
        v30 = FirebaseScript_TypeInfo;
      }
      if ( !v30->static_fields->_IsFirebaseInitialized_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !v30->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v30, method);
      if ( !FirebaseScript__GetAppCheckToken(0LL) )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
        if ( !byte_4B15B1F )
        {
          sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
          byte_4B15B1F = 1;
        }
        v35 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
          v35 = FirebaseScript_TypeInfo;
        }
        if ( v35->static_fields->_IsSendAppCheckToken_k__BackingField )
          return 0;
        if ( !v35->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v35, method);
        if ( !byte_4B1594D )
        {
          sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
          byte_4B1594D = 1;
        }
        v36 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
          v36 = FirebaseScript_TypeInfo;
        }
        if ( v36->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        prevKeyName_5__3 = this->fields._prevKeyName_5__3;
        v38 = (System_String_o *)StringLiteral_8093/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        goto LABEL_71;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      if ( !byte_4B1594E )
      {
        sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
        byte_4B1594E = 1;
      }
      v31 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
        v31 = FirebaseScript_TypeInfo;
      }
      if ( v31->static_fields->_IsRunningGetAppCheckToken_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        v32 = &this->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)v32, 0LL, v2, v3, v4, v5, v6, v7);
        *((_DWORD *)v32 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0LL);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v39);
      if ( !byte_4B15B1F )
      {
        sub_1BCA7E0(&FirebaseScript_TypeInfo, v39, v40);
        byte_4B15B1F = 1;
      }
      v42 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v39);
        v42 = FirebaseScript_TypeInfo;
      }
      if ( v42->static_fields->_IsSendAppCheckToken_k__BackingField )
        return 0;
      beginTime_5__2 = this->fields._beginTime_5__2;
      if ( !v42->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v42, v39);
      if ( !byte_4B15B20 )
      {
        sub_1BCA7E0(&FirebaseScript_TypeInfo, v39, v40);
        byte_4B15B20 = 1;
      }
      v44 = FirebaseScript_TypeInfo;
      v45 = time - beginTime_5__2;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v39);
        v44 = FirebaseScript_TypeInfo;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v44->static_fields->_AppCheckToken_k__BackingField, 0LL);
      v47 = ~IsNullOrEmpty;
      v48 = (IsNullOrEmpty & 1) == 0;
      v56 = v45;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v56);
      v55[0] = v48;
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v55);
      v53 = System_String__Format_62415592((System_String_o *)StringLiteral_6009/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v49, v50, 0LL);
      if ( (v47 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v51);
        if ( !byte_4B15B21 )
        {
          sub_1BCA7E0(&FirebaseScript_TypeInfo, v51, v52);
          byte_4B15B21 = 1;
        }
        v54 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v51);
          v54 = FirebaseScript_TypeInfo;
        }
        v53 = System_String__Concat_62412480(
                v53,
                (System_String_o *)StringLiteral_867/*", AppCheckErrorMessage: "*/,
                v54->static_fields->_AppCheckTokenError_k__BackingField,
                0LL);
      }
      prevKeyName_5__3 = this->fields._prevKeyName_5__3;
      v38 = v53;
LABEL_71:
      UnityEngine_PlayerPrefs__SetString(prevKeyName_5__3, v38, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ManagementManager__SetupFirebaseAppCheck_d__36_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B15A1F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flag, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_ManagementManager___c__DisplayClass34_1__startCheckAll_b__1__, v8, v9);
    sub_1BCA7E0(&ManagementManager___c__DisplayClass34_1_TypeInfo, v10, v11);
    byte_4B15A1F = 1;
  }
  v12 = sub_1BCAA2C(ManagementManager___c__DisplayClass34_1_TypeInfo, flag, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_ManagementManager___c__DisplayClass34_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v25, 0LL);
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
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ManagementManager__startCheckAll_d__34_o *v8; // x25
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  ManagementManager__startCheckAll_d__34_Fields *p_fields; // x8
  const MethodInfo_37DEB14 **v144; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v147; // x0
  PartyOrganizationUtility_o *p__2__current; // x25
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  bool result; // w0
  __int64 v156; // x1
  __int64 v157; // x1
  System_Collections_IEnumerator_o *v158; // x0
  PartyOrganizationUtility_o *v159; // x25
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  int v166; // w8
  System_Collections_IEnumerator_o *v167; // x0
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  __int64 v174; // x1
  __int64 v175; // x1
  OptionManager_c *v176; // x0
  __int64 v177; // x1
  const MethodInfo *v178; // x0
  const MethodInfo *v179; // x0
  __int64 v180; // x1
  __int64 v181; // x1
  __int64 v182; // x2
  __int64 v183; // x3
  UnityEngine_WaitForEndOfFrame_o *v184; // x20
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  ManagementManager__startCheckAll_d__34_o *v197; // x21
  int64_t v198; // x1
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int64_t v205; // x1
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  int64_t v212; // x1
  __int64 v213; // x1
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  EncryptedPlayerPrefs_c *v220; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v222; // x20
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  const MethodInfo *v229; // x1
  __int64 v230; // x1
  struct ManagementManager___c__DisplayClass34_0_o *_8__1; // x8
  __int64 v232; // x2
  __int64 v233; // x3
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v235; // x21
  const MethodInfo *v236; // x3
  __int64 v237; // x1
  __int64 v238; // x1
  __int64 v239; // x2
  __int64 v240; // x3
  UnityEngine_WaitForEndOfFrame_o *v241; // x20
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  NetworkManager_ResultCallbackFunc_o *v248; // x21
  const MethodInfo *v249; // x3
  __int64 v250; // x1
  __int64 v251; // x1
  __int64 v252; // x2
  __int64 v253; // x3
  UnityEngine_WaitForEndOfFrame_o *v254; // x20
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  int64_t waitForServerTime_5__7; // x1
  __int64 v262; // x2
  Il2CppObject *v263; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v265; // x0
  int64_t v266; // x2
  int32_t v267; // w3
  System_String_o *v268; // x4
  BattleSetupInfo_o *v269; // x5
  FollowerInfo_o *v270; // x6
  PartyListViewItem_o *v271; // x7
  __int64 v272; // x2
  DataManager_c *v273; // x0
  UnityEngine_Coroutine_o *v274; // x0
  int64_t v275; // x2
  int32_t v276; // w3
  System_String_o *v277; // x4
  BattleSetupInfo_o *v278; // x5
  FollowerInfo_o *v279; // x6
  PartyListViewItem_o *v280; // x7
  __int64 v281; // x2
  DataManager_c *v282; // x0
  __int64 v283; // x1
  int32_t updateMasterResult_5__9; // w8
  __int64 v285; // x1
  Il2CppObject *v286; // x21
  System_String_o *v287; // x22
  __int64 v288; // x1
  __int64 v289; // x2
  __int64 v290; // x3
  ErrorDialog_ClickDelegate_o *v291; // x23
  UnityEngine_WaitForEndOfFrame_o *v292; // x20
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  __int64 v299; // x2
  __int64 v300; // x3
  UnityEngine_WaitForEndOfFrame_o *v301; // x20
  int64_t v302; // x2
  int32_t v303; // w3
  System_String_o *v304; // x4
  BattleSetupInfo_o *v305; // x5
  FollowerInfo_o *v306; // x6
  PartyListViewItem_o *v307; // x7
  __int64 v308; // x2
  __int64 v309; // x3
  __int64 v310; // x2
  __int64 v311; // x3
  UnityEngine_WaitForEndOfFrame_o *v312; // x20
  int64_t v313; // x2
  int32_t v314; // w3
  System_String_o *v315; // x4
  BattleSetupInfo_o *v316; // x5
  FollowerInfo_o *v317; // x6
  PartyListViewItem_o *v318; // x7
  __int64 v319; // x1
  __int64 v320; // x2
  LogoMain_c *v321; // x0
  __int64 v322; // x1
  __int64 v323; // x2
  __int64 v324; // x3
  UnityEngine_WaitForEndOfFrame_o *v325; // x20
  int64_t v326; // x2
  int32_t v327; // w3
  System_String_o *v328; // x4
  BattleSetupInfo_o *v329; // x5
  FollowerInfo_o *v330; // x6
  PartyListViewItem_o *v331; // x7
  __int64 v332; // x1
  __int64 v333; // x2
  __int64 v334; // x3
  _QWORD *v335; // x0
  System_Reflection_MethodBase_o *v336; // x0
  const MethodInfo *v337; // x2
  __int64 v338; // x1
  __int64 v339; // x2
  __int64 v340; // x3
  _QWORD *v341; // x0
  System_Reflection_MethodBase_o *v342; // x0
  const MethodInfo *v343; // x2
  ManagementManager_c *v344; // x0
  const MethodInfo *v345; // x2
  OptionManager_c *v346; // x0
  bool Notiffication; // w0
  const MethodInfo *v348; // x2
  __int64 v349; // x1
  ManagementManager_c *v350; // x0
  const MethodInfo *v351; // x1
  int64_t wait_5__8; // x1
  __int64 v353; // x2
  __int64 v354; // x3
  System_Collections_IEnumerator_o *v355; // x0
  UnityEngine_Coroutine_o *v356; // x0
  int64_t v357; // x2
  int32_t v358; // w3
  System_String_o *v359; // x4
  BattleSetupInfo_o *v360; // x5
  FollowerInfo_o *v361; // x6
  PartyListViewItem_o *v362; // x7
  LocalizationManager_c *v363; // x0
  UnityEngine_WaitForEndOfFrame_o *v364; // x20
  int64_t v365; // x2
  int32_t v366; // w3
  System_String_o *v367; // x4
  BattleSetupInfo_o *v368; // x5
  FollowerInfo_o *v369; // x6
  PartyListViewItem_o *v370; // x7
  FSUtility_c *v371; // x0
  UnityEngine_WaitForEndOfFrame_o *v372; // x20
  int64_t v373; // x2
  int32_t v374; // w3
  System_String_o *v375; // x4
  BattleSetupInfo_o *v376; // x5
  FollowerInfo_o *v377; // x6
  PartyListViewItem_o *v378; // x7
  __int64 v379; // x1
  __int64 v380; // x1
  __int64 v381; // x2
  __int64 v382; // x3
  UnityEngine_WaitForEndOfFrame_o *v383; // x20
  int64_t v384; // x2
  int32_t v385; // w3
  System_String_o *v386; // x4
  BattleSetupInfo_o *v387; // x5
  FollowerInfo_o *v388; // x6
  PartyListViewItem_o *v389; // x7
  __int64 v390; // x2
  __int64 v391; // x3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v393; // x20
  int64_t v394; // x2
  int32_t v395; // w3
  System_String_o *v396; // x4
  BattleSetupInfo_o *v397; // x5
  FollowerInfo_o *v398; // x6
  PartyListViewItem_o *v399; // x7
  __int64 v400; // x2
  __int64 v401; // x3
  UnityEngine_WaitForEndOfFrame_o *v402; // x20
  int64_t v403; // x2
  int32_t v404; // w3
  System_String_o *v405; // x4
  BattleSetupInfo_o *v406; // x5
  FollowerInfo_o *v407; // x6
  PartyListViewItem_o *v408; // x7
  __int64 v409; // x1
  __int64 v410; // x2
  __int64 v411; // x3
  UnityEngine_WaitForEndOfFrame_o *v412; // x20
  int64_t v413; // x2
  int32_t v414; // w3
  System_String_o *v415; // x4
  BattleSetupInfo_o *v416; // x5
  FollowerInfo_o *v417; // x6
  PartyListViewItem_o *v418; // x7
  __int64 v419; // x2
  __int64 v420; // x3
  UnityEngine_WaitForEndOfFrame_o *v421; // x20
  int64_t v422; // x2
  int32_t v423; // w3
  System_String_o *v424; // x4
  BattleSetupInfo_o *v425; // x5
  FollowerInfo_o *v426; // x6
  PartyListViewItem_o *v427; // x7
  __int64 v428; // x1
  __int64 v429; // x1
  __int64 v430; // x1
  __int64 v431; // x2
  __int64 v432; // x3
  UnityEngine_WaitForSeconds_o *v433; // x20
  int64_t v434; // x2
  int32_t v435; // w3
  System_String_o *v436; // x4
  BattleSetupInfo_o *v437; // x5
  FollowerInfo_o *v438; // x6
  PartyListViewItem_o *v439; // x7
  int64_t v440; // x2
  int32_t v441; // w3
  System_String_o *v442; // x4
  BattleSetupInfo_o *v443; // x5
  FollowerInfo_o *v444; // x6
  PartyListViewItem_o *v445; // x7
  UnityEngine_WaitForEndOfFrame_o *v446; // x20
  int64_t v447; // x2
  int32_t v448; // w3
  System_String_o *v449; // x4
  BattleSetupInfo_o *v450; // x5
  FollowerInfo_o *v451; // x6
  PartyListViewItem_o *v452; // x7
  __int64 v453; // x1
  __int64 v454; // x2
  __int64 v455; // x3
  UnityEngine_WaitForEndOfFrame_o *v456; // x20
  int64_t v457; // x2
  int32_t v458; // w3
  System_String_o *v459; // x4
  BattleSetupInfo_o *v460; // x5
  FollowerInfo_o *v461; // x6
  PartyListViewItem_o *v462; // x7
  UnityEngine_WaitForEndOfFrame_o *v463; // x20
  int64_t v464; // x2
  int32_t v465; // w3
  System_String_o *v466; // x4
  BattleSetupInfo_o *v467; // x5
  FollowerInfo_o *v468; // x6
  PartyListViewItem_o *v469; // x7
  __int64 v470; // x2
  __int64 v471; // x3
  __int64 v472; // x1
  ManagerConfig_c *v473; // x0
  UnityEngine_WaitForEndOfFrame_o *v474; // x20
  int64_t v475; // x2
  int32_t v476; // w3
  System_String_o *v477; // x4
  BattleSetupInfo_o *v478; // x5
  FollowerInfo_o *v479; // x6
  PartyListViewItem_o *v480; // x7
  __int64 v481; // x1
  __int64 v482; // x2
  __int64 v483; // x3
  UnityEngine_WaitForSeconds_o *v484; // x20
  int64_t v485; // x2
  int32_t v486; // w3
  System_String_o *v487; // x4
  BattleSetupInfo_o *v488; // x5
  FollowerInfo_o *v489; // x6
  PartyListViewItem_o *v490; // x7
  UnityEngine_WaitForEndOfFrame_o *v491; // x20
  int64_t v492; // x2
  int32_t v493; // w3
  System_String_o *v494; // x4
  BattleSetupInfo_o *v495; // x5
  FollowerInfo_o *v496; // x6
  PartyListViewItem_o *v497; // x7
  UnityEngine_WaitForEndOfFrame_o *v498; // x20
  int64_t v499; // x2
  int32_t v500; // w3
  System_String_o *v501; // x4
  BattleSetupInfo_o *v502; // x5
  FollowerInfo_o *v503; // x6
  PartyListViewItem_o *v504; // x7
  __int64 v505; // x1
  ManagementManager_c *v506; // x0
  UnityEngine_Coroutine_o *v507; // x0
  Il2CppObject **v508; // x19
  int64_t v509; // x2
  int32_t v510; // w3
  System_String_o *v511; // x4
  BattleSetupInfo_o *v512; // x5
  FollowerInfo_o *v513; // x6
  PartyListViewItem_o *v514; // x7
  int v515; // w8
  __int64 v516; // x1
  Il2CppObject *v517; // x21
  System_String_o *v518; // x22
  __int64 v519; // x1
  __int64 v520; // x2
  __int64 v521; // x3
  ErrorDialog_ClickDelegate_o *v522; // x23
  UnityEngine_WaitForEndOfFrame_o *v523; // x20
  int64_t v524; // x2
  int32_t v525; // w3
  System_String_o *v526; // x4
  BattleSetupInfo_o *v527; // x5
  FollowerInfo_o *v528; // x6
  PartyListViewItem_o *v529; // x7
  int64_t v530; // x2
  int32_t v531; // w3
  System_String_o *v532; // x4
  BattleSetupInfo_o *v533; // x5
  FollowerInfo_o *v534; // x6
  PartyListViewItem_o *v535; // x7
  UnityEngine_WaitForEndOfFrame_o *v536; // x20
  int64_t v537; // x2
  int32_t v538; // w3
  System_String_o *v539; // x4
  BattleSetupInfo_o *v540; // x5
  FollowerInfo_o *v541; // x6
  PartyListViewItem_o *v542; // x7
  __int64 v543; // x2
  __int64 v544; // x3
  __int64 v545; // x1
  __int64 v546; // x2
  __int64 v547; // x3
  UnityEngine_WaitForEndOfFrame_o *v548; // x20
  int64_t v549; // x2
  int32_t v550; // w3
  System_String_o *v551; // x4
  BattleSetupInfo_o *v552; // x5
  FollowerInfo_o *v553; // x6
  PartyListViewItem_o *v554; // x7
  System_Action_object__o *v555; // x21
  __int64 v556; // x1
  __int64 v557; // x2
  __int64 v558; // x3
  System_Action_object__o *v559; // x22
  __int64 v560; // x1
  System_String_o *temporaryCachePath; // x21
  __int64 v562; // x1
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v565; // x0
  __int64 v566; // x1
  __int64 v567; // x2
  __int64 v568; // x3
  ManagerConfig_c *v569; // x0
  const MethodInfo_37DEB14 **v570; // x26
  __int64 v571; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v573; // x22
  __int64 v574; // x1
  __int64 v575; // x2
  __int64 v576; // x3
  ErrorDialog_ClickDelegate_o *v577; // x23
  UnityEngine_WaitForEndOfFrame_o *v578; // x20
  int64_t v579; // x2
  int32_t v580; // w3
  System_String_o *v581; // x4
  BattleSetupInfo_o *v582; // x5
  FollowerInfo_o *v583; // x6
  PartyListViewItem_o *v584; // x7
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v586; // x21
  const MethodInfo *v587; // x3
  __int64 v588; // x1
  UnityEngine_WaitForEndOfFrame_o *v589; // x20
  int64_t v590; // x2
  int32_t v591; // w3
  System_String_o *v592; // x4
  BattleSetupInfo_o *v593; // x5
  FollowerInfo_o *v594; // x6
  PartyListViewItem_o *v595; // x7
  __int64 v596; // x1
  ManagementManager_c *v597; // x0
  __int64 v598; // x1
  __int64 v599; // x2
  __int64 v600; // x3
  const MethodInfo_37DEB14 **v601; // x28
  Il2CppObject *v602; // x21
  Il2CppObject **p__8__1; // x23
  int64_t v604; // x2
  int32_t v605; // w3
  System_String_o *v606; // x4
  BattleSetupInfo_o *v607; // x5
  FollowerInfo_o *v608; // x6
  PartyListViewItem_o *v609; // x7
  ManagementManager__startCheckAll_d__34_o *v610; // x19
  __int64 v611; // x1
  Il2CppObject *v612; // x21
  System_String_o *v613; // x22
  System_String_o *v614; // x24
  System_String_o *v615; // x25
  System_String_o *v616; // x0
  Il2CppObject *v617; // x27
  System_String_o *v618; // x23
  __int64 v619; // x1
  __int64 v620; // x2
  __int64 v621; // x3
  CommonConfirmDialog_ClickDelegate_o *v622; // x26
  Il2CppObject *v623; // x21
  __int64 v624; // x1
  System_String_o *v625; // x21
  System_String_o *DispFriendCode; // x22
  __int64 v627; // x1
  __int64 v628; // x1
  Il2CppObject *v629; // x22
  System_String_o *v630; // x23
  System_String_o *v631; // x0
  System_String_o *v632; // x19
  Il2CppObject *v633; // x2
  System_String_o *v634; // x21
  __int64 v635; // x1
  __int64 v636; // x2
  __int64 v637; // x3
  ErrorDialog_ClickDelegate_o *v638; // x23
  ManagementManager_c *v639; // x0
  UnityEngine_Coroutine_o *started; // x0
  int64_t v641; // x2
  int32_t v642; // w3
  System_String_o *v643; // x4
  BattleSetupInfo_o *v644; // x5
  FollowerInfo_o *v645; // x6
  PartyListViewItem_o *v646; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__34_o *v648; // [xsp+40h] [xbp-80h]
  System_Enum_o v649; // [xsp+48h] [xbp-78h] BYREF
  int32_t v650; // [xsp+58h] [xbp-68h]

  v8 = this;
  if ( (byte_4B15A22 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v11, v12);
    sub_1BCA7E0(&AssetManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v17, v18);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v19, v20);
    sub_1BCA7E0(&CommonServicePluginScript_TypeInfo, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v25, v26);
    sub_1BCA7E0(&FSUtility_TypeInfo, v27, v28);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&LogoMain_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_ManagementManager_EndLogDialog__, v35, v36);
    sub_1BCA7E0(&Method_ManagementManager_EndQuitDialog__, v37, v38);
    sub_1BCA7E0(&Method_ManagementManager_EndRetryDialog__, v39, v40);
    sub_1BCA7E0(&Method_ManagementManager_NotifyRequestPermissionsDenied__, v41, v42);
    sub_1BCA7E0(&Method_ManagementManager_NotifyRequestPermissionsGranted__, v43, v44);
    sub_1BCA7E0(&Method_ManagementManager_callbackAccountRegist__, v45, v46);
    sub_1BCA7E0(&Method_ManagementManager_callbackTopGameData__, v47, v48);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v49, v50);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountRegistRequest___, v53, v54);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TopGameDataRequest___, v55, v56);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v57, v58);
    sub_1BCA7E0(&OptionManager_TypeInfo, v59, v60);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v61, v62);
    sub_1BCA7E0(&NetworkManager_ReadResult_TypeInfo, v63, v64);
    sub_1BCA7E0(&ResolutionManager_TypeInfo, v65, v66);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v67, v68);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v69, v70);
    sub_1BCA7E0(&SignedData_TypeInfo, v71, v72);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v73, v74);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v75, v76);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v77, v78);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v79, v80);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v81, v82);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v83, v84);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v85, v86);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v87, v88);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v89, v90);
    sub_1BCA7E0(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v91, v92);
    sub_1BCA7E0(&SoundManager_TypeInfo, v93, v94);
    sub_1BCA7E0(&string___TypeInfo, v95, v96);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v97, v98);
    sub_1BCA7E0(&Method_ManagementManager___c__DisplayClass34_0__startCheckAll_b__0__, v99, v100);
    sub_1BCA7E0(&ManagementManager___c__DisplayClass34_0_TypeInfo, v101, v102);
    sub_1BCA7E0(&Method_ManagementManager__startCheckAll_d__34_MoveNext__, v103, v104);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v105, v106);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v107, v108);
    sub_1BCA7E0(&StringLiteral_7495/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v109, v110);
    sub_1BCA7E0(&StringLiteral_9428/*"NOW_LOADING"*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_9357/*"NETWORK_ERROR_DISK_FULL"*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_6475/*"F39UThNh"*/, v115, v116);
    sub_1BCA7E0(&StringLiteral_7498/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v117, v118);
    sub_1BCA7E0(&StringLiteral_7496/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v119, v120);
    sub_1BCA7E0(&StringLiteral_7494/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v121, v122);
    sub_1BCA7E0(&StringLiteral_5194/*"DataServerFolderName"*/, v123, v124);
    sub_1BCA7E0(&StringLiteral_16931/*"android.permission.POST_NOTIFICATIONS"*/, v125, v126);
    sub_1BCA7E0(&StringLiteral_9365/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v127, v128);
    sub_1BCA7E0(&StringLiteral_9358/*"NETWORK_ERROR_FIEND_CODE"*/, v129, v130);
    sub_1BCA7E0(&StringLiteral_12631/*"SYSTEM"*/, v131, v132);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v133, v134);
    sub_1BCA7E0(&StringLiteral_20992/*"ioqrk4Om"*/, v135, v136);
    sub_1BCA7E0(&StringLiteral_1470/*"2pC0bIYM"*/, v137, v138);
    sub_1BCA7E0(&StringLiteral_9359/*"NETWORK_ERROR_READ_AUTH"*/, v139, v140);
    this = (ManagementManager__startCheckAll_d__34_o *)sub_1BCA7E0(&StringLiteral_9366/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v141, v142);
    byte_4B15A22 = 1;
  }
  p_fields = &v8->fields;
  v144 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      isReboot = v8->fields.isReboot;
      v8->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v147 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v8->fields.__2__current = (Il2CppObject *)v147;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v147, v149, v150, v151, v152, v153, v154);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_7:
      if ( !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, method);
      SignedData__RefillSigningData(3, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v156);
      LocalizationManager__Initialize(0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v157);
      SoundManager__initialize(0LL);
      if ( !_4__this )
        goto LABEL_416;
      v158 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v8->fields.__2__current = (Il2CppObject *)v158;
      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v159, (int64_t)v158, v160, v161, v162, v163, v164, v165);
      v166 = 2;
      goto LABEL_414;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      v167 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v8->fields.__2__current = (Il2CppObject *)v167;
      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v159, (int64_t)v167, v168, v169, v170, v171, v172, v173);
      v166 = 3;
      goto LABEL_414;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v174);
      ResolutionManager__Initialize(0LL);
      v176 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v175);
      OptionManager__Initialize((const MethodInfo *)v176);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v177);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(v178);
      OptionManager__AdjustVolume(v179);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v180);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( !v8->fields.isReboot )
      {
LABEL_30:
        this = (ManagementManager__startCheckAll_d__34_o *)sub_1BCA888(string___TypeInfo, 3LL);
        if ( !this )
          goto LABEL_416;
        v197 = this;
        if ( !LODWORD(this->fields.__2__current)
          || (v198 = StringLiteral_1470/*"2pC0bIYM"*/,
              *(_QWORD *)&this->fields.isReboot = StringLiteral_1470/*"2pC0bIYM"*/,
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.isReboot,
                v198,
                v191,
                v192,
                v193,
                v194,
                v195,
                v196),
              LODWORD(v197->fields.__2__current) <= 1)
          || (v205 = StringLiteral_6475/*"F39UThNh"*/,
              v197->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6475/*"F39UThNh"*/,
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v197->fields.__4__this,
                v205,
                v199,
                v200,
                v201,
                v202,
                v203,
                v204),
              LODWORD(v197->fields.__2__current) <= 2) )
        {
          sub_1BCAA44(this, method);
        }
        v212 = StringLiteral_20992/*"ioqrk4Om"*/;
        v197->fields.__8__1 = (struct ManagementManager___c__DisplayClass34_0_o *)StringLiteral_20992/*"ioqrk4Om"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)&v197->fields.__8__1, v212, v206, v207, v208, v209, v210, v211);
        v220 = EncryptedPlayerPrefs_TypeInfo;
        if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v213);
          v220 = EncryptedPlayerPrefs_TypeInfo;
        }
        static_fields = v220->static_fields;
        static_fields->keys = (struct System_String_array *)v197;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->keys,
          (int64_t)v197,
          v214,
          v215,
          v216,
          v217,
          v218,
          v219);
        if ( !v8->fields.isReboot )
        {
          this = (ManagementManager__startCheckAll_d__34_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_41;
          if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
          this = (ManagementManager__startCheckAll_d__34_o *)AndroidUtil__get_apiLevel(0LL);
          if ( (int)this >= 33 )
          {
            this = (ManagementManager__startCheckAll_d__34_o *)AndroidPermissionManager__CheckPermission(
                                                                 (System_String_o *)StringLiteral_16931/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !_4__this )
                goto LABEL_416;
              _4__this->fields.isPermissionRequesting = 1;
              v555 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v543, v544);
              System_Action_object____ctor(
                v555,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_NotifyRequestPermissionsGranted__,
                0LL);
              v559 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v556, v557, v558);
              System_Action_object____ctor(
                v559,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_NotifyRequestPermissionsDenied__,
                0LL);
              AndroidPermissionManager__RequestPermission(
                (System_String_o *)StringLiteral_16931/*"android.permission.POST_NOTIFICATIONS"*/,
                (System_Action_string__o *)v555,
                (System_Action_string__o *)v559,
                0LL,
                0LL);
LABEL_44:
              if ( _4__this->fields.isPermissionRequesting )
              {
                v222 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                            UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                            method,
                                                            v2,
                                                            v3);
                UnityEngine_WaitForEndOfFrame___ctor(v222, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v222;
                v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1BCA784(v159, (int64_t)v222, v223, v224, v225, v226, v227, v228);
                v166 = 5;
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
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
          if ( this )
          {
            LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
            v548 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        v545,
                                                        v546,
                                                        v547);
            UnityEngine_WaitForEndOfFrame___ctor(v548, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v548;
            v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v159, (int64_t)v548, v549, v550, v551, v552, v553, v554);
            v166 = 6;
            goto LABEL_414;
          }
          goto LABEL_416;
        }
LABEL_47:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
        v8->fields._readResult_5__2 = (int)this;
        if ( !_4__this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__34_o *)_4__this->fields.debugInfoRootObject;
        if ( !this )
          goto LABEL_416;
        v648 = v8;
        this = (ManagementManager__startCheckAll_d__34_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
        if ( !this )
          goto LABEL_416;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        ManagementManager__BuildInfoOff(_4__this, v229);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v230);
        TerminalPramsManager__Load_SaveData(0LL);
        while ( 1 )
        {
          if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
          temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
          if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v560);
          FreeSize = CommonServicePluginScript__GetFreeSize(temporaryCachePath, 0LL);
          if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v562);
          DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
          v565 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
          if ( FreeSize < v565 )
            FreeSize = v565;
          if ( FreeSize < 1 )
            break;
          v569 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v566);
            v569 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v569->static_fields->LIMIT_FREE_SIZE )
            break;
          _4__this->fields.isErrorDialog = 1;
          v570 = v144;
          Instance = SingletonMonoBehaviour_object___get_Instance(*v144);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v571);
          v573 = LocalizationManager__Get((System_String_o *)StringLiteral_9357/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
          v577 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v574, v575, v576);
          ErrorDialog_ClickDelegate___ctor(
            v577,
            (Il2CppObject *)_4__this,
            Method_ManagementManager_EndRetryDialog__,
            0LL);
          if ( !Instance )
            goto LABEL_416;
          CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v573, v577, 0, 0LL);
          v144 = v570;
LABEL_364:
          if ( _4__this->fields.isErrorDialog )
          {
            v578 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
            UnityEngine_WaitForEndOfFrame___ctor(v578, 0LL);
            v648->fields.__2__current = (Il2CppObject *)v578;
            v508 = &v648->fields.__2__current;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v648->fields.__2__current,
              (int64_t)v578,
              v579,
              v580,
              v581,
              v582,
              v583,
              v584);
            v515 = 7;
            goto LABEL_373;
          }
        }
        readResult_5__2 = v648->fields._readResult_5__2;
        if ( readResult_5__2 )
        {
          if ( readResult_5__2 == 1 )
          {
            _4__this->fields.isReadAuth = 0;
            v586 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                            NetworkManager_ResultCallbackFunc_TypeInfo,
                                                            v566,
                                                            v567,
                                                            v568);
            NetworkManager_ResultCallbackFunc___ctor(
              v586,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_callbackAccountRegist__,
              v587);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v588);
            this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                                 v586,
                                                                 (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountRegistRequest___);
            if ( this )
            {
              AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_372:
              v589 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
              UnityEngine_WaitForEndOfFrame___ctor(v589, 0LL);
              v648->fields.__2__current = (Il2CppObject *)v589;
              v508 = &v648->fields.__2__current;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v648->fields.__2__current,
                (int64_t)v589,
                v590,
                v591,
                v592,
                v593,
                v594,
                v595);
              v515 = 8;
LABEL_373:
              *((_DWORD *)v508 - 2) = v515;
              return 1;
            }
            goto LABEL_416;
          }
          v623 = (Il2CppObject *)StringLiteral_1/*""*/;
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v624);
            v625 = LocalizationManager__Get((System_String_o *)StringLiteral_9358/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_416;
            DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
          }
          else
          {
            if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v624);
            DispFriendCode = AndroidUtil__GetFriendCodeFromOldDat(0LL);
            if ( System_String__IsNullOrEmpty(DispFriendCode, 0LL) )
            {
LABEL_399:
              v629 = SingletonMonoBehaviour_object___get_Instance(*v144);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v628);
              v630 = LocalizationManager__Get((System_String_o *)StringLiteral_9359/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
              v649.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
              v649.monitor = (void *)-1LL;
              v650 = v648->fields._readResult_5__2;
              v631 = System_Enum__ToString(&v649, 0LL);
              v632 = (System_String_o *)StringLiteral_1/*""*/;
              if ( v631 )
                v633 = (Il2CppObject *)v631;
              else
                v633 = (Il2CppObject *)StringLiteral_1/*""*/;
              v634 = System_String__Format_62415592(v630, v623, v633, 0LL);
              v638 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v635, v636, v637);
              ErrorDialog_ClickDelegate___ctor(
                v638,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_EndQuitDialog__,
                0LL);
              if ( v629 )
              {
                CommonUI__OpenErrorDialog((CommonUI_o *)v629, v632, v634, v638, 0, 0LL);
                return 0;
              }
              goto LABEL_416;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v627);
            v625 = LocalizationManager__Get((System_String_o *)StringLiteral_9358/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
          }
          v623 = (Il2CppObject *)System_String__Format(v625, (Il2CppObject *)DispFriendCode, 0LL);
          goto LABEL_399;
        }
LABEL_374:
        v8 = v648;
        v648->fields._isCacheCheck_5__3 = 0;
LABEL_375:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        DataManager__Initialize((DataManager_o *)this, 0LL);
        if ( !v8->fields.isReboot && !v8->fields._isCacheCheck_5__3 )
        {
          v8->fields._isCacheCheck_5__3 = 1;
          v597 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v596);
            v597 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v597->static_fields->RebootCacheClearKey, 0LL) )
          {
            v601 = v144;
            v602 = (Il2CppObject *)sub_1BCAA2C(ManagementManager___c__DisplayClass34_0_TypeInfo, v598, v599, v600);
            System_Object___ctor(v602, 0LL);
            v8->fields.__8__1 = (struct ManagementManager___c__DisplayClass34_0_o *)v602;
            p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields.__8__1,
              (int64_t)v602,
              v604,
              v605,
              v606,
              v607,
              v608,
              v609);
            if ( !v8->fields.__8__1 )
              goto LABEL_416;
            v8->fields.__8__1->fields = 0;
            v610 = v8;
            v612 = SingletonMonoBehaviour_object___get_Instance(*v601);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v611);
            v613 = LocalizationManager__Get((System_String_o *)StringLiteral_7498/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
            v614 = LocalizationManager__Get((System_String_o *)StringLiteral_7496/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
            v615 = LocalizationManager__Get((System_String_o *)StringLiteral_7495/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
            v616 = LocalizationManager__Get((System_String_o *)StringLiteral_7494/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
            v617 = *p__8__1;
            v618 = v616;
            v622 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v619,
                                                            v620,
                                                            v621);
            CommonConfirmDialog_ClickDelegate___ctor(
              v622,
              v617,
              Method_ManagementManager___c__DisplayClass34_0__startCheckAll_b__0__,
              0LL);
            if ( !v612 )
              goto LABEL_416;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v612,
              v613,
              v614,
              v615,
              v618,
              v622,
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
            v144 = v601;
            v8 = v610;
LABEL_60:
            _8__1 = v8->fields.__8__1;
            if ( !_8__1 )
              goto LABEL_416;
            if ( !_8__1->fields.confirmed )
            {
              v498 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
              UnityEngine_WaitForEndOfFrame___ctor(v498, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v498;
              v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v159, (int64_t)v498, v499, v500, v501, v502, v503, v504);
              v166 = 9;
              goto LABEL_414;
            }
            if ( _8__1->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_416;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v8->fields.__8__1 = 0LL;
            sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, 0LL, v2, v3, v4, v5, v6, v7);
          }
          else
          {
            v639 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v598);
              v639 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v639->static_fields->RebootCacheClearKey, 1, 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
          }
        }
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance(*v144);
        if ( this )
        {
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__34_o *)DataManager__readMasterVersion(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              started = UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          (System_Collections_IEnumerator_o *)this,
                          0LL);
              v8->fields.__2__current = (Il2CppObject *)started;
              v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v159, (int64_t)started, v641, v642, v643, v644, v645, v646);
              v166 = 10;
              goto LABEL_414;
            }
          }
        }
LABEL_416:
        sub_1BCAA3C(this, method);
      }
      v184 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v181, v182, v183);
      UnityEngine_WaitForEndOfFrame___ctor(v184, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v184;
      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v159, (int64_t)v184, v185, v186, v187, v188, v189, v190);
      v166 = 4;
LABEL_414:
      *(_DWORD *)&v159[-1].fields._IsQuestStartMenuMode_k__BackingField = v166;
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
      v648 = v8;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_364;
    case 8:
      v648 = v8;
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
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4B15B22 )
      {
        sub_1BCA7E0(&DataManager_TypeInfo, method, v232);
        byte_4B15B22 = 1;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (ManagementManager__startCheckAll_d__34_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v8->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( !this[2].fields.__1__state )
          j_il2cpp_runtime_class_init_0(this, method);
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields.isReadGameData = 0;
      v235 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                      NetworkManager_ResultCallbackFunc_TypeInfo,
                                                      method,
                                                      v232,
                                                      v233);
      NetworkManager_ResultCallbackFunc___ctor(
        v235,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v236);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v237);
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                           v235,
                                                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v241 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v238, v239, v240);
      UnityEngine_WaitForEndOfFrame___ctor(v241, 0LL);
      v8->fields._waitForServerTime_5__7 = v241;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._waitForServerTime_5__7,
        (int64_t)v241,
        v242,
        v243,
        v244,
        v245,
        v246,
        v247);
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
        v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v159, waitForServerTime_5__7, v2, v3, v4, v5, v6, v7);
        v166 = 11;
        goto LABEL_414;
      }
      _4__this->fields.isReadGameData = 0;
      v248 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                      NetworkManager_ResultCallbackFunc_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
      NetworkManager_ResultCallbackFunc___ctor(
        v248,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v249);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v250);
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                           v248,
                                                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( this )
      {
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v251, v252, v253);
        UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
        v8->fields._wait_5__8 = v254;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._wait_5__8,
          (int64_t)v254,
          v255,
          v256,
          v257,
          v258,
          v259,
          v260);
LABEL_200:
        wait_5__8 = (int64_t)v8->fields._wait_5__8;
        v8->fields.__2__current = (Il2CppObject *)wait_5__8;
        v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v159, wait_5__8, v2, v3, v4, v5, v6, v7);
        v166 = 12;
        goto LABEL_414;
      }
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_200;
      v263 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
      if ( !byte_4B1394F )
      {
        sub_1BCA7E0(&NetworkManager_TypeInfo, method, v262);
        byte_4B1394F = 1;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
        this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager_TypeInfo;
      }
      if ( !v263 )
        goto LABEL_416;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v263,
        (System_String_o *)StringLiteral_5194/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v8->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v265 = UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   MasterData,
                   0LL);
          v8->fields.__2__current = (Il2CppObject *)v265;
          v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(v159, (int64_t)v265, v266, v267, v268, v269, v270, v271);
          v166 = 13;
          goto LABEL_414;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__34_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v8->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v274 = UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v8->fields.__2__current = (Il2CppObject *)v274;
            v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v159, (int64_t)v274, v275, v276, v277, v278, v279, v280);
            v166 = 15;
            goto LABEL_414;
          }
        }
      }
      goto LABEL_416;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4B15B23 )
      {
        sub_1BCA7E0(&DataManager_TypeInfo, method, v272);
        byte_4B15B23 = 1;
      }
      v273 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        v273 = DataManager_TypeInfo;
      }
      if ( v273->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v273->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v273, method);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v456 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v453, v454, v455);
      UnityEngine_WaitForEndOfFrame___ctor(v456, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v456;
      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v159, (int64_t)v456, v457, v458, v459, v460, v461, v462);
      v166 = 14;
      goto LABEL_414;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_375;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4B15B24 )
      {
        sub_1BCA7E0(&DataManager_TypeInfo, method, v281);
        byte_4B15B24 = 1;
      }
      v282 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        v282 = DataManager_TypeInfo;
      }
      v8->fields._updateMasterResult_5__9 = v282->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, method);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v283);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v8->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_39246116((NetworkManager_o *)this, method);
          v506 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v505);
          ManagementManager__RebootCacheClear((const MethodInfo *)v506);
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__34_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v507 = UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v8->fields.__2__current = (Il2CppObject *)v507;
              v508 = &v8->fields.__2__current;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v8->fields.__2__current,
                (int64_t)v507,
                v509,
                v510,
                v511,
                v512,
                v513,
                v514);
              v515 = 18;
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
        v286 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v285);
        v287 = LocalizationManager__Get((System_String_o *)StringLiteral_9365/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v291 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v288, v289, v290);
        ErrorDialog_ClickDelegate___ctor(v291, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v286 )
          goto LABEL_416;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v286,
          (System_String_o *)StringLiteral_1/*""*/,
          v287,
          v291,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v144 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v292 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
          UnityEngine_WaitForEndOfFrame___ctor(v292, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v292;
          v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(v159, (int64_t)v292, v293, v294, v295, v296, v297, v298);
          v166 = 16;
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
      v517 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v516);
      v518 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v522 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v519, v520, v521);
      ErrorDialog_ClickDelegate___ctor(v522, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v517 )
        goto LABEL_416;
      CommonUI__OpenRetryDialog((CommonUI_o *)v517, (System_String_o *)StringLiteral_1/*""*/, v518, v522, 0, 0LL);
      v144 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_334:
      if ( _4__this->fields.isErrorDialog )
      {
        v523 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
        UnityEngine_WaitForEndOfFrame___ctor(v523, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v523;
        v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v159, (int64_t)v523, v524, v525, v526, v527, v528, v529);
        v166 = 17;
        goto LABEL_414;
      }
LABEL_336:
      v8->fields._waitForServerTime_5__7 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._waitForServerTime_5__7, 0LL, v2, v3, v4, v5, v6, v7);
      v8->fields._wait_5__8 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._wait_5__8, 0LL, v530, v531, v532, v533, v534, v535);
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
      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&v159[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1BCA784(v159, 0LL, v2, v3, v4, v5, v6, v7);
      v166 = 19;
      goto LABEL_414;
    case 0x13:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_201;
      goto LABEL_137;
    case 0x14:
      p_fields->__1__state = -1;
LABEL_137:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v301 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                    UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                    method,
                                                    v299,
                                                    v300);
        UnityEngine_WaitForEndOfFrame___ctor(v301, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v301;
        v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v159, (int64_t)v301, v302, v303, v304, v305, v306, v307);
        v166 = 20;
        goto LABEL_414;
      }
LABEL_201:
      v8->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( AssetManager__get_IsOnline(0LL) )
      {
LABEL_204:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
        if ( AssetManager__get_IsOnline(0LL) )
        {
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_209:
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( this )
            {
              if ( !BYTE2(this->fields.__8__1) )
              {
                v446 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                            UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                            method,
                                                            v353,
                                                            v354);
                UnityEngine_WaitForEndOfFrame___ctor(v446, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v446;
                v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1BCA784(v159, (int64_t)v446, v447, v448, v449, v450, v451, v452);
                v166 = 25;
                goto LABEL_414;
              }
              this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
              if ( _4__this )
              {
                if ( this )
                {
                  v355 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                           (AssetManager_o *)this,
                           (System_String_o *)StringLiteral_12631/*"SYSTEM"*/,
                           _4__this->fields.downloadParallelMax,
                           0LL);
                  v356 = UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                           (UnityEngine_MonoBehaviour_o *)_4__this,
                           v355,
                           0LL);
                  v8->fields.__2__current = (Il2CppObject *)v356;
                  v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BCA784(v159, (int64_t)v356, v357, v358, v359, v360, v361, v362);
                  v166 = 26;
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v319);
          LocalizationManager__LoadAssetData(0LL);
LABEL_217:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
          if ( !byte_4B15B26 )
          {
            sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
            byte_4B15B26 = 1;
          }
          v363 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
            v363 = LocalizationManager_TypeInfo;
          }
          if ( v363->static_fields->isBusySetAssetData )
          {
            v364 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
            UnityEngine_WaitForEndOfFrame___ctor(v364, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v364;
            v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v159, (int64_t)v364, v365, v366, v367, v368, v369, v370);
            v166 = 29;
            goto LABEL_414;
          }
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
          FSUtility__LoadAssetData(0LL);
LABEL_228:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
          if ( !byte_4B15B27 )
          {
            sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
            byte_4B15B27 = 1;
          }
          v371 = FSUtility_TypeInfo;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
            v371 = FSUtility_TypeInfo;
          }
          if ( v371->static_fields->isBusySetAssetData )
          {
            v372 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
            UnityEngine_WaitForEndOfFrame___ctor(v372, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v372;
            v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v159, (int64_t)v372, v373, v374, v375, v376, v377, v378);
            v166 = 30;
            goto LABEL_414;
          }
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method);
          ImageLimitCount__initializeAssetStorage(0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v379);
          AtlasManager__Initialize(0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v380);
          this = (ManagementManager__startCheckAll_d__34_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
          if ( this )
          {
            OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, method);
LABEL_244:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
            if ( AtlasManager__IsBusyInitialize(0LL) )
            {
              v383 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v381,
                                                          v382);
              UnityEngine_WaitForEndOfFrame___ctor(v383, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v383;
              v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v159, (int64_t)v383, v384, v385, v386, v387, v388, v389);
              v166 = 31;
              goto LABEL_414;
            }
            v8->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_249:
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
            this = (ManagementManager__startCheckAll_d__34_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
            if ( this )
            {
              if ( LOBYTE(this->fields.__2__current) )
              {
                overrideAssetSoundNameWaitCount_5__5 = v8->fields._overrideAssetSoundNameWaitCount_5__5;
                v8->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
                if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
                {
                  v393 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              method,
                                                              v390,
                                                              v391);
                  UnityEngine_WaitForEndOfFrame___ctor(v393, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v393;
                  v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BCA784(v159, (int64_t)v393, v394, v395, v396, v397, v398, v399);
                  v166 = 32;
                  goto LABEL_414;
                }
              }
              this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_257:
                this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  if ( LOBYTE(this[9].monitor) )
                  {
                    v402 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                                UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method,
                                                                v400,
                                                                v401);
                    UnityEngine_WaitForEndOfFrame___ctor(v402, 0LL);
                    v8->fields.__2__current = (Il2CppObject *)v402;
                    v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                    sub_1BCA784(v159, (int64_t)v402, v403, v404, v405, v406, v407, v408);
                    v166 = 33;
                    goto LABEL_414;
                  }
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
                  SoundManager__initializeAssetStorage(0LL);
LABEL_263:
                  this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                  if ( this )
                  {
                    if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
                    {
                      v412 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  v409,
                                                                  v410,
                                                                  v411);
                      UnityEngine_WaitForEndOfFrame___ctor(v412, 0LL);
                      v8->fields.__2__current = (Il2CppObject *)v412;
                      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                      sub_1BCA784(v159, (int64_t)v412, v413, v414, v415, v416, v417, v418);
                      v166 = 34;
                      goto LABEL_414;
                    }
                    this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( this )
                    {
                      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_268:
                      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                      if ( this )
                      {
                        if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
                        {
                          v421 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                      method,
                                                                      v419,
                                                                      v420);
                          UnityEngine_WaitForEndOfFrame___ctor(v421, 0LL);
                          v8->fields.__2__current = (Il2CppObject *)v421;
                          v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                          sub_1BCA784(v159, (int64_t)v421, v422, v423, v424, v425, v426, v427);
                          v166 = 35;
                          goto LABEL_414;
                        }
                        if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
                        if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
                        {
                          if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v428);
                          PurchaseBehaviour__Ready(0LL);
                        }
                        if ( v8->fields._isLoad_5__4 )
                        {
                          if ( !SoundManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v428);
                          if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9428/*"NOW_LOADING"*/, 0LL) )
                          {
                            if ( !SoundManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v429);
                            SoundManager__fadeoutBgm(1.0, 0LL);
                            v433 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(
                                                                     UnityEngine_WaitForSeconds_TypeInfo,
                                                                     v430,
                                                                     v431,
                                                                     v432);
                            UnityEngine_WaitForSeconds___ctor(v433, 1.0, 0LL);
                            v8->fields.__2__current = (Il2CppObject *)v433;
                            v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                            sub_1BCA784(v159, (int64_t)v433, v434, v435, v436, v437, v438, v439);
                            v166 = 36;
                            goto LABEL_414;
                          }
LABEL_284:
                          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                        }
                        else
                        {
                          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          this = (ManagementManager__startCheckAll_d__34_o *)CommonUI__IsLoadMode(
                                                                               (CommonUI_o *)this,
                                                                               3,
                                                                               0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( this )
                            {
                              CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_341:
                              v536 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                          v338,
                                                                          v339,
                                                                          v340);
                              UnityEngine_WaitForEndOfFrame___ctor(v536, 0LL);
                              v8->fields.__2__current = (Il2CppObject *)v536;
                              v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                              sub_1BCA784(v159, (int64_t)v536, v537, v538, v539, v540, v541, v542);
                              v166 = 37;
                              goto LABEL_414;
                            }
                            goto LABEL_416;
                          }
                        }
                        if ( _4__this )
                        {
                          ManagementManager__BuildInfoOff(_4__this, method);
                          v8->fields.__2__current = 0LL;
                          v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                          sub_1BCA784(v159, 0LL, v440, v441, v442, v443, v444, v445);
                          v166 = 38;
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
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_300:
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v491 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v470,
                                                          v471);
              UnityEngine_WaitForEndOfFrame___ctor(v491, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v491;
              v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v159, (int64_t)v491, v492, v493, v494, v495, v496, v497);
              v166 = 21;
              goto LABEL_414;
            }
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this )
            {
              if ( this )
              {
                AssetManager__DownloadAssetStorageAttribute(
                  (AssetManager_o *)this,
                  (System_String_o *)StringLiteral_12631/*"SYSTEM"*/,
                  _4__this->fields.downloadParallelMax,
                  0LL);
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v472);
                if ( AssetManager__getDownloadSize(0LL) >= 1 )
                {
                  v473 = ManagerConfig_TypeInfo;
                  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
                    v473 = ManagerConfig_TypeInfo;
                  }
                  if ( v473->static_fields->UseStandaloneAsset )
                  {
                    v8->fields._isLoad_5__4 = 1;
                    if ( !SoundManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
                    SoundManager__playBgm((System_String_o *)StringLiteral_9428/*"NOW_LOADING"*/, 0LL);
                    this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_314:
                      v474 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  method,
                                                                  v308,
                                                                  v309);
                      UnityEngine_WaitForEndOfFrame___ctor(v474, 0LL);
                      v8->fields.__2__current = (Il2CppObject *)v474;
                      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                      sub_1BCA784(v159, (int64_t)v474, v475, v476, v477, v478, v479, v480);
                      v166 = 22;
                      goto LABEL_414;
                    }
                    goto LABEL_416;
                  }
LABEL_146:
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
                  if ( AssetManager__getDownloadSize(0LL) >= 1 )
                  {
                    v312 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                                UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method,
                                                                v310,
                                                                v311);
                    UnityEngine_WaitForEndOfFrame___ctor(v312, 0LL);
                    v8->fields.__2__current = (Il2CppObject *)v312;
                    v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                    sub_1BCA784(v159, (int64_t)v312, v313, v314, v315, v316, v317, v318);
                    v166 = 23;
                    goto LABEL_414;
                  }
                }
LABEL_315:
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
                AssetManager__SetOnlineStatus(0LL);
                this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( this )
                {
                  NetworkManager__SetServerSetting_39246116((NetworkManager_o *)this, method);
                  v484 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(
                                                           UnityEngine_WaitForSeconds_TypeInfo,
                                                           v481,
                                                           v482,
                                                           v483);
                  UnityEngine_WaitForSeconds___ctor(v484, 0.1, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v484;
                  v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BCA784(v159, (int64_t)v484, v485, v486, v487, v488, v489, v490);
                  v166 = 24;
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
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_214;
      v8->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v319);
      if ( !byte_4B15B25 )
      {
        sub_1BCA7E0(&LogoMain_TypeInfo, v319, v320);
        byte_4B15B25 = 1;
      }
      v321 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v319);
        v321 = LogoMain_TypeInfo;
      }
      if ( !v321->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v319);
        SoundManager__playBgm((System_String_o *)StringLiteral_9428/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v325 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v322, v323, v324);
      UnityEngine_WaitForEndOfFrame___ctor(v325, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v325;
      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v159, (int64_t)v325, v326, v327, v328, v329, v330, v331);
      v166 = 27;
      goto LABEL_414;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_295:
      v463 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v332, v333, v334);
      UnityEngine_WaitForEndOfFrame___ctor(v463, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v463;
      v159 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v159, (int64_t)v463, v464, v465, v466, v467, v468, v469);
      v166 = 28;
      goto LABEL_414;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_295;
      v335 = Method_ManagementManager__startCheckAll_d__34_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__34_MoveNext__ + 83) & 2) != 0 )
        v335 = (_QWORD *)sub_1BCA7F8(Method_ManagementManager__startCheckAll_d__34_MoveNext__);
      v336 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v335, v335[4]);
      OverwriteAssetSoundName__PlaySystemSe(v336, 0, v337);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_341;
      v341 = Method_ManagementManager__startCheckAll_d__34_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__34_MoveNext__ + 83) & 2) != 0 )
        v341 = (_QWORD *)sub_1BCA7F8(Method_ManagementManager__startCheckAll_d__34_MoveNext__);
      v342 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v341, v341[4]);
      OverwriteAssetSoundName__PlaySystemSe(v342, 0, v343);
      goto LABEL_284;
    case 0x26:
      p_fields->__1__state = -1;
      v344 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
        v344 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v344->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        v346 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v346);
        OptionManager__SetNotiffication(Notiffication, 1, v348);
        v350 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v349);
          v350 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v350->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v345);
      if ( v8->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v351);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ManagementManager__startCheckAll_d__34_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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