void __fastcall ManagementManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v13; // x1
  struct ManagementManager_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct ManagementManager_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ManagementManager_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_418631B & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_8180/*"IsNotificationStatusSend"*/, v8);
    sub_B2C35C(&StringLiteral_8192/*"IsReBootCacheClearKey"*/, v9);
    sub_B2C35C(&StringLiteral_20034/*"ja-JP"*/, v10);
    sub_B2C35C(&StringLiteral_23451/*"yyyy年MM月dd日HH時mm分"*/, v11);
    byte_418631B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ManagementManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_8180/*"IsNotificationStatusSend"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8180/*"IsNotificationStatusSend"*/;
  sub_B2C2F8(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = ManagementManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_8192/*"IsReBootCacheClearKey"*/;
  v14->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8192/*"IsReBootCacheClearKey"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->RebootCacheClearKey, v15, v16, v17, v18, v19, v20, v21);
  v22 = ManagementManager_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_23451/*"yyyy年MM月dd日HH時mm分"*/;
  v22->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_23451/*"yyyy年MM月dd日HH時mm分"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->DATE_TIME_DISP_FORMAT, v23, v24, v25, v26, v27, v28, v29);
  v30 = ManagementManager_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_20034/*"ja-JP"*/;
  v30->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20034/*"ja-JP"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->DEFAULT_CULTURE_NAME, v31, v32, v33, v34, v35, v36, v37);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_418631A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_418631A = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  Il2CppObject *v26; // x19
  float v27; // s0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  Il2CppObject *v48; // x19
  __int64 v49; // x0
  __int64 v50; // x0
  float v51; // [xsp+Ch] [xbp-24h] BYREF

  v51 = ratio;
  if ( (byte_4186308 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, errorText);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_671/*"):"*/, v9);
    sub_B2C35C(&StringLiteral_6706/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_B2C35C(&StringLiteral_640/*"(ratio: "*/, v11);
    byte_4186308 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_34;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6706/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_B2C374(string___TypeInfo, 5LL);
    if ( this )
    {
      v18 = (System_String_array *)this;
      if ( !errorText || (this = (ManagementManager_o *)sub_B2C41C(errorText, this->klass->_1.element_class)) != 0LL )
      {
        if ( !v18->max_length )
          goto LABEL_35;
        v18->m_Items[0] = errorText;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)v18->m_Items,
          (System_Int32_array **)errorText,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        this = (ManagementManager_o *)StringLiteral_640/*"(ratio: "*/;
        if ( StringLiteral_640/*"(ratio: "*/ )
        {
          this = (ManagementManager_o *)sub_B2C41C(StringLiteral_640/*"(ratio: "*/, v18->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_36;
          v25 = (System_Int32_array **)StringLiteral_640/*"(ratio: "*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v18->max_length <= 1 )
          goto LABEL_35;
        v18->m_Items[1] = (System_String_o *)v25;
        sub_B2C2F8((BattleServantConfConponent_o *)&v18->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
        this = (ManagementManager_o *)System_Single__ToString(v27, (const MethodInfo *)&v51);
        v34 = (System_Int32_array **)this;
        if ( !this || (this = (ManagementManager_o *)sub_B2C41C(this, v18->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v18->max_length <= 2 )
            goto LABEL_35;
          v18->m_Items[2] = (System_String_o *)v34;
          sub_B2C2F8((BattleServantConfConponent_o *)&v18->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
          this = (ManagementManager_o *)StringLiteral_671/*"):"*/;
          if ( StringLiteral_671/*"):"*/ )
          {
            this = (ManagementManager_o *)sub_B2C41C(StringLiteral_671/*"):"*/, v18->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_36;
            v41 = (System_Int32_array **)StringLiteral_671/*"):"*/;
          }
          else
          {
            v41 = 0LL;
          }
          if ( v18->max_length <= 3 )
            goto LABEL_35;
          v18->m_Items[3] = (System_String_o *)v41;
          sub_B2C2F8((BattleServantConfConponent_o *)&v18->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
          this = (ManagementManager_o *)sub_B2C41C(exceptionMessage, v18->obj.klass->_1.element_class);
          if ( this )
          {
            if ( v18->max_length > 4 )
            {
              v18->m_Items[4] = exceptionMessage;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v18->m_Items[4],
                (System_Int32_array **)exceptionMessage,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
              v48 = (Il2CppObject *)System_String__Concat_44385656(v18, 0LL);
              if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError(v48, 0LL);
              return;
            }
LABEL_35:
            v49 = sub_B2C460(this);
            sub_B2C400(v49, 0LL);
          }
        }
      }
LABEL_36:
      v50 = sub_B2C454();
      sub_B2C400(v50, 0LL);
    }
LABEL_34:
    sub_B2C434(this, errorText);
  }
  v26 = (Il2CppObject *)System_String__Concat_44305532(errorText, exceptionMessage, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v26, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4186304 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_4186304 = 1;
  }
  if ( !SingletonMonoBehaviour_WarBoardManager___CheckInstance(
          (SingletonMonoBehaviour_WarBoardManager__o *)this,
          (const MethodInfo_284190C *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4186318 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, boot);
    byte_4186318 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v4);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_4186317 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186317 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_B2C434(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4186302 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, v1);
    byte_4186302 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418630E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_418630E = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_40611620(0LL);
}


void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    UnityEngine_Application__Quit_40611620(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418630B & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, method);
    byte_418630B = 1;
  }
  v3 = sub_B2C42C(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
  ManagementManager__InitializeAdManagerAndFirebase_d__34___ctor(
    (ManagementManager__InitializeAdManagerAndFirebase_d__34_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4186315 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, method);
    byte_4186315 = 1;
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_4185D97 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, method);
    byte_4185D97 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4186316 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_4186316 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__CommunicationIsBusy(0LL) )
    return 1;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__LoadIsBusy(0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  return WebViewManager__get_IsBusy(Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4186309 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22807/*"true"*/, message);
    byte_4186309 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_22807/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagementManager_c *v3; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4186319 & 1) == 0 )
  {
    sub_B2C35C(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_B2C35C(&ManagementManager_TypeInfo, v2);
    byte_4186319 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  DEFAULT_CULTURE_NAME = v3->static_fields->DEFAULT_CULTURE_NAME;
  if ( (BYTE3(System_Globalization_CultureInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
  }
  SpecificCulture = System_Globalization_CultureInfo__CreateSpecificCulture(DEFAULT_CULTURE_NAME, 0LL);
  System_Globalization_CultureInfo__set_CurrentCulture(SpecificCulture, 0LL);
  UnityEngine_Analytics_Analytics__set_enabled(0, 0LL);
  UnityEngine_Analytics_Analytics__set_deviceStatsEnabled(0, 0LL);
  UnityEngine_Analytics_Analytics__set_limitUserTracking(1, 0LL);
  UnityEngine_Analytics_Analytics__set_initializeOnStartup(0, 0LL);
}


void __fastcall ManagementManager__RebootCacheClear(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0
  ManagementManager_c *v3; // x0

  if ( (byte_4186303 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, v1);
    byte_4186303 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v2->static_fields->RebootCacheClearKey, 0LL) )
  {
    v3 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
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
  UnityEngine_GameObject_o *gameObject; // x20
  intptr_t v7; // w21
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_IEnumerator_o *v11; // x1
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_4186305 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&System_Type_TypeInfo, v4);
    sub_B2C35C(&UnityGamingServicesBehaviour_var, v5);
    byte_4186305 = 1;
  }
  UnityEngine_Application__set_targetFrameRate(30, 0LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__TransitionSaveData(0LL);
  UnityEngine_Screen__set_autorotateToLandscapeLeft(1, 0LL);
  UnityEngine_Screen__set_autorotateToLandscapeRight(1, 0LL);
  UnityEngine_Screen__set_autorotateToPortrait(0, 0LL);
  UnityEngine_Screen__set_autorotateToPortraitUpsideDown(0, 0LL);
  UnityEngine_Screen__set_orientation(5, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = (int)UnityGamingServicesBehaviour_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12.fields.value = v7;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0LL);
  if ( !gameObject )
    sub_B2C434(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v9);
  v11 = ManagementManager__startCheckAll(this, 0, 0, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v3; // x1

  if ( this->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v3) )
      UnityEngine_Application__Quit_40611620(0LL);
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4186314 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4186314 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
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
  _BOOL8 _28617756; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v15; // x1

  if ( (byte_4186313 & 1) == 0 )
  {
    sub_B2C35C(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&TutorialFlag_TypeInfo, v8);
    byte_4186313 = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    goto LABEL_11;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = TutorialFlag__Get_28617756(102, 0LL);
  if ( _28617756 )
  {
LABEL_11:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v13,
                                                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B2C434(0LL, v15);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_28617756, v11, v12);
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4186311 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4186311 = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  AvalonSceneManager__transitionScene(Instance, *(&this->fields.scenetype + 1), 0, 0LL, 0LL);
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
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v14; // x1

  if ( (byte_4186310 & 1) == 0 )
  {
    sub_B2C35C(&Method_ManagementManager_callbackTopHome__, result);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&TutorialFlag_TypeInfo, v8);
    byte_4186310 = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    goto LABEL_11;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(102, 0LL) )
  {
LABEL_11:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v12,
                                                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B2C434(0LL, v14);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
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
  UnityEngine_Camera_o *Component_srcLineSprite; // x0
  __int64 v13; // x1
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  AvalonVideoPlayer_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_4186306 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_4190/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_B2C35C(&StringLiteral_9214/*"MovieRoot"*/, v7);
    byte_4186306 = 1;
  }
  p_videoPlayer_k__BackingField = &this->fields._videoPlayer_k__BackingField;
  videoPlayer_k__BackingField = (UnityEngine_Object_o *)this->fields._videoPlayer_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(videoPlayer_k__BackingField, 0LL, 0LL) )
  {
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4190/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v11 = (UnityEngine_GameObject_o *)sub_B2C42C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_9214/*"MovieRoot"*/, 0LL);
    if ( !v11
      || (v14 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                         v11,
                                         (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v14,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields._videoPlayer_k__BackingField,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20),
          !v10)
      || (v21 = *p_videoPlayer_k__BackingField,
          Component_srcLineSprite = (UnityEngine_Camera_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v10,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v21) )
    {
      sub_B2C434(Component_srcLineSprite, v13);
    }
    AvalonVideoPlayer__initialize(v21, Component_srcLineSprite, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_31331952(v11, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4186300 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_4186300 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  return HIDWORD(Instance->fields.titleLabel);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4186301 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, v1);
    byte_4186301 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
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
void __fastcall ManagementManager__reboot(ManagementManager_o *this, bool isLogin, const MethodInfo *method)
{
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
  ManagementManager_c *v20; // x0
  ScriptManager_o *Instance; // x0
  __int64 v22; // x1
  AdManager_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *v26; // x1

  if ( (byte_4186307 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, isLogin);
    sub_B2C35C(&CTouch_TypeInfo, v5);
    sub_B2C35C(&CommonEffectManager_TypeInfo, v6);
    sub_B2C35C(&FirebaseScript_TypeInfo, v7);
    sub_B2C35C(&System_GC_TypeInfo, v8);
    sub_B2C35C(&ManagementManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v18);
    sub_B2C35C(&SoundManager_TypeInfo, v19);
    byte_4186307 = 1;
  }
  if ( !LOBYTE(this->fields.scenetype) )
  {
    LOBYTE(this->fields.scenetype) = 1;
    v20 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v20 = ManagementManager_TypeInfo;
    }
    v20->static_fields->isDuringStartup = 1;
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    ScriptManager__reboot(Instance, 1, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    CommonUI__Reboot((CommonUI_o *)Instance, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__Reboot(0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    SwitchParameterDisplayManager__Reboot((SwitchParameterDisplayManager_o *)Instance, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    CommonEffectManager__Reboot(0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__reboot(0LL);
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__reboot(0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
LABEL_38:
      sub_B2C434(Instance, v22);
    ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_43492776(0LL);
    v23 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v23 )
      sub_B2C434(0LL, v24);
    AdManager__Initialize(v23, 2, 0LL);
    if ( (BYTE3(FirebaseScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    }
    FirebaseScript__Initialize(0LL);
    v26 = ManagementManager__startCheckAll(this, 1, isLogin, v25);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_418630F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_418630F = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_B2C42C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_B2C434(v7, v8);
  NetworkManager__RequestLogin(Instance, v6, 1, 0LL);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4186312 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4186312 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_B2C42C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_B2C434(v7, v8);
  NetworkManager__RequestLogin(Instance, v6, 1, 0LL);
}


void __fastcall ManagementManager__set_videoPlayer(
        ManagementManager_o *this,
        AvalonVideoPlayer_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._videoPlayer_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._videoPlayer_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall ManagementManager__startCheckAll(
        ManagementManager_o *this,
        bool isReboot,
        bool isLogin,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_418630A & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager__startCheckAll_d__33_TypeInfo, isReboot);
    byte_418630A = 1;
  }
  v7 = sub_B2C42C(ManagementManager__startCheckAll_d__33_TypeInfo);
  ManagementManager__startCheckAll_d__33___ctor((ManagementManager__startCheckAll_d__33_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 32) = isReboot;
  *(_BYTE *)(v7 + 56) = isLogin;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_418630C & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_418630C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_418630D & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    sub_B2C35C(&ScrTerminalListTop_TypeInfo, v2);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_418630D = 1;
  }
  MovieFileMerge__Delete_24475528(0LL);
  v5 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C9E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4183C9E = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
  AssetStorageCache__ClearCacheAll(1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
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
  __int64 v4; // x1
  int32_t _1__state; // w8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v7; // x19
  AdManager_o *Instance; // x0
  __int64 v9; // x1
  AdManager_o *v10; // x0
  __int64 v11; // x1

  if ( (byte_4184229 & 1) == 0 )
  {
    sub_B2C35C(&FirebaseScript_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_4184229 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v9);
    AdManager__Initialize(Instance, 0, 0LL);
    v10 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_B2C434(0LL, v11);
    AdManager__Initialize(v10, 1, 0LL);
    if ( (BYTE3(FirebaseScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    }
    FirebaseScript__Initialize(0LL);
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
      this->fields.__2__current = (Il2CppObject *)v7;
      sub_B2C2F8(&this->fields.__2__current, v7);
      result = 1;
      this->fields.__1__state = 1;
    }
  }
  return result;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  CommonUI_o *Instance; // x19
  System_Action_o *v12; // x20

  if ( (byte_4184228 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, flag);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__, v6);
    sub_B2C35C(&ManagementManager___c__DisplayClass33_1_TypeInfo, v7);
    byte_4184228 = 1;
  }
  v8 = sub_B2C42C(ManagementManager___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_B2C2F8(v8 + 24, this),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v9, v10);
  }
  CommonUI__CloseConfirmDialog_17971588(Instance, v12, 0LL);
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
  struct ManagementManager___c__DisplayClass33_0_o *v3; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (CS___8__locals1->fields.isDecide = this->fields.flag, (v3 = this->fields.CS___8__locals1) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  v3->fields.confirmed = 1;
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
  ManagementManager__startCheckAll_d__33_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
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
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v71; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ManagementManager_c *v74; // x0
  bool Notiffication; // w0
  ManagementManager_c *v76; // x0
  const MethodInfo_2841668 *v77; // x0
  NetworkManager_ResultCallbackFunc_o *v78; // x21
  UnityEngine_WaitForEndOfFrame_o *v79; // x20
  CrashReporter_o *v80; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *started; // x0
  Il2CppObject **v83; // x19
  int v84; // w8
  Il2CppObject **p__8__1; // x21
  Il2CppObject *v86; // x8
  Il2CppObject *wait_5__8; // x1
  int v88; // w8
  System_Collections_IEnumerator_o *v89; // x0
  DataManager_c *v90; // x0
  int32_t updateMasterResult_5__9; // w8
  CommonUI_o *v92; // x21
  System_String_o *v93; // x22
  ErrorDialog_ClickDelegate_o *v94; // x23
  UnityEngine_WaitForEndOfFrame_o *v95; // x20
  UnityEngine_WaitForEndOfFrame_o *v96; // x20
  ManagementManager__startCheckAll_d__33_o *v97; // x21
  __int64 v98; // x0
  __int64 v99; // x1
  System_Collections_IEnumerator_o *v100; // x0
  UnityEngine_WaitForEndOfFrame_o *v101; // x20
  DataManager_c *v102; // x0
  UnityEngine_Coroutine_o *v103; // x0
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v105; // x21
  UnityEngine_WaitForEndOfFrame_o *v106; // x20
  Il2CppObject *waitForServerTime_5__7; // x1
  __int64 v108; // x0
  UnityEngine_WaitForEndOfFrame_o *v109; // x20
  UnityEngine_WaitForEndOfFrame_o *v110; // x20
  UnityEngine_WaitForEndOfFrame_o *v111; // x20
  __int64 v112; // x1
  LogoMain_c *v113; // x0
  UnityEngine_WaitForEndOfFrame_o *v114; // x20
  System_Collections_IEnumerator_o *v115; // x0
  UnityEngine_Coroutine_o *v116; // x0
  LocalizationManager_c *v117; // x0
  UnityEngine_WaitForEndOfFrame_o *v118; // x20
  FSUtility_c *v119; // x0
  UnityEngine_WaitForEndOfFrame_o *v120; // x20
  UnityEngine_WaitForEndOfFrame_o *v121; // x20
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v123; // x20
  UnityEngine_WaitForEndOfFrame_o *v124; // x20
  UnityEngine_WaitForSeconds_o *v125; // x20
  __int64 v126; // x0
  UnityEngine_WaitForEndOfFrame_o *v127; // x20
  UnityEngine_WaitForEndOfFrame_o *v128; // x20
  __int64 v129; // x1
  __int64 v130; // x1
  EncryptedPlayerPrefs_c *v131; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v133; // x20
  ManagerConfig_c *v134; // x0
  UnityEngine_WaitForEndOfFrame_o *v135; // x20
  UnityEngine_WaitForSeconds_o *v136; // x20
  UnityEngine_WaitForEndOfFrame_o *v137; // x20
  UnityEngine_WaitForEndOfFrame_o *v138; // x20
  UnityEngine_Coroutine_o *v139; // x0
  CommonUI_o *v140; // x21
  System_String_o *v141; // x22
  ErrorDialog_ClickDelegate_o *v142; // x23
  UnityEngine_WaitForEndOfFrame_o *v143; // x20
  UnityEngine_WaitForEndOfFrame_o *v144; // x20
  UnityEngine_WaitForEndOfFrame_o *v145; // x20
  __int64 v146; // x0
  __int64 v147; // x0
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v151; // x0
  ManagerConfig_c *v152; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v154; // x22
  ErrorDialog_ClickDelegate_o *v155; // x23
  int32_t readResult_5__2; // w8
  int32_t *p_readResult_5__2; // x21
  NetworkManager_ResultCallbackFunc_o *v158; // x21
  UnityEngine_WaitForEndOfFrame_o *v159; // x20
  ManagementManager_c *v160; // x0
  Il2CppObject *v161; // x22
  CommonUI_o *v162; // x22
  System_String_o *v163; // x23
  System_String_o *v164; // x24
  System_String_o *v165; // x25
  System_String_o *v166; // x0
  Il2CppObject *v167; // x28
  System_String_o *v168; // x26
  CommonConfirmDialog_ClickDelegate_o *v169; // x27
  UnityEngine_WaitForEndOfFrame_o *v170; // x20
  Il2CppObject *v171; // x19
  System_String_o *v172; // x19
  System_String_o *DispFriendCode; // x22
  CommonUI_o *v174; // x22
  System_String_o *v175; // x23
  ManagementManager__startCheckAll_d__33_o *v176; // x24
  void *v177; // x25
  System_String_o *v178; // x21
  Il2CppObject *v179; // x2
  System_String_o *v180; // x19
  ErrorDialog_ClickDelegate_o *v181; // x23
  ManagementManager_c *v182; // x0
  UnityEngine_Coroutine_o *v183; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-90h]
  int v185; // [xsp+38h] [xbp-58h] BYREF
  int v186; // [xsp+3Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_418422A & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&AtlasManager_TypeInfo, v4);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_B2C35C(&CommonServicePluginScript_TypeInfo, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v9);
    sub_B2C35C(&FSUtility_TypeInfo, v10);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&LogoMain_TypeInfo, v14);
    sub_B2C35C(&Method_ManagementManager_EndLogDialog__, v15);
    sub_B2C35C(&Method_ManagementManager_EndQuitDialog__, v16);
    sub_B2C35C(&Method_ManagementManager_EndRetryDialog__, v17);
    sub_B2C35C(&Method_ManagementManager_callbackAccountRegist__, v18);
    sub_B2C35C(&Method_ManagementManager_callbackTopGameData__, v19);
    sub_B2C35C(&ManagementManager_TypeInfo, v20);
    sub_B2C35C(&ManagerConfig_TypeInfo, v21);
    sub_B2C35C(&Method_NetworkManager_getRequest_AccountRegistRequest___, v22);
    sub_B2C35C(&Method_NetworkManager_getRequest_TopGameDataRequest___, v23);
    sub_B2C35C(&NetworkManager_TypeInfo, v24);
    sub_B2C35C(&OptionManager_TypeInfo, v25);
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, v26);
    sub_B2C35C(&NetworkManager_ReadResult_TypeInfo, v27);
    sub_B2C35C(&ResolutionManager_TypeInfo, v28);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v29);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v30);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v32);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v33);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v35);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v36);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v37);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v38);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v39);
    sub_B2C35C(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v40);
    sub_B2C35C(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v41);
    sub_B2C35C(&SoundManager_TypeInfo, v42);
    sub_B2C35C(&string___TypeInfo, v43);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v44);
    sub_B2C35C(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__, v45);
    sub_B2C35C(&ManagementManager___c__DisplayClass33_0_TypeInfo, v46);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v47);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v48);
    sub_B2C35C(&StringLiteral_7290/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v49);
    sub_B2C35C(&StringLiteral_9352/*"NOW_LOADING"*/, v50);
    sub_B2C35C(&StringLiteral_9285/*"NETWORK_ERROR_DISK_FULL"*/, v51);
    sub_B2C35C(&StringLiteral_6321/*"F39UThNh"*/, v52);
    sub_B2C35C(&StringLiteral_7293/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v53);
    sub_B2C35C(&StringLiteral_8915/*"Management"*/, v54);
    sub_B2C35C(&StringLiteral_7291/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v55);
    sub_B2C35C(&StringLiteral_9700/*"NotifyRequestPermissionsResultFromPlugin"*/, v56);
    sub_B2C35C(&StringLiteral_7289/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v57);
    sub_B2C35C(&StringLiteral_5094/*"DataServerFolderName"*/, v58);
    sub_B2C35C(&StringLiteral_16333/*"android.permission.POST_NOTIFICATIONS"*/, v59);
    sub_B2C35C(&StringLiteral_9293/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v60);
    sub_B2C35C(&StringLiteral_9286/*"NETWORK_ERROR_FIEND_CODE"*/, v61);
    sub_B2C35C(&StringLiteral_12568/*"SYSTEM"*/, v62);
    sub_B2C35C(&StringLiteral_1/*""*/, v63);
    sub_B2C35C(&StringLiteral_19911/*"ioqrk4Om"*/, v64);
    sub_B2C35C(&StringLiteral_1153/*"2pC0bIYM"*/, v65);
    sub_B2C35C(&StringLiteral_9287/*"NETWORK_ERROR_READ_AUTH"*/, v66);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_B2C35C(&StringLiteral_9294/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v67);
    byte_418422A = 1;
  }
  p_fields = &v2->fields;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      isReboot = v2->fields.isReboot;
      v2->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_113;
      v71 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v2->fields.__2__current = (Il2CppObject *)v71;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v71);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_113:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      LocalizationManager__Initialize(0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__initialize(0LL);
      if ( !_4__this )
        goto LABEL_487;
      v100 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v100;
      v83 = &v2->fields.__2__current;
      sub_B2C2F8(v83, v100);
      v84 = 2;
      goto LABEL_485;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      v89 = NetworkManager__Initialize((NetworkManager_o *)this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v89;
      v83 = &v2->fields.__2__current;
      sub_B2C2F8(v83, v89);
      v84 = 3;
      goto LABEL_485;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      AssetManager__Initialize((AssetManager_o *)this, 0LL);
      if ( (BYTE3(ResolutionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ResolutionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
      }
      ResolutionManager__Initialize(0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      OptionManager__Initialize(0LL);
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__Initialize(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v2->fields.isReboot )
      {
        v96 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v96, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v96;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v96);
        v84 = 4;
        goto LABEL_485;
      }
LABEL_106:
      this = (ManagementManager__startCheckAll_d__33_o *)sub_B2C374(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_487;
      v97 = this;
      v98 = StringLiteral_1153/*"2pC0bIYM"*/;
      if ( StringLiteral_1153/*"2pC0bIYM"*/ )
      {
        v98 = sub_B2C41C(StringLiteral_1153/*"2pC0bIYM"*/, v97->klass->_1.element_class);
        if ( !v98 )
          goto LABEL_407;
        v99 = StringLiteral_1153/*"2pC0bIYM"*/;
      }
      else
      {
        v99 = 0LL;
      }
      if ( !LODWORD(v97->fields.__2__current) )
        goto LABEL_406;
      *(_QWORD *)&v97->fields.isReboot = v99;
      sub_B2C2F8(&v97->fields.isReboot, v99);
      v98 = StringLiteral_6321/*"F39UThNh"*/;
      if ( StringLiteral_6321/*"F39UThNh"*/ )
      {
        v98 = sub_B2C41C(StringLiteral_6321/*"F39UThNh"*/, v97->klass->_1.element_class);
        if ( !v98 )
          goto LABEL_407;
        v129 = StringLiteral_6321/*"F39UThNh"*/;
      }
      else
      {
        v129 = 0LL;
      }
      if ( LODWORD(v97->fields.__2__current) <= 1 )
        goto LABEL_406;
      v97->fields.__4__this = (struct ManagementManager_o *)v129;
      sub_B2C2F8(&v97->fields.__4__this, v129);
      v98 = StringLiteral_19911/*"ioqrk4Om"*/;
      if ( !StringLiteral_19911/*"ioqrk4Om"*/ )
      {
        v130 = 0LL;
LABEL_325:
        if ( LODWORD(v97->fields.__2__current) > 2 )
        {
          v97->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v130;
          sub_B2C2F8(&v97->fields.__8__1, v130);
          v131 = EncryptedPlayerPrefs_TypeInfo;
          if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
            v131 = EncryptedPlayerPrefs_TypeInfo;
          }
          static_fields = v131->static_fields;
          static_fields->keys = (struct System_String_array *)v97;
          sub_B2C2F8(&static_fields->keys, v97);
          if ( !v2->fields.isReboot )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__CheckPermission(
                                                                   (System_String_o *)StringLiteral_16333/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !_4__this )
                  goto LABEL_487;
                _4__this->fields.isPermissionRequesting = 1;
                AndroidPermissionManager__RequestPermission(
                  (System_String_o *)StringLiteral_16333/*"android.permission.POST_NOTIFICATIONS"*/,
                  (System_String_o *)StringLiteral_8915/*"Management"*/,
                  (System_String_o *)StringLiteral_9700/*"NotifyRequestPermissionsResultFromPlugin"*/,
                  0LL);
LABEL_125:
                if ( _4__this->fields.isPermissionRequesting )
                {
                  v101 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v101, 0LL);
                  v2->fields.__2__current = (Il2CppObject *)v101;
                  v83 = &v2->fields.__2__current;
                  sub_B2C2F8(v83, v101);
                  v84 = 5;
                  goto LABEL_485;
                }
              }
            }
            else
            {
              if ( !_4__this )
                goto LABEL_487;
              _4__this->fields.isPermissionGranted = 1;
            }
            if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
            if ( this )
            {
              LocalNotificationManagerAndroid__RegisterNotificationChannel(
                (LocalNotificationManagerAndroid_o *)this,
                0LL);
              v145 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v145, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v145;
              v83 = &v2->fields.__2__current;
              sub_B2C2F8(v83, v145);
              v84 = 6;
              goto LABEL_485;
            }
LABEL_487:
            sub_B2C434(this, method);
          }
LABEL_330:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_487;
          this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, 0LL);
          v2->fields._readResult_5__2 = (int)this;
          if ( !_4__this )
            goto LABEL_487;
          this = (ManagementManager__startCheckAll_d__33_o *)_4__this->fields.debugInfoRootObject;
          if ( !this )
            goto LABEL_487;
          this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_GameObject__get_gameObject(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
          if ( !this )
            goto LABEL_487;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          ManagementManager__BuildInfoOff(_4__this, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          TerminalPramsManager__Load_SaveData(0LL);
          while ( 1 )
          {
            temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
            if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
            }
            FreeSize = CommonServicePluginScript__GetFreeSize(temporaryCachePath, 0LL);
            if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AndroidUtil_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
            }
            DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
            v151 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
            if ( FreeSize < v151 )
              FreeSize = v151;
            if ( FreeSize < 1 )
              break;
            v152 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v152 = ManagerConfig_TypeInfo;
            }
            if ( FreeSize >= v152->static_fields->LIMIT_FREE_SIZE )
              break;
            _4__this->fields.isErrorDialog = 1;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v154 = LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
            v155 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v155,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_EndRetryDialog__,
              0LL);
            if ( !Instance )
              goto LABEL_487;
            CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v154, v155, 0, 0LL);
