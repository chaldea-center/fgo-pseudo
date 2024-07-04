void __fastcall ManagementManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct ManagementManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  struct ManagementManager_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct ManagementManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48E1FDA & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_7943/*"IsNotificationStatusSend"*/, v4);
    sub_1B00CCC(&StringLiteral_7955/*"IsReBootCacheClearKey"*/, v5);
    sub_1B00CCC(&StringLiteral_20623/*"ja-JP"*/, v6);
    sub_1B00CCC(&StringLiteral_24530/*"yyyy年MM月dd日HH時mm分"*/, v7);
    byte_48E1FDA = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_7943/*"IsNotificationStatusSend"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_7943/*"IsNotificationStatusSend"*/,
    v2,
    v3);
  v8 = StringLiteral_7955/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_7955/*"IsReBootCacheClearKey"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->RebootCacheClearKey, v8, v10, v11);
  v12 = StringLiteral_24530/*"yyyy年MM月dd日HH時mm分"*/;
  v13 = ManagementManager_TypeInfo->static_fields;
  v13->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24530/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v13->DATE_TIME_DISP_FORMAT, v12, v14, v15);
  v16 = StringLiteral_20623/*"ja-JP"*/;
  v17 = ManagementManager_TypeInfo->static_fields;
  v17->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20623/*"ja-JP"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v17->DEFAULT_CULTURE_NAME, v16, v18, v19);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_48E1FD9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_48E1FD9 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_35FC008 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  ManagementManager_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  float v18; // s0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x19
  Il2CppObject *v27; // x19
  float v28; // [xsp+Ch] [xbp-34h] BYREF

  v28 = ratio;
  if ( (byte_48E1FC4 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1B00CCC(&string___TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_834/*"):"*/, v9);
    sub_1B00CCC(&StringLiteral_6660/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1B00CCC(&StringLiteral_793/*"(ratio: "*/, v11);
    byte_48E1FC4 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6660/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1B00D74(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v12, v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v17 = StringLiteral_793/*"(ratio: "*/;
      v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_793/*"(ratio: "*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields.AvalonSceneManager, v17, v15, v16);
      this = (ManagementManager_o *)System_Single__ToString(v18, (const MethodInfo *)&v28);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields.debugInfoRootObject, (int32_t)this, v19, v20),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v23 = StringLiteral_834/*"):"*/,
            v14->fields.statusLabel = (struct UILabel_o *)StringLiteral_834/*"):"*/,
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields.statusLabel, v23, v21, v22),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1B00F30(this, errorText);
      }
      v14->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&v14->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v24,
        v25);
      v26 = (Il2CppObject *)System_String__Concat_60339276((System_String_array *)v14, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v26, 0LL);
      return;
    }
LABEL_19:
    sub_1B00F28(this, errorText);
  }
  v27 = (Il2CppObject *)System_String__Concat_60325748(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v27, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_48E1FC0 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_48E1FC0 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_35FBF5C *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_48E1FD7 & 1) == 0 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, boot);
    byte_48E1FD7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_48E1FD6 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E1FD6 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1B00F28(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_48E1FBE & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, v1);
    byte_48E1FBE = 1;
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

  if ( (byte_48E1FCC & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_48E1FCC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_48E1FCB & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, isDecide);
    byte_48E1FCB = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_67871612(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_48E1FCA & 1) != 0 )
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
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, isDecide);
    byte_48E1FCA = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_67871612(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E1FC7 & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, method);
    byte_48E1FC7 = 1;
  }
  v3 = sub_1B00F18(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_48E1FD3 & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, method);
    byte_48E1FD3 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_48E18EA )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, method);
    byte_48E18EA = 1;
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

  if ( (byte_48E1FD4 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_48E1FD4 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v7);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_48E1FC5 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_23724/*"true"*/, message);
    byte_48E1FC5 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_23724/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagementManager_c *v3; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_48E1FD8 & 1) == 0 )
  {
    sub_1B00CCC(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1B00CCC(&ManagementManager_TypeInfo, v2);
    byte_48E1FD8 = 1;
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

  if ( (byte_48E1FBF & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, v1);
    byte_48E1FBF = 1;
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

  if ( (byte_48E1FC1 & 1) == 0 )
  {
    sub_1B00CCC(&AndroidUtil_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B00CCC(&System_Type_TypeInfo, v5);
    sub_1B00CCC(&UnityGamingServicesBehaviour_var, v6);
    byte_48E1FC1 = 1;
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
    sub_1B00F28(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_48E1FD5 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1B00CCC(&UnityEngine_Application_TypeInfo, method);
    byte_48E1FD5 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_67871612(0LL);
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

  if ( (byte_48E1FD2 & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, result);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_48E1FD2 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v6);
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
  _BOOL8 _36489460; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_48E1FD1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v4);
    sub_1B00CCC(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v8);
    byte_48E1FD1 = 1;
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
  _36489460 = TutorialFlag__Get_36489460(102, 0LL);
  if ( _36489460 )
  {
LABEL_9:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B00F28(0LL, v15);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_36489460, v11, v12);
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

  if ( (byte_48E1FCF & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, result);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_48E1FCF = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v7);
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
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_48E1FCE & 1) == 0 )
  {
    sub_1B00CCC(&Method_ManagementManager_callbackTopHome__, result);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v4);
    sub_1B00CCC(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v8);
    byte_48E1FCE = 1;
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
  if ( TutorialFlag__Get_36489460(102, 0LL) )
  {
LABEL_9:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B00F28(0LL, v14);
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
  int32_t v15; // w2
  int32_t v16; // w3
  AvalonVideoPlayer_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_48E1FC2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1B00CCC(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_4593/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1B00CCC(&StringLiteral_9049/*"MovieRoot"*/, v7);
    byte_48E1FC2 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4593/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_1B00F18(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_9049/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  v11,
                  (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&this->fields._videoPlayer_k__BackingField,
            (int32_t)v14,
            v15,
            v16),
          !v10)
      || (v17 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v17) )
    {
      sub_1B00F28(Component_object, v13);
    }
    AvalonVideoPlayer__initialize(v17, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_32541256(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48E1FBC & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_48E1FBC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_48E1FBD & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, v1);
    byte_48E1FBD = 1;
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
  ManagementManager_c *v21; // x0
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x0
  const MethodInfo *v27; // x3
  System_Collections_IEnumerator_o *v28; // x1

  if ( (byte_48E1FC3 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, isLogin);
    sub_1B00CCC(&CTouch_TypeInfo, v7);
    sub_1B00CCC(&CommonEffectManager_TypeInfo, v8);
    sub_1B00CCC(&System_GC_TypeInfo, v9);
    sub_1B00CCC(&ManagementManager_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v17);
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v18);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    sub_1B00CCC(&SoundManager_TypeInfo, v20);
    byte_48E1FC3 = 1;
  }
  if ( !this->fields.isInitializingData )
  {
    this->fields.isInitializingData = 1;
    v21 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v21 = ManagementManager_TypeInfo;
    }
    v21->static_fields->isDuringStartup = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_27:
      sub_1B00F28(Instance, v23);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_61371376(0LL);
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v24 )
      sub_1B00F28(0LL, v25);
    AdManager__Initialize((AdManager_o *)v24, 2, 0LL);
    FirebaseScript__Initialize(v26);
    v28 = ManagementManager__startCheckAll(this, 1, isLogin, v27);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_48E1FCD & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_48E1FCD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1B00F18(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_1B00F28(v7, v8);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v9);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_48E1FD0 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_48E1FD0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1B00F18(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_1B00F28(v7, v8);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v9);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._videoPlayer_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_48E1FC6 & 1) == 0 )
  {
    sub_1B00CCC(&ManagementManager__startCheckAll_d__33_TypeInfo, isReboot);
    byte_48E1FC6 = 1;
  }
  v7 = isLogin;
  v8 = sub_1B00F18(ManagementManager__startCheckAll_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_48E1FC8 & 1) == 0 )
  {
    sub_1B00CCC(&DataManager_TypeInfo, method);
    byte_48E1FC8 = 1;
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

  if ( (byte_48E1FC9 & 1) == 0 )
  {
    sub_1B00CCC(&DataManager_TypeInfo, method);
    sub_1B00CCC(&ScrTerminalListTop_TypeInfo, v2);
    sub_1B00CCC(&ServantCommentManager_TypeInfo, v3);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v4);
    byte_48E1FC9 = 1;
  }
  MovieFileMerge__Delete_36547876(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DFB1D )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v6);
    byte_48DFB1D = 1;
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


