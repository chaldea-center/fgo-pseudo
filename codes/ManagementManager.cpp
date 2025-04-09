void __fastcall ManagementManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct ManagementManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  struct ManagementManager_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct ManagementManager_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_49BA688 & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_7864/*"IsNotificationStatusSend"*/, v4);
    sub_1B4CF90(&StringLiteral_7876/*"IsReBootCacheClearKey"*/, v5);
    sub_1B4CF90(&StringLiteral_20616/*"ja-JP"*/, v6);
    sub_1B4CF90(&StringLiteral_24604/*"yyyy年MM月dd日HH時mm分"*/, v7);
    byte_49BA688 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_7864/*"IsNotificationStatusSend"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)ManagementManager_TypeInfo->static_fields, StringLiteral_7864/*"IsNotificationStatusSend"*/, v2, v3);
  v8 = StringLiteral_7876/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_7876/*"IsReBootCacheClearKey"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->RebootCacheClearKey, v8, v10, v11);
  v12 = StringLiteral_24604/*"yyyy年MM月dd日HH時mm分"*/;
  v13 = ManagementManager_TypeInfo->static_fields;
  v13->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24604/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v13->DATE_TIME_DISP_FORMAT, v12, v14, v15);
  v16 = StringLiteral_20616/*"ja-JP"*/;
  v17 = ManagementManager_TypeInfo->static_fields;
  v17->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20616/*"ja-JP"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v17->DEFAULT_CULTURE_NAME, v16, v18, v19);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_49BA687 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_49BA687 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37B4828 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  const MethodInfo *v13; // x3
  ManagementManager_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  float v18; // s0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x19
  Il2CppObject *v27; // x19
  float v28; // [xsp+Ch] [xbp-34h] BYREF

  v28 = ratio;
  if ( (byte_49BA670 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1B4CF90(&string___TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_785/*"):"*/, v9);
    sub_1B4CF90(&StringLiteral_6649/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1B4CF90(&StringLiteral_746/*"(ratio: "*/, v11);
    byte_49BA670 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6649/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1B4D038(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v12, v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v17 = StringLiteral_746/*"(ratio: "*/;
      v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_746/*"(ratio: "*/;
      sub_1B4CF34((CGThumbnailListItem_o *)&v14->fields.AvalonSceneManager, v17, v15, v16);
      this = (ManagementManager_o *)System_Single__ToString(v18, (const MethodInfo *)&v28);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1B4CF34((CGThumbnailListItem_o *)&v14->fields.debugInfoRootObject, (int32_t)this, v19, v20),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v23 = StringLiteral_785/*"):"*/,
            v14->fields.statusLabel = (struct UILabel_o *)StringLiteral_785/*"):"*/,
            sub_1B4CF34((CGThumbnailListItem_o *)&v14->fields.statusLabel, v23, v21, v22),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1B4D1F4(this, errorText);
      }
      v14->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1B4CF34(
        (CGThumbnailListItem_o *)&v14->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v24,
        v25);
      v26 = (Il2CppObject *)System_String__Concat_61133984((System_String_array *)v14, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v26, 0LL);
      return;
    }
LABEL_19:
    sub_1B4D1EC(this, errorText);
  }
  v27 = (Il2CppObject *)System_String__Concat_61093468(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v27, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49BA66C & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_49BA66C = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_37B477C *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_49BA685 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, boot);
    byte_49BA685 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_49BA684 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49BA684 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1B4D1EC(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_49BA66A & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager_TypeInfo, v1);
    byte_49BA66A = 1;
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

  if ( (byte_49BA67A & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_49BA67A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_49BA679 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Application_TypeInfo, isDecide);
    byte_49BA679 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68597732(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_49BA678 & 1) != 0 )
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
    sub_1B4CF90(&UnityEngine_Application_TypeInfo, isDecide);
    byte_49BA678 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68597732(0LL);
}