LABEL_408:
            if ( _4__this->fields.isErrorDialog )
            {
              v170 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v170, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v170;
              v83 = &v2->fields.__2__current;
              sub_B2C2F8(v83, v170);
              v84 = 7;
              goto LABEL_485;
            }
          }
          p_readResult_5__2 = &v2->fields._readResult_5__2;
          readResult_5__2 = v2->fields._readResult_5__2;
          if ( readResult_5__2 )
          {
            if ( readResult_5__2 == 1 )
            {
              _4__this->fields.isReadAuth = 0;
              v158 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
              NetworkManager_ResultCallbackFunc___ctor(
                v158,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_callbackAccountRegist__,
                0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v158,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
              if ( this )
              {
                AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_434:
                v159 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v159, 0LL);
                v2->fields.__2__current = (Il2CppObject *)v159;
                v83 = &v2->fields.__2__current;
                sub_B2C2F8(v83, v159);
                v84 = 8;
                goto LABEL_485;
              }
              goto LABEL_487;
            }
            v171 = (Il2CppObject *)StringLiteral_1/*""*/;
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_487;
            if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, 0LL) )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v172 = LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
              if ( !this )
                goto LABEL_487;
              DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)this, 0LL);
            }
            else
            {
              if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AndroidUtil_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
              }
              DispFriendCode = AndroidUtil__GetFriendCodeFromOldDat(0LL);
              if ( System_String__IsNullOrEmpty(DispFriendCode, 0LL) )
              {
LABEL_467:
                v174 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v175 = LocalizationManager__Get((System_String_o *)StringLiteral_9287/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)j_il2cpp_value_box_0(
                                                                     NetworkManager_ReadResult_TypeInfo,
                                                                     p_readResult_5__2);
                if ( this )
                {
                  v176 = this;
                  v177 = (void *)((__int64 (__fastcall *)(ManagementManager__startCheckAll_d__33_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                  *p_readResult_5__2 = *(_DWORD *)j_il2cpp_object_unbox_0(v176);
                  v178 = (System_String_o *)StringLiteral_1/*""*/;
                  v179 = (Il2CppObject *)(v177 ? v177 : StringLiteral_1/*""*/);
                  v180 = System_String__Format_44301068(v175, v171, v179, 0LL);
                  v181 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v181,
                    (Il2CppObject *)_4__this,
                    Method_ManagementManager_EndQuitDialog__,
                    0LL);
                  if ( v174 )
                  {
                    CommonUI__OpenErrorDialog(v174, v178, v180, v181, 0, 0LL);
                    return 0;
                  }
                }
                goto LABEL_487;
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v172 = LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            }
            v171 = (Il2CppObject *)System_String__Format(v172, (Il2CppObject *)DispFriendCode, 0LL);
            goto LABEL_467;
          }
LABEL_435:
          v2->fields._isCacheCheck_5__3 = 0;
          goto LABEL_436;
        }
