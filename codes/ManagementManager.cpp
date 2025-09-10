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

  if ( (byte_4C26A95 & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8048/*"IsNotificationStatusSend"*/);
    sub_1C2D490(&StringLiteral_8060/*"IsReBootCacheClearKey"*/);
    sub_1C2D490(&StringLiteral_21028/*"ja-JP"*/);
    sub_1C2D490(&StringLiteral_24989/*"yyyy年MM月dd日HH時mm分"*/);
    byte_4C26A95 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_8048/*"IsNotificationStatusSend"*/;
  sub_1C2D434((CGThumbnailListItem_o *)ManagementManager_TypeInfo->static_fields, StringLiteral_8048/*"IsNotificationStatusSend"*/, v1, v2);
  v3 = StringLiteral_8060/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8060/*"IsReBootCacheClearKey"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->RebootCacheClearKey, v3, v5, v6);
  v7 = StringLiteral_24989/*"yyyy年MM月dd日HH時mm分"*/;
  v8 = ManagementManager_TypeInfo->static_fields;
  v8->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24989/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->DATE_TIME_DISP_FORMAT, v7, v9, v10);
  v11 = StringLiteral_21028/*"ja-JP"*/;
  v12 = ManagementManager_TypeInfo->static_fields;
  v12->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_21028/*"ja-JP"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->DEFAULT_CULTURE_NAME, v11, v13, v14);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C26A94 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_4C26A94 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  ManagementManager_o *v10; // x21
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  float v13; // s0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x19
  Il2CppObject *v19; // x19
  float v20; // [xsp+Ch] [xbp-34h] BYREF

  v20 = ratio;
  if ( (byte_4C26A7D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Debug_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_781/*"):"*/);
    sub_1C2D490(&StringLiteral_6755/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_1C2D490(&StringLiteral_745/*"(ratio: "*/);
    byte_4C26A7D = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6755/*"Firebase.FirebaseApp"*/, 0) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1C2D538(string___TypeInfo, 5);
    if ( this )
    {
      v10 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v8, v9);
      if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v12 = StringLiteral_745/*"(ratio: "*/;
      v10->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_745/*"(ratio: "*/;
      sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.AvalonSceneManager, v12, v8, v11);
      this = (ManagementManager_o *)System_Single__ToString(v13, (const MethodInfo *)&v20);
      if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 2
        || (v10->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.debugInfoRootObject, (int32_t)this, v8, v14),
            LODWORD(v10->fields.m_CancellationTokenSource) <= 3)
        || (v16 = StringLiteral_781/*"):"*/,
            v10->fields.statusLabel = (struct UILabel_o *)StringLiteral_781/*"):"*/,
            sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.statusLabel, v16, v8, v15),
            LODWORD(v10->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1C2D6F4(this, errorText, v8);
      }
      v10->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&v10->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v8,
        v17);
      v18 = (Il2CppObject *)System_String__Concat_63498380((System_String_array *)v10, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v18, 0);
      return;
    }
LABEL_19:
    sub_1C2D6EC(this, errorText);
  }
  v19 = (Il2CppObject *)System_String__Concat_63457864(errorText, exceptionMessage, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v19, 0);
}


void ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C26A79 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_4C26A79 = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_39D4038 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
}


void ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4C26A92 & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C26A92 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0);
  ManagementManager__BuildInfoOff(this, v4);
}


void ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4C26A91 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26A91 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0) )
  {
    sub_1C2D6EC(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ManagementManager__CompletionStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4C26A77 & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    byte_4C26A77 = 1;
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

  if ( (byte_4C26A87 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C26A87 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0, 0);
}


void ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4C26A86 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    byte_4C26A86 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70958636(0);
}


void ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4C26A85 & 1) != 0 )
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
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    byte_4C26A85 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70958636(0);
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

  if ( (byte_4C26A7E & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&StringLiteral_6176/*"ErrorLog: "*/);
    sub_1C2D490(&StringLiteral_55/*"\n StackTrace: "*/);
    byte_4C26A7E = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v9 = System_String__Concat_63498116(
           (System_String_o *)StringLiteral_6176/*"ErrorLog: "*/,
           condition,
           (System_String_o *)StringLiteral_55/*"\n StackTrace: "*/,
           stackTrace,
           0);
    if ( !Instance )
      sub_1C2D6EC(v9, v10);
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

  if ( (byte_4C26A80 & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
    byte_4C26A80 = 1;
  }
  v3 = sub_1C2D6DC(ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4C26A8E & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    byte_4C26A8E = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4C26278 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    byte_4C26278 = 1;
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

  if ( (byte_4C26A8F & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_4C26A8F = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
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

  if ( (byte_4C26A93 & 1) == 0 )
  {
    sub_1C2D490(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C2D490(&ManagementManager_TypeInfo);
    byte_4C26A93 = 1;
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

  if ( (byte_4C26A78 & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    byte_4C26A78 = 1;
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

  if ( (byte_4C26A81 & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
    byte_4C26A81 = 1;
  }
  v2 = sub_1C2D6DC(ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4C26A82 & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
    byte_4C26A82 = 1;
  }
  v2 = sub_1C2D6DC(ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
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

  if ( (byte_4C26A7A & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    sub_1C2D490(&UnityGamingServicesBehaviour_var);
    byte_4C26A7A = 1;
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
    sub_1C2D6EC(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0);
  ManagementManager__createMovieObj(this, v7);
  v9 = ManagementManager__startCheckAll(this, 0, 0, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4C26A90 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1C2D490(&UnityEngine_Application_TypeInfo);
    byte_4C26A90 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_70958636(0);
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

  if ( (byte_4C26A8D & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C26A8D = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _40206092; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4C26A8C & 1) == 0 )
  {
    sub_1C2D490(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C26A8C = 1;
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
  _40206092 = TutorialFlag__Get_40206092(102, 0);
  if ( _40206092 )
  {
LABEL_9:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v9);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C2D6EC(0, v11);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_40206092, v6, v7);
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

  if ( (byte_4C26A8A & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C26A8A = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
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

  if ( (byte_4C26A89 & 1) == 0 )
  {
    sub_1C2D490(&Method_ManagementManager_callbackTopHome__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C26A89 = 1;
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
  if ( TutorialFlag__Get_40206092(102, 0) )
  {
LABEL_9:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1C2D6EC(0, v10);
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

  if ( (byte_4C26A7B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_4606/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_1C2D490(&StringLiteral_9175/*"MovieRoot"*/);
    byte_4C26A7B = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0, 0) )
  {
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4606/*"CommonUI/UI Root/SystemUICamera"*/, 0);
    v6 = (UnityEngine_GameObject_o *)sub_1C2D6DC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9175/*"MovieRoot"*/, 0);
    if ( !v6
      || (v9 = UnityEngine_GameObject__AddComponent_object_(
                 v6,
                 (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields._videoPlayer_k__BackingField, (int32_t)v9, v10, v11),
          !v5)
      || (v12 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v5,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v12) )
    {
      sub_1C2D6EC(Component_object, v8);
    }
    AvalonVideoPlayer__initialize(v12, (UnityEngine_Camera_o *)Component_object, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent_35924288(v6, gameObject, 0);
  }
}


int32_t ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C26A75 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C26A75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  return HIDWORD(Instance[4].monitor);
}


bool ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4C26A76 & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    byte_4C26A76 = 1;
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

  if ( (byte_4C26A7C & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&FirebaseScript_TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&ManagementManager_TypeInfo);
    sub_1C2D490(&MyRoomParamsManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C26A7C = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
      || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
LABEL_32:
      sub_1C2D6EC(Instance, v9);
    }
    PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)Instance, 0);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0);
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    MyRoomParamsManager__Reboot(0);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_1C2D6EC(0, v11);
    AdManager__Initialize((AdManager_o *)v10, 2, 0);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0);
    v13 = ManagementManager__startCheckAll(this, 1, isLogin, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v13, 0);
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

  if ( (byte_4C26A88 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ManagementManager_callbackTopLogin__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C26A88 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C2D6DC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v5);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C26A8B & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C26A8B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C2D6DC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v5);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, v8);
}


void ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._videoPlayer_k__BackingField, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_4C26A7F & 1) == 0 )
  {
    sub_1C2D490(&ManagementManager__startCheckAll_d__35_TypeInfo);
    byte_4C26A7F = 1;
  }
  v7 = isLogin;
  v8 = sub_1C2D6DC(ManagementManager__startCheckAll_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C26A83 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C26A83 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0);
}


void ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C26A84 & 1) == 0 )
  {
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ScrTerminalListTop_TypeInfo);
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C26A84 = 1;
  }
  MovieFileMerge__Delete_40270264(0);
  v2 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->NOTICE_LAST_MODIFIED_KEY, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C24309 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24309 = 1;
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

  if ( (byte_4C26A97 & 1) == 0 )
  {
    sub_1C2D490(&FirebaseScript_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C26A97 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v10);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v11 )
      sub_1C2D6EC(0, v12);
    AdManager__Initialize((AdManager_o *)v11, 1, 0);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0);
    if ( !_4__this )
      sub_1C2D6EC(v13, v14);
    v15 = ManagementManager__SetupFirebaseAppCheck(v13, v14);
    started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_71149276(_4__this, v15, 0);
    v18 = ManagementManager__SetupFirebaseCrashlytics(started, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276(_4__this, v18, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x19
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  FirebaseScript_c *v31; // x0
  FirebaseScript_c *v32; // x0
  bool v33[4]; // [xsp+18h] [xbp-28h] BYREF
  float v34; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C26A98 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&FirebaseScript_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_814/*", AppCheckErrorMessage: "*/);
    sub_1C2D490(&StringLiteral_5930/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/);
    sub_1C2D490(&StringLiteral_7984/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/);
    byte_4C26A98 = 1;
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
      if ( !byte_4C26B90 )
      {
        sub_1C2D490(&FirebaseScript_TypeInfo);
        byte_4C26B90 = 1;
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
      if ( !byte_4C26B91 )
      {
        sub_1C2D490(&FirebaseScript_TypeInfo);
        byte_4C26B91 = 1;
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
        sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
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
        if ( !byte_4C26B92 )
        {
          sub_1C2D490(&FirebaseScript_TypeInfo);
          byte_4C26B92 = 1;
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
        if ( !byte_4C211E0 )
        {
          sub_1C2D490(&FirebaseScript_TypeInfo);
          byte_4C211E0 = 1;
        }
        v13 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v13 = FirebaseScript_TypeInfo;
        }
        if ( v13->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        v14 = (System_String_o *)StringLiteral_7984/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        if ( v13->_2.cctor_finished )
          goto LABEL_73;
LABEL_72:
        j_il2cpp_runtime_class_init_0(v13);
LABEL_73:
        if ( !byte_4C26B93 )
        {
          sub_1C2D490(&FirebaseScript_TypeInfo);
          byte_4C26B93 = 1;
        }
        v32 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v32 = FirebaseScript_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetString(v32->static_fields->_AppCheckPrevMessageKey_k__BackingField, v14, 0);
        UnityEngine_PlayerPrefs__Save(0);
        return 0;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4C26A6C )
      {
        sub_1C2D490(&FirebaseScript_TypeInfo);
        byte_4C26A6C = 1;
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
        sub_1C2D434((CGThumbnailListItem_o *)v9, 0, v2, v3);
        *((_DWORD *)v9 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4C26B92 )
      {
        sub_1C2D490(&FirebaseScript_TypeInfo);
        byte_4C26B92 = 1;
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
      if ( !byte_4C26B94 )
      {
        sub_1C2D490(&FirebaseScript_TypeInfo);
        byte_4C26B94 = 1;
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
      v34 = v19;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v34, v23, v24, v25);
      v33[0] = v22;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v33, v27, v28, v29);
      v14 = System_String__Format_63499156((System_String_o *)StringLiteral_5930/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v26, v30, 0);
      if ( (v21 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4C26B95 )
        {
          sub_1C2D490(&FirebaseScript_TypeInfo);
          byte_4C26B95 = 1;
        }
        v31 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v31 = FirebaseScript_TypeInfo;
        }
        v14 = System_String__Concat_63496112(
                v14,
                (System_String_o *)StringLiteral_814/*", AppCheckErrorMessage: "*/,
                v31->static_fields->_AppCheckTokenError_k__BackingField,
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ManagementManager__SetupFirebaseAppCheck_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C26A99 & 1) == 0 )
  {
    sub_1C2D490(&FirebaseScript_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4C26A99 = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4C26B91 )
  {
    sub_1C2D490(&FirebaseScript_TypeInfo);
    byte_4C26B91 = 1;
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
    if ( !byte_4C211E0 )
    {
      sub_1C2D490(&FirebaseScript_TypeInfo);
      byte_4C211E0 = 1;
    }
    v6 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v6 = FirebaseScript_TypeInfo;
    }
    if ( v6->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_1C2D6EC(0, v8);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0);
    }
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ManagementManager__SetupFirebaseCrashlytics_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C26A96 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__);
    sub_1C2D490(&ManagementManager___c__DisplayClass35_1_TypeInfo);
    byte_4C26A96 = 1;
  }
  v5 = sub_1C2D6DC(ManagementManager___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v11, 0);
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
    sub_1C2D6EC(this, method);
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
  const MethodInfo_39D3CCC **v7; // x23
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
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  ManagementManager__startCheckAll_d__35_o *v31; // x21
  int32_t v32; // w1
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  EncryptedPlayerPrefs_c *v39; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v41; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x1
  ManagementManager__startCheckAll_d__35_o *v45; // x29
  struct ManagementManager___c__DisplayClass35_0_o *v46; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v48; // x21
  const MethodInfo *v49; // x3
  UnityEngine_WaitForEndOfFrame_o *v50; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  NetworkManager_ResultCallbackFunc_o *v53; // x21
  const MethodInfo *v54; // x3
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v59; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  DataManager_c *v64; // x0
  UnityEngine_Coroutine_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  DataManager_c *v68; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v70; // x21
  System_String_o *v71; // x22
  ErrorDialog_ClickDelegate_o *v72; // x23
  UnityEngine_WaitForEndOfFrame_o *v73; // x20
  CGThumbnailListItem_o *v74; // x29
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int v77; // w8
  UnityEngine_WaitForEndOfFrame_o *v78; // x20
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  UnityEngine_WaitForEndOfFrame_o *v81; // x20
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  LogoMain_c *v84; // x0
  UnityEngine_WaitForEndOfFrame_o *v85; // x20
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  const MethodInfo *v90; // x3
  _QWORD *v91; // x0
  System_Reflection_MethodBase_o *v92; // x0
  const MethodInfo *v93; // x3
  ManagementManager_c *v94; // x0
  const MethodInfo *v95; // x2
  OptionManager_c *v96; // x0
  bool Notiffication; // w0
  const MethodInfo *v98; // x2
  ManagementManager_c *v99; // x0
  const MethodInfo *v100; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v102; // x0
  UnityEngine_Coroutine_o *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  LocalizationManager_c *v106; // x0
  UnityEngine_WaitForEndOfFrame_o *v107; // x20
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  UnityEngine_WaitForEndOfFrame_o *v110; // x20
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  NetworkManager_ResultCallbackFunc_o *v113; // x21
  const MethodInfo *v114; // x3
  UnityEngine_WaitForEndOfFrame_o *v115; // x20
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  UnityEngine_WaitForEndOfFrame_o *v118; // x20
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v122; // x20
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  UnityEngine_WaitForEndOfFrame_o *v125; // x20
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  UnityEngine_WaitForEndOfFrame_o *v128; // x20
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  UnityEngine_WaitForEndOfFrame_o *v131; // x20
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  UnityEngine_WaitForSeconds_o *v134; // x20
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  UnityEngine_WaitForEndOfFrame_o *v139; // x20
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  UnityEngine_WaitForEndOfFrame_o *v142; // x20
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  UnityEngine_WaitForEndOfFrame_o *v145; // x20
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  ManagerConfig_c *v148; // x0
  UnityEngine_WaitForEndOfFrame_o *v149; // x20
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  UnityEngine_WaitForSeconds_o *v152; // x20
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  UnityEngine_WaitForEndOfFrame_o *v155; // x20
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  UnityEngine_WaitForEndOfFrame_o *v158; // x20
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  ManagementManager_c *v161; // x0
  UnityEngine_Coroutine_o *v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  Il2CppObject *v165; // x21
  Il2CppObject *v166; // x20
  System_String_o *v167; // x22
  ErrorDialog_ClickDelegate_o *v168; // x23
  UnityEngine_WaitForEndOfFrame_o *v169; // x20
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  UnityEngine_WaitForEndOfFrame_o *v174; // x20
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  UnityEngine_WaitForEndOfFrame_o *v177; // x20
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  System_Action_object__o *v180; // x21
  System_Action_object__o *v181; // x22
  System_Action_string__o *v182; // x2
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v186; // x0
  ManagerConfig_c *v187; // x0
  Il2CppObject *v188; // x24
  AndroidUtil_c **v189; // x20
  const MethodInfo_39D3CCC **v190; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v192; // x22
  ErrorDialog_ClickDelegate_o *v193; // x23
  UnityEngine_WaitForEndOfFrame_o *v194; // x20
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  ManagementManager_c *v197; // x0
  const MethodInfo_39D3CCC **v198; // x28
  Il2CppObject *v199; // x21
  int32_t v200; // w2
  const MethodInfo *v201; // x3
  Il2CppObject *v202; // x21
  System_String_o *v203; // x22
  System_String_o *v204; // x24
  System_String_o *v205; // x25
  System_String_o *v206; // x0
  Il2CppObject *_8__1; // x27
  System_String_o *v208; // x23
  CommonConfirmDialog_ClickDelegate_o *v209; // x26
  Il2CppObject *v210; // x21
  System_String_o *v211; // x21
  System_String_o *DispFriendCode; // x22
  Il2CppObject *v213; // x22
  System_String_o *v214; // x23
  System_String_o *v215; // x0
  System_String_o *v216; // x19
  Il2CppObject *v217; // x2
  System_String_o *v218; // x21
  ErrorDialog_ClickDelegate_o *v219; // x23
  ManagementManager_c *v220; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-D0h]
  ManagementManager__startCheckAll_d__35_o *v225; // [xsp+48h] [xbp-88h]
  Il2CppObject *object; // [xsp+50h] [xbp-80h]
  System_Enum_o v227; // [xsp+58h] [xbp-78h] BYREF
  int32_t readResult_5__2; // [xsp+68h] [xbp-68h]

  v4 = this;
  if ( (byte_4C26A9A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_string__TypeInfo);
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&CommonServicePluginScript_TypeInfo);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Application_LogCallback_TypeInfo);
    sub_1C2D490(&LogoMain_TypeInfo);
    sub_1C2D490(&Method_ManagementManager_EndLogDialog__);
    sub_1C2D490(&Method_ManagementManager_EndQuitDialog__);
    sub_1C2D490(&Method_ManagementManager_EndRetryDialog__);
    sub_1C2D490(&Method_ManagementManager_HandleLog__);
    sub_1C2D490(&Method_ManagementManager_NotifyRequestPermissionsDenied__);
    sub_1C2D490(&Method_ManagementManager_NotifyRequestPermissionsGranted__);
    sub_1C2D490(&Method_ManagementManager_callbackAccountRegist__);
    sub_1C2D490(&Method_ManagementManager_callbackTopGameData__);
    sub_1C2D490(&ManagementManager_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_1C2D490(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&PurchaseBehaviour_TypeInfo);
    sub_1C2D490(&NetworkManager_ReadResult_TypeInfo);
    sub_1C2D490(&ResolutionManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    sub_1C2D490(&SignedData_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__);
    sub_1C2D490(&ManagementManager___c__DisplayClass35_0_TypeInfo);
    sub_1C2D490(&Method_ManagementManager__startCheckAll_d__35_MoveNext__);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C2D490(&StringLiteral_7453/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_9316/*"NOW_LOADING"*/);
    sub_1C2D490(&StringLiteral_9244/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C2D490(&StringLiteral_6381/*"F39UThNh"*/);
    sub_1C2D490(&StringLiteral_7456/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_1C2D490(&StringLiteral_7454/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_1C2D490(&StringLiteral_7452/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_5080/*"DataServerFolderName"*/);
    sub_1C2D490(&StringLiteral_16760/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_1C2D490(&StringLiteral_9252/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_9245/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_1C2D490(&StringLiteral_12578/*"SYSTEM"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_20880/*"ioqrk4Om"*/);
    sub_1C2D490(&StringLiteral_1377/*"2pC0bIYM"*/);
    sub_1C2D490(&StringLiteral_9246/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__35_o *)sub_1C2D490(&StringLiteral_9253/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4C26A9A = 1;
  }
  p_fields = &v4->fields;
  v225 = v4;
  v6 = &AndroidUtil_TypeInfo;
  v7 = (const MethodInfo_39D3CCC **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
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
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v10, v11, v12);
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
      sub_1C2D434(p__2__current, (int32_t)v14, v16, v17);
      v18 = 2;
      goto LABEL_376;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      v19 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v4->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v19, v20, v21);
      v18 = 3;
      goto LABEL_376;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
      v25 = (UnityEngine_Application_LogCallback_o *)sub_1C2D6DC(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(v25, (Il2CppObject *)_4__this, Method_ManagementManager_HandleLog__, 0);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__add_logMessageReceived(v25, 0);
      if ( v4->fields.isReboot )
      {
LABEL_31:
        v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v26, 0);
        v4->fields.__2__current = (Il2CppObject *)v26;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v26, v27, v28);
        v18 = 4;
        goto LABEL_376;
      }
LABEL_33:
      this = (ManagementManager__startCheckAll_d__35_o *)sub_1C2D538(string___TypeInfo, 3);
      if ( !this )
        goto LABEL_420;
      v31 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v32 = StringLiteral_1377/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1377/*"2pC0bIYM"*/,
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.isReboot, v32, v29, v30),
            LODWORD(v31->fields.__2__current) <= 1)
        || (v34 = StringLiteral_6381/*"F39UThNh"*/,
            v31->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6381/*"F39UThNh"*/,
            sub_1C2D434((CGThumbnailListItem_o *)&v31->fields.__4__this, v34, v29, v33),
            LODWORD(v31->fields.__2__current) <= 2) )
      {
        sub_1C2D6F4(this, method, v29);
      }
      v36 = StringLiteral_20880/*"ioqrk4Om"*/;
      v31->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)StringLiteral_20880/*"ioqrk4Om"*/;
      sub_1C2D434((CGThumbnailListItem_o *)&v31->fields.__8__1, v36, v29, v35);
      v39 = EncryptedPlayerPrefs_TypeInfo;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v39 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v39->static_fields;
      static_fields->keys = (struct System_String_array *)v31;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->keys, (int32_t)v31, v37, v38);
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
                                                               (System_String_o *)StringLiteral_16760/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_420;
            *((_BYTE *)_4__this + 81) = 1;
            v180 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v180,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0);
            v181 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
            System_Action_object____ctor(v181, object, Method_ManagementManager_NotifyRequestPermissionsDenied__, 0);
            v182 = (System_Action_string__o *)v181;
            _4__this = object;
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_16760/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v180,
              v182,
              0,
              0);
LABEL_47:
            if ( *((_BYTE *)_4__this + 81) )
            {
              v41 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v41, 0);
              v4->fields.__2__current = (Il2CppObject *)v41;
              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C2D434(p__2__current, (int32_t)v41, v42, v43);
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
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0);
          v177 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v177, 0);
          v4->fields.__2__current = (Il2CppObject *)v177;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v177, v178, v179);
          v18 = 6;
          goto LABEL_376;
        }