void __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__34___ctor(
        ManagementManager__InitializeAdManagerAndFirebase_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__34__MoveNext(
        ManagementManager__InitializeAdManagerAndFirebase_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x0

  if ( (byte_48E1FDC & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, method);
    sub_1B00CCC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_48E1FDC = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B00F28(0LL, v10);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v11 )
      sub_1B00F28(0LL, v12);
    AdManager__Initialize((AdManager_o *)v11, 1, 0LL);
    FirebaseScript__Initialize(v13);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall ManagementManager__InitializeAdManagerAndFirebase_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__InitializeAdManagerAndFirebase_d__34__System_Collections_IEnumerator_Reset(
        ManagementManager__InitializeAdManagerAndFirebase_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__InitializeAdManagerAndFirebase_d__34__System_Collections_IEnumerator_get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__34__System_IDisposable_Dispose(
        ManagementManager__InitializeAdManagerAndFirebase_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager___c__DisplayClass33_0___ctor(
        ManagementManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager___c__DisplayClass33_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass33_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_48E1FDB & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, flag);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__, v6);
    sub_1B00CCC(&ManagementManager___c__DisplayClass33_1_TypeInfo, v7);
    byte_48E1FDB = 1;
  }
  v8 = sub_1B00F18(ManagementManager___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B00F28(v9, v10);
  }
  CommonUI__CloseConfirmDialog_29937364((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass33_1___ctor(
        ManagementManager___c__DisplayClass33_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass33_1___startCheckAll_b__1(
        ManagementManager___c__DisplayClass33_1_o *this,
        const MethodInfo *method)
{
  struct ManagementManager___c__DisplayClass33_0_o *CS___8__locals1; // x8
  bool flag; // w9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1B00F28(this, method);
  flag = this->fields.flag;
  CS___8__locals1->fields.confirmed = 1;
  CS___8__locals1->fields.isDecide = flag;
}


void __fastcall ManagementManager__startCheckAll_d__33___ctor(
        ManagementManager__startCheckAll_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__startCheckAll_d__33__MoveNext(
        ManagementManager__startCheckAll_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  ManagementManager__startCheckAll_d__33_o *v5; // x24
  __int64 v6; // x1
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
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  const MethodInfo_35FBBF0 **v74; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v77; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x24
  int32_t v79; // w2
  int32_t v80; // w3
  bool result; // w0
  LocalizationManager_c *v82; // x0
  System_Collections_IEnumerator_o *v83; // x0
  ServantStatusBattleListViewItem_o *v84; // x24
  int32_t v85; // w2
  int32_t v86; // w3
  int v87; // w8
  System_Collections_IEnumerator_o *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  UnityEngine_WaitForEndOfFrame_o *v91; // x20
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t v94; // w2
  int32_t v95; // w3
  ManagementManager__startCheckAll_d__33_o *v96; // x21
  int32_t v97; // w1
  int32_t v98; // w2
  int32_t v99; // w3
  int32_t v100; // w1
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w1
  int32_t v104; // w2
  int32_t v105; // w3
  EncryptedPlayerPrefs_c *v106; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v108; // x20
  int32_t v109; // w2
  int32_t v110; // w3
  const MethodInfo *v111; // x1
  struct ManagementManager___c__DisplayClass33_0_o *_8__1; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v114; // x21
  UnityEngine_WaitForEndOfFrame_o *v115; // x20
  int32_t v116; // w2
  int32_t v117; // w3
  NetworkManager_ResultCallbackFunc_o *v118; // x21
  UnityEngine_WaitForEndOfFrame_o *v119; // x20
  int32_t v120; // w2
  int32_t v121; // w3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v123; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v125; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  DataManager_c *v128; // x0
  UnityEngine_Coroutine_o *v129; // x0
  int32_t v130; // w2
  int32_t v131; // w3
  DataManager_c *v132; // x0
  int32_t updateMasterResult_5__9; // w8
  const MethodInfo *v134; // x1
  Il2CppObject *v135; // x21
  System_String_o *v136; // x22
  ErrorDialog_ClickDelegate_o *v137; // x23
  UnityEngine_WaitForEndOfFrame_o *v138; // x20
  int32_t v139; // w2
  int32_t v140; // w3
  __int64 v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  UnityEngine_WaitForEndOfFrame_o *v144; // x20
  int32_t v145; // w2
  int32_t v146; // w3
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  int32_t v148; // w2
  int32_t v149; // w3
  __int64 v150; // x1
  LogoMain_c *v151; // x0
  UnityEngine_WaitForEndOfFrame_o *v152; // x20
  int32_t v153; // w2
  int32_t v154; // w3
  _QWORD *v155; // x0
  System_Reflection_MethodBase_o *v156; // x0
  _QWORD *v157; // x0
  System_Reflection_MethodBase_o *v158; // x0
  ManagementManager_c *v159; // x0
  const MethodInfo *v160; // x2
  bool Notiffication; // w0
  ManagementManager_c *v162; // x0
  const MethodInfo *v163; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v165; // x0
  UnityEngine_Coroutine_o *v166; // x0
  int32_t v167; // w2
  int32_t v168; // w3
  LocalizationManager_c *v169; // x0
  LocalizationManager_c *v170; // x0
  UnityEngine_WaitForEndOfFrame_o *v171; // x20
  int32_t v172; // w2
  int32_t v173; // w3
  FSUtility_c *v174; // x0
  UnityEngine_WaitForEndOfFrame_o *v175; // x20
  int32_t v176; // w2
  int32_t v177; // w3
  UnityEngine_WaitForEndOfFrame_o *v178; // x20
  int32_t v179; // w2
  int32_t v180; // w3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v182; // x20
  int32_t v183; // w2
  int32_t v184; // w3
  UnityEngine_WaitForEndOfFrame_o *v185; // x20
  int32_t v186; // w2
  int32_t v187; // w3
  UnityEngine_WaitForEndOfFrame_o *v188; // x20
  int32_t v189; // w2
  int32_t v190; // w3
  UnityEngine_WaitForSeconds_o *v191; // x20
  int32_t v192; // w2
  int32_t v193; // w3
  __int64 v194; // x2
  __int64 v195; // x3
  __int64 v196; // x4
  __int64 v197; // x0
  int32_t v198; // w2
  int32_t v199; // w3
  UnityEngine_WaitForEndOfFrame_o *v200; // x20
  int32_t v201; // w2
  int32_t v202; // w3
  UnityEngine_WaitForEndOfFrame_o *v203; // x20
  int32_t v204; // w2
  int32_t v205; // w3
  UnityEngine_WaitForEndOfFrame_o *v206; // x20
  int32_t v207; // w2
  int32_t v208; // w3
  ManagerConfig_c *v209; // x0
  UnityEngine_WaitForEndOfFrame_o *v210; // x20
  int32_t v211; // w2
  int32_t v212; // w3
  UnityEngine_WaitForSeconds_o *v213; // x20
  int32_t v214; // w2
  int32_t v215; // w3
  UnityEngine_WaitForEndOfFrame_o *v216; // x20
  int32_t v217; // w2
  int32_t v218; // w3
  UnityEngine_WaitForEndOfFrame_o *v219; // x20
  int32_t v220; // w2
  int32_t v221; // w3
  ManagementManager_c *v222; // x0
  UnityEngine_Coroutine_o *v223; // x0
  Il2CppObject **v224; // x19
  int32_t v225; // w2
  int32_t v226; // w3
  int v227; // w8
  const MethodInfo *v228; // x1
  Il2CppObject *v229; // x21
  System_String_o *v230; // x22
  ErrorDialog_ClickDelegate_o *v231; // x23
  UnityEngine_WaitForEndOfFrame_o *v232; // x20
  int32_t v233; // w2
  int32_t v234; // w3
  int32_t v235; // w2
  int32_t v236; // w3
  UnityEngine_WaitForEndOfFrame_o *v237; // x20
  int32_t v238; // w2
  int32_t v239; // w3
  UnityEngine_WaitForEndOfFrame_o *v240; // x20
  int32_t v241; // w2
  int32_t v242; // w3
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v246; // x0
  ManagerConfig_c *v247; // x0
  const MethodInfo_35FBBF0 **v248; // x26
  const MethodInfo *v249; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v251; // x22
  ErrorDialog_ClickDelegate_o *v252; // x23
  UnityEngine_WaitForEndOfFrame_o *v253; // x20
  int32_t v254; // w2
  int32_t v255; // w3
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v257; // x21
  UnityEngine_WaitForEndOfFrame_o *v258; // x20
  int32_t v259; // w2
  int32_t v260; // w3
  ManagementManager_c *v261; // x0
  Il2CppObject *v262; // x21
  ManagementManager__startCheckAll_d__33_o *v263; // x19
  ServantStatusBattleListViewItem_o *p__8__1; // x24
  int32_t v265; // w2
  int32_t v266; // w3
  const MethodInfo_35FBBF0 **v267; // x28
  const MethodInfo *v268; // x1
  Il2CppObject *v269; // x21
  System_String_o *v270; // x22
  const MethodInfo *v271; // x1
  System_String_o *v272; // x23
  const MethodInfo *v273; // x1
  System_String_o *v274; // x25
  const MethodInfo *v275; // x1
  System_String_o *v276; // x0
  Il2CppObject *klass; // x27
  System_String_o *v278; // x24
  CommonConfirmDialog_ClickDelegate_o *v279; // x26
  Il2CppObject *v280; // x21
  const MethodInfo *v281; // x1
  System_String_o *v282; // x21
  System_String_o *DispFriendCode; // x22
  const MethodInfo *v284; // x1
  const MethodInfo *v285; // x1
  Il2CppObject *v286; // x22
  System_String_o *v287; // x23
  System_String_o *v288; // x0
  System_String_o *v289; // x19
  Il2CppObject *v290; // x2
  System_String_o *v291; // x21
  ErrorDialog_ClickDelegate_o *v292; // x23
  ManagementManager_c *v293; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v295; // w2
  int32_t v296; // w3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__33_o *v298; // [xsp+40h] [xbp-80h]
  System_Enum_o v299; // [xsp+48h] [xbp-78h] BYREF
  int32_t v300; // [xsp+58h] [xbp-68h]

  v5 = this;
  if ( (byte_48E1FDD & 1) == 0 )
  {
    sub_1B00CCC(&AndroidUtil_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, v6);
    sub_1B00CCC(&AssetManager_TypeInfo, v7);
    sub_1B00CCC(&AtlasManager_TypeInfo, v8);
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B00CCC(&ErrorDialog_ClickDelegate_TypeInfo, v10);
    sub_1B00CCC(&CommonServicePluginScript_TypeInfo, v11);
    sub_1B00CCC(&DataManager_TypeInfo, v12);
    sub_1B00CCC(&EncryptedPlayerPrefs_TypeInfo, v13);
    sub_1B00CCC(&FSUtility_TypeInfo, v14);
    sub_1B00CCC(&ImageLimitCount_TypeInfo, v15);
    sub_1B00CCC(&int_TypeInfo, v16);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v17);
    sub_1B00CCC(&LogoMain_TypeInfo, v18);
    sub_1B00CCC(&Method_ManagementManager_EndLogDialog__, v19);
    sub_1B00CCC(&Method_ManagementManager_EndQuitDialog__, v20);
    sub_1B00CCC(&Method_ManagementManager_EndRetryDialog__, v21);
    sub_1B00CCC(&Method_ManagementManager_callbackAccountRegist__, v22);
    sub_1B00CCC(&Method_ManagementManager_callbackTopGameData__, v23);
    sub_1B00CCC(&ManagementManager_TypeInfo, v24);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v25);
    sub_1B00CCC(&Method_NetworkManager_getRequest_AccountRegistRequest___, v26);
    sub_1B00CCC(&Method_NetworkManager_getRequest_TopGameDataRequest___, v27);
    sub_1B00CCC(&NetworkManager_TypeInfo, v28);
    sub_1B00CCC(&OptionManager_TypeInfo, v29);
    sub_1B00CCC(&PurchaseBehaviour_TypeInfo, v30);
    sub_1B00CCC(&NetworkManager_ReadResult_TypeInfo, v31);
    sub_1B00CCC(&ResolutionManager_TypeInfo, v32);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v33);
    sub_1B00CCC(&ServantCommentManager_TypeInfo, v34);
    sub_1B00CCC(&SignedData_TypeInfo, v35);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v36);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v37);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v38);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v40);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v41);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v42);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v43);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v44);
    sub_1B00CCC(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v45);
    sub_1B00CCC(&SoundManager_TypeInfo, v46);
    sub_1B00CCC(&string___TypeInfo, v47);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v48);
    sub_1B00CCC(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__, v49);
    sub_1B00CCC(&ManagementManager___c__DisplayClass33_0_TypeInfo, v50);
    sub_1B00CCC(&Method_ManagementManager__startCheckAll_d__33_MoveNext__, v51);
    sub_1B00CCC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v52);
    sub_1B00CCC(&UnityEngine_WaitForSeconds_TypeInfo, v53);
    sub_1B00CCC(&StringLiteral_7291/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v54);
    sub_1B00CCC(&StringLiteral_9193/*"NOW_LOADING"*/, v55);
    sub_1B00CCC(&StringLiteral_9123/*"NETWORK_ERROR_DISK_FULL"*/, v56);
    sub_1B00CCC(&StringLiteral_6287/*"F39UThNh"*/, v57);
    sub_1B00CCC(&StringLiteral_7294/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v58);
    sub_1B00CCC(&StringLiteral_8745/*"Management"*/, v59);
    sub_1B00CCC(&StringLiteral_7292/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v60);
    sub_1B00CCC(&StringLiteral_9464/*"NotifyRequestPermissionsResultFromPlugin"*/, v61);
    sub_1B00CCC(&StringLiteral_7290/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v62);
    sub_1B00CCC(&StringLiteral_5066/*"DataServerFolderName"*/, v63);
    sub_1B00CCC(&StringLiteral_16528/*"android.permission.POST_NOTIFICATIONS"*/, v64);
    sub_1B00CCC(&StringLiteral_9131/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v65);
    sub_1B00CCC(&StringLiteral_9124/*"NETWORK_ERROR_FIEND_CODE"*/, v66);
    sub_1B00CCC(&StringLiteral_12271/*"SYSTEM"*/, v67);
    sub_1B00CCC(&StringLiteral_1/*""*/, v68);
    sub_1B00CCC(&StringLiteral_20486/*"ioqrk4Om"*/, v69);
    sub_1B00CCC(&StringLiteral_1469/*"2pC0bIYM"*/, v70);
    sub_1B00CCC(&StringLiteral_9125/*"NETWORK_ERROR_READ_AUTH"*/, v71);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_1B00CCC(&StringLiteral_9132/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v72);
    byte_48E1FDD = 1;
  }
  p_fields = &v5->fields;
  v74 = (const MethodInfo_35FBBF0 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v5->fields.__4__this;
  switch ( v5->fields.__1__state )
  {
    case 0:
      isReboot = v5->fields.isReboot;
      v5->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v77 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v5->fields.__2__current = (Il2CppObject *)v77;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(p__2__current, (int32_t)v77, v79, v80);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_7:
      if ( !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData__RefillSigningData(3, 0LL);
      v82 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__Initialize((const MethodInfo *)v82);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initialize(0LL);
      if ( !_4__this )
        goto LABEL_410;
      v83 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v5->fields.__2__current = (Il2CppObject *)v83;
      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(v84, (int32_t)v83, v85, v86);
      v87 = 2;
      goto LABEL_408;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_410;
      v88 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v5->fields.__2__current = (Il2CppObject *)v88;
      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(v84, (int32_t)v88, v89, v90);
      v87 = 3;
      goto LABEL_408;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_410;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize(0LL);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_410;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( !v5->fields.isReboot )
      {
LABEL_30:
        this = (ManagementManager__startCheckAll_d__33_o *)sub_1B00D74(string___TypeInfo, 3LL);
        if ( !this )
          goto LABEL_410;
        v96 = this;
        if ( !LODWORD(this->fields.__2__current)
          || (v97 = StringLiteral_1469/*"2pC0bIYM"*/,
              *(_QWORD *)&this->fields.isReboot = StringLiteral_1469/*"2pC0bIYM"*/,
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.isReboot, v97, v94, v95),
              LODWORD(v96->fields.__2__current) <= 1)
          || (v100 = StringLiteral_6287/*"F39UThNh"*/,
              v96->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6287/*"F39UThNh"*/,
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v96->fields.__4__this, v100, v98, v99),
              LODWORD(v96->fields.__2__current) <= 2) )
        {
          sub_1B00F30(this, method);
        }
        v103 = StringLiteral_20486/*"ioqrk4Om"*/;
        v96->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)StringLiteral_20486/*"ioqrk4Om"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v96->fields.__8__1, v103, v101, v102);
        v106 = EncryptedPlayerPrefs_TypeInfo;
        if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
          v106 = EncryptedPlayerPrefs_TypeInfo;
        }
        static_fields = v106->static_fields;
        static_fields->keys = (struct System_String_array *)v96;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->keys, (int32_t)v96, v104, v105);
        if ( !v5->fields.isReboot )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_41;
          if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
          this = (ManagementManager__startCheckAll_d__33_o *)AndroidUtil__get_apiLevel(0LL);
          if ( (int)this >= 33 )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__CheckPermission(
                                                                 (System_String_o *)StringLiteral_16528/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !_4__this )
                goto LABEL_410;
              _4__this->fields.isPermissionRequesting = 1;
              AndroidPermissionManager__RequestPermission(
                (System_String_o *)StringLiteral_16528/*"android.permission.POST_NOTIFICATIONS"*/,
                (System_String_o *)StringLiteral_8745/*"Management"*/,
                (System_String_o *)StringLiteral_9464/*"NotifyRequestPermissionsResultFromPlugin"*/,
                0LL);
