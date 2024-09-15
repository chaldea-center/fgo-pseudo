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

  if ( (byte_4A2D6D6 & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager_TypeInfo, v1);
    sub_1B761C0(&StringLiteral_8028/*"IsNotificationStatusSend"*/, v4);
    sub_1B761C0(&StringLiteral_8040/*"IsReBootCacheClearKey"*/, v5);
    sub_1B761C0(&StringLiteral_20898/*"ja-JP"*/, v6);
    sub_1B761C0(&StringLiteral_24881/*"yyyy年MM月dd日HH時mm分"*/, v7);
    byte_4A2D6D6 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8028/*"IsNotificationStatusSend"*/;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8028/*"IsNotificationStatusSend"*/,
    v2,
    v3);
  v8 = StringLiteral_8040/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8040/*"IsReBootCacheClearKey"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->RebootCacheClearKey, v8, v10, v11);
  v12 = StringLiteral_24881/*"yyyy年MM月dd日HH時mm分"*/;
  v13 = ManagementManager_TypeInfo->static_fields;
  v13->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24881/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v13->DATE_TIME_DISP_FORMAT, v12, v14, v15);
  v16 = StringLiteral_20898/*"ja-JP"*/;
  v17 = ManagementManager_TypeInfo->static_fields;
  v17->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20898/*"ja-JP"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v17->DEFAULT_CULTURE_NAME, v16, v18, v19);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A2D6D5 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_4A2D6D5 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3712994 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  if ( (byte_4A2D6C0 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1B761C0(&string___TypeInfo, v8);
    sub_1B761C0(&StringLiteral_837/*"):"*/, v9);
    sub_1B761C0(&StringLiteral_6724/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1B761C0(&StringLiteral_796/*"(ratio: "*/, v11);
    byte_4A2D6C0 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6724/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1B76268(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v12, v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v17 = StringLiteral_796/*"(ratio: "*/;
      v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_796/*"(ratio: "*/;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v14->fields.AvalonSceneManager, v17, v15, v16);
      this = (ManagementManager_o *)System_Single__ToString(v18, (const MethodInfo *)&v28);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1B76164((ServantStatusBattleListViewItem_o *)&v14->fields.debugInfoRootObject, (int32_t)this, v19, v20),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v23 = StringLiteral_837/*"):"*/,
            v14->fields.statusLabel = (struct UILabel_o *)StringLiteral_837/*"):"*/,
            sub_1B76164((ServantStatusBattleListViewItem_o *)&v14->fields.statusLabel, v23, v21, v22),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1B76424(this, errorText);
      }
      v14->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1B76164(
        (ServantStatusBattleListViewItem_o *)&v14->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v24,
        v25);
      v26 = (Il2CppObject *)System_String__Concat_61548588((System_String_array *)v14, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v26, 0LL);
      return;
    }