LABEL_420:
        sub_1C2D6EC(this, method);
      }
LABEL_50:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
      ManagementManager__BuildInfoOff((ManagementManager_o *)_4__this, v44);
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
        v186 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0);
        if ( FreeSize < v186 )
          FreeSize = v186;
        if ( (FreeSize & 0x8000000000000000LL) == 0 )
        {
          v187 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v187 = ManagerConfig_TypeInfo;
          }
          _4__this = object;
          if ( FreeSize >= v187->static_fields->LIMIT_FREE_SIZE )
            break;
        }
        *((_BYTE *)_4__this + 75) = 1;
        v188 = (Il2CppObject *)_4__this;
        v189 = v6;
        v190 = v7;
        Instance = SingletonMonoBehaviour_object___get_Instance(*v7);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v192 = LocalizationManager__Get((System_String_o *)StringLiteral_9244/*"NETWORK_ERROR_DISK_FULL"*/, 0);
        v193 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v193, v188, Method_ManagementManager_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_420;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v192, v193, 0, 0);
        _4__this = object;
        v7 = v190;
        v6 = v189;
LABEL_374:
        if ( *((_BYTE *)_4__this + 75) )
        {
          v194 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v194, 0);
          v4->fields.__2__current = (Il2CppObject *)v194;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v194, v195, v196);
          v18 = 7;
          goto LABEL_376;
        }
      }
      v45 = v4;
      if ( v4->fields._readResult_5__2 < 2u )
      {
        v4->fields._isCacheCheck_5__3 = 0;
LABEL_380:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        DataManager__Initialize((DataManager_o *)this, 0);
        if ( !v45->fields.isReboot && !v45->fields._isCacheCheck_5__3 )
        {
          v45->fields._isCacheCheck_5__3 = 1;
          v197 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v197 = ManagementManager_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v197->static_fields->RebootCacheClearKey, 0) )
          {
            v198 = v7;
            v199 = (Il2CppObject *)sub_1C2D6DC(ManagementManager___c__DisplayClass35_0_TypeInfo);
            System_Object___ctor(v199, 0);
            v45->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)v199;
            sub_1C2D434((CGThumbnailListItem_o *)&v45->fields.__8__1, (int32_t)v199, v200, v201);
            if ( !v45->fields.__8__1 )
              goto LABEL_420;
            v45->fields.__8__1->fields = 0;
            v202 = SingletonMonoBehaviour_object___get_Instance(*v7);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v203 = LocalizationManager__Get((System_String_o *)StringLiteral_7456/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0);
            v204 = LocalizationManager__Get((System_String_o *)StringLiteral_7454/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0);
            v205 = LocalizationManager__Get((System_String_o *)StringLiteral_7453/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0);
            v206 = LocalizationManager__Get((System_String_o *)StringLiteral_7452/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0);
            _8__1 = (Il2CppObject *)v45->fields.__8__1;
            v208 = v206;
            v209 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              v209,
              _8__1,
              Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__,
              0);
            if ( !v202 )
              goto LABEL_420;
            CommonUI__OpenConfirmDecideDlg(
              (CommonUI_o *)v202,
              v203,
              v204,
              v205,
              v208,
              v209,
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
            v7 = v198;
LABEL_60:
            v46 = v45->fields.__8__1;
            if ( !v46 )
              goto LABEL_420;
            if ( !v46->fields.confirmed )
            {
              v158 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v158, 0);
              v45->fields.__2__current = (Il2CppObject *)v158;
              v74 = (CGThumbnailListItem_o *)&v45->fields.__2__current;
              sub_1C2D434(v74, (int32_t)v158, v159, v160);
              v77 = 8;
              goto LABEL_419;
            }
            if ( v46->fields.isDecide )
            {
              if ( !_4__this )
                goto LABEL_420;
              ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
            }
            v45->fields.__8__1 = 0;
            sub_1C2D434((CGThumbnailListItem_o *)&v45->fields.__8__1, 0, v2, v3);
          }
          else
          {
            v220 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v220 = ManagementManager_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v220->static_fields->RebootCacheClearKey, 1, 0);
            UnityEngine_PlayerPrefs__Save(0);
          }
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance(*v7);
        if ( !this )
          goto LABEL_420;
        CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)DataManager__readMasterVersion((DataManager_o *)this, 0);
        if ( !_4__this )
          goto LABEL_420;
        started = UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                    (UnityEngine_MonoBehaviour_o *)_4__this,
                    (System_Collections_IEnumerator_o *)this,
                    0);
        v45->fields.__2__current = (Il2CppObject *)started;
        v74 = (CGThumbnailListItem_o *)&v45->fields.__2__current;
        sub_1C2D434(v74, (int32_t)started, v222, v223);
        v77 = 9;
        goto LABEL_419;
      }
      v210 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v211 = LocalizationManager__Get((System_String_o *)StringLiteral_9245/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
        v211 = LocalizationManager__Get((System_String_o *)StringLiteral_9245/*"NETWORK_ERROR_FIEND_CODE"*/, 0);
      }
      v210 = (Il2CppObject *)System_String__Format(v211, (Il2CppObject *)DispFriendCode, 0);
