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

  if ( (byte_4B017F7 & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_7978/*"IsNotificationStatusSend"*/, v4);
    sub_1BC3008(&StringLiteral_7990/*"IsReBootCacheClearKey"*/, v5);
    sub_1BC3008(&StringLiteral_20835/*"ja-JP"*/, v6);
    sub_1BC3008(&StringLiteral_24771/*"yyyy年MM月dd日HH時mm分"*/, v7);
    byte_4B017F7 = 1;
  }
  ManagementManager_TypeInfo->static_fields->PushStateSendedKey = (struct System_String_o *)StringLiteral_7978/*"IsNotificationStatusSend"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)ManagementManager_TypeInfo->static_fields, StringLiteral_7978/*"IsNotificationStatusSend"*/, v2, v3);
  v8 = StringLiteral_7990/*"IsReBootCacheClearKey"*/;
  static_fields = ManagementManager_TypeInfo->static_fields;
  static_fields->RebootCacheClearKey = (struct System_String_o *)StringLiteral_7990/*"IsReBootCacheClearKey"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->RebootCacheClearKey, v8, v10, v11);
  v12 = StringLiteral_24771/*"yyyy年MM月dd日HH時mm分"*/;
  v13 = ManagementManager_TypeInfo->static_fields;
  v13->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_24771/*"yyyy年MM月dd日HH時mm分"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v13->DATE_TIME_DISP_FORMAT, v12, v14, v15);
  v16 = StringLiteral_20835/*"ja-JP"*/;
  v17 = ManagementManager_TypeInfo->static_fields;
  v17->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20835/*"ja-JP"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v17->DEFAULT_CULTURE_NAME, v16, v18, v19);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B017F6 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_4B017F6 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  ManagementManager_o *v14; // x21
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  float v17; // s0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x19
  Il2CppObject *v23; // x19
  float v24; // [xsp+Ch] [xbp-34h] BYREF

  v24 = ratio;
  if ( (byte_4B017DF & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Debug_TypeInfo, errorText);
    sub_1BC3008(&string___TypeInfo, v8);
    sub_1BC3008(&StringLiteral_776/*"):"*/, v9);
    sub_1BC3008(&StringLiteral_6704/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_1BC3008(&StringLiteral_740/*"(ratio: "*/, v11);
    byte_4B017DF = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_19;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6704/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_1BC30B0(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_20;
      *(_QWORD *)&this->fields.isInitializingData = errorText;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.isInitializingData, (int32_t)errorText, v12, v13);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_20;
      v16 = StringLiteral_740/*"(ratio: "*/;
      v14->fields.AvalonSceneManager = (struct AvalonSceneManager_o *)StringLiteral_740/*"(ratio: "*/;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v14->fields.AvalonSceneManager, v16, v12, v15);
      this = (ManagementManager_o *)System_Single__ToString(v17, (const MethodInfo *)&v24);
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2
        || (v14->fields.debugInfoRootObject = (struct UnityEngine_GameObject_o *)this,
            sub_1BC2FAC((CGThumbnailListItem_o *)&v14->fields.debugInfoRootObject, (int32_t)this, v12, v18),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 3)
        || (v20 = StringLiteral_776/*"):"*/,
            v14->fields.statusLabel = (struct UILabel_o *)StringLiteral_776/*"):"*/,
            sub_1BC2FAC((CGThumbnailListItem_o *)&v14->fields.statusLabel, v20, v12, v19),
            LODWORD(v14->fields.m_CancellationTokenSource) <= 4) )
      {
LABEL_20:
        sub_1BC326C(this, errorText, v12);
      }
      v14->fields._videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)exceptionMessage;
      sub_1BC2FAC(
        (CGThumbnailListItem_o *)&v14->fields._videoPlayer_k__BackingField,
        (int32_t)exceptionMessage,
        v12,
        v21);
      v22 = (Il2CppObject *)System_String__Concat_62389164((System_String_array *)v14, 0LL);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v22, 0LL);
      return;
    }