LABEL_44:
              if ( _4__this->fields.isPermissionRequesting )
              {
                v108 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v108, 0LL);
                v5->fields.__2__current = (Il2CppObject *)v108;
                v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                sub_1B00C70(v84, (int32_t)v108, v109, v110);
                v87 = 5;
                goto LABEL_408;
              }
            }
          }
          else
          {
LABEL_41:
            if ( !_4__this )
              goto LABEL_410;
            _4__this->fields.isPermissionGranted = 1;
          }
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
          if ( this )
          {
            LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
            v240 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v240, 0LL);
            v5->fields.__2__current = (Il2CppObject *)v240;
            v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
            sub_1B00C70(v84, (int32_t)v240, v241, v242);
            v87 = 6;
            goto LABEL_408;
          }
          goto LABEL_410;
        }
LABEL_47:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_410;
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
        v5->fields._readResult_5__2 = (int)this;
        if ( !_4__this )
          goto LABEL_410;
        this = (ManagementManager__startCheckAll_d__33_o *)_4__this->fields.debugInfoRootObject;
        if ( !this )
          goto LABEL_410;
        v298 = v5;
        this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
        if ( !this )
          goto LABEL_410;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        ManagementManager__BuildInfoOff(_4__this, v111);
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
          v246 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
          if ( FreeSize < v246 )
            FreeSize = v246;
          if ( FreeSize < 1 )
            break;
          v247 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v247 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v247->static_fields->LIMIT_FREE_SIZE )
            break;
          _4__this->fields.isErrorDialog = 1;
          v248 = v74;
          Instance = SingletonMonoBehaviour_object___get_Instance(*v74);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v251 = LocalizationManager__Get((System_String_o *)StringLiteral_9123/*"NETWORK_ERROR_DISK_FULL"*/, v249);
          v252 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v252,
            (Il2CppObject *)_4__this,
            Method_ManagementManager_EndRetryDialog__,
            0LL);
          if ( !Instance )
            goto LABEL_410;
          CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v251, v252, 0, 0LL);
          v74 = v248;
