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

  if ( (byte_49FBBBA & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_7994/*"IsNotificationStatusSend"*/, v4);
    sub_1B640C8(&StringLiteral_8006/*"IsReBootCacheClearKey"*/, v5);
    sub_1B640C8(&StringLiteral_20823/*"ja-JP"*/, v6);
    sub_1B640C8(&StringLiteral_24795/*"yyyy年MM月dd日HH時mm分"*/, v7);
    byte_49FBBBA = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_7994/*"IsNotificationStatusSend"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_7994/*"IsNotificationStatusSend"*/,
    v2,
    v3);
  v8 = StringLiteral_8006/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8006/*"IsReBootCacheClearKey"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->RebootCacheClearKey, v8, v10, v11);
  v12 = StringLiteral_24795/*"yyyy年MM月dd日HH時mm分"*/;
  v13 = ManagementManager_TypeInfo->static_fields;
  v13->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24795/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->DATE_TIME_DISP_FORMAT, v12, v14, v15);
  v16 = StringLiteral_20823/*"ja-JP"*/;
  v17 = ManagementManager_TypeInfo->static_fields;
  v17->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20823/*"ja-JP"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->DEFAULT_CULTURE_NAME, v16, v18, v19);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FBBB9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_49FBBB9 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  ManagementManager_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  float v19; // s0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x19
  Il2CppObject *v28; // x19
  float v29; // [xsp+Ch] [xbp-34h] BYREF

  v29 = ratio;
  if ( (byte_49FBBA4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1B640C8(&string___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_838/*"):"*/, v9);
    sub_1B640C8(&StringLiteral_6697/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1B640C8(&StringLiteral_797/*"(ratio: "*/, v11);
    byte_49FBBA4 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6697/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1B64170(string___TypeInfo, 5LL);
    if ( this )
    {
      v15 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v13, v14);
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v18 = StringLiteral_797/*"(ratio: "*/;
      v15->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_797/*"(ratio: "*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.AvalonSceneManager, v18, v16, v17);
      this = (ManagementManager_o *)System_Single__ToString(v19, (const MethodInfo *)&v29);
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 2
        || (v15->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.debugInfoRootObject, (int32_t)this, v20, v21),
            LODWORD(v15->fields.m_CancellationTokenSource) <= 3)
        || (v24 = StringLiteral_838/*"):"*/,
            v15->fields.statusLabel = (struct UILabel_o *)StringLiteral_838/*"):"*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.statusLabel, v24, v22, v23),
            LODWORD(v15->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1B6432C(this, v12);
      }
      v15->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v15->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v25,
        v26);
      v27 = (Il2CppObject *)System_String__Concat_61388924((System_String_array *)v15, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v27, 0LL);
      return;
    }
LABEL_19:
    sub_1B64324(this);
  }
  v28 = (Il2CppObject *)System_String__Concat_61375396(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v28, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FBBA0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_49FBBA0 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_36EC3A8 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_49FBBB7 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, boot);
    byte_49FBBB7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_49FBBB6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FBBB6 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1B64324(debugInfoRootObject);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_49FBB9E & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, v1);
    byte_49FBB9E = 1;
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

  if ( (byte_49FBBAC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_49FBBAC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_49FBBAB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, isDecide);
    byte_49FBBAB = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68921692(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_49FBBAA & 1) != 0 )
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
    sub_1B640C8(&UnityEngine_Application_TypeInfo, isDecide);
    byte_49FBBAA = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68921692(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FBBA7 & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, method);
    byte_49FBBA7 = 1;
  }
  v4 = sub_1B64314(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_49FBBB3 & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, method);
    byte_49FBBB3 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_49FB4AB )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, method);
    byte_49FB4AB = 1;
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

  if ( (byte_49FBBB4 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_49FBBB4 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_49FBBA5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23980/*"true"*/, message);
    byte_49FBBA5 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_23980/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagementManager_c *v3; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_49FBBB8 & 1) == 0 )
  {
    sub_1B640C8(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1B640C8(&ManagementManager_TypeInfo, v2);
    byte_49FBBB8 = 1;
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

  if ( (byte_49FBB9F & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, v1);
    byte_49FBB9F = 1;
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

  if ( (byte_49FBBA1 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&System_Type_TypeInfo, v5);
    sub_1B640C8(&UnityGamingServicesBehaviour_var, v6);
    byte_49FBBA1 = 1;
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
    sub_1B64324(TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_49FBBB5 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    byte_49FBBB5 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_68921692(0LL);
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

  if ( (byte_49FBBB2 & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_49FBBB2 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  _BOOL8 _37376848; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49FBBB1 & 1) == 0 )
  {
    sub_1B640C8(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&TutorialFlag_TypeInfo, v8);
    byte_49FBBB1 = 1;
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
  _37376848 = TutorialFlag__Get_37376848(102, 0LL);
  if ( _37376848 )
  {
LABEL_9:
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, result, method);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v11,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B64324(0LL);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_37376848, result, method);
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

  if ( (byte_49FBBAF & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49FBBAF = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49FBBAE & 1) == 0 )
  {
    sub_1B640C8(&Method_ManagementManager_callbackTopHome__, result);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&TutorialFlag_TypeInfo, v8);
    byte_49FBBAE = 1;
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
  if ( TutorialFlag__Get_37376848(102, 0LL) )
  {
LABEL_9:
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, result, method);
    NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v10,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B64324(0LL);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTopHome(this, result, method);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *v13; // x21
  Il2CppObject *Component_object; // x0
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  AvalonVideoPlayer_o *v18; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_49FBBA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_4621/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1B640C8(&StringLiteral_9110/*"MovieRoot"*/, v7);
    byte_49FBBA2 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4621/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v13 = (UnityEngine_GameObject_o *)sub_1B64314(UnityEngine_GameObject_TypeInfo, v11, v12);
    UnityEngine_GameObject___ctor(v13, (System_String_o *)StringLiteral_9110/*"MovieRoot"*/, 0LL);
    if ( !v13
      || (v15 = UnityEngine_GameObject__AddComponent_object_(
                  v13,
                  (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v15,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields._videoPlayer_k__BackingField,
            (int32_t)v15,
            v16,
            v17),
          !v10)
      || (v18 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v18) )
    {
      sub_1B64324(Component_object);
    }
    AvalonVideoPlayer__initialize(v18, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_33381252(v13, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FBB9C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_49FBB9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_49FBB9D & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, v1);
    byte_49FBB9D = 1;
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
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x0
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *v26; // x1

  if ( (byte_49FBBA3 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, isLogin);
    sub_1B640C8(&CTouch_TypeInfo, v7);
    sub_1B640C8(&CommonEffectManager_TypeInfo, v8);
    sub_1B640C8(&System_GC_TypeInfo, v9);
    sub_1B640C8(&ManagementManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v17);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v18);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    sub_1B640C8(&SoundManager_TypeInfo, v20);
    byte_49FBBA3 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_27:
      sub_1B64324(Instance);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_62421456(0LL);
    v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v23 )
      sub_1B64324(0LL);
    AdManager__Initialize((AdManager_o *)v23, 2, 0LL);
    FirebaseScript__Initialize(v24);
    v26 = ManagementManager__startCheckAll(this, 1, isLogin, v25);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  NetworkManager_LoginCallbackFunc_o *v8; // x21
  __int64 v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_49FBBAD & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_49FBBAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v8 = (NetworkManager_LoginCallbackFunc_o *)sub_1B64314(NetworkManager_LoginCallbackFunc_TypeInfo, v6, v7);
  NetworkManager_LoginCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_1B64324(v9);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v8, 1, v10);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  NetworkManager_LoginCallbackFunc_o *v8; // x21
  __int64 v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_49FBBB0 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_49FBBB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v8 = (NetworkManager_LoginCallbackFunc_o *)sub_1B64314(NetworkManager_LoginCallbackFunc_TypeInfo, v6, v7);
  NetworkManager_LoginCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_1B64324(v9);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v8, 1, v10);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1B6406C(
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

  if ( (byte_49FBBA6 & 1) == 0 )
  {
    sub_1B640C8(&ManagementManager__startCheckAll_d__33_TypeInfo, isReboot);
    byte_49FBBA6 = 1;
  }
  v7 = isLogin;
  v8 = sub_1B64314(ManagementManager__startCheckAll_d__33_TypeInfo, isReboot, isLogin);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FBBA8 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    byte_49FBBA8 = 1;
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

  if ( (byte_49FBBA9 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    sub_1B640C8(&ScrTerminalListTop_TypeInfo, v2);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    byte_49FBBA9 = 1;
  }
  MovieFileMerge__Delete_37435484(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9668 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F9668 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  Il2CppObject *Instance; // x0
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x0

  if ( (byte_49FBBBC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, method);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_49FBBBC = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v11 )
      sub_1B64324(0LL);
    AdManager__Initialize((AdManager_o *)v11, 1, 0LL);
    FirebaseScript__Initialize(v12);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49FBBBB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flag);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__, v6);
    sub_1B640C8(&ManagementManager___c__DisplayClass33_1_TypeInfo, v7);
    byte_49FBBBB = 1;
  }
  v8 = sub_1B64314(ManagementManager___c__DisplayClass33_1_TypeInfo, flag, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v9);
  }
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v15, 0LL);
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
    sub_1B64324(this);
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
  __int64 v71; // x1
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  const MethodInfo_36EC03C **v73; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v76; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x24
  int32_t v78; // w2
  int32_t v79; // w3
  bool result; // w0
  LocalizationManager_c *v81; // x0
  const MethodInfo *v82; // x1
  System_Collections_IEnumerator_o *v83; // x0
  ServantStatusBattleListViewItem_o *v84; // x24
  int32_t v85; // w2
  int32_t v86; // w3
  int v87; // w8
  const MethodInfo *v88; // x1
  System_Collections_IEnumerator_o *v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x1
  __int64 v93; // x2
  UnityEngine_WaitForEndOfFrame_o *v94; // x20
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // x1
  int32_t v98; // w2
  int32_t v99; // w3
  ManagementManager__startCheckAll_d__33_o *v100; // x21
  int32_t v101; // w1
  int32_t v102; // w2
  int32_t v103; // w3
  int32_t v104; // w1
  int32_t v105; // w2
  int32_t v106; // w3
  int32_t v107; // w1
  int32_t v108; // w2
  int32_t v109; // w3
  EncryptedPlayerPrefs_c *v110; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v112; // x20
  int32_t v113; // w2
  int32_t v114; // w3
  const MethodInfo *v115; // x1
  const MethodInfo *v116; // x1
  struct ManagementManager___c__DisplayClass33_0_o *_8__1; // x8
  __int64 v118; // x1
  __int64 v119; // x2
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v121; // x21
  __int64 v122; // x1
  __int64 v123; // x2
  UnityEngine_WaitForEndOfFrame_o *v124; // x20
  int32_t v125; // w2
  int32_t v126; // w3
  NetworkManager_ResultCallbackFunc_o *v127; // x21
  __int64 v128; // x1
  __int64 v129; // x2
  UnityEngine_WaitForEndOfFrame_o *v130; // x20
  int32_t v131; // w2
  int32_t v132; // w3
  Il2CppObject *waitForServerTime_5__7; // x1
  __int64 v134; // x1
  Il2CppObject *v135; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v137; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  __int64 v140; // x1
  DataManager_c *v141; // x0
  UnityEngine_Coroutine_o *v142; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  __int64 v145; // x1
  DataManager_c *v146; // x0
  int32_t updateMasterResult_5__9; // w8
  const MethodInfo *v148; // x1
  Il2CppObject *v149; // x21
  System_String_o *v150; // x22
  __int64 v151; // x1
  __int64 v152; // x2
  ErrorDialog_ClickDelegate_o *v153; // x23
  UnityEngine_WaitForEndOfFrame_o *v154; // x20
  int32_t v155; // w2
  int32_t v156; // w3
  __int64 v157; // x0
  int32_t v158; // w2
  int32_t v159; // w3
  __int64 v160; // x1
  __int64 v161; // x2
  UnityEngine_WaitForEndOfFrame_o *v162; // x20
  int32_t v163; // w2
  int32_t v164; // w3
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 v167; // x1
  __int64 v168; // x2
  UnityEngine_WaitForEndOfFrame_o *v169; // x20
  int32_t v170; // w2
  int32_t v171; // w3
  __int64 v172; // x1
  LogoMain_c *v173; // x0
  __int64 v174; // x1
  __int64 v175; // x2
  UnityEngine_WaitForEndOfFrame_o *v176; // x20
  int32_t v177; // w2
  int32_t v178; // w3
  __int64 v179; // x1
  __int64 v180; // x2
  _QWORD *v181; // x0
  System_Reflection_MethodBase_o *v182; // x0
  __int64 v183; // x1
  __int64 v184; // x2
  _QWORD *v185; // x0
  System_Reflection_MethodBase_o *v186; // x0
  ManagementManager_c *v187; // x0
  const MethodInfo *v188; // x2
  bool Notiffication; // w0
  ManagementManager_c *v190; // x0
  const MethodInfo *v191; // x1
  Il2CppObject *wait_5__8; // x1
  __int64 v193; // x1
  __int64 v194; // x2
  System_Collections_IEnumerator_o *v195; // x0
  UnityEngine_Coroutine_o *v196; // x0
  int32_t v197; // w2
  int32_t v198; // w3
  LocalizationManager_c *v199; // x0
  LocalizationManager_c *v200; // x0
  UnityEngine_WaitForEndOfFrame_o *v201; // x20
  int32_t v202; // w2
  int32_t v203; // w3
  FSUtility_c *v204; // x0
  UnityEngine_WaitForEndOfFrame_o *v205; // x20
  int32_t v206; // w2
  int32_t v207; // w3
  __int64 v208; // x1
  __int64 v209; // x2
  UnityEngine_WaitForEndOfFrame_o *v210; // x20
  int32_t v211; // w2
  int32_t v212; // w3
  __int64 v213; // x1
  __int64 v214; // x2
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v216; // x20
  int32_t v217; // w2
  int32_t v218; // w3
  __int64 v219; // x1
  __int64 v220; // x2
  UnityEngine_WaitForEndOfFrame_o *v221; // x20
  int32_t v222; // w2
  int32_t v223; // w3
  __int64 v224; // x1
  __int64 v225; // x2
  UnityEngine_WaitForEndOfFrame_o *v226; // x20
  int32_t v227; // w2
  int32_t v228; // w3
  __int64 v229; // x1
  __int64 v230; // x2
  UnityEngine_WaitForEndOfFrame_o *v231; // x20
  int32_t v232; // w2
  int32_t v233; // w3
  __int64 v234; // x1
  __int64 v235; // x2
  UnityEngine_WaitForSeconds_o *v236; // x20
  int32_t v237; // w2
  int32_t v238; // w3
  const MethodInfo *v239; // x1
  __int64 v240; // x0
  int32_t v241; // w2
  int32_t v242; // w3
  UnityEngine_WaitForEndOfFrame_o *v243; // x20
  int32_t v244; // w2
  int32_t v245; // w3
  __int64 v246; // x1
  __int64 v247; // x2
  UnityEngine_WaitForEndOfFrame_o *v248; // x20
  int32_t v249; // w2
  int32_t v250; // w3
  UnityEngine_WaitForEndOfFrame_o *v251; // x20
  int32_t v252; // w2
  int32_t v253; // w3
  __int64 v254; // x1
  __int64 v255; // x2
  ManagerConfig_c *v256; // x0
  UnityEngine_WaitForEndOfFrame_o *v257; // x20
  int32_t v258; // w2
  int32_t v259; // w3
  const MethodInfo *v260; // x1
  __int64 v261; // x1
  __int64 v262; // x2
  UnityEngine_WaitForSeconds_o *v263; // x20
  int32_t v264; // w2
  int32_t v265; // w3
  UnityEngine_WaitForEndOfFrame_o *v266; // x20
  int32_t v267; // w2
  int32_t v268; // w3
  UnityEngine_WaitForEndOfFrame_o *v269; // x20
  int32_t v270; // w2
  int32_t v271; // w3
  const MethodInfo *v272; // x1
  ManagementManager_c *v273; // x0
  UnityEngine_Coroutine_o *v274; // x0
  Il2CppObject **v275; // x19
  int32_t v276; // w2
  int32_t v277; // w3
  int v278; // w8
  const MethodInfo *v279; // x1
  Il2CppObject *v280; // x21
  System_String_o *v281; // x22
  __int64 v282; // x1
  __int64 v283; // x2
  ErrorDialog_ClickDelegate_o *v284; // x23
  UnityEngine_WaitForEndOfFrame_o *v285; // x20
  int32_t v286; // w2
  int32_t v287; // w3
  int32_t v288; // w2
  int32_t v289; // w3
  UnityEngine_WaitForEndOfFrame_o *v290; // x20
  int32_t v291; // w2
  int32_t v292; // w3
  __int64 v293; // x1
  __int64 v294; // x2
  UnityEngine_WaitForEndOfFrame_o *v295; // x20
  int32_t v296; // w2
  int32_t v297; // w3
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v301; // x0
  __int64 v302; // x1
  __int64 v303; // x2
  ManagerConfig_c *v304; // x0
  const MethodInfo_36EC03C **v305; // x26
  const MethodInfo *v306; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v308; // x22
  __int64 v309; // x1
  __int64 v310; // x2
  ErrorDialog_ClickDelegate_o *v311; // x23
  UnityEngine_WaitForEndOfFrame_o *v312; // x20
  int32_t v313; // w2
  int32_t v314; // w3
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v316; // x21
  UnityEngine_WaitForEndOfFrame_o *v317; // x20
  int32_t v318; // w2
  int32_t v319; // w3
  ManagementManager_c *v320; // x0
  __int64 v321; // x1
  __int64 v322; // x2
  Il2CppObject *v323; // x21
  ManagementManager__startCheckAll_d__33_o *v324; // x19
  ServantStatusBattleListViewItem_o *p__8__1; // x24
  int32_t v326; // w2
  int32_t v327; // w3
  const MethodInfo_36EC03C **v328; // x28
  const MethodInfo *v329; // x1
  Il2CppObject *v330; // x21
  System_String_o *v331; // x22
  const MethodInfo *v332; // x1
  System_String_o *v333; // x23
  const MethodInfo *v334; // x1
  System_String_o *v335; // x25
  const MethodInfo *v336; // x1
  System_String_o *v337; // x0
  Il2CppObject *klass; // x27
  System_String_o *v339; // x24
  __int64 v340; // x1
  __int64 v341; // x2
  CommonConfirmDialog_ClickDelegate_o *v342; // x26
  Il2CppObject *v343; // x21
  const MethodInfo *v344; // x1
  const MethodInfo *v345; // x1
  System_String_o *v346; // x21
  const MethodInfo *v347; // x1
  System_String_o *DispFriendCode; // x22
  const MethodInfo *v349; // x1
  const MethodInfo *v350; // x1
  Il2CppObject *v351; // x22
  System_String_o *v352; // x23
  System_String_o *v353; // x0
  System_String_o *v354; // x19
  Il2CppObject *v355; // x2
  System_String_o *v356; // x21
  __int64 v357; // x1
  __int64 v358; // x2
  ErrorDialog_ClickDelegate_o *v359; // x23
  ManagementManager_c *v360; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v362; // w2
  int32_t v363; // w3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__33_o *v365; // [xsp+40h] [xbp-80h]
  System_Enum_o v366; // [xsp+48h] [xbp-78h] BYREF
  int32_t v367; // [xsp+58h] [xbp-68h]

  v4 = this;
  if ( (byte_49FBBBD & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v5);
    sub_1B640C8(&AssetManager_TypeInfo, v6);
    sub_1B640C8(&AtlasManager_TypeInfo, v7);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v9);
    sub_1B640C8(&CommonServicePluginScript_TypeInfo, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v12);
    sub_1B640C8(&FSUtility_TypeInfo, v13);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v14);
    sub_1B640C8(&int_TypeInfo, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&LogoMain_TypeInfo, v17);
    sub_1B640C8(&Method_ManagementManager_EndLogDialog__, v18);
    sub_1B640C8(&Method_ManagementManager_EndQuitDialog__, v19);
    sub_1B640C8(&Method_ManagementManager_EndRetryDialog__, v20);
    sub_1B640C8(&Method_ManagementManager_callbackAccountRegist__, v21);
    sub_1B640C8(&Method_ManagementManager_callbackTopGameData__, v22);
    sub_1B640C8(&ManagementManager_TypeInfo, v23);
    sub_1B640C8(&ManagerConfig_TypeInfo, v24);
    sub_1B640C8(&Method_NetworkManager_getRequest_AccountRegistRequest___, v25);
    sub_1B640C8(&Method_NetworkManager_getRequest_TopGameDataRequest___, v26);
    sub_1B640C8(&NetworkManager_TypeInfo, v27);
    sub_1B640C8(&OptionManager_TypeInfo, v28);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v29);
    sub_1B640C8(&NetworkManager_ReadResult_TypeInfo, v30);
    sub_1B640C8(&ResolutionManager_TypeInfo, v31);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v32);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v33);
    sub_1B640C8(&SignedData_TypeInfo, v34);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v35);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v36);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v37);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v39);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v40);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v41);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v42);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v43);
    sub_1B640C8(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v44);
    sub_1B640C8(&SoundManager_TypeInfo, v45);
    sub_1B640C8(&string___TypeInfo, v46);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v47);
    sub_1B640C8(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__, v48);
    sub_1B640C8(&ManagementManager___c__DisplayClass33_0_TypeInfo, v49);
    sub_1B640C8(&Method_ManagementManager__startCheckAll_d__33_MoveNext__, v50);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v51);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v52);
    sub_1B640C8(&StringLiteral_7340/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v53);
    sub_1B640C8(&StringLiteral_9254/*"NOW_LOADING"*/, v54);
    sub_1B640C8(&StringLiteral_9184/*"NETWORK_ERROR_DISK_FULL"*/, v55);
    sub_1B640C8(&StringLiteral_6324/*"F39UThNh"*/, v56);
    sub_1B640C8(&StringLiteral_7343/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v57);
    sub_1B640C8(&StringLiteral_8805/*"Management"*/, v58);
    sub_1B640C8(&StringLiteral_7341/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v59);
    sub_1B640C8(&StringLiteral_9527/*"NotifyRequestPermissionsResultFromPlugin"*/, v60);
    sub_1B640C8(&StringLiteral_7339/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v61);
    sub_1B640C8(&StringLiteral_5097/*"DataServerFolderName"*/, v62);
    sub_1B640C8(&StringLiteral_16693/*"android.permission.POST_NOTIFICATIONS"*/, v63);
    sub_1B640C8(&StringLiteral_9192/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v64);
    sub_1B640C8(&StringLiteral_9185/*"NETWORK_ERROR_FIEND_CODE"*/, v65);
    sub_1B640C8(&StringLiteral_12420/*"SYSTEM"*/, v66);
    sub_1B640C8(&StringLiteral_1/*""*/, v67);
    sub_1B640C8(&StringLiteral_20686/*"ioqrk4Om"*/, v68);
    sub_1B640C8(&StringLiteral_1475/*"2pC0bIYM"*/, v69);
    sub_1B640C8(&StringLiteral_9186/*"NETWORK_ERROR_READ_AUTH"*/, v70);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_1B640C8(&StringLiteral_9193/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v71);
    byte_49FBBBD = 1;
  }
  p_fields = &v4->fields;
  v73 = (const MethodInfo_36EC03C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      isReboot = v4->fields.isReboot;
      v4->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v76 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v4->fields.__2__current = (Il2CppObject *)v76;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v76, v78, v79);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_7:
      if ( !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData__RefillSigningData(3, 0LL);
      v81 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__Initialize((const MethodInfo *)v81);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initialize(0LL);
      if ( !_4__this )
        goto LABEL_416;
      v83 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, v82);
      v4->fields.__2__current = (Il2CppObject *)v83;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v84, (int32_t)v83, v85, v86);
      v87 = 2;
      goto LABEL_414;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      v89 = NetworkManager__Initialize((NetworkManager_o *)this, v88);
      v4->fields.__2__current = (Il2CppObject *)v89;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v84, (int32_t)v89, v90, v91);
      v87 = 3;
      goto LABEL_414;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
        this = (ManagementManager__startCheckAll_d__33_o *)sub_1B64170(string___TypeInfo, 3LL);
        if ( !this )
          goto LABEL_416;
        v100 = this;
        if ( !LODWORD(this->fields.__2__current)
          || (v101 = StringLiteral_1475/*"2pC0bIYM"*/,
              *(_QWORD *)&this->fields.isReboot = StringLiteral_1475/*"2pC0bIYM"*/,
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.isReboot, v101, v98, v99),
              LODWORD(v100->fields.__2__current) <= 1)
          || (v104 = StringLiteral_6324/*"F39UThNh"*/,
              v100->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6324/*"F39UThNh"*/,
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v100->fields.__4__this, v104, v102, v103),
              LODWORD(v100->fields.__2__current) <= 2) )
        {
          sub_1B6432C(this, v97);
        }
        v107 = StringLiteral_20686/*"ioqrk4Om"*/;
        v100->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)StringLiteral_20686/*"ioqrk4Om"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v100->fields.__8__1, v107, v105, v106);
        v110 = EncryptedPlayerPrefs_TypeInfo;
        if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
          v110 = EncryptedPlayerPrefs_TypeInfo;
        }
        static_fields = v110->static_fields;
        static_fields->keys = (struct System_String_array *)v100;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->keys, (int32_t)v100, v108, v109);
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
                                                                 (System_String_o *)StringLiteral_16693/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !_4__this )
                goto LABEL_416;
              _4__this->fields.isPermissionRequesting = 1;
              AndroidPermissionManager__RequestPermission(
                (System_String_o *)StringLiteral_16693/*"android.permission.POST_NOTIFICATIONS"*/,
                (System_String_o *)StringLiteral_8805/*"Management"*/,
                (System_String_o *)StringLiteral_9527/*"NotifyRequestPermissionsResultFromPlugin"*/,
                0LL);