LABEL_19:
    sub_1BC3264(this, errorText);
  }
  v23 = (Il2CppObject *)System_String__Concat_62348648(errorText, exceptionMessage, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v23, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B017DB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_4B017DB = 1;
  }
  if ( !SingletonMonoBehaviour_object___CheckInstance(
          (SingletonMonoBehaviour_T__o *)this,
          (const MethodInfo_38E00B4 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4B017F4 & 1) == 0 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, boot);
    byte_4B017F4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4B017F3 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B017F3 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_1BC3264(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4B017D9 & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, v1);
    byte_4B017D9 = 1;
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

  if ( (byte_4B017E9 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_4B017E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4B017E8 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4B017E8 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69829232(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4B017E7 & 1) != 0 )
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
    sub_1BC3008(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4B017E7 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69829232(0LL);
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

  if ( (byte_4B017E0 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, condition);
    sub_1BC3008(&StringLiteral_6129/*"ErrorLog: "*/, v8);
    sub_1BC3008(&StringLiteral_55/*"\n StackTrace: "*/, v9);
    byte_4B017E0 = 1;
  }
  if ( !type )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    v11 = System_String__Concat_62388900(
            (System_String_o *)StringLiteral_6129/*"ErrorLog: "*/,
            condition,
            (System_String_o *)StringLiteral_55/*"\n StackTrace: "*/,
            stackTrace,
            0LL);
    if ( !Instance )
      sub_1BC3264(v11, v12);
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

  if ( (byte_4B017E2 & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo, method);
    byte_4B017E2 = 1;
  }
  v3 = sub_1BC3254(ManagementManager__InitializeAdManagerAndFirebase_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4B017F0 & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, method);
    byte_4B017F0 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4B01069 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, method);
    byte_4B01069 = 1;
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

  if ( (byte_4B017F1 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v2);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_4B017F1 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v7);
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

  if ( (byte_4B017F5 & 1) == 0 )
  {
    sub_1BC3008(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_1BC3008(&ManagementManager_TypeInfo, v2);
    byte_4B017F5 = 1;
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

  if ( (byte_4B017DA & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, v1);
    byte_4B017DA = 1;
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

  if ( (byte_4B017E3 & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo, method);
    byte_4B017E3 = 1;
  }
  v2 = sub_1BC3254(ManagementManager__SetupFirebaseAppCheck_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__SetupFirebaseCrashlytics(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4B017E4 & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo, method);
    byte_4B017E4 = 1;
  }
  v2 = sub_1BC3254(ManagementManager__SetupFirebaseCrashlytics_d__38_TypeInfo);
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

  if ( (byte_4B017DC & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Application_TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&System_Type_TypeInfo, v5);
    sub_1BC3008(&UnityGamingServicesBehaviour_var, v6);
    byte_4B017DC = 1;
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
    sub_1BC3264(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v10);
  v12 = ManagementManager__startCheckAll(this, 0, 0, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_o *v2; // x19
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4B017F2 & 1) == 0 )
  {
    this = (ManagementManager_o *)sub_1BC3008(&UnityEngine_Application_TypeInfo, method);
    byte_4B017F2 = 1;
  }
  if ( v2->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v4) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_69829232(0LL);
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

  if ( (byte_4B017EF & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, result);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4B017EF = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v6);
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
  _BOOL8 _39466584; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_4B017EE & 1) == 0 )
  {
    sub_1BC3008(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_1BC3008(&ManagerConfig_TypeInfo, v4);
    sub_1BC3008(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BC3008(&TutorialFlag_TypeInfo, v8);
    byte_4B017EE = 1;
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
  _39466584 = TutorialFlag__Get_39466584(102, 0LL);
  if ( _39466584 )
  {
LABEL_9:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1BC3264(0LL, v15);
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_39466584, v11, v12);
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

  if ( (byte_4B017EC & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, result);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4B017EC = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v7);
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

  if ( (byte_4B017EB & 1) == 0 )
  {
    sub_1BC3008(&Method_ManagementManager_callbackTopHome__, result);
    sub_1BC3008(&ManagerConfig_TypeInfo, v4);
    sub_1BC3008(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BC3008(&TutorialFlag_TypeInfo, v8);
    byte_4B017EB = 1;
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
  if ( TutorialFlag__Get_39466584(102, 0LL) )
  {
LABEL_9:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_object )
      sub_1BC3264(0LL, v14);
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

  if ( (byte_4B017DD & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_4574/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_1BC3008(&StringLiteral_9100/*"MovieRoot"*/, v7);
    byte_4B017DD = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4574/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_1BC3254(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_9100/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  v11,
                  (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._videoPlayer_k__BackingField, (int32_t)v14, v15, v16),
          !v10)
      || (v17 = *p_videoPlayer_k__BackingField,
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v10,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v17) )
    {
      sub_1BC3264(Component_object, v13);
    }
    AvalonVideoPlayer__initialize(v17, (UnityEngine_Camera_o *)Component_object, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_35217712(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B017D7 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_4B017D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  return HIDWORD(Instance[4].monitor);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4B017D8 & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, v1);
    byte_4B017D8 = 1;
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
  FirebaseScript_c *v27; // x0
  const MethodInfo *v28; // x3
  System_Collections_IEnumerator_o *v29; // x1

  if ( (byte_4B017DE & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, isLogin);
    sub_1BC3008(&CTouch_TypeInfo, v7);
    sub_1BC3008(&CommonEffectManager_TypeInfo, v8);
    sub_1BC3008(&FirebaseScript_TypeInfo, v9);
    sub_1BC3008(&System_GC_TypeInfo, v10);
    sub_1BC3008(&ManagementManager_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_1BC3008(&SoundManager_TypeInfo, v21);
    byte_4B017DE = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    CommonUI__Reboot((CommonUI_o *)Instance, isFadeInit, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__Reboot(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance
      || (ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
      || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_30:
      sub_1BC3264(Instance, v24);
    }
    PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0LL);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v25 )
      sub_1BC3264(0LL, v26);
    AdManager__Initialize((AdManager_o *)v25, 2, 0LL);
    v27 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize((const MethodInfo *)v27);
    v29 = ManagementManager__startCheckAll(this, 1, isLogin, v28);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v29, 0LL);
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

  if ( (byte_4B017EA & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4B017EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1BC3254(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_1BC3264(v7, v8);
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

  if ( (byte_4B017ED & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4B017ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1BC3254(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_1BC3264(v7, v8);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 1, v9);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._videoPlayer_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._videoPlayer_k__BackingField, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_4B017E1 & 1) == 0 )
  {
    sub_1BC3008(&ManagementManager__startCheckAll_d__35_TypeInfo, isReboot);
    byte_4B017E1 = 1;
  }
  v7 = isLogin;
  v8 = sub_1BC3254(ManagementManager__startCheckAll_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B017E5 & 1) == 0 )
  {
    sub_1BC3008(&DataManager_TypeInfo, method);
    byte_4B017E5 = 1;
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

  if ( (byte_4B017E6 & 1) == 0 )
  {
    sub_1BC3008(&DataManager_TypeInfo, method);
    sub_1BC3008(&ScrTerminalListTop_TypeInfo, v2);
    sub_1BC3008(&ServantCommentManager_TypeInfo, v3);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v4);
    byte_4B017E6 = 1;
  }
  MovieFileMerge__Delete_39529888(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFF063 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v6);
    byte_4AFF063 = 1;
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
  FirebaseScript_c *v15; // x0
  ManagementManager_o *v16; // x0
  const MethodInfo *v17; // x1
  System_Collections_IEnumerator_o *v18; // x1
  ManagementManager_o *started; // x0
  const MethodInfo *v20; // x1
  System_Collections_IEnumerator_o *v21; // x1

  if ( (byte_4B017F9 & 1) == 0 )
  {
    sub_1BC3008(&FirebaseScript_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_1BC3008(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_4B017F9 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1BC3264(0LL, v12);
    AdManager__Initialize((AdManager_o *)Instance, 0, 0LL);
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v13 )
      sub_1BC3264(0LL, v14);
    AdManager__Initialize((AdManager_o *)v13, 1, 0LL);
    v15 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    FirebaseScript__Initialize((const MethodInfo *)v15);
    if ( !_4__this )
      sub_1BC3264(v16, v17);
    v18 = ManagementManager__SetupFirebaseAppCheck(v16, v17);
    started = (ManagementManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_70019872(_4__this, v18, 0LL);
    v21 = ManagementManager__SetupFirebaseCrashlytics(started, v20);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872(_4__this, v21, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__36_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  int32_t _1__state; // w8
  FirebaseScript_c *v11; // x0
  FirebaseScript_c *v12; // x0
  FirebaseScript_c *v13; // x0
  Il2CppObject **v14; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  FirebaseScript_c *v17; // x0
  FirebaseScript_c *v18; // x0
  System_String_o *v19; // x19
  __int64 v20; // x1
  float time; // s8
  FirebaseScript_c *v22; // x0
  float beginTime_5__2; // s9
  FirebaseScript_c *v24; // x0
  float v25; // s8
  char IsNullOrEmpty; // w0
  char v27; // w21
  bool v28; // w22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x19
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  FirebaseScript_c *v37; // x0
  FirebaseScript_c *v38; // x0
  char v39[4]; // [xsp+18h] [xbp-28h] BYREF
  float v40; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B017FA & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, method);
    sub_1BC3008(&FirebaseScript_TypeInfo, v5);
    sub_1BC3008(&float_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_809/*", AppCheckErrorMessage: "*/, v7);
    sub_1BC3008(&StringLiteral_5884/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v8);
    sub_1BC3008(&StringLiteral_7914/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/, v9);
    byte_4B017FA = 1;
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
      if ( !byte_4B01894 )
      {
        sub_1BC3008(&FirebaseScript_TypeInfo, method);
        byte_4B01894 = 1;
      }
      v11 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v11 = FirebaseScript_TypeInfo;
      }
      v11->static_fields->_IsSendAppCheckToken_k__BackingField = 1;
      this->fields._beginTime_5__2 = UnityEngine_Time__get_time(0LL);
LABEL_15:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4B01895 )
      {
        sub_1BC3008(&FirebaseScript_TypeInfo, method);
        byte_4B01895 = 1;
      }
      v12 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v12 = FirebaseScript_TypeInfo;
      }
      if ( !v12->static_fields->_IsFirebaseInitialized_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( !v12->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v12);
      if ( !FirebaseScript__GetAppCheckToken(0, method) )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4B01896 )
        {
          sub_1BC3008(&FirebaseScript_TypeInfo, method);
          byte_4B01896 = 1;
        }
        v17 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v17 = FirebaseScript_TypeInfo;
        }
        if ( v17->static_fields->_IsSendAppCheckToken_k__BackingField )
          return 0;
        if ( !v17->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v17);
        if ( !byte_4AFC1F0 )
        {
          sub_1BC3008(&FirebaseScript_TypeInfo, method);
          byte_4AFC1F0 = 1;
        }
        v18 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v18 = FirebaseScript_TypeInfo;
        }
        if ( v18->static_fields->_CanUseFirebase_k__BackingField )
          return 0;
        v19 = (System_String_o *)StringLiteral_7914/*"IsCreatedToken: False, AppCheckErrorMessage: Firebase wasn't available"*/;
        if ( v18->_2.cctor_finished )
          goto LABEL_73;
LABEL_72:
        j_il2cpp_runtime_class_init_0(v18);
LABEL_73:
        if ( !byte_4B01897 )
        {
          sub_1BC3008(&FirebaseScript_TypeInfo, method);
          byte_4B01897 = 1;
        }
        v38 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v38 = FirebaseScript_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetString(v38->static_fields->_AppCheckPrevMessageKey_k__BackingField, v19, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
        return 0;
      }
LABEL_25:
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4B0188E )
      {
        sub_1BC3008(&FirebaseScript_TypeInfo, method);
        byte_4B0188E = 1;
      }
      v13 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v13 = FirebaseScript_TypeInfo;
      }
      if ( v13->static_fields->_IsRunningGetAppCheckToken_k__BackingField )
      {
        this->fields.__2__current = 0LL;
        v14 = &this->fields.__2__current;
        sub_1BC2FAC((CGThumbnailListItem_o *)v14, 0, v2, v3);
        *((_DWORD *)v14 - 2) = 2;
        return 1;
      }
      time = UnityEngine_Time__get_time(0LL);
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( !byte_4B01896 )
      {
        sub_1BC3008(&FirebaseScript_TypeInfo, v20);
        byte_4B01896 = 1;
      }
      v22 = FirebaseScript_TypeInfo;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v22 = FirebaseScript_TypeInfo;
      }
      if ( v22->static_fields->_IsSendAppCheckToken_k__BackingField )
        return 0;
      beginTime_5__2 = this->fields._beginTime_5__2;
      if ( !v22->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v22);
      if ( !byte_4B01898 )
      {
        sub_1BC3008(&FirebaseScript_TypeInfo, v20);
        byte_4B01898 = 1;
      }
      v24 = FirebaseScript_TypeInfo;
      v25 = time - beginTime_5__2;
      if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        v24 = FirebaseScript_TypeInfo;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v24->static_fields->_AppCheckToken_k__BackingField, 0LL);
      v27 = ~IsNullOrEmpty;
      v28 = (IsNullOrEmpty & 1) == 0;
      v40 = v25;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v40, v29, v30, v31);
      v39[0] = v28;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v39, v33, v34, v35);
      v19 = System_String__Format_62389940((System_String_o *)StringLiteral_5884/*"ElapsedTime: {0}(s), IsCreatedToken: {1}"*/, v32, v36, 0LL);
      if ( (v27 & 1) == 0 )
      {
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4B01899 )
        {
          sub_1BC3008(&FirebaseScript_TypeInfo, method);
          byte_4B01899 = 1;
        }
        v37 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v37 = FirebaseScript_TypeInfo;
        }
        v19 = System_String__Concat_62386896(
                v19,
                (System_String_o *)StringLiteral_809/*", AppCheckErrorMessage: "*/,
                v37->static_fields->_AppCheckTokenError_k__BackingField,
                0LL);
      }
      v18 = FirebaseScript_TypeInfo;
      if ( FirebaseScript_TypeInfo->_2.cctor_finished )
        goto LABEL_73;
      goto LABEL_72;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ManagementManager__SetupFirebaseAppCheck_d__37_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4B017FB & 1) == 0 )
  {
    sub_1BC3008(&FirebaseScript_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    byte_4B017FB = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4B01895 )
  {
    sub_1BC3008(&FirebaseScript_TypeInfo, method);
    byte_4B01895 = 1;
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
    if ( !byte_4AFC1F0 )
    {
      sub_1BC3008(&FirebaseScript_TypeInfo, method);
      byte_4AFC1F0 = 1;
    }
    v7 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v7 = FirebaseScript_TypeInfo;
    }
    if ( v7->static_fields->_CanUseFirebase_k__BackingField )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !Instance )
        sub_1BC3264(0LL, v9);
      CrashReporter__FirebaseCrashlyticsStartUp((CrashReporter_o *)Instance, 0LL);
    }
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ManagementManager__SetupFirebaseCrashlytics_d__38_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4B017F8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, flag);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__, v6);
    sub_1BC3008(&ManagementManager___c__DisplayClass35_1_TypeInfo, v7);
    byte_4B017F8 = 1;
  }
  v8 = sub_1BC3254(ManagementManager___c__DisplayClass35_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass35_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BC3264(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30731324((CommonUI_o *)Instance, v14, 0LL);
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
    sub_1BC3264(this, method);
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
  const MethodInfo_38DFD48 **v76; // x23
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v79; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  bool result; // w0
  LocalizationManager_c *v84; // x0
  System_Collections_IEnumerator_o *v85; // x0
  CGThumbnailListItem_o *v86; // x19
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int v89; // w8
  System_Collections_IEnumerator_o *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  UnityEngine_Application_LogCallback_o *v93; // x21
  UnityEngine_WaitForEndOfFrame_o *v94; // x20
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  __int64 v97; // x2
  const MethodInfo *v98; // x3
  ManagementManager__startCheckAll_d__35_o *v99; // x21
  int32_t v100; // w1
  const MethodInfo *v101; // x3
  int32_t v102; // w1
  const MethodInfo *v103; // x3
  int32_t v104; // w1
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  EncryptedPlayerPrefs_c *v107; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v109; // x20
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  const MethodInfo *v112; // x1
  struct ManagementManager___c__DisplayClass35_0_o *_8__1; // x8
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v115; // x21
  UnityEngine_WaitForEndOfFrame_o *v116; // x20
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  NetworkManager_ResultCallbackFunc_o *v119; // x21
  UnityEngine_WaitForEndOfFrame_o *v120; // x20
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  Il2CppObject *waitForServerTime_5__7; // x1
  Il2CppObject *v124; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  DataManager_c *v129; // x0
  UnityEngine_Coroutine_o *v130; // x0
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  DataManager_c *v133; // x0
  int32_t updateMasterResult_5__9; // w8
  const MethodInfo *v135; // x1
  Il2CppObject *v136; // x21
  System_String_o *v137; // x22
  ErrorDialog_ClickDelegate_o *v138; // x23
  UnityEngine_WaitForEndOfFrame_o *v139; // x20
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  UnityEngine_WaitForEndOfFrame_o *v142; // x20
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  UnityEngine_WaitForEndOfFrame_o *v145; // x20
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  __int64 v148; // x1
  LogoMain_c *v149; // x0
  UnityEngine_WaitForEndOfFrame_o *v150; // x20
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  _QWORD *v153; // x0
  System_Reflection_MethodBase_o *v154; // x0
  _QWORD *v155; // x0
  System_Reflection_MethodBase_o *v156; // x0
  ManagementManager_c *v157; // x0
  const MethodInfo *v158; // x2
  bool Notiffication; // w0
  ManagementManager_c *v160; // x0
  const MethodInfo *v161; // x1
  Il2CppObject *wait_5__8; // x1
  System_Collections_IEnumerator_o *v163; // x0
  UnityEngine_Coroutine_o *v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  LocalizationManager_c *v167; // x0
  LocalizationManager_c *v168; // x0
  UnityEngine_WaitForEndOfFrame_o *v169; // x20
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  UnityEngine_WaitForEndOfFrame_o *v172; // x20
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  NetworkManager_ResultCallbackFunc_o *v175; // x21
  UnityEngine_WaitForEndOfFrame_o *v176; // x20
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  UnityEngine_WaitForEndOfFrame_o *v179; // x20
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v183; // x20
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  UnityEngine_WaitForEndOfFrame_o *v186; // x20
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  UnityEngine_WaitForEndOfFrame_o *v189; // x20
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  UnityEngine_WaitForEndOfFrame_o *v192; // x20
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  UnityEngine_WaitForSeconds_o *v195; // x20
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  UnityEngine_WaitForEndOfFrame_o *v200; // x20
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  UnityEngine_WaitForEndOfFrame_o *v203; // x20
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  UnityEngine_WaitForEndOfFrame_o *v206; // x20
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  ManagerConfig_c *v209; // x0
  UnityEngine_WaitForEndOfFrame_o *v210; // x20
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  UnityEngine_WaitForSeconds_o *v213; // x20
  int32_t v214; // w2
  const MethodInfo *v215; // x3
  UnityEngine_WaitForEndOfFrame_o *v216; // x20
  int32_t v217; // w2
  const MethodInfo *v218; // x3
  UnityEngine_WaitForEndOfFrame_o *v219; // x20
  int32_t v220; // w2
  const MethodInfo *v221; // x3
  ManagementManager_c *v222; // x0
  UnityEngine_Coroutine_o *v223; // x0
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  const MethodInfo *v226; // x1
  Il2CppObject *v227; // x21
  System_String_o *v228; // x22
  ErrorDialog_ClickDelegate_o *v229; // x23
  UnityEngine_WaitForEndOfFrame_o *v230; // x20
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  UnityEngine_WaitForEndOfFrame_o *v235; // x20
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  UnityEngine_WaitForEndOfFrame_o *v238; // x20
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  System_Action_object__o *v241; // x21
  System_Action_object__o *v242; // x22
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v246; // x0
  ManagerConfig_c *v247; // x0
  ManagerConfig_c **v248; // x19
  const MethodInfo_38DFD48 **v249; // x26
  const MethodInfo *v250; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v252; // x22
  ErrorDialog_ClickDelegate_o *v253; // x23
  UnityEngine_WaitForEndOfFrame_o *v254; // x20
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  ManagementManager_c *v257; // x0
  Il2CppObject *v258; // x21
  ManagementManager__startCheckAll_d__35_o *v259; // x29
  CGThumbnailListItem_o *p__8__1; // x19
  int32_t v261; // w2
  const MethodInfo *v262; // x3
  const MethodInfo_38DFD48 **v263; // x28
  const MethodInfo *v264; // x1
  Il2CppObject *v265; // x21
  System_String_o *v266; // x22
  const MethodInfo *v267; // x1
  System_String_o *v268; // x23
  const MethodInfo *v269; // x1
  System_String_o *v270; // x25
  const MethodInfo *v271; // x1
  System_String_o *v272; // x0
  Il2CppObject *klass; // x27
  System_String_o *v274; // x24
  CommonConfirmDialog_ClickDelegate_o *v275; // x26
  Il2CppObject *v276; // x21
  const MethodInfo *v277; // x1
  System_String_o *v278; // x21
  Il2CppObject *DispFriendCode; // x22
  const MethodInfo *v280; // x1
  const MethodInfo *v281; // x1
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
  int32_t readResult_5__2; // [xsp+58h] [xbp-68h]

  v4 = this;
  if ( (byte_4B017FC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_string__TypeInfo, method);
    sub_1BC3008(&AndroidUtil_TypeInfo, v5);
    sub_1BC3008(&UnityEngine_Application_TypeInfo, v6);
    sub_1BC3008(&AssetManager_TypeInfo, v7);
    sub_1BC3008(&AtlasManager_TypeInfo, v8);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1BC3008(&ErrorDialog_ClickDelegate_TypeInfo, v10);
    sub_1BC3008(&CommonServicePluginScript_TypeInfo, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&EncryptedPlayerPrefs_TypeInfo, v13);
    sub_1BC3008(&FSUtility_TypeInfo, v14);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v15);
    sub_1BC3008(&LocalizationManager_TypeInfo, v16);
    sub_1BC3008(&UnityEngine_Application_LogCallback_TypeInfo, v17);
    sub_1BC3008(&LogoMain_TypeInfo, v18);
    sub_1BC3008(&Method_ManagementManager_EndLogDialog__, v19);
    sub_1BC3008(&Method_ManagementManager_EndQuitDialog__, v20);
    sub_1BC3008(&Method_ManagementManager_EndRetryDialog__, v21);
    sub_1BC3008(&Method_ManagementManager_HandleLog__, v22);
    sub_1BC3008(&Method_ManagementManager_NotifyRequestPermissionsDenied__, v23);
    sub_1BC3008(&Method_ManagementManager_NotifyRequestPermissionsGranted__, v24);
    sub_1BC3008(&Method_ManagementManager_callbackAccountRegist__, v25);
    sub_1BC3008(&Method_ManagementManager_callbackTopGameData__, v26);
    sub_1BC3008(&ManagementManager_TypeInfo, v27);
    sub_1BC3008(&ManagerConfig_TypeInfo, v28);
    sub_1BC3008(&Method_NetworkManager_getRequest_AccountRegistRequest___, v29);
    sub_1BC3008(&Method_NetworkManager_getRequest_TopGameDataRequest___, v30);
    sub_1BC3008(&NetworkManager_TypeInfo, v31);
    sub_1BC3008(&OptionManager_TypeInfo, v32);
    sub_1BC3008(&PurchaseBehaviour_TypeInfo, v33);
    sub_1BC3008(&NetworkManager_ReadResult_TypeInfo, v34);
    sub_1BC3008(&ResolutionManager_TypeInfo, v35);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v36);
    sub_1BC3008(&ServantCommentManager_TypeInfo, v37);
    sub_1BC3008(&SignedData_TypeInfo, v38);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v39);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v40);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v41);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v43);
    sub_1BC3008(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v44);
    sub_1BC3008(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v45);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v46);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v47);
    sub_1BC3008(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v48);
    sub_1BC3008(&SoundManager_TypeInfo, v49);
    sub_1BC3008(&string___TypeInfo, v50);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v51);
    sub_1BC3008(&Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__, v52);
    sub_1BC3008(&ManagementManager___c__DisplayClass35_0_TypeInfo, v53);
    sub_1BC3008(&Method_ManagementManager__startCheckAll_d__35_MoveNext__, v54);
    sub_1BC3008(&UnityEngine_WaitForEndOfFrame_TypeInfo, v55);
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v56);
    sub_1BC3008(&StringLiteral_7383/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v57);
    sub_1BC3008(&StringLiteral_9240/*"NOW_LOADING"*/, v58);
    sub_1BC3008(&StringLiteral_9169/*"NETWORK_ERROR_DISK_FULL"*/, v59);
    sub_1BC3008(&StringLiteral_6335/*"F39UThNh"*/, v60);
    sub_1BC3008(&StringLiteral_7386/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v61);
    sub_1BC3008(&StringLiteral_7384/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v62);
    sub_1BC3008(&StringLiteral_7382/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v63);
    sub_1BC3008(&StringLiteral_5043/*"DataServerFolderName"*/, v64);
    sub_1BC3008(&StringLiteral_16615/*"android.permission.POST_NOTIFICATIONS"*/, v65);
    sub_1BC3008(&StringLiteral_9177/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v66);
    sub_1BC3008(&StringLiteral_9170/*"NETWORK_ERROR_FIEND_CODE"*/, v67);
    sub_1BC3008(&StringLiteral_12460/*"SYSTEM"*/, v68);
    sub_1BC3008(&StringLiteral_1/*""*/, v69);
    sub_1BC3008(&StringLiteral_20691/*"ioqrk4Om"*/, v70);
    sub_1BC3008(&StringLiteral_1368/*"2pC0bIYM"*/, v71);
    sub_1BC3008(&StringLiteral_9171/*"NETWORK_ERROR_READ_AUTH"*/, v72);
    this = (ManagementManager__startCheckAll_d__35_o *)sub_1BC3008(&StringLiteral_9178/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v73);
    byte_4B017FC = 1;
  }
  p_fields = &v4->fields;
  v75 = &ManagerConfig_TypeInfo;
  v76 = (const MethodInfo_38DFD48 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
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
      sub_1BC2FAC(p__2__current, (int32_t)v79, v81, v82);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_7:
      if ( !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData__RefillSigningData(3, 0LL);
      v84 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__Initialize((const MethodInfo *)v84);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initialize(0LL);
      if ( !_4__this )
        goto LABEL_418;
      v85 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, method);
      v4->fields.__2__current = (Il2CppObject *)v85;
      v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v86, (int32_t)v85, v87, v88);
      v89 = 2;
      goto LABEL_417;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      v90 = NetworkManager__Initialize((NetworkManager_o *)this, method);
      v4->fields.__2__current = (Il2CppObject *)v90;
      v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v86, (int32_t)v90, v91, v92);
      v89 = 3;
      goto LABEL_417;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
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
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v4->fields.isReboot )
        goto LABEL_31;
      v93 = (UnityEngine_Application_LogCallback_o *)sub_1BC3254(UnityEngine_Application_LogCallback_TypeInfo);
      UnityEngine_Application_LogCallback___ctor(
        v93,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_HandleLog__,
        0LL);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__add_logMessageReceived(v93, 0LL);
      if ( v4->fields.isReboot )
      {
LABEL_31:
        v94 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v94, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v94;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v94, v95, v96);
        v89 = 4;
        goto LABEL_417;
      }