LABEL_19:
    sub_1B7641C(this, errorText);
  }
  v27 = (Il2CppObject *)System_String__Concat_61535060(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v27, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A2D6BC & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_4A2D6BC = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_37128E8 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4A2D6D3 & 1) == 0 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, boot);
    byte_4A2D6D3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4A2D6D2 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, method);
    byte_4A2D6D2 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1B7641C(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4A2D6BA & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager_TypeInfo, v1);
    byte_4A2D6BA = 1;
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

  if ( (byte_4A2D6C8 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_4A2D6C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4A2D6C7 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4A2D6C7 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69081364(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4A2D6C6 & 1) != 0 )
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
    sub_1B761C0(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4A2D6C6 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69081364(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A2D6C3 & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, method);
    byte_4A2D6C3 = 1;
  }
  v3 = sub_1B7640C(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4A2D6CF & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager_TypeInfo, method);
    byte_4A2D6CF = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A2D14B )
  {
    sub_1B761C0(&ManagementManager_TypeInfo, method);
    byte_4A2D14B = 1;
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

  if ( (byte_4A2D6D0 & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, method);
    sub_1B761C0(&NetworkManager_TypeInfo, v2);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_4A2D6D0 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v7);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4A2D6C1 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24066/*"true"*/, message);
    byte_4A2D6C1 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_24066/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagementManager_c *v3; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4A2D6D4 & 1) == 0 )
  {
    sub_1B761C0(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1B761C0(&ManagementManager_TypeInfo, v2);
    byte_4A2D6D4 = 1;
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

  if ( (byte_4A2D6BB & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager_TypeInfo, v1);
    byte_4A2D6BB = 1;
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

  if ( (byte_4A2D6BD & 1) == 0 )
  {
    sub_1B761C0(&AndroidUtil_TypeInfo, method);
    sub_1B761C0(&UnityEngine_Application_TypeInfo, v3);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v4);
    sub_1B761C0(&System_Type_TypeInfo, v5);
    sub_1B761C0(&UnityGamingServicesBehaviour_var, v6);
    byte_4A2D6BD = 1;
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
    sub_1B7641C(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4A2D6D1 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1B761C0(&UnityEngine_Application_TypeInfo, method);
    byte_4A2D6D1 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_69081364(0LL);
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

  if ( (byte_4A2D6CE & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager_TypeInfo, result);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4A2D6CE = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v6);
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
  _BOOL8 _37510088; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_4A2D6CD & 1) == 0 )
  {
    sub_1B761C0(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1B761C0(&ManagerConfig_TypeInfo, v4);
    sub_1B761C0(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B761C0(&TutorialFlag_TypeInfo, v8);
    byte_4A2D6CD = 1;
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
  _37510088 = TutorialFlag__Get_37510088(102, 0LL);
  if ( _37510088 )
  {
LABEL_9:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B7641C(0LL, v15);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_37510088, v11, v12);
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

  if ( (byte_4A2D6CB & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager_TypeInfo, result);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4A2D6CB = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v7);
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

  if ( (byte_4A2D6CA & 1) == 0 )
  {
    sub_1B761C0(&Method_ManagementManager_callbackTopHome__, result);
    sub_1B761C0(&ManagerConfig_TypeInfo, v4);
    sub_1B761C0(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B761C0(&TutorialFlag_TypeInfo, v8);
    byte_4A2D6CA = 1;
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
  if ( TutorialFlag__Get_37510088(102, 0LL) )
  {
LABEL_9:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B7641C(0LL, v14);
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

  if ( (byte_4A2D6BE & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1B761C0(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_4643/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1B761C0(&StringLiteral_9149/*"MovieRoot"*/, v7);
    byte_4A2D6BE = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4643/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_1B7640C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_9149/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  v11,
                  (const MethodInfo_2EB18D0 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_1B76164(
            (ServantStatusBattleListViewItem_o *)&this->fields._videoPlayer_k__BackingField,
            (int32_t)v14,
            v15,
            v16),
          !v10)
      || (v17 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v17) )
    {
      sub_1B7641C(Component_object, v13);
    }
    AvalonVideoPlayer__initialize(v17, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_33557996(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A2D6B8 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_4A2D6B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v3);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4A2D6B9 & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager_TypeInfo, v1);
    byte_4A2D6B9 = 1;
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

  if ( (byte_4A2D6BF & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, isLogin);
    sub_1B761C0(&CTouch_TypeInfo, v7);
    sub_1B761C0(&CommonEffectManager_TypeInfo, v8);
    sub_1B761C0(&System_GC_TypeInfo, v9);
    sub_1B761C0(&ManagementManager_TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v11);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v14);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v15);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v17);
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v18);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    sub_1B761C0(&SoundManager_TypeInfo, v20);
    byte_4A2D6BF = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_27:
      sub_1B7641C(Instance, v23);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_62581128(0LL);
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v24 )
      sub_1B7641C(0LL, v25);
    AdManager__Initialize((AdManager_o *)v24, 2, 0LL);
    FirebaseScript__Initialize(v26);
    v28 = ManagementManager__startCheckAll(this, 1, isLogin, v27);
    UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
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

  if ( (byte_4A2D6C9 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4A2D6C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1B7640C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_1B7641C(v7, v8);
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

  if ( (byte_4A2D6CC & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4A2D6CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1B7640C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_1B7641C(v7, v8);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v9);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1B76164(
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

  if ( (byte_4A2D6C2 & 1) == 0 )
  {
    sub_1B761C0(&ManagementManager__startCheckAll_d__33_TypeInfo, isReboot);
    byte_4A2D6C2 = 1;
  }
  v7 = isLogin;
  v8 = sub_1B7640C(ManagementManager__startCheckAll_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A2D6C4 & 1) == 0 )
  {
    sub_1B761C0(&DataManager_TypeInfo, method);
    byte_4A2D6C4 = 1;
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

  if ( (byte_4A2D6C5 & 1) == 0 )
  {
    sub_1B761C0(&DataManager_TypeInfo, method);
    sub_1B761C0(&ScrTerminalListTop_TypeInfo, v2);
    sub_1B761C0(&ServantCommentManager_TypeInfo, v3);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v4);
    byte_4A2D6C5 = 1;
  }
  MovieFileMerge__Delete_37570580(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2B16B )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v6);
    byte_4A2B16B = 1;
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

  if ( (byte_4A2D6D8 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, method);
    sub_1B761C0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4A2D6D8 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B7641C(0LL, v10);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v11 )
      sub_1B7641C(0LL, v12);
    AdManager__Initialize((AdManager_o *)v11, 1, 0LL);
    FirebaseScript__Initialize(v13);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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

  if ( (byte_4A2D6D7 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, flag);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B761C0(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__, v6);
    sub_1B761C0(&ManagementManager___c__DisplayClass33_1_TypeInfo, v7);
    byte_4A2D6D7 = 1;
  }
  v8 = sub_1B7640C(ManagementManager___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B7641C(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30419608((CommonUI_o *)Instance, v14, 0LL);
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
    sub_1B7641C(this, method);
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
  ManagementManager__startCheckAll_d__33_o *v4; // x24
  __int64 v5; // x1
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
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  const MethodInfo_371257C **v72; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v75; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x24
  int32_t v77; // w2
  int32_t v78; // w3
  bool result; // w0
  LocalizationManager_c *v80; // x0
  System_Collections_IEnumerator_o *v81; // x0
  ServantStatusBattleListViewItem_o *v82; // x24
  int32_t v83; // w2
  int32_t v84; // w3
  int v85; // w8
  System_Collections_IEnumerator_o *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  UnityEngine_WaitForEndOfFrame_o *v89; // x20
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t v92; // w2
  int32_t v93; // w3
  ManagementManager__startCheckAll_d__33_o *v94; // x21
  int32_t v95; // w1
  int32_t v96; // w2
  int32_t v97; // w3
  int32_t v98; // w1
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w1
  int32_t v102; // w2
  int32_t v103; // w3
  EncryptedPlayerPrefs_c *v104; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v106; // x20
  int32_t v107; // w2
  int32_t v108; // w3
  const MethodInfo *v109; // x1
  struct ManagementManager___c__DisplayClass33_0_o *_8__1; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v112; // x21
  UnityEngine_WaitForEndOfFrame_o *v113; // x20
  int32_t v114; // w2
  int32_t v115; // w3
  NetworkManager_ResultCallbackFunc_o *v116; // x21
  UnityEngine_WaitForEndOfFrame_o *v117; // x20
  int32_t v118; // w2
  int32_t v119; // w3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v121; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  DataManager_c *v126; // x0
  UnityEngine_Coroutine_o *v127; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  DataManager_c *v130; // x0
  int32_t updateMasterResult_5__9; // w8
  const MethodInfo *v132; // x1
  Il2CppObject *v133; // x21
  System_String_o *v134; // x22
  ErrorDialog_ClickDelegate_o *v135; // x23
  UnityEngine_WaitForEndOfFrame_o *v136; // x20
  int32_t v137; // w2
  int32_t v138; // w3
  UnityEngine_WaitForEndOfFrame_o *v139; // x20
  int32_t v140; // w2
  int32_t v141; // w3
  UnityEngine_WaitForEndOfFrame_o *v142; // x20
  int32_t v143; // w2
  int32_t v144; // w3
  __int64 v145; // x1
  LogoMain_c *v146; // x0
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  int32_t v148; // w2
  int32_t v149; // w3
  _QWORD *v150; // x0
  System_Reflection_MethodBase_o *v151; // x0
  _QWORD *v152; // x0
  System_Reflection_MethodBase_o *v153; // x0
  ManagementManager_c *v154; // x0
  const MethodInfo *v155; // x2
  bool Notiffication; // w0
  ManagementManager_c *v157; // x0
  const MethodInfo *v158; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v160; // x0
  UnityEngine_Coroutine_o *v161; // x0
  int32_t v162; // w2
  int32_t v163; // w3
  LocalizationManager_c *v164; // x0
  LocalizationManager_c *v165; // x0
  UnityEngine_WaitForEndOfFrame_o *v166; // x20
  int32_t v167; // w2
  int32_t v168; // w3
  FSUtility_c *v169; // x0
  UnityEngine_WaitForEndOfFrame_o *v170; // x20
  int32_t v171; // w2
  int32_t v172; // w3
  UnityEngine_WaitForEndOfFrame_o *v173; // x20
  int32_t v174; // w2
  int32_t v175; // w3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v177; // x20
  int32_t v178; // w2
  int32_t v179; // w3
  UnityEngine_WaitForEndOfFrame_o *v180; // x20
  int32_t v181; // w2
  int32_t v182; // w3
  UnityEngine_WaitForEndOfFrame_o *v183; // x20
  int32_t v184; // w2
  int32_t v185; // w3
  UnityEngine_WaitForEndOfFrame_o *v186; // x20
  int32_t v187; // w2
  int32_t v188; // w3
  UnityEngine_WaitForSeconds_o *v189; // x20
  int32_t v190; // w2
  int32_t v191; // w3
  int32_t v192; // w2
  int32_t v193; // w3
  UnityEngine_WaitForEndOfFrame_o *v194; // x20
  int32_t v195; // w2
  int32_t v196; // w3
  UnityEngine_WaitForEndOfFrame_o *v197; // x20
  int32_t v198; // w2
  int32_t v199; // w3
  UnityEngine_WaitForEndOfFrame_o *v200; // x20
  int32_t v201; // w2
  int32_t v202; // w3
  ManagerConfig_c *v203; // x0
  UnityEngine_WaitForEndOfFrame_o *v204; // x20
  int32_t v205; // w2
  int32_t v206; // w3
  UnityEngine_WaitForSeconds_o *v207; // x20
  int32_t v208; // w2
  int32_t v209; // w3
  UnityEngine_WaitForEndOfFrame_o *v210; // x20
  int32_t v211; // w2
  int32_t v212; // w3
  UnityEngine_WaitForEndOfFrame_o *v213; // x20
  int32_t v214; // w2
  int32_t v215; // w3
  ManagementManager_c *v216; // x0
  UnityEngine_Coroutine_o *v217; // x0
  Il2CppObject **v218; // x19
  int32_t v219; // w2
  int32_t v220; // w3
  int v221; // w8
  const MethodInfo *v222; // x1
  Il2CppObject *v223; // x21
  System_String_o *v224; // x22
  ErrorDialog_ClickDelegate_o *v225; // x23
  UnityEngine_WaitForEndOfFrame_o *v226; // x20
  int32_t v227; // w2
  int32_t v228; // w3
  int32_t v229; // w2
  int32_t v230; // w3
  UnityEngine_WaitForEndOfFrame_o *v231; // x20
  int32_t v232; // w2
  int32_t v233; // w3
  UnityEngine_WaitForEndOfFrame_o *v234; // x20
  int32_t v235; // w2
  int32_t v236; // w3
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v240; // x0
  ManagerConfig_c *v241; // x0
  const MethodInfo_371257C **v242; // x26
  const MethodInfo *v243; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v245; // x22
  ErrorDialog_ClickDelegate_o *v246; // x23
  UnityEngine_WaitForEndOfFrame_o *v247; // x20
  int32_t v248; // w2
  int32_t v249; // w3
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v251; // x21
  UnityEngine_WaitForEndOfFrame_o *v252; // x20
  int32_t v253; // w2
  int32_t v254; // w3
  ManagementManager_c *v255; // x0
  Il2CppObject *v256; // x21
  ManagementManager__startCheckAll_d__33_o *v257; // x19
  ServantStatusBattleListViewItem_o *p__8__1; // x24
  int32_t v259; // w2
  int32_t v260; // w3
  const MethodInfo_371257C **v261; // x28
  const MethodInfo *v262; // x1
  Il2CppObject *v263; // x21
  System_String_o *v264; // x22
  const MethodInfo *v265; // x1
  System_String_o *v266; // x23
  const MethodInfo *v267; // x1
  System_String_o *v268; // x25
  const MethodInfo *v269; // x1
  System_String_o *v270; // x0
  Il2CppObject *klass; // x27
  System_String_o *v272; // x24
  CommonConfirmDialog_ClickDelegate_o *v273; // x26
  Il2CppObject *v274; // x21
  const MethodInfo *v275; // x1
  System_String_o *v276; // x21
  System_String_o *DispFriendCode; // x22
  const MethodInfo *v278; // x1
  const MethodInfo *v279; // x1
  Il2CppObject *v280; // x22
  System_String_o *v281; // x23
  System_String_o *v282; // x0
  System_String_o *v283; // x19
  Il2CppObject *v284; // x2
  System_String_o *v285; // x21
  ErrorDialog_ClickDelegate_o *v286; // x23
  ManagementManager_c *v287; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v289; // w2
  int32_t v290; // w3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__33_o *v292; // [xsp+40h] [xbp-80h]
  System_Enum_o v293; // [xsp+48h] [xbp-78h] BYREF
  int32_t v294; // [xsp+58h] [xbp-68h]

  v4 = this;
  if ( (byte_4A2D6D9 & 1) == 0 )
  {
    sub_1B761C0(&AndroidUtil_TypeInfo, method);
    sub_1B761C0(&UnityEngine_Application_TypeInfo, v5);
    sub_1B761C0(&AssetManager_TypeInfo, v6);
    sub_1B761C0(&AtlasManager_TypeInfo, v7);
    sub_1B761C0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B761C0(&ErrorDialog_ClickDelegate_TypeInfo, v9);
    sub_1B761C0(&CommonServicePluginScript_TypeInfo, v10);
    sub_1B761C0(&DataManager_TypeInfo, v11);
    sub_1B761C0(&EncryptedPlayerPrefs_TypeInfo, v12);
    sub_1B761C0(&FSUtility_TypeInfo, v13);
    sub_1B761C0(&ImageLimitCount_TypeInfo, v14);
    sub_1B761C0(&LocalizationManager_TypeInfo, v15);
    sub_1B761C0(&LogoMain_TypeInfo, v16);
    sub_1B761C0(&Method_ManagementManager_EndLogDialog__, v17);
    sub_1B761C0(&Method_ManagementManager_EndQuitDialog__, v18);
    sub_1B761C0(&Method_ManagementManager_EndRetryDialog__, v19);
    sub_1B761C0(&Method_ManagementManager_callbackAccountRegist__, v20);
    sub_1B761C0(&Method_ManagementManager_callbackTopGameData__, v21);
    sub_1B761C0(&ManagementManager_TypeInfo, v22);
    sub_1B761C0(&ManagerConfig_TypeInfo, v23);
    sub_1B761C0(&Method_NetworkManager_getRequest_AccountRegistRequest___, v24);
    sub_1B761C0(&Method_NetworkManager_getRequest_TopGameDataRequest___, v25);
    sub_1B761C0(&NetworkManager_TypeInfo, v26);
    sub_1B761C0(&OptionManager_TypeInfo, v27);
    sub_1B761C0(&PurchaseBehaviour_TypeInfo, v28);
    sub_1B761C0(&NetworkManager_ReadResult_TypeInfo, v29);
    sub_1B761C0(&ResolutionManager_TypeInfo, v30);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v31);
    sub_1B761C0(&ServantCommentManager_TypeInfo, v32);
    sub_1B761C0(&SignedData_TypeInfo, v33);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v34);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v36);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v38);
    sub_1B761C0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v39);
    sub_1B761C0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v40);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v41);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v42);
    sub_1B761C0(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v43);
    sub_1B761C0(&SoundManager_TypeInfo, v44);
    sub_1B761C0(&string___TypeInfo, v45);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v46);
    sub_1B761C0(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__, v47);
    sub_1B761C0(&ManagementManager___c__DisplayClass33_0_TypeInfo, v48);
    sub_1B761C0(&Method_ManagementManager__startCheckAll_d__33_MoveNext__, v49);
    sub_1B761C0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v50);
    sub_1B761C0(&UnityEngine_WaitForSeconds_TypeInfo, v51);
    sub_1B761C0(&StringLiteral_7369/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v52);
    sub_1B761C0(&StringLiteral_9293/*"NOW_LOADING"*/, v53);
    sub_1B761C0(&StringLiteral_9223/*"NETWORK_ERROR_DISK_FULL"*/, v54);
    sub_1B761C0(&StringLiteral_6351/*"F39UThNh"*/, v55);
    sub_1B761C0(&StringLiteral_7372/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v56);
    sub_1B761C0(&StringLiteral_8844/*"Management"*/, v57);
    sub_1B761C0(&StringLiteral_7370/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v58);
    sub_1B761C0(&StringLiteral_9567/*"NotifyRequestPermissionsResultFromPlugin"*/, v59);
    sub_1B761C0(&StringLiteral_7368/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v60);
    sub_1B761C0(&StringLiteral_5119/*"DataServerFolderName"*/, v61);
    sub_1B761C0(&StringLiteral_16756/*"android.permission.POST_NOTIFICATIONS"*/, v62);
    sub_1B761C0(&StringLiteral_9231/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v63);
    sub_1B761C0(&StringLiteral_9224/*"NETWORK_ERROR_FIEND_CODE"*/, v64);
    sub_1B761C0(&StringLiteral_12471/*"SYSTEM"*/, v65);
    sub_1B761C0(&StringLiteral_1/*""*/, v66);
    sub_1B761C0(&StringLiteral_20760/*"ioqrk4Om"*/, v67);
    sub_1B761C0(&StringLiteral_1474/*"2pC0bIYM"*/, v68);
    sub_1B761C0(&StringLiteral_9225/*"NETWORK_ERROR_READ_AUTH"*/, v69);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_1B761C0(&StringLiteral_9232/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v70);
    byte_4A2D6D9 = 1;
  }
  p_fields = &v4->fields;
  v72 = (const MethodInfo_371257C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      isReboot = v4->fields.isReboot;
      v4->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v75 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v4->fields.__2__current = (Il2CppObject *)v75;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(p__2__current, (int32_t)v75, v77, v78);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_7:
      if ( !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData__RefillSigningData(3, 0LL);
      v80 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__Initialize((const MethodInfo *)v80);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initialize(0LL);
      if ( !_4__this )
        goto LABEL_416;
      v81 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v4->fields.__2__current = (Il2CppObject *)v81;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v82, (int32_t)v81, v83, v84);
      v85 = 2;
      goto LABEL_414;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      v86 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v4->fields.__2__current = (Il2CppObject *)v86;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v82, (int32_t)v86, v87, v88);
      v85 = 3;
      goto LABEL_414;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( !v4->fields.isReboot )
      {
LABEL_30:
        this = (ManagementManager__startCheckAll_d__33_o *)sub_1B76268(string___TypeInfo, 3LL);
        if ( !this )
          goto LABEL_416;
        v94 = this;
        if ( !LODWORD(this->fields.__2__current)
          || (v95 = StringLiteral_1474/*"2pC0bIYM"*/,
              *(_QWORD *)&this->fields.isReboot = StringLiteral_1474/*"2pC0bIYM"*/,
              sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.isReboot, v95, v92, v93),
              LODWORD(v94->fields.__2__current) <= 1)
          || (v98 = StringLiteral_6351/*"F39UThNh"*/,
              v94->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6351/*"F39UThNh"*/,
              sub_1B76164((ServantStatusBattleListViewItem_o *)&v94->fields.__4__this, v98, v96, v97),
              LODWORD(v94->fields.__2__current) <= 2) )
        {
          sub_1B76424(this, method);
        }
        v101 = StringLiteral_20760/*"ioqrk4Om"*/;
        v94->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)StringLiteral_20760/*"ioqrk4Om"*/;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&v94->fields.__8__1, v101, v99, v100);
        v104 = EncryptedPlayerPrefs_TypeInfo;
        if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
          v104 = EncryptedPlayerPrefs_TypeInfo;
        }
        static_fields = v104->static_fields;
        static_fields->keys = (struct System_String_array *)v94;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->keys, (int32_t)v94, v102, v103);
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
                                                                 (System_String_o *)StringLiteral_16756/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !_4__this )
                goto LABEL_416;
              _4__this->fields.isPermissionRequesting = 1;
              AndroidPermissionManager__RequestPermission(
                (System_String_o *)StringLiteral_16756/*"android.permission.POST_NOTIFICATIONS"*/,
                (System_String_o *)StringLiteral_8844/*"Management"*/,
                (System_String_o *)StringLiteral_9567/*"NotifyRequestPermissionsResultFromPlugin"*/,
                0LL);