LABEL_358:
          if ( _4__this->fields.isErrorDialog )
          {
            v253 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v253, 0LL);
            v298->fields.__2__current = (Il2CppObject *)v253;
            v224 = &v298->fields.__2__current;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v298->fields.__2__current, (int32_t)v253, v254, v255);
            v227 = 7;
            goto LABEL_367;
          }
        }
        readResult_5__2 = v298->fields._readResult_5__2;
        if ( readResult_5__2 )
        {
          if ( readResult_5__2 == 1 )
          {
            _4__this->fields.isReadAuth = 0;
            v257 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v257,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_callbackAccountRegist__,
              0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                                 v257,
                                                                 (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
            if ( this )
            {
              AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_366:
              v258 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v258, 0LL);
              v298->fields.__2__current = (Il2CppObject *)v258;
              v224 = &v298->fields.__2__current;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v298->fields.__2__current, (int32_t)v258, v259, v260);
              v227 = 8;
LABEL_367:
              *((_DWORD *)v224 - 2) = v227;
              return 1;
            }
            goto LABEL_410;
          }
          v280 = (Il2CppObject *)StringLiteral_1/*""*/;
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_410;
          if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v282 = LocalizationManager__Get((System_String_o *)StringLiteral_9124/*"NETWORK_ERROR_FIEND_CODE"*/, v281);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_410;
            DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
          }
          else
          {
            if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
            DispFriendCode = AndroidUtil__GetFriendCodeFromOldDat(0LL);
            if ( System_String__IsNullOrEmpty(DispFriendCode, 0LL) )
            {
LABEL_393:
              v286 = SingletonMonoBehaviour_object___get_Instance(*v74);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v287 = LocalizationManager__Get((System_String_o *)StringLiteral_9125/*"NETWORK_ERROR_READ_AUTH"*/, v285);
              v299.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
              v299.monitor = (void *)-1LL;
              v300 = v298->fields._readResult_5__2;
              v288 = System_Enum__ToString(&v299, 0LL);
              v289 = (System_String_o *)StringLiteral_1/*""*/;
              if ( v288 )
                v290 = (Il2CppObject *)v288;
              else
                v290 = (Il2CppObject *)StringLiteral_1/*""*/;
              v291 = System_String__Format_60340120(v287, v280, v290, 0LL);
              v292 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v292,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_EndQuitDialog__,
                0LL);
              if ( v286 )
              {
                CommonUI__OpenErrorDialog((CommonUI_o *)v286, v289, v291, v292, 0, 0LL);
                return 0;
              }
              goto LABEL_410;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v282 = LocalizationManager__Get((System_String_o *)StringLiteral_9124/*"NETWORK_ERROR_FIEND_CODE"*/, v284);
          }
          v280 = (Il2CppObject *)System_String__Format(v282, (Il2CppObject *)DispFriendCode, 0LL);
          goto LABEL_393;
        }