LABEL_406:
        v146 = sub_B2C460(v98);
        sub_B2C400(v146, 0LL);
      }
      v98 = sub_B2C41C(StringLiteral_19911/*"ioqrk4Om"*/, v97->klass->_1.element_class);
      if ( v98 )
      {
        v130 = StringLiteral_19911/*"ioqrk4Om"*/;
        goto LABEL_325;
      }
LABEL_407:
      v147 = sub_B2C454();
      sub_B2C400(v147, 0LL);
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_106;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_125;
      goto LABEL_487;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_330;
    case 7:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_487;
      goto LABEL_408;
    case 8:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_487;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_434;
      goto LABEL_435;
    case 9:
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_59;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( !byte_4184249 )
      {
        sub_B2C35C(&DataManager_TypeInfo, method);
        byte_4184249 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v2->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( (this[2].fields._updateMasterResult_5__9 & 0x4000000) != 0 && !this[2].fields.__1__state )
          j_il2cpp_runtime_class_init_0(this);
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_487;
      _4__this->fields.isReadGameData = 0;
      v105 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v105,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v105,
                                                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_487;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v106 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v106, 0LL);
      v2->fields._waitForServerTime_5__7 = v106;
      sub_B2C2F8(&v2->fields._waitForServerTime_5__7, v106);
      goto LABEL_160;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_487;
      if ( _4__this->fields.isReadGameData )
      {
        _4__this->fields.isReadGameData = 0;
        v78 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v78,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackTopGameData__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v78,
                                                             (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
        if ( !this )
          goto LABEL_487;
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v79 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v79, 0LL);
        v2->fields._wait_5__8 = v79;
        sub_B2C2F8(&v2->fields._wait_5__8, v79);
LABEL_66:
        wait_5__8 = (Il2CppObject *)v2->fields._wait_5__8;
        v2->fields.__2__current = wait_5__8;
        sub_B2C2F8(&v2->fields.__2__current, wait_5__8);
        v88 = 12;
      }
      else
      {
LABEL_160:
        waitForServerTime_5__7 = (Il2CppObject *)v2->fields._waitForServerTime_5__7;
        v2->fields.__2__current = waitForServerTime_5__7;
        sub_B2C2F8(&v2->fields.__2__current, waitForServerTime_5__7);
        v88 = 11;
      }