LABEL_44:
              if ( _4__this->fields.isPermissionRequesting )
              {
                v106 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v106, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v106;
                v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B76164(v82, (int32_t)v106, v107, v108);
                v85 = 5;
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
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
          if ( this )
          {
            LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
            v234 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v234, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v234;
            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B76164(v82, (int32_t)v234, v235, v236);
            v85 = 6;
            goto LABEL_414;
          }
          goto LABEL_416;
        }
LABEL_47:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
        v4->fields._readResult_5__2 = (int)this;
        if ( !_4__this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__33_o *)_4__this->fields.debugInfoRootObject;
        if ( !this )
          goto LABEL_416;
        v292 = v4;
        this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
        if ( !this )
          goto LABEL_416;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        ManagementManager__BuildInfoOff(_4__this, v109);
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
          v240 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
          if ( FreeSize < v240 )
            FreeSize = v240;
          if ( FreeSize < 1 )
            break;
          v241 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v241 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v241->static_fields->LIMIT_FREE_SIZE )
            break;
          _4__this->fields.isErrorDialog = 1;
          v242 = v72;
          Instance = SingletonMonoBehaviour_object___get_Instance(*v72);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v245 = LocalizationManager__Get((System_String_o *)StringLiteral_9223/*"NETWORK_ERROR_DISK_FULL"*/, v243);
          v246 = (ErrorDialog_ClickDelegate_o *)sub_1B7640C(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v246,
            (Il2CppObject *)_4__this,
            Method_ManagementManager_EndRetryDialog__,
            0LL);
          if ( !Instance )
            goto LABEL_416;
          CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v245, v246, 0, 0LL);
          v72 = v242;
