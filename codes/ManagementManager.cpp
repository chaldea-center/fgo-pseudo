void __fastcall ManagementManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ManagementManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ManagementManager_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct ManagementManager_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42AE6A8 & 1) == 0 )
  {
    sub_B52984(&ManagementManager_TypeInfo);
    sub_B52984(&StringLiteral_8227/*"IsNotificationStatusSend"*/);
    sub_B52984(&StringLiteral_8239/*"IsReBootCacheClearKey"*/);
    sub_B52984(&StringLiteral_20185/*"ja-JP"*/);
    sub_B52984(&StringLiteral_23644/*"yyyy年MM月dd日HH時mm分"*/);
    byte_42AE6A8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ManagementManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_8227/*"IsNotificationStatusSend"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8227/*"IsNotificationStatusSend"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ManagementManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_8239/*"IsReBootCacheClearKey"*/;
  v9->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8239/*"IsReBootCacheClearKey"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->RebootCacheClearKey, v10, v11, v12, v13, v14, v15, v16);
  v17 = ManagementManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23644/*"yyyy年MM月dd日HH時mm分"*/;
  v17->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_23644/*"yyyy年MM月dd日HH時mm分"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->DATE_TIME_DISP_FORMAT, v18, v19, v20, v21, v22, v23, v24);
  v25 = ManagementManager_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_20185/*"ja-JP"*/;
  v25->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20185/*"ja-JP"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->DEFAULT_CULTURE_NAME, v26, v27, v28, v29, v30, v31, v32);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_42AE6A7 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_42AE6A7 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void __fastcall ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  Il2CppObject *v22; // x19
  float v23; // s0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  Il2CppObject *v44; // x19
  __int64 v45; // x0
  __int64 v46; // x0
  float v47; // [xsp+Ch] [xbp-24h] BYREF

  v47 = ratio;
  if ( (byte_42AE695 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Debug_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_680/*"):"*/);
    sub_B52984(&StringLiteral_6750/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_B52984(&StringLiteral_649/*"(ratio: "*/);
    byte_42AE695 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_34;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6750/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_B5299C(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = (System_String_array *)this;
      if ( !errorText || (this = (ManagementManager_o *)sub_B52A44(errorText, this->klass->_1.element_class)) != 0LL )
      {
        if ( !v14->max_length )
          goto LABEL_35;
        v14->m_Items[0] = errorText;
        sub_B52920(
          (BattleServantConfConponent_o *)v14->m_Items,
          (System_Int32_array **)errorText,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        this = (ManagementManager_o *)StringLiteral_649/*"(ratio: "*/;
        if ( StringLiteral_649/*"(ratio: "*/ )
        {
          this = (ManagementManager_o *)sub_B52A44(StringLiteral_649/*"(ratio: "*/, v14->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_36;
          v21 = (System_Int32_array **)StringLiteral_649/*"(ratio: "*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v14->max_length <= 1 )
          goto LABEL_35;
        v14->m_Items[1] = (System_String_o *)v21;
        sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
        this = (ManagementManager_o *)System_Single__ToString(v23, (const MethodInfo *)&v47);
        v30 = (System_Int32_array **)this;
        if ( !this || (this = (ManagementManager_o *)sub_B52A44(this, v14->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v14->max_length <= 2 )
            goto LABEL_35;
          v14->m_Items[2] = (System_String_o *)v30;
          sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
          this = (ManagementManager_o *)StringLiteral_680/*"):"*/;
          if ( StringLiteral_680/*"):"*/ )
          {
            this = (ManagementManager_o *)sub_B52A44(StringLiteral_680/*"):"*/, v14->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_36;
            v37 = (System_Int32_array **)StringLiteral_680/*"):"*/;
          }
          else
          {
            v37 = 0LL;
          }
          if ( v14->max_length <= 3 )
            goto LABEL_35;
          v14->m_Items[3] = (System_String_o *)v37;
          sub_B52920((BattleServantConfConponent_o *)&v14->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
          this = (ManagementManager_o *)sub_B52A44(exceptionMessage, v14->obj.klass->_1.element_class);
          if ( this )
          {
            if ( v14->max_length > 4 )
            {
              v14->m_Items[4] = exceptionMessage;
              sub_B52920(
                (BattleServantConfConponent_o *)&v14->m_Items[4],
                (System_Int32_array **)exceptionMessage,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              v44 = (Il2CppObject *)System_String__Concat_44648440(v14, 0LL);
              if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError(v44, 0LL);
              return;
            }
LABEL_35:
            v45 = sub_B52A88(this);
            sub_B52A28(v45, 0LL);
          }
        }
      }
LABEL_36:
      v46 = sub_B52A7C();
      sub_B52A28(v46, 0LL);
    }
LABEL_34:
    sub_B52A5C(this, errorText);
  }
  v22 = (Il2CppObject *)System_String__Concat_44568316(errorText, exceptionMessage, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v22, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AE691 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_42AE691 = 1;
  }
  if ( !SingletonMonoBehaviour_WarBoardManager___CheckInstance(
          (SingletonMonoBehaviour_WarBoardManager__o *)this,
          (const MethodInfo_2B76054 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
}


void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_42AE6A5 & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AE6A5 = 1;
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

  if ( (byte_42AE6A4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE6A4 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_B52A5C(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_42AE68F & 1) == 0 )
  {
    sub_B52984(&ManagementManager_TypeInfo);
    byte_42AE68F = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AE69B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AE69B = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_41442104(0LL);
}


void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    UnityEngine_Application__Quit_41442104(0LL);
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

  if ( (byte_42AE698 & 1) == 0 )
  {
    sub_B52984(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
    byte_42AE698 = 1;
  }
  v3 = sub_B52A54(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
  ManagementManager__InitializeAdManagerAndFirebase_d__34___ctor(
    (ManagementManager__InitializeAdManagerAndFirebase_d__34_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_42AE6A2 & 1) == 0 )
  {
    sub_B52984(&ManagementManager_TypeInfo);
    byte_42AE6A2 = 1;
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_42AD46F )
  {
    sub_B52984(&ManagementManager_TypeInfo);
    byte_42AD46F = 1;
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AE6A3 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_42AE6A3 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  return WebViewManager__get_IsBusy(Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_42AE696 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22997/*"true"*/);
    byte_42AE696 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_22997/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_42AE6A6 & 1) == 0 )
  {
    sub_B52984(&System_Globalization_CultureInfo_TypeInfo);
    sub_B52984(&ManagementManager_TypeInfo);
    byte_42AE6A6 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  DEFAULT_CULTURE_NAME = v1->static_fields->DEFAULT_CULTURE_NAME;
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
  ManagementManager_c *v1; // x0
  ManagementManager_c *v2; // x0

  if ( (byte_42AE690 & 1) == 0 )
  {
    sub_B52984(&ManagementManager_TypeInfo);
    byte_42AE690 = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v1 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v1->static_fields->RebootCacheClearKey, 0LL) )
  {
    v2 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42AE692 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&System_Type_TypeInfo);
    sub_B52984(&UnityGamingServicesBehaviour_var);
    byte_42AE692 = 1;
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
  v4 = (int)UnityGamingServicesBehaviour_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9.fields.value = v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0LL);
  if ( !gameObject )
    sub_B52A5C(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v6);
  v8 = ManagementManager__startCheckAll(this, 0, 0, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v3; // x1

  if ( this->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v3) )
      UnityEngine_Application__Quit_41442104(0LL);
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AE6A1 & 1) == 0 )
  {
    sub_B52984(&ManagementManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AE6A1 = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _29217932; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1

  if ( (byte_42AE6A0 & 1) == 0 )
  {
    sub_B52984(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AE6A0 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    goto LABEL_11;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29217932 = TutorialFlag__Get_29217932(102, 0LL);
  if ( _29217932 )
  {
LABEL_11:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v8,
                                                           (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B52A5C(0LL, v10);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_29217932, v6, v7);
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42AE69E & 1) == 0 )
  {
    sub_B52984(&ManagementManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AE69E = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  AvalonSceneManager__transitionScene(Instance, *(&this->fields.scenetype + 1), 0, 0LL, 0LL);
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
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1

  if ( (byte_42AE69D & 1) == 0 )
  {
    sub_B52984(&Method_ManagementManager_callbackTopHome__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AE69D = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    goto LABEL_11;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29217932(102, 0LL) )
  {
LABEL_11:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v7,
                                                           (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B52A5C(0LL, v9);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
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
  UnityEngine_Camera_o *Component_srcLineSprite; // x0
  __int64 v8; // x1
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  AvalonVideoPlayer_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_42AE693 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_4228/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_B52984(&StringLiteral_9270/*"MovieRoot"*/);
    byte_42AE693 = 1;
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
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4228/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v6 = (UnityEngine_GameObject_o *)sub_B52A54(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9270/*"MovieRoot"*/, 0LL);
    if ( !v6
      || (v9 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                        v6,
                                        (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields._videoPlayer_k__BackingField,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15),
          !v5)
      || (v16 = *p_videoPlayer_k__BackingField,
          Component_srcLineSprite = (UnityEngine_Camera_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v5,
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v16) )
    {
      sub_B52A5C(Component_srcLineSprite, v8);
    }
    AvalonVideoPlayer__initialize(v16, Component_srcLineSprite, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_32091088(v6, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AE68D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_42AE68D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return HIDWORD(Instance->fields.titleLabel);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_42AE68E & 1) == 0 )
  {
    sub_B52984(&ManagementManager_TypeInfo);
    byte_42AE68E = 1;
  }
  v1 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
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


void __fastcall ManagementManager__reboot(ManagementManager_o *this, bool isLogin, const MethodInfo *method)
{
  ManagementManager_c *v5; // x0
  ScriptManager_o *Instance; // x0
  __int64 v7; // x1
  AdManager_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_42AE694 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&FirebaseScript_TypeInfo);
    sub_B52984(&System_GC_TypeInfo);
    sub_B52984(&ManagementManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AE694 = 1;
  }
  if ( !LOBYTE(this->fields.scenetype) )
  {
    LOBYTE(this->fields.scenetype) = 1;
    v5 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v5 = ManagementManager_TypeInfo;
    }
    v5->static_fields->isDuringStartup = 1;
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    ScriptManager__reboot(Instance, 1, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__Reboot((CommonUI_o *)Instance, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__Reboot(0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
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
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B52A5C(Instance, v7);
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_44029184(0LL);
    v8 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v8 )
      sub_B52A5C(0LL, v9);
    AdManager__Initialize(v8, 2, 0LL);
    if ( (BYTE3(FirebaseScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    }
    FirebaseScript__Initialize(0LL);
    v11 = ManagementManager__startCheckAll(this, 1, isLogin, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AE69C & 1) == 0 )
  {
    sub_B52984(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_B52984(&Method_ManagementManager_callbackTopLogin__);
    sub_B52984(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_42AE69C = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_B52A54(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_B52A5C(v5, v6);
  NetworkManager__RequestLogin(Instance, v4, 1, 0LL);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AE69F & 1) == 0 )
  {
    sub_B52984(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_B52984(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_B52984(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_42AE69F = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_B52A54(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_B52A5C(v5, v6);
  NetworkManager__RequestLogin(Instance, v4, 1, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._videoPlayer_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


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

  if ( (byte_42AE697 & 1) == 0 )
  {
    sub_B52984(&ManagementManager__startCheckAll_d__33_TypeInfo);
    byte_42AE697 = 1;
  }
  v7 = sub_B52A54(ManagementManager__startCheckAll_d__33_TypeInfo);
  ManagementManager__startCheckAll_d__33___ctor((ManagementManager__startCheckAll_d__33_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 32) = isReboot;
  *(_BYTE *)(v7 + 56) = isLogin;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_42AE699 & 1) == 0 )
  {
    sub_B52984(&DataManager_TypeInfo);
    byte_42AE699 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
}


void __fastcall ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_42AE69A & 1) == 0 )
  {
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&ScrTerminalListTop_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AE69A = 1;
  }
  MovieFileMerge__Delete_22448396(0LL);
  v2 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2D9 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2D9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
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
  int32_t _1__state; // w8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v5; // x19
  AdManager_o *Instance; // x0
  __int64 v7; // x1
  AdManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42ACE78 & 1) == 0 )
  {
    sub_B52984(&FirebaseScript_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B52984(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_42ACE78 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v7);
    AdManager__Initialize(Instance, 0, 0LL);
    v8 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v8 )
      sub_B52A5C(0LL, v9);
    AdManager__Initialize(v8, 1, 0LL);
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
      v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
      this->fields.__2__current = (Il2CppObject *)v5;
      sub_B52920(&this->fields.__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  CommonUI_o *Instance; // x19
  System_Action_o *v9; // x20

  if ( (byte_42ACE77 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__);
    sub_B52984(&ManagementManager___c__DisplayClass33_1_TypeInfo);
    byte_42ACE77 = 1;
  }
  v5 = sub_B52A54(ManagementManager___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B52920(v5 + 24),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_B52A5C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_18158412(Instance, v9, 0LL);
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
    sub_B52A5C(this, method);
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
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ManagementManager_c *v8; // x0
  bool Notiffication; // w0
  ManagementManager_c *v10; // x0
  const MethodInfo_2B75DB0 *v11; // x0
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  UnityEngine_WaitForEndOfFrame_o *v13; // x20
  CrashReporter_o *v14; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  Il2CppObject **v16; // x19
  int v17; // w8
  Il2CppObject **p__8__1; // x21
  Il2CppObject *v19; // x8
  int v20; // w8
  DataManager_c *v21; // x0
  int32_t updateMasterResult_5__9; // w8
  CommonUI_o *v23; // x21
  System_String_o *v24; // x22
  ErrorDialog_ClickDelegate_o *v25; // x23
  UnityEngine_WaitForEndOfFrame_o *v26; // x20
  UnityEngine_WaitForEndOfFrame_o *v27; // x20
  ManagementManager__startCheckAll_d__33_o *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  UnityEngine_WaitForEndOfFrame_o *v31; // x20
  DataManager_c *v32; // x0
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v34; // x21
  UnityEngine_WaitForEndOfFrame_o *v35; // x20
  UnityEngine_WaitForEndOfFrame_o *v36; // x20
  UnityEngine_WaitForEndOfFrame_o *v37; // x20
  UnityEngine_WaitForEndOfFrame_o *v38; // x20
  LogoMain_c *v39; // x0
  UnityEngine_WaitForEndOfFrame_o *v40; // x20
  System_Collections_IEnumerator_o *v41; // x0
  LocalizationManager_c *v42; // x0
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  FSUtility_c *v44; // x0
  UnityEngine_WaitForEndOfFrame_o *v45; // x20
  UnityEngine_WaitForEndOfFrame_o *v46; // x20
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v48; // x20
  UnityEngine_WaitForEndOfFrame_o *v49; // x20
  UnityEngine_WaitForSeconds_o *v50; // x20
  UnityEngine_WaitForEndOfFrame_o *v51; // x20
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x1
  EncryptedPlayerPrefs_c *v55; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v57; // x20
  ManagerConfig_c *v58; // x0
  UnityEngine_WaitForEndOfFrame_o *v59; // x20
  UnityEngine_WaitForSeconds_o *v60; // x20
  UnityEngine_WaitForEndOfFrame_o *v61; // x20
  UnityEngine_WaitForEndOfFrame_o *v62; // x20
  CommonUI_o *v63; // x21
  System_String_o *v64; // x22
  ErrorDialog_ClickDelegate_o *v65; // x23
  UnityEngine_WaitForEndOfFrame_o *v66; // x20
  UnityEngine_WaitForEndOfFrame_o *v67; // x20
  UnityEngine_WaitForEndOfFrame_o *v68; // x20
  __int64 v69; // x0
  __int64 v70; // x0
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v74; // x0
  ManagerConfig_c *v75; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v77; // x22
  ErrorDialog_ClickDelegate_o *v78; // x23
  int32_t readResult_5__2; // w8
  int32_t *p_readResult_5__2; // x21
  NetworkManager_ResultCallbackFunc_o *v81; // x21
  UnityEngine_WaitForEndOfFrame_o *v82; // x20
  ManagementManager_c *v83; // x0
  ManagementManager___c__DisplayClass33_0_o *v84; // x22
  CommonUI_o *v85; // x22
  System_String_o *v86; // x23
  System_String_o *v87; // x24
  System_String_o *v88; // x25
  System_String_o *v89; // x0
  Il2CppObject *v90; // x28
  System_String_o *v91; // x26
  CommonConfirmDialog_ClickDelegate_o *v92; // x27
  UnityEngine_WaitForEndOfFrame_o *v93; // x20
  Il2CppObject *v94; // x19
  System_String_o *v95; // x19
  System_String_o *DispFriendCode; // x22
  CommonUI_o *v97; // x22
  System_String_o *v98; // x23
  ManagementManager__startCheckAll_d__33_o *v99; // x24
  void *v100; // x25
  System_String_o *v101; // x21
  Il2CppObject *v102; // x2
  System_String_o *v103; // x19
  ErrorDialog_ClickDelegate_o *v104; // x23
  ManagementManager_c *v105; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-90h]
  int v107; // [xsp+38h] [xbp-58h] BYREF
  int v108; // [xsp+3Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_42ADC60 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&CommonServicePluginScript_TypeInfo);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&EncryptedPlayerPrefs_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&LogoMain_TypeInfo);
    sub_B52984(&Method_ManagementManager_EndLogDialog__);
    sub_B52984(&Method_ManagementManager_EndQuitDialog__);
    sub_B52984(&Method_ManagementManager_EndRetryDialog__);
    sub_B52984(&Method_ManagementManager_callbackAccountRegist__);
    sub_B52984(&Method_ManagementManager_callbackTopGameData__);
    sub_B52984(&ManagementManager_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_B52984(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&PurchaseBehaviour_TypeInfo);
    sub_B52984(&NetworkManager_ReadResult_TypeInfo);
    sub_B52984(&ResolutionManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&SignedData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_B52984(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__);
    sub_B52984(&ManagementManager___c__DisplayClass33_0_TypeInfo);
    sub_B52984(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B52984(&StringLiteral_7336/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_9409/*"NOW_LOADING"*/);
    sub_B52984(&StringLiteral_9342/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_B52984(&StringLiteral_6364/*"F39UThNh"*/);
    sub_B52984(&StringLiteral_7339/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_B52984(&StringLiteral_8970/*"Management"*/);
    sub_B52984(&StringLiteral_7337/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_B52984(&StringLiteral_9758/*"NotifyRequestPermissionsResultFromPlugin"*/);
    sub_B52984(&StringLiteral_7335/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_5134/*"DataServerFolderName"*/);
    sub_B52984(&StringLiteral_16445/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_B52984(&StringLiteral_9350/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_B52984(&StringLiteral_9343/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_B52984(&StringLiteral_12657/*"SYSTEM"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_20060/*"ioqrk4Om"*/);
    sub_B52984(&StringLiteral_1168/*"2pC0bIYM"*/);
    sub_B52984(&StringLiteral_9344/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_B52984(&StringLiteral_9351/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_42ADC60 = 1;
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
      v2->fields.__2__current = (Il2CppObject *)UnityEngine_Resources__UnloadUnusedAssets(0LL);
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      p_fields->__1__state = -1;
LABEL_113:
      if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
      SignedData__RefillSigningData(3, 0LL);
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
        goto LABEL_490;
      v2->fields.__2__current = (Il2CppObject *)ManagementManager__InitializeAdManagerAndFirebase(_4__this, 0LL);
      v16 = &v2->fields.__2__current;
      sub_B52920(v16);
      v17 = 2;
      goto LABEL_488;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      v2->fields.__2__current = (Il2CppObject *)NetworkManager__Initialize((NetworkManager_o *)this, 0LL);
      v16 = &v2->fields.__2__current;
      sub_B52920(v16);
      v17 = 3;
      goto LABEL_488;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v2->fields.isReboot )
      {
        v27 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v27, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v27;
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 4;
        goto LABEL_488;
      }
LABEL_106:
      this = (ManagementManager__startCheckAll_d__33_o *)sub_B5299C(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_490;
      v28 = this;
      v29 = StringLiteral_1168/*"2pC0bIYM"*/;
      if ( StringLiteral_1168/*"2pC0bIYM"*/ )
      {
        v29 = sub_B52A44(StringLiteral_1168/*"2pC0bIYM"*/, v28->klass->_1.element_class);
        if ( !v29 )
          goto LABEL_410;
        v30 = StringLiteral_1168/*"2pC0bIYM"*/;
      }
      else
      {
        v30 = 0LL;
      }
      if ( !LODWORD(v28->fields.__2__current) )
        goto LABEL_409;
      *(_QWORD *)&v28->fields.isReboot = v30;
      sub_B52920(&v28->fields.isReboot);
      v29 = StringLiteral_6364/*"F39UThNh"*/;
      if ( StringLiteral_6364/*"F39UThNh"*/ )
      {
        v29 = sub_B52A44(StringLiteral_6364/*"F39UThNh"*/, v28->klass->_1.element_class);
        if ( !v29 )
          goto LABEL_410;
        v53 = StringLiteral_6364/*"F39UThNh"*/;
      }
      else
      {
        v53 = 0LL;
      }
      if ( LODWORD(v28->fields.__2__current) <= 1 )
        goto LABEL_409;
      v28->fields.__4__this = (struct ManagementManager_o *)v53;
      sub_B52920(&v28->fields.__4__this);
      v29 = StringLiteral_20060/*"ioqrk4Om"*/;
      if ( !StringLiteral_20060/*"ioqrk4Om"*/ )
      {
        v54 = 0LL;
LABEL_328:
        if ( LODWORD(v28->fields.__2__current) > 2 )
        {
          v28->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v54;
          sub_B52920(&v28->fields.__8__1);
          v55 = EncryptedPlayerPrefs_TypeInfo;
          if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
            v55 = EncryptedPlayerPrefs_TypeInfo;
          }
          static_fields = v55->static_fields;
          static_fields->keys = (struct System_String_array *)v28;
          sub_B52920(&static_fields->keys);
          if ( !v2->fields.isReboot )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__CheckPermission(
                                                                   (System_String_o *)StringLiteral_16445/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !_4__this )
                  goto LABEL_490;
                _4__this->fields.isPermissionRequesting = 1;
                AndroidPermissionManager__RequestPermission(
                  (System_String_o *)StringLiteral_16445/*"android.permission.POST_NOTIFICATIONS"*/,
                  (System_String_o *)StringLiteral_8970/*"Management"*/,
                  (System_String_o *)StringLiteral_9758/*"NotifyRequestPermissionsResultFromPlugin"*/,
                  0LL);
LABEL_128:
                if ( _4__this->fields.isPermissionRequesting )
                {
                  v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v31, 0LL);
                  v2->fields.__2__current = (Il2CppObject *)v31;
                  v16 = &v2->fields.__2__current;
                  sub_B52920(v16);
                  v17 = 5;
                  goto LABEL_488;
                }
              }
            }
            else
            {
              if ( !_4__this )
                goto LABEL_490;
              _4__this->fields.isPermissionGranted = 1;
            }
            if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
            if ( this )
            {
              LocalNotificationManagerAndroid__RegisterNotificationChannel(
                (LocalNotificationManagerAndroid_o *)this,
                0LL);
              v68 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v68, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v68;
              v16 = &v2->fields.__2__current;
              sub_B52920(v16);
              v17 = 6;
              goto LABEL_488;
            }
LABEL_490:
            sub_B52A5C(this, method);
          }
LABEL_333:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_490;
          this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, 0LL);
          v2->fields._readResult_5__2 = (int)this;
          if ( !_4__this )
            goto LABEL_490;
          this = (ManagementManager__startCheckAll_d__33_o *)_4__this->fields.debugInfoRootObject;
          if ( !this )
            goto LABEL_490;
          this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_GameObject__get_gameObject(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
          if ( !this )
            goto LABEL_490;
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
            v74 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
            if ( FreeSize < v74 )
              FreeSize = v74;
            if ( FreeSize < 1 )
              break;
            v75 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v75 = ManagerConfig_TypeInfo;
            }
            if ( FreeSize >= v75->static_fields->LIMIT_FREE_SIZE )
              break;
            _4__this->fields.isErrorDialog = 1;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v77 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
            v78 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v78,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_EndRetryDialog__,
              0LL);
            if ( !Instance )
              goto LABEL_490;
            CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v77, v78, 0, 0LL);
LABEL_411:
            if ( _4__this->fields.isErrorDialog )
            {
              v93 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v93, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v93;
              v16 = &v2->fields.__2__current;
              sub_B52920(v16);
              v17 = 7;
              goto LABEL_488;
            }
          }
          p_readResult_5__2 = &v2->fields._readResult_5__2;
          readResult_5__2 = v2->fields._readResult_5__2;
          if ( readResult_5__2 )
          {
            if ( readResult_5__2 == 1 )
            {
              _4__this->fields.isReadAuth = 0;
              v81 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
              NetworkManager_ResultCallbackFunc___ctor(
                v81,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_callbackAccountRegist__,
                0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v81,
                                                                   (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_AccountRegistRequest___);
              if ( this )
              {
                AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_437:
                v82 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v82, 0LL);
                v2->fields.__2__current = (Il2CppObject *)v82;
                v16 = &v2->fields.__2__current;
                sub_B52920(v16);
                v17 = 8;
                goto LABEL_488;
              }
              goto LABEL_490;
            }
            v94 = (Il2CppObject *)StringLiteral_1/*""*/;
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_490;
            if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, 0LL) )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v95 = LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
              if ( !this )
                goto LABEL_490;
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
LABEL_470:
                v97 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v98 = LocalizationManager__Get((System_String_o *)StringLiteral_9344/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)j_il2cpp_value_box_0(
                                                                     NetworkManager_ReadResult_TypeInfo,
                                                                     p_readResult_5__2);
                if ( this )
                {
                  v99 = this;
                  v100 = (void *)((__int64 (__fastcall *)(ManagementManager__startCheckAll_d__33_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                  *p_readResult_5__2 = *(_DWORD *)j_il2cpp_object_unbox_0(v99);
                  v101 = (System_String_o *)StringLiteral_1/*""*/;
                  v102 = (Il2CppObject *)(v100 ? v100 : StringLiteral_1/*""*/);
                  v103 = System_String__Format_44563852(v98, v94, v102, 0LL);
                  v104 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v104,
                    (Il2CppObject *)_4__this,
                    Method_ManagementManager_EndQuitDialog__,
                    0LL);
                  if ( v97 )
                  {
                    CommonUI__OpenErrorDialog(v97, v101, v103, v104, 0, 0LL);
                    return 0;
                  }
                }
                goto LABEL_490;
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v95 = LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            }
            v94 = (Il2CppObject *)System_String__Format(v95, (Il2CppObject *)DispFriendCode, 0LL);
            goto LABEL_470;
          }
LABEL_438:
          v2->fields._isCacheCheck_5__3 = 0;
          goto LABEL_439;
        }
LABEL_409:
        v69 = sub_B52A88(v29);
        sub_B52A28(v69, 0LL);
      }
      v29 = sub_B52A44(StringLiteral_20060/*"ioqrk4Om"*/, v28->klass->_1.element_class);
      if ( v29 )
      {
        v54 = StringLiteral_20060/*"ioqrk4Om"*/;
        goto LABEL_328;
      }
LABEL_410:
      v70 = sub_B52A7C();
      sub_B52A28(v70, 0LL);
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_106;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_128;
      goto LABEL_490;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_333;
    case 7:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      goto LABEL_411;
    case 8:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_437;
      goto LABEL_438;
    case 9:
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_59;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_42ADD14 )
      {
        sub_B52984(&DataManager_TypeInfo);
        byte_42ADD14 = 1;
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
        goto LABEL_490;
      _4__this->fields.isReadGameData = 0;
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v34,
                                                           (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_490;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
      v2->fields._waitForServerTime_5__7 = v35;
      sub_B52920(&v2->fields._waitForServerTime_5__7);
      goto LABEL_163;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      if ( _4__this->fields.isReadGameData )
      {
        _4__this->fields.isReadGameData = 0;
        v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v12,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackTopGameData__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v12,
                                                             (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
        if ( !this )
          goto LABEL_490;
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v13, 0LL);
        v2->fields._wait_5__8 = v13;
        sub_B52920(&v2->fields._wait_5__8);
LABEL_66:
        v2->fields.__2__current = (Il2CppObject *)v2->fields._wait_5__8;
        sub_B52920(&v2->fields.__2__current);
        v20 = 12;
      }
      else
      {
LABEL_163:
        v2->fields.__2__current = (Il2CppObject *)v2->fields._waitForServerTime_5__7;
        sub_B52920(&v2->fields.__2__current);
        v20 = 11;
      }
LABEL_165:
      v2->fields.__1__state = v20;
      return 1;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_66;
      v14 = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_42ADD15 )
      {
        sub_B52984(&NetworkManager_TypeInfo);
        byte_42ADD15 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_490;
      CrashReporter__AddCustomKey(
        v14,
        (System_String_o *)StringLiteral_5134/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v2->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      MasterData,
                                                      0LL);
          v16 = &v2->fields.__2__current;
          sub_B52920(v16);
          v17 = 13;
          goto LABEL_488;
        }
      }
      else
      {
LABEL_140:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v2->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                        (UnityEngine_MonoBehaviour_o *)_4__this,
                                                        (System_Collections_IEnumerator_o *)this,
                                                        0LL);
            v16 = &v2->fields.__2__current;
            sub_B52920(v16);
            v17 = 15;
            goto LABEL_488;
          }
        }
      }
      goto LABEL_490;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_42ADD16 )
      {
        sub_B52984(&DataManager_TypeInfo);
        byte_42ADD16 = 1;
      }
      v32 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v32 = DataManager_TypeInfo;
      }
      if ( v32->static_fields->readMasterDataResult == 1 )
        goto LABEL_140;
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v32);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v57, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v57;
      v16 = &v2->fields.__2__current;
      sub_B52920(v16);
      v17 = 14;
      goto LABEL_488;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_439;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_42ADD17 )
      {
        sub_B52984(&DataManager_TypeInfo);
        byte_42ADD17 = 1;
      }
      v21 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v21 = DataManager_TypeInfo;
      }
      v2->fields._updateMasterResult_5__9 = v21->static_fields->updateMasterDataResult;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      }
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_25752668((NetworkManager_o *)this, 0LL);
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                          (UnityEngine_MonoBehaviour_o *)_4__this,
                                                          (System_Collections_IEnumerator_o *)this,
                                                          0LL);
              v16 = &v2->fields.__2__current;
              sub_B52920(v16);
              v17 = 18;
              goto LABEL_488;
            }
          }
        }
        goto LABEL_490;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_490;
        _4__this->fields.isErrorDialog = 1;
        v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9350/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v25 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v25, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v23 )
          goto LABEL_490;
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          v23,
          (System_String_o *)StringLiteral_1/*""*/,
          v24,
          v25,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
LABEL_91:
        if ( _4__this->fields.isErrorDialog )
        {
          v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v26, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v26;
          v16 = &v2->fields.__2__current;
          sub_B52920(v16);
          v17 = 16;
          goto LABEL_488;
        }
        if ( v2->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_396;
      }
      else if ( !_4__this )
      {
        goto LABEL_490;
      }
      _4__this->fields.isErrorDialog = 1;
      v63 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9351/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v65 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v65, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v63 )
        goto LABEL_490;
      CommonUI__OpenRetryDialog(v63, (System_String_o *)StringLiteral_1/*""*/, v64, v65, 0, 0LL);
LABEL_394:
      if ( _4__this->fields.isErrorDialog )
      {
        v66 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v66, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v66;
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 17;
        goto LABEL_488;
      }
LABEL_396:
      v2->fields._waitForServerTime_5__7 = 0LL;
      sub_B52920(&v2->fields._waitForServerTime_5__7);
      v2->fields._wait_5__8 = 0LL;
      sub_B52920(&v2->fields._wait_5__8);
LABEL_439:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      DataManager__Initialize((DataManager_o *)this, 0LL);
      if ( !v2->fields.isReboot && !v2->fields._isCacheCheck_5__3 )
      {
        v2->fields._isCacheCheck_5__3 = 1;
        v83 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v83 = ManagementManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__HasKey(v83->static_fields->RebootCacheClearKey, 0LL) )
        {
          v84 = (ManagementManager___c__DisplayClass33_0_o *)sub_B52A54(ManagementManager___c__DisplayClass33_0_TypeInfo);
          ManagementManager___c__DisplayClass33_0___ctor(v84, 0LL);
          v2->fields.__8__1 = v84;
          p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
          sub_B52920(&v2->fields.__8__1);
          if ( !v2->fields.__8__1 )
            goto LABEL_490;
          v2->fields.__8__1->fields.confirmed = 0;
          if ( !*p__8__1 )
            goto LABEL_490;
          LOBYTE((*p__8__1)[1].klass) = 0;
          v85 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_7339/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
          v87 = LocalizationManager__Get((System_String_o *)StringLiteral_7337/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_7336/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_7335/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
          v90 = *p__8__1;
          v91 = v89;
          v92 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v92,
            v90,
            Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
            0LL);
          if ( !v85 )
            goto LABEL_490;
          CommonUI__OpenConfirmDecideDlg(v85, v86, v87, v88, v91, v92, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0LL);
LABEL_59:
          v19 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_490;
          if ( !BYTE1(v19[1].klass) )
          {
            v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v62, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v62;
            v16 = &v2->fields.__2__current;
            sub_B52920(v16);
            v17 = 9;
            goto LABEL_488;
          }
          if ( LOBYTE(v19[1].klass) )
          {
            if ( !_4__this )
              goto LABEL_490;
            ManagementManager__startUpCacheClear(_4__this, 0LL);
          }
          *p__8__1 = 0LL;
          sub_B52920(p__8__1);
        }
        else
        {
          v105 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v105 = ManagementManager_TypeInfo;
          }
          UnityEngine_PlayerPrefs__SetInt(v105->static_fields->RebootCacheClearKey, 1, 0LL);
          UnityEngine_PlayerPrefs__Save(0LL);
        }
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion((DataManager_o *)this, 0LL);
      if ( !_4__this )
        goto LABEL_490;
      v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  (System_Collections_IEnumerator_o *)this,
                                                  0LL);
      v16 = &v2->fields.__2__current;
      sub_B52920(v16);
      v17 = 10;
LABEL_488:
      *((_DWORD *)v16 - 2) = v17;
      return 1;
    case 0x10:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      goto LABEL_91;
    case 0x11:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      goto LABEL_394;
    case 0x12:
      v2->fields.__1__state = -1;
      v108 = 0;
      v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
      sub_B52920(&v2->fields.__2__current);
      v20 = 19;
      goto LABEL_165;
    case 0x13:
      p_fields->__1__state = -1;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
        goto LABEL_175;
      goto LABEL_215;
    case 0x14:
      p_fields->__1__state = -1;
LABEL_175:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v36 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v36, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v36;
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 20;
        goto LABEL_488;
      }
LABEL_215:
      v2->fields._isLoad_5__4 = 0;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_490;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_354:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_490;
        if ( !BYTE2(this->fields.__4__this) )
        {
          v61 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v61, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v61;
          v16 = &v2->fields.__2__current;
          sub_B52920(v16);
          v17 = 21;
          goto LABEL_488;
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_490;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12657/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v58 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v58 = ManagerConfig_TypeInfo;
          }
          if ( v58->static_fields->UseStandaloneAsset )
          {
            v2->fields._isLoad_5__4 = 1;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playBgm((System_String_o *)StringLiteral_9409/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_371:
              v59 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v59, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v59;
              v16 = &v2->fields.__2__current;
              sub_B52920(v16);
              v17 = 22;
              goto LABEL_488;
            }
            goto LABEL_490;
          }
LABEL_181:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__getDownloadSize(0LL) >= 1 )
          {
            v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v37, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v37;
            v16 = &v2->fields.__2__current;
            sub_B52920(v16);
            v17 = 23;
            goto LABEL_488;
          }
        }
LABEL_372:
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__SetOnlineStatus(0LL);
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_25752668((NetworkManager_o *)this, 0LL);
          v60 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v60, 0.1, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v60;
          v16 = &v2->fields.__2__current;
          sub_B52920(v16);
          v17 = 24;
          goto LABEL_488;
        }
        goto LABEL_490;
      }
LABEL_219:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_225:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__4__this) )
            {
              v51 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v51, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v51;
              v16 = &v2->fields.__2__current;
              sub_B52920(v16);
              v17 = 25;
              goto LABEL_488;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v41 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                      (AssetManager_o *)this,
                      (System_String_o *)StringLiteral_12657/*"SYSTEM"*/,
                      _4__this->fields.downloadParallelMax,
                      0LL);
              v2->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                          (UnityEngine_MonoBehaviour_o *)_4__this,
                                                          v41,
                                                          0LL);
              v16 = &v2->fields.__2__current;
              sub_B52920(v16);
              v17 = 26;
              goto LABEL_488;
            }
          }
        }
        goto LABEL_490;
      }