void __fastcall ManagementManager__HandleLog(
        ManagementManager_o *this,
        System_String_o *condition,
        System_String_o *stackTrace,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_49BA671 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, condition);
    sub_1B4CF90(&StringLiteral_6076/*"ErrorLog: "*/, v8);
    sub_1B4CF90(&StringLiteral_56/*"\n StackTrace: "*/, v9);
    byte_49BA671 = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v11 = System_String__Concat_61133720(
            (System_String_o *)StringLiteral_6076/*"ErrorLog: "*/,
            condition,
            (System_String_o *)StringLiteral_56/*"\n StackTrace: "*/,
            stackTrace,
            0LL);
    if ( !Instance )
      sub_1B4D1EC(v11, v12);
    CrashReporter__SendErrorLogReport((CrashReporter_o *)Instance, v11, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49BA673 & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo, method);
    byte_49BA673 = 1;
  }
  v3 = sub_1B4D1DC(ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_49BA681 & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager_TypeInfo, method);
    byte_49BA681 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_49B9F30 )
  {
    sub_1B4CF90(&ManagementManager_TypeInfo, method);
    byte_49B9F30 = 1;
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

  if ( (byte_49BA682 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&NetworkManager_TypeInfo, v2);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_49BA682 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v7);
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

  if ( (byte_49BA686 & 1) == 0 )
  {
    sub_1B4CF90(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1B4CF90(&ManagementManager_TypeInfo, v2);
    byte_49BA686 = 1;
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

  if ( (byte_49BA66B & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager_TypeInfo, v1);
    byte_49BA66B = 1;
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

  if ( (byte_49BA674 & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo, method);
    byte_49BA674 = 1;
  }
  v2 = sub_1B4D1DC(ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_49BA675 & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo, method);
    byte_49BA675 = 1;
  }
  v2 = sub_1B4D1DC(ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
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

  if ( (byte_49BA66D & 1) == 0 )
  {
    sub_1B4CF90(&AndroidUtil_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Application_TypeInfo, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&System_Type_TypeInfo, v5);
    sub_1B4CF90(&UnityGamingServicesBehaviour_var, v6);
    byte_49BA66D = 1;
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
    sub_1B4D1EC(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_49BA683 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1B4CF90(&UnityEngine_Application_TypeInfo, method);
    byte_49BA683 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_68597732(0LL);
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

  if ( (byte_49BA680 & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager_TypeInfo, result);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_49BA680 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v6);
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
  _BOOL8 _38224448; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_49BA67F & 1) == 0 )
  {
    sub_1B4CF90(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1B4CF90(&ManagerConfig_TypeInfo, v4);
    sub_1B4CF90(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v8);
    byte_49BA67F = 1;
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
  _38224448 = TutorialFlag__Get_38224448(102, 0LL);
  if ( _38224448 )
  {
LABEL_9:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      v14);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B4D1EC(0LL, v16);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_38224448, v11, v12);
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

  if ( (byte_49BA67D & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager_TypeInfo, result);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49BA67D = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v7);
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

  if ( (byte_49BA67C & 1) == 0 )
  {
    sub_1B4CF90(&Method_ManagementManager_callbackTopHome__, result);
    sub_1B4CF90(&ManagerConfig_TypeInfo, v4);
    sub_1B4CF90(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v8);
    byte_49BA67C = 1;
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
  if ( TutorialFlag__Get_38224448(102, 0LL) )
  {
LABEL_9:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, v13);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1B4D1EC(0LL, v15);
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
  const MethodInfo *v16; // x3
  AvalonVideoPlayer_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_49BA66E & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1B4CF90(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_4556/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1B4CF90(&StringLiteral_8984/*"MovieRoot"*/, v7);
    byte_49BA66E = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4556/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_1B4D1DC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_8984/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  v11,
                  (const MethodInfo_2F5335C *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._videoPlayer_k__BackingField, (int32_t)v14, v15, v16),
          !v10)
      || (v17 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v17) )
    {
      sub_1B4D1EC(Component_object, v13);
    }
    AvalonVideoPlayer__initialize(v17, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_34075504(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BA668 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_49BA668 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_49BA669 & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager_TypeInfo, v1);
    byte_49BA669 = 1;
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

  if ( (byte_49BA66F & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, isLogin);
    sub_1B4CF90(&CTouch_TypeInfo, v7);
    sub_1B4CF90(&CommonEffectManager_TypeInfo, v8);
    sub_1B4CF90(&FirebaseScript_TypeInfo, v9);
    sub_1B4CF90(&System_GC_TypeInfo, v10);
    sub_1B4CF90(&ManagementManager_TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v12);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v14);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v15);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_1B4CF90(&SoundManager_TypeInfo, v21);
    byte_49BA66F = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1B4D1EC(Instance, v24);
    }
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0LL);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v25 )
      sub_1B4D1EC(0LL, v26);
    AdManager__Initialize((AdManager_o *)v25, 2, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    v28 = ManagementManager__startCheckAll(this, 1, isLogin, v27);
    UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
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

  if ( (byte_49BA67B & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_49BA67B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1B4D1DC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, v7);
  if ( !Instance )
    sub_1B4D1EC(v8, v9);
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

  if ( (byte_49BA67E & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_49BA67E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1B4D1DC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    v7);
  if ( !Instance )
    sub_1B4D1EC(v8, v9);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v10);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._videoPlayer_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v10; // x3

  if ( (byte_49BA672 & 1) == 0 )
  {
    sub_1B4CF90(&ManagementManager__startCheckAll_d__35_TypeInfo, isReboot);
    byte_49BA672 = 1;
  }
  v7 = isLogin;
  v8 = sub_1B4D1DC(ManagementManager__startCheckAll_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_49BA676 & 1) == 0 )
  {
    sub_1B4CF90(&DataManager_TypeInfo, method);
    byte_49BA676 = 1;
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

  if ( (byte_49BA677 & 1) == 0 )
  {
    sub_1B4CF90(&DataManager_TypeInfo, method);
    sub_1B4CF90(&ScrTerminalListTop_TypeInfo, v2);
    sub_1B4CF90(&ServantCommentManager_TypeInfo, v3);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v4);
    byte_49BA677 = 1;
  }
  MovieFileMerge__Delete_38286948(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7F63 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v6);
    byte_49B7F63 = 1;
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


void __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36___ctor(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36__MoveNext(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  ManagementManager_o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_IEnumerator_o *v17; // x1
  ManagementManager_o *started; // x0
  const MethodInfo *v19; // x1
  System_Collections_IEnumerator_o *v20; // x1

  if ( (byte_49BA68A & 1) == 0 )
  {
    sub_1B4CF90(&FirebaseScript_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_1B4CF90(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_49BA68A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1B4D1EC(0LL, v12);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v13 )
      sub_1B4D1EC(0LL, v14);
    AdManager__Initialize((AdManager_o *)v13, 1, 0LL);
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize(0LL);
    if ( !_4__this )
      sub_1B4D1EC(v15, v16);
    v17 = ManagementManager__SetupFirebaseAppCheck(v15, v16);
    started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_68789728(_4__this, v17, 0LL);
    v20 = ManagementManager__SetupFirebaseCrashlytics(started, v19);
    UnityEngine_MonoBehaviour__StartCoroutine_68789728(_4__this, v20, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_IEnumerator_Reset(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__36_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36__System_Collections_IEnumerator_get_Current(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__InitializeAdManagerAndFirebase_d__36__System_IDisposable_Dispose(
        ManagementManager__InitializeAdManagerAndFirebase_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager__SetupFirebaseAppCheck_d__37___ctor(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__SetupFirebaseAppCheck_d__37__MoveNext(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
  const MethodInfo *v15; // x3
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

  if ( (byte_49BA68B & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, method);
    sub_1B4CF90(&FirebaseScript_TypeInfo, v5);
    sub_1B4CF90(&float_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_820/*", AppCheckErrorMessage: "*/, v7);
    sub_1B4CF90(&StringLiteral_16504/*"appCheckPrevMessage"*/, v8);
    sub_1B4CF90(&StringLiteral_5829/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v9);
    sub_1B4CF90(&StringLiteral_7800/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/, v10);
    byte_49BA68B = 1;
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
      if ( !byte_49BA782 )
      {
        sub_1B4CF90(&FirebaseScript_TypeInfo, method);
        byte_49BA782 = 1;
      }
      v12 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v12 = FirebaseScript_TypeInfo;
      }
      v12->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0LL);
      v13 = StringLiteral_16504/*"appCheckPrevMessage"*/;
      this->fields._prevKeyName_5__3 = (struct System_String_o *)StringLiteral_16504/*"appCheckPrevMessage"*/;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._prevKeyName_5__3, v13, v14, v15);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_49BA783 )
      {
        sub_1B4CF90(&FirebaseScript_TypeInfo, method);
        byte_49BA783 = 1;
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
        sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
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
        if ( !byte_49BA784 )
        {
          sub_1B4CF90(&FirebaseScript_TypeInfo, method);
          byte_49BA784 = 1;
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
        if ( !byte_49B57A4 )
        {
          sub_1B4CF90(&FirebaseScript_TypeInfo, method);
          byte_49B57A4 = 1;
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
        v24 = (System_String_o *)StringLiteral_7800/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        goto LABEL_71;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_49BA5B1 )
      {
        sub_1B4CF90(&FirebaseScript_TypeInfo, method);
        byte_49BA5B1 = 1;
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
        sub_1B4CF34((CGThumbnailListItem_o *)v18, 0, v2, v3);
        *((_DWORD *)v18 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0LL);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_49BA784 )
      {
        sub_1B4CF90(&FirebaseScript_TypeInfo, v25);
        byte_49BA784 = 1;
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
      if ( !byte_49BA785 )
      {
        sub_1B4CF90(&FirebaseScript_TypeInfo, v25);
        byte_49BA785 = 1;
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
      v43 = System_String__Format_61134760((System_String_o *)StringLiteral_5829/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v37, v41, 0LL);
      if ( (v32 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_49BA786 )
        {
          sub_1B4CF90(&FirebaseScript_TypeInfo, v42);
          byte_49BA786 = 1;
        }
        v44 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v44 = FirebaseScript_TypeInfo;
        }
        v43 = System_String__Concat_61131716(
                v43,
                (System_String_o *)StringLiteral_820/*", AppCheckErrorMessage: "*/,
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


Il2CppObject *__fastcall ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_ManagementManager__SetupFirebaseAppCheck_d__37_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__SetupFirebaseAppCheck_d__37__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__SetupFirebaseAppCheck_d__37__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseAppCheck_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager__SetupFirebaseCrashlytics_d__38___ctor(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__SetupFirebaseCrashlytics_d__38__MoveNext(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  FirebaseScript_c *v6; // x0
  FirebaseScript_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_49BA68C & 1) == 0 )
  {
    sub_1B4CF90(&FirebaseScript_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    byte_49BA68C = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_49BA783 )
  {
    sub_1B4CF90(&FirebaseScript_TypeInfo, method);
    byte_49BA783 = 1;
  }
  v6 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v6 = FirebaseScript_TypeInfo;
  }
  if ( v6->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
    if ( !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    if ( !byte_49B57A4 )
    {
      sub_1B4CF90(&FirebaseScript_TypeInfo, method);
      byte_49B57A4 = 1;
    }
    v7 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v7 = FirebaseScript_TypeInfo;
    }
    if ( v7->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_1B4D1EC(0LL, v9);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0LL);
    }
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_IEnumerator_Reset(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_ManagementManager__SetupFirebaseCrashlytics_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__SetupFirebaseCrashlytics_d__38__System_Collections_IEnumerator_get_Current(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__SetupFirebaseCrashlytics_d__38__System_IDisposable_Dispose(
        ManagementManager__SetupFirebaseCrashlytics_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ManagementManager___c__DisplayClass35_0___ctor(
        ManagementManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager___c__DisplayClass35_0___startCheckAll_b__0(
        ManagementManager___c__DisplayClass35_0_o *this,
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
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_49BA689 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, flag);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__, v6);
    sub_1B4CF90(&ManagementManager___c__DisplayClass35_1_TypeInfo, v7);
    byte_49BA689 = 1;
  }
  v8 = sub_1B4D1DC(ManagementManager___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B4D1EC(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30248724((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass35_1___ctor(
        ManagementManager___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ManagementManager___c__DisplayClass35_1___startCheckAll_b__1(
        ManagementManager___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  struct ManagementManager___c__DisplayClass35_0_o *CS___8__locals1; // x8
  bool flag; // w9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1B4D1EC(this, method);
  flag = this->fields.flag;
  CS___8__locals1->fields.confirmed = 1;
  CS___8__locals1->fields.isDecide = flag;
}


void __fastcall ManagementManager__startCheckAll_d__35___ctor(
        ManagementManager__startCheckAll_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ManagementManager__startCheckAll_d__35__MoveNext(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ManagementManager__startCheckAll_d__35_o *v4; // x19
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
  __int64 v72; // x1
  __int64 v73; // x1
  ManagementManager__startCheckAll_d__35_Fields *p_fields; // x8
  ManagerConfig_c **v75; // x26
  const MethodInfo_37B4410 **v76; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v79; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v84; // x0
  CGThumbnailListItem_o *v85; // x19
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int v88; // w8
  System_Collections_IEnumerator_o *v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  OptionManager_c *v92; // x0
  const MethodInfo *v93; // x0
  const MethodInfo *v94; // x0
  UnityEngine_Application_LogCallback_o *v95; // x21
  UnityEngine_WaitForEndOfFrame_o *v96; // x20
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  ManagementManager__startCheckAll_d__35_o *v101; // x21
  int32_t v102; // w1
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  int32_t v105; // w1
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  EncryptedPlayerPrefs_c *v111; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v113; // x20
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  const MethodInfo *v116; // x1
  struct ManagementManager___c__DisplayClass35_0_o *v117; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v119; // x21
  const MethodInfo *v120; // x3
  UnityEngine_WaitForEndOfFrame_o *v121; // x20
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  NetworkManager_ResultCallbackFunc_o *v124; // x21
  const MethodInfo *v125; // x3
  UnityEngine_WaitForEndOfFrame_o *v126; // x20
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v130; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  DataManager_c *v135; // x0
  UnityEngine_Coroutine_o *v136; // x0
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  DataManager_c *v139; // x0
  int32_t updateMasterResult_5__9; // w8
  Il2CppObject *v141; // x21
  System_String_o *v142; // x22
  ErrorDialog_ClickDelegate_o *v143; // x23
  UnityEngine_WaitForEndOfFrame_o *v144; // x20
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  UnityEngine_WaitForEndOfFrame_o *v150; // x20
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  __int64 v153; // x1
  LogoMain_c *v154; // x0
  UnityEngine_WaitForEndOfFrame_o *v155; // x20
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  _QWORD *v158; // x0
  System_Reflection_MethodBase_o *v159; // x0
  const MethodInfo *v160; // x3
  _QWORD *v161; // x0
  System_Reflection_MethodBase_o *v162; // x0
  const MethodInfo *v163; // x3
  ManagementManager_c *v164; // x0
  const MethodInfo *v165; // x2
  OptionManager_c *v166; // x0
  bool Notiffication; // w0
  const MethodInfo *v168; // x2
  ManagementManager_c *v169; // x0
  const MethodInfo *v170; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v172; // x0
  UnityEngine_Coroutine_o *v173; // x0
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  LocalizationManager_c *v176; // x0
  UnityEngine_WaitForEndOfFrame_o *v177; // x20
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  FSUtility_c *v180; // x0
  UnityEngine_WaitForEndOfFrame_o *v181; // x20
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  UnityEngine_WaitForEndOfFrame_o *v184; // x20
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v188; // x20
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  UnityEngine_WaitForEndOfFrame_o *v191; // x20
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  UnityEngine_WaitForEndOfFrame_o *v194; // x20
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  UnityEngine_WaitForEndOfFrame_o *v197; // x20
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  UnityEngine_WaitForSeconds_o *v200; // x20
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  UnityEngine_WaitForEndOfFrame_o *v205; // x20
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  UnityEngine_WaitForEndOfFrame_o *v208; // x20
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  UnityEngine_WaitForEndOfFrame_o *v211; // x20
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  ManagerConfig_c *v214; // x0
  UnityEngine_WaitForEndOfFrame_o *v215; // x20
  int32_t v216; // w2
  const MethodInfo *v217; // x3
  UnityEngine_WaitForSeconds_o *v218; // x20
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  UnityEngine_WaitForEndOfFrame_o *v221; // x20
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  UnityEngine_WaitForEndOfFrame_o *v224; // x20
  int32_t v225; // w2
  const MethodInfo *v226; // x3
  ManagementManager_c *v227; // x0
  UnityEngine_Coroutine_o *v228; // x0
  int32_t v229; // w2
  const MethodInfo *v230; // x3
  Il2CppObject *v231; // x21
  System_String_o *v232; // x22
  ErrorDialog_ClickDelegate_o *v233; // x23
  UnityEngine_WaitForEndOfFrame_o *v234; // x20
  int32_t v235; // w2
  const MethodInfo *v236; // x3
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  UnityEngine_WaitForEndOfFrame_o *v239; // x20
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  UnityEngine_WaitForEndOfFrame_o *v242; // x20
  int32_t v243; // w2
  const MethodInfo *v244; // x3
  System_Action_object__o *v245; // x21
  System_Action_object__o *v246; // x22
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v250; // x0
  ManagerConfig_c *v251; // x0
  ManagerConfig_c **v252; // x19
  const MethodInfo_37B4410 **v253; // x26
  Il2CppObject *Instance; // x21
  System_String_o *v255; // x22
  ErrorDialog_ClickDelegate_o *v256; // x23
  UnityEngine_WaitForEndOfFrame_o *v257; // x20
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  int32_t readResult_5__2; // w8
  NetworkManager_ResultCallbackFunc_o *v261; // x21
  const MethodInfo *v262; // x3
  UnityEngine_WaitForEndOfFrame_o *v263; // x20
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  ManagementManager_c *v266; // x0
  const MethodInfo_37B4410 **v267; // x28
  Il2CppObject *v268; // x21
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  Il2CppObject *v271; // x21
  System_String_o *v272; // x22
  System_String_o *v273; // x24
  System_String_o *v274; // x25
  System_String_o *v275; // x0
  Il2CppObject *_8__1; // x27
  System_String_o *v277; // x23
  CommonConfirmDialog_ClickDelegate_o *v278; // x26
  Il2CppObject *v279; // x21
  System_String_o *v280; // x21
  Il2CppObject *DispFriendCode; // x22
  Il2CppObject *v282; // x22
  System_String_o *v283; // x23
  System_String_o *v284; // x0
  System_String_o *v285; // x19
  Il2CppObject *v286; // x2
  System_String_o *v287; // x21
  ErrorDialog_ClickDelegate_o *v288; // x23
  ManagementManager_c *v289; // x0
  UnityEngine_Coroutine_o *v290; // x0
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-C0h]
  ManagementManager__startCheckAll_d__35_o *v294; // [xsp+40h] [xbp-80h]
  System_Enum_o v295; // [xsp+48h] [xbp-78h] BYREF
  int32_t v296; // [xsp+58h] [xbp-68h]

  v4 = this;
  if ( (byte_49BA68D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, method);
    sub_1B4CF90(&AndroidUtil_TypeInfo, v5);
    sub_1B4CF90(&UnityEngine_Application_TypeInfo, v6);
    sub_1B4CF90(&AssetManager_TypeInfo, v7);
    sub_1B4CF90(&AtlasManager_TypeInfo, v8);
    sub_1B4CF90(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B4CF90(&ErrorDialog_ClickDelegate_TypeInfo, v10);
    sub_1B4CF90(&CommonServicePluginScript_TypeInfo, v11);
    sub_1B4CF90(&DataManager_TypeInfo, v12);
    sub_1B4CF90(&EncryptedPlayerPrefs_TypeInfo, v13);
    sub_1B4CF90(&FSUtility_TypeInfo, v14);
    sub_1B4CF90(&ImageLimitCount_TypeInfo, v15);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v16);
    sub_1B4CF90(&UnityEngine_Application_LogCallback_TypeInfo, v17);
    sub_1B4CF90(&LogoMain_TypeInfo, v18);
    sub_1B4CF90(&Method_ManagementManager_EndLogDialog__, v19);
    sub_1B4CF90(&Method_ManagementManager_EndQuitDialog__, v20);
    sub_1B4CF90(&Method_ManagementManager_EndRetryDialog__, v21);
    sub_1B4CF90(&Method_ManagementManager_HandleLog__, v22);
    sub_1B4CF90(&Method_ManagementManager_NotifyRequestPermissionsDenied__, v23);
    sub_1B4CF90(&Method_ManagementManager_NotifyRequestPermissionsGranted__, v24);
    sub_1B4CF90(&Method_ManagementManager_callbackAccountRegist__, v25);
    sub_1B4CF90(&Method_ManagementManager_callbackTopGameData__, v26);
    sub_1B4CF90(&ManagementManager_TypeInfo, v27);
    sub_1B4CF90(&ManagerConfig_TypeInfo, v28);
    sub_1B4CF90(&Method_NetworkManager_getRequest_AccountRegistRequest___, v29);
    sub_1B4CF90(&Method_NetworkManager_getRequest_TopGameDataRequest___, v30);
    sub_1B4CF90(&NetworkManager_TypeInfo, v31);
    sub_1B4CF90(&OptionManager_TypeInfo, v32);
    sub_1B4CF90(&PurchaseBehaviour_TypeInfo, v33);
    sub_1B4CF90(&NetworkManager_ReadResult_TypeInfo, v34);
    sub_1B4CF90(&ResolutionManager_TypeInfo, v35);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v36);
    sub_1B4CF90(&ServantCommentManager_TypeInfo, v37);
    sub_1B4CF90(&SignedData_TypeInfo, v38);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v39);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v40);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v41);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v43);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v44);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v45);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v46);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v47);
    sub_1B4CF90(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v48);
    sub_1B4CF90(&SoundManager_TypeInfo, v49);
    sub_1B4CF90(&string___TypeInfo, v50);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v51);
    sub_1B4CF90(&Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__, v52);
    sub_1B4CF90(&ManagementManager___c__DisplayClass35_0_TypeInfo, v53);
    sub_1B4CF90(&Method_ManagementManager__startCheckAll_d__35_MoveNext__, v54);
    sub_1B4CF90(&UnityEngine_WaitForEndOfFrame_TypeInfo, v55);
    sub_1B4CF90(&UnityEngine_WaitForSeconds_TypeInfo, v56);
    sub_1B4CF90(&StringLiteral_7275/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v57);
    sub_1B4CF90(&StringLiteral_9124/*"NOW_LOADING"*/, v58);
    sub_1B4CF90(&StringLiteral_9053/*"NETWORK_ERROR_DISK_FULL"*/, v59);
    sub_1B4CF90(&StringLiteral_6280/*"F39UThNh"*/, v60);
    sub_1B4CF90(&StringLiteral_7278/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v61);
    sub_1B4CF90(&StringLiteral_7276/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v62);
    sub_1B4CF90(&StringLiteral_7274/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v63);
    sub_1B4CF90(&StringLiteral_5025/*"DataServerFolderName"*/, v64);
    sub_1B4CF90(&StringLiteral_16455/*"android.permission.POST_NOTIFICATIONS"*/, v65);
    sub_1B4CF90(&StringLiteral_9061/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v66);
    sub_1B4CF90(&StringLiteral_9054/*"NETWORK_ERROR_FIEND_CODE"*/, v67);
    sub_1B4CF90(&StringLiteral_12286/*"SYSTEM"*/, v68);
    sub_1B4CF90(&StringLiteral_1/*""*/, v69);
    sub_1B4CF90(&StringLiteral_20480/*"ioqrk4Om"*/, v70);
    sub_1B4CF90(&StringLiteral_1395/*"2pC0bIYM"*/, v71);
    sub_1B4CF90(&StringLiteral_9055/*"NETWORK_ERROR_READ_AUTH"*/, v72);
    this = (ManagementManager__startCheckAll_d__35_o *)sub_1B4CF90(&StringLiteral_9062/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v73);
    byte_49BA68D = 1;
  }
  p_fields = &v4->fields;
  v75 = &ManagerConfig_TypeInfo;
  v76 = (const MethodInfo_37B4410 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      isReboot = v4->fields.isReboot;
      v4->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_7;
      v79 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v4->fields.__2__current = (Il2CppObject *)v79;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(p__2__current, (int32_t)v79, v81, v82);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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
        goto LABEL_417;
      v84 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v4->fields.__2__current = (Il2CppObject *)v84;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(v85, (int32_t)v84, v86, v87);
      v88 = 2;
      goto LABEL_416;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      v89 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v4->fields.__2__current = (Il2CppObject *)v89;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(v85, (int32_t)v89, v90, v91);
      v88 = 3;
      goto LABEL_416;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      ResolutionManager__Initialize(0LL);
      v92 = OptionManager_TypeInfo;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Initialize((const MethodInfo *)v92);
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(v93);
      OptionManager__AdjustVolume(v94);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v4->fields.isReboot )
        goto LABEL_31;
      v95 = (UnityEngine_Application_LogCallback_o *)sub_1B4D1DC(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(
        v95,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_HandleLog__,
        0LL);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__add_logMessageReceived(v95, 0LL);
      if ( v4->fields.isReboot )
      {
LABEL_31:
        v96 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v96, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v96;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v96, v97, v98);
        v88 = 4;
        goto LABEL_416;
      }
LABEL_33:
      this = (ManagementManager__startCheckAll_d__35_o *)sub_1B4D038(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_417;
      v101 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v102 = StringLiteral_1395/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1395/*"2pC0bIYM"*/,
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.isReboot, v102, v99, v100),
            LODWORD(v101->fields.__2__current) <= 1)
        || (v105 = StringLiteral_6280/*"F39UThNh"*/,
            v101->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6280/*"F39UThNh"*/,
            sub_1B4CF34((CGThumbnailListItem_o *)&v101->fields.__4__this, v105, v103, v104),
            LODWORD(v101->fields.__2__current) <= 2) )
      {
        sub_1B4D1F4(this, method);
      }
      v108 = StringLiteral_20480/*"ioqrk4Om"*/;
      v101->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)StringLiteral_20480/*"ioqrk4Om"*/;
      sub_1B4CF34((CGThumbnailListItem_o *)&v101->fields.__8__1, v108, v106, v107);
      v111 = EncryptedPlayerPrefs_TypeInfo;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v111 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v111->static_fields;
      static_fields->keys = (struct System_String_array *)v101;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->keys, (int32_t)v101, v109, v110);
      if ( !v4->fields.isReboot )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_44;
        if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)AndroidUtil__get_apiLevel(0LL);
        if ( (int)this >= 33 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)AndroidPermissionManager__CheckPermission(
                                                               (System_String_o *)StringLiteral_16455/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_417;
            _4__this->fields.isPermissionRequesting = 1;
            v245 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v245,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0LL);
            v246 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v246,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsDenied__,
              0LL);
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_16455/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v245,
              (System_Action_string__o *)v246,
              0LL,
              0LL);
LABEL_47:
            if ( _4__this->fields.isPermissionRequesting )
            {
              v113 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v113, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v113;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1B4CF34(v85, (int32_t)v113, v114, v115);
              v88 = 5;
              goto LABEL_416;
            }
          }
        }
        else
        {
LABEL_44:
          if ( !_4__this )
            goto LABEL_417;
          _4__this->fields.isPermissionGranted = 1;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
          v242 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v242, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v242;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, (int32_t)v242, v243, v244);
          v88 = 6;
          goto LABEL_416;
        }
LABEL_417:
        sub_1B4D1EC(this, method);
      }
LABEL_50:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
      v4->fields._readResult_5__2 = (int)this;
      if ( !_4__this )
        goto LABEL_417;
      this = (ManagementManager__startCheckAll_d__35_o *)_4__this->fields.debugInfoRootObject;
      if ( !this )
        goto LABEL_417;
      v294 = v4;
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
      if ( !this )
        goto LABEL_417;
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
        v250 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
        if ( FreeSize < v250 )
          FreeSize = v250;
        if ( FreeSize < 1 )
          break;
        v251 = *v75;
        if ( !(*v75)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v251);
          v251 = *v75;
        }
        if ( FreeSize >= v251->static_fields->LIMIT_FREE_SIZE )
          break;
        _4__this->fields.isErrorDialog = 1;
        v252 = v75;
        v253 = v76;
        Instance = SingletonMonoBehaviour_object___get_Instance(*v76);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v255 = LocalizationManager__Get((System_String_o *)StringLiteral_9053/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
        v256 = (ErrorDialog_ClickDelegate_o *)sub_1B4D1DC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v256, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_417;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v255, v256, 0, 0LL);
        v76 = v253;
        v75 = v252;
LABEL_367:
        if ( _4__this->fields.isErrorDialog )
        {
          v257 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v257, 0LL);
          v294->fields.__2__current = (Il2CppObject *)v257;
          v85 = (CGThumbnailListItem_o *)&v294->fields.__2__current;
          sub_1B4CF34((CGThumbnailListItem_o *)&v294->fields.__2__current, (int32_t)v257, v258, v259);
          v88 = 7;
          goto LABEL_416;
        }
      }
      readResult_5__2 = v294->fields._readResult_5__2;
      if ( !readResult_5__2 )
      {
LABEL_376:
        v4 = v294;
        v294->fields._isCacheCheck_5__3 = 0;
        goto LABEL_377;
      }
      if ( readResult_5__2 == 1 )
      {
        _4__this->fields.isReadAuth = 0;
        v261 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v261,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          v262);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                             v261,
                                                             (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_417;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_375:
        v263 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v263, 0LL);
        v294->fields.__2__current = (Il2CppObject *)v263;
        v85 = (CGThumbnailListItem_o *)&v294->fields.__2__current;
        sub_1B4CF34((CGThumbnailListItem_o *)&v294->fields.__2__current, (int32_t)v263, v264, v265);
        v88 = 8;
        goto LABEL_416;
      }
      v279 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v280 = LocalizationManager__Get((System_String_o *)StringLiteral_9054/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        DispFriendCode = (Il2CppObject *)NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
        goto LABEL_400;
      }
      if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      DispFriendCode = (Il2CppObject *)AndroidUtil__GetFriendCodeFromOldDat(0LL);
      if ( !System_String__IsNullOrEmpty((System_String_o *)DispFriendCode, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v280 = LocalizationManager__Get((System_String_o *)StringLiteral_9054/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
LABEL_400:
        v279 = (Il2CppObject *)System_String__Format(v280, DispFriendCode, 0LL);
      }
      v282 = SingletonMonoBehaviour_object___get_Instance(*v76);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v283 = LocalizationManager__Get((System_String_o *)StringLiteral_9055/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
      v295.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v295.monitor = (void *)-1LL;
      v296 = v294->fields._readResult_5__2;
      v284 = System_Enum__ToString(&v295, 0LL);
      v285 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v284 )
        v286 = (Il2CppObject *)v284;
      else
        v286 = (Il2CppObject *)StringLiteral_1/*""*/;
      v287 = System_String__Format_61134760(v283, v279, v286, 0LL);
      v288 = (ErrorDialog_ClickDelegate_o *)sub_1B4D1DC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v288, (Il2CppObject *)_4__this, Method_ManagementManager_EndQuitDialog__, 0LL);
      if ( !v282 )
        goto LABEL_417;
      CommonUI__OpenErrorDialog((CommonUI_o *)v282, v285, v287, v288, 0, 0LL);
      return 0;
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_33;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_47;
      goto LABEL_417;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_50;
    case 7:
      v294 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      goto LABEL_367;
    case 8:
      v294 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_375;
      goto LABEL_376;
    case 9:
      p_fields->__1__state = -1;
      goto LABEL_63;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_49BA787 )
      {
        sub_1B4CF90(&DataManager_TypeInfo, method);
        byte_49BA787 = 1;
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
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_417;
      _4__this->fields.isReadGameData = 0;
      v119 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v119,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v120);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v119,
                                                           (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_417;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v121 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v121, 0LL);
      v4->fields._waitForServerTime_5__7 = v121;
      sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v121, v122, v123);
      goto LABEL_89;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      if ( !_4__this->fields.isReadGameData )
      {
LABEL_89:
        waitForServerTime_5__7 = (Il2CppObject *)v4->fields._waitForServerTime_5__7;
        v4->fields.__2__current = waitForServerTime_5__7;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)waitForServerTime_5__7, v2, v3);
        v88 = 11;
        goto LABEL_416;
      }
      _4__this->fields.isReadGameData = 0;
      v124 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v124,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        v125);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v124,
                                                           (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_417;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v126 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v126, 0LL);
      v4->fields._wait_5__8 = v126;
      sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._wait_5__8, (int32_t)v126, v127, v128);