LABEL_44:
              if ( _4__this->fields.isPermissionRequesting )
              {
                v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                            UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                            method,
                                                            v2);
                UnityEngine_WaitForEndOfFrame___ctor(v112, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v112;
                v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B6406C(v84, (int32_t)v112, v113, v114);
                v87 = 5;
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
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
          if ( this )
          {
            LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
            v295 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v293, v294);
            UnityEngine_WaitForEndOfFrame___ctor(v295, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v295;
            v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(v84, (int32_t)v295, v296, v297);
            v87 = 6;
            goto LABEL_414;
          }
          goto LABEL_416;
        }
LABEL_47:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, v115);
        v4->fields._readResult_5__2 = (int)this;
        if ( !_4__this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__33_o *)_4__this->fields.debugInfoRootObject;
        if ( !this )
          goto LABEL_416;
        v365 = v4;
        this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
        if ( !this )
          goto LABEL_416;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        ManagementManager__BuildInfoOff(_4__this, v116);
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
          v301 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
          if ( FreeSize < v301 )
            FreeSize = v301;
          if ( FreeSize < 1 )
            break;
          v304 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v304 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v304->static_fields->LIMIT_FREE_SIZE )
            break;
          _4__this->fields.isErrorDialog = 1;
          v305 = v73;
          Instance = SingletonMonoBehaviour_object___get_Instance(*v73);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v308 = LocalizationManager__Get((System_String_o *)StringLiteral_9184/*"NETWORK_ERROR_DISK_FULL"*/, v306);
          v311 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v309, v310);
          ErrorDialog_ClickDelegate___ctor(
            v311,
            (Il2CppObject *)_4__this,
            Method_ManagementManager_EndRetryDialog__,
            0LL);
          if ( !Instance )
            goto LABEL_416;
          CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v308, v311, 0, 0LL);
          v73 = v305;