LABEL_404:
      v213 = SingletonMonoBehaviour_object___get_Instance(*v7);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v214 = LocalizationManager__Get((System_String_o *)StringLiteral_9246/*"NETWORK_ERROR_READ_AUTH"*/, 0);
      v227.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v227.monitor = (void *)-1LL;
      readResult_5__2 = v4->fields._readResult_5__2;
      v215 = System_Enum__ToString(&v227, 0);
      v216 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v215 )
        v217 = (Il2CppObject *)v215;
      else
        v217 = (Il2CppObject *)StringLiteral_1/*""*/;
      v218 = System_String__Format_63499156(v214, v210, v217, 0);
      v219 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v219, object, Method_ManagementManager_EndQuitDialog__, 0);
      if ( !v213 )
        goto LABEL_420;
      CommonUI__OpenErrorDialog((CommonUI_o *)v213, v216, v218, v219, 0, 0);
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
      v45 = v4;
      p_fields->__1__state = -1;
      goto LABEL_60;
    case 9:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4C26B96 )
      {
        sub_1C2D490(&DataManager_TypeInfo);
        byte_4C26B96 = 1;
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
      v48 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v48,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v49);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v48,
                                                           (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_420;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v50 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v50, 0);
      v4->fields._waitForServerTime_5__7 = v50;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v50, v51, v52);
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
        sub_1C2D434(p__2__current, (int32_t)waitForServerTime_5__7, v2, v3);
        v18 = 10;
        goto LABEL_376;
      }
      *((_BYTE *)_4__this + 73) = 0;
      v53 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v53,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v54);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v53,
                                                           (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_420;
      RequestBase__beginRequest((RequestBase_o *)this, 0);
      v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v55, 0);
      v4->fields._wait_5__8 = v55;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._wait_5__8, (int32_t)v55, v56, v57);