LABEL_203:
      wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
      v4->fields.__2__current = wait_5__8;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(v85, (int32_t)wait_5__8, v2, v3);
      v88 = 12;
      goto LABEL_416;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_203;
      v130 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49B8531 )
      {
        sub_1B4CF90(&NetworkManager_TypeInfo, method);
        byte_49B8531 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      }
      if ( !v130 )
        goto LABEL_417;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v130,
        (System_String_o *)StringLiteral_5025/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0LL);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          started = UnityEngine_MonoBehaviour__StartCoroutine_68789728(
                      (UnityEngine_MonoBehaviour_o *)_4__this,
                      MasterData,
                      0LL);
          v4->fields.__2__current = (Il2CppObject *)started;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, (int32_t)started, v133, v134);
          v88 = 13;
          goto LABEL_416;
        }
      }
      else
      {
LABEL_108:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v136 = UnityEngine_MonoBehaviour__StartCoroutine_68789728(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v136;
            v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B4CF34(v85, (int32_t)v136, v137, v138);
            v88 = 15;
            goto LABEL_416;
          }
        }
      }
      goto LABEL_417;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_49BA788 )
      {
        sub_1B4CF90(&DataManager_TypeInfo, method);
        byte_49BA788 = 1;
      }
      v135 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v135 = DataManager_TypeInfo;
      }
      if ( v135->static_fields->readMasterDataResult == 1 )
        goto LABEL_108;
      if ( !v135->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v135);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v208 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v208, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v208;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(v85, (int32_t)v208, v209, v210);
      v88 = 14;
      goto LABEL_416;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_377;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !byte_49BA789 )
      {
        sub_1B4CF90(&DataManager_TypeInfo, method);
        byte_49BA789 = 1;
      }
      v139 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v139 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v139->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_39080812((NetworkManager_o *)this, method);
          v227 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v227);
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v228 = UnityEngine_MonoBehaviour__StartCoroutine_68789728(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v228;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1B4CF34(v85, (int32_t)v228, v229, v230);
              v88 = 18;
              goto LABEL_416;
            }
          }
        }
        goto LABEL_417;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_417;
        _4__this->fields.isErrorDialog = 1;
        v141 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v142 = LocalizationManager__Get((System_String_o *)StringLiteral_9061/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v143 = (ErrorDialog_ClickDelegate_o *)sub_1B4D1DC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v143, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v141 )
          goto LABEL_417;
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)v141,
          (System_String_o *)StringLiteral_1/*""*/,
          v142,
          v143,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        v76 = (const MethodInfo_37B4410 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_130:
        if ( _4__this->fields.isErrorDialog )
        {
          v144 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v144, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v144;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, (int32_t)v144, v145, v146);
          v88 = 16;
          goto LABEL_416;
        }
        if ( v4->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_339:
          v4->fields._waitForServerTime_5__7 = 0LL;
          sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._waitForServerTime_5__7, 0, v2, v3);
          v4->fields._wait_5__8 = 0LL;
          sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._wait_5__8, 0, v237, v238);
