void ManagementManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ManagementManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ManagementManager_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ManagementManager_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB5A63 & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8053/*"IsNotificationStatusSend"*/);
    sub_1C6BA08(&StringLiteral_8065/*"IsReBootCacheClearKey"*/);
    sub_1C6BA08(&StringLiteral_21120/*"ja-JP"*/);
    sub_1C6BA08(&StringLiteral_25122/*"yyyy年MM月dd日HH時mm分"*/);
    byte_4CB5A63 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8053/*"IsNotificationStatusSend"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)ManagementManager_TypeInfo->static_fields, StringLiteral_8053/*"IsNotificationStatusSend"*/, v1, v2);
  v3 = StringLiteral_8065/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8065/*"IsReBootCacheClearKey"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->RebootCacheClearKey, v3, v5, v6);
  v7 = StringLiteral_25122/*"yyyy年MM月dd日HH時mm分"*/;
  v8 = ManagementManager_TypeInfo->static_fields;
  v8->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_25122/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->DATE_TIME_DISP_FORMAT, v7, v9, v10);
  v11 = StringLiteral_21120/*"ja-JP"*/;
  v12 = ManagementManager_TypeInfo->static_fields;
  v12->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_21120/*"ja-JP"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->DEFAULT_CULTURE_NAME, v11, v13, v14);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5A62 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_4CB5A62 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A4F89C *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ManagementManager_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  float v14; // s0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x19
  Il2CppObject *v23; // x19
  float v24; // [xsp+Ch] [xbp-34h] BYREF

  v24 = ratio;
  if ( (byte_4CB5A4B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_778/*"):"*/);
    sub_1C6BA08(&StringLiteral_6754/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_1C6BA08(&StringLiteral_741/*"(ratio: "*/);
    byte_4CB5A4B = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6754/*"Firebase.FirebaseApp"*/, 0) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1C6BAB0(string___TypeInfo, 5);
    if ( this )
    {
      v10 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v8, v9);
      if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v13 = StringLiteral_741/*"(ratio: "*/;
      v10->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_741/*"(ratio: "*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.AvalonSceneManager, v13, v11, v12);
      this = (ManagementManager_o *)System_Single__ToString(v14, (const MethodInfo *)&v24);
      if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 2
        || (v10->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.debugInfoRootObject, (int32_t)this, v15, v16),
            LODWORD(v10->fields.m_CancellationTokenSource) <= 3)
        || (v19 = StringLiteral_778/*"):"*/,
            v10->fields.statusLabel = (struct UILabel_o *)StringLiteral_778/*"):"*/,
            sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.statusLabel, v19, v17, v18),
            LODWORD(v10->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1C6BC68(this);
      }
      v10->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1C6B9AC(
        (CGThumbnailListItem_o *)&v10->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v20,
        v21);
      v22 = (Il2CppObject *)System_String__Concat_64007324((System_String_array *)v10, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v22, 0);
      return;
    }
LABEL_19:
    sub_1C6BC60(this, errorText);
  }
  v23 = (Il2CppObject *)System_String__Concat_63966792(errorText, exceptionMessage, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v23, 0);
}


void ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB5A47 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_4CB5A47 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_3A4F720 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
  }
}


void ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4CB5A60 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB5A60 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0);
  ManagementManager__BuildInfoOff(this, v4);
}


void ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4CB5A5F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5A5F = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0) )
  {
    sub_1C6BC60(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ManagementManager__CompletionStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4CB5A45 & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    byte_4CB5A45 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  v1->static_fields->isDuringStartup = 0;
}


void ManagementManager__EndDifferentCreateUserServerDialog(
        ManagementManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB5A55 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB5A55 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0, 0);
}


void ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4CB5A54 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    byte_4CB5A54 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71452840(0);
}


void ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4CB5A53 & 1) != 0 )
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
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    byte_4CB5A53 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71452840(0);
}


void ManagementManager__HandleLog(
        ManagementManager_o *this,
        System_String_o *condition,
        System_String_o *stackTrace,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4CB5A4C & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C6BA08(&StringLiteral_6175/*"ErrorLog: "*/);
    sub_1C6BA08(&StringLiteral_55/*"\n StackTrace: "*/);
    byte_4CB5A4C = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v9 = System_String__Concat_64007060(
           (System_String_o *)StringLiteral_6175/*"ErrorLog: "*/,
           condition,
           (System_String_o *)StringLiteral_55/*"\n StackTrace: "*/,
           stackTrace,
           0);
    if ( !Instance )
      sub_1C6BC60(v9, v10);
    CrashReporter__SendErrorLogReport((CrashReporter_o *)Instance, v9, 0);
  }
}


System_Collections_IEnumerator_o *ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5A4E & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
    byte_4CB5A4E = 1;
  }
  v3 = sub_1C6BC54(ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4CB5A5C & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    byte_4CB5A5C = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4CB5247 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    byte_4CB5247 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  return !v2->static_fields->isDuringStartup;
}


bool ManagementManager__IsLoading(ManagementManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CB5A5D & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4CB5A5D = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__CommunicationIsBusy((const MethodInfo *)v2) )
    return 1;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__LoadIsBusy(0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
  return WebViewManager__get_IsBusy((WebViewManager_o *)Instance, 0);
}


void ManagementManager__NotifyRequestPermissionsDenied(
        ManagementManager_o *this,
        System_String_o *permissionName,
        const MethodInfo *method)
{
  this->fields.isPermissionRequesting = 0;
}


void ManagementManager__NotifyRequestPermissionsGranted(
        ManagementManager_o *this,
        System_String_o *permissionName,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isPermissionGranted = 1;
}


void ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4CB5A61 & 1) == 0 )
  {
    sub_1C6BA08(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    byte_4CB5A61 = 1;
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
  SpecificCulture = System_Globalization_CultureInfo__CreateSpecificCulture(DEFAULT_CULTURE_NAME, 0);
  System_Globalization_CultureInfo__set_CurrentCulture(SpecificCulture, 0);
}


void ManagementManager__RebootCacheClear(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0
  ManagementManager_c *v2; // x0

  if ( (byte_4CB5A46 & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    byte_4CB5A46 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v1->static_fields->RebootCacheClearKey, 0) )
  {
    v2 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v2 = ManagementManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->RebootCacheClearKey, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


System_Collections_IEnumerator_o *ManagementManager__SetupFirebaseAppCheck(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CB5A4F & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
    byte_4CB5A4F = 1;
  }
  v2 = sub_1C6BC54(ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CB5A50 & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
    byte_4CB5A50 = 1;
  }
  v2 = sub_1C6BC54(ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void ManagementManager__Start(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppType *v4; // x21
  System_RuntimeTypeHandle_o v5; // x0
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4CB5A48 & 1) == 0 )
  {
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&UnityGamingServicesBehaviour_var);
    byte_4CB5A48 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(30, 0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__TransitionSaveData(0);
  UnityEngine_Screen__set_autorotateToLandscapeLeft(1, 0);
  UnityEngine_Screen__set_autorotateToLandscapeRight(1, 0);
  UnityEngine_Screen__set_autorotateToPortrait(0, 0);
  UnityEngine_Screen__set_autorotateToPortraitUpsideDown(0, 0);
  UnityEngine_Screen__set_orientation(5, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = UnityGamingServicesBehaviour_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (intptr_t)v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  if ( !gameObject )
    sub_1C6BC60(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  ManagementManager__createMovieObj(this, v7);
  v9 = ManagementManager__startCheckAll(this, 0, 0, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4CB5A5E & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    byte_4CB5A5E = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_71452840(0);
    }
  }
}


void ManagementManager__callbackAccountRegist(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.isReadAuth = 1;
}


void ManagementManager__callbackPlayLogo(ManagementManager_o *this, const MethodInfo *method)
{
  this->fields.isPlayLogo = 1;
}


void ManagementManager__callbackTerminalTopHome(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagementManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CB5A5B & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB5A5B = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _40657328; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4CB5A5A & 1) == 0 )
  {
    sub_1C6BA08(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB5A5A = 1;
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
  _40657328 = TutorialFlag__Get_40657328(102, 0);
  if ( _40657328 )
  {
LABEL_9:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v9);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C6BC60(0, v11);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_40657328, v6, v7);
  }
}


void ManagementManager__callbackTopGameData(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.isReadGameData = 1;
}


void ManagementManager__callbackTopHome(ManagementManager_o *this, System_String_o *result, const MethodInfo *method)
{
  ManagementManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CB5A58 & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB5A58 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, this->fields.scenetype, 0, 0, 0);
}


void ManagementManager__callbackTopLogin(ManagementManager_o *this, System_String_o *result, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  System_String_o *v5; // x1
  const MethodInfo *v6; // x2
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_4CB5A57 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ManagementManager_callbackTopHome__);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB5A57 = 1;
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
  if ( TutorialFlag__Get_40657328(102, 0) )
  {
LABEL_9:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C6BC60(0, v10);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  else
  {
    ManagementManager__callbackTopHome(this, v5, v6);
  }
}


void ManagementManager__createMovieObj(ManagementManager_o *this, const MethodInfo *method)
{
  struct AvalonVideoPlayer_o **p_videoPlayer_k__BackingField; // x20
  UnityEngine_Object_o *videoPlayer_k__BackingField; // x21
  UnityEngine_GameObject_o *v5; // x22
  UnityEngine_GameObject_o *v6; // x21
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AvalonVideoPlayer_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_4CB5A49 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_4604/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_1C6BA08(&StringLiteral_9179/*"MovieRoot"*/);
    byte_4CB5A49 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0, 0) )
  {
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4604/*"CommonUI/UI Root/SystemUICamera"*/, 0);
    v6 = (UnityEngine_GameObject_o *)sub_1C6BC54(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9179/*"MovieRoot"*/, 0);
    if ( !v6
      || (v9 = UnityEngine_GameObject__AddComponent_object_(
                 v6,
                 (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._videoPlayer_k__BackingField, (int32_t)v9, v10, v11),
          !v5)
      || (v12 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v5,
                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v12) )
    {
      sub_1C6BC60(Component_object, v8);
    }
    AvalonVideoPlayer__initialize(v12, (UnityEngine_Camera_o *)Component_object, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_36361932(v6, gameObject, 0);
  }
}


int32_t ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CB5A43 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CB5A43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v2);
  return HIDWORD(Instance[4].monitor);
}


bool ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4CB5A44 & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    byte_4CB5A44 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  return v1->static_fields->isDuringStartup;
}


AvalonVideoPlayer_o *ManagementManager__get_videoPlayer(ManagementManager_o *this, const MethodInfo *method)
{
  return this->fields._videoPlayer_k__BackingField;
}


void ManagementManager__reboot(ManagementManager_o *this, bool isLogin, bool isFadeInit, const MethodInfo *method)
{
  ManagementManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4CB5A4A & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&CTouch_TypeInfo);
    sub_1C6BA08(&CommonEffectManager_TypeInfo);
    sub_1C6BA08(&FirebaseScript_TypeInfo);
    sub_1C6BA08(&System_GC_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5A4A = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    SwitchParameterDisplayManager__Reboot((SwitchParameterDisplayManager_o *)Instance, 0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Reboot(0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__reboot(0);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__reboot(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
      || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
LABEL_32:
      sub_1C6BC60(Instance, v9);
    }
    PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)Instance, 0);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0);
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    MyRoomParamsManager__Reboot(0);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_1C6BC60(0, v11);
    AdManager__Initialize((AdManager_o *)v10, 2, 0);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0);
    v13 = ManagementManager__startCheckAll(this, 1, isLogin, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v13, 0);
  }
}


void ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CB5A56 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_ManagementManager_callbackTopLogin__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4CB5A56 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C6BC54(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v5);
  if ( !Instance )
    sub_1C6BC60(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, v8);
}


void ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CB5A59 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4CB5A59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C6BC54(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v5);
  if ( !Instance )
    sub_1C6BC60(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, v8);
}


void ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._videoPlayer_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


System_Collections_IEnumerator_o *ManagementManager__startCheckAll(
        ManagementManager_o *this,
        bool isReboot,
        bool isLogin,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB5A4D & 1) == 0 )
  {
    sub_1C6BA08(&ManagementManager__startCheckAll_d__35_TypeInfo);
    byte_4CB5A4D = 1;
  }
  v7 = isLogin;
  v8 = sub_1C6BC54(ManagementManager__startCheckAll_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5A51 & 1) == 0 )
  {
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB5A51 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
}


void ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4CB5A52 & 1) == 0 )
  {
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&ScrTerminalListTop_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB5A52 = 1;
  }
  MovieFileMerge__Delete_40722696(0);
  v2 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->NOTICE_LAST_MODIFIED_KEY, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB32B4 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB32B4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
  AssetStorageCache__ClearCacheAll(1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetForceReadNewComments(1, 0);
}