LABEL_203:
      wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
      v4->fields.__2__current = wait_5__8;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)wait_5__8, v2, v3);
      v18 = 11;
      goto LABEL_376;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      if ( !*((_BYTE *)_4__this + 73) )
        goto LABEL_203;
      v59 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C24873 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C24873 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      }
      if ( !v59 )
        goto LABEL_420;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v59,
        (System_String_o *)StringLiteral_5080/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0);
          v61 = UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                  (UnityEngine_MonoBehaviour_o *)_4__this,
                  MasterData,
                  0);
          v4->fields.__2__current = (Il2CppObject *)v61;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v61, v62, v63);
          v18 = 12;
          goto LABEL_376;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0);
          if ( _4__this )
          {
            v65 = UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                    (UnityEngine_MonoBehaviour_o *)_4__this,
                    (System_Collections_IEnumerator_o *)this,
                    0);
            v4->fields.__2__current = (Il2CppObject *)v65;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)v65, v66, v67);
            v18 = 14;
            goto LABEL_376;
          }
        }
      }
      goto LABEL_420;
    case 0xC:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4C26B97 )
      {
        sub_1C2D490(&DataManager_TypeInfo);
        byte_4C26B97 = 1;
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
      DataManager__ClearCacheAll(0);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      v142 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v142, 0);
      v4->fields.__2__current = (Il2CppObject *)v142;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v142, v143, v144);
      v18 = 13;
      goto LABEL_376;
    case 0xD:
      v45 = v4;
      p_fields->__1__state = -1;
      goto LABEL_380;
    case 0xE:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !byte_4C26B98 )
      {
        sub_1C2D490(&DataManager_TypeInfo);
        byte_4C26B98 = 1;
      }
      v45 = v4;
      v68 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v68 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v68->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        NetworkManager__SetServerSetting_41121668((NetworkManager_o *)this, method);
        v161 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        ManagementManager__RebootCacheClear((const MethodInfo *)v161);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateWebViewData((DataManager_o *)this, 0);
        if ( !_4__this )
          goto LABEL_420;
        v162 = UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                 (UnityEngine_MonoBehaviour_o *)_4__this,
                 (System_Collections_IEnumerator_o *)this,
                 0);
        v4->fields.__2__current = (Il2CppObject *)v162;
        v74 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__2__current, (int32_t)v162, v163, v164);
        v77 = 17;
