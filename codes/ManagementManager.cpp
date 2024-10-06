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

  if ( (byte_4A6F600 & 1) == 0 )
  {
    sub_1B90010(&ManagementManager_TypeInfo, v1);
    sub_1B90010(&StringLiteral_8033/*"IsNotificationStatusSend"*/, v4);
    sub_1B90010(&StringLiteral_8045/*"IsReBootCacheClearKey"*/, v5);
    sub_1B90010(&StringLiteral_20934/*"ja-JP"*/, v6);
    sub_1B90010(&StringLiteral_24934/*"yyyy年MM月dd日HH時mm分"*/, v7);
    byte_4A6F600 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8033/*"IsNotificationStatusSend"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8033/*"IsNotificationStatusSend"*/,
    v2,
    v3);
  v8 = StringLiteral_8045/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8045/*"IsReBootCacheClearKey"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->RebootCacheClearKey, v8, v10, v11);
  v12 = StringLiteral_24934/*"yyyy年MM月dd日HH時mm分"*/;
  v13 = ManagementManager_TypeInfo->static_fields;
  v13->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24934/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v13->DATE_TIME_DISP_FORMAT, v12, v14, v15);
  v16 = StringLiteral_20934/*"ja-JP"*/;
  v17 = ManagementManager_TypeInfo->static_fields;
  v17->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20934/*"ja-JP"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v17->DEFAULT_CULTURE_NAME, v16, v18, v19);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A6F5FF & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_4A6F5FF = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_374CCA8 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  if ( (byte_4A6F5EA & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1B90010(&string___TypeInfo, v8);
    sub_1B90010(&StringLiteral_837/*"):"*/, v9);
    sub_1B90010(&StringLiteral_6727/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1B90010(&StringLiteral_796/*"(ratio: "*/, v11);
    byte_4A6F5EA = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6727/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1B900B8(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v12, v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v17 = StringLiteral_796/*"(ratio: "*/;
      v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_796/*"(ratio: "*/;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v14->fields.AvalonSceneManager, v17, v15, v16);
      this = (ManagementManager_o *)System_Single__ToString(v18, (const MethodInfo *)&v28);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v14->fields.debugInfoRootObject, (int32_t)this, v19, v20),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v23 = StringLiteral_837/*"):"*/,
            v14->fields.statusLabel = (struct UILabel_o *)StringLiteral_837/*"):"*/,
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v14->fields.statusLabel, v23, v21, v22),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1B90274(this, errorText);
      }
      v14->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&v14->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v24,
        v25);
      v26 = (Il2CppObject *)System_String__Concat_61800620((System_String_array *)v14, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v26, 0LL);
      return;
    }