void ManagementManager__InitializeAdManagerAndFirebase_d__36___ctor(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__InitializeAdManagerAndFirebase_d__36__MoveNext(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool result; // w0
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  ManagementManager_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_IEnumerator_o *v15; // x1
  ManagementManager_o *started; // x0
  const MethodInfo *v17; // x1
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4CB5A65 & 1) == 0 )
  {
    sub_1C6BA08(&FirebaseScript_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CB5A65 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v10);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v11 )
      sub_1C6BC60(0, v12);
    AdManager__Initialize((AdManager_o *)v11, 1, 0);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0);
    if ( !_4__this )
      sub_1C6BC60(v13, v14);
    v15 = ManagementManager__SetupFirebaseAppCheck(v13, v14);
    started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_71644868(_4__this, v15, 0);
    v18 = ManagementManager__SetupFirebaseCrashlytics(started, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868(_4__this, v18, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_IEnumerator_Reset(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_IEnumerator_get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__InitializeAdManagerAndFirebase_d__36__System_IDisposable_Dispose(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager__SetupFirebaseAppCheck_d__37___ctor(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__SetupFirebaseAppCheck_d__37__MoveNext(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  FirebaseScript_c *v6; // x0
  FirebaseScript_c *v7; // x0
  FirebaseScript_c *v8; // x0
  Il2CppObject **v9; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  FirebaseScript_c *v12; // x0
  FirebaseScript_c *v13; // x0
  System_String_o *v14; // x19
  float time; // s8
  FirebaseScript_c *v16; // x0
  float beginTime_5__2; // s9
  FirebaseScript_c *v18; // x0
  float v19; // s8
  char IsNullOrEmpty; // w0
  char v21; // w21
  bool v22; // w22
  Il2CppObject *v23; // x19
  Il2CppObject *v24; // x0
  FirebaseScript_c *v25; // x0
  FirebaseScript_c *v26; // x0
  bool v27[4]; // [xsp+18h] [xbp-28h] BYREF
  float v28; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CB5A66 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&FirebaseScript_TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_811/*", AppCheckErrorMessage: "*/);
    sub_1C6BA08(&StringLiteral_5929/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/);
    sub_1C6BA08(&StringLiteral_7989/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/);
    byte_4CB5A66 = 1;
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
      if ( !byte_4CB5B5F )
      {
        sub_1C6BA08(&FirebaseScript_TypeInfo);
        byte_4CB5B5F = 1;
      }
      v6 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v6 = FirebaseScript_TypeInfo;
      }
      v6->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4CB5B60 )
      {
        sub_1C6BA08(&FirebaseScript_TypeInfo);
        byte_4CB5B60 = 1;
      }
      v7 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v7 = FirebaseScript_TypeInfo;
      }
      if ( !v7->static_fields->_IsFirebaseInitialized_k__BackingField )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !v7->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v7);
      if ( !FirebaseScript__GetAppCheckToken(0, 0) )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4CB5B61 )
        {
          sub_1C6BA08(&FirebaseScript_TypeInfo);
          byte_4CB5B61 = 1;
        }
        v12 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v12 = FirebaseScript_TypeInfo;
        }
        if ( v12->static_fields->_IsSendAppCheckToken_k__BackingField )
          return 0;
        if ( !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        if ( !byte_4CB0029 )
        {
          sub_1C6BA08(&FirebaseScript_TypeInfo);
          byte_4CB0029 = 1;
        }
        v13 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v13 = FirebaseScript_TypeInfo;
        }
        if ( v13->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        v14 = (System_String_o *)StringLiteral_7989/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        if ( v13->_2.cctor_finished )
          goto LABEL_73;
LABEL_72:
        j_il2cpp_runtime_class_init_0(v13);
LABEL_73:
        if ( !byte_4CB5B62 )
        {
          sub_1C6BA08(&FirebaseScript_TypeInfo);
          byte_4CB5B62 = 1;
        }
        v26 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v26 = FirebaseScript_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetString(v26->static_fields->_AppCheckPrevMessageKey_k__BackingField, v14, 0);
        UnityEngine_PlayerPrefs__Save(0);
        return 0;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4CB5A3A )
      {
        sub_1C6BA08(&FirebaseScript_TypeInfo);
        byte_4CB5A3A = 1;
      }
      v8 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v8 = FirebaseScript_TypeInfo;
      }
      if ( v8->static_fields->_IsRunningGetAppCheckToken_k__BackingField )
      {
        this->fields.__2__current = 0;
        v9 = &this->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)v9, 0, v2, v3);
        *((_DWORD *)v9 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4CB5B61 )
      {
        sub_1C6BA08(&FirebaseScript_TypeInfo);
        byte_4CB5B61 = 1;
      }
      v16 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v16 = FirebaseScript_TypeInfo;
      }
      if ( v16->static_fields->_IsSendAppCheckToken_k__BackingField )
        return 0;
      beginTime_5__2 = this->fields._beginTime_5__2;
      if ( !v16->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v16);
      if ( !byte_4CB5B63 )
      {
        sub_1C6BA08(&FirebaseScript_TypeInfo);
        byte_4CB5B63 = 1;
      }
      v18 = FirebaseScript_TypeInfo;
      v19 = time - beginTime_5__2;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v18 = FirebaseScript_TypeInfo;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v18->static_fields->_AppCheckToken_k__BackingField, 0);
      v21 = ~IsNullOrEmpty;
      v22 = (IsNullOrEmpty & 1) == 0;
      v28 = v19;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v28);
      v27[0] = v22;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v27);
      v14 = System_String__Format_64008100((System_String_o *)StringLiteral_5929/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v23, v24, 0);
      if ( (v21 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4CB5B64 )
        {
          sub_1C6BA08(&FirebaseScript_TypeInfo);
          byte_4CB5B64 = 1;
        }
        v25 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v25 = FirebaseScript_TypeInfo;
        }
        v14 = System_String__Concat_64005056(
                v14,
                (System_String_o *)StringLiteral_811/*", AppCheckErrorMessage: "*/,
                v25->static_fields->_AppCheckTokenError_k__BackingField,
                0);
      }
      v13 = FirebaseScript_TypeInfo;
      if ( FirebaseScript_TypeInfo->_2.cctor_finished )
        goto LABEL_73;
      goto LABEL_72;
  }
  return 0;
}