LABEL_419:
        LODWORD(v74[-1].fields._ThumbnailSpritePath_k__BackingField) = v77;
        return 1;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_420;
        *((_BYTE *)_4__this + 75) = 1;
        v70 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_9252/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0);
        v72 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v72, object, Method_ManagementManager_EndLogDialog__, 0);
        if ( !v70 )
          goto LABEL_420;
        *(_QWORD *)&effectDistance.fields.hasValue = 0;
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
          0);
        _4__this = object;
        v7 = (const MethodInfo_39D3CCC **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( *((_BYTE *)_4__this + 75) )
        {
          v73 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v73, 0);
          v45->fields.__2__current = (Il2CppObject *)v73;
          v74 = (CGThumbnailListItem_o *)&v45->fields.__2__current;
          sub_1C2D434(v74, (int32_t)v73, v75, v76);
          v77 = 15;
          goto LABEL_419;
        }
        if ( v45->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_346:
          v45->fields._waitForServerTime_5__7 = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&v45->fields._waitForServerTime_5__7, 0, v2, v3);
          v45->fields._wait_5__8 = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&v45->fields._wait_5__8, 0, v172, v173);
          goto LABEL_380;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_420;
      }
      *((_BYTE *)_4__this + 75) = 1;
      v165 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v166 = (Il2CppObject *)_4__this;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v167 = LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
      v168 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v168, v166, Method_ManagementManager_EndRetryDialog__, 0);
      if ( !v165 )
        goto LABEL_420;
      CommonUI__OpenRetryDialog((CommonUI_o *)v165, (System_String_o *)StringLiteral_1/*""*/, v167, v168, 0, 0);
      _4__this = object;
      v7 = (const MethodInfo_39D3CCC **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_344:
      if ( *((_BYTE *)_4__this + 75) )
      {
        v169 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v169, 0);
        v45->fields.__2__current = (Il2CppObject *)v169;
        v74 = (CGThumbnailListItem_o *)&v45->fields.__2__current;
        sub_1C2D434(v74, (int32_t)v169, v170, v171);
        v77 = 16;
        goto LABEL_419;
      }
      goto LABEL_346;
    case 0xF:
      v45 = v4;
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_127;
      goto LABEL_420;
    case 0x10:
      v45 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_420;
      goto LABEL_344;
    case 0x11:
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      v225->fields.__1__state = -1;
      sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, 0, v2, v3);
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
        v78 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v78, 0);
        v4->fields.__2__current = (Il2CppObject *)v78;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v78, v79, v80);
        v18 = 19;
        goto LABEL_376;
      }