LABEL_364:
          if ( _4__this->fields.isErrorDialog )
          {
            v312 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
            UnityEngine_WaitForEndOfFrame___ctor(v312, 0LL);
            v365->fields.__2__current = (Il2CppObject *)v312;
            v275 = &v365->fields.__2__current;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v365->fields.__2__current, (int32_t)v312, v313, v314);
            v278 = 7;
            goto LABEL_373;
          }
        }
        readResult_5__2 = v365->fields._readResult_5__2;
        if ( readResult_5__2 )
        {
          if ( readResult_5__2 == 1 )
          {
            _4__this->fields.isReadAuth = 0;
            v316 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                            NetworkManager_ResultCallbackFunc_TypeInfo,
                                                            v302,
                                                            v303);
            NetworkManager_ResultCallbackFunc___ctor(
              v316,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_callbackAccountRegist__,
              0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                                 v316,
                                                                 (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
            if ( this )
            {
              AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_372:
              v317 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
              UnityEngine_WaitForEndOfFrame___ctor(v317, 0LL);
              v365->fields.__2__current = (Il2CppObject *)v317;
              v275 = &v365->fields.__2__current;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v365->fields.__2__current, (int32_t)v317, v318, v319);
              v278 = 8;
LABEL_373:
              *((_DWORD *)v275 - 2) = v278;
              return 1;
            }
            goto LABEL_416;
          }
          v343 = (Il2CppObject *)StringLiteral_1/*""*/;
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, v344) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v346 = LocalizationManager__Get((System_String_o *)StringLiteral_9185/*"NETWORK_ERROR_FIEND_CODE"*/, v345);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_416;
            DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)this, v347);
          }
          else
          {
            if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
            DispFriendCode = AndroidUtil__GetFriendCodeFromOldDat(0LL);
            if ( System_String__IsNullOrEmpty(DispFriendCode, 0LL) )
            {
LABEL_399:
              v351 = SingletonMonoBehaviour_object___get_Instance(*v73);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v352 = LocalizationManager__Get((System_String_o *)StringLiteral_9186/*"NETWORK_ERROR_READ_AUTH"*/, v350);
              v366.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
              v366.monitor = (void *)-1LL;
              v367 = v365->fields._readResult_5__2;
              v353 = System_Enum__ToString(&v366, 0LL);
              v354 = (System_String_o *)StringLiteral_1/*""*/;
              if ( v353 )
                v355 = (Il2CppObject *)v353;
              else
                v355 = (Il2CppObject *)StringLiteral_1/*""*/;
              v356 = System_String__Format_61389768(v352, v343, v355, 0LL);
              v359 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v357, v358);
              ErrorDialog_ClickDelegate___ctor(
                v359,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_EndQuitDialog__,
                0LL);
              if ( v351 )
              {
                CommonUI__OpenErrorDialog((CommonUI_o *)v351, v354, v356, v359, 0, 0LL);
                return 0;
              }
              goto LABEL_416;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v346 = LocalizationManager__Get((System_String_o *)StringLiteral_9185/*"NETWORK_ERROR_FIEND_CODE"*/, v349);
          }
          v343 = (Il2CppObject *)System_String__Format(v346, (Il2CppObject *)DispFriendCode, 0LL);
          goto LABEL_399;
        }
