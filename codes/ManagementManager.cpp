void __fastcall ManagementManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct ManagementManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct ManagementManager_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct ManagementManager_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5A8F8 & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8029/*"IsNotificationStatusSend"*/);
    sub_1B885B0(&StringLiteral_8041/*"IsReBootCacheClearKey"*/);
    sub_1B885B0(&StringLiteral_20905/*"ja-JP"*/);
    sub_1B885B0(&StringLiteral_24894/*"yyyy年MM月dd日HH時mm分"*/);
    byte_4A5A8F8 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8029/*"IsNotificationStatusSend"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8029/*"IsNotificationStatusSend"*/,
    v1,
    v2);
  v3 = StringLiteral_8041/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8041/*"IsReBootCacheClearKey"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->RebootCacheClearKey, v3, v5, v6);
  v7 = StringLiteral_24894/*"yyyy年MM月dd日HH時mm分"*/;
  v8 = ManagementManager_TypeInfo->static_fields;
  v8->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24894/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->DATE_TIME_DISP_FORMAT, v7, v9, v10);
  v11 = StringLiteral_20905/*"ja-JP"*/;
  v12 = ManagementManager_TypeInfo->static_fields;
  v12->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20905/*"ja-JP"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->DEFAULT_CULTURE_NAME, v11, v13, v14);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A8F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_4A5A8F7 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void __fastcall ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  ManagementManager_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  float v14; // s0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x19
  Il2CppObject *v23; // x19
  float v24; // [xsp+Ch] [xbp-34h] BYREF

  v24 = ratio;
  if ( (byte_4A5A8E2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_837/*"):"*/);
    sub_1B885B0(&StringLiteral_6725/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_1B885B0(&StringLiteral_796/*"(ratio: "*/);
    byte_4A5A8E2 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6725/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1B88658(string___TypeInfo, 5LL);
    if ( this )
    {
      v10 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v8, v9);
      if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v13 = StringLiteral_796/*"(ratio: "*/;
      v10->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_796/*"(ratio: "*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.AvalonSceneManager, v13, v11, v12);
      this = (ManagementManager_o *)System_Single__ToString(v14, (const MethodInfo *)&v24);
      if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 2
        || (v10->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.debugInfoRootObject, (int32_t)this, v15, v16),
            LODWORD(v10->fields.m_CancellationTokenSource) <= 3)
        || (v19 = StringLiteral_837/*"):"*/,
            v10->fields.statusLabel = (struct UILabel_o *)StringLiteral_837/*"):"*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.statusLabel, v19, v17, v18),
            LODWORD(v10->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1B88814(this, errorText);
      }
      v10->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v10->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v20,
        v21);
      v22 = (Il2CppObject *)System_String__Concat_61720560((System_String_array *)v10, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v22, 0LL);
      return;
    }
LABEL_19:
    sub_1B8880C(this, errorText);
  }
  v23 = (Il2CppObject *)System_String__Concat_61707032(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v23, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5A8DE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_4A5A8DE = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_3739A84 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
}


void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4A5A8F5 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5A8F5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4A5A8F4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A8F4 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1B8880C(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4A5A8DC & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A8DC = 1;
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

  if ( (byte_4A5A8EA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5A8EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4A5A8E9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    byte_4A5A8E9 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69253336(0LL);
}


void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4A5A8E8 & 1) != 0 )
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
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    byte_4A5A8E8 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69253336(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A8E5 & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
    byte_4A5A8E5 = 1;
  }
  v3 = sub_1B887FC(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4A5A8F1 & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A8F1 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A5A27F )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A27F = 1;
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

  if ( (byte_4A5A8F2 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4A5A8F2 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4A5A8E3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24079/*"true"*/);
    byte_4A5A8E3 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_24079/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4A5A8F6 & 1) == 0 )
  {
    sub_1B885B0(&System_Globalization_CultureInfo_TypeInfo);
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A8F6 = 1;
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

  if ( (byte_4A5A8DD & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A8DD = 1;
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


void __fastcall ManagementManager__Start(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  intptr_t v4; // w21
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3
  System_Collections_IEnumerator_o *v8; // x1
  System_RuntimeTypeHandle_o v9; // 0:w0.4

  if ( (byte_4A5A8DF & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&UnityGamingServicesBehaviour_var);
    byte_4A5A8DF = 1;
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
    sub_1B8880C(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v6);
  v8 = ManagementManager__startCheckAll(this, 0, 0, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4A5A8F3 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1B885B0(&UnityEngine_Application_TypeInfo);
    byte_4A5A8F3 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_69253336(0LL);
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

  if ( (byte_4A5A8F0 & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5A8F0 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _37688364; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4A5A8EF & 1) == 0 )
  {
    sub_1B885B0(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A8EF = 1;
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
  _37688364 = TutorialFlag__Get_37688364(102, 0LL);
  if ( _37688364 )
  {
LABEL_9:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v9);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B8880C(0LL, v11);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_37688364, v6, v7);
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

  if ( (byte_4A5A8ED & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5A8ED = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5A8EC & 1) == 0 )
  {
    sub_1B885B0(&Method_ManagementManager_callbackTopHome__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A8EC = 1;
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
  if ( TutorialFlag__Get_37688364(102, 0LL) )
  {
LABEL_9:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B8880C(0LL, v10);
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
  int32_t v10; // w2
  int32_t v11; // w3
  AvalonVideoPlayer_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_4A5A8E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_4644/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_1B885B0(&StringLiteral_9152/*"MovieRoot"*/);
    byte_4A5A8E0 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4644/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v6 = (UnityEngine_GameObject_o *)sub_1B887FC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9152/*"MovieRoot"*/, 0LL);
    if ( !v6
      || (v9 = UnityEngine_GameObject__AddComponent_object_(
                 v6,
                 (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields._videoPlayer_k__BackingField,
            (int32_t)v9,
            v10,
            v11),
          !v5)
      || (v12 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v5,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v12) )
    {
      sub_1B8880C(Component_object, v8);
    }
    AvalonVideoPlayer__initialize(v12, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_33730068(v6, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5A8DA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A5A8DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4A5A8DB & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A8DB = 1;
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

  if ( (byte_4A5A8E1 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5A8E1 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_27:
      sub_1B8880C(Instance, v9);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_62753100(0LL);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_1B8880C(0LL, v11);
    AdManager__Initialize((AdManager_o *)v10, 2, 0LL);
    FirebaseScript__Initialize(0LL);
    v13 = ManagementManager__startCheckAll(this, 1, isLogin, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
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

  if ( (byte_4A5A8EB & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ManagementManager_callbackTopLogin__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4A5A8EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1B887FC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v5);
  if ( !Instance )
    sub_1B8880C(v6, v7);
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

  if ( (byte_4A5A8EE & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4A5A8EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1B887FC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v5);
  if ( !Instance )
    sub_1B8880C(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, v8);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._videoPlayer_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


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

  if ( (byte_4A5A8E4 & 1) == 0 )
  {
    sub_1B885B0(&ManagementManager__startCheckAll_d__33_TypeInfo);
    byte_4A5A8E4 = 1;
  }
  v7 = isLogin;
  v8 = sub_1B887FC(ManagementManager__startCheckAll_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A8E6 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A8E6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
}


void __fastcall ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4A5A8E7 & 1) == 0 )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ScrTerminalListTop_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5A8E7 = 1;
  }
  MovieFileMerge__Delete_37748976(0LL);
  v2 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58377 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58377 = 1;
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
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  __int64 v11; // x1

  if ( (byte_4A5A8FA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5A8FA = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v9);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_1B8880C(0LL, v11);
    AdManager__Initialize((AdManager_o *)v10, 1, 0LL);
    FirebaseScript__Initialize(0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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


void __fastcall ManagementManager___c__DisplayClass33_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass33_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4A5A8F9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__);
    sub_1B885B0(&ManagementManager___c__DisplayClass33_1_TypeInfo);
    byte_4A5A8F9 = 1;
  }
  v5 = sub_1B887FC(ManagementManager___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v11, 0LL);
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
    sub_1B8880C(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  ManagementManager__startCheckAll_d__33_o *v4; // x25
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  const MethodInfo_3739718 **v6; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v9; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x25
  int32_t v11; // w2
  int32_t v12; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v14; // x0
  ServantStatusBattleListViewItem_o *v15; // x25
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w8
  System_Collections_IEnumerator_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  OptionManager_c *v22; // x0
  const MethodInfo *v23; // x0
  const MethodInfo *v24; // x0
  UnityEngine_WaitForEndOfFrame_o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  ManagementManager__startCheckAll_d__33_o *v30; // x21
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  EncryptedPlayerPrefs_c *v40; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x1
  struct ManagementManager___c__DisplayClass33_0_o *_8__1; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v48; // x21
  const MethodInfo *v49; // x3
  UnityEngine_WaitForEndOfFrame_o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  NetworkManager_ResultCallbackFunc_o *v53; // x21
  const MethodInfo *v54; // x3
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v59; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  DataManager_c *v64; // x0
  UnityEngine_Coroutine_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  DataManager_c *v68; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v70; // x21
  System_String_o *v71; // x22
  ErrorDialog_ClickDelegate_o *v72; // x23
  UnityEngine_WaitForEndOfFrame_o *v73; // x20
  int32_t v74; // w2
  int32_t v75; // w3
  UnityEngine_WaitForEndOfFrame_o *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  UnityEngine_WaitForEndOfFrame_o *v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  LogoMain_c *v82; // x0
  UnityEngine_WaitForEndOfFrame_o *v83; // x20
  int32_t v84; // w2
  int32_t v85; // w3
  _QWORD *v86; // x0
  System_Reflection_MethodBase_o *v87; // x0
  const MethodInfo *v88; // x2
  _QWORD *v89; // x0
  System_Reflection_MethodBase_o *v90; // x0
  const MethodInfo *v91; // x2
  ManagementManager_c *v92; // x0
  const MethodInfo *v93; // x2
  OptionManager_c *v94; // x0
  bool Notiffication; // w0
  const MethodInfo *v96; // x2
  ManagementManager_c *v97; // x0
  const MethodInfo *v98; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v100; // x0
  UnityEngine_Coroutine_o *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  LocalizationManager_c *v104; // x0
  UnityEngine_WaitForEndOfFrame_o *v105; // x20
  int32_t v106; // w2
  int32_t v107; // w3
  FSUtility_c *v108; // x0
  UnityEngine_WaitForEndOfFrame_o *v109; // x20
  int32_t v110; // w2
  int32_t v111; // w3
  UnityEngine_WaitForEndOfFrame_o *v112; // x20
  int32_t v113; // w2
  int32_t v114; // w3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v116; // x20
  int32_t v117; // w2
  int32_t v118; // w3
  UnityEngine_WaitForEndOfFrame_o *v119; // x20
  int32_t v120; // w2
  int32_t v121; // w3
  UnityEngine_WaitForEndOfFrame_o *v122; // x20
  int32_t v123; // w2
  int32_t v124; // w3
  UnityEngine_WaitForEndOfFrame_o *v125; // x20
  int32_t v126; // w2
  int32_t v127; // w3
  UnityEngine_WaitForSeconds_o *v128; // x20
  int32_t v129; // w2
  int32_t v130; // w3
  int32_t v131; // w2
  int32_t v132; // w3
  UnityEngine_WaitForEndOfFrame_o *v133; // x20
  int32_t v134; // w2
  int32_t v135; // w3
  UnityEngine_WaitForEndOfFrame_o *v136; // x20
  int32_t v137; // w2
  int32_t v138; // w3
  UnityEngine_WaitForEndOfFrame_o *v139; // x20
  int32_t v140; // w2
  int32_t v141; // w3
  ManagerConfig_c *v142; // x0
  UnityEngine_WaitForEndOfFrame_o *v143; // x20
  int32_t v144; // w2
  int32_t v145; // w3
  UnityEngine_WaitForSeconds_o *v146; // x20
  int32_t v147; // w2
  int32_t v148; // w3
  UnityEngine_WaitForEndOfFrame_o *v149; // x20
  int32_t v150; // w2
  int32_t v151; // w3
  UnityEngine_WaitForEndOfFrame_o *v152; // x20
  int32_t v153; // w2
  int32_t v154; // w3
  ManagementManager_c *v155; // x0
  UnityEngine_Coroutine_o *v156; // x0
  Il2CppObject **v157; // x19
  int32_t v158; // w2
  int32_t v159; // w3
  int v160; // w8
  Il2CppObject *v161; // x21
  System_String_o *v162; // x22
  ErrorDialog_ClickDelegate_o *v163; // x23
  UnityEngine_WaitForEndOfFrame_o *v164; // x20
  int32_t v165; // w2
  int32_t v166; // w3
  int32_t v167; // w2
  int32_t v168; // w3
  UnityEngine_WaitForEndOfFrame_o *v169; // x20
  int32_t v170; // w2
  int32_t v171; // w3
  UnityEngine_WaitForEndOfFrame_o *v172; // x20
  int32_t v173; // w2
  int32_t v174; // w3
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v178; // x0
  ManagerConfig_c *v179; // x0
  const MethodInfo_3739718 **v180; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v182; // x22
  ErrorDialog_ClickDelegate_o *v183; // x23
  UnityEngine_WaitForEndOfFrame_o *v184; // x20
  int32_t v185; // w2
  int32_t v186; // w3
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v188; // x21
  const MethodInfo *v189; // x3
  UnityEngine_WaitForEndOfFrame_o *v190; // x20
  int32_t v191; // w2
  int32_t v192; // w3
  ManagementManager_c *v193; // x0
  const MethodInfo_3739718 **v194; // x28
  Il2CppObject *v195; // x21
  Il2CppObject **p__8__1; // x23
  int32_t v197; // w2
  int32_t v198; // w3
  ManagementManager__startCheckAll_d__33_o *v199; // x19
  Il2CppObject *v200; // x21
  System_String_o *v201; // x22
  System_String_o *v202; // x24
  System_String_o *v203; // x25
  System_String_o *v204; // x0
  Il2CppObject *v205; // x27
  System_String_o *v206; // x23
  CommonConfirmDialog_ClickDelegate_o *v207; // x26
  Il2CppObject *v208; // x21
  System_String_o *v209; // x21
  System_String_o *DispFriendCode; // x22
  Il2CppObject *v211; // x22
  System_String_o *v212; // x23
  System_String_o *v213; // x0
  System_String_o *v214; // x19
  Il2CppObject *v215; // x2
  System_String_o *v216; // x21
  ErrorDialog_ClickDelegate_o *v217; // x23
  ManagementManager_c *v218; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v220; // w2
  int32_t v221; // w3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__33_o *v223; // [xsp+40h] [xbp-80h]
  System_Enum_o v224; // [xsp+48h] [xbp-78h] BYREF
  int32_t v225; // [xsp+58h] [xbp-68h]

  v4 = this;
  if ( (byte_4A5A8FB & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&CommonServicePluginScript_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&LogoMain_TypeInfo);
    sub_1B885B0(&Method_ManagementManager_EndLogDialog__);
    sub_1B885B0(&Method_ManagementManager_EndQuitDialog__);
    sub_1B885B0(&Method_ManagementManager_EndRetryDialog__);
    sub_1B885B0(&Method_ManagementManager_callbackAccountRegist__);
    sub_1B885B0(&Method_ManagementManager_callbackTopGameData__);
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_1B885B0(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&NetworkManager_ReadResult_TypeInfo);
    sub_1B885B0(&ResolutionManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__);
    sub_1B885B0(&ManagementManager___c__DisplayClass33_0_TypeInfo);
    sub_1B885B0(&Method_ManagementManager__startCheckAll_d__33_MoveNext__);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&StringLiteral_7370/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_9296/*"NOW_LOADING"*/);
    sub_1B885B0(&StringLiteral_9226/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1B885B0(&StringLiteral_6352/*"F39UThNh"*/);
    sub_1B885B0(&StringLiteral_7373/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_1B885B0(&StringLiteral_8847/*"Management"*/);
    sub_1B885B0(&StringLiteral_7371/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_1B885B0(&StringLiteral_9570/*"NotifyRequestPermissionsResultFromPlugin"*/);
    sub_1B885B0(&StringLiteral_7369/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_5120/*"DataServerFolderName"*/);
    sub_1B885B0(&StringLiteral_16762/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_1B885B0(&StringLiteral_9234/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_9227/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_1B885B0(&StringLiteral_12475/*"SYSTEM"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_20767/*"ioqrk4Om"*/);
    sub_1B885B0(&StringLiteral_1474/*"2pC0bIYM"*/);
    sub_1B885B0(&StringLiteral_9228/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_1B885B0(&StringLiteral_9235/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4A5A8FB = 1;
  }
  p_fields = &v4->fields;
  v6 = (const MethodInfo_3739718 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      isReboot = v4->fields.isReboot;
      v4->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v9 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v4->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v9, v11, v12);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
      v14 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v14, v16, v17);
      v18 = 2;
      goto LABEL_414;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      v19 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v4->fields.__2__current = (Il2CppObject *)v19;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v19, v20, v21);
      v18 = 3;
      goto LABEL_414;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0LL);
      v22 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v22);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(v23);
      OptionManager__AdjustVolume(v24);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( !v4->fields.isReboot )
      {
LABEL_30:
        this = (ManagementManager__startCheckAll_d__33_o *)sub_1B88658(string___TypeInfo, 3LL);
        if ( !this )
          goto LABEL_416;
        v30 = this;
        if ( !LODWORD(this->fields.__2__current)
          || (v31 = StringLiteral_1474/*"2pC0bIYM"*/,
              *(_QWORD *)&this->fields.isReboot = StringLiteral_1474/*"2pC0bIYM"*/,
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isReboot, v31, v28, v29),
              LODWORD(v30->fields.__2__current) <= 1)
          || (v34 = StringLiteral_6352/*"F39UThNh"*/,
              v30->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6352/*"F39UThNh"*/,
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->fields.__4__this, v34, v32, v33),
              LODWORD(v30->fields.__2__current) <= 2) )
        {
          sub_1B88814(this, method);
        }
        v37 = StringLiteral_20767/*"ioqrk4Om"*/;
        v30->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)StringLiteral_20767/*"ioqrk4Om"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->fields.__8__1, v37, v35, v36);
        v40 = EncryptedPlayerPrefs_TypeInfo;
        if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
          v40 = EncryptedPlayerPrefs_TypeInfo;
        }
        static_fields = v40->static_fields;
        static_fields->keys = (struct System_String_array *)v30;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->keys, (int32_t)v30, v38, v39);
        if ( !v4->fields.isReboot )
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
                                                                 (System_String_o *)StringLiteral_16762/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !_4__this )
                goto LABEL_416;
              _4__this->fields.isPermissionRequesting = 1;
              AndroidPermissionManager__RequestPermission(
                (System_String_o *)StringLiteral_16762/*"android.permission.POST_NOTIFICATIONS"*/,
                (System_String_o *)StringLiteral_8847/*"Management"*/,
                (System_String_o *)StringLiteral_9570/*"NotifyRequestPermissionsResultFromPlugin"*/,
                0LL);
LABEL_44:
              if ( _4__this->fields.isPermissionRequesting )
              {
                v42 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v42, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v42;
                v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B88554(v15, (int32_t)v42, v43, v44);
                v18 = 5;
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
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
          if ( this )
          {
            LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
            v172 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v172, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v172;
            v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(v15, (int32_t)v172, v173, v174);
            v18 = 6;
            goto LABEL_414;
          }
          goto LABEL_416;
        }
LABEL_47:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
        v4->fields._readResult_5__2 = (int)this;
        if ( !_4__this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__33_o *)_4__this->fields.debugInfoRootObject;
        if ( !this )
          goto LABEL_416;
        v223 = v4;
        this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
        if ( !this )
          goto LABEL_416;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        ManagementManager__BuildInfoOff(_4__this, v45);
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
          v178 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
          if ( FreeSize < v178 )
            FreeSize = v178;
          if ( FreeSize < 1 )
            break;
          v179 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v179 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v179->static_fields->LIMIT_FREE_SIZE )
            break;
          _4__this->fields.isErrorDialog = 1;
          v180 = v6;
          Instance = SingletonMonoBehaviour_object___get_Instance(*v6);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v182 = LocalizationManager__Get((System_String_o *)StringLiteral_9226/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
          v183 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v183,
            (Il2CppObject *)_4__this,
            Method_ManagementManager_EndRetryDialog__,
            0LL);
          if ( !Instance )
            goto LABEL_416;
          CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v182, v183, 0, 0LL);
          v6 = v180;
LABEL_364:
          if ( _4__this->fields.isErrorDialog )
          {
            v184 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v184, 0LL);
            v223->fields.__2__current = (Il2CppObject *)v184;
            v157 = &v223->fields.__2__current;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v223->fields.__2__current, (int32_t)v184, v185, v186);
            v160 = 7;
            goto LABEL_373;
          }
        }
        readResult_5__2 = v223->fields._readResult_5__2;
        if ( readResult_5__2 )
        {
          if ( readResult_5__2 == 1 )
          {
            _4__this->fields.isReadAuth = 0;
            v188 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v188,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_callbackAccountRegist__,
              v189);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                                 v188,
                                                                 (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
            if ( this )
            {
              AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_372:
              v190 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v190, 0LL);
              v223->fields.__2__current = (Il2CppObject *)v190;
              v157 = &v223->fields.__2__current;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v223->fields.__2__current, (int32_t)v190, v191, v192);
              v160 = 8;
LABEL_373:
              *((_DWORD *)v157 - 2) = v160;
              return 1;
            }
            goto LABEL_416;
          }
          v208 = (Il2CppObject *)StringLiteral_1/*""*/;
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v209 = LocalizationManager__Get((System_String_o *)StringLiteral_9227/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
              v211 = SingletonMonoBehaviour_object___get_Instance(*v6);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v212 = LocalizationManager__Get((System_String_o *)StringLiteral_9228/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
              v224.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
              v224.monitor = (void *)-1LL;
              v225 = v223->fields._readResult_5__2;
              v213 = System_Enum__ToString(&v224, 0LL);
              v214 = (System_String_o *)StringLiteral_1/*""*/;
              if ( v213 )
                v215 = (Il2CppObject *)v213;
              else
                v215 = (Il2CppObject *)StringLiteral_1/*""*/;
              v216 = System_String__Format_61721404(v212, v208, v215, 0LL);
              v217 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v217,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_EndQuitDialog__,
                0LL);
              if ( v211 )
              {
                CommonUI__OpenErrorDialog((CommonUI_o *)v211, v214, v216, v217, 0, 0LL);
                return 0;
              }
              goto LABEL_416;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v209 = LocalizationManager__Get((System_String_o *)StringLiteral_9227/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
          }
          v208 = (Il2CppObject *)System_String__Format(v209, (Il2CppObject *)DispFriendCode, 0LL);
          goto LABEL_399;
        }
LABEL_374:
        v4 = v223;
        v223->fields._isCacheCheck_5__3 = 0;
LABEL_375:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        DataManager__Initialize((DataManager_o *)this, 0LL);
        if ( !v4->fields.isReboot && !v4->fields._isCacheCheck_5__3 )
        {
          v4->fields._isCacheCheck_5__3 = 1;
          v193 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v193 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v193->static_fields->RebootCacheClearKey, 0LL) )
          {
            v194 = v6;
            v195 = (Il2CppObject *)sub_1B887FC(ManagementManager___c__DisplayClass33_0_TypeInfo);
            System_Object___ctor(v195, 0LL);
            v4->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v195;
            p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v195, v197, v198);
            if ( !v4->fields.__8__1 )
              goto LABEL_416;
            v4->fields.__8__1->fields = 0;
            v199 = v4;
            v200 = SingletonMonoBehaviour_object___get_Instance(*v194);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v201 = LocalizationManager__Get((System_String_o *)StringLiteral_7373/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
            v202 = LocalizationManager__Get((System_String_o *)StringLiteral_7371/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
            v203 = LocalizationManager__Get((System_String_o *)StringLiteral_7370/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
            v204 = LocalizationManager__Get((System_String_o *)StringLiteral_7369/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
            v205 = *p__8__1;
            v206 = v204;
            v207 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v207,
              v205,
              Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
              0LL);
            if ( !v200 )
              goto LABEL_416;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v200,
              v201,
              v202,
              v203,
              v206,
              v207,
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
            v6 = v194;
            v4 = v199;
LABEL_60:
            _8__1 = v4->fields.__8__1;
            if ( !_8__1 )
              goto LABEL_416;
            if ( !_8__1->fields.confirmed )
            {
              v152 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v152, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v152;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)v152, v153, v154);
              v18 = 9;
              goto LABEL_414;
            }
            if ( _8__1->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_416;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v4->fields.__8__1 = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, 0, v2, v3);
          }
          else
          {
            v218 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v218 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v218->static_fields->RebootCacheClearKey, 1, 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
          }
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance(*v6);
        if ( this )
        {
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              started = UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          (System_Collections_IEnumerator_o *)this,
                          0LL);
              v4->fields.__2__current = (Il2CppObject *)started;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)started, v220, v221);
              v18 = 10;
              goto LABEL_414;
            }
          }
        }
LABEL_416:
        sub_1B8880C(this, method);
      }
      v25 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v25, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v25;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v25, v26, v27);
      v18 = 4;
