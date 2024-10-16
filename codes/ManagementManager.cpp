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

  if ( (byte_4AB5582 & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_8034/*"IsNotificationStatusSend"*/, v4);
    sub_1BAB41C(&StringLiteral_8046/*"IsReBootCacheClearKey"*/, v5);
    sub_1BAB41C(&StringLiteral_20938/*"ja-JP"*/, v6);
    sub_1BAB41C(&StringLiteral_24937/*"yyyy年MM月dd日HH時mm分"*/, v7);
    byte_4AB5582 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8034/*"IsNotificationStatusSend"*/;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)ManagementManager_TypeInfo->static_fields,
    StringLiteral_8034/*"IsNotificationStatusSend"*/,
    v2,
    v3);
  v8 = StringLiteral_8046/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8046/*"IsReBootCacheClearKey"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->RebootCacheClearKey, v8, v10, v11);
  v12 = StringLiteral_24937/*"yyyy年MM月dd日HH時mm分"*/;
  v13 = ManagementManager_TypeInfo->static_fields;
  v13->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24937/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v13->DATE_TIME_DISP_FORMAT, v12, v14, v15);
  v16 = StringLiteral_20938/*"ja-JP"*/;
  v17 = ManagementManager_TypeInfo->static_fields;
  v17->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20938/*"ja-JP"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v17->DEFAULT_CULTURE_NAME, v16, v18, v19);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5581 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_4AB5581 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_378A644 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  if ( (byte_4AB556C & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1BAB41C(&string___TypeInfo, v8);
    sub_1BAB41C(&StringLiteral_832/*"):"*/, v9);
    sub_1BAB41C(&StringLiteral_6727/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1BAB41C(&StringLiteral_791/*"(ratio: "*/, v11);
    byte_4AB556C = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6727/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1BAB4C4(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v12, v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v17 = StringLiteral_791/*"(ratio: "*/;
      v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_791/*"(ratio: "*/;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.AvalonSceneManager, v17, v15, v16);
      this = (ManagementManager_o *)System_Single__ToString(v18, (const MethodInfo *)&v28);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.debugInfoRootObject, (int32_t)this, v19, v20),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v23 = StringLiteral_832/*"):"*/,
            v14->fields.statusLabel = (struct UILabel_o *)StringLiteral_832/*"):"*/,
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.statusLabel, v23, v21, v22),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1BAB680(this, errorText);
      }
      v14->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1BAB3C0(
        (ServantStatusBattleListViewItem_o *)&v14->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v24,
        v25);
      v26 = (Il2CppObject *)System_String__Concat_62061656((System_String_array *)v14, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v26, 0LL);
      return;
    }