LABEL_162:
      v2->fields.__1__state = v88;
      return 1;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_487;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_66;
      v80 = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_418424A )
      {
        sub_B2C35C(&NetworkManager_TypeInfo, method);
        byte_418424A = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v80 )
        goto LABEL_487;
      CrashReporter__AddCustomKey(
        v80,
        (System_String_o *)StringLiteral_5094/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v2->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          started = UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                      (UnityEngine_MonoBehaviour_o *)_4__this,
                      MasterData,
                      0LL);
          v2->fields.__2__current = (Il2CppObject *)started;
          v83 = &v2->fields.__2__current;
          sub_B2C2F8(v83, started);
          v84 = 13;
          goto LABEL_485;
        }
      }
      else
      {
LABEL_137:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v2->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v103 = UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v2->fields.__2__current = (Il2CppObject *)v103;
            v83 = &v2->fields.__2__current;
            sub_B2C2F8(v83, v103);
            v84 = 15;
            goto LABEL_485;
          }
        }
      }
      goto LABEL_487;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( !byte_418424B )
      {
        sub_B2C35C(&DataManager_TypeInfo, method);
        byte_418424B = 1;
      }
      v102 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v102 = DataManager_TypeInfo;
      }
      if ( v102->static_fields->readMasterDataResult == 1 )
        goto LABEL_137;
      if ( (BYTE3(v102->vtable._0_Equals.methodPtr) & 4) != 0 && !v102->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v102);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v133 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v133, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v133;
      v83 = &v2->fields.__2__current;
      sub_B2C2F8(v83, v133);
      v84 = 14;
      goto LABEL_485;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_436;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( !byte_418424C )
      {
        sub_B2C35C(&DataManager_TypeInfo, method);
        byte_418424C = 1;
      }
      v90 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v90 = DataManager_TypeInfo;
      }
      v2->fields._updateMasterResult_5__9 = v90->static_fields->updateMasterDataResult;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      }
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v2->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_26282224((NetworkManager_o *)this, 0LL);
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v139 = UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v2->fields.__2__current = (Il2CppObject *)v139;
              v83 = &v2->fields.__2__current;
              sub_B2C2F8(v83, v139);
              v84 = 18;
              goto LABEL_485;
            }
          }
        }
        goto LABEL_487;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_487;
        _4__this->fields.isErrorDialog = 1;
        v92 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_9293/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v94 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v94, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v92 )
          goto LABEL_487;
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          v92,
          (System_String_o *)StringLiteral_1/*""*/,
          v93,
          v94,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