LABEL_364:
          if ( _4__this->fields.isErrorDialog )
          {
            v247 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v247, 0LL);
            v292->fields.__2__current = (Il2CppObject *)v247;
            v218 = &v292->fields.__2__current;
            sub_1B76164((ServantStatusBattleListViewItem_o *)&v292->fields.__2__current, (int32_t)v247, v248, v249);
            v221 = 7;
            goto LABEL_373;
          }
        }
        readResult_5__2 = v292->fields._readResult_5__2;
        if ( readResult_5__2 )
        {
          if ( readResult_5__2 == 1 )
          {
            _4__this->fields.isReadAuth = 0;
            v251 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v251,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_callbackAccountRegist__,
              0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                                 v251,
                                                                 (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
            if ( this )
            {
              AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_372:
              v252 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v252, 0LL);
              v292->fields.__2__current = (Il2CppObject *)v252;
              v218 = &v292->fields.__2__current;
              sub_1B76164((ServantStatusBattleListViewItem_o *)&v292->fields.__2__current, (int32_t)v252, v253, v254);
              v221 = 8;
LABEL_373:
              *((_DWORD *)v218 - 2) = v221;
              return 1;
            }
            goto LABEL_416;
          }
          v274 = (Il2CppObject *)StringLiteral_1/*""*/;
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v276 = LocalizationManager__Get((System_String_o *)StringLiteral_9224/*"NETWORK_ERROR_FIEND_CODE"*/, v275);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
              v280 = SingletonMonoBehaviour_object___get_Instance(*v72);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v281 = LocalizationManager__Get((System_String_o *)StringLiteral_9225/*"NETWORK_ERROR_READ_AUTH"*/, v279);
              v293.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
              v293.monitor = (void *)-1LL;
              v294 = v292->fields._readResult_5__2;
              v282 = System_Enum__ToString(&v293, 0LL);
              v283 = (System_String_o *)StringLiteral_1/*""*/;
              if ( v282 )
                v284 = (Il2CppObject *)v282;
              else
                v284 = (Il2CppObject *)StringLiteral_1/*""*/;
              v285 = System_String__Format_61549432(v281, v274, v284, 0LL);
              v286 = (ErrorDialog_ClickDelegate_o *)sub_1B7640C(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v286,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_EndQuitDialog__,
                0LL);
              if ( v280 )
              {
                CommonUI__OpenErrorDialog((CommonUI_o *)v280, v283, v285, v286, 0, 0LL);
                return 0;
              }
              goto LABEL_416;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v276 = LocalizationManager__Get((System_String_o *)StringLiteral_9224/*"NETWORK_ERROR_FIEND_CODE"*/, v278);
          }
          v274 = (Il2CppObject *)System_String__Format(v276, (Il2CppObject *)DispFriendCode, 0LL);
          goto LABEL_399;
        }