LABEL_19:
    sub_1BAB678(this, errorText);
  }
  v27 = (Il2CppObject *)System_String__Concat_62048128(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v27, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4AB5568 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_4AB5568 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_378A598 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4AB557F & 1) == 0 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, boot);
    byte_4AB557F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4AB557E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, method);
    byte_4AB557E = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1BAB678(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4AB5566 & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager_TypeInfo, v1);
    byte_4AB5566 = 1;
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

  if ( (byte_4AB5574 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_4AB5574 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4AB5573 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4AB5573 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69594576(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4AB5572 & 1) != 0 )
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
    sub_1BAB41C(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4AB5572 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69594576(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB556E & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager__InitializeAdManagerAndFirebase_d__35_TypeInfo, method);
    byte_4AB556E = 1;
  }
  v3 = sub_1BAB668(ManagementManager__InitializeAdManagerAndFirebase_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4AB557B & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager_TypeInfo, method);
    byte_4AB557B = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4AB4E4F )
  {
    sub_1BAB41C(&ManagementManager_TypeInfo, method);
    byte_4AB4E4F = 1;
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

  if ( (byte_4AB557C & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v2);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_4AB557C = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v7);
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

  if ( (byte_4AB5580 & 1) == 0 )
  {
    sub_1BAB41C(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1BAB41C(&ManagementManager_TypeInfo, v2);
    byte_4AB5580 = 1;
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

  if ( (byte_4AB5567 & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager_TypeInfo, v1);
    byte_4AB5567 = 1;
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

  if ( (byte_4AB556F & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager__SetupFirebaseAppCheck_d__36_TypeInfo, method);
    byte_4AB556F = 1;
  }
  v2 = sub_1BAB668(ManagementManager__SetupFirebaseAppCheck_d__36_TypeInfo);
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

  if ( (byte_4AB5569 & 1) == 0 )
  {
    sub_1BAB41C(&AndroidUtil_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Application_TypeInfo, v3);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    sub_1BAB41C(&System_Type_TypeInfo, v5);
    sub_1BAB41C(&UnityGamingServicesBehaviour_var, v6);
    byte_4AB5569 = 1;
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
    sub_1BAB678(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4AB557D & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1BAB41C(&UnityEngine_Application_TypeInfo, method);
    byte_4AB557D = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_69594576(0LL);
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

  if ( (byte_4AB557A & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager_TypeInfo, result);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4AB557A = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v6);
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
  _BOOL8 _38072332; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4AB5579 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1BAB41C(&ManagerConfig_TypeInfo, v4);
    sub_1BAB41C(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1BAB41C(&NetworkManager_TypeInfo, v6);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BAB41C(&TutorialFlag_TypeInfo, v8);
    byte_4AB5579 = 1;
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
  _38072332 = TutorialFlag__Get_38072332(102, 0LL);
  if ( _38072332 )
  {
LABEL_9:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v14);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1BAB678(0LL, v16);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_38072332, v11, v12);
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

  if ( (byte_4AB5577 & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager_TypeInfo, result);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4AB5577 = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v7);
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

  if ( (byte_4AB5576 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ManagementManager_callbackTopHome__, result);
    sub_1BAB41C(&ManagerConfig_TypeInfo, v4);
    sub_1BAB41C(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1BAB41C(&NetworkManager_TypeInfo, v6);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BAB41C(&TutorialFlag_TypeInfo, v8);
    byte_4AB5576 = 1;
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
  if ( TutorialFlag__Get_38072332(102, 0LL) )
  {
LABEL_9:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v13);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1BAB678(0LL, v15);
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

  if ( (byte_4AB556A & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1BAB41C(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_4642/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1BAB41C(&StringLiteral_9157/*"MovieRoot"*/, v7);
    byte_4AB556A = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4642/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_1BAB668(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_9157/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  v11,
                  (const MethodInfo_2F13888 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_1BAB3C0(
            (ServantStatusBattleListViewItem_o *)&this->fields._videoPlayer_k__BackingField,
            (int32_t)v14,
            v15,
            v16),
          !v10)
      || (v17 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v17) )
    {
      sub_1BAB678(Component_object, v13);
    }
    AvalonVideoPlayer__initialize(v17, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34025648(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB5564 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_4AB5564 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4AB5565 & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager_TypeInfo, v1);
    byte_4AB5565 = 1;
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

  if ( (byte_4AB556B & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, isLogin);
    sub_1BAB41C(&CTouch_TypeInfo, v7);
    sub_1BAB41C(&CommonEffectManager_TypeInfo, v8);
    sub_1BAB41C(&FirebaseScript_TypeInfo, v9);
    sub_1BAB41C(&System_GC_TypeInfo, v10);
    sub_1BAB41C(&ManagementManager_TypeInfo, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v14);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v15);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v17);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_1BAB41C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_1BAB41C(&SoundManager_TypeInfo, v21);
    byte_4AB556B = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1BAB678(Instance, v24);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_63094196(0LL);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v25 )
      sub_1BAB678(0LL, v26);
    AdManager__Initialize((AdManager_o *)v25, 2, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    v28 = ManagementManager__startCheckAll(this, 1, isLogin, v27);
    UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
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

  if ( (byte_4AB5575 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4AB5575 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1BAB668(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v7);
  if ( !Instance )
    sub_1BAB678(v8, v9);
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

  if ( (byte_4AB5578 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4AB5578 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1BAB668(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v7);
  if ( !Instance )
    sub_1BAB678(v8, v9);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v10);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1BAB3C0(
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

  if ( (byte_4AB556D & 1) == 0 )
  {
    sub_1BAB41C(&ManagementManager__startCheckAll_d__34_TypeInfo, isReboot);
    byte_4AB556D = 1;
  }
  v7 = isLogin;
  v8 = sub_1BAB668(ManagementManager__startCheckAll_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5570 & 1) == 0 )
  {
    sub_1BAB41C(&DataManager_TypeInfo, method);
    byte_4AB5570 = 1;
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

  if ( (byte_4AB5571 & 1) == 0 )
  {
    sub_1BAB41C(&DataManager_TypeInfo, method);
    sub_1BAB41C(&ScrTerminalListTop_TypeInfo, v2);
    sub_1BAB41C(&ServantCommentManager_TypeInfo, v3);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v4);
    byte_4AB5571 = 1;
  }
  MovieFileMerge__Delete_38134336(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2ECA )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v6);
    byte_4AB2ECA = 1;
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
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  ManagementManager_o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_4AB5584 & 1) == 0 )
  {
    sub_1BAB41C(&FirebaseScript_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_1BAB41C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_4AB5584 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1BAB678(0LL, v12);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v13 )
      sub_1BAB678(0LL, v14);
    AdManager__Initialize((AdManager_o *)v13, 1, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    if ( !_4__this )
      sub_1BAB678(v15, v16);
    v17 = ManagementManager__SetupFirebaseAppCheck(v15, v16);
    UnityEngine_MonoBehaviour__StartCoroutine_69785892(_4__this, v17, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__35_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  FirebaseScript_c *v12; // x0
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  FirebaseScript_c *v16; // x0
  FirebaseScript_c *v17; // x0
  Il2CppObject **v18; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  FirebaseScript_c *v21; // x0
  FirebaseScript_c *v22; // x0
  System_String_o *prevKeyName_5__3; // x0
  System_String_o *v24; // x1
  __int64 v25; // x1
  float time; // s8
  FirebaseScript_c *v27; // x0
  float beginTime_5__2; // s9
  FirebaseScript_c *v29; // x0
  float v30; // s8
  char IsNullOrEmpty; // w0
  char v32; // w22
  bool v33; // w23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x20
  FirebaseScript_c *v44; // x0
  char v45[4]; // [xsp+8h] [xbp-48h] BYREF
  float v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4AB5585 & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, method);
    sub_1BAB41C(&FirebaseScript_TypeInfo, v5);
    sub_1BAB41C(&float_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_867/*", AppCheckErrorMessage: "*/, v7);
    sub_1BAB41C(&StringLiteral_16841/*"appCheckPrevMessage"*/, v8);
    sub_1BAB41C(&StringLiteral_5899/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v9);
    sub_1BAB41C(&StringLiteral_7972/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/, v10);
    byte_4AB5585 = 1;
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
      if ( !byte_4AB5681 )
      {
        sub_1BAB41C(&FirebaseScript_TypeInfo, method);
        byte_4AB5681 = 1;
      }
      v12 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v12 = FirebaseScript_TypeInfo;
      }
      v12->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0LL);
      v13 = StringLiteral_16841/*"appCheckPrevMessage"*/;
      this->fields._prevKeyName_5__3 = (struct System_String_o *)StringLiteral_16841/*"appCheckPrevMessage"*/;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._prevKeyName_5__3, v13, v14, v15);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4AB5682 )
      {
        sub_1BAB41C(&FirebaseScript_TypeInfo, method);
        byte_4AB5682 = 1;
      }
      v16 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v16 = FirebaseScript_TypeInfo;
      }
      if ( !v16->static_fields->_IsFirebaseInitialized_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p__2__current, 0, v2, v3);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !v16->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v16);
      if ( !FirebaseScript__GetAppCheckToken(0LL) )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4AB5683 )
        {
          sub_1BAB41C(&FirebaseScript_TypeInfo, method);
          byte_4AB5683 = 1;
        }
        v21 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v21 = FirebaseScript_TypeInfo;
        }
        if ( v21->static_fields->_IsSendAppCheckToken_k__BackingField )
          return 0;
        if ( !v21->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v21);
        if ( !byte_4AB54B1 )
        {
          sub_1BAB41C(&FirebaseScript_TypeInfo, method);
          byte_4AB54B1 = 1;
        }
        v22 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v22 = FirebaseScript_TypeInfo;
        }
        if ( v22->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        prevKeyName_5__3 = this->fields._prevKeyName_5__3;
        v24 = (System_String_o *)StringLiteral_7972/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        goto LABEL_71;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4AB54B2 )
      {
        sub_1BAB41C(&FirebaseScript_TypeInfo, method);
        byte_4AB54B2 = 1;
      }
      v17 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v17 = FirebaseScript_TypeInfo;
      }
      if ( v17->static_fields->_IsRunningGetAppCheckToken_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        v18 = &this->fields.__2__current;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v18, 0, v2, v3);
        *((_DWORD *)v18 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0LL);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4AB5683 )
      {
        sub_1BAB41C(&FirebaseScript_TypeInfo, v25);
        byte_4AB5683 = 1;
      }
      v27 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v27 = FirebaseScript_TypeInfo;
      }
      if ( v27->static_fields->_IsSendAppCheckToken_k__BackingField )
        return 0;
      beginTime_5__2 = this->fields._beginTime_5__2;
      if ( !v27->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v27);
      if ( !byte_4AB5684 )
      {
        sub_1BAB41C(&FirebaseScript_TypeInfo, v25);
        byte_4AB5684 = 1;
      }
      v29 = FirebaseScript_TypeInfo;
      v30 = time - beginTime_5__2;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v29 = FirebaseScript_TypeInfo;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v29->static_fields->_AppCheckToken_k__BackingField, 0LL);
      v32 = ~IsNullOrEmpty;
      v33 = (IsNullOrEmpty & 1) == 0;
      v46 = v30;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v46, v34, v35, v36);
      v45[0] = v33;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v45, v38, v39, v40);
      v43 = System_String__Format_62062500((System_String_o *)StringLiteral_5899/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v37, v41, 0LL);
      if ( (v32 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4AB5685 )
        {
          sub_1BAB41C(&FirebaseScript_TypeInfo, v42);
          byte_4AB5685 = 1;
        }
        v44 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v44 = FirebaseScript_TypeInfo;
        }
        v43 = System_String__Concat_62059388(
                v43,
                (System_String_o *)StringLiteral_867/*", AppCheckErrorMessage: "*/,
                v44->static_fields->_AppCheckTokenError_k__BackingField,
                0LL);
      }
      prevKeyName_5__3 = this->fields._prevKeyName_5__3;
      v24 = v43;