Il2CppObject *ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ManagementManager__SetupFirebaseAppCheck_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__SetupFirebaseAppCheck_d__37__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager__SetupFirebaseCrashlytics_d__38___ctor(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__SetupFirebaseCrashlytics_d__38__MoveNext(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  FirebaseScript_c *v5; // x0
  FirebaseScript_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4CB5A67 & 1) == 0 )
  {
    sub_1C6BA08(&FirebaseScript_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4CB5A67 = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4CB5B60 )
  {
    sub_1C6BA08(&FirebaseScript_TypeInfo);
    byte_4CB5B60 = 1;
  }
  v5 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v5 = FirebaseScript_TypeInfo;
  }
  if ( v5->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4CB0029 )
    {
      sub_1C6BA08(&FirebaseScript_TypeInfo);
      byte_4CB0029 = 1;
    }
    v6 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v6 = FirebaseScript_TypeInfo;
    }
    if ( v6->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_1C6BC60(0, v8);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0);
    }
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ManagementManager__SetupFirebaseCrashlytics_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__SetupFirebaseCrashlytics_d__38__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void ManagementManager___c__DisplayClass35_0___ctor(
        ManagementManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ManagementManager___c__DisplayClass35_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass35_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4CB5A64 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__);
    sub_1C6BA08(&ManagementManager___c__DisplayClass35_1_TypeInfo);
    byte_4CB5A64 = 1;
  }
  v5 = sub_1C6BC54(ManagementManager___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__,
          0),
        !Instance) )
  {
    sub_1C6BC60(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31417952((CommonUI_o *)Instance, v11, 0);
}


void ManagementManager___c__DisplayClass35_1___ctor(
        ManagementManager___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ManagementManager___c__DisplayClass35_1___startCheckAll_b__1(
        ManagementManager___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  struct ManagementManager___c__DisplayClass35_0_o *CS___8__locals1; // x8
  bool flag; // w9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C6BC60(this, method);
  flag = this->fields.flag;
  CS___8__locals1->fields.confirmed = 1;
  CS___8__locals1->fields.isDecide = flag;
}


void ManagementManager__startCheckAll_d__35___ctor(
        ManagementManager__startCheckAll_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ManagementManager__startCheckAll_d__35__MoveNext(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ManagementManager__startCheckAll_d__35_o *v4; // x19
  ManagementManager__startCheckAll_d__35_Fields *p_fields; // x8
  AndroidUtil_c **v6; // x26
  const MethodInfo_3A4F3B4 **v7; // x23
  void *_4__this; // x22
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v14; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  System_Collections_IEnumerator_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  OptionManager_c *v22; // x0
  const MethodInfo *v23; // x0
  const MethodInfo *v24; // x0
  UnityEngine_Application_LogCallback_o *v25; // x21
  UnityEngine_WaitForEndOfFrame_o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  ManagementManager__startCheckAll_d__35_o *v31; // x21
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  EncryptedPlayerPrefs_c *v41; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x1
  ManagementManager__startCheckAll_d__35_o *v47; // x29
  struct ManagementManager___c__DisplayClass35_0_o *v48; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v50; // x21
  const MethodInfo *v51; // x3
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  NetworkManager_ResultCallbackFunc_o *v55; // x21
  const MethodInfo *v56; // x3
  UnityEngine_WaitForEndOfFrame_o *v57; // x20
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v61; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  DataManager_c *v66; // x0
  UnityEngine_Coroutine_o *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  DataManager_c *v70; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v72; // x21
  System_String_o *v73; // x22
  ErrorDialog_ClickDelegate_o *v74; // x23
  UnityEngine_WaitForEndOfFrame_o *v75; // x20
  CGThumbnailListItem_o *v76; // x29
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int v79; // w8
  UnityEngine_WaitForEndOfFrame_o *v80; // x20
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  UnityEngine_WaitForEndOfFrame_o *v83; // x20
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  LogoMain_c *v86; // x0
  UnityEngine_WaitForEndOfFrame_o *v87; // x20
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  const MethodInfo *v92; // x3
  _QWORD *v93; // x0
  System_Reflection_MethodBase_o *v94; // x0
  const MethodInfo *v95; // x3
  ManagementManager_c *v96; // x0
  const MethodInfo *v97; // x2
  OptionManager_c *v98; // x0
  bool Notiffication; // w0
  const MethodInfo *v100; // x2
  ManagementManager_c *v101; // x0
  const MethodInfo *v102; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v104; // x0
  UnityEngine_Coroutine_o *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  LocalizationManager_c *v108; // x0
  UnityEngine_WaitForEndOfFrame_o *v109; // x20
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  UnityEngine_WaitForEndOfFrame_o *v112; // x20
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  NetworkManager_ResultCallbackFunc_o *v115; // x21
  const MethodInfo *v116; // x3
  UnityEngine_WaitForEndOfFrame_o *v117; // x20
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  UnityEngine_WaitForEndOfFrame_o *v120; // x20
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v124; // x20
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  UnityEngine_WaitForEndOfFrame_o *v127; // x20
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  UnityEngine_WaitForEndOfFrame_o *v130; // x20
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  UnityEngine_WaitForEndOfFrame_o *v133; // x20
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  UnityEngine_WaitForSeconds_o *v136; // x20
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  UnityEngine_WaitForEndOfFrame_o *v141; // x20
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  UnityEngine_WaitForEndOfFrame_o *v144; // x20
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  ManagerConfig_c *v150; // x0
  UnityEngine_WaitForEndOfFrame_o *v151; // x20
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  UnityEngine_WaitForSeconds_o *v154; // x20
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  UnityEngine_WaitForEndOfFrame_o *v157; // x20
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  UnityEngine_WaitForEndOfFrame_o *v160; // x20
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  ManagementManager_c *v163; // x0
  UnityEngine_Coroutine_o *v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  Il2CppObject *v167; // x21
  Il2CppObject *v168; // x20
  System_String_o *v169; // x22
  ErrorDialog_ClickDelegate_o *v170; // x23
  UnityEngine_WaitForEndOfFrame_o *v171; // x20
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  UnityEngine_WaitForEndOfFrame_o *v176; // x20
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  UnityEngine_WaitForEndOfFrame_o *v179; // x20
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  System_Action_object__o *v182; // x21
  System_Action_object__o *v183; // x22
  System_Action_string__o *v184; // x2
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v188; // x0
  ManagerConfig_c *v189; // x0
  Il2CppObject *v190; // x24
  AndroidUtil_c **v191; // x20
  const MethodInfo_3A4F3B4 **v192; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v194; // x22
  ErrorDialog_ClickDelegate_o *v195; // x23
  UnityEngine_WaitForEndOfFrame_o *v196; // x20
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  ManagementManager_c *v199; // x0
  const MethodInfo_3A4F3B4 **v200; // x28
  Il2CppObject *v201; // x21
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  Il2CppObject *v204; // x21
  System_String_o *v205; // x22
  System_String_o *v206; // x24
  System_String_o *v207; // x25
  System_String_o *v208; // x0
  Il2CppObject *_8__1; // x27
  System_String_o *v210; // x23
  CommonConfirmDialog_ClickDelegate_o *v211; // x26
  Il2CppObject *v212; // x21
  System_String_o *v213; // x21
  System_String_o *DispFriendCode; // x22
  Il2CppObject *v215; // x22
  System_String_o *v216; // x23
  System_String_o *v217; // x0
  System_String_o *v218; // x19
  Il2CppObject *v219; // x2
  System_String_o *v220; // x21
  ErrorDialog_ClickDelegate_o *v221; // x23
  ManagementManager_c *v222; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-D0h]
  ManagementManager__startCheckAll_d__35_o *v227; // [xsp+48h] [xbp-88h]
  Il2CppObject *object; // [xsp+50h] [xbp-80h]
  System_Enum_o v229; // [xsp+58h] [xbp-78h] BYREF
  int32_t readResult_5__2; // [xsp+68h] [xbp-68h]

  v4 = this;
  if ( (byte_4CB5A68 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_string__TypeInfo);
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&CommonServicePluginScript_TypeInfo);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C6BA08(&FSUtility_TypeInfo);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Application_LogCallback_TypeInfo);
    sub_1C6BA08(&LogoMain_TypeInfo);
    sub_1C6BA08(&Method_ManagementManager_EndLogDialog__);
    sub_1C6BA08(&Method_ManagementManager_EndQuitDialog__);
    sub_1C6BA08(&Method_ManagementManager_EndRetryDialog__);
    sub_1C6BA08(&Method_ManagementManager_HandleLog__);
    sub_1C6BA08(&Method_ManagementManager_NotifyRequestPermissionsDenied__);
    sub_1C6BA08(&Method_ManagementManager_NotifyRequestPermissionsGranted__);
    sub_1C6BA08(&Method_ManagementManager_callbackAccountRegist__);
    sub_1C6BA08(&Method_ManagementManager_callbackTopGameData__);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&PurchaseBehaviour_TypeInfo);
    sub_1C6BA08(&NetworkManager_ReadResult_TypeInfo);
    sub_1C6BA08(&ResolutionManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&SignedData_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__);
    sub_1C6BA08(&ManagementManager___c__DisplayClass35_0_TypeInfo);
    sub_1C6BA08(&Method_ManagementManager__startCheckAll_d__35_MoveNext__);
    sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C6BA08(&StringLiteral_7453/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_9320/*"NOW_LOADING"*/);
    sub_1C6BA08(&StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C6BA08(&StringLiteral_6382/*"F39UThNh"*/);
    sub_1C6BA08(&StringLiteral_7456/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_1C6BA08(&StringLiteral_7454/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_1C6BA08(&StringLiteral_7452/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_5076/*"DataServerFolderName"*/);
    sub_1C6BA08(&StringLiteral_16777/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_1C6BA08(&StringLiteral_9256/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_9249/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_1C6BA08(&StringLiteral_12586/*"SYSTEM"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_20960/*"ioqrk4Om"*/);
    sub_1C6BA08(&StringLiteral_1370/*"2pC0bIYM"*/);
    sub_1C6BA08(&StringLiteral_9250/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__35_o *)sub_1C6BA08(&StringLiteral_9257/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4CB5A68 = 1;
  }
  p_fields = &v4->fields;
  v227 = v4;
  v6 = &AndroidUtil_TypeInfo;
  v7 = (const MethodInfo_3A4F3B4 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v4->fields.__4__this;
  object = (Il2CppObject *)_4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      isReboot = v4->fields.isReboot;
      v4->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v10 = UnityEngine_Resources__UnloadUnusedAssets(0);
      v4->fields.__2__current = (Il2CppObject *)v10;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v10, v11, v12);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_7:
      if ( !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData__RefillSigningData(3, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__Initialize(0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initialize(0);
      if ( !_4__this )
        goto LABEL_420;
      v14 = ManagementManager__InitializeAdManagerAndFirebase((ManagementManager_o *)_4__this, method);
      v4->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)v14, v16, v17);
      v18 = 2;
      goto LABEL_376;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      v19 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v4->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v19, v20, v21);
      v18 = 3;
      goto LABEL_376;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      AssetManager__Initialize((AssetManager_o *)this, 0);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0);
      v22 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v22);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0);
      OptionManager__AdjustScenarioSpeedSetting(v23);
      OptionManager__AdjustVolume(v24);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0);
      UnityEngine_Input__set_multiTouchEnabled(1, 0);
      if ( v4->fields.isReboot )
        goto LABEL_31;
      v25 = (UnityEngine_Application_LogCallback_o *)sub_1C6BC54(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(v25, (Il2CppObject *)_4__this, Method_ManagementManager_HandleLog__, 0);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__add_logMessageReceived(v25, 0);
      if ( v4->fields.isReboot )
      {
LABEL_31:
        v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v26, 0);
        v4->fields.__2__current = (Il2CppObject *)v26;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v26, v27, v28);
        v18 = 4;
        goto LABEL_376;
      }
LABEL_33:
      this = (ManagementManager__startCheckAll_d__35_o *)sub_1C6BAB0(string___TypeInfo, 3);
      if ( !this )
        goto LABEL_420;
      v31 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v32 = StringLiteral_1370/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1370/*"2pC0bIYM"*/,
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.isReboot, v32, v29, v30),
            LODWORD(v31->fields.__2__current) <= 1)
        || (v35 = StringLiteral_6382/*"F39UThNh"*/,
            v31->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6382/*"F39UThNh"*/,
            sub_1C6B9AC((CGThumbnailListItem_o *)&v31->fields.__4__this, v35, v33, v34),
            LODWORD(v31->fields.__2__current) <= 2) )
      {
        sub_1C6BC68(this);
      }
      v38 = StringLiteral_20960/*"ioqrk4Om"*/;
      v31->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)StringLiteral_20960/*"ioqrk4Om"*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v31->fields.__8__1, v38, v36, v37);
      v41 = EncryptedPlayerPrefs_TypeInfo;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v41 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v41->static_fields;
      static_fields->keys = (struct System_String_array *)v31;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->keys, (int32_t)v31, v39, v40);
      if ( !v4->fields.isReboot )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)AndroidPermissionManager__EnabledRuntimePermission(0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_44;
        if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)AndroidUtil__get_apiLevel(0);
        if ( (int)this >= 33 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)AndroidPermissionManager__CheckPermission(
                                                               (System_String_o *)StringLiteral_16777/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_420;
            *((_BYTE *)_4__this + 81) = 1;
            v182 = (System_Action_object__o *)sub_1C6BC54(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v182,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0);
            v183 = (System_Action_object__o *)sub_1C6BC54(System_Action_string__TypeInfo);
            System_Action_object____ctor(v183, object, Method_ManagementManager_NotifyRequestPermissionsDenied__, 0);
            v184 = (System_Action_string__o *)v183;
            _4__this = object;
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_16777/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v182,
              v184,
              0,
              0);
LABEL_47:
            if ( *((_BYTE *)_4__this + 81) )
            {
              v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
              v4->fields.__2__current = (Il2CppObject *)v43;
              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C6B9AC(p__2__current, (int32_t)v43, v44, v45);
              v18 = 5;
              goto LABEL_376;
            }
          }
        }
        else
        {
LABEL_44:
          if ( !_4__this )
            goto LABEL_420;
          *((_BYTE *)_4__this + 80) = 1;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0);
          v179 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v179, 0);
          v4->fields.__2__current = (Il2CppObject *)v179;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC(p__2__current, (int32_t)v179, v180, v181);
          v18 = 6;
          goto LABEL_376;
        }
LABEL_420:
        sub_1C6BC60(this, method);
      }
LABEL_50:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
      v4->fields._readResult_5__2 = (int)this;
      if ( !_4__this )
        goto LABEL_420;
      this = (ManagementManager__startCheckAll_d__35_o *)*((_QWORD *)_4__this + 6);
      if ( !this )
        goto LABEL_420;
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_420;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      ManagementManager__BuildInfoOff((ManagementManager_o *)_4__this, v46);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      TerminalPramsManager__Load_SaveData(0);
      while ( 1 )
      {
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
        temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0);
        if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
        FreeSize = CommonServicePluginScript__GetFreeSize(temporaryCachePath, 0);
        if ( !(*v6)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v6);
        DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
        v188 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0);
        if ( FreeSize < v188 )
          FreeSize = v188;
        if ( (FreeSize & 0x8000000000000000LL) == 0 )
        {
          v189 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v189 = ManagerConfig_TypeInfo;
          }
          _4__this = object;
          if ( FreeSize >= v189->static_fields->LIMIT_FREE_SIZE )
            break;
        }
        *((_BYTE *)_4__this + 75) = 1;
        v190 = (Il2CppObject *)_4__this;
        v191 = v6;
        v192 = v7;
        Instance = SingletonMonoBehaviour_object___get_Instance(*v7);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v194 = LocalizationManager__Get((System_String_o *)StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/, 0);
        v195 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v195, v190, Method_ManagementManager_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_420;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v194, v195, 0, 0);
        _4__this = object;
        v7 = v192;
        v6 = v191;
LABEL_374:
        if ( *((_BYTE *)_4__this + 75) )
        {
          v196 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v196, 0);
          v4->fields.__2__current = (Il2CppObject *)v196;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v196, v197, v198);
          v18 = 7;
          goto LABEL_376;
        }
      }
      v47 = v4;
      if ( v4->fields._readResult_5__2 < 2u )
      {
        v4->fields._isCacheCheck_5__3 = 0;
LABEL_380:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        DataManager__Initialize((DataManager_o *)this, 0);
        if ( !v47->fields.isReboot && !v47->fields._isCacheCheck_5__3 )
        {
          v47->fields._isCacheCheck_5__3 = 1;
          v199 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v199 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v199->static_fields->RebootCacheClearKey, 0) )
          {
            v200 = v7;
            v201 = (Il2CppObject *)sub_1C6BC54(ManagementManager___c__DisplayClass35_0_TypeInfo);
            System_Object___ctor(v201, 0);
            v47->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)v201;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v47->fields.__8__1, (int32_t)v201, v202, v203);
            if ( !v47->fields.__8__1 )
              goto LABEL_420;
            v47->fields.__8__1->fields = 0;
            v204 = SingletonMonoBehaviour_object___get_Instance(*v7);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v205 = LocalizationManager__Get((System_String_o *)StringLiteral_7456/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0);
            v206 = LocalizationManager__Get((System_String_o *)StringLiteral_7454/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0);
            v207 = LocalizationManager__Get((System_String_o *)StringLiteral_7453/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0);
            v208 = LocalizationManager__Get((System_String_o *)StringLiteral_7452/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0);
            _8__1 = (Il2CppObject *)v47->fields.__8__1;
            v210 = v208;
            v211 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v211,
              _8__1,
              Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__,
              0);
            if ( !v204 )
              goto LABEL_420;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v204,
              v205,
              v206,
              v207,
              v210,
              v211,
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
              0);
            _4__this = object;
            v7 = v200;
LABEL_60:
            v48 = v47->fields.__8__1;
            if ( !v48 )
              goto LABEL_420;
            if ( !v48->fields.confirmed )
            {
              v160 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v160, 0);
              v47->fields.__2__current = (Il2CppObject *)v160;
              v76 = (CGThumbnailListItem_o *)&v47->fields.__2__current;
              sub_1C6B9AC(v76, (int32_t)v160, v161, v162);
              v79 = 8;
              goto LABEL_419;
            }
            if ( v48->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_420;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v47->fields.__8__1 = 0;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v47->fields.__8__1, 0, v2, v3);
          }
          else
          {
            v222 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v222 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v222->static_fields->RebootCacheClearKey, 1, 0);
            UnityEngine_PlayerPrefs__Save(0);
          }
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance(*v7);
        if ( !this )
          goto LABEL_420;
        CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)DataManager__readMasterVersion((DataManager_o *)this, 0);
        if ( !_4__this )
          goto LABEL_420;
        started = UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                    (UnityEngine_MonoBehaviour_o *)_4__this,
                    (System_Collections_IEnumerator_o *)this,
                    0);
        v47->fields.__2__current = (Il2CppObject *)started;
        v76 = (CGThumbnailListItem_o *)&v47->fields.__2__current;
        sub_1C6B9AC(v76, (int32_t)started, v224, v225);
        v79 = 9;
        goto LABEL_419;
      }
      v212 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v213 = LocalizationManager__Get((System_String_o *)StringLiteral_9249/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
      }
      else
      {
        if ( !(*v6)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v6);
        DispFriendCode = AndroidUtil__GetFriendCodeFromOldDat(0);
        if ( System_String__IsNullOrEmpty(DispFriendCode, 0) )
          goto LABEL_404;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v213 = LocalizationManager__Get((System_String_o *)StringLiteral_9249/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
      }
      v212 = (Il2CppObject *)System_String__Format(v213, (Il2CppObject *)DispFriendCode, 0);
LABEL_404:
      v215 = SingletonMonoBehaviour_object___get_Instance(*v7);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v216 = LocalizationManager__Get((System_String_o *)StringLiteral_9250/*"NETWORK_ERROR_READ_AUTH"*/, 0);
      v229.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v229.monitor = (void *)-1LL;
      readResult_5__2 = v4->fields._readResult_5__2;
      v217 = System_Enum__ToString(&v229, 0);
      v218 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v217 )
        v219 = (Il2CppObject *)v217;
      else
        v219 = (Il2CppObject *)StringLiteral_1/*""*/;
      v220 = System_String__Format_64008100(v216, v212, v219, 0);
      v221 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v221, object, Method_ManagementManager_EndQuitDialog__, 0);
      if ( !v215 )
        goto LABEL_420;
      CommonUI__OpenErrorDialog((CommonUI_o *)v215, v218, v220, v221, 0, 0);
      return 0;
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_33;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_47;
      goto LABEL_420;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_50;
    case 7:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      goto LABEL_374;
    case 8:
      v47 = v4;
      p_fields->__1__state = -1;
      goto LABEL_60;
    case 9:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4CB5B65 )
      {
        sub_1C6BA08(&DataManager_TypeInfo);
        byte_4CB5B65 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v4->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( !this[2].fields.__1__state )
          j_il2cpp_runtime_class_init_0(this);
        DataManager__ClearCacheAll(0);
      }
      if ( !_4__this )
        goto LABEL_420;
      *((_BYTE *)_4__this + 73) = 0;
      v50 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v50,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v51);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v50,
                                                           (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_420;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v52, 0);
      v4->fields._waitForServerTime_5__7 = v52;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v52, v53, v54);
      goto LABEL_86;
    case 0xA:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      if ( !*((_BYTE *)_4__this + 73) )
      {
LABEL_86:
        waitForServerTime_5__7 = (Il2CppObject *)v4->fields._waitForServerTime_5__7;
        v4->fields.__2__current = waitForServerTime_5__7;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC(p__2__current, (int32_t)waitForServerTime_5__7, v2, v3);
        v18 = 10;
        goto LABEL_376;
      }
      *((_BYTE *)_4__this + 73) = 0;
      v55 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v55,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v56);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v55,
                                                           (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_420;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v57, 0);
      v4->fields._wait_5__8 = v57;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._wait_5__8, (int32_t)v57, v58, v59);