LABEL_91:
        if ( _4__this->fields.isErrorDialog )
        {
          v95 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v95, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v95;
          v83 = &v2->fields.__2__current;
          sub_B2C2F8(v83, v95);
          v84 = 16;
          goto LABEL_485;
        }
        if ( v2->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_393;
      }
      else if ( !_4__this )
      {
        goto LABEL_487;
      }
      _4__this->fields.isErrorDialog = 1;
      v140 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v141 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v142 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v142, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v140 )
        goto LABEL_487;
      CommonUI__OpenRetryDialog(v140, (System_String_o *)StringLiteral_1/*""*/, v141, v142, 0, 0LL);
LABEL_391:
      if ( _4__this->fields.isErrorDialog )
      {
        v143 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v143, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v143;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v143);
        v84 = 17;
        goto LABEL_485;
      }
LABEL_393:
      v2->fields._waitForServerTime_5__7 = 0LL;
      sub_B2C2F8(&v2->fields._waitForServerTime_5__7, 0LL);
      v2->fields._wait_5__8 = 0LL;
      sub_B2C2F8(&v2->fields._wait_5__8, 0LL);
LABEL_436:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      DataManager__Initialize((DataManager_o *)this, 0LL);
      if ( !v2->fields.isReboot && !v2->fields._isCacheCheck_5__3 )
      {
        v2->fields._isCacheCheck_5__3 = 1;
        v160 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v160 = ManagementManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__HasKey(v160->static_fields->RebootCacheClearKey, 0LL) )
        {
          v161 = (Il2CppObject *)sub_B2C42C(ManagementManager___c__DisplayClass33_0_TypeInfo);
          System_Object___ctor(v161, 0LL);
          v2->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v161;
          p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
          sub_B2C2F8(&v2->fields.__8__1, v161);
          if ( !v2->fields.__8__1 )
            goto LABEL_487;
          v2->fields.__8__1->fields.confirmed = 0;
          if ( !*p__8__1 )
            goto LABEL_487;
          LOBYTE((*p__8__1)[1].klass) = 0;
          v162 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v163 = LocalizationManager__Get((System_String_o *)StringLiteral_7293/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
          v164 = LocalizationManager__Get((System_String_o *)StringLiteral_7291/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
          v165 = LocalizationManager__Get((System_String_o *)StringLiteral_7290/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
          v166 = LocalizationManager__Get((System_String_o *)StringLiteral_7289/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
          v167 = *p__8__1;
          v168 = v166;
          v169 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v169,
            v167,
            Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
            0LL);
          if ( !v162 )
            goto LABEL_487;
          CommonUI__OpenConfirmDecideDlg(v162, v163, v164, v165, v168, v169, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
LABEL_59:
          v86 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_487;
          if ( !BYTE1(v86[1].klass) )
          {
            v138 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v138, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v138;
            v83 = &v2->fields.__2__current;
            sub_B2C2F8(v83, v138);
            v84 = 9;
            goto LABEL_485;
          }
          if ( LOBYTE(v86[1].klass) )
          {
            if ( !_4__this )
              goto LABEL_487;
            ManagementManager__startUpCacheClear(_4__this, 0LL);
          }
          *p__8__1 = 0LL;
          sub_B2C2F8(p__8__1, 0LL);
        }
        else
        {
          v182 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v182 = ManagementManager_TypeInfo;
          }
          UnityEngine_PlayerPrefs__SetInt(v182->static_fields->RebootCacheClearKey, 1, 0LL);
          UnityEngine_PlayerPrefs__Save(0LL);
        }
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion((DataManager_o *)this, 0LL);
      if ( !_4__this )
        goto LABEL_487;
      v183 = UnityEngine_MonoBehaviour__StartCoroutine_35309748(
               (UnityEngine_MonoBehaviour_o *)_4__this,
               (System_Collections_IEnumerator_o *)this,
               0LL);
      v2->fields.__2__current = (Il2CppObject *)v183;
      v83 = &v2->fields.__2__current;
      sub_B2C2F8(v83, v183);
      v84 = 10;
LABEL_485:
      *((_DWORD *)v83 - 2) = v84;
      return 1;
    case 0x10:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_487;
      goto LABEL_91;
    case 0x11:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_487;
      goto LABEL_391;
    case 0x12:
      v2->fields.__1__state = -1;
      v186 = 0;
      v108 = j_il2cpp_value_box_0(int_TypeInfo, &v186);
      v2->fields.__2__current = (Il2CppObject *)v108;
      sub_B2C2F8(&v2->fields.__2__current, v108);
      v88 = 19;
      goto LABEL_162;
    case 0x13:
      p_fields->__1__state = -1;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
        goto LABEL_172;
      goto LABEL_212;
    case 0x14:
      p_fields->__1__state = -1;
LABEL_172:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v109 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v109, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v109;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v109);
        v84 = 20;
        goto LABEL_485;
      }
LABEL_212:
      v2->fields._isLoad_5__4 = 0;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_487;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_351:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_487;
        if ( !BYTE2(this->fields.__4__this) )
        {
          v137 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v137, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v137;
          v83 = &v2->fields.__2__current;
          sub_B2C2F8(v83, v137);
          v84 = 21;
          goto LABEL_485;
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_487;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12568/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v134 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v134 = ManagerConfig_TypeInfo;
          }
          if ( v134->static_fields->UseStandaloneAsset )
          {
            v2->fields._isLoad_5__4 = 1;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playBgm((System_String_o *)StringLiteral_9352/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_368:
              v135 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v135, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v135;
              v83 = &v2->fields.__2__current;
              sub_B2C2F8(v83, v135);
              v84 = 22;
              goto LABEL_485;
            }
            goto LABEL_487;
          }
LABEL_178:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__getDownloadSize(0LL) >= 1 )
          {
            v110 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v110, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v110;
            v83 = &v2->fields.__2__current;
            sub_B2C2F8(v83, v110);
            v84 = 23;
            goto LABEL_485;
          }
        }