LABEL_71:
      UnityEngine_PlayerPrefs__SetString(prevKeyName_5__3, v24, 0LL);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_ManagementManager__SetupFirebaseAppCheck_d__36_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4AB5583 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, flag);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BAB41C(&Method_ManagementManager___c__DisplayClass34_1__startCheckAll_b__1__, v6);
    sub_1BAB41C(&ManagementManager___c__DisplayClass34_1_TypeInfo, v7);
    byte_4AB5583 = 1;
  }
  v8 = sub_1BAB668(ManagementManager___c__DisplayClass34_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass34_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BAB678(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30637300((CommonUI_o *)Instance, v14, 0LL);
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
    sub_1BAB678(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  ManagementManager__startCheckAll_d__34_o *v4; // x25
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
  ManagementManager__startCheckAll_d__34_Fields *p_fields; // x8
  const MethodInfo_378A22C **v73; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v76; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x25
  int32_t v78; // w2
  int32_t v79; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v81; // x0
  ServantStatusBattleListViewItem_o *v82; // x25
  int32_t v83; // w2
  int32_t v84; // w3
  int v85; // w8
  System_Collections_IEnumerator_o *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  OptionManager_c *v89; // x0
  const MethodInfo *v90; // x0
  const MethodInfo *v91; // x0
  UnityEngine_WaitForEndOfFrame_o *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  ManagementManager__startCheckAll_d__34_o *v97; // x21
  int32_t v98; // w1
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w1
  int32_t v102; // w2
  int32_t v103; // w3
  int32_t v104; // w1
  int32_t v105; // w2
  int32_t v106; // w3
  EncryptedPlayerPrefs_c *v107; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v109; // x20
  int32_t v110; // w2
  int32_t v111; // w3
  const MethodInfo *v112; // x1
  struct ManagementManager___c__DisplayClass34_0_o *_8__1; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v115; // x21
  const MethodInfo *v116; // x3
  UnityEngine_WaitForEndOfFrame_o *v117; // x20
  int32_t v118; // w2
  int32_t v119; // w3
  NetworkManager_ResultCallbackFunc_o *v120; // x21
  const MethodInfo *v121; // x3
  UnityEngine_WaitForEndOfFrame_o *v122; // x20
  int32_t v123; // w2
  int32_t v124; // w3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v126; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  DataManager_c *v131; // x0
  UnityEngine_Coroutine_o *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  DataManager_c *v135; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v137; // x21
  System_String_o *v138; // x22
  ErrorDialog_ClickDelegate_o *v139; // x23
  UnityEngine_WaitForEndOfFrame_o *v140; // x20
  int32_t v141; // w2
  int32_t v142; // w3
  UnityEngine_WaitForEndOfFrame_o *v143; // x20
  int32_t v144; // w2
  int32_t v145; // w3
  UnityEngine_WaitForEndOfFrame_o *v146; // x20
  int32_t v147; // w2
  int32_t v148; // w3
  __int64 v149; // x1
  LogoMain_c *v150; // x0
  UnityEngine_WaitForEndOfFrame_o *v151; // x20
  int32_t v152; // w2
  int32_t v153; // w3
  _QWORD *v154; // x0
  System_Reflection_MethodBase_o *v155; // x0
  const MethodInfo *v156; // x2
  _QWORD *v157; // x0
  System_Reflection_MethodBase_o *v158; // x0
  const MethodInfo *v159; // x2
  ManagementManager_c *v160; // x0
  const MethodInfo *v161; // x2
  OptionManager_c *v162; // x0
  bool Notiffication; // w0
  const MethodInfo *v164; // x2
  ManagementManager_c *v165; // x0
  const MethodInfo *v166; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v168; // x0
  UnityEngine_Coroutine_o *v169; // x0
  int32_t v170; // w2
  int32_t v171; // w3
  LocalizationManager_c *v172; // x0
  UnityEngine_WaitForEndOfFrame_o *v173; // x20
  int32_t v174; // w2
  int32_t v175; // w3
  FSUtility_c *v176; // x0
  UnityEngine_WaitForEndOfFrame_o *v177; // x20
  int32_t v178; // w2
  int32_t v179; // w3
  UnityEngine_WaitForEndOfFrame_o *v180; // x20
  int32_t v181; // w2
  int32_t v182; // w3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v184; // x20
  int32_t v185; // w2
  int32_t v186; // w3
  UnityEngine_WaitForEndOfFrame_o *v187; // x20
  int32_t v188; // w2
  int32_t v189; // w3
  UnityEngine_WaitForEndOfFrame_o *v190; // x20
  int32_t v191; // w2
  int32_t v192; // w3
  UnityEngine_WaitForEndOfFrame_o *v193; // x20
  int32_t v194; // w2
  int32_t v195; // w3
  UnityEngine_WaitForSeconds_o *v196; // x20
  int32_t v197; // w2
  int32_t v198; // w3
  int32_t v199; // w2
  int32_t v200; // w3
  UnityEngine_WaitForEndOfFrame_o *v201; // x20
  int32_t v202; // w2
  int32_t v203; // w3
  UnityEngine_WaitForEndOfFrame_o *v204; // x20
  int32_t v205; // w2
  int32_t v206; // w3
  UnityEngine_WaitForEndOfFrame_o *v207; // x20
  int32_t v208; // w2
  int32_t v209; // w3
  ManagerConfig_c *v210; // x0
  UnityEngine_WaitForEndOfFrame_o *v211; // x20
  int32_t v212; // w2
  int32_t v213; // w3
  UnityEngine_WaitForSeconds_o *v214; // x20
  int32_t v215; // w2
  int32_t v216; // w3
  UnityEngine_WaitForEndOfFrame_o *v217; // x20
  int32_t v218; // w2
  int32_t v219; // w3
  UnityEngine_WaitForEndOfFrame_o *v220; // x20
  int32_t v221; // w2
  int32_t v222; // w3
  ManagementManager_c *v223; // x0
  UnityEngine_Coroutine_o *v224; // x0
  Il2CppObject **v225; // x19
  int32_t v226; // w2
  int32_t v227; // w3
  int v228; // w8
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
  System_Action_object__o *v243; // x21
  System_Action_object__o *v244; // x22
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v248; // x0
  ManagerConfig_c *v249; // x0
  const MethodInfo_378A22C **v250; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v252; // x22
  ErrorDialog_ClickDelegate_o *v253; // x23
  UnityEngine_WaitForEndOfFrame_o *v254; // x20
  int32_t v255; // w2
  int32_t v256; // w3
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v258; // x21
  const MethodInfo *v259; // x3
  UnityEngine_WaitForEndOfFrame_o *v260; // x20
  int32_t v261; // w2
  int32_t v262; // w3
  ManagementManager_c *v263; // x0
  const MethodInfo_378A22C **v264; // x28
  Il2CppObject *v265; // x21
  Il2CppObject **p__8__1; // x23
  int32_t v267; // w2
  int32_t v268; // w3
  ManagementManager__startCheckAll_d__34_o *v269; // x19
  Il2CppObject *v270; // x21
  System_String_o *v271; // x22
  System_String_o *v272; // x24
  System_String_o *v273; // x25
  System_String_o *v274; // x0
  Il2CppObject *v275; // x27
  System_String_o *v276; // x23
  CommonConfirmDialog_ClickDelegate_o *v277; // x26
  Il2CppObject *v278; // x21
  System_String_o *v279; // x21
  System_String_o *DispFriendCode; // x22
  Il2CppObject *v281; // x22
  System_String_o *v282; // x23
  System_String_o *v283; // x0
  System_String_o *v284; // x19
  Il2CppObject *v285; // x2
  System_String_o *v286; // x21
  ErrorDialog_ClickDelegate_o *v287; // x23
  ManagementManager_c *v288; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v290; // w2
  int32_t v291; // w3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__34_o *v293; // [xsp+40h] [xbp-80h]
  System_Enum_o v294; // [xsp+48h] [xbp-78h] BYREF
  int32_t v295; // [xsp+58h] [xbp-68h]

  v4 = this;
  if ( (byte_4AB5586 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_string__TypeInfo, method);
    sub_1BAB41C(&AndroidUtil_TypeInfo, v5);
    sub_1BAB41C(&UnityEngine_Application_TypeInfo, v6);
    sub_1BAB41C(&AssetManager_TypeInfo, v7);
    sub_1BAB41C(&AtlasManager_TypeInfo, v8);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1BAB41C(&ErrorDialog_ClickDelegate_TypeInfo, v10);
    sub_1BAB41C(&CommonServicePluginScript_TypeInfo, v11);
    sub_1BAB41C(&DataManager_TypeInfo, v12);
    sub_1BAB41C(&EncryptedPlayerPrefs_TypeInfo, v13);
    sub_1BAB41C(&FSUtility_TypeInfo, v14);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v15);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v16);
    sub_1BAB41C(&LogoMain_TypeInfo, v17);
    sub_1BAB41C(&Method_ManagementManager_EndLogDialog__, v18);
    sub_1BAB41C(&Method_ManagementManager_EndQuitDialog__, v19);
    sub_1BAB41C(&Method_ManagementManager_EndRetryDialog__, v20);
    sub_1BAB41C(&Method_ManagementManager_NotifyRequestPermissionsDenied__, v21);
    sub_1BAB41C(&Method_ManagementManager_NotifyRequestPermissionsGranted__, v22);
    sub_1BAB41C(&Method_ManagementManager_callbackAccountRegist__, v23);
    sub_1BAB41C(&Method_ManagementManager_callbackTopGameData__, v24);
    sub_1BAB41C(&ManagementManager_TypeInfo, v25);
    sub_1BAB41C(&ManagerConfig_TypeInfo, v26);
    sub_1BAB41C(&Method_NetworkManager_getRequest_AccountRegistRequest___, v27);
    sub_1BAB41C(&Method_NetworkManager_getRequest_TopGameDataRequest___, v28);
    sub_1BAB41C(&NetworkManager_TypeInfo, v29);
    sub_1BAB41C(&OptionManager_TypeInfo, v30);
    sub_1BAB41C(&PurchaseBehaviour_TypeInfo, v31);
    sub_1BAB41C(&NetworkManager_ReadResult_TypeInfo, v32);
    sub_1BAB41C(&ResolutionManager_TypeInfo, v33);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v34);
    sub_1BAB41C(&ServantCommentManager_TypeInfo, v35);
    sub_1BAB41C(&SignedData_TypeInfo, v36);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v37);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v38);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v39);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v41);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v42);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v43);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v44);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v45);
    sub_1BAB41C(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v46);
    sub_1BAB41C(&SoundManager_TypeInfo, v47);
    sub_1BAB41C(&string___TypeInfo, v48);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v49);
    sub_1BAB41C(&Method_ManagementManager___c__DisplayClass34_0__startCheckAll_b__0__, v50);
    sub_1BAB41C(&ManagementManager___c__DisplayClass34_0_TypeInfo, v51);
    sub_1BAB41C(&Method_ManagementManager__startCheckAll_d__34_MoveNext__, v52);
    sub_1BAB41C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v53);
    sub_1BAB41C(&UnityEngine_WaitForSeconds_TypeInfo, v54);
    sub_1BAB41C(&StringLiteral_7374/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v55);
    sub_1BAB41C(&StringLiteral_9301/*"NOW_LOADING"*/, v56);
    sub_1BAB41C(&StringLiteral_9231/*"NETWORK_ERROR_DISK_FULL"*/, v57);
    sub_1BAB41C(&StringLiteral_6356/*"F39UThNh"*/, v58);
    sub_1BAB41C(&StringLiteral_7377/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v59);
    sub_1BAB41C(&StringLiteral_7375/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v60);
    sub_1BAB41C(&StringLiteral_7373/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v61);
    sub_1BAB41C(&StringLiteral_5121/*"DataServerFolderName"*/, v62);
    sub_1BAB41C(&StringLiteral_16793/*"android.permission.POST_NOTIFICATIONS"*/, v63);
    sub_1BAB41C(&StringLiteral_9239/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v64);
    sub_1BAB41C(&StringLiteral_9232/*"NETWORK_ERROR_FIEND_CODE"*/, v65);
    sub_1BAB41C(&StringLiteral_12502/*"SYSTEM"*/, v66);
    sub_1BAB41C(&StringLiteral_1/*""*/, v67);
    sub_1BAB41C(&StringLiteral_20799/*"ioqrk4Om"*/, v68);
    sub_1BAB41C(&StringLiteral_1471/*"2pC0bIYM"*/, v69);
    sub_1BAB41C(&StringLiteral_9233/*"NETWORK_ERROR_READ_AUTH"*/, v70);
    this = (ManagementManager__startCheckAll_d__34_o *)sub_1BAB41C(&StringLiteral_9240/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v71);
    byte_4AB5586 = 1;
  }
  p_fields = &v4->fields;
  v73 = (const MethodInfo_378A22C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
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
      sub_1BAB3C0(p__2__current, (int32_t)v76, v78, v79);
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
      v81 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v4->fields.__2__current = (Il2CppObject *)v81;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1BAB3C0(v82, (int32_t)v81, v83, v84);
      v85 = 2;
      goto LABEL_414;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      v86 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v4->fields.__2__current = (Il2CppObject *)v86;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1BAB3C0(v82, (int32_t)v86, v87, v88);
      v85 = 3;
      goto LABEL_414;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0LL);
      v89 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v89);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(v90);
      OptionManager__AdjustVolume(v91);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( !v4->fields.isReboot )
      {
LABEL_30:
        this = (ManagementManager__startCheckAll_d__34_o *)sub_1BAB4C4(string___TypeInfo, 3LL);
        if ( !this )
          goto LABEL_416;
        v97 = this;
        if ( !LODWORD(this->fields.__2__current)
          || (v98 = StringLiteral_1471/*"2pC0bIYM"*/,
              *(_QWORD *)&this->fields.isReboot = StringLiteral_1471/*"2pC0bIYM"*/,
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.isReboot, v98, v95, v96),
              LODWORD(v97->fields.__2__current) <= 1)
          || (v101 = StringLiteral_6356/*"F39UThNh"*/,
              v97->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6356/*"F39UThNh"*/,
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v97->fields.__4__this, v101, v99, v100),
              LODWORD(v97->fields.__2__current) <= 2) )
        {
          sub_1BAB680(this, method);
        }
        v104 = StringLiteral_20799/*"ioqrk4Om"*/;
        v97->fields.__8__1 = (struct ManagementManager___c__DisplayClass34_0_o *)StringLiteral_20799/*"ioqrk4Om"*/;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v97->fields.__8__1, v104, v102, v103);
        v107 = EncryptedPlayerPrefs_TypeInfo;
        if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
          v107 = EncryptedPlayerPrefs_TypeInfo;
        }
        static_fields = v107->static_fields;
        static_fields->keys = (struct System_String_array *)v97;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->keys, (int32_t)v97, v105, v106);
        if ( !v4->fields.isReboot )
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
                                                                 (System_String_o *)StringLiteral_16793/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !_4__this )
                goto LABEL_416;
              _4__this->fields.isPermissionRequesting = 1;
              v243 = (System_Action_object__o *)sub_1BAB668(System_Action_string__TypeInfo);
              System_Action_object____ctor(
                v243,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_NotifyRequestPermissionsGranted__,
                0LL);
              v244 = (System_Action_object__o *)sub_1BAB668(System_Action_string__TypeInfo);
              System_Action_object____ctor(
                v244,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_NotifyRequestPermissionsDenied__,
                0LL);
              AndroidPermissionManager__RequestPermission(
                (System_String_o *)StringLiteral_16793/*"android.permission.POST_NOTIFICATIONS"*/,
                (System_Action_string__o *)v243,
                (System_Action_string__o *)v244,
                0LL,
                0LL);