LABEL_203:
      wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
      v4->fields.__2__current = wait_5__8;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)wait_5__8, v2, v3);
      v18 = 11;
      goto LABEL_376;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      if ( !*((_BYTE *)_4__this + 73) )
        goto LABEL_203;
      v61 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB3821 )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB3821 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      }
      if ( !v61 )
        goto LABEL_420;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v61,
        (System_String_o *)StringLiteral_5076/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0);
          v63 = UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                  (UnityEngine_MonoBehaviour_o *)_4__this,
                  MasterData,
                  0);
          v4->fields.__2__current = (Il2CppObject *)v63;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v63, v64, v65);
          v18 = 12;
          goto LABEL_376;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0);
          if ( _4__this )
          {
            v67 = UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                    (UnityEngine_MonoBehaviour_o *)_4__this,
                    (System_Collections_IEnumerator_o *)this,
                    0);
            v4->fields.__2__current = (Il2CppObject *)v67;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)v67, v68, v69);
            v18 = 14;
            goto LABEL_376;
          }
        }
      }
      goto LABEL_420;
    case 0xC:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4CB5B66 )
      {
        sub_1C6BA08(&DataManager_TypeInfo);
        byte_4CB5B66 = 1;
      }
      v66 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v66 = DataManager_TypeInfo;
      }
      if ( v66->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v66->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v66);
      DataManager__ClearCacheAll(0);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      v144 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v144, 0);
      v4->fields.__2__current = (Il2CppObject *)v144;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v144, v145, v146);
      v18 = 13;
      goto LABEL_376;
    case 0xD:
      v47 = v4;
      p_fields->__1__state = -1;
      goto LABEL_380;
    case 0xE:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4CB5B67 )
      {
        sub_1C6BA08(&DataManager_TypeInfo);
        byte_4CB5B67 = 1;
      }
      v47 = v4;
      v70 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v70 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v70->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        NetworkManager__SetServerSetting_41576436((NetworkManager_o *)this, method);
        v163 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        ManagementManager__RebootCacheClear((const MethodInfo *)v163);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateWebViewData((DataManager_o *)this, 0);
        if ( !_4__this )
          goto LABEL_420;
        v164 = UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                 (UnityEngine_MonoBehaviour_o *)_4__this,
                 (System_Collections_IEnumerator_o *)this,
                 0);
        v4->fields.__2__current = (Il2CppObject *)v164;
        v76 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v164, v165, v166);
        v79 = 17;