LABEL_414:
      *(_DWORD *)&v15[-1].fields.isMine = v18;
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
      v223 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_364;
    case 8:
      v223 = v4;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A5A9F6 )
      {
        sub_1B885B0(&DataManager_TypeInfo);
        byte_4A5A9F6 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v4->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( !this[2].fields.__1__state )
          j_il2cpp_runtime_class_init_0(this);
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields.isReadGameData = 0;
      v48 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v48,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v49);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v48,
                                                           (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v50 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v50, 0LL);
      v4->fields._waitForServerTime_5__7 = v50;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v50, v51, v52);
      goto LABEL_86;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
      {
LABEL_86:
        waitForServerTime_5__7 = (Il2CppObject *)v4->fields._waitForServerTime_5__7;
        v4->fields.__2__current = waitForServerTime_5__7;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)waitForServerTime_5__7, v2, v3);
        v18 = 11;
        goto LABEL_414;
      }
      _4__this->fields.isReadGameData = 0;
      v53 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v53,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v54);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v53,
                                                           (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( this )
      {
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v55, 0LL);
        v4->fields._wait_5__8 = v55;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, (int32_t)v55, v56, v57);
LABEL_200:
        wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
        v4->fields.__2__current = wait_5__8;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)wait_5__8, v2, v3);
        v18 = 12;
        goto LABEL_414;
      }
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_200;
      v59 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A58A01 )
      {
        sub_1B885B0(&NetworkManager_TypeInfo);
        byte_4A58A01 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v59 )
        goto LABEL_416;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v59,
        (System_String_o *)StringLiteral_5120/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v61 = UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                  (UnityEngine_MonoBehaviour_o *)_4__this,
                  MasterData,
                  0LL);
          v4->fields.__2__current = (Il2CppObject *)v61;
          v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(v15, (int32_t)v61, v62, v63);
          v18 = 13;
          goto LABEL_414;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v65 = UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                    (UnityEngine_MonoBehaviour_o *)_4__this,
                    (System_Collections_IEnumerator_o *)this,
                    0LL);
            v4->fields.__2__current = (Il2CppObject *)v65;
            v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(v15, (int32_t)v65, v66, v67);
            v18 = 15;
            goto LABEL_414;
          }
        }
      }
      goto LABEL_416;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A5A9F7 )
      {
        sub_1B885B0(&DataManager_TypeInfo);
        byte_4A5A9F7 = 1;
      }
      v64 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v64 = DataManager_TypeInfo;
      }
      if ( v64->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v64->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v64);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v136 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v136, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v136;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v136, v137, v138);
      v18 = 14;
      goto LABEL_414;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_375;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A5A9F8 )
      {
        sub_1B885B0(&DataManager_TypeInfo);
        byte_4A5A9F8 = 1;
      }
      v68 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v68 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v68->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_38454792((NetworkManager_o *)this, method);
          v155 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v155);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v156 = UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v156;
              v157 = &v4->fields.__2__current;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v156, v158, v159);
              v160 = 18;
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
        v70 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_9234/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v72 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v72, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v70 )
          goto LABEL_416;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v70,
          (System_String_o *)StringLiteral_1/*""*/,
          v71,
          v72,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v6 = (const MethodInfo_3739718 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v73 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v73, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v73;
          v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(v15, (int32_t)v73, v74, v75);
          v18 = 16;
          goto LABEL_414;
        }
        if ( v4->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_336;
      }
      else if ( !_4__this )
      {
        goto LABEL_416;
      }
      _4__this->fields.isErrorDialog = 1;
      v161 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v162 = LocalizationManager__Get((System_String_o *)StringLiteral_9235/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v163 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v163, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v161 )
        goto LABEL_416;
      CommonUI__OpenRetryDialog((CommonUI_o *)v161, (System_String_o *)StringLiteral_1/*""*/, v162, v163, 0, 0LL);
      v6 = (const MethodInfo_3739718 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_334:
      if ( _4__this->fields.isErrorDialog )
      {
        v164 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v164, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v164;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)v164, v165, v166);
        v18 = 17;
        goto LABEL_414;
      }