LABEL_204:
      v4->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__get_IsOnline(0) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_310:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_420;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v155 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v155, 0);
          v4->fields.__2__current = (Il2CppObject *)v155;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v155, v156, v157);
          v18 = 20;
          goto LABEL_376;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_420;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12578/*"SYSTEM"*/,
          *((_DWORD *)_4__this + 19),
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__getDownloadSize(0) >= 1 )
        {
          v148 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v148 = ManagerConfig_TypeInfo;
          }
          if ( v148->static_fields->UseStandaloneAsset )
          {
            v4->fields._isLoad_5__4 = 1;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm((System_String_o *)StringLiteral_9316/*"NOW_LOADING"*/, 0);
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_420;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_324:
            v149 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v149, 0);
            v4->fields.__2__current = (Il2CppObject *)v149;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v149, v150, v151);
            v18 = 21;
            goto LABEL_376;
          }
LABEL_146:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getDownloadSize(0) >= 1 )
          {
            v81 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v81, 0);
            v4->fields.__2__current = (Il2CppObject *)v81;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v81, v82, v83);
            v18 = 22;
            goto LABEL_376;
          }
        }
LABEL_325:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__SetOnlineStatus(0);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_41121668((NetworkManager_o *)this, method);
          v152 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v152, 0.1, 0);
          v4->fields.__2__current = (Il2CppObject *)v152;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v152, v153, v154);
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
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0);
LABEL_212:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v139 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v139, 0);
              v4->fields.__2__current = (Il2CppObject *)v139;
              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v139, v140, v141);
              v18 = 24;
              goto LABEL_376;
            }
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v102 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12578/*"SYSTEM"*/,
                       *((_DWORD *)_4__this + 19),
                       0);
              v103 = UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v102,
                       0);
              v4->fields.__2__current = (Il2CppObject *)v103;
              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v103, v104, v105);
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
      if ( !byte_4C26B9A )
      {
        sub_1C2D490(&LocalizationManager_TypeInfo);
        byte_4C26B9A = 1;
      }
      v106 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v106 = LocalizationManager_TypeInfo;
      }
      if ( v106->static_fields->isBusySetAssetData )
      {
        v107 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v107, 0);
        v4->fields.__2__current = (Il2CppObject *)v107;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v107, v108, v109);
        v18 = 28;
        goto LABEL_376;
      }
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0);
LABEL_231:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_4C26B9B )
      {
        sub_1C2D490(&FSUtility_TypeInfo);
        byte_4C26B9B = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)FSUtility_TypeInfo;
      }
      if ( this[1].fields._waitForServerTime_5__7->klass )
      {
        v110 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v110, 0);
        v4->fields.__2__current = (Il2CppObject *)v110;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v110, v111, v112);
        v18 = 29;
        goto LABEL_376;
      }
      if ( v4->fields._readResult_5__2 == 1 )
      {
        if ( !_4__this )
          goto LABEL_420;
        *((_BYTE *)_4__this + 72) = 0;
        v113 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v113,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          v114);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                             v113,
                                                             (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_420;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0);