LABEL_33:
      this = (ManagementManager__startCheckAll_d__35_o *)sub_1BC30B0(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_418;
      v99 = this;
      if ( !LODWORD(this->fields.__2__current)
        || (v100 = StringLiteral_1368/*"2pC0bIYM"*/,
            *(_QWORD *)&this->fields.isReboot = StringLiteral_1368/*"2pC0bIYM"*/,
            sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.isReboot, v100, v97, v98),
            LODWORD(v99->fields.__2__current) <= 1)
        || (v102 = StringLiteral_6335/*"F39UThNh"*/,
            v99->fields.__4__this = (struct ManagementManager_o *)StringLiteral_6335/*"F39UThNh"*/,
            sub_1BC2FAC((CGThumbnailListItem_o *)&v99->fields.__4__this, v102, v97, v101),
            LODWORD(v99->fields.__2__current) <= 2) )
      {
        sub_1BC326C(this, method, v97);
      }
      v104 = StringLiteral_20691/*"ioqrk4Om"*/;
      v99->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)StringLiteral_20691/*"ioqrk4Om"*/;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v99->fields.__8__1, v104, v97, v103);
      v107 = EncryptedPlayerPrefs_TypeInfo;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v107 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v107->static_fields;
      static_fields->keys = (struct System_String_array *)v99;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->keys, (int32_t)v99, v105, v106);
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
                                                               (System_String_o *)StringLiteral_16615/*"android.permission.POST_NOTIFICATIONS"*/,
                                                               0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              goto LABEL_418;
            _4__this->fields.isPermissionRequesting = 1;
            v241 = (System_Action_object__o *)sub_1BC3254(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v241,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsGranted__,
              0LL);
            v242 = (System_Action_object__o *)sub_1BC3254(System_Action_string__TypeInfo);
            System_Action_object____ctor(
              v242,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_NotifyRequestPermissionsDenied__,
              0LL);
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_16615/*"android.permission.POST_NOTIFICATIONS"*/,
              (System_Action_string__o *)v241,
              (System_Action_string__o *)v242,
              0LL,
              0LL);