LABEL_44:
              if ( _4__this->fields.isPermissionRequesting )
              {
                v109 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v109, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v109;
                v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1BAB3C0(v82, (int32_t)v109, v110, v111);
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
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
          if ( this )
          {
            LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
            v240 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v240, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v240;
            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1BAB3C0(v82, (int32_t)v240, v241, v242);
            v85 = 6;
            goto LABEL_414;
          }
          goto LABEL_416;
        }
LABEL_47:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
        v4->fields._readResult_5__2 = (int)this;
        if ( !_4__this )
          goto LABEL_416;
        this = (ManagementManager__startCheckAll_d__34_o *)_4__this->fields.debugInfoRootObject;
        if ( !this )
          goto LABEL_416;
        v293 = v4;
        this = (ManagementManager__startCheckAll_d__34_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)this,
                                                             0LL);
        if ( !this )
          goto LABEL_416;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        ManagementManager__BuildInfoOff(_4__this, v112);
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
          v248 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
          if ( FreeSize < v248 )
            FreeSize = v248;
          if ( FreeSize < 1 )
            break;
          v249 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v249 = ManagerConfig_TypeInfo;
          }
          if ( FreeSize >= v249->static_fields->LIMIT_FREE_SIZE )
            break;
          _4__this->fields.isErrorDialog = 1;
          v250 = v73;
          Instance = SingletonMonoBehaviour_object___get_Instance(*v73);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v252 = LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
          v253 = (ErrorDialog_ClickDelegate_o *)sub_1BAB668(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v253,
            (Il2CppObject *)_4__this,
            Method_ManagementManager_EndRetryDialog__,
            0LL);
          if ( !Instance )
            goto LABEL_416;
          CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v252, v253, 0, 0LL);
          v73 = v250;