LABEL_336:
      v4->fields._waitForServerTime_5__7 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, 0, v2, v3);
      v4->fields._wait_5__8 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, 0, v167, v168);
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
      v4->fields.__2__current = 0LL;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      *(_DWORD *)&v15[-1].fields.isMine = -1;
      sub_1B88554(v15, 0, v2, v3);
      v18 = 19;
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
        v76 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v76, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v76;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)v76, v77, v78);
        v18 = 20;
        goto LABEL_414;
      }
LABEL_201:
      v4->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0LL) )
      {
LABEL_204:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__get_IsOnline(0LL) )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_209:
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( this )
            {
              if ( !BYTE2(this->fields.__8__1) )
              {
                v133 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v133, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v133;
                v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B88554(v15, (int32_t)v133, v134, v135);
                v18 = 25;
                goto LABEL_414;
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
              if ( _4__this )
              {
                if ( this )
                {
                  v100 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                           (AssetManager_o *)this,
                           (System_String_o *)StringLiteral_12475/*"SYSTEM"*/,
                           _4__this->fields.downloadParallelMax,
                           0LL);
                  v101 = UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                           (UnityEngine_MonoBehaviour_o *)_4__this,
                           v100,
                           0LL);
                  v4->fields.__2__current = (Il2CppObject *)v101;
                  v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B88554(v15, (int32_t)v101, v102, v103);
                  v18 = 26;
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
          if ( !byte_4A5A9FA )
          {
            sub_1B885B0(&LocalizationManager_TypeInfo);
            byte_4A5A9FA = 1;
          }
          v104 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v104 = LocalizationManager_TypeInfo;
          }
          if ( v104->static_fields->isBusySetAssetData )
          {
            v105 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v105, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v105;
            v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(v15, (int32_t)v105, v106, v107);
            v18 = 29;
            goto LABEL_414;
          }
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          FSUtility__LoadAssetData(0LL);
LABEL_228:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          if ( !byte_4A5A9FB )
          {
            sub_1B885B0(&FSUtility_TypeInfo);
            byte_4A5A9FB = 1;
          }
          v108 = FSUtility_TypeInfo;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            v108 = FSUtility_TypeInfo;
          }
          if ( v108->static_fields->isBusySetAssetData )
          {
            v109 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v109, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v109;
            v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(v15, (int32_t)v109, v110, v111);
            v18 = 30;
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
          this = (ManagementManager__startCheckAll_d__33_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
          if ( this )
          {
            OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, method);
LABEL_244:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( AtlasManager__IsBusyInitialize(0LL) )
            {
              v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v112, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v112;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)v112, v113, v114);
              v18 = 31;
              goto LABEL_414;
            }
            v4->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_249:
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__33_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
            if ( this )
            {
              if ( LOBYTE(this->fields.__2__current) )
              {
                overrideAssetSoundNameWaitCount_5__5 = v4->fields._overrideAssetSoundNameWaitCount_5__5;
                v4->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
                if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
                {
                  v116 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v116, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v116;
                  v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B88554(v15, (int32_t)v116, v117, v118);
                  v18 = 32;
                  goto LABEL_414;
                }
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_257:
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  if ( LOBYTE(this[9].fields.__2__current) )
                  {
                    v119 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v119, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v119;
                    v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B88554(v15, (int32_t)v119, v120, v121);
                    v18 = 33;
                    goto LABEL_414;
                  }
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__initializeAssetStorage(0LL);
LABEL_263:
                  this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                  if ( this )
                  {
                    if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
                    {
                      v122 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v122, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v122;
                      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B88554(v15, (int32_t)v122, v123, v124);
                      v18 = 34;
                      goto LABEL_414;
                    }
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( this )
                    {
                      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_268:
                      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                      if ( this )
                      {
                        if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
                        {
                          v125 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                          UnityEngine_WaitForEndOfFrame___ctor(v125, 0LL);
                          v4->fields.__2__current = (Il2CppObject *)v125;
                          v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1B88554(v15, (int32_t)v125, v126, v127);
                          v18 = 35;
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
                        if ( v4->fields._isLoad_5__4 )
                        {
                          if ( !SoundManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                          if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9296/*"NOW_LOADING"*/, 0LL) )
                          {
                            if ( !SoundManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                            SoundManager__fadeoutBgm(1.0, 0LL);
                            v128 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
                            UnityEngine_WaitForSeconds___ctor(v128, 1.0, 0LL);
                            v4->fields.__2__current = (Il2CppObject *)v128;
                            v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                            sub_1B88554(v15, (int32_t)v128, v129, v130);
                            v18 = 36;
                            goto LABEL_414;
                          }
LABEL_284:
                          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                        }
                        else
                        {
                          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode(
                                                                               (CommonUI_o *)this,
                                                                               3,
                                                                               0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( this )
                            {
                              CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_341:
                              v169 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                              UnityEngine_WaitForEndOfFrame___ctor(v169, 0LL);
                              v4->fields.__2__current = (Il2CppObject *)v169;
                              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                              sub_1B88554(v15, (int32_t)v169, v170, v171);
                              v18 = 37;
                              goto LABEL_414;
                            }
                            goto LABEL_416;
                          }
                        }
                        if ( _4__this )
                        {
                          ManagementManager__BuildInfoOff(_4__this, method);
                          v4->fields.__2__current = 0LL;
                          v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1B88554(v15, 0, v131, v132);
                          v18 = 38;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_300:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v149 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v149, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v149;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)v149, v150, v151);
              v18 = 21;
              goto LABEL_414;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this )
            {
              if ( this )
              {
                AssetManager__DownloadAssetStorageAttribute(
                  (AssetManager_o *)this,
                  (System_String_o *)StringLiteral_12475/*"SYSTEM"*/,
                  _4__this->fields.downloadParallelMax,
                  0LL);
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                if ( AssetManager__getDownloadSize(0LL) >= 1 )
                {
                  v142 = ManagerConfig_TypeInfo;
                  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                    v142 = ManagerConfig_TypeInfo;
                  }
                  if ( v142->static_fields->UseStandaloneAsset )
                  {
                    v4->fields._isLoad_5__4 = 1;
                    if ( !SoundManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    SoundManager__playBgm((System_String_o *)StringLiteral_9296/*"NOW_LOADING"*/, 0LL);
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_314:
                      v143 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v143, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v143;
                      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B88554(v15, (int32_t)v143, v144, v145);
                      v18 = 22;
                      goto LABEL_414;
                    }
                    goto LABEL_416;
                  }
LABEL_146:
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                  if ( AssetManager__getDownloadSize(0LL) >= 1 )
                  {
                    v79 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v79, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v79;
                    v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B88554(v15, (int32_t)v79, v80, v81);
                    v18 = 23;
                    goto LABEL_414;
                  }
                }
LABEL_315:
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                AssetManager__SetOnlineStatus(0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( this )
                {
                  NetworkManager__SetServerSetting_38454792((NetworkManager_o *)this, method);
                  v146 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
                  UnityEngine_WaitForSeconds___ctor(v146, 0.1, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v146;
                  v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B88554(v15, (int32_t)v146, v147, v148);
                  v18 = 24;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v4->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_4A5A9F9 )
      {
        sub_1B885B0(&LogoMain_TypeInfo);
        byte_4A5A9F9 = 1;
      }
      v82 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v82 = LogoMain_TypeInfo;
      }
      if ( !v82->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9296/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v83 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v83, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v83;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v83, v84, v85);
      v18 = 27;
      goto LABEL_414;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_295:
      v139 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v139, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v139;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v139, v140, v141);
      v18 = 28;
      goto LABEL_414;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_295;
      v86 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v86 = (_QWORD *)sub_1B885C8(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v87 = (System_Reflection_MethodBase_o *)sub_1B88594(v86, v86[4]);
      OverwriteAssetSoundName__PlaySystemSe(v87, 0, v88);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_341;
      v89 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v89 = (_QWORD *)sub_1B885C8(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v90 = (System_Reflection_MethodBase_o *)sub_1B88594(v89, v89[4]);
      OverwriteAssetSoundName__PlaySystemSe(v90, 0, v91);
      goto LABEL_284;
    case 0x26:
      p_fields->__1__state = -1;
      v92 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v92 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v92->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        v94 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v94);
        OptionManager__SetNotiffication(Notiffication, 1, v96);
        v97 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v97 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v97->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v93);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v98);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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