LABEL_47:
            if ( _4__this->fields.isPermissionRequesting )
            {
              v109 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v109, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v109;
              v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BC2FAC(v86, (int32_t)v109, v110, v111);
              v89 = 5;
              goto LABEL_417;
            }
          }
        }
        else
        {
LABEL_44:
          if ( !_4__this )
            goto LABEL_418;
          _4__this->fields.isPermissionGranted = 1;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( this )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel((LocalNotificationManagerAndroid_o *)this, 0LL);
          v238 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v238, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v238;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, (int32_t)v238, v239, v240);
          v89 = 6;
          goto LABEL_417;
        }
LABEL_418:
        sub_1BC3264(this, method);
      }
LABEL_50:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, method);
      v4->fields._readResult_5__2 = (int)this;
      if ( !_4__this )
        goto LABEL_418;
      this = (ManagementManager__startCheckAll_d__35_o *)_4__this->fields.debugInfoRootObject;
      if ( !this )
        goto LABEL_418;
      v294 = v4;
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
      if ( !this )
        goto LABEL_418;
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
        v246 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
        if ( FreeSize < v246 )
          FreeSize = v246;
        if ( FreeSize < 1 )
          break;
        v247 = *v75;
        if ( !(*v75)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v247);
          v247 = *v75;
        }
        if ( FreeSize >= v247->static_fields->LIMIT_FREE_SIZE )
          break;
        _4__this->fields.isErrorDialog = 1;
        v248 = v75;
        v249 = v76;
        Instance = SingletonMonoBehaviour_object___get_Instance(*v76);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v252 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NETWORK_ERROR_DISK_FULL"*/, v250);
        v253 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v253, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_418;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v252, v253, 0, 0LL);
        v76 = v249;
        v75 = v248;