LABEL_419:
        LODWORD(v76[-1].fields._ThumbnailSpritePath_k__BackingField) = v79;
        return 1;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_420;
        *((_BYTE *)_4__this + 75) = 1;
        v72 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_9256/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0);
        v74 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v74, object, Method_ManagementManager_EndLogDialog__, 0);
        if ( !v72 )
          goto LABEL_420;
        *(_QWORD *)&effectDistance.fields.hasValue = 0;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v72,
          (System_String_o *)StringLiteral_1/*""*/,
          v73,
          v74,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0);
        _4__this = object;
        v7 = (const MethodInfo_3A4F3B4 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( *((_BYTE *)_4__this + 75) )
        {
          v75 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v75, 0);
          v47->fields.__2__current = (Il2CppObject *)v75;
          v76 = (CGThumbnailListItem_o *)&v47->fields.__2__current;
          sub_1C6B9AC(v76, (int32_t)v75, v77, v78);
          v79 = 15;
          goto LABEL_419;
        }
        if ( v47->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_346:
          v47->fields._waitForServerTime_5__7 = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v47->fields._waitForServerTime_5__7, 0, v2, v3);
          v47->fields._wait_5__8 = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v47->fields._wait_5__8, 0, v174, v175);
          goto LABEL_380;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_420;
      }
      *((_BYTE *)_4__this + 75) = 1;
      v167 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v168 = (Il2CppObject *)_4__this;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v169 = LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
      v170 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v170, v168, Method_ManagementManager_EndRetryDialog__, 0);
      if ( !v167 )
        goto LABEL_420;
      CommonUI__OpenRetryDialog((CommonUI_o *)v167, (System_String_o *)StringLiteral_1/*""*/, v169, v170, 0, 0);
      _4__this = object;
      v7 = (const MethodInfo_3A4F3B4 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_344:
      if ( *((_BYTE *)_4__this + 75) )
      {
        v171 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v171, 0);
        v47->fields.__2__current = (Il2CppObject *)v171;
        v76 = (CGThumbnailListItem_o *)&v47->fields.__2__current;
        sub_1C6B9AC(v76, (int32_t)v171, v172, v173);
        v79 = 16;
        goto LABEL_419;
      }
      goto LABEL_346;
    case 0xF:
      v47 = v4;
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_127;
      goto LABEL_420;
    case 0x10:
      v47 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      goto LABEL_344;
    case 0x11:
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      v227->fields.__1__state = -1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, 0, v2, v3);
      v18 = 18;
      goto LABEL_376;
    case 0x12:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) < 1 )
        goto LABEL_204;
      goto LABEL_137;
    case 0x13:
      p_fields->__1__state = -1;