LABEL_368:
        v5 = v298;
        v298->fields._isCacheCheck_5__3 = 0;
LABEL_369:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_410;
        DataManager__Initialize((DataManager_o *)this, 0LL);
        if ( !v5->fields.isReboot && !v5->fields._isCacheCheck_5__3 )
        {
          v5->fields._isCacheCheck_5__3 = 1;
          v261 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v261 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v261->static_fields->RebootCacheClearKey, 0LL) )
          {
            v262 = (Il2CppObject *)sub_1B00F18(ManagementManager___c__DisplayClass33_0_TypeInfo);
            System_Object___ctor(v262, 0LL);
            v263 = v5;
            v5->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v262;
            p__8__1 = (ServantStatusBattleListViewItem_o *)&v5->fields.__8__1;
            sub_1B00C70(p__8__1, (int32_t)v262, v265, v266);
            if ( !p__8__1->klass )
              goto LABEL_410;
            LOWORD(p__8__1->klass->_1.name) = 0;
            v267 = v74;
            v269 = SingletonMonoBehaviour_object___get_Instance(*v74);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v270 = LocalizationManager__Get((System_String_o *)StringLiteral_7294/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v268);
            v272 = LocalizationManager__Get((System_String_o *)StringLiteral_7292/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v271);
            v274 = LocalizationManager__Get((System_String_o *)StringLiteral_7291/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v273);
            v276 = LocalizationManager__Get((System_String_o *)StringLiteral_7290/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v275);
            klass = (Il2CppObject *)p__8__1->klass;
            v278 = v276;
            v279 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v279,
              klass,
              Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
              0LL);
            if ( !v269 )
              goto LABEL_410;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v269,
              v270,
              v272,
              v274,
              v278,
              v279,
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
              0LL);
            v74 = v267;
            v5 = v263;