LABEL_374:
        if ( _4__this->fields.isErrorDialog )
        {
          v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
          v294->fields.__2__current = (Il2CppObject *)v254;
          v86 = (CGThumbnailListItem_o *)&v294->fields.__2__current;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v294->fields.__2__current, (int32_t)v254, v255, v256);
          v89 = 7;
          goto LABEL_417;
        }
      }
      v4 = v294;
      if ( v294->fields._readResult_5__2 < 2u )
      {
        v294->fields._isCacheCheck_5__3 = 0;
        goto LABEL_378;
      }
      v276 = (Il2CppObject *)StringLiteral_1/*""*/;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, method) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v278 = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"NETWORK_ERROR_FIEND_CODE"*/, v277);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !this )
          goto LABEL_418;
        DispFriendCode = (Il2CppObject *)NetworkManager__GetDispFriendCode((NetworkManager_o *)this, method);
        goto LABEL_401;
      }
      if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      DispFriendCode = (Il2CppObject *)AndroidUtil__GetFriendCodeFromOldDat(0LL);
      if ( !System_String__IsNullOrEmpty((System_String_o *)DispFriendCode, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v278 = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"NETWORK_ERROR_FIEND_CODE"*/, v280);
LABEL_401:
        v276 = (Il2CppObject *)System_String__Format(v278, DispFriendCode, 0LL);
      }
      v282 = SingletonMonoBehaviour_object___get_Instance(*v76);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v283 = LocalizationManager__Get((System_String_o *)StringLiteral_9171/*"NETWORK_ERROR_READ_AUTH"*/, v281);
      v295.klass = (System_Enum_c *)NetworkManager_ReadResult_TypeInfo;
      v295.monitor = (void *)-1LL;
      readResult_5__2 = v294->fields._readResult_5__2;
      v284 = System_Enum__ToString(&v295, 0LL);
      v285 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v284 )
        v286 = (Il2CppObject *)v284;
      else
        v286 = (Il2CppObject *)StringLiteral_1/*""*/;
      v287 = System_String__Format_62389940(v283, v276, v286, 0LL);
      v288 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v288, (Il2CppObject *)_4__this, Method_ManagementManager_EndQuitDialog__, 0LL);
      if ( !v282 )
        goto LABEL_418;
      CommonUI__OpenErrorDialog((CommonUI_o *)v282, v285, v287, v288, 0, 0LL);
      return 0;
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_33;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_47;
      goto LABEL_418;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_50;
    case 7:
      v294 = v4;
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_418;
      goto LABEL_374;
    case 8:
      p_fields->__1__state = -1;
      goto LABEL_60;
    case 9:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( !byte_4B0189A )
      {
        sub_1BC3008(&DataManager_TypeInfo, method);
        byte_4B0189A = 1;
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
        goto LABEL_418;
      _4__this->fields.isReadGameData = 0;
      v115 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v115,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v115,
                                                           (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_418;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v116 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v116, 0LL);
      v4->fields._waitForServerTime_5__7 = v116;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._waitForServerTime_5__7, (int32_t)v116, v117, v118);
      goto LABEL_86;
    case 0xA:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_418;
      if ( !_4__this->fields.isReadGameData )
      {
LABEL_86:
        waitForServerTime_5__7 = (Il2CppObject *)v4->fields._waitForServerTime_5__7;
        v4->fields.__2__current = waitForServerTime_5__7;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)waitForServerTime_5__7, v2, v3);
        v89 = 10;
        goto LABEL_417;
      }
      _4__this->fields.isReadGameData = 0;
      v119 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v119,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                           v119,
                                                           (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_418;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v120 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v120, 0LL);
      v4->fields._wait_5__8 = v120;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._wait_5__8, (int32_t)v120, v121, v122);