LABEL_364:
          if ( _4__this->fields.isErrorDialog )
          {
            v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
            v293->fields.__2__current = (Il2CppObject *)v254;
            v225 = &v293->fields.__2__current;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v293->fields.__2__current, (int32_t)v254, v255, v256);
            v228 = 7;
            goto LABEL_373;
          }
        }
        readResult_5__2 = v293->fields._readResult_5__2;
        if ( readResult_5__2 )
        {
          if ( readResult_5__2 == 1 )
          {
            _4__this->fields.isReadAuth = 0;
            v258 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v258,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_callbackAccountRegist__,
              v259);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                                 v258,
                                                                 (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
            if ( this )
            {
              AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_372:
              v260 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v260, 0LL);
              v293->fields.__2__current = (Il2CppObject *)v260;
              v225 = &v293->fields.__2__current;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v293->fields.__2__current, (int32_t)v260, v261, v262);
              v228 = 8;
LABEL_373:
              *((_DWORD *)v225 - 2) = v228;
              return 1;
            }
            goto LABEL_416;
          }
          v278 = (Il2CppObject *)StringLiteral_1/*""*/;
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_416;
          if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v279 = LocalizationManager__Get((System_String_o *)StringLiteral_9232/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
              v281 = SingletonMonoBehaviour_object___get_Instance(*v73);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v282 = LocalizationManager__Get((System_String_o *)StringLiteral_9233/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
              v294.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
              v294.monitor = (void *)-1LL;
              v295 = v293->fields._readResult_5__2;
              v283 = System_Enum__ToString(&v294, 0LL);
              v284 = (System_String_o *)StringLiteral_1/*""*/;
              if ( v283 )
                v285 = (Il2CppObject *)v283;
              else
                v285 = (Il2CppObject *)StringLiteral_1/*""*/;
              v286 = System_String__Format_62062500(v282, v278, v285, 0LL);
              v287 = (ErrorDialog_ClickDelegate_o *)sub_1BAB668(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v287,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_EndQuitDialog__,
                0LL);
              if ( v281 )
              {
                CommonUI__OpenErrorDialog((CommonUI_o *)v281, v284, v286, v287, 0, 0LL);
                return 0;
              }
              goto LABEL_416;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v279 = LocalizationManager__Get((System_String_o *)StringLiteral_9232/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
          }
          v278 = (Il2CppObject *)System_String__Format(v279, (Il2CppObject *)DispFriendCode, 0LL);
          goto LABEL_399;
        }
LABEL_374:
        v4 = v293;
        v293->fields._isCacheCheck_5__3 = 0;
LABEL_375:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_416;
        DataManager__Initialize((DataManager_o *)this, 0LL);
        if ( !v4->fields.isReboot && !v4->fields._isCacheCheck_5__3 )
        {
          v4->fields._isCacheCheck_5__3 = 1;
          v263 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v263 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v263->static_fields->RebootCacheClearKey, 0LL) )
          {
            v264 = v73;
            v265 = (Il2CppObject *)sub_1BAB668(ManagementManager___c__DisplayClass34_0_TypeInfo);
            System_Object___ctor(v265, 0LL);
            v4->fields.__8__1 = (struct ManagementManager___c__DisplayClass34_0_o *)v265;
            p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v265, v267, v268);
            if ( !v4->fields.__8__1 )
              goto LABEL_416;
            v4->fields.__8__1->fields = 0;
            v269 = v4;
            v270 = SingletonMonoBehaviour_object___get_Instance(*v264);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v271 = LocalizationManager__Get((System_String_o *)StringLiteral_7377/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
            v272 = LocalizationManager__Get((System_String_o *)StringLiteral_7375/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
            v273 = LocalizationManager__Get((System_String_o *)StringLiteral_7374/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
            v274 = LocalizationManager__Get((System_String_o *)StringLiteral_7373/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
            v275 = *p__8__1;
            v276 = v274;
            v277 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v277,
              v275,
              Method_ManagementManager___c__DisplayClass34_0__startCheckAll_b__0__,
              0LL);
            if ( !v270 )
              goto LABEL_416;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v270,
              v271,
              v272,
              v273,
              v276,
              v277,
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
            v73 = v264;
            v4 = v269;
LABEL_60:
            _8__1 = v4->fields.__8__1;
            if ( !_8__1 )
              goto LABEL_416;
            if ( !_8__1->fields.confirmed )
            {
              v220 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v220, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v220;
              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1BAB3C0(v82, (int32_t)v220, v221, v222);
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
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, 0, v2, v3);
          }
          else
          {
            v288 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v288 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v288->static_fields->RebootCacheClearKey, 1, 0LL);
            UnityEngine_PlayerPrefs__Save(0LL);
          }
        }
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance(*v73);
        if ( this )
        {
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__34_o *)DataManager__readMasterVersion(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              started = UnityEngine_MonoBehaviour__StartCoroutine_69785892(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          (System_Collections_IEnumerator_o *)this,
                          0LL);
              v4->fields.__2__current = (Il2CppObject *)started;
              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1BAB3C0(v82, (int32_t)started, v290, v291);
              v85 = 10;
              goto LABEL_414;
            }
          }
        }