LABEL_60:
            _8__1 = v5->fields.__8__1;
            if ( !_8__1 )
              goto LABEL_410;
            if ( !_8__1->fields.confirmed )
            {
              v219 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v219, 0LL);
              v5->fields.__2__current = (Il2CppObject *)v219;
              v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
              sub_1B00C70(v84, (int32_t)v219, v220, v221);
              v87 = 9;
              goto LABEL_408;
            }
            if ( _8__1->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_410;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v5->fields.__8__1 = 0LL;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__8__1, 0, v2, v3);
          }
          else
          {
            v293 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v293 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v293->static_fields->RebootCacheClearKey, 1, 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
          }
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance(*v74);
        if ( this )
        {
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              started = UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          (System_Collections_IEnumerator_o *)this,
                          0LL);
              v5->fields.__2__current = (Il2CppObject *)started;
              v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
              sub_1B00C70(v84, (int32_t)started, v295, v296);
              v87 = 10;
              goto LABEL_408;
            }
          }
        }
LABEL_410:
        sub_1B00F28(this, method);
      }
      v91 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v91, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v91;
      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(v84, (int32_t)v91, v92, v93);
      v87 = 4;
LABEL_408:
      *(_DWORD *)&v84[-1].fields.isMine = v87;
      return 1;
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_30;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_44;
      goto LABEL_410;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_47;
    case 7:
      v298 = v5;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_410;
      goto LABEL_358;
    case 8:
      v298 = v5;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_410;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_366;
      goto LABEL_368;
    case 9:
      p_fields->__1__state = -1;
      goto LABEL_60;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_410;
      if ( !byte_48E2070 )
      {
        sub_1B00CCC(&DataManager_TypeInfo, method);
        byte_48E2070 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v5->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( !this[2].fields.__1__state )
          j_il2cpp_runtime_class_init_0(this);
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_410;
      _4__this->fields.isReadGameData = 0;
      v114 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v114,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v114,
                                                           (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_410;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v115 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v115, 0LL);
      v5->fields._waitForServerTime_5__7 = v115;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields._waitForServerTime_5__7, (int32_t)v115, v116, v117);
      goto LABEL_86;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_410;
      if ( !_4__this->fields.isReadGameData )
      {
LABEL_86:
        waitForServerTime_5__7 = (Il2CppObject *)v5->fields._waitForServerTime_5__7;
        v5->fields.__2__current = waitForServerTime_5__7;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, (int32_t)waitForServerTime_5__7, v2, v3);
        v87 = 11;
        goto LABEL_408;
      }
      _4__this->fields.isReadGameData = 0;
      v118 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v118,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v118,
                                                           (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( this )
      {
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v119 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v119, 0LL);
        v5->fields._wait_5__8 = v119;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields._wait_5__8, (int32_t)v119, v120, v121);
LABEL_199:
        wait_5__8 = (Il2CppObject *)v5->fields._wait_5__8;
        v5->fields.__2__current = wait_5__8;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, (int32_t)wait_5__8, v2, v3);
        v87 = 12;
        goto LABEL_408;
      }
      goto LABEL_410;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_410;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_199;
      v123 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_48E00B1 )
      {
        sub_1B00CCC(&NetworkManager_TypeInfo, method);
        byte_48E00B1 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v123 )
        goto LABEL_410;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v123,
        (System_String_o *)StringLiteral_5066/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v5->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v125 = UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   MasterData,
                   0LL);
          v5->fields.__2__current = (Il2CppObject *)v125;
          v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
          sub_1B00C70(v84, (int32_t)v125, v126, v127);
          v87 = 13;
          goto LABEL_408;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v5->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v129 = UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v5->fields.__2__current = (Il2CppObject *)v129;
            v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
            sub_1B00C70(v84, (int32_t)v129, v130, v131);
            v87 = 15;
            goto LABEL_408;
          }
        }
      }
      goto LABEL_410;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_410;
      if ( !byte_48E2071 )
      {
        sub_1B00CCC(&DataManager_TypeInfo, method);
        byte_48E2071 = 1;
      }
      v128 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v128 = DataManager_TypeInfo;
      }
      if ( v128->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v128->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v128);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v203 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v203, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v203;
      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(v84, (int32_t)v203, v204, v205);
      v87 = 14;
      goto LABEL_408;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_369;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_410;
      if ( !byte_48E2072 )
      {
        sub_1B00CCC(&DataManager_TypeInfo, method);
        byte_48E2072 = 1;
      }
      v132 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v132 = DataManager_TypeInfo;
      }
      v5->fields._updateMasterResult_5__9 = v132->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v5->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_37239144((NetworkManager_o *)this, method);
          v222 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v222);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v223 = UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v5->fields.__2__current = (Il2CppObject *)v223;
              v224 = &v5->fields.__2__current;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__2__current, (int32_t)v223, v225, v226);
              v227 = 18;
              goto LABEL_367;
            }
          }
        }
        goto LABEL_410;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_410;
        _4__this->fields.isErrorDialog = 1;
        v135 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v136 = LocalizationManager__Get((System_String_o *)StringLiteral_9131/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v134);
        v137 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v137, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v135 )
          goto LABEL_410;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v135,
          (System_String_o *)StringLiteral_1/*""*/,
          v136,
          v137,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v74 = (const MethodInfo_35FBBF0 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v138 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v138, 0LL);
          v5->fields.__2__current = (Il2CppObject *)v138;
          v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
          sub_1B00C70(v84, (int32_t)v138, v139, v140);
          v87 = 16;
          goto LABEL_408;
        }
        if ( v5->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_330;
      }
      else if ( !_4__this )
      {
        goto LABEL_410;
      }
      _4__this->fields.isErrorDialog = 1;
      v229 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v230 = LocalizationManager__Get((System_String_o *)StringLiteral_9132/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v228);
      v231 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v231, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v229 )
        goto LABEL_410;
      CommonUI__OpenRetryDialog((CommonUI_o *)v229, (System_String_o *)StringLiteral_1/*""*/, v230, v231, 0, 0LL);
      v74 = (const MethodInfo_35FBBF0 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_328:
      if ( _4__this->fields.isErrorDialog )
      {
        v232 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v232, 0LL);
        v5->fields.__2__current = (Il2CppObject *)v232;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, (int32_t)v232, v233, v234);
        v87 = 17;
        goto LABEL_408;
      }