LABEL_374:
        v4 = v292;
        v292->fields._isCacheCheck_5__3 = 0;
LABEL_375:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        DataManager__Initialize((DataManager_o *)this, 0LL);
        if ( !v4->fields.isReboot && !v4->fields._isCacheCheck_5__3 )
        {
          v4->fields._isCacheCheck_5__3 = 1;
          v255 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v255 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v255->static_fields->RebootCacheClearKey, 0LL) )
          {
            v256 = (Il2CppObject *)sub_1B7640C(ManagementManager___c__DisplayClass33_0_TypeInfo);
            System_Object___ctor(v256, 0LL);
            v257 = v4;
            v4->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v256;
            p__8__1 = (ServantStatusBattleListViewItem_o *)&v4->fields.__8__1;
            sub_1B76164(p__8__1, (int32_t)v256, v259, v260);
            if ( !p__8__1->klass )
              goto LABEL_416;
            LOWORD(p__8__1->klass->_1.name) = 0;
            v261 = v72;
            v263 = SingletonMonoBehaviour_object___get_Instance(*v72);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v264 = LocalizationManager__Get((System_String_o *)StringLiteral_7372/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v262);
            v266 = LocalizationManager__Get((System_String_o *)StringLiteral_7370/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v265);
            v268 = LocalizationManager__Get((System_String_o *)StringLiteral_7369/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v267);
            v270 = LocalizationManager__Get((System_String_o *)StringLiteral_7368/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v269);
            klass = (Il2CppObject *)p__8__1->klass;
            v272 = v270;
            v273 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v273,
              klass,
              Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
              0LL);
            if ( !v263 )
              goto LABEL_416;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v263,
              v264,
              v266,
              v268,
              v272,
              v273,
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
            v72 = v261;
            v4 = v257;