LABEL_377:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_417;
          DataManager__Initialize((DataManager_o *)this, 0LL);
          if ( !v4->fields.isReboot && !v4->fields._isCacheCheck_5__3 )
          {
            v4->fields._isCacheCheck_5__3 = 1;
            v266 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v266 = ManagementManager_TypeInfo;
            }
            if ( UnityEngine_PlayerPrefs__HasKey(v266->static_fields->RebootCacheClearKey, 0LL) )
            {
              v267 = v76;
              v268 = (Il2CppObject *)sub_1B4D1DC(ManagementManager___c__DisplayClass35_0_TypeInfo);
              System_Object___ctor(v268, 0LL);
              v4->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)v268;
              sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v268, v269, v270);
              if ( !v4->fields.__8__1 )
                goto LABEL_417;
              v4->fields.__8__1->fields = 0;
              v271 = SingletonMonoBehaviour_object___get_Instance(*v76);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v272 = LocalizationManager__Get((System_String_o *)StringLiteral_7278/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
              v273 = LocalizationManager__Get((System_String_o *)StringLiteral_7276/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
              v274 = LocalizationManager__Get((System_String_o *)StringLiteral_7275/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
              v275 = LocalizationManager__Get((System_String_o *)StringLiteral_7274/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
              _8__1 = (Il2CppObject *)v4->fields.__8__1;
              v277 = v275;
              v278 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
              CommonConfirmDialog_ClickDelegate___ctor(
                v278,
                _8__1,
                Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__,
                0LL);
              if ( !v271 )
                goto LABEL_417;
              CommonUI__OpenConfirmDecideDlg(
                (CommonUI_o *)v271,
                v272,
                v273,
                v274,
                v277,
                v278,
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
              v76 = v267;
LABEL_63:
              v117 = v4->fields.__8__1;
              if ( !v117 )
                goto LABEL_417;
              if ( !v117->fields.confirmed )
              {
                v224 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v224, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v224;
                v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                sub_1B4CF34(v85, (int32_t)v224, v225, v226);
                v88 = 9;
                goto LABEL_416;
              }
              if ( v117->fields.isDecide )
              {
                if ( !_4__this )
                  goto LABEL_417;
                ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
              }
              v4->fields.__8__1 = 0LL;
              sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__8__1, 0, v2, v3);
            }
            else
            {
              v289 = ManagementManager_TypeInfo;
              if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                v289 = ManagementManager_TypeInfo;
              }
              UnityEngine_PlayerPrefs__SetInt(v289->static_fields->RebootCacheClearKey, 1, 0LL);
              UnityEngine_PlayerPrefs__Save(0LL);
            }
          }
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance(*v76);
          if ( !this )
            goto LABEL_417;
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_417;
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__readMasterVersion((DataManager_o *)this, 0LL);
          if ( !_4__this )
            goto LABEL_417;
          v290 = UnityEngine_MonoBehaviour__StartCoroutine_68789728(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   (System_Collections_IEnumerator_o *)this,
                   0LL);
          v4->fields.__2__current = (Il2CppObject *)v290;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, (int32_t)v290, v291, v292);
          v88 = 10;
          goto LABEL_416;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_417;
      }
      _4__this->fields.isErrorDialog = 1;
      v231 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v232 = LocalizationManager__Get((System_String_o *)StringLiteral_9062/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v233 = (ErrorDialog_ClickDelegate_o *)sub_1B4D1DC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v233, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v231 )
        goto LABEL_417;
      CommonUI__OpenRetryDialog((CommonUI_o *)v231, (System_String_o *)StringLiteral_1/*""*/, v232, v233, 0, 0LL);
      v76 = (const MethodInfo_37B4410 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_337:
      if ( _4__this->fields.isErrorDialog )
      {
        v234 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v234, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v234;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v234, v235, v236);
        v88 = 17;
        goto LABEL_416;
      }
      goto LABEL_339;
    case 0x10:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_130;
      goto LABEL_417;
    case 0x11:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_417;
      goto LABEL_337;
    case 0x12:
      v4->fields.__2__current = 0LL;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      LODWORD(v85[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
      sub_1B4CF34(v85, 0, v2, v3);
      v88 = 19;
      goto LABEL_416;
    case 0x13:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_204;
      goto LABEL_140;
    case 0x14:
      p_fields->__1__state = -1;
LABEL_140:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v147, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v147;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v147, v148, v149);
        v88 = 20;
        goto LABEL_416;
      }