LABEL_19:
    sub_1B9026C(this, errorText);
  }
  v27 = (Il2CppObject *)System_String__Concat_61787092(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v27, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A6F5E6 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_4A6F5E6 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_374CBFC *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4A6F5FD & 1) == 0 )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, boot);
    byte_4A6F5FD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4A6F5FC & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A6F5FC = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1B9026C(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4A6F5E4 & 1) == 0 )
  {
    sub_1B90010(&ManagementManager_TypeInfo, v1);
    byte_4A6F5E4 = 1;
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

  if ( (byte_4A6F5F2 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_4A6F5F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4A6F5F1 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4A6F5F1 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69333396(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4A6F5F0 & 1) != 0 )
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
    sub_1B90010(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4A6F5F0 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69333396(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A6F5ED & 1) == 0 )
  {
    sub_1B90010(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, method);
    byte_4A6F5ED = 1;
  }
  v3 = sub_1B9025C(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4A6F5F9 & 1) == 0 )
  {
    sub_1B90010(&ManagementManager_TypeInfo, method);
    byte_4A6F5F9 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A6EF87 )
  {
    sub_1B90010(&ManagementManager_TypeInfo, method);
    byte_4A6EF87 = 1;
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

  if ( (byte_4A6F5FA & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, method);
    sub_1B90010(&NetworkManager_TypeInfo, v2);
    sub_1B90010(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_4A6F5FA = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v7);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4A6F5EB & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_24118/*"true"*/, message);
    byte_4A6F5EB = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_24118/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagementManager_c *v3; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4A6F5FE & 1) == 0 )
  {
    sub_1B90010(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1B90010(&ManagementManager_TypeInfo, v2);
    byte_4A6F5FE = 1;
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

  if ( (byte_4A6F5E5 & 1) == 0 )
  {
    sub_1B90010(&ManagementManager_TypeInfo, v1);
    byte_4A6F5E5 = 1;
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

  if ( (byte_4A6F5E7 & 1) == 0 )
  {
    sub_1B90010(&AndroidUtil_TypeInfo, method);
    sub_1B90010(&UnityEngine_Application_TypeInfo, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    sub_1B90010(&System_Type_TypeInfo, v5);
    sub_1B90010(&UnityGamingServicesBehaviour_var, v6);
    byte_4A6F5E7 = 1;
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
    sub_1B9026C(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4A6F5FB & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1B90010(&UnityEngine_Application_TypeInfo, method);
    byte_4A6F5FB = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_69333396(0LL);
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

  if ( (byte_4A6F5F8 & 1) == 0 )
  {
    sub_1B90010(&ManagementManager_TypeInfo, result);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4A6F5F8 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v6);
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
  _BOOL8 _37740444; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4A6F5F7 & 1) == 0 )
  {
    sub_1B90010(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1B90010(&ManagerConfig_TypeInfo, v4);
    sub_1B90010(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B90010(&TutorialFlag_TypeInfo, v8);
    byte_4A6F5F7 = 1;
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
  _37740444 = TutorialFlag__Get_37740444(102, 0LL);
  if ( _37740444 )
  {
LABEL_9:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v14);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B9026C(0LL, v16);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_37740444, v11, v12);
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

  if ( (byte_4A6F5F5 & 1) == 0 )
  {
    sub_1B90010(&ManagementManager_TypeInfo, result);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4A6F5F5 = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v7);
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

  if ( (byte_4A6F5F4 & 1) == 0 )
  {
    sub_1B90010(&Method_ManagementManager_callbackTopHome__, result);
    sub_1B90010(&ManagerConfig_TypeInfo, v4);
    sub_1B90010(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B90010(&TutorialFlag_TypeInfo, v8);
    byte_4A6F5F4 = 1;
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
  if ( TutorialFlag__Get_37740444(102, 0LL) )
  {
LABEL_9:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v13);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B9026C(0LL, v15);
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

  if ( (byte_4A6F5E8 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1B90010(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&StringLiteral_4645/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1B90010(&StringLiteral_9156/*"MovieRoot"*/, v7);
    byte_4A6F5E8 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4645/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_1B9025C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_9156/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  v11,
                  (const MethodInfo_2EDD680 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_1B8FFB4(
            (ServantStatusBattleListViewItem_o *)&this->fields._videoPlayer_k__BackingField,
            (int32_t)v14,
            v15,
            v16),
          !v10)
      || (v17 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v17) )
    {
      sub_1B9026C(Component_object, v13);
    }
    AvalonVideoPlayer__initialize(v17, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_33776688(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A6F5E2 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_4A6F5E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v3);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4A6F5E3 & 1) == 0 )
  {
    sub_1B90010(&ManagementManager_TypeInfo, v1);
    byte_4A6F5E3 = 1;
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
  const MethodInfo *v26; // x3
  System_Collections_IEnumerator_o *v27; // x1

  if ( (byte_4A6F5E9 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, isLogin);
    sub_1B90010(&CTouch_TypeInfo, v7);
    sub_1B90010(&CommonEffectManager_TypeInfo, v8);
    sub_1B90010(&System_GC_TypeInfo, v9);
    sub_1B90010(&ManagementManager_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v13);
    sub_1B90010(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v17);
    sub_1B90010(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v18);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    sub_1B90010(&SoundManager_TypeInfo, v20);
    byte_4A6F5E9 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_27:
      sub_1B9026C(Instance, v23);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_62833160(0LL);
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v24 )
      sub_1B9026C(0LL, v25);
    AdManager__Initialize((AdManager_o *)v24, 2, 0LL);
    FirebaseScript__Initialize(0LL);
    v27 = ManagementManager__startCheckAll(this, 1, isLogin, v26);
    UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
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

  if ( (byte_4A6F5F3 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4A6F5F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1B9025C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v7);
  if ( !Instance )
    sub_1B9026C(v8, v9);
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

  if ( (byte_4A6F5F6 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4A6F5F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1B9025C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v7);
  if ( !Instance )
    sub_1B9026C(v8, v9);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v10);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1B8FFB4(
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

  if ( (byte_4A6F5EC & 1) == 0 )
  {
    sub_1B90010(&ManagementManager__startCheckAll_d__33_TypeInfo, isReboot);
    byte_4A6F5EC = 1;
  }
  v7 = isLogin;
  v8 = sub_1B9025C(ManagementManager__startCheckAll_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A6F5EE & 1) == 0 )
  {
    sub_1B90010(&DataManager_TypeInfo, method);
    byte_4A6F5EE = 1;
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

  if ( (byte_4A6F5EF & 1) == 0 )
  {
    sub_1B90010(&DataManager_TypeInfo, method);
    sub_1B90010(&ScrTerminalListTop_TypeInfo, v2);
    sub_1B90010(&ServantCommentManager_TypeInfo, v3);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v4);
    byte_4A6F5EF = 1;
  }
  MovieFileMerge__Delete_37801096(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A6D079 )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v6);
    byte_4A6D079 = 1;
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

  if ( (byte_4A6F602 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, method);
    sub_1B90010(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4A6F602 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B9026C(0LL, v10);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v11 )
      sub_1B9026C(0LL, v12);
    AdManager__Initialize((AdManager_o *)v11, 1, 0LL);
    FirebaseScript__Initialize(0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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

  if ( (byte_4A6F601 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, flag);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B90010(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__, v6);
    sub_1B90010(&ManagementManager___c__DisplayClass33_1_TypeInfo, v7);
    byte_4A6F601 = 1;
  }
  v8 = sub_1B9025C(ManagementManager___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B9026C(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30525912((CommonUI_o *)Instance, v14, 0LL);
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
    sub_1B9026C(this, method);
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
  const MethodInfo_374C890 **v72; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v75; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x25
  int32_t v77; // w2
  int32_t v78; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v80; // x0
  ServantStatusBattleListViewItem_o *v81; // x25
  int32_t v82; // w2
  int32_t v83; // w3
  int v84; // w8
  System_Collections_IEnumerator_o *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  OptionManager_c *v88; // x0
  const MethodInfo *v89; // x0
  const MethodInfo *v90; // x0
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
  const MethodInfo *v115; // x3
  UnityEngine_WaitForEndOfFrame_o *v116; // x20
  int32_t v117; // w2
  int32_t v118; // w3
  NetworkManager_ResultCallbackFunc_o *v119; // x21
  const MethodInfo *v120; // x3
  UnityEngine_WaitForEndOfFrame_o *v121; // x20
  int32_t v122; // w2
  int32_t v123; // w3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v125; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v127; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  DataManager_c *v130; // x0
  UnityEngine_Coroutine_o *v131; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  DataManager_c *v134; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v136; // x21
  System_String_o *v137; // x22
  ErrorDialog_ClickDelegate_o *v138; // x23
  UnityEngine_WaitForEndOfFrame_o *v139; // x20
  int32_t v140; // w2
  int32_t v141; // w3
  UnityEngine_WaitForEndOfFrame_o *v142; // x20
  int32_t v143; // w2
  int32_t v144; // w3
  UnityEngine_WaitForEndOfFrame_o *v145; // x20
  int32_t v146; // w2
  int32_t v147; // w3
  __int64 v148; // x1
  LogoMain_c *v149; // x0
  UnityEngine_WaitForEndOfFrame_o *v150; // x20
  int32_t v151; // w2
  int32_t v152; // w3
  _QWORD *v153; // x0
  System_Reflection_MethodBase_o *v154; // x0
  const MethodInfo *v155; // x2
  _QWORD *v156; // x0
  System_Reflection_MethodBase_o *v157; // x0
  const MethodInfo *v158; // x2
  ManagementManager_c *v159; // x0
  const MethodInfo *v160; // x2
  OptionManager_c *v161; // x0
  bool Notiffication; // w0
  const MethodInfo *v163; // x2
  ManagementManager_c *v164; // x0
  const MethodInfo *v165; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v167; // x0
  UnityEngine_Coroutine_o *v168; // x0
  int32_t v169; // w2
  int32_t v170; // w3
  LocalizationManager_c *v171; // x0
  UnityEngine_WaitForEndOfFrame_o *v172; // x20
  int32_t v173; // w2
  int32_t v174; // w3
  FSUtility_c *v175; // x0
  UnityEngine_WaitForEndOfFrame_o *v176; // x20
  int32_t v177; // w2
  int32_t v178; // w3
  UnityEngine_WaitForEndOfFrame_o *v179; // x20
  int32_t v180; // w2
  int32_t v181; // w3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v183; // x20
  int32_t v184; // w2
  int32_t v185; // w3
  UnityEngine_WaitForEndOfFrame_o *v186; // x20
  int32_t v187; // w2
  int32_t v188; // w3
  UnityEngine_WaitForEndOfFrame_o *v189; // x20
  int32_t v190; // w2
  int32_t v191; // w3
  UnityEngine_WaitForEndOfFrame_o *v192; // x20
  int32_t v193; // w2
  int32_t v194; // w3
  UnityEngine_WaitForSeconds_o *v195; // x20
  int32_t v196; // w2
  int32_t v197; // w3
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
  Il2CppObject *v228; // x21
  System_String_o *v229; // x22
  ErrorDialog_ClickDelegate_o *v230; // x23
  UnityEngine_WaitForEndOfFrame_o *v231; // x20
  int32_t v232; // w2
  int32_t v233; // w3
  int32_t v234; // w2
  int32_t v235; // w3
  UnityEngine_WaitForEndOfFrame_o *v236; // x20
  int32_t v237; // w2
  int32_t v238; // w3
  UnityEngine_WaitForEndOfFrame_o *v239; // x20
  int32_t v240; // w2
  int32_t v241; // w3
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v245; // x0
  ManagerConfig_c *v246; // x0
  const MethodInfo_374C890 **v247; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v249; // x22
  ErrorDialog_ClickDelegate_o *v250; // x23
  UnityEngine_WaitForEndOfFrame_o *v251; // x20
  int32_t v252; // w2
  int32_t v253; // w3
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v255; // x21
  const MethodInfo *v256; // x3
  UnityEngine_WaitForEndOfFrame_o *v257; // x20
  int32_t v258; // w2
  int32_t v259; // w3
  ManagementManager_c *v260; // x0
  const MethodInfo_374C890 **v261; // x28
  Il2CppObject *v262; // x21
  Il2CppObject **p__8__1; // x23
  int32_t v264; // w2
  int32_t v265; // w3
  ManagementManager__startCheckAll_d__33_o *v266; // x19
  Il2CppObject *v267; // x21
  System_String_o *v268; // x22
  System_String_o *v269; // x24
  System_String_o *v270; // x25
  System_String_o *v271; // x0
  Il2CppObject *v272; // x27
  System_String_o *v273; // x23
  CommonConfirmDialog_ClickDelegate_o *v274; // x26
  Il2CppObject *v275; // x21
  System_String_o *v276; // x21
  System_String_o *DispFriendCode; // x22
  Il2CppObject *v278; // x22
  System_String_o *v279; // x23
  System_String_o *v280; // x0
  System_String_o *v281; // x19
  Il2CppObject *v282; // x2
  System_String_o *v283; // x21
  ErrorDialog_ClickDelegate_o *v284; // x23
  ManagementManager_c *v285; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v287; // w2
  int32_t v288; // w3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__33_o *v290; // [xsp+40h] [xbp-80h]
  System_Enum_o v291; // [xsp+48h] [xbp-78h] BYREF
  int32_t v292; // [xsp+58h] [xbp-68h]

  v4 = this;
  if ( (byte_4A6F603 & 1) == 0 )
  {
    sub_1B90010(&AndroidUtil_TypeInfo, method);
    sub_1B90010(&UnityEngine_Application_TypeInfo, v5);
    sub_1B90010(&AssetManager_TypeInfo, v6);
    sub_1B90010(&AtlasManager_TypeInfo, v7);
    sub_1B90010(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B90010(&ErrorDialog_ClickDelegate_TypeInfo, v9);
    sub_1B90010(&CommonServicePluginScript_TypeInfo, v10);
    sub_1B90010(&DataManager_TypeInfo, v11);
    sub_1B90010(&EncryptedPlayerPrefs_TypeInfo, v12);
    sub_1B90010(&FSUtility_TypeInfo, v13);
    sub_1B90010(&ImageLimitCount_TypeInfo, v14);
    sub_1B90010(&LocalizationManager_TypeInfo, v15);
    sub_1B90010(&LogoMain_TypeInfo, v16);
    sub_1B90010(&Method_ManagementManager_EndLogDialog__, v17);
    sub_1B90010(&Method_ManagementManager_EndQuitDialog__, v18);
    sub_1B90010(&Method_ManagementManager_EndRetryDialog__, v19);
    sub_1B90010(&Method_ManagementManager_callbackAccountRegist__, v20);
    sub_1B90010(&Method_ManagementManager_callbackTopGameData__, v21);
    sub_1B90010(&ManagementManager_TypeInfo, v22);
    sub_1B90010(&ManagerConfig_TypeInfo, v23);
    sub_1B90010(&Method_NetworkManager_getRequest_AccountRegistRequest___, v24);
    sub_1B90010(&Method_NetworkManager_getRequest_TopGameDataRequest___, v25);
    sub_1B90010(&NetworkManager_TypeInfo, v26);
    sub_1B90010(&OptionManager_TypeInfo, v27);
    sub_1B90010(&PurchaseBehaviour_TypeInfo, v28);
    sub_1B90010(&NetworkManager_ReadResult_TypeInfo, v29);
    sub_1B90010(&ResolutionManager_TypeInfo, v30);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v31);
    sub_1B90010(&ServantCommentManager_TypeInfo, v32);
    sub_1B90010(&SignedData_TypeInfo, v33);
    sub_1B90010(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v34);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v36);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_1B90010(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v38);
    sub_1B90010(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v39);
    sub_1B90010(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v40);
    sub_1B90010(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v41);
    sub_1B90010(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v42);
    sub_1B90010(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v43);
    sub_1B90010(&SoundManager_TypeInfo, v44);
    sub_1B90010(&string___TypeInfo, v45);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v46);
    sub_1B90010(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__, v47);
    sub_1B90010(&ManagementManager___c__DisplayClass33_0_TypeInfo, v48);
    sub_1B90010(&Method_ManagementManager__startCheckAll_d__33_MoveNext__, v49);
    sub_1B90010(&UnityEngine_WaitForEndOfFrame_TypeInfo, v50);
    sub_1B90010(&UnityEngine_WaitForSeconds_TypeInfo, v51);
    sub_1B90010(&StringLiteral_7374/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v52);
    sub_1B90010(&StringLiteral_9300/*"NOW_LOADING"*/, v53);
    sub_1B90010(&StringLiteral_9230/*"NETWORK_ERROR_DISK_FULL"*/, v54);
    sub_1B90010(&StringLiteral_6353/*"F39UThNh"*/, v55);
    sub_1B90010(&StringLiteral_7377/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v56);
    sub_1B90010(&StringLiteral_8851/*"Management"*/, v57);
    sub_1B90010(&StringLiteral_7375/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v58);
    sub_1B90010(&StringLiteral_9574/*"NotifyRequestPermissionsResultFromPlugin"*/, v59);
    sub_1B90010(&StringLiteral_7373/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v60);
    sub_1B90010(&StringLiteral_5121/*"DataServerFolderName"*/, v61);
    sub_1B90010(&StringLiteral_16787/*"android.permission.POST_NOTIFICATIONS"*/, v62);
    sub_1B90010(&StringLiteral_9238/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v63);
    sub_1B90010(&StringLiteral_9231/*"NETWORK_ERROR_FIEND_CODE"*/, v64);
    sub_1B90010(&StringLiteral_12500/*"SYSTEM"*/, v65);
    sub_1B90010(&StringLiteral_1/*""*/, v66);
    sub_1B90010(&StringLiteral_20795/*"ioqrk4Om"*/, v67);
    sub_1B90010(&StringLiteral_1474/*"2pC0bIYM"*/, v68);
    sub_1B90010(&StringLiteral_9232/*"NETWORK_ERROR_READ_AUTH"*/, v69);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_1B90010(&StringLiteral_9239/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v70);
    byte_4A6F603 = 1;
  }
  p_fields = &v4->fields;
  v72 = (const MethodInfo_374C890 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
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
      sub_1B8FFB4(p__2__current, (int32_t)v75, v77, v78);
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
      v80 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v4->fields.__2__current = (Il2CppObject *)v80;
      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B8FFB4(v81, (int32_t)v80, v82, v83);
      v84 = 2;
      goto LABEL_414;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      v85 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v4->fields.__2__current = (Il2CppObject *)v85;
      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B8FFB4(v81, (int32_t)v85, v86, v87);
      v84 = 3;
      goto LABEL_414;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0LL);
      v88 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v88);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(v89);
      OptionManager__AdjustVolume(v90);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( !v4->fields.isReboot )
      {
LABEL_30:
        this = (ManagementManager__startCheckAll_d__33_o *)sub_1B900B8(string___TypeInfo, 3LL);
        if ( !this )
          goto LABEL_416;
        v96 = this;
        if ( !LODWORD(this->fields.__2__current)
          || (v97 = StringLiteral_1474/*"2pC0bIYM"*/,
              *(_QWORD *)&this->fields.isReboot = StringLiteral_1474/*"2pC0bIYM"*/,
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.isReboot, v97, v94, v95),
              LODWORD(v96->fields.__2__current) <= 1)
          || (v100 = StringLiteral_6353/*"F39UThNh"*/,
              v96->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6353/*"F39UThNh"*/,
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.__4__this, v100, v98, v99),
              LODWORD(v96->fields.__2__current) <= 2) )
        {
          sub_1B90274(this, method);
        }
        v103 = StringLiteral_20795/*"ioqrk4Om"*/;
        v96->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)StringLiteral_20795/*"ioqrk4Om"*/;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.__8__1, v103, v101, v102);
        v106 = EncryptedPlayerPrefs_TypeInfo;
        if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
          v106 = EncryptedPlayerPrefs_TypeInfo;
        }
        static_fields = v106->static_fields;
        static_fields->keys = (struct System_String_array *)v96;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->keys, (int32_t)v96, v104, v105);
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
                                                                 (System_String_o *)StringLiteral_16787/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !_4__this )
                goto LABEL_416;
              _4__this->fields.isPermissionRequesting = 1;
              AndroidPermissionManager__RequestPermission(
                (System_String_o *)StringLiteral_16787/*"android.permission.POST_NOTIFICATIONS"*/,
                (System_String_o *)StringLiteral_8851/*"Management"*/,
                (System_String_o *)StringLiteral_9574/*"NotifyRequestPermissionsResultFromPlugin"*/,
                0LL);
LABEL_44:
              if ( _4__this->fields.isPermissionRequesting )
              {
                v108 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v108, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v108;
                v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B8FFB4(v81, (int32_t)v108, v109, v110);
                v84 = 5;
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
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
          if ( this )
          {
            LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
            v239 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v239, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v239;
            v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B8FFB4(v81, (int32_t)v239, v240, v241);
            v84 = 6;
            goto LABEL_414;
          }
          goto LABEL_416;
        }
LABEL_47:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
        v4->fields._readResult_5__2 = (int)this;
        if ( !_4__this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__33_o *)_4__this->fields.debugInfoRootObject;
        if ( !this )
          goto LABEL_416;
        v290 = v4;
        this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
        if ( !this )
          goto LABEL_416;
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
          v245 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
          if ( FreeSize < v245 )
            FreeSize = v245;
          if ( FreeSize < 1 )
            break;
          v246 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v246 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v246->static_fields->LIMIT_FREE_SIZE )
            break;
          _4__this->fields.isErrorDialog = 1;
          v247 = v72;
          Instance = SingletonMonoBehaviour_object___get_Instance(*v72);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v249 = LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
          v250 = (ErrorDialog_ClickDelegate_o *)sub_1B9025C(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v250,
            (Il2CppObject *)_4__this,
            Method_ManagementManager_EndRetryDialog__,
            0LL);
          if ( !Instance )
            goto LABEL_416;
          CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v249, v250, 0, 0LL);
          v72 = v247;
LABEL_364:
          if ( _4__this->fields.isErrorDialog )
          {
            v251 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v251, 0LL);
            v290->fields.__2__current = (Il2CppObject *)v251;
            v224 = &v290->fields.__2__current;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v290->fields.__2__current, (int32_t)v251, v252, v253);
            v227 = 7;
            goto LABEL_373;
          }
        }
        readResult_5__2 = v290->fields._readResult_5__2;
        if ( readResult_5__2 )
        {
          if ( readResult_5__2 == 1 )
          {
            _4__this->fields.isReadAuth = 0;
            v255 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v255,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_callbackAccountRegist__,
              v256);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                                 v255,
                                                                 (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
            if ( this )
            {
              AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_372:
              v257 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v257, 0LL);
              v290->fields.__2__current = (Il2CppObject *)v257;
              v224 = &v290->fields.__2__current;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v290->fields.__2__current, (int32_t)v257, v258, v259);
              v227 = 8;
LABEL_373:
              *((_DWORD *)v224 - 2) = v227;
              return 1;
            }
            goto LABEL_416;
          }
          v275 = (Il2CppObject *)StringLiteral_1/*""*/;
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v276 = LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
              v278 = SingletonMonoBehaviour_object___get_Instance(*v72);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v279 = LocalizationManager__Get((System_String_o *)StringLiteral_9232/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
              v291.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
              v291.monitor = (void *)-1LL;
              v292 = v290->fields._readResult_5__2;
              v280 = System_Enum__ToString(&v291, 0LL);
              v281 = (System_String_o *)StringLiteral_1/*""*/;
              if ( v280 )
                v282 = (Il2CppObject *)v280;
              else
                v282 = (Il2CppObject *)StringLiteral_1/*""*/;
              v283 = System_String__Format_61801464(v279, v275, v282, 0LL);
              v284 = (ErrorDialog_ClickDelegate_o *)sub_1B9025C(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v284,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_EndQuitDialog__,
                0LL);
              if ( v278 )
              {
                CommonUI__OpenErrorDialog((CommonUI_o *)v278, v281, v283, v284, 0, 0LL);
                return 0;
              }
              goto LABEL_416;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v276 = LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
          }
          v275 = (Il2CppObject *)System_String__Format(v276, (Il2CppObject *)DispFriendCode, 0LL);
          goto LABEL_399;
        }