LABEL_137:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) >= 1 )
      {
        v80 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v80, 0);
        v4->fields.__2__current = (Il2CppObject *)v80;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v80, v81, v82);
        v18 = 19;
        goto LABEL_376;
      }
LABEL_204:
      v4->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_310:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v157 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v157, 0);
          v4->fields.__2__current = (Il2CppObject *)v157;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v157, v158, v159);
          v18 = 20;
          goto LABEL_376;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_420;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12586/*"SYSTEM"*/,
          *((_DWORD *)_4__this + 19),
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__getDownloadSize(0) >= 1 )
        {
          v150 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v150 = ManagerConfig_TypeInfo;
          }
          if ( v150->static_fields->UseStandaloneAsset )
          {
            v4->fields._isLoad_5__4 = 1;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm((System_String_o *)StringLiteral_9320/*"NOW_LOADING"*/, 0);
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_420;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_324:
            v151 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v151, 0);
            v4->fields.__2__current = (Il2CppObject *)v151;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v151, v152, v153);
            v18 = 21;
            goto LABEL_376;
          }
LABEL_146:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getDownloadSize(0) >= 1 )
          {
            v83 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v83, 0);
            v4->fields.__2__current = (Il2CppObject *)v83;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v83, v84, v85);
            v18 = 22;
            goto LABEL_376;
          }
        }
LABEL_325:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__SetOnlineStatus(0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_41576436((NetworkManager_o *)this, method);
          v154 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v154, 0.1, 0);
          v4->fields.__2__current = (Il2CppObject *)v154;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v154, v155, v156);
          v18 = 23;
          goto LABEL_376;
        }
        goto LABEL_420;
      }
LABEL_207:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_212:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v141 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v141, 0);
              v4->fields.__2__current = (Il2CppObject *)v141;
              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v141, v142, v143);
              v18 = 24;
              goto LABEL_376;
            }
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v104 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12586/*"SYSTEM"*/,
                       *((_DWORD *)_4__this + 19),
                       0);
              v105 = UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v104,
                       0);
              v4->fields.__2__current = (Il2CppObject *)v105;
              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v105, v106, v107);
              v18 = 25;
              goto LABEL_376;
            }
          }
        }
        goto LABEL_420;
      }