LABEL_203:
      wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
      v4->fields.__2__current = wait_5__8;
      v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v86, (int32_t)wait_5__8, v2, v3);
      v89 = 11;
      goto LABEL_417;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_418;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_203;
      v124 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFF619 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, method);
        byte_4AFF619 = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager_TypeInfo;
      }
      if ( !v124 )
        goto LABEL_418;
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v124,
        (System_String_o *)StringLiteral_5043/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].monitor,
        0LL);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          started = UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                      (UnityEngine_MonoBehaviour_o *)_4__this,
                      MasterData,
                      0LL);
          v4->fields.__2__current = (Il2CppObject *)started;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, (int32_t)started, v127, v128);
          v89 = 12;
          goto LABEL_417;
        }
      }
      else
      {
LABEL_105:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v130 = UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v130;
            v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(v86, (int32_t)v130, v131, v132);
            v89 = 14;
            goto LABEL_417;
          }
        }
      }
      goto LABEL_418;
    case 0xC:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( !byte_4B0189B )
      {
        sub_1BC3008(&DataManager_TypeInfo, method);
        byte_4B0189B = 1;
      }
      v129 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v129 = DataManager_TypeInfo;
      }
      if ( v129->static_fields->readMasterDataResult == 1 )
        goto LABEL_105;
      if ( !v129->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v129);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v203 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v203, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v203;
      v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v86, (int32_t)v203, v204, v205);
      v89 = 13;
      goto LABEL_417;
    case 0xD:
      p_fields->__1__state = -1;
      goto LABEL_378;
    case 0xE:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( !byte_4B0189C )
      {
        sub_1BC3008(&DataManager_TypeInfo, method);
        byte_4B0189C = 1;
      }
      v133 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v133 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v133->static_fields->updateMasterDataResult;
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_40363780((NetworkManager_o *)this, method);
          v222 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v222);
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__35_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v223 = UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v223;
              v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BC2FAC(v86, (int32_t)v223, v224, v225);
              v89 = 17;
              goto LABEL_417;
            }
          }
        }
        goto LABEL_418;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_418;
        _4__this->fields.isErrorDialog = 1;
        v136 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v137 = LocalizationManager__Get((System_String_o *)StringLiteral_9177/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v135);
        v138 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v138, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v136 )
          goto LABEL_418;
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
        v76 = (const MethodInfo_38DFD48 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_127:
        if ( _4__this->fields.isErrorDialog )
        {
          v139 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v139, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v139;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, (int32_t)v139, v140, v141);
          v89 = 15;
          goto LABEL_417;
        }
        if ( v4->fields._updateMasterResult_5__9 == 6 )
        {
LABEL_346:
          v4->fields._waitForServerTime_5__7 = 0LL;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._waitForServerTime_5__7, 0, v2, v3);
          v4->fields._wait_5__8 = 0LL;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._wait_5__8, 0, v233, v234);