LABEL_416:
        sub_1BAB678(this, method);
      }
      v92 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v92, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v92;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1BAB3C0(v82, (int32_t)v92, v93, v94);
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
      v293 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_416;
      goto LABEL_364;
    case 8:
      v293 = v4;
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
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4AB5686 )
      {
        sub_1BAB41C(&DataManager_TypeInfo, method);
        byte_4AB5686 = 1;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__34_o *)DataManager_TypeInfo;
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
      v115 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v115,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v116);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                           v115,
                                                           (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_416;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v117 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v117, 0LL);
      v4->fields._waitForServerTime_5__7 = v117;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v117, v118, v119);
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
        sub_1BAB3C0(v82, (int32_t)waitForServerTime_5__7, v2, v3);
        v85 = 11;
        goto LABEL_414;
      }
      _4__this->fields.isReadGameData = 0;
      v120 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v120,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v121);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager__getRequest_object_(
                                                           v120,
                                                           (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( this )
      {
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v122 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v122, 0LL);
        v4->fields._wait_5__8 = v122;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, (int32_t)v122, v123, v124);
LABEL_200:
        wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
        v4->fields.__2__current = wait_5__8;
        v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1BAB3C0(v82, (int32_t)wait_5__8, v2, v3);
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
      v126 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AB34D5 )
      {
        sub_1BAB41C(&NetworkManager_TypeInfo, method);
        byte_4AB34D5 = 1;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__34_o *)NetworkManager_TypeInfo;
      }
      if ( !v126 )
        goto LABEL_416;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v126,
        (System_String_o *)StringLiteral_5121/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v128 = UnityEngine_MonoBehaviour__StartCoroutine_69785892(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   MasterData,
                   0LL);
          v4->fields.__2__current = (Il2CppObject *)v128;
          v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1BAB3C0(v82, (int32_t)v128, v129, v130);
          v85 = 13;
          goto LABEL_414;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__34_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v132 = UnityEngine_MonoBehaviour__StartCoroutine_69785892(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v132;
            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1BAB3C0(v82, (int32_t)v132, v133, v134);
            v85 = 15;
            goto LABEL_414;
          }
        }
      }
      goto LABEL_416;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4AB5687 )
      {
        sub_1BAB41C(&DataManager_TypeInfo, method);
        byte_4AB5687 = 1;
      }
      v131 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v131 = DataManager_TypeInfo;
      }
      if ( v131->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v131->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v131);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v204 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v204, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v204;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1BAB3C0(v82, (int32_t)v204, v205, v206);
      v85 = 14;
      goto LABEL_414;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_375;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !byte_4AB5688 )
      {
        sub_1BAB41C(&DataManager_TypeInfo, method);
        byte_4AB5688 = 1;
      }
      v135 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v135 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v135->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_38914644((NetworkManager_o *)this, method);
          v223 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v223);
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__34_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v224 = UnityEngine_MonoBehaviour__StartCoroutine_69785892(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v224;
              v225 = &v4->fields.__2__current;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v224, v226, v227);
              v228 = 18;
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
        v137 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v138 = LocalizationManager__Get((System_String_o *)StringLiteral_9239/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v139 = (ErrorDialog_ClickDelegate_o *)sub_1BAB668(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v139, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v137 )
          goto LABEL_416;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v137,
          (System_String_o *)StringLiteral_1/*""*/,
          v138,
          v139,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v73 = (const MethodInfo_378A22C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v140 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v140, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v140;
          v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1BAB3C0(v82, (int32_t)v140, v141, v142);
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
      v229 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v230 = LocalizationManager__Get((System_String_o *)StringLiteral_9240/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v231 = (ErrorDialog_ClickDelegate_o *)sub_1BAB668(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v231, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v229 )
        goto LABEL_416;
      CommonUI__OpenRetryDialog((CommonUI_o *)v229, (System_String_o *)StringLiteral_1/*""*/, v230, v231, 0, 0LL);
      v73 = (const MethodInfo_378A22C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_334:
      if ( _4__this->fields.isErrorDialog )
      {
        v232 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v232, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v232;
        v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1BAB3C0(v82, (int32_t)v232, v233, v234);
        v85 = 17;
        goto LABEL_414;
      }
LABEL_336:
      v4->fields._waitForServerTime_5__7 = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields._waitForServerTime_5__7, 0, v2, v3);
      v4->fields._wait_5__8 = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, 0, v235, v236);
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
      sub_1BAB3C0(v82, 0, v2, v3);
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
        v143 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v143, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v143;
        v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1BAB3C0(v82, (int32_t)v143, v144, v145);
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
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_209:
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( this )
            {
              if ( !BYTE2(this->fields.__8__1) )
              {
                v201 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v201, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v201;
                v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1BAB3C0(v82, (int32_t)v201, v202, v203);
                v85 = 25;
                goto LABEL_414;
              }
              this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
              if ( _4__this )
              {
                if ( this )
                {
                  v168 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                           (AssetManager_o *)this,
                           (System_String_o *)StringLiteral_12502/*"SYSTEM"*/,
                           _4__this->fields.downloadParallelMax,
                           0LL);
                  v169 = UnityEngine_MonoBehaviour__StartCoroutine_69785892(
                           (UnityEngine_MonoBehaviour_o *)_4__this,
                           v168,
                           0LL);
                  v4->fields.__2__current = (Il2CppObject *)v169;
                  v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1BAB3C0(v82, (int32_t)v169, v170, v171);
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
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LocalizationManager__LoadAssetData(0LL);
LABEL_217:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_4AB568A )
          {
            sub_1BAB41C(&LocalizationManager_TypeInfo, method);
            byte_4AB568A = 1;
          }
          v172 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v172 = LocalizationManager_TypeInfo;
          }
          if ( v172->static_fields->isBusySetAssetData )
          {
            v173 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v173, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v173;
            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1BAB3C0(v82, (int32_t)v173, v174, v175);
            v85 = 29;
            goto LABEL_414;
          }
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          FSUtility__LoadAssetData(0LL);
LABEL_228:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          if ( !byte_4AB568B )
          {
            sub_1BAB41C(&FSUtility_TypeInfo, method);
            byte_4AB568B = 1;
          }
          v176 = FSUtility_TypeInfo;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            v176 = FSUtility_TypeInfo;
          }
          if ( v176->static_fields->isBusySetAssetData )
          {
            v177 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v177, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v177;
            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1BAB3C0(v82, (int32_t)v177, v178, v179);
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
          this = (ManagementManager__startCheckAll_d__34_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
          if ( this )
          {
            OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, method);
LABEL_244:
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( AtlasManager__IsBusyInitialize(0LL) )
            {
              v180 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v180, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v180;
              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1BAB3C0(v82, (int32_t)v180, v181, v182);
              v85 = 31;
              goto LABEL_414;
            }
            v4->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_249:
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            this = (ManagementManager__startCheckAll_d__34_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
            if ( this )
            {
              if ( LOBYTE(this->fields.__2__current) )
              {
                overrideAssetSoundNameWaitCount_5__5 = v4->fields._overrideAssetSoundNameWaitCount_5__5;
                v4->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
                if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
                {
                  v184 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v184, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v184;
                  v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1BAB3C0(v82, (int32_t)v184, v185, v186);
                  v85 = 32;
                  goto LABEL_414;
                }
              }
              this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_257:
                this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  if ( LOBYTE(this[9].monitor) )
                  {
                    v187 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v187, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v187;
                    v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1BAB3C0(v82, (int32_t)v187, v188, v189);
                    v85 = 33;
                    goto LABEL_414;
                  }
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__initializeAssetStorage(0LL);
LABEL_263:
                  this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                  if ( this )
                  {
                    if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
                    {
                      v190 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v190, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v190;
                      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1BAB3C0(v82, (int32_t)v190, v191, v192);
                      v85 = 34;
                      goto LABEL_414;
                    }
                    this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( this )
                    {
                      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_268:
                      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                      if ( this )
                      {
                        if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
                        {
                          v193 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                          UnityEngine_WaitForEndOfFrame___ctor(v193, 0LL);
                          v4->fields.__2__current = (Il2CppObject *)v193;
                          v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                          sub_1BAB3C0(v82, (int32_t)v193, v194, v195);
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
                          if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9301/*"NOW_LOADING"*/, 0LL) )
                          {
                            if ( !SoundManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                            SoundManager__fadeoutBgm(1.0, 0LL);
                            v196 = (UnityEngine_WaitForSeconds_o *)sub_1BAB668(UnityEngine_WaitForSeconds_TypeInfo);
                            UnityEngine_WaitForSeconds___ctor(v196, 1.0, 0LL);
                            v4->fields.__2__current = (Il2CppObject *)v196;
                            v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                            sub_1BAB3C0(v82, (int32_t)v196, v197, v198);
                            v85 = 36;
                            goto LABEL_414;
                          }
LABEL_284:
                          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                        }
                        else
                        {
                          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !this )
                            goto LABEL_416;
                          this = (ManagementManager__startCheckAll_d__34_o *)CommonUI__IsLoadMode(
                                                                               (CommonUI_o *)this,
                                                                               3,
                                                                               0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( this )
                            {
                              CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_341:
                              v237 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                              UnityEngine_WaitForEndOfFrame___ctor(v237, 0LL);
                              v4->fields.__2__current = (Il2CppObject *)v237;
                              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                              sub_1BAB3C0(v82, (int32_t)v237, v238, v239);
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
                          sub_1BAB3C0(v82, 0, v199, v200);
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
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_300:
          this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v217 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v217, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v217;
              v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1BAB3C0(v82, (int32_t)v217, v218, v219);
              v85 = 21;
              goto LABEL_414;
            }
            this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this )
            {
              if ( this )
              {
                AssetManager__DownloadAssetStorageAttribute(
                  (AssetManager_o *)this,
                  (System_String_o *)StringLiteral_12502/*"SYSTEM"*/,
                  _4__this->fields.downloadParallelMax,
                  0LL);
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                if ( AssetManager__getDownloadSize(0LL) >= 1 )
                {
                  v210 = ManagerConfig_TypeInfo;
                  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                    v210 = ManagerConfig_TypeInfo;
                  }
                  if ( v210->static_fields->UseStandaloneAsset )
                  {
                    v4->fields._isLoad_5__4 = 1;
                    if ( !SoundManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                    SoundManager__playBgm((System_String_o *)StringLiteral_9301/*"NOW_LOADING"*/, 0LL);
                    this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_314:
                      v211 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                      UnityEngine_WaitForEndOfFrame___ctor(v211, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v211;
                      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1BAB3C0(v82, (int32_t)v211, v212, v213);
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
                    v146 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    UnityEngine_WaitForEndOfFrame___ctor(v146, 0LL);
                    v4->fields.__2__current = (Il2CppObject *)v146;
                    v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1BAB3C0(v82, (int32_t)v146, v147, v148);
                    v85 = 23;
                    goto LABEL_414;
                  }
                }
LABEL_315:
                if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                AssetManager__SetOnlineStatus(0LL);
                this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( this )
                {
                  NetworkManager__SetServerSetting_38914644((NetworkManager_o *)this, method);
                  v214 = (UnityEngine_WaitForSeconds_o *)sub_1BAB668(UnityEngine_WaitForSeconds_TypeInfo);
                  UnityEngine_WaitForSeconds___ctor(v214, 0.1, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v214;
                  v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1BAB3C0(v82, (int32_t)v214, v215, v216);
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
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      if ( !byte_4AB5689 )
      {
        sub_1BAB41C(&LogoMain_TypeInfo, v149);
        byte_4AB5689 = 1;
      }
      v150 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v150 = LogoMain_TypeInfo;
      }
      if ( !v150->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9301/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v151 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v151, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v151;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1BAB3C0(v82, (int32_t)v151, v152, v153);
      v85 = 27;
      goto LABEL_414;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_295:
      v207 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v207, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v207;
      v82 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1BAB3C0(v82, (int32_t)v207, v208, v209);
      v85 = 28;
      goto LABEL_414;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_295;
      v154 = Method_ManagementManager__startCheckAll_d__34_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__34_MoveNext__ + 83) & 2) != 0 )
        v154 = (_QWORD *)sub_1BAB434(Method_ManagementManager__startCheckAll_d__34_MoveNext__);
      v155 = (System_Reflection_MethodBase_o *)sub_1BAB400(v154, v154[4]);
      OverwriteAssetSoundName__PlaySystemSe(v155, 0, v156);
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_416;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_341;
      v157 = Method_ManagementManager__startCheckAll_d__34_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__34_MoveNext__ + 83) & 2) != 0 )
        v157 = (_QWORD *)sub_1BAB434(Method_ManagementManager__startCheckAll_d__34_MoveNext__);
      v158 = (System_Reflection_MethodBase_o *)sub_1BAB400(v157, v157[4]);
      OverwriteAssetSoundName__PlaySystemSe(v158, 0, v159);
      goto LABEL_284;
    case 0x26:
      p_fields->__1__state = -1;
      v160 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v160 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__34_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v160->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        v162 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v162);
        OptionManager__SetNotiffication(Notiffication, 1, v164);
        v165 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v165 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v165->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_416;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v161);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v166);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__34_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_ManagementManager__startCheckAll_d__34_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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