LABEL_217:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__LoadAssetData(0);
LABEL_220:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4CB5B69 )
      {
        sub_1C6BA08(&LocalizationManager_TypeInfo);
        byte_4CB5B69 = 1;
      }
      v108 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v108 = LocalizationManager_TypeInfo;
      }
      if ( v108->static_fields->isBusySetAssetData )
      {
        v109 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v109, 0);
        v4->fields.__2__current = (Il2CppObject *)v109;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v109, v110, v111);
        v18 = 28;
        goto LABEL_376;
      }
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0);
LABEL_231:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_4CB5B6A )
      {
        sub_1C6BA08(&FSUtility_TypeInfo);
        byte_4CB5B6A = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)FSUtility_TypeInfo;
      }
      if ( this[1].fields._waitForServerTime_5__7->klass )
      {
        v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v112, 0);
        v4->fields.__2__current = (Il2CppObject *)v112;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v112, v113, v114);
        v18 = 29;
        goto LABEL_376;
      }
      if ( v4->fields._readResult_5__2 == 1 )
      {
        if ( !_4__this )
          goto LABEL_420;
        *((_BYTE *)_4__this + 72) = 0;
        v115 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v115,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          v116);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                             v115,
                                                             (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_420;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0);
LABEL_245:
        v117 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v117, 0);
        v4->fields.__2__current = (Il2CppObject *)v117;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC(p__2__current, (int32_t)v117, v118, v119);
        v18 = 30;
        goto LABEL_376;
      }
LABEL_246:
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__initializeAssetStorage(0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__Initialize(0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0);
      if ( !this )
        goto LABEL_420;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, method);
LABEL_254:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__IsBusyInitialize(0) )
      {
        v120 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v120, 0);
        v4->fields.__2__current = (Il2CppObject *)v120;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v120, v121, v122);
        v18 = 31;
        goto LABEL_376;
      }
      v4->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_259:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0);
      if ( !this )
        goto LABEL_420;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v4->fields._overrideAssetSoundNameWaitCount_5__5;
        v4->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v124 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v124, 0);
          v4->fields.__2__current = (Il2CppObject *)v124;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC(p__2__current, (int32_t)v124, v125, v126);
          v18 = 32;
          goto LABEL_376;
        }
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0);
LABEL_267:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( LOBYTE(this[9].monitor) )
      {
        v127 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v127, 0);
        v4->fields.__2__current = (Il2CppObject *)v127;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v127, v128, v129);
        v18 = 33;
        goto LABEL_376;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initializeAssetStorage(0);
LABEL_273:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0) )
      {
        v130 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v130, 0);
        v4->fields.__2__current = (Il2CppObject *)v130;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v130, v131, v132);
        v18 = 34;
        goto LABEL_376;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      ScriptManager__Initialize((ScriptManager_o *)this, 0);
LABEL_278:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( BYTE1(this[6].monitor) )
      {
        v133 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v133, 0);
        v4->fields.__2__current = (Il2CppObject *)v133;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v133, v134, v135);
        v18 = 35;
        goto LABEL_376;
      }
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0) )
      {
        if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        PurchaseBehaviour__Ready(0);
      }
      if ( !v4->fields._isLoad_5__4 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_420;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_351:
          v176 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v176, 0);
          v4->fields.__2__current = (Il2CppObject *)v176;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC(p__2__current, (int32_t)v176, v177, v178);
          v18 = 37;
          goto LABEL_376;
        }
LABEL_296:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff((ManagementManager_o *)_4__this, method);
          v4->fields.__2__current = 0;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC(p__2__current, 0, v139, v140);
          v18 = 38;
          goto LABEL_376;
        }
        goto LABEL_420;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9320/*"NOW_LOADING"*/, 0) )
      {
LABEL_294:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_420;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
        goto LABEL_296;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__fadeoutBgm(1.0, 0);
      v136 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v136, 1.0, 0);
      v4->fields.__2__current = (Il2CppObject *)v136;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v227->fields.__2__current, (int32_t)v136, v137, v138);
      v18 = 36;
LABEL_376:
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v18;
      return 1;
    case 0x14:
      p_fields->__1__state = -1;
      goto LABEL_310;
    case 0x15:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_324;
      goto LABEL_325;
    case 0x16:
      p_fields->__1__state = -1;
      goto LABEL_146;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_207;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_212;
    case 0x19:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0) < 1 )
        goto LABEL_217;
      v4->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_4CB5B68 )
      {
        sub_1C6BA08(&LogoMain_TypeInfo);
        byte_4CB5B68 = 1;
      }
      v86 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v86 = LogoMain_TypeInfo;
      }
      if ( !v86->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9320/*"NOW_LOADING"*/, 0);
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_169:
      v87 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v87, 0);
      v4->fields.__2__current = (Il2CppObject *)v87;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)v87, v88, v89);
      v18 = 26;
      goto LABEL_376;
    case 0x1A:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_305:
      v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v147, 0);
      v4->fields.__2__current = (Il2CppObject *)v147;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)v147, v148, v149);
      v18 = 27;
      goto LABEL_376;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_305;
      v90 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v90 = (_QWORD *)sub_1C6BA20(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v91 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v90, v90[4]);
      OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0, v92);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      goto LABEL_217;
    case 0x1C:
      p_fields->__1__state = -1;
      goto LABEL_220;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_231;
    case 0x1E:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      if ( !*((_BYTE *)_4__this + 72) )
        goto LABEL_245;
      goto LABEL_246;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_254;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_259;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_267;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_273;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_278;
    case 0x24:
      p_fields->__1__state = -1;
      goto LABEL_294;
    case 0x25:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_351;
      v93 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v93 = (_QWORD *)sub_1C6BA20(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v94 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v93, v93[4]);
      OverwriteAssetSoundName__PlaySystemSe(v94, 0, 0, v95);
      goto LABEL_294;
    case 0x26:
      p_fields->__1__state = -1;
      v96 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v96 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v96->static_fields->PushStateSendedKey,
                                                           0,
                                                           0);
      if ( !(_DWORD)this )
      {
        v98 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v98);
        OptionManager__SetNotiffication(Notiffication, 1, v100);
        v101 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v101 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v101->static_fields->PushStateSendedKey, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      if ( !_4__this )
        goto LABEL_420;
      *((_BYTE *)_4__this + 84) = 1;
      *((_BYTE *)_4__this + 32) = 0;
      ManagementManager__BuildInfoDisp((ManagementManager_o *)_4__this, 1, v97);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin((ManagementManager_o *)_4__this, v102);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 9, 1, 0, 0);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *ManagementManager__startCheckAll_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ManagementManager__startCheckAll_d__35__System_Collections_IEnumerator_Reset(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ManagementManager__startCheckAll_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *ManagementManager__startCheckAll_d__35__System_Collections_IEnumerator_get_Current(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ManagementManager__startCheckAll_d__35__System_IDisposable_Dispose(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  ;
}