LABEL_330:
      v5->fields._waitForServerTime_5__7 = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields._waitForServerTime_5__7, 0, v2, v3);
      v5->fields._wait_5__8 = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields._wait_5__8, 0, v235, v236);
      goto LABEL_369;
    case 0x10:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_127;
      goto LABEL_410;
    case 0x11:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_410;
      goto LABEL_328;
    case 0x12:
      v5->fields.__1__state = -1;
      LODWORD(v299.klass) = 0;
      v141 = j_il2cpp_value_box_0(int_TypeInfo, &v299, v2, v3, v4);
      v5->fields.__2__current = (Il2CppObject *)v141;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__2__current, v141, v142, v143);
      v5->fields.__1__state = 19;
      return 1;
    case 0x13:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_200;
      goto LABEL_137;
    case 0x14:
      p_fields->__1__state = -1;
LABEL_137:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v144 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v144, 0LL);
        v5->fields.__2__current = (Il2CppObject *)v144;
        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
        sub_1B00C70(v84, (int32_t)v144, v145, v146);
        v87 = 20;
        goto LABEL_408;
      }
LABEL_200:
      v5->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0LL) )
      {
LABEL_203:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__get_IsOnline(0LL) )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_208:
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( this )
            {
              if ( !BYTE2(this->fields.__8__1) )
              {
                v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v200, 0LL);
                v5->fields.__2__current = (Il2CppObject *)v200;
                v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                sub_1B00C70(v84, (int32_t)v200, v201, v202);
                v87 = 25;
                goto LABEL_408;
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
              if ( _4__this )
              {
                if ( this )
                {
                  v165 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                           (AssetManager_o *)this,
                           (System_String_o *)StringLiteral_12271/*"SYSTEM"*/,
                           _4__this->fields.downloadParallelMax,
                           0LL);
                  v166 = UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                           (UnityEngine_MonoBehaviour_o *)_4__this,
                           v165,
                           0LL);
                  v5->fields.__2__current = (Il2CppObject *)v166;
                  v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                  sub_1B00C70(v84, (int32_t)v166, v167, v168);
                  v87 = 26;
                  goto LABEL_408;
                }
              }
            }
          }
        }
        else
        {
LABEL_213:
          v169 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LocalizationManager__LoadAssetData((const MethodInfo *)v169);
LABEL_216:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_48E2074 )
          {
            sub_1B00CCC(&LocalizationManager_TypeInfo, method);
            byte_48E2074 = 1;
          }
          v170 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v170 = LocalizationManager_TypeInfo;
          }
          if ( v170->static_fields->isBusySetAssetData )
          {
            v171 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v171, 0LL);
            v5->fields.__2__current = (Il2CppObject *)v171;
            v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
            sub_1B00C70(v84, (int32_t)v171, v172, v173);
            v87 = 29;
            goto LABEL_408;
          }
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          FSUtility__LoadAssetData(0LL);
LABEL_227:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          if ( !byte_48E2075 )
          {
            sub_1B00CCC(&FSUtility_TypeInfo, method);
            byte_48E2075 = 1;
          }
          v174 = FSUtility_TypeInfo;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            v174 = FSUtility_TypeInfo;
          }
          if ( v174->static_fields->isBusySetAssetData )
          {
            v175 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v175, 0LL);
            v5->fields.__2__current = (Il2CppObject *)v175;
            v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
            sub_1B00C70(v84, (int32_t)v175, v176, v177);
            v87 = 30;
            goto LABEL_408;
          }
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          ImageLimitCount__initializeAssetStorage(0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__Initialize(0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          this = (ManagementManager__startCheckAll_d__33_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
          if ( this )
          {
            OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, 0LL);
LABEL_243:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( AtlasManager__IsBusyInitialize(0LL) )
            {
              v178 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v178, 0LL);
              v5->fields.__2__current = (Il2CppObject *)v178;
              v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
              sub_1B00C70(v84, (int32_t)v178, v179, v180);
              v87 = 31;
              goto LABEL_408;
            }
            v5->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_248:
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__33_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
            if ( this )
            {
              if ( LOBYTE(this->fields.__2__current) )
              {
                overrideAssetSoundNameWaitCount_5__5 = v5->fields._overrideAssetSoundNameWaitCount_5__5;
                v5->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
                if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
                {
                  v182 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v182, 0LL);
                  v5->fields.__2__current = (Il2CppObject *)v182;
                  v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                  sub_1B00C70(v84, (int32_t)v182, v183, v184);
                  v87 = 32;
                  goto LABEL_408;
                }
              }
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__initializeAssetStorage(0LL);
LABEL_257:
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
              if ( this )
              {
                if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
                {
                  v185 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v185, 0LL);
                  v5->fields.__2__current = (Il2CppObject *)v185;
                  v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                  sub_1B00C70(v84, (int32_t)v185, v186, v187);
                  v87 = 33;
                  goto LABEL_408;
                }
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( this )
                {
                  ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_262:
                  this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                  if ( this )
                  {
                    if ( LOBYTE(this[5].fields._wait_5__8) )
                    {
                      v188 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v188, 0LL);
                      v5->fields.__2__current = (Il2CppObject *)v188;
                      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                      sub_1B00C70(v84, (int32_t)v188, v189, v190);
                      v87 = 34;
                      goto LABEL_408;
                    }
                    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
                    if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
                    {
                      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
                      PurchaseBehaviour__Ready(0LL);
                    }
                    if ( v5->fields._isLoad_5__4 )
                    {
                      if ( !SoundManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                      if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9193/*"NOW_LOADING"*/, 0LL) )
                      {
                        if ( !SoundManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        SoundManager__fadeoutBgm(1.0, 0LL);
                        v191 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
                        UnityEngine_WaitForSeconds___ctor(v191, 1.0, 0LL);
                        v5->fields.__2__current = (Il2CppObject *)v191;
                        v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                        sub_1B00C70(v84, (int32_t)v191, v192, v193);
                        v87 = 35;
                        goto LABEL_408;
                      }
LABEL_278:
                      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !this )
                        goto LABEL_410;
                      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                    }
                    else
                    {
                      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !this )
                        goto LABEL_410;
                      this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode(
                                                                           (CommonUI_o *)this,
                                                                           3,
                                                                           0LL);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( this )
                        {
                          CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_335:
                          v237 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                          UnityEngine_WaitForEndOfFrame___ctor(v237, 0LL);
                          v5->fields.__2__current = (Il2CppObject *)v237;
                          v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                          sub_1B00C70(v84, (int32_t)v237, v238, v239);
                          v87 = 36;
                          goto LABEL_408;
                        }
                        goto LABEL_410;
                      }
                    }
                    if ( _4__this )
                    {
                      ManagementManager__BuildInfoOff(_4__this, method);
                      LODWORD(v299.klass) = 0;
                      v197 = j_il2cpp_value_box_0(int_TypeInfo, &v299, v194, v195, v196);
                      v5->fields.__2__current = (Il2CppObject *)v197;
                      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                      sub_1B00C70(v84, v197, v198, v199);
                      v87 = 37;
                      goto LABEL_408;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_294:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v216 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v216, 0LL);
              v5->fields.__2__current = (Il2CppObject *)v216;
              v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
              sub_1B00C70(v84, (int32_t)v216, v217, v218);
              v87 = 21;
              goto LABEL_408;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this )
            {
              if ( this )
              {
                AssetManager__DownloadAssetStorageAttribute(
                  (AssetManager_o *)this,
                  (System_String_o *)StringLiteral_12271/*"SYSTEM"*/,
                  _4__this->fields.downloadParallelMax,
                  0LL);
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                if ( AssetManager__getDownloadSize(0LL) >= 1 )
                {
                  v209 = ManagerConfig_TypeInfo;
                  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                    v209 = ManagerConfig_TypeInfo;
                  }
                  if ( v209->static_fields->UseStandaloneAsset )
                  {
                    v5->fields._isLoad_5__4 = 1;
                    if ( !SoundManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    SoundManager__playBgm((System_String_o *)StringLiteral_9193/*"NOW_LOADING"*/, 0LL);
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_308:
                      v210 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v210, 0LL);
                      v5->fields.__2__current = (Il2CppObject *)v210;
                      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                      sub_1B00C70(v84, (int32_t)v210, v211, v212);
                      v87 = 22;
                      goto LABEL_408;
                    }
                    goto LABEL_410;
                  }
LABEL_146:
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                  if ( AssetManager__getDownloadSize(0LL) >= 1 )
                  {
                    v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v147, 0LL);
                    v5->fields.__2__current = (Il2CppObject *)v147;
                    v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                    sub_1B00C70(v84, (int32_t)v147, v148, v149);
                    v87 = 23;
                    goto LABEL_408;
                  }
                }