LABEL_230:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      LocalizationManager__LoadAssetData(0LL);
LABEL_234:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_42ADD19 )
      {
        sub_B52984(&LocalizationManager_TypeInfo);
        byte_42ADD19 = 1;
      }
      v42 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = LocalizationManager_TypeInfo;
      }
      if ( v42->static_fields->isBusySetAssetData )
      {
        v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v43, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v43;
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 29;
        goto LABEL_488;
      }
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_248:
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_42ADD1A )
      {
        sub_B52984(&FSUtility_TypeInfo);
        byte_42ADD1A = 1;
      }
      v44 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v44 = FSUtility_TypeInfo;
      }
      if ( v44->static_fields->isBusySetAssetData )
      {
        v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v45;
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 30;
        goto LABEL_488;
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
        goto LABEL_490;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, 0LL);
LABEL_269:
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      if ( AtlasManager__IsBusyInitialize(0LL) )
      {
        v46 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v46, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v46;
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 31;
        goto LABEL_488;
      }
      v2->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_275:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_490;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v2->fields._overrideAssetSoundNameWaitCount_5__5;
        v2->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v52, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v52;
          v16 = &v2->fields.__2__current;
          sub_B52920(v16);
          v17 = 32;
          goto LABEL_488;
        }
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__initializeAssetStorage(0LL);
LABEL_285:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v48 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v48, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v48;
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 33;
        goto LABEL_488;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_290:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( LOBYTE(this[5].fields._waitForServerTime_5__7) )
      {
        v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v49, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v49;
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 34;
        goto LABEL_488;
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
        if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9409/*"NOW_LOADING"*/, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__fadeoutBgm(1.0, 0LL);
          v50 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v50, 1.0, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v50;
          v16 = &v2->fields.__2__current;
          sub_B52920(v16);
          v17 = 35;
          goto LABEL_488;
        }