LABEL_60:
            _8__1 = v4->fields.__8__1;
            if ( !_8__1 )
              goto LABEL_416;
            if ( !_8__1->fields.confirmed )
            {
              v213 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v213, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v213;
              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B76164(v82, (int32_t)v213, v214, v215);
              v85 = 9;
              goto LABEL_414;
            }
            if ( _8__1->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_416;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v4->fields.__8__1 = 0LL;
            sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, 0, v2, v3);
          }
          else
          {
            v287 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v287 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v287->static_fields->RebootCacheClearKey, 1, 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
          }
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance(*v72);
        if ( this )
        {
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              started = UnityEngine_MonoBehaviour__StartCoroutine_69272680(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          (System_Collections_IEnumerator_o *)this,
                          0LL);
              v4->fields.__2__current = (Il2CppObject *)started;
              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B76164(v82, (int32_t)started, v289, v290);
              v85 = 10;
              goto LABEL_414;
            }
          }
        }
LABEL_416:
        sub_1B7641C(this, method);
      }
      v89 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v89, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v89;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v82, (int32_t)v89, v90, v91);
      v85 = 4;
LABEL_414:
      *(_DWORD *)&v82[-1].fields.isMine = v85;
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
      v292 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_364;
    case 8:
      v292 = v4;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A2D76D )
      {
        sub_1B761C0(&DataManager_TypeInfo, method);
        byte_4A2D76D = 1;
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
      v112 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v112,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v112,
                                                           (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v113 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v113, 0LL);
      v4->fields._waitForServerTime_5__7 = v113;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v113, v114, v115);
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
        v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(v82, (int32_t)waitForServerTime_5__7, v2, v3);
        v85 = 11;
        goto LABEL_414;
      }
      _4__this->fields.isReadGameData = 0;
      v116 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v116,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v116,
                                                           (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( this )
      {
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v117 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v117, 0LL);
        v4->fields._wait_5__8 = v117;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, (int32_t)v117, v118, v119);