LABEL_204:
      v4->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_303:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v221 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v221, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v221;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, (int32_t)v221, v222, v223);
          v88 = 21;
          goto LABEL_416;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_417;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12286/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v214 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v214 = ManagerConfig_TypeInfo;
          }
          if ( v214->static_fields->UseStandaloneAsset )
          {
            v4->fields._isLoad_5__4 = 1;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm((System_String_o *)StringLiteral_9124/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_417;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_317:
            v215 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v215, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v215;
            v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B4CF34(v85, (int32_t)v215, v216, v217);
            v88 = 22;
            goto LABEL_416;
          }
LABEL_149:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getDownloadSize(0LL) >= 1 )
          {
            v150 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v150, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v150;
            v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B4CF34(v85, (int32_t)v150, v151, v152);
            v88 = 23;
            goto LABEL_416;
          }
        }
LABEL_318:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__SetOnlineStatus(0LL);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_39080812((NetworkManager_o *)this, method);
          v218 = (UnityEngine_WaitForSeconds_o *)sub_1B4D1DC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v218, 0.1, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v218;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, (int32_t)v218, v219, v220);
          v88 = 24;
          goto LABEL_416;
        }
        goto LABEL_417;
      }
LABEL_207:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_212:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v205 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v205, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v205;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1B4CF34(v85, (int32_t)v205, v206, v207);
              v88 = 25;
              goto LABEL_416;
            }
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v172 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12286/*"SYSTEM"*/,
                       _4__this->fields.downloadParallelMax,
                       0LL);
              v173 = UnityEngine_MonoBehaviour__StartCoroutine_68789728(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v172,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v173;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1B4CF34(v85, (int32_t)v173, v174, v175);
              v88 = 26;
              goto LABEL_416;
            }
          }
        }
        goto LABEL_417;
      }