LABEL_310:
        v11 = (const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_311:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance(v11);
        if ( !this )
          goto LABEL_490;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_490;
        this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( this )
          {
            CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_401:
            v67 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v67, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v67;
            v16 = &v2->fields.__2__current;
            sub_B52920(v16);
            v17 = 36;
            goto LABEL_488;
          }
          goto LABEL_490;
        }
      }
      if ( _4__this )
      {
        ManagementManager__BuildInfoOff(_4__this, 0LL);
        v107 = 0;
        v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
        v16 = &v2->fields.__2__current;
        sub_B52920(v16);
        v17 = 37;
        goto LABEL_488;
      }
      goto LABEL_490;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_354;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_372;
      goto LABEL_371;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_181;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_219;
    case 0x19:
      p_fields->__1__state = -1;
      goto LABEL_225;
    case 0x1A:
      p_fields->__1__state = -1;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_230;
      v2->fields._isLoad_5__4 = 1;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_42ADD18 )
      {
        sub_B52984(&LogoMain_TypeInfo);
        byte_42ADD18 = 1;
      }
      v39 = LogoMain_TypeInfo;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v39 = LogoMain_TypeInfo;
      }
      if ( !v39->static_fields->_isPlaying_k__BackingField )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm((System_String_o *)StringLiteral_9409/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_214:
      v40 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v40, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v40;
      v16 = &v2->fields.__2__current;
      sub_B52920(v16);
      v17 = 27;
      goto LABEL_488;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_214;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_193:
      v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v38, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v38;
      v16 = &v2->fields.__2__current;
      sub_B52920(v16);
      v17 = 28;
      goto LABEL_488;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_193;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      goto LABEL_230;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_234;
    case 0x1E:
      p_fields->__1__state = -1;
      goto LABEL_248;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_269;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_275;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_285;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_290;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_310;
    case 0x24:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_401;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v11 = (const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      goto LABEL_311;
    case 0x25:
      p_fields->__1__state = -1;
      v8 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v8 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v8->static_fields->PushStateSendedKey,
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
        v10 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v10 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v10->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_490;
      _4__this->fields._IsInitialized = 1;
      LOBYTE(_4__this->fields.scenetype) = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, 0LL);
      if ( v2->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_490;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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