LABEL_200:
        wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
        v4->fields.__2__current = wait_5__8;
        v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(v82, (int32_t)wait_5__8, v2, v3);
        v85 = 12;
        goto LABEL_414;
      }
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_200;
      v121 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A2B7FF )
      {
        sub_1B761C0(&NetworkManager_TypeInfo, method);
        byte_4A2B7FF = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v121 )
        goto LABEL_416;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v121,
        (System_String_o *)StringLiteral_5119/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v123 = UnityEngine_MonoBehaviour__StartCoroutine_69272680(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   MasterData,
                   0LL);
          v4->fields.__2__current = (Il2CppObject *)v123;
          v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B76164(v82, (int32_t)v123, v124, v125);
          v85 = 13;
          goto LABEL_414;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v127 = UnityEngine_MonoBehaviour__StartCoroutine_69272680(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v127;
            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B76164(v82, (int32_t)v127, v128, v129);
            v85 = 15;
            goto LABEL_414;
          }
        }
      }
      goto LABEL_416;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A2D76E )
      {
        sub_1B761C0(&DataManager_TypeInfo, method);
        byte_4A2D76E = 1;
      }
      v126 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v126 = DataManager_TypeInfo;
      }
      if ( v126->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v126->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v126);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v197 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v197, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v197;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v82, (int32_t)v197, v198, v199);
      v85 = 14;
      goto LABEL_414;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_375;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A2D76F )
      {
        sub_1B761C0(&DataManager_TypeInfo, method);
        byte_4A2D76F = 1;
      }
      v130 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v130 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v130->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_38274236((NetworkManager_o *)this, method);
          v216 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v216);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v217 = UnityEngine_MonoBehaviour__StartCoroutine_69272680(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v217;
              v218 = &v4->fields.__2__current;
              sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v217, v219, v220);
              v221 = 18;
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
        v133 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v134 = LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v132);
        v135 = (ErrorDialog_ClickDelegate_o *)sub_1B7640C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v135, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v133 )
          goto LABEL_416;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v133,
          (System_String_o *)StringLiteral_1/*""*/,
          v134,
          v135,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v72 = (const MethodInfo_371257C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v136 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v136, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v136;
          v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B76164(v82, (int32_t)v136, v137, v138);
          v85 = 16;
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
      v223 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v224 = LocalizationManager__Get((System_String_o *)StringLiteral_9232/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v222);
      v225 = (ErrorDialog_ClickDelegate_o *)sub_1B7640C(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v225, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v223 )
        goto LABEL_416;
      CommonUI__OpenRetryDialog((CommonUI_o *)v223, (System_String_o *)StringLiteral_1/*""*/, v224, v225, 0, 0LL);
      v72 = (const MethodInfo_371257C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_334:
      if ( _4__this->fields.isErrorDialog )
      {
        v226 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v226, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v226;
        v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(v82, (int32_t)v226, v227, v228);
        v85 = 17;
        goto LABEL_414;
      }
LABEL_336:
      v4->fields._waitForServerTime_5__7 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, 0, v2, v3);
      v4->fields._wait_5__8 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, 0, v229, v230);
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
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      *(_DWORD *)&v82[-1].fields.isMine = -1;
      sub_1B76164(v82, 0, v2, v3);
      v85 = 19;
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
        v139 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v139, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v139;
        v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(v82, (int32_t)v139, v140, v141);
        v85 = 20;
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
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_209:
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( this )
            {
              if ( !BYTE2(this->fields.__8__1) )
              {
                v194 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v194, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v194;
                v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B76164(v82, (int32_t)v194, v195, v196);
                v85 = 25;
                goto LABEL_414;
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
              if ( _4__this )
              {
                if ( this )
                {
                  v160 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                           (AssetManager_o *)this,
                           (System_String_o *)StringLiteral_12471/*"SYSTEM"*/,
                           _4__this->fields.downloadParallelMax,
                           0LL);
                  v161 = UnityEngine_MonoBehaviour__StartCoroutine_69272680(
                           (UnityEngine_MonoBehaviour_o *)_4__this,
                           v160,
                           0LL);
                  v4->fields.__2__current = (Il2CppObject *)v161;
                  v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B76164(v82, (int32_t)v161, v162, v163);
                  v85 = 26;
                  goto LABEL_414;
                }
              }
            }
          }
        }
        else
        {
LABEL_214:
          v164 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LocalizationManager__LoadAssetData((const MethodInfo *)v164);
LABEL_217:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_4A2D771 )
          {
            sub_1B761C0(&LocalizationManager_TypeInfo, method);
            byte_4A2D771 = 1;
          }
          v165 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v165 = LocalizationManager_TypeInfo;
          }
          if ( v165->static_fields->isBusySetAssetData )
          {
            v166 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v166, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v166;
            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B76164(v82, (int32_t)v166, v167, v168);
            v85 = 29;
            goto LABEL_414;
          }
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          FSUtility__LoadAssetData(0LL);
LABEL_228:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          if ( !byte_4A2D772 )
          {
            sub_1B761C0(&FSUtility_TypeInfo, method);
            byte_4A2D772 = 1;
          }
          v169 = FSUtility_TypeInfo;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            v169 = FSUtility_TypeInfo;
          }
          if ( v169->static_fields->isBusySetAssetData )
          {
            v170 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v170, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v170;
            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B76164(v82, (int32_t)v170, v171, v172);
            v85 = 30;
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
            OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, 0LL);