LABEL_217:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__LoadAssetData(0LL);
LABEL_220:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_49BA78B )
      {
        sub_1B4CF90(&LocalizationManager_TypeInfo, method);
        byte_49BA78B = 1;
      }
      v176 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v176 = LocalizationManager_TypeInfo;
      }
      if ( v176->static_fields->isBusySetAssetData )
      {
        v177 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v177, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v177;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v177, v178, v179);
        v88 = 29;
        goto LABEL_416;
      }
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_231:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_49BA78C )
      {
        sub_1B4CF90(&FSUtility_TypeInfo, method);
        byte_49BA78C = 1;
      }
      v180 = FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v180 = FSUtility_TypeInfo;
      }
      if ( v180->static_fields->isBusySetAssetData )
      {
        v181 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v181, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v181;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v181, v182, v183);
        v88 = 30;
        goto LABEL_416;
      }
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__initializeAssetStorage(0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__Initialize(0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_417;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, method);
LABEL_247:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__IsBusyInitialize(0LL) )
      {
        v184 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v184, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v184;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v184, v185, v186);
        v88 = 31;
        goto LABEL_416;
      }
      v4->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_252:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_417;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v4->fields._overrideAssetSoundNameWaitCount_5__5;
        v4->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v188 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v188, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v188;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, (int32_t)v188, v189, v190);
          v88 = 32;
          goto LABEL_416;
        }
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_260:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( LOBYTE(this[9].monitor) )
      {
        v191 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v191, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v191;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v191, v192, v193);
        v88 = 33;
        goto LABEL_416;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initializeAssetStorage(0LL);