LABEL_374:
        v4 = v290;
        v290->fields._isCacheCheck_5__3 = 0;
LABEL_375:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        DataManager__Initialize((DataManager_o *)this, 0LL);
        if ( !v4->fields.isReboot && !v4->fields._isCacheCheck_5__3 )
        {
          v4->fields._isCacheCheck_5__3 = 1;
          v260 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v260 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v260->static_fields->RebootCacheClearKey, 0LL) )
          {
            v261 = v72;
            v262 = (Il2CppObject *)sub_1B9025C(ManagementManager___c__DisplayClass33_0_TypeInfo);
            System_Object___ctor(v262, 0LL);
            v4->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v262;
            p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v262, v264, v265);
            if ( !v4->fields.__8__1 )
              goto LABEL_416;
            v4->fields.__8__1->fields = 0;
            v266 = v4;
            v267 = SingletonMonoBehaviour_object___get_Instance(*v261);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v268 = LocalizationManager__Get((System_String_o *)StringLiteral_7377/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
            v269 = LocalizationManager__Get((System_String_o *)StringLiteral_7375/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
            v270 = LocalizationManager__Get((System_String_o *)StringLiteral_7374/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
            v271 = LocalizationManager__Get((System_String_o *)StringLiteral_7373/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
            v272 = *p__8__1;
            v273 = v271;
            v274 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B9025C(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v274,
              v272,
              Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
              0LL);
            if ( !v267 )
              goto LABEL_416;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v267,
              v268,
              v269,
              v270,
              v273,
              v274,
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
            v72 = v261;
            v4 = v266;
LABEL_60:
            _8__1 = v4->fields.__8__1;
            if ( !_8__1 )
              goto LABEL_416;
            if ( !_8__1->fields.confirmed )
            {
              v219 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v219, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v219;
              v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B8FFB4(v81, (int32_t)v219, v220, v221);
              v84 = 9;
              goto LABEL_414;
            }
            if ( _8__1->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_416;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v4->fields.__8__1 = 0LL;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, 0, v2, v3);
          }
          else
          {
            v285 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v285 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v285->static_fields->RebootCacheClearKey, 1, 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
          }
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance(*v72);
        if ( this )
        {
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              started = UnityEngine_MonoBehaviour__StartCoroutine_69524712(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          (System_Collections_IEnumerator_o *)this,
                          0LL);
              v4->fields.__2__current = (Il2CppObject *)started;
              v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B8FFB4(v81, (int32_t)started, v287, v288);
              v84 = 10;
              goto LABEL_414;
            }
          }
        }
LABEL_416:
        sub_1B9026C(this, method);
      }
      v91 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v91, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v91;
      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B8FFB4(v81, (int32_t)v91, v92, v93);
      v84 = 4;