LABEL_374:
        v4 = v365;
        v365->fields._isCacheCheck_5__3 = 0;
LABEL_375:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        DataManager__Initialize((DataManager_o *)this, 0LL);
        if ( !v4->fields.isReboot && !v4->fields._isCacheCheck_5__3 )
        {
          v4->fields._isCacheCheck_5__3 = 1;
          v320 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v320 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v320->static_fields->RebootCacheClearKey, 0LL) )
          {
            v323 = (Il2CppObject *)sub_1B64314(ManagementManager___c__DisplayClass33_0_TypeInfo, v321, v322);
            System_Object___ctor(v323, 0LL);
            v324 = v4;
            v4->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v323;
            p__8__1 = (ServantStatusBattleListViewItem_o *)&v4->fields.__8__1;
            sub_1B6406C(p__8__1, (int32_t)v323, v326, v327);
            if ( !p__8__1->klass )
              goto LABEL_416;
            LOWORD(p__8__1->klass->_1.name) = 0;
            v328 = v73;
            v330 = SingletonMonoBehaviour_object___get_Instance(*v73);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v331 = LocalizationManager__Get((System_String_o *)StringLiteral_7343/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v329);
            v333 = LocalizationManager__Get((System_String_o *)StringLiteral_7341/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v332);
            v335 = LocalizationManager__Get((System_String_o *)StringLiteral_7340/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v334);
            v337 = LocalizationManager__Get((System_String_o *)StringLiteral_7339/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v336);
            klass = (Il2CppObject *)p__8__1->klass;
            v339 = v337;
            v342 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v340,
                                                            v341);
            CommonConfirmDialog_ClickDelegate___ctor(
              v342,
              klass,
              Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
              0LL);
            if ( !v330 )
              goto LABEL_416;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v330,
              v331,
              v333,
              v335,
              v339,
              v342,
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
            v73 = v328;
            v4 = v324;