LABEL_309:
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                AssetManager__SetOnlineStatus(0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( this )
                {
                  NetworkManager__SetServerSetting_37239144((NetworkManager_o *)this, method);
                  v213 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
                  UnityEngine_WaitForSeconds___ctor(v213, 0.1, 0LL);
                  v5->fields.__2__current = (Il2CppObject *)v213;
                  v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
                  sub_1B00C70(v84, (int32_t)v213, v214, v215);
                  v87 = 24;
                  goto LABEL_408;
                }
              }
            }
          }
        }
      }
      goto LABEL_410;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_294;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_308;
      goto LABEL_309;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_146;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_203;
    case 0x19:
      p_fields->__1__state = -1;
      goto LABEL_208;
    case 0x1A:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_213;
      v5->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_48E2073 )
      {
        sub_1B00CCC(&LogoMain_TypeInfo, v150);
        byte_48E2073 = 1;
      }
      v151 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v151 = LogoMain_TypeInfo;
      }
      if ( !v151->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9193/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v152 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v152, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v152;
      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(v84, (int32_t)v152, v153, v154);
      v87 = 27;
      goto LABEL_408;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_289:
      v206 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v206, 0LL);
      v5->fields.__2__current = (Il2CppObject *)v206;
      v84 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(v84, (int32_t)v206, v207, v208);
      v87 = 28;
      goto LABEL_408;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_289;
      v155 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v155 = (_QWORD *)sub_1B00CE4(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v156 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v155, v155[4]);
      OverwriteAssetSoundName__PlaySystemSe(v156, 0, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      goto LABEL_213;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_216;
    case 0x1E:
      p_fields->__1__state = -1;
      goto LABEL_227;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_243;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_248;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_257;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_262;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_278;
    case 0x24:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_410;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_335;
      v157 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v157 = (_QWORD *)sub_1B00CE4(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v158 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v157, v157[4]);
      OverwriteAssetSoundName__PlaySystemSe(v158, 0, 0LL);
      goto LABEL_278;
    case 0x25:
      p_fields->__1__state = -1;
      v159 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v159 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v159->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication(0LL);
        OptionManager__SetNotiffication(Notiffication, 1, 0LL);
        v162 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v162 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v162->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_410;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v160);
      if ( v5->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v163);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_410;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 9, 1, 0LL, 0LL);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ManagementManager__startCheckAll_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__startCheckAll_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__startCheckAll_d__33__System_Collections_IEnumerator_Reset(
        ManagementManager__startCheckAll_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__startCheckAll_d__33__System_Collections_IEnumerator_get_Current(
        ManagementManager__startCheckAll_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__startCheckAll_d__33__System_IDisposable_Dispose(
        ManagementManager__startCheckAll_d__33_o *this,
        const MethodInfo *method)
{
  ;
}