LABEL_369:
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__SetOnlineStatus(0LL);
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_26282224((NetworkManager_o *)this, 0LL);
          v136 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v136, 0.1, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v136;
          v83 = &v2->fields.__2__current;
          sub_B2C2F8(v83, v136);
          v84 = 24;
          goto LABEL_485;
        }
        goto LABEL_487;
      }
LABEL_216:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_222:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__4__this) )
            {
              v127 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v127, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v127;
              v83 = &v2->fields.__2__current;
              sub_B2C2F8(v83, v127);
              v84 = 25;
              goto LABEL_485;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v115 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12568/*"SYSTEM"*/,
                       _4__this->fields.downloadParallelMax,
                       0LL);
              v116 = UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v115,
                       0LL);
              v2->fields.__2__current = (Il2CppObject *)v116;
              v83 = &v2->fields.__2__current;
              sub_B2C2F8(v83, v116);
              v84 = 26;
              goto LABEL_485;
            }
          }
        }
        goto LABEL_487;
      }
LABEL_227:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      LocalizationManager__LoadAssetData(0LL);
LABEL_231:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_418424E )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, method);
        byte_418424E = 1;
      }
      v117 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v117 = LocalizationManager_TypeInfo;
      }
      if ( v117->static_fields->isBusySetAssetData )
      {
        v118 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v118, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v118;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v118);
        v84 = 29;
        goto LABEL_485;
      }
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_245:
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_418424F )
      {
        sub_B2C35C(&FSUtility_TypeInfo, method);
        byte_418424F = 1;
      }
      v119 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v119 = FSUtility_TypeInfo;
      }
      if ( v119->static_fields->isBusySetAssetData )
      {
        v120 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v120, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v120;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v120);
        v84 = 30;
        goto LABEL_485;
      }
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount__initializeAssetStorage(0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__Initialize(0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_487;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, 0LL);
LABEL_266:
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      if ( AtlasManager__IsBusyInitialize(0LL) )
      {
        v121 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v121, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v121;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v121);
        v84 = 31;
        goto LABEL_485;
      }
      v2->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_272:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_487;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v2->fields._overrideAssetSoundNameWaitCount_5__5;
        v2->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v128 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v128, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v128;
          v83 = &v2->fields.__2__current;
          sub_B2C2F8(v83, v128);
          v84 = 32;
          goto LABEL_485;
        }
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__initializeAssetStorage(0LL);
LABEL_282:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v123 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v123, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v123;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v123);
        v84 = 33;
        goto LABEL_485;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_287:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( LOBYTE(this[5].fields._waitForServerTime_5__7) )
      {
        v124 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v124, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v124;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v124);
        v84 = 34;
        goto LABEL_485;
      }
      if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      }
      if ( PurchaseBehaviour__IsPurchasingFrameworkAvailable(0LL) )
      {
        if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
        }
        PurchaseBehaviour__Ready(0LL);
      }
      if ( v2->fields._isLoad_5__4 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9352/*"NOW_LOADING"*/, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__fadeoutBgm(1.0, 0LL);
          v125 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v125, 1.0, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v125;
          v83 = &v2->fields.__2__current;
          sub_B2C2F8(v83, v125);
          v84 = 35;
          goto LABEL_485;
        }