LABEL_245:
        v115 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v115, 0);
        v4->fields.__2__current = (Il2CppObject *)v115;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)v115, v116, v117);
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
        v118 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v118, 0);
        v4->fields.__2__current = (Il2CppObject *)v118;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v118, v119, v120);
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
          v122 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v122, 0);
          v4->fields.__2__current = (Il2CppObject *)v122;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v122, v123, v124);
          v18 = 32;
          goto LABEL_376;
        }
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0);
LABEL_267:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( LOBYTE(this[9].monitor) )
      {
        v125 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v125, 0);
        v4->fields.__2__current = (Il2CppObject *)v125;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v125, v126, v127);
        v18 = 33;
        goto LABEL_376;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initializeAssetStorage(0);
LABEL_273:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0) )
      {
        v128 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v128, 0);
        v4->fields.__2__current = (Il2CppObject *)v128;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v128, v129, v130);
        v18 = 34;
        goto LABEL_376;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      ScriptManager__Initialize((ScriptManager_o *)this, 0);
LABEL_278:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( BYTE1(this[6].klass) )
      {
        v131 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v131, 0);
        v4->fields.__2__current = (Il2CppObject *)v131;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v131, v132, v133);
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
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_420;
        this = (ManagementManager__startCheckAll_d__35_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_420;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_351:
          v174 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v174, 0);
          v4->fields.__2__current = (Il2CppObject *)v174;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v174, v175, v176);
          v18 = 37;
          goto LABEL_376;
        }
LABEL_296:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff((ManagementManager_o *)_4__this, method);
          v4->fields.__2__current = 0;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434(p__2__current, 0, v137, v138);
          v18 = 38;
          goto LABEL_376;
        }
        goto LABEL_420;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9316/*"NOW_LOADING"*/, 0) )
      {
LABEL_294:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_420;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
        goto LABEL_296;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__fadeoutBgm(1.0, 0);
      v134 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v134, 1.0, 0);
      v4->fields.__2__current = (Il2CppObject *)v134;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)&v225->fields.__2__current, (int32_t)v134, v135, v136);
      v18 = 36;
LABEL_376:
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v18;
      return 1;
    case 0x14:
      p_fields->__1__state = -1;
      goto LABEL_310;
    case 0x15:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      if ( !byte_4C26B99 )
      {
        sub_1C2D490(&LogoMain_TypeInfo);
        byte_4C26B99 = 1;
      }
      v84 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v84 = LogoMain_TypeInfo;
      }
      if ( !v84->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9316/*"NOW_LOADING"*/, 0);
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0);
LABEL_169:
      v85 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v85, 0);
      v4->fields.__2__current = (Il2CppObject *)v85;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)v85, v86, v87);
      v18 = 26;
      goto LABEL_376;
    case 0x1A:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0);
LABEL_305:
      v145 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v145, 0);
      v4->fields.__2__current = (Il2CppObject *)v145;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)v145, v146, v147);
      v18 = 27;
      goto LABEL_376;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_305;
      v88 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v88 = (_QWORD *)sub_1C2D4A8(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v89 = (System_Reflection_MethodBase_o *)sub_1C2D474(v88, v88[4]);
      OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0, v90);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_420;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0) )
        goto LABEL_351;
      v91 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v91 = (_QWORD *)sub_1C2D4A8(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v92 = (System_Reflection_MethodBase_o *)sub_1C2D474(v91, v91[4]);
      OverwriteAssetSoundName__PlaySystemSe(v92, 0, 0, v93);
      goto LABEL_294;
    case 0x26:
      p_fields->__1__state = -1;
      v94 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v94 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v94->static_fields->PushStateSendedKey,
                                                           0,
                                                           0);
      if ( !(_DWORD)this )
      {
        v96 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v96);
        OptionManager__SetNotiffication(Notiffication, 1, v98);
        v99 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v99 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v99->static_fields->PushStateSendedKey, 1, 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
      if ( !_4__this )
        goto LABEL_420;
      *((_BYTE *)_4__this + 84) = 1;
      *((_BYTE *)_4__this + 32) = 0;
      ManagementManager__BuildInfoDisp((ManagementManager_o *)_4__this, 1, v95);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin((ManagementManager_o *)_4__this, v100);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ManagementManager__startCheckAll_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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