LABEL_244:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( AtlasManager__IsBusyInitialize(0LL) )
            {
              v173 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v173, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v173;
              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B76164(v82, (int32_t)v173, v174, v175);
              v85 = 31;
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
                  v177 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v177, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v177;
                  v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B76164(v82, (int32_t)v177, v178, v179);
                  v85 = 32;
                  goto LABEL_414;
                }
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_257:
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  if ( LOBYTE(this[9].fields.__2__current) )
                  {
                    v180 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v180, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v180;
                    v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B76164(v82, (int32_t)v180, v181, v182);
                    v85 = 33;
                    goto LABEL_414;
                  }
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__initializeAssetStorage(0LL);
LABEL_263:
                  this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                  if ( this )
                  {
                    if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
                    {
                      v183 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v183, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v183;
                      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B76164(v82, (int32_t)v183, v184, v185);
                      v85 = 34;
                      goto LABEL_414;
                    }
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( this )
                    {
                      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_268:
                      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                      if ( this )
                      {
                        if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
                        {
                          v186 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                          UnityEngine_WaitForEndOfFrame___ctor(v186, 0LL);
                          v4->fields.__2__current = (Il2CppObject *)v186;
                          v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1B76164(v82, (int32_t)v186, v187, v188);
                          v85 = 35;
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
                          if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9293/*"NOW_LOADING"*/, 0LL) )
                          {
                            if ( !SoundManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                            SoundManager__fadeoutBgm(1.0, 0LL);
                            v189 = (UnityEngine_WaitForSeconds_o *)sub_1B7640C(UnityEngine_WaitForSeconds_TypeInfo);
                            UnityEngine_WaitForSeconds___ctor(v189, 1.0, 0LL);
                            v4->fields.__2__current = (Il2CppObject *)v189;
                            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                            sub_1B76164(v82, (int32_t)v189, v190, v191);
                            v85 = 36;
                            goto LABEL_414;
                          }
LABEL_284:
                          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                        }
                        else
                        {
                          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode(
                                                                               (CommonUI_o *)this,
                                                                               3,
                                                                               0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( this )
                            {
                              CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_341:
                              v231 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                              UnityEngine_WaitForEndOfFrame___ctor(v231, 0LL);
                              v4->fields.__2__current = (Il2CppObject *)v231;
                              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                              sub_1B76164(v82, (int32_t)v231, v232, v233);
                              v85 = 37;
                              goto LABEL_414;
                            }
                            goto LABEL_416;
                          }
                        }
                        if ( _4__this )
                        {
                          ManagementManager__BuildInfoOff(_4__this, method);
                          v4->fields.__2__current = 0LL;
                          v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1B76164(v82, 0, v192, v193);
                          v85 = 38;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_300:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v210 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v210, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v210;
              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B76164(v82, (int32_t)v210, v211, v212);
              v85 = 21;
              goto LABEL_414;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this )
            {
              if ( this )
              {
                AssetManager__DownloadAssetStorageAttribute(
                  (AssetManager_o *)this,
                  (System_String_o *)StringLiteral_12471/*"SYSTEM"*/,
                  _4__this->fields.downloadParallelMax,
                  0LL);
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                if ( AssetManager__getDownloadSize(0LL) >= 1 )
                {
                  v203 = ManagerConfig_TypeInfo;
                  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                    v203 = ManagerConfig_TypeInfo;
                  }
                  if ( v203->static_fields->UseStandaloneAsset )
                  {
                    v4->fields._isLoad_5__4 = 1;
                    if ( !SoundManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    SoundManager__playBgm((System_String_o *)StringLiteral_9293/*"NOW_LOADING"*/, 0LL);
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_314:
                      v204 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v204, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v204;
                      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B76164(v82, (int32_t)v204, v205, v206);
                      v85 = 22;
                      goto LABEL_414;
                    }
                    goto LABEL_416;
                  }
LABEL_146:
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                  if ( AssetManager__getDownloadSize(0LL) >= 1 )
                  {
                    v142 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v142, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v142;
                    v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B76164(v82, (int32_t)v142, v143, v144);
                    v85 = 23;
                    goto LABEL_414;
                  }
                }
LABEL_315:
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                AssetManager__SetOnlineStatus(0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( this )
                {
                  NetworkManager__SetServerSetting_38274236((NetworkManager_o *)this, method);
                  v207 = (UnityEngine_WaitForSeconds_o *)sub_1B7640C(UnityEngine_WaitForSeconds_TypeInfo);
                  UnityEngine_WaitForSeconds___ctor(v207, 0.1, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v207;
                  v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B76164(v82, (int32_t)v207, v208, v209);
                  v85 = 24;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      if ( !byte_4A2D770 )
      {
        sub_1B761C0(&LogoMain_TypeInfo, v145);
        byte_4A2D770 = 1;
      }
      v146 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v146 = LogoMain_TypeInfo;
      }
      if ( !v146->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9293/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v147, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v147;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v82, (int32_t)v147, v148, v149);
      v85 = 27;
      goto LABEL_414;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_295:
      v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v200, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v200;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v82, (int32_t)v200, v201, v202);
      v85 = 28;
      goto LABEL_414;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_295;
      v150 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v150 = (_QWORD *)sub_1B761D8(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v151 = (System_Reflection_MethodBase_o *)sub_1B761A4(v150, v150[4]);
      OverwriteAssetSoundName__PlaySystemSe(v151, 0, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_341;
      v152 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v152 = (_QWORD *)sub_1B761D8(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v153 = (System_Reflection_MethodBase_o *)sub_1B761A4(v152, v152[4]);
      OverwriteAssetSoundName__PlaySystemSe(v153, 0, 0LL);
      goto LABEL_284;
    case 0x26:
      p_fields->__1__state = -1;
      v154 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v154 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v154->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication(0LL);
        OptionManager__SetNotiffication(Notiffication, 1, 0LL);
        v157 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v157 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v157->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v155);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v158);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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