LABEL_307:
        v77 = (const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_308:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance(v77);
        if ( !this )
          goto LABEL_487;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_487;
        this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( this )
          {
            CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_398:
            v144 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v144, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v144;
            v83 = &v2->fields.__2__current;
            sub_B2C2F8(v83, v144);
            v84 = 36;
            goto LABEL_485;
          }
          goto LABEL_487;
        }
      }
      if ( _4__this )
      {
        ManagementManager__BuildInfoOff(_4__this, 0LL);
        v185 = 0;
        v126 = j_il2cpp_value_box_0(int_TypeInfo, &v185);
        v2->fields.__2__current = (Il2CppObject *)v126;
        v83 = &v2->fields.__2__current;
        sub_B2C2F8(v83, v126);
        v84 = 37;
        goto LABEL_485;
      }
      goto LABEL_487;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_351;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( !CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_369;
      goto LABEL_368;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_178;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_216;
    case 0x19:
      p_fields->__1__state = -1;
      goto LABEL_222;
    case 0x1A:
      p_fields->__1__state = -1;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_227;
      v2->fields._isLoad_5__4 = 1;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_418424D )
      {
        sub_B2C35C(&LogoMain_TypeInfo, v112);
        byte_418424D = 1;
      }
      v113 = LogoMain_TypeInfo;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v113 = LogoMain_TypeInfo;
      }
      if ( !v113->static_fields->_isPlaying_k__BackingField )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm((System_String_o *)StringLiteral_9352/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_211:
      v114 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v114, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v114;
      v83 = &v2->fields.__2__current;
      sub_B2C2F8(v83, v114);
      v84 = 27;
      goto LABEL_485;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_211;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_190:
      v111 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v111, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v111;
      v83 = &v2->fields.__2__current;
      sub_B2C2F8(v83, v111);
      v84 = 28;
      goto LABEL_485;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_190;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      goto LABEL_227;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_231;
    case 0x1E:
      p_fields->__1__state = -1;
      goto LABEL_245;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_266;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_272;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_282;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_287;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_307;
    case 0x24:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_487;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_398;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v77 = (const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      goto LABEL_308;
    case 0x25:
      p_fields->__1__state = -1;
      v74 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v74 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v74->static_fields->PushStateSendedKey,
                                                           0,
                                                           0LL);
      if ( !(_DWORD)this )
      {
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        Notiffication = OptionManager__GetNotiffication(0LL);
        OptionManager__SetNotiffication(Notiffication, 1, 0LL);
        v76 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v76 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v76->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_487;
      _4__this->fields._IsInitialized = 1;
      LOBYTE(_4__this->fields.scenetype) = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, 0LL);
      if ( v2->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_487;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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