LABEL_378:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_418;
          DataManager__Initialize((DataManager_o *)this, 0LL);
          if ( !v4->fields.isReboot && !v4->fields._isCacheCheck_5__3 )
          {
            v4->fields._isCacheCheck_5__3 = 1;
            v257 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v257 = ManagementManager_TypeInfo;
            }
            if ( UnityEngine_PlayerPrefs__HasKey(v257->static_fields->RebootCacheClearKey, 0LL) )
            {
              v258 = (Il2CppObject *)sub_1BC3254(ManagementManager___c__DisplayClass35_0_TypeInfo);
              System_Object___ctor(v258, 0LL);
              v259 = v4;
              v4->fields.__8__1 = (struct ManagementManager___c__DisplayClass35_0_o *)v258;
              p__8__1 = (CGThumbnailListItem_o *)&v4->fields.__8__1;
              sub_1BC2FAC(p__8__1, (int32_t)v258, v261, v262);
              if ( !p__8__1->klass )
                goto LABEL_418;
              LOWORD(p__8__1->klass->_1.name) = 0;
              v263 = v76;
              v265 = SingletonMonoBehaviour_object___get_Instance(*v76);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v266 = LocalizationManager__Get((System_String_o *)StringLiteral_7386/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v264);
              v268 = LocalizationManager__Get((System_String_o *)StringLiteral_7384/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v267);
              v270 = LocalizationManager__Get((System_String_o *)StringLiteral_7383/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v269);
              v272 = LocalizationManager__Get((System_String_o *)StringLiteral_7382/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v271);
              klass = (Il2CppObject *)p__8__1->klass;
              v274 = v272;
              v275 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
              CommonConfirmDialog_ClickDelegate___ctor(
                v275,
                klass,
                Method_ManagementManager___c__DisplayClass35_0__startCheckAll_b__0__,
                0LL);
              if ( !v265 )
                goto LABEL_418;
              CommonUI__OpenConfirmDecideDlg(
                (CommonUI_o *)v265,
                v266,
                v268,
                v270,
                v274,
                v275,
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
              v76 = v263;
              v4 = v259;
LABEL_60:
              _8__1 = v4->fields.__8__1;
              if ( !_8__1 )
                goto LABEL_418;
              if ( !_8__1->fields.confirmed )
              {
                v219 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v219, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v219;
                v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                sub_1BC2FAC(v86, (int32_t)v219, v220, v221);
                v89 = 8;
                goto LABEL_417;
              }
              if ( _8__1->fields.isDecide )
              {
                if ( !_4__this )
                  goto LABEL_418;
                ManagementManager__startUpCacheClear((ManagementManager_o *)this, method);
              }
              v4->fields.__8__1 = 0LL;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__1, 0, v2, v3);
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
            goto LABEL_418;
          CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_418;
          this = (ManagementManager__startCheckAll_d__35_o *)DataManager__readMasterVersion((DataManager_o *)this, 0LL);
          if ( !_4__this )
            goto LABEL_418;
          v290 = UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                   (UnityEngine_MonoBehaviour_o *)_4__this,
                   (System_Collections_IEnumerator_o *)this,
                   0LL);
          v4->fields.__2__current = (Il2CppObject *)v290;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, (int32_t)v290, v291, v292);
          v89 = 9;
          goto LABEL_417;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_418;
      }
      _4__this->fields.isErrorDialog = 1;
      v227 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v228 = LocalizationManager__Get((System_String_o *)StringLiteral_9178/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v226);
      v229 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v229, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v227 )
        goto LABEL_418;
      CommonUI__OpenRetryDialog((CommonUI_o *)v227, (System_String_o *)StringLiteral_1/*""*/, v228, v229, 0, 0LL);
      v76 = (const MethodInfo_38DFD48 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_344:
      if ( _4__this->fields.isErrorDialog )
      {
        v230 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v230, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v230;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v230, v231, v232);
        v89 = 16;
        goto LABEL_417;
      }
      goto LABEL_346;
    case 0xF:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_127;
      goto LABEL_418;
    case 0x10:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_418;
      goto LABEL_344;
    case 0x11:
      v4->fields.__2__current = 0LL;
      v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      LODWORD(v86[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
      sub_1BC2FAC(v86, 0, v2, v3);
      v89 = 18;
      goto LABEL_417;
    case 0x12:
      p_fields->__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_204;
      goto LABEL_137;
    case 0x13:
      p_fields->__1__state = -1;
LABEL_137:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v142 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v142, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v142;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v142, v143, v144);
        v89 = 19;
        goto LABEL_417;
      }
LABEL_204:
      v4->fields._isLoad_5__4 = 0;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_418;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_310:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_418;
        if ( !BYTE2(this->fields.__8__1) )
        {
          v216 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v216, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v216;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, (int32_t)v216, v217, v218);
          v89 = 20;
          goto LABEL_417;
        }
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_418;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12460/*"SYSTEM"*/,
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
            SoundManager__playBgm((System_String_o *)StringLiteral_9240/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_418;
            CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_324:
            v210 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v210, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v210;
            v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(v86, (int32_t)v210, v211, v212);
            v89 = 21;
            goto LABEL_417;
          }