LABEL_60:
            _8__1 = v4->fields.__8__1;
            if ( !_8__1 )
              goto LABEL_416;
            if ( !_8__1->fields.confirmed )
            {
              v269 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
              UnityEngine_WaitForEndOfFrame___ctor(v269, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v269;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v84, (int32_t)v269, v270, v271);
              v87 = 9;
              goto LABEL_414;
            }
            if ( _8__1->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_416;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v4->fields.__8__1 = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, 0, v2, v3);
          }
          else
          {
            v360 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v360 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v360->static_fields->RebootCacheClearKey, 1, 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
          }
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance(*v73);
        if ( this )
        {
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              started = UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          (System_Collections_IEnumerator_o *)this,
                          0LL);
              v4->fields.__2__current = (Il2CppObject *)started;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v84, (int32_t)started, v362, v363);
              v87 = 10;
              goto LABEL_414;
            }
          }
        }
LABEL_416:
        sub_1B64324(this);
      }
      v94 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v92, v93);
      UnityEngine_WaitForEndOfFrame___ctor(v94, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v94;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v84, (int32_t)v94, v95, v96);
      v87 = 4;
LABEL_414:
      *(_DWORD *)&v84[-1].fields.isMine = v87;
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
      v365 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_364;
    case 8:
      v365 = v4;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_49FBC51 )
      {
        sub_1B640C8(&DataManager_TypeInfo, v118);
        byte_49FBC51 = 1;
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
      v121 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v118, v119);
      NetworkManager_ResultCallbackFunc___ctor(
        v121,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v121,
                                                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v124 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v122, v123);
      UnityEngine_WaitForEndOfFrame___ctor(v124, 0LL);
      v4->fields._waitForServerTime_5__7 = v124;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v124, v125, v126);
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
        v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v84, (int32_t)waitForServerTime_5__7, v2, v3);
        v87 = 11;
        goto LABEL_414;
      }
      _4__this->fields.isReadGameData = 0;
      v127 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
      NetworkManager_ResultCallbackFunc___ctor(
        v127,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_object_(
                                                           v127,
                                                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( this )
      {
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v130 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v128, v129);
        UnityEngine_WaitForEndOfFrame___ctor(v130, 0LL);
        v4->fields._wait_5__8 = v130;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, (int32_t)v130, v131, v132);
LABEL_200:
        wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
        v4->fields.__2__current = wait_5__8;
        v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v84, (int32_t)wait_5__8, v2, v3);
        v87 = 12;
        goto LABEL_414;
      }
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_200;
      v135 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49F9C07 )
      {
        sub_1B640C8(&NetworkManager_TypeInfo, v134);
        byte_49F9C07 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v135 )
        goto LABEL_416;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v135,
        (System_String_o *)StringLiteral_5097/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v137 = UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   MasterData,
                   0LL);
          v4->fields.__2__current = (Il2CppObject *)v137;
          v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(v84, (int32_t)v137, v138, v139);
          v87 = 13;
          goto LABEL_414;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v142 = UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v142;
            v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(v84, (int32_t)v142, v143, v144);
            v87 = 15;
            goto LABEL_414;
          }
        }
      }
      goto LABEL_416;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_49FBC52 )
      {
        sub_1B640C8(&DataManager_TypeInfo, v140);
        byte_49FBC52 = 1;
      }
      v141 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v141 = DataManager_TypeInfo;
      }
      if ( v141->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v141->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v141);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v248 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v246, v247);
      UnityEngine_WaitForEndOfFrame___ctor(v248, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v248;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v84, (int32_t)v248, v249, v250);
      v87 = 14;
      goto LABEL_414;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_375;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_49FBC53 )
      {
        sub_1B640C8(&DataManager_TypeInfo, v145);
        byte_49FBC53 = 1;
      }
      v146 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v146 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v146->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_38139520((NetworkManager_o *)this, v272);
          v273 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v273);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v274 = UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v274;
              v275 = &v4->fields.__2__current;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v274, v276, v277);
              v278 = 18;
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
        v149 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v150 = LocalizationManager__Get((System_String_o *)StringLiteral_9192/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v148);
        v153 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v151, v152);
        ErrorDialog_ClickDelegate___ctor(v153, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v149 )
          goto LABEL_416;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v149,
          (System_String_o *)StringLiteral_1/*""*/,
          v150,
          v153,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v73 = (const MethodInfo_36EC03C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v154 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
          UnityEngine_WaitForEndOfFrame___ctor(v154, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v154;
          v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(v84, (int32_t)v154, v155, v156);
          v87 = 16;
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
      v280 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v281 = LocalizationManager__Get((System_String_o *)StringLiteral_9193/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v279);
      v284 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v282, v283);
      ErrorDialog_ClickDelegate___ctor(v284, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v280 )
        goto LABEL_416;
      CommonUI__OpenRetryDialog((CommonUI_o *)v280, (System_String_o *)StringLiteral_1/*""*/, v281, v284, 0, 0LL);
      v73 = (const MethodInfo_36EC03C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_334:
      if ( _4__this->fields.isErrorDialog )
      {
        v285 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v285, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v285;
        v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v84, (int32_t)v285, v286, v287);
        v87 = 17;
        goto LABEL_414;
      }
LABEL_336:
      v4->fields._waitForServerTime_5__7 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, 0, v2, v3);
      v4->fields._wait_5__8 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, 0, v288, v289);
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
      v4->fields.__1__state = -1;
      LODWORD(v366.klass) = 0;
      v157 = j_il2cpp_value_box_0(int_TypeInfo, &v366);
      v4->fields.__2__current = (Il2CppObject *)v157;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, v157, v158, v159);
      v4->fields.__1__state = 19;
      return 1;
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
        v162 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v160, v161);
        UnityEngine_WaitForEndOfFrame___ctor(v162, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v162;
        v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v84, (int32_t)v162, v163, v164);
        v87 = 20;
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
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_209:
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( this )
            {
              if ( !BYTE2(this->fields.__8__1) )
              {
                v243 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                            UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                            v193,
                                                            v194);
                UnityEngine_WaitForEndOfFrame___ctor(v243, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v243;
                v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B6406C(v84, (int32_t)v243, v244, v245);
                v87 = 25;
                goto LABEL_414;
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
              if ( _4__this )
              {
                if ( this )
                {
                  v195 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                           (AssetManager_o *)this,
                           (System_String_o *)StringLiteral_12420/*"SYSTEM"*/,
                           _4__this->fields.downloadParallelMax,
                           0LL);
                  v196 = UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                           (UnityEngine_MonoBehaviour_o *)_4__this,
                           v195,
                           0LL);
                  v4->fields.__2__current = (Il2CppObject *)v196;
                  v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B6406C(v84, (int32_t)v196, v197, v198);
                  v87 = 26;
                  goto LABEL_414;
                }
              }
            }
          }
        }
        else
        {
LABEL_214:
          v199 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LocalizationManager__LoadAssetData((const MethodInfo *)v199);
LABEL_217:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_49FBC55 )
          {
            sub_1B640C8(&LocalizationManager_TypeInfo, method);
            byte_49FBC55 = 1;
          }
          v200 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v200 = LocalizationManager_TypeInfo;
          }
          if ( v200->static_fields->isBusySetAssetData )
          {
            v201 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
            UnityEngine_WaitForEndOfFrame___ctor(v201, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v201;
            v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(v84, (int32_t)v201, v202, v203);
            v87 = 29;
            goto LABEL_414;
          }
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          FSUtility__LoadAssetData(0LL);
LABEL_228:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          if ( !byte_49FBC56 )
          {
            sub_1B640C8(&FSUtility_TypeInfo, method);
            byte_49FBC56 = 1;
          }
          v204 = FSUtility_TypeInfo;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            v204 = FSUtility_TypeInfo;
          }
          if ( v204->static_fields->isBusySetAssetData )
          {
            v205 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
            UnityEngine_WaitForEndOfFrame___ctor(v205, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v205;
            v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(v84, (int32_t)v205, v206, v207);
            v87 = 30;
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
              v210 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v208, v209);
              UnityEngine_WaitForEndOfFrame___ctor(v210, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v210;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v84, (int32_t)v210, v211, v212);
              v87 = 31;
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
                  v216 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v213,
                                                              v214);
                  UnityEngine_WaitForEndOfFrame___ctor(v216, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v216;
                  v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B6406C(v84, (int32_t)v216, v217, v218);
                  v87 = 32;
                  goto LABEL_414;
                }
              }
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_257:
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  if ( LOBYTE(this[9].fields.__2__current) )
                  {
                    v221 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                                UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                v219,
                                                                v220);
                    UnityEngine_WaitForEndOfFrame___ctor(v221, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v221;
                    v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B6406C(v84, (int32_t)v221, v222, v223);
                    v87 = 33;
                    goto LABEL_414;
                  }
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__initializeAssetStorage(0LL);
LABEL_263:
                  this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                  if ( this )
                  {
                    if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
                    {
                      v226 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  v224,
                                                                  v225);
                      UnityEngine_WaitForEndOfFrame___ctor(v226, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v226;
                      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B6406C(v84, (int32_t)v226, v227, v228);
                      v87 = 34;
                      goto LABEL_414;
                    }
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( this )
                    {
                      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_268:
                      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                      if ( this )
                      {
                        if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
                        {
                          v231 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                      v229,
                                                                      v230);
                          UnityEngine_WaitForEndOfFrame___ctor(v231, 0LL);
                          v4->fields.__2__current = (Il2CppObject *)v231;
                          v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1B6406C(v84, (int32_t)v231, v232, v233);
                          v87 = 35;
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
                          if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9254/*"NOW_LOADING"*/, 0LL) )
                          {
                            if ( !SoundManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                            SoundManager__fadeoutBgm(1.0, 0LL);
                            v236 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(
                                                                     UnityEngine_WaitForSeconds_TypeInfo,
                                                                     v234,
                                                                     v235);
                            UnityEngine_WaitForSeconds___ctor(v236, 1.0, 0LL);
                            v4->fields.__2__current = (Il2CppObject *)v236;
                            v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                            sub_1B6406C(v84, (int32_t)v236, v237, v238);
                            v87 = 36;
                            goto LABEL_414;
                          }
LABEL_284:
                          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                        }
                        else
                        {
                          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode(
                                                                               (CommonUI_o *)this,
                                                                               3,
                                                                               0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( this )
                            {
                              CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_341:
                              v290 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                          v183,
                                                                          v184);
                              UnityEngine_WaitForEndOfFrame___ctor(v290, 0LL);
                              v4->fields.__2__current = (Il2CppObject *)v290;
                              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                              sub_1B6406C(v84, (int32_t)v290, v291, v292);
                              v87 = 37;
                              goto LABEL_414;
                            }
                            goto LABEL_416;
                          }
                        }
                        if ( _4__this )
                        {
                          ManagementManager__BuildInfoOff(_4__this, v239);
                          LODWORD(v366.klass) = 0;
                          v240 = j_il2cpp_value_box_0(int_TypeInfo, &v366);
                          v4->fields.__2__current = (Il2CppObject *)v240;
                          v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1B6406C(v84, v240, v241, v242);
                          v87 = 38;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_300:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v266 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v254, v255);
              UnityEngine_WaitForEndOfFrame___ctor(v266, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v266;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v84, (int32_t)v266, v267, v268);
              v87 = 21;
              goto LABEL_414;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this )
            {
              if ( this )
              {
                AssetManager__DownloadAssetStorageAttribute(
                  (AssetManager_o *)this,
                  (System_String_o *)StringLiteral_12420/*"SYSTEM"*/,
                  _4__this->fields.downloadParallelMax,
                  0LL);
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                if ( AssetManager__getDownloadSize(0LL) >= 1 )
                {
                  v256 = ManagerConfig_TypeInfo;
                  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                    v256 = ManagerConfig_TypeInfo;
                  }
                  if ( v256->static_fields->UseStandaloneAsset )
                  {
                    v4->fields._isLoad_5__4 = 1;
                    if ( !SoundManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    SoundManager__playBgm((System_String_o *)StringLiteral_9254/*"NOW_LOADING"*/, 0LL);
                    this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_314:
                      v257 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  v165,
                                                                  v166);
                      UnityEngine_WaitForEndOfFrame___ctor(v257, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v257;
                      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B6406C(v84, (int32_t)v257, v258, v259);
                      v87 = 22;
                      goto LABEL_414;
                    }
                    goto LABEL_416;
                  }
LABEL_146:
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                  if ( AssetManager__getDownloadSize(0LL) >= 1 )
                  {
                    v169 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                                UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                v167,
                                                                v168);
                    UnityEngine_WaitForEndOfFrame___ctor(v169, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v169;
                    v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B6406C(v84, (int32_t)v169, v170, v171);
                    v87 = 23;
                    goto LABEL_414;
                  }
                }
LABEL_315:
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                AssetManager__SetOnlineStatus(0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( this )
                {
                  NetworkManager__SetServerSetting_38139520((NetworkManager_o *)this, v260);
                  v263 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v261, v262);
                  UnityEngine_WaitForSeconds___ctor(v263, 0.1, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v263;
                  v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B6406C(v84, (int32_t)v263, v264, v265);
                  v87 = 24;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      if ( !byte_49FBC54 )
      {
        sub_1B640C8(&LogoMain_TypeInfo, v172);
        byte_49FBC54 = 1;
      }
      v173 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v173 = LogoMain_TypeInfo;
      }
      if ( !v173->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9254/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v176 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v174, v175);
      UnityEngine_WaitForEndOfFrame___ctor(v176, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v176;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v84, (int32_t)v176, v177, v178);
      v87 = 27;
      goto LABEL_414;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_295:
      v251 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v179, v180);
      UnityEngine_WaitForEndOfFrame___ctor(v251, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v251;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v84, (int32_t)v251, v252, v253);
      v87 = 28;
      goto LABEL_414;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_295;
      v181 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v181 = (_QWORD *)sub_1B640E0(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v182 = (System_Reflection_MethodBase_o *)sub_1B640AC(v181, v181[4]);
      OverwriteAssetSoundName__PlaySystemSe(v182, 0, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_341;
      v185 = Method_ManagementManager__startCheckAll_d__33_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__33_MoveNext__ + 83) & 2) != 0 )
        v185 = (_QWORD *)sub_1B640E0(Method_ManagementManager__startCheckAll_d__33_MoveNext__);
      v186 = (System_Reflection_MethodBase_o *)sub_1B640AC(v185, v185[4]);
      OverwriteAssetSoundName__PlaySystemSe(v186, 0, 0LL);
      goto LABEL_284;
    case 0x26:
      p_fields->__1__state = -1;
      v187 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v187 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v187->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication(0LL);
        OptionManager__SetNotiffication(Notiffication, 1, 0LL);
        v190 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v190 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v190->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v188);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v191);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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