LABEL_414:
      *(_DWORD *)&v81[-1].fields.isMine = v84;
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
      v290 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_364;
    case 8:
      v290 = v4;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A6F6FE )
      {
        sub_1B90010(&DataManager_TypeInfo, method);
        byte_4A6F6FE = 1;
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
      v114 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v114,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v115);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v114,
                                                           (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v116 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v116, 0LL);
      v4->fields._waitForServerTime_5__7 = v116;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v116, v117, v118);
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
        v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B8FFB4(v81, (int32_t)waitForServerTime_5__7, v2, v3);
        v84 = 11;
        goto LABEL_414;
      }
      _4__this->fields.isReadGameData = 0;
      v119 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v119,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v120);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v119,
                                                           (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( this )
      {
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v121 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v121, 0LL);
        v4->fields._wait_5__8 = v121;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, (int32_t)v121, v122, v123);
LABEL_200:
        wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
        v4->fields.__2__current = wait_5__8;
        v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B8FFB4(v81, (int32_t)wait_5__8, v2, v3);
        v84 = 12;
        goto LABEL_414;
      }
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_200;
      v125 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A6D705 )
      {
        sub_1B90010(&NetworkManager_TypeInfo, method);
        byte_4A6D705 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v125 )
        goto LABEL_416;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v125,
        (System_String_o *)StringLiteral_5121/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v127 = UnityEngine_MonoBehaviour__StartCoroutine_69524712(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   MasterData,
                   0LL);
          v4->fields.__2__current = (Il2CppObject *)v127;
          v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B8FFB4(v81, (int32_t)v127, v128, v129);
          v84 = 13;
          goto LABEL_414;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v131 = UnityEngine_MonoBehaviour__StartCoroutine_69524712(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v131;
            v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B8FFB4(v81, (int32_t)v131, v132, v133);
            v84 = 15;
            goto LABEL_414;
          }
        }
      }
      goto LABEL_416;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A6F6FF )
      {
        sub_1B90010(&DataManager_TypeInfo, method);
        byte_4A6F6FF = 1;
      }
      v130 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v130 = DataManager_TypeInfo;
      }
      if ( v130->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v130->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v130);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v203 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v203, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v203;
      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B8FFB4(v81, (int32_t)v203, v204, v205);
      v84 = 14;
      goto LABEL_414;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_375;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4A6F700 )
      {
        sub_1B90010(&DataManager_TypeInfo, method);
        byte_4A6F700 = 1;
      }
      v134 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v134 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v134->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_38506916((NetworkManager_o *)this, method);
          v222 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v222);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v223 = UnityEngine_MonoBehaviour__StartCoroutine_69524712(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v223;
              v224 = &v4->fields.__2__current;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v223, v225, v226);
              v227 = 18;
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
        v136 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v137 = LocalizationManager__Get((System_String_o *)StringLiteral_9238/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v138 = (ErrorDialog_ClickDelegate_o *)sub_1B9025C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v138, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v136 )
          goto LABEL_416;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v136,
          (System_String_o *)StringLiteral_1/*""*/,
          v137,
          v138,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v72 = (const MethodInfo_374C890 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v139 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v139, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v139;
          v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B8FFB4(v81, (int32_t)v139, v140, v141);
          v84 = 16;
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
      v228 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v229 = LocalizationManager__Get((System_String_o *)StringLiteral_9239/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v230 = (ErrorDialog_ClickDelegate_o *)sub_1B9025C(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v230, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v228 )
        goto LABEL_416;
      CommonUI__OpenRetryDialog((CommonUI_o *)v228, (System_String_o *)StringLiteral_1/*""*/, v229, v230, 0, 0LL);
      v72 = (const MethodInfo_374C890 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_334:
      if ( _4__this->fields.isErrorDialog )
      {
        v231 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v231, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v231;
        v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B8FFB4(v81, (int32_t)v231, v232, v233);
        v84 = 17;
        goto LABEL_414;
      }
LABEL_336:
      v4->fields._waitForServerTime_5__7 = 0LL;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, 0, v2, v3);
      v4->fields._wait_5__8 = 0LL;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, 0, v234, v235);
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
      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      *(_DWORD *)&v81[-1].fields.isMine = -1;
      sub_1B8FFB4(v81, 0, v2, v3);
      v84 = 19;
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
        v142 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v142, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v142;
        v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B8FFB4(v81, (int32_t)v142, v143, v144);
        v84 = 20;
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
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_209:
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( this )
            {
              if ( !BYTE2(this->fields.__8__1) )
              {
                v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v200, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v200;
                v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B8FFB4(v81, (int32_t)v200, v201, v202);
                v84 = 25;
                goto LABEL_414;
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
              if ( _4__this )
              {
                if ( this )
                {
                  v167 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                           (AssetManager_o *)this,
                           (System_String_o *)StringLiteral_12500/*"SYSTEM"*/,
                           _4__this->fields.downloadParallelMax,
                           0LL);
                  v168 = UnityEngine_MonoBehaviour__StartCoroutine_69524712(
                           (UnityEngine_MonoBehaviour_o *)_4__this,
                           v167,
                           0LL);
                  v4->fields.__2__current = (Il2CppObject *)v168;
                  v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B8FFB4(v81, (int32_t)v168, v169, v170);
                  v84 = 26;
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
          if ( !byte_4A6F702 )
          {
            sub_1B90010(&LocalizationManager_TypeInfo, method);
            byte_4A6F702 = 1;
          }
          v171 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v171 = LocalizationManager_TypeInfo;
          }
          if ( v171->static_fields->isBusySetAssetData )
          {
            v172 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v172, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v172;
            v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B8FFB4(v81, (int32_t)v172, v173, v174);
            v84 = 29;
            goto LABEL_414;
          }
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          FSUtility__LoadAssetData(0LL);
LABEL_228:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          if ( !byte_4A6F703 )
          {
            sub_1B90010(&FSUtility_TypeInfo, method);
            byte_4A6F703 = 1;
          }
          v175 = FSUtility_TypeInfo;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            v175 = FSUtility_TypeInfo;
          }
          if ( v175->static_fields->isBusySetAssetData )
          {
            v176 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v176, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v176;
            v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B8FFB4(v81, (int32_t)v176, v177, v178);
            v84 = 30;
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
              v179 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v179, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v179;
              v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B8FFB4(v81, (int32_t)v179, v180, v181);
              v84 = 31;
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
                  v183 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v183, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v183;
                  v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B8FFB4(v81, (int32_t)v183, v184, v185);
                  v84 = 32;
                  goto LABEL_414;
                }
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_257:
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  if ( LOBYTE(this[9].fields.__2__current) )
                  {
                    v186 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v186, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v186;
                    v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B8FFB4(v81, (int32_t)v186, v187, v188);
                    v84 = 33;
                    goto LABEL_414;
                  }
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__initializeAssetStorage(0LL);
LABEL_263:
                  this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                  if ( this )
                  {
                    if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
                    {
                      v189 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v189, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v189;
                      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B8FFB4(v81, (int32_t)v189, v190, v191);
                      v84 = 34;
                      goto LABEL_414;
                    }
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( this )
                    {
                      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_268:
                      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                      if ( this )
                      {
                        if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
                        {
                          v192 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                          UnityEngine_WaitForEndOfFrame___ctor(v192, 0LL);
                          v4->fields.__2__current = (Il2CppObject *)v192;
                          v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1B8FFB4(v81, (int32_t)v192, v193, v194);
                          v84 = 35;
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
                          if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9300/*"NOW_LOADING"*/, 0LL) )
                          {
                            if ( !SoundManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                            SoundManager__fadeoutBgm(1.0, 0LL);
                            v195 = (UnityEngine_WaitForSeconds_o *)sub_1B9025C(UnityEngine_WaitForSeconds_TypeInfo);
                            UnityEngine_WaitForSeconds___ctor(v195, 1.0, 0LL);
                            v4->fields.__2__current = (Il2CppObject *)v195;
                            v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                            sub_1B8FFB4(v81, (int32_t)v195, v196, v197);
                            v84 = 36;
                            goto LABEL_414;
                          }
LABEL_284:
                          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                        }
                        else
                        {
                          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode(
                                                                               (CommonUI_o *)this,
                                                                               3,
                                                                               0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( this )
                            {
                              CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_341:
                              v236 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                              UnityEngine_WaitForEndOfFrame___ctor(v236, 0LL);
                              v4->fields.__2__current = (Il2CppObject *)v236;
                              v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                              sub_1B8FFB4(v81, (int32_t)v236, v237, v238);
                              v84 = 37;
                              goto LABEL_414;
                            }
                            goto LABEL_416;
                          }
                        }
                        if ( _4__this )
                        {
                          ManagementManager__BuildInfoOff(_4__this, method);
                          v4->fields.__2__current = 0LL;
                          v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1B8FFB4(v81, 0, v198, v199);
                          v84 = 38;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_300:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v216 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v216, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v216;
              v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B8FFB4(v81, (int32_t)v216, v217, v218);
              v84 = 21;
              goto LABEL_414;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this )
            {
              if ( this )
              {
                AssetManager__DownloadAssetStorageAttribute(
                  (AssetManager_o *)this,
                  (System_String_o *)StringLiteral_12500/*"SYSTEM"*/,
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
                    v4->fields._isLoad_5__4 = 1;
                    if ( !SoundManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    SoundManager__playBgm((System_String_o *)StringLiteral_9300/*"NOW_LOADING"*/, 0LL);
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_314:
                      v210 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v210, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v210;
                      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B8FFB4(v81, (int32_t)v210, v211, v212);
                      v84 = 22;
                      goto LABEL_414;
                    }
                    goto LABEL_416;
                  }
LABEL_146:
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                  if ( AssetManager__getDownloadSize(0LL) >= 1 )
                  {
                    v145 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v145, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v145;
                    v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B8FFB4(v81, (int32_t)v145, v146, v147);
                    v84 = 23;
                    goto LABEL_414;
                  }
                }
LABEL_315:
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                AssetManager__SetOnlineStatus(0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( this )
                {
                  NetworkManager__SetServerSetting_38506916((NetworkManager_o *)this, method);
                  v213 = (UnityEngine_WaitForSeconds_o *)sub_1B9025C(UnityEngine_WaitForSeconds_TypeInfo);
                  UnityEngine_WaitForSeconds___ctor(v213, 0.1, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v213;
                  v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B8FFB4(v81, (int32_t)v213, v214, v215);
                  v84 = 24;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      if ( !byte_4A6F701 )
      {
        sub_1B90010(&LogoMain_TypeInfo, v148);
        byte_4A6F701 = 1;
      }
      v149 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v149 = LogoMain_TypeInfo;
      }
      if ( !v149->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9300/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v150 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v150, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v150;
      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B8FFB4(v81, (int32_t)v150, v151, v152);
      v84 = 27;
      goto LABEL_414;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_295:
      v206 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v206, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v206;
      v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B8FFB4(v81, (int32_t)v206, v207, v208);
      v84 = 28;
      goto LABEL_414;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_295;
      v153 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v153 = (_QWORD *)sub_1B90028(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v154 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v153, v153[4]);
      OverwriteAssetSoundName__PlaySystemSe(v154, 0, v155);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_341;
      v156 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v156 = (_QWORD *)sub_1B90028(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v157 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v156, v156[4]);
      OverwriteAssetSoundName__PlaySystemSe(v157, 0, v158);
      goto LABEL_284;
    case 0x26:
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
        v161 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v161);
        OptionManager__SetNotiffication(Notiffication, 1, v163);
        v164 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v164 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v164->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v160);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v165);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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