LABEL_146:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          if ( AssetManager__getDownloadSize(0LL) >= 1 )
          {
            v145 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v145, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v145;
            v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(v86, (int32_t)v145, v146, v147);
            v89 = 22;
            goto LABEL_417;
          }
        }
LABEL_325:
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__SetOnlineStatus(0LL);
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_40363780((NetworkManager_o *)this, method);
          v213 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v213, 0.1, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v213;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, (int32_t)v213, v214, v215);
          v89 = 23;
          goto LABEL_417;
        }
        goto LABEL_418;
      }
LABEL_207:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_212:
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__8__1) )
            {
              v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v200, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v200;
              v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BC2FAC(v86, (int32_t)v200, v201, v202);
              v89 = 24;
              goto LABEL_417;
            }
            this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v163 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12460/*"SYSTEM"*/,
                       _4__this->fields.downloadParallelMax,
                       0LL);
              v164 = UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v163,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)v164;
              v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BC2FAC(v86, (int32_t)v164, v165, v166);
              v89 = 25;
              goto LABEL_417;
            }
          }
        }
        goto LABEL_418;
      }
LABEL_217:
      v167 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      LocalizationManager__LoadAssetData((const MethodInfo *)v167);
LABEL_220:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4B0189E )
      {
        sub_1BC3008(&LocalizationManager_TypeInfo, method);
        byte_4B0189E = 1;
      }
      v168 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v168 = LocalizationManager_TypeInfo;
      }
      if ( v168->static_fields->isBusySetAssetData )
      {
        v169 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v169, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v169;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v169, v170, v171);
        v89 = 28;
        goto LABEL_417;
      }
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_231:
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_4B0189F )
      {
        sub_1BC3008(&FSUtility_TypeInfo, method);
        byte_4B0189F = 1;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)FSUtility_TypeInfo;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)FSUtility_TypeInfo;
      }
      if ( this[1].fields._waitForServerTime_5__7->klass )
      {
        v172 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v172, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v172;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v172, v173, v174);
        v89 = 29;
        goto LABEL_417;
      }
      if ( v4->fields._readResult_5__2 == 1 )
      {
        if ( !_4__this )
          goto LABEL_418;
        _4__this->fields.isReadAuth = 0;
        v175 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v175,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__35_o *)NetworkManager__getRequest_object_(
                                                             v175,
                                                             (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( !this )
          goto LABEL_418;
        AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_245:
        v176 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v176, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v176;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v176, v177, v178);
        v89 = 30;
        goto LABEL_417;
      }
LABEL_246:
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
        goto LABEL_418;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, 0LL);
LABEL_254:
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__IsBusyInitialize(0LL) )
      {
        v179 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v179, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v179;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v179, v180, v181);
        v89 = 31;
        goto LABEL_417;
      }
      v4->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_259:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (ManagementManager__startCheckAll_d__35_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_418;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v4->fields._overrideAssetSoundNameWaitCount_5__5;
        v4->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v183 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v183, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v183;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, (int32_t)v183, v184, v185);
          v89 = 32;
          goto LABEL_417;
        }
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      CommonUI__InitializeCommonUIAsset((CommonUI_o *)this, 0LL);
LABEL_267:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( LOBYTE(this[9].monitor) )
      {
        v186 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v186, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v186;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v186, v187, v188);
        v89 = 33;
        goto LABEL_417;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__initializeAssetStorage(0LL);
LABEL_273:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v189 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v189, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v189;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v189, v190, v191);
        v89 = 34;
        goto LABEL_417;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_278:
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( LOBYTE(this[5].fields._updateMasterResult_5__9) )
      {
        v192 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v192, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v192;
        v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v86, (int32_t)v192, v193, v194);
        v89 = 35;
        goto LABEL_417;
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
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_418;
        this = (ManagementManager__startCheckAll_d__35_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_418;
          CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_351:
          v235 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v235, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v235;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, (int32_t)v235, v236, v237);
          v89 = 37;
          goto LABEL_417;
        }
LABEL_296:
        if ( _4__this )
        {
          ManagementManager__BuildInfoOff(_4__this, method);
          v4->fields.__2__current = 0LL;
          v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v86, 0, v198, v199);
          v89 = 38;
          goto LABEL_417;
        }
        goto LABEL_418;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( !SoundManager__isPlayBgm((System_String_o *)StringLiteral_9240/*"NOW_LOADING"*/, 0LL) )
      {
LABEL_294:
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_418;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
        goto LABEL_296;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__fadeoutBgm(1.0, 0LL);
      v195 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v195, 1.0, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v195;
      v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v86, (int32_t)v195, v196, v197);
      v89 = 36;
LABEL_417:
      LODWORD(v86[-1].fields._ThumbnailSpritePath_k__BackingField) = v89;
      return 1;
    case 0x14:
      p_fields->__1__state = -1;
      goto LABEL_310;
    case 0x15:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( !CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_325;
      goto LABEL_324;
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
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_217;
      v4->fields._isLoad_5__4 = 1;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_4B0189D )
      {
        sub_1BC3008(&LogoMain_TypeInfo, v148);
        byte_4B0189D = 1;
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
        SoundManager__playBgm((System_String_o *)StringLiteral_9240/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_169:
      v150 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v150, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v150;
      v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v86, (int32_t)v150, v151, v152);
      v89 = 26;
      goto LABEL_417;
    case 0x1A:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_169;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_305:
      v206 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v206, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v206;
      v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v86, (int32_t)v206, v207, v208);
      v89 = 27;
      goto LABEL_417;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_305;
      v153 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v153 = (_QWORD *)sub_1BC3020(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v154 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v153, v153[4]);
      OverwriteAssetSoundName__PlaySystemSe(v154, 0, 0, 0LL);
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
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
        goto LABEL_418;
      if ( !_4__this->fields.isReadAuth )
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
      this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_418;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_351;
      v155 = Method_ManagementManager__startCheckAll_d__35_MoveNext__;
      if ( (*((_BYTE *)Method_ManagementManager__startCheckAll_d__35_MoveNext__ + 83) & 2) != 0 )
        v155 = (_QWORD *)sub_1BC3020(Method_ManagementManager__startCheckAll_d__35_MoveNext__);
      v156 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v155, v155[4]);
      OverwriteAssetSoundName__PlaySystemSe(v156, 0, 0, 0LL);
      goto LABEL_294;
    case 0x26:
      p_fields->__1__state = -1;
      v157 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v157 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__35_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v157->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Notiffication = OptionManager__GetNotiffication(0LL);
        OptionManager__SetNotiffication(Notiffication, 1, 0LL);
        v160 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v160 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v160->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_418;
      _4__this->fields._IsInitialized = 1;
      _4__this->fields.isInitializingData = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, v158);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, v161);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_418;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ManagementManager__startCheckAll_d__35_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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