LABEL_266:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v194 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v194, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v194;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v194, v195, v196);
        v88 = 34;
        goto LABEL_416;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_271:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
      {
        v197 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v197, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v197;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B4CF34(v85, (int32_t)v197, v198, v199);
        v88 = 35;
        goto LABEL_416;
      }
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
      {
        if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        PurchaseBehaviour__Ready(0LL);
      }
      if ( !v4->fields._isLoad_5__4 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_417;
        this = (ManagementManager__startCheckAll_d__35_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_417;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_344:
          v239 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v239, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v239;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, (int32_t)v239, v240, v241);
          v88 = 37;
          goto LABEL_416;
        }
LABEL_289:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff(_4__this, method);
          v4->fields.__2__current = 0LL;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B4CF34(v85, 0, v203, v204);
          v88 = 38;
          goto LABEL_416;
        }
        goto LABEL_417;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9124/*"NOW_LOADING"*/, 0LL) )
      {
LABEL_287:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_417;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
        goto LABEL_289;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__fadeoutBgm(1.0, 0LL);
      v200 = (UnityEngine_WaitForSeconds_o *)sub_1B4D1DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v200, 1.0, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v200;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(v85, (int32_t)v200, v201, v202);
      v88 = 36;
LABEL_416:
      LODWORD(v85[-1].fields._ThumbnailSpritePath_k__BackingField) = v88;
      return 1;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_303;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_318;
      goto LABEL_317;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_149;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_207;
    case 0x19:
      p_fields->__1__state = -1;
      goto LABEL_212;
    case 0x1A:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_217;
      v4->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_49BA78A )
      {
        sub_1B4CF90(&LogoMain_TypeInfo, v153);
        byte_49BA78A = 1;
      }
      v154 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v154 = LogoMain_TypeInfo;
      }
      if ( !v154->static_fields->_isPlaying_k__BackingField )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playBgm((System_String_o *)StringLiteral_9124/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_172:
      v155 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v155, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v155;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(v85, (int32_t)v155, v156, v157);
      v88 = 27;
      goto LABEL_416;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_172;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_298:
      v211 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v211, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v211;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(v85, (int32_t)v211, v212, v213);
      v88 = 28;
      goto LABEL_416;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_298;
      v158 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v158 = (_QWORD *)sub_1B4CFA8(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v159 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v158, v158[4]);
      OverwriteAssetSoundName__PlaySystemSe(v159, 0, 0, v160);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      goto LABEL_217;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_220;
    case 0x1E:
      p_fields->__1__state = -1;
      goto LABEL_231;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_247;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_252;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_260;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_266;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_271;
    case 0x24:
      p_fields->__1__state = -1;
      goto LABEL_287;
    case 0x25:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_417;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_344;
      v161 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v161 = (_QWORD *)sub_1B4CFA8(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v162 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v161, v161[4]);
      OverwriteAssetSoundName__PlaySystemSe(v162, 0, 0, v163);
      goto LABEL_287;
    case 0x26:
      p_fields->__1__state = -1;
      v164 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v164 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v164->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        v166 = OptionManager_TypeInfo;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication((const MethodInfo *)v166);
        OptionManager__SetNotiffication(Notiffication, 1, v168);
        v169 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v169 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v169->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_417;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v165);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v170);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_417;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 9, 1, 0LL, 0LL);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ManagementManager__startCheckAll_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ManagementManager__startCheckAll_d__35__System_Collections_IEnumerator_Reset(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_ManagementManager__startCheckAll_d__35_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall ManagementManager__startCheckAll_d__35__System_Collections_IEnumerator_get_Current(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ManagementManager__startCheckAll_d__35__System_IDisposable_Dispose(
        ManagementManager__startCheckAll_d__35_o *this,
        const MethodInfo *method)
{
  ;
}