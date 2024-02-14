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

  if ( (byte_4212FFD & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_8201/*"IsNotificationStatusSend"*/, v8);
    sub_B0D8A4(&StringLiteral_8213/*"IsReBootCacheClearKey"*/, v9);
    sub_B0D8A4(&StringLiteral_20097/*"ja-JP"*/, v10);
    sub_B0D8A4(&StringLiteral_23529/*"yyyy年MM月dd日HH時mm分"*/, v11);
    byte_4212FFD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ManagementManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_8201/*"IsNotificationStatusSend"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8201/*"IsNotificationStatusSend"*/;
  sub_B0D840(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = ManagementManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_8213/*"IsReBootCacheClearKey"*/;
  v14->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8213/*"IsReBootCacheClearKey"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v14->RebootCacheClearKey, v15, v16, v17, v18, v19, v20, v21);
  v22 = ManagementManager_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_23529/*"yyyy年MM月dd日HH時mm分"*/;
  v22->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_23529/*"yyyy年MM月dd日HH時mm分"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v22->DATE_TIME_DISP_FORMAT, v23, v24, v25, v26, v27, v28, v29);
  v30 = ManagementManager_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_20097/*"ja-JP"*/;
  v30->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20097/*"ja-JP"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v30->DEFAULT_CULTURE_NAME, v31, v32, v33, v34, v35, v36, v37);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4212FFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_4212FFC = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  if ( (byte_4212FEA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, errorText);
    sub_B0D8A4(&string___TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_677/*"):"*/, v9);
    sub_B0D8A4(&StringLiteral_6723/*"Firebase.FirebaseApp"*/, v10);
    this = (ManagementManager_o *)sub_B0D8A4(&StringLiteral_646/*"(ratio: "*/, v11);
    byte_4212FEA = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_34;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6723/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_B0D8BC(string___TypeInfo, 5LL);
    if ( this )
    {
      v18 = (System_String_array *)this;
      if ( !errorText || (this = (ManagementManager_o *)sub_B0D964(errorText, this->klass->_1.element_class)) != 0LL )
      {
        if ( !v18->max_length )
          goto LABEL_35;
        v18->m_Items[0] = errorText;
        sub_B0D840(
          (BattleServantConfConponent_o *)v18->m_Items,
          (System_Int32_array **)errorText,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        this = (ManagementManager_o *)StringLiteral_646/*"(ratio: "*/;
        if ( StringLiteral_646/*"(ratio: "*/ )
        {
          this = (ManagementManager_o *)sub_B0D964(StringLiteral_646/*"(ratio: "*/, v18->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_36;
          v25 = (System_Int32_array **)StringLiteral_646/*"(ratio: "*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v18->max_length <= 1 )
          goto LABEL_35;
        v18->m_Items[1] = (System_String_o *)v25;
        sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
        this = (ManagementManager_o *)System_Single__ToString(v27, (const MethodInfo *)&v51);
        v34 = (System_Int32_array **)this;
        if ( !this || (this = (ManagementManager_o *)sub_B0D964(this, v18->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v18->max_length <= 2 )
            goto LABEL_35;
          v18->m_Items[2] = (System_String_o *)v34;
          sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
          this = (ManagementManager_o *)StringLiteral_677/*"):"*/;
          if ( StringLiteral_677/*"):"*/ )
          {
            this = (ManagementManager_o *)sub_B0D964(StringLiteral_677/*"):"*/, v18->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_36;
            v41 = (System_Int32_array **)StringLiteral_677/*"):"*/;
          }
          else
          {
            v41 = 0LL;
          }
          if ( v18->max_length <= 3 )
            goto LABEL_35;
          v18->m_Items[3] = (System_String_o *)v41;
          sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
          this = (ManagementManager_o *)sub_B0D964(exceptionMessage, v18->obj.klass->_1.element_class);
          if ( this )
          {
            if ( v18->max_length > 4 )
            {
              v18->m_Items[4] = exceptionMessage;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v18->m_Items[4],
                (System_Int32_array **)exceptionMessage,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
              v48 = (Il2CppObject *)System_String__Concat_43930028(v18, 0LL);
              if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError(v48, 0LL);
              return;
            }
LABEL_35:
            v49 = sub_B0D9A8(this);
            sub_B0D948(v49, 0LL);
          }
        }
      }
LABEL_36:
      v50 = sub_B0D99C();
      sub_B0D948(v50, 0LL);
    }
LABEL_34:
    sub_B0D97C(this);
  }
  v26 = (Il2CppObject *)System_String__Concat_43849904(errorText, exceptionMessage, 0LL);
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

  if ( (byte_4212FE6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_4212FE6 = 1;
  }
  if ( !SingletonMonoBehaviour_WarBoardManager___CheckInstance(
          (SingletonMonoBehaviour_WarBoardManager__o *)this,
          (const MethodInfo_2A71308 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4212FFA & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, boot);
    byte_4212FFA = 1;
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

  if ( (byte_4212FF9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4212FF9 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_B0D97C(debugInfoRootObject);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4212FE4 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, v1);
    byte_4212FE4 = 1;
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

  if ( (byte_4212FF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_4212FF0 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__transitionScene(Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_40735960(0LL);
}


void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    UnityEngine_Application__Quit_40735960(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212FED & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, method);
    byte_4212FED = 1;
  }
  v4 = sub_B0D974(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, method, v2);
  ManagementManager__InitializeAdManagerAndFirebase_d__34___ctor(
    (ManagementManager__InitializeAdManagerAndFirebase_d__34_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_4212FF7 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, method);
    byte_4212FF7 = 1;
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_42124C8 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, method);
    byte_42124C8 = 1;
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

  if ( (byte_4212FF8 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_4212FF8 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return WebViewManager__get_IsBusy(Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4212FEB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22883/*"true"*/, message);
    byte_4212FEB = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_22883/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagementManager_c *v3; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4212FFB & 1) == 0 )
  {
    sub_B0D8A4(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_B0D8A4(&ManagementManager_TypeInfo, v2);
    byte_4212FFB = 1;
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

  if ( (byte_4212FE5 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, v1);
    byte_4212FE5 = 1;
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

  if ( (byte_4212FE7 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&System_Type_TypeInfo, v4);
    sub_B0D8A4(&UnityGamingServicesBehaviour_var, v5);
    byte_4212FE7 = 1;
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
    sub_B0D97C(TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v9);
  v11 = ManagementManager__startCheckAll(this, 0, 0, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v3; // x1

  if ( this->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v3) )
      UnityEngine_Application__Quit_40735960(0LL);
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

  if ( (byte_4212FF6 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4212FF6 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  _BOOL8 _28088484; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_4212FF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v8);
    byte_4212FF5 = 1;
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
  _28088484 = TutorialFlag__Get_28088484(102, 0LL);
  if ( _28088484 )
  {
LABEL_11:
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, result, method);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v11,
                                                           (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B0D97C(0LL);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_28088484, result, method);
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

  if ( (byte_4212FF3 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4212FF3 = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_4212FF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ManagementManager_callbackTopHome__, result);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TopHomeRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v8);
    byte_4212FF2 = 1;
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
  if ( TutorialFlag__Get_28088484(102, 0LL) )
  {
LABEL_11:
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, result, method);
    NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v10,
                                                           (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B0D97C(0LL);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
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
  UnityEngine_Camera_o *Component_srcLineSprite; // x0
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  AvalonVideoPlayer_o *v22; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_4212FE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_4205/*"CommonUI/UI Root/SystemUICamera"*/, v6);
    sub_B0D8A4(&StringLiteral_9237/*"MovieRoot"*/, v7);
    byte_4212FE8 = 1;
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
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4205/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v13 = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, v11, v12);
    UnityEngine_GameObject___ctor(v13, (System_String_o *)StringLiteral_9237/*"MovieRoot"*/, 0LL);
    if ( !v13
      || (v15 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                         v13,
                                         (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v15,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields._videoPlayer_k__BackingField,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21),
          !v10)
      || (v22 = *p_videoPlayer_k__BackingField,
          Component_srcLineSprite = (UnityEngine_Camera_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v10,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v22) )
    {
      sub_B0D97C(Component_srcLineSprite);
    }
    AvalonVideoPlayer__initialize(v22, Component_srcLineSprite, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_31184716(v13, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_4212FE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_4212FE2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return HIDWORD(Instance->fields.titleLabel);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_4212FE3 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, v1);
    byte_4212FE3 = 1;
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
  __int64 v20; // x1
  __int64 v21; // x1
  ManagementManager_c *v22; // x0
  ScriptManager_o *Instance; // x0
  AdManager_o *v24; // x0
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *v26; // x1

  if ( (byte_4212FE9 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, isLogin);
    sub_B0D8A4(&CTouch_TypeInfo, v5);
    sub_B0D8A4(&CommonEffectManager_TypeInfo, v6);
    sub_B0D8A4(&FirebaseScript_TypeInfo, v7);
    sub_B0D8A4(&System_GC_TypeInfo, v8);
    sub_B0D8A4(&ManagementManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v18);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v20);
    sub_B0D8A4(&SoundManager_TypeInfo, v21);
    byte_4212FE9 = 1;
  }
  if ( !LOBYTE(this->fields.scenetype) )
  {
    LOBYTE(this->fields.scenetype) = 1;
    v22 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v22 = ManagementManager_TypeInfo;
    }
    v22->static_fields->isDuringStartup = 1;
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    ScriptManager__reboot(Instance, 1, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__Reboot((CommonUI_o *)Instance, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__Reboot(0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B0D97C(Instance);
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_43098652(0LL);
    v24 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v24 )
      sub_B0D97C(0LL);
    AdManager__Initialize(v24, 2, 0LL);
    if ( (BYTE3(FirebaseScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    }
    FirebaseScript__Initialize(0LL);
    v26 = ManagementManager__startCheckAll(this, 1, isLogin, v25);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  NetworkManager_LoginCallbackFunc_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4212FF1 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4212FF1 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v8 = (NetworkManager_LoginCallbackFunc_o *)sub_B0D974(NetworkManager_LoginCallbackFunc_TypeInfo, v6, v7);
  NetworkManager_LoginCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_B0D97C(v9);
  NetworkManager__RequestLogin(Instance, v8, 1, 0LL);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  NetworkManager_LoginCallbackFunc_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4212FF4 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_4212FF4 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v8 = (NetworkManager_LoginCallbackFunc_o *)sub_B0D974(NetworkManager_LoginCallbackFunc_TypeInfo, v6, v7);
  NetworkManager_LoginCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_B0D97C(v9);
  NetworkManager__RequestLogin(Instance, v8, 1, 0LL);
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
  sub_B0D840(
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4212FEC & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager__startCheckAll_d__33_TypeInfo, isReboot);
    byte_4212FEC = 1;
  }
  v7 = sub_B0D974(ManagementManager__startCheckAll_d__33_TypeInfo, isReboot, isLogin);
  ManagementManager__startCheckAll_d__33___ctor((ManagementManager__startCheckAll_d__33_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v7 + 32) = isReboot;
  *(_BYTE *)(v7 + 56) = isLogin;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4212FEE & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_4212FEE = 1;
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

  if ( (byte_4212FEF & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    sub_B0D8A4(&ScrTerminalListTop_TypeInfo, v2);
    sub_B0D8A4(&ServantCommentManager_TypeInfo, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    byte_4212FEF = 1;
  }
  MovieFileMerge__Delete_20212788(0LL);
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
  if ( !byte_4210876 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4210876 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v8; // x19
  AdManager_o *Instance; // x0
  AdManager_o *v10; // x0

  if ( (byte_4210FAA & 1) == 0 )
  {
    sub_B0D8A4(&FirebaseScript_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v4);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5);
    byte_4210FAA = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    AdManager__Initialize(Instance, 0, 0LL);
    v10 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v10 )
      sub_B0D97C(0LL);
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
      v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      sub_B0D840(&this->fields.__2__current, v8);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4210FA9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flag);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__, v6);
    sub_B0D8A4(&ManagementManager___c__DisplayClass33_1_TypeInfo, v7);
    byte_4210FA9 = 1;
  }
  v8 = sub_B0D974(ManagementManager___c__DisplayClass33_1_TypeInfo, flag, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_B0D840(v8 + 24, this),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v8,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v9);
  }
  CommonUI__CloseConfirmDialog_17017160(Instance, v13, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v2; // x2
  ManagementManager__startCheckAll_d__33_o *v3; // x19
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
  __int64 v68; // x1
  __int64 v69; // x1
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  UnityEngine_AsyncOperation_o *v73; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ManagementManager_c *v76; // x0
  bool Notiffication; // w0
  ManagementManager_c *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  const MethodInfo_2A71064 *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  NetworkManager_ResultCallbackFunc_o *v86; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  UnityEngine_WaitForEndOfFrame_o *v89; // x20
  __int64 v90; // x1
  CrashReporter_o *v91; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  UnityEngine_Coroutine_o *started; // x0
  Il2CppObject **v94; // x19
  int v95; // w8
  Il2CppObject **p__8__1; // x21
  Il2CppObject *v97; // x8
  Il2CppObject *wait_5__8; // x1
  int v99; // w8
  System_Collections_IEnumerator_o *v100; // x0
  __int64 v101; // x1
  DataManager_c *v102; // x0
  int32_t updateMasterResult_5__9; // w8
  CommonUI_o *v104; // x21
  System_String_o *v105; // x22
  __int64 v106; // x1
  __int64 v107; // x2
  ErrorDialog_ClickDelegate_o *v108; // x23
  UnityEngine_WaitForEndOfFrame_o *v109; // x20
  __int64 v110; // x1
  __int64 v111; // x2
  UnityEngine_WaitForEndOfFrame_o *v112; // x20
  ManagementManager__startCheckAll_d__33_o *v113; // x21
  __int64 v114; // x0
  __int64 v115; // x1
  System_Collections_IEnumerator_o *v116; // x0
  UnityEngine_WaitForEndOfFrame_o *v117; // x20
  __int64 v118; // x1
  DataManager_c *v119; // x0
  UnityEngine_Coroutine_o *v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v124; // x21
  __int64 v125; // x1
  __int64 v126; // x2
  UnityEngine_WaitForEndOfFrame_o *v127; // x20
  Il2CppObject *waitForServerTime_5__7; // x1
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x1
  __int64 v133; // x2
  UnityEngine_WaitForEndOfFrame_o *v134; // x20
  __int64 v135; // x1
  __int64 v136; // x2
  UnityEngine_WaitForEndOfFrame_o *v137; // x20
  UnityEngine_WaitForEndOfFrame_o *v138; // x20
  __int64 v139; // x1
  LogoMain_c *v140; // x0
  UnityEngine_WaitForEndOfFrame_o *v141; // x20
  __int64 v142; // x1
  __int64 v143; // x2
  System_Collections_IEnumerator_o *v144; // x0
  UnityEngine_Coroutine_o *v145; // x0
  LocalizationManager_c *v146; // x0
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  FSUtility_c *v148; // x0
  UnityEngine_WaitForEndOfFrame_o *v149; // x20
  __int64 v150; // x1
  __int64 v151; // x2
  UnityEngine_WaitForEndOfFrame_o *v152; // x20
  __int64 v153; // x1
  __int64 v154; // x2
  int overrideAssetSoundNameWaitCount_5__5; // w8
  __int64 v156; // x1
  __int64 v157; // x2
  UnityEngine_WaitForEndOfFrame_o *v158; // x20
  __int64 v159; // x1
  __int64 v160; // x2
  UnityEngine_WaitForEndOfFrame_o *v161; // x20
  __int64 v162; // x1
  __int64 v163; // x2
  UnityEngine_WaitForSeconds_o *v164; // x20
  __int64 v165; // x0
  UnityEngine_WaitForEndOfFrame_o *v166; // x20
  UnityEngine_WaitForEndOfFrame_o *v167; // x20
  __int64 v168; // x1
  __int64 v169; // x1
  EncryptedPlayerPrefs_c *v170; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  __int64 v172; // x1
  __int64 v173; // x2
  UnityEngine_WaitForEndOfFrame_o *v174; // x20
  __int64 v175; // x1
  __int64 v176; // x2
  ManagerConfig_c *v177; // x0
  UnityEngine_WaitForEndOfFrame_o *v178; // x20
  __int64 v179; // x1
  __int64 v180; // x2
  UnityEngine_WaitForSeconds_o *v181; // x20
  UnityEngine_WaitForEndOfFrame_o *v182; // x20
  UnityEngine_WaitForEndOfFrame_o *v183; // x20
  UnityEngine_Coroutine_o *v184; // x0
  CommonUI_o *v185; // x21
  System_String_o *v186; // x22
  __int64 v187; // x1
  __int64 v188; // x2
  ErrorDialog_ClickDelegate_o *v189; // x23
  UnityEngine_WaitForEndOfFrame_o *v190; // x20
  UnityEngine_WaitForEndOfFrame_o *v191; // x20
  __int64 v192; // x1
  __int64 v193; // x2
  UnityEngine_WaitForEndOfFrame_o *v194; // x20
  __int64 v195; // x0
  __int64 v196; // x0
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v200; // x0
  __int64 v201; // x1
  __int64 v202; // x2
  ManagerConfig_c *v203; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v205; // x22
  __int64 v206; // x1
  __int64 v207; // x2
  ErrorDialog_ClickDelegate_o *v208; // x23
  int32_t readResult_5__2; // w8
  int32_t *p_readResult_5__2; // x21
  NetworkManager_ResultCallbackFunc_o *v211; // x21
  UnityEngine_WaitForEndOfFrame_o *v212; // x20
  ManagementManager_c *v213; // x0
  __int64 v214; // x1
  __int64 v215; // x2
  Il2CppObject *v216; // x22
  CommonUI_o *v217; // x22
  System_String_o *v218; // x23
  System_String_o *v219; // x24
  System_String_o *v220; // x25
  System_String_o *v221; // x0
  Il2CppObject *v222; // x28
  System_String_o *v223; // x26
  __int64 v224; // x1
  __int64 v225; // x2
  CommonConfirmDialog_ClickDelegate_o *v226; // x27
  UnityEngine_WaitForEndOfFrame_o *v227; // x20
  Il2CppObject *v228; // x19
  System_String_o *v229; // x19
  System_String_o *DispFriendCode; // x22
  CommonUI_o *v231; // x22
  System_String_o *v232; // x23
  ManagementManager__startCheckAll_d__33_o *v233; // x24
  void *v234; // x25
  System_String_o *v235; // x21
  Il2CppObject *v236; // x2
  System_String_o *v237; // x19
  __int64 v238; // x1
  __int64 v239; // x2
  ErrorDialog_ClickDelegate_o *v240; // x23
  ManagementManager_c *v241; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-90h]
  int v243; // [xsp+38h] [xbp-58h] BYREF
  int v244; // [xsp+3Ch] [xbp-54h] BYREF

  v3 = this;
  if ( (byte_4210FAB & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v4);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&ErrorDialog_ClickDelegate_TypeInfo, v6);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B0D8A4(&CommonServicePluginScript_TypeInfo, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v10);
    sub_B0D8A4(&FSUtility_TypeInfo, v11);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&LogoMain_TypeInfo, v15);
    sub_B0D8A4(&Method_ManagementManager_EndLogDialog__, v16);
    sub_B0D8A4(&Method_ManagementManager_EndQuitDialog__, v17);
    sub_B0D8A4(&Method_ManagementManager_EndRetryDialog__, v18);
    sub_B0D8A4(&Method_ManagementManager_callbackAccountRegist__, v19);
    sub_B0D8A4(&Method_ManagementManager_callbackTopGameData__, v20);
    sub_B0D8A4(&ManagementManager_TypeInfo, v21);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v22);
    sub_B0D8A4(&Method_NetworkManager_getRequest_AccountRegistRequest___, v23);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TopGameDataRequest___, v24);
    sub_B0D8A4(&NetworkManager_TypeInfo, v25);
    sub_B0D8A4(&OptionManager_TypeInfo, v26);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v27);
    sub_B0D8A4(&NetworkManager_ReadResult_TypeInfo, v28);
    sub_B0D8A4(&ResolutionManager_TypeInfo, v29);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v30);
    sub_B0D8A4(&ServantCommentManager_TypeInfo, v31);
    sub_B0D8A4(&SignedData_TypeInfo, v32);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v33);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v35);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v37);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v38);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v39);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v40);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v41);
    sub_B0D8A4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v42);
    sub_B0D8A4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v43);
    sub_B0D8A4(&SoundManager_TypeInfo, v44);
    sub_B0D8A4(&string___TypeInfo, v45);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v46);
    sub_B0D8A4(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__, v47);
    sub_B0D8A4(&ManagementManager___c__DisplayClass33_0_TypeInfo, v48);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v49);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v50);
    sub_B0D8A4(&StringLiteral_7310/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v51);
    sub_B0D8A4(&StringLiteral_9375/*"NOW_LOADING"*/, v52);
    sub_B0D8A4(&StringLiteral_9308/*"NETWORK_ERROR_DISK_FULL"*/, v53);
    sub_B0D8A4(&StringLiteral_6338/*"F39UThNh"*/, v54);
    sub_B0D8A4(&StringLiteral_7313/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v55);
    sub_B0D8A4(&StringLiteral_8938/*"Management"*/, v56);
    sub_B0D8A4(&StringLiteral_7311/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v57);
    sub_B0D8A4(&StringLiteral_9724/*"NotifyRequestPermissionsResultFromPlugin"*/, v58);
    sub_B0D8A4(&StringLiteral_7309/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v59);
    sub_B0D8A4(&StringLiteral_5110/*"DataServerFolderName"*/, v60);
    sub_B0D8A4(&StringLiteral_16382/*"android.permission.POST_NOTIFICATIONS"*/, v61);
    sub_B0D8A4(&StringLiteral_9316/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v62);
    sub_B0D8A4(&StringLiteral_9309/*"NETWORK_ERROR_FIEND_CODE"*/, v63);
    sub_B0D8A4(&StringLiteral_12606/*"SYSTEM"*/, v64);
    sub_B0D8A4(&StringLiteral_1/*""*/, v65);
    sub_B0D8A4(&StringLiteral_19973/*"ioqrk4Om"*/, v66);
    sub_B0D8A4(&StringLiteral_1159/*"2pC0bIYM"*/, v67);
    sub_B0D8A4(&StringLiteral_9310/*"NETWORK_ERROR_READ_AUTH"*/, v68);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_B0D8A4(&StringLiteral_9317/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v69);
    byte_4210FAB = 1;
  }
  p_fields = &v3->fields;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      isReboot = v3->fields.isReboot;
      v3->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_113;
      v73 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v3->fields.__2__current = (Il2CppObject *)v73;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, v73);
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
        goto LABEL_488;
      v116 = ManagementManager__InitializeAdManagerAndFirebase(_4__this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v116;
      v94 = &v3->fields.__2__current;
      sub_B0D840(v94, v116);
      v95 = 2;
      goto LABEL_486;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
      v100 = NetworkManager__Initialize((NetworkManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v100;
      v94 = &v3->fields.__2__current;
      sub_B0D840(v94, v100);
      v95 = 3;
      goto LABEL_486;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v3->fields.isReboot )
      {
        v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v110, v111);
        UnityEngine_WaitForEndOfFrame___ctor(v112, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v112;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v112);
        v95 = 4;
        goto LABEL_486;
      }
LABEL_106:
      this = (ManagementManager__startCheckAll_d__33_o *)sub_B0D8BC(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_488;
      v113 = this;
      v114 = StringLiteral_1159/*"2pC0bIYM"*/;
      if ( StringLiteral_1159/*"2pC0bIYM"*/ )
      {
        v114 = sub_B0D964(StringLiteral_1159/*"2pC0bIYM"*/, v113->klass->_1.element_class);
        if ( !v114 )
          goto LABEL_410;
        v115 = StringLiteral_1159/*"2pC0bIYM"*/;
      }
      else
      {
        v115 = 0LL;
      }
      if ( !LODWORD(v113->fields.__2__current) )
        goto LABEL_409;
      *(_QWORD *)&v113->fields.isReboot = v115;
      sub_B0D840(&v113->fields.isReboot, v115);
      v114 = StringLiteral_6338/*"F39UThNh"*/;
      if ( StringLiteral_6338/*"F39UThNh"*/ )
      {
        v114 = sub_B0D964(StringLiteral_6338/*"F39UThNh"*/, v113->klass->_1.element_class);
        if ( !v114 )
          goto LABEL_410;
        v168 = StringLiteral_6338/*"F39UThNh"*/;
      }
      else
      {
        v168 = 0LL;
      }
      if ( LODWORD(v113->fields.__2__current) <= 1 )
        goto LABEL_409;
      v113->fields.__4__this = (struct ManagementManager_o *)v168;
      sub_B0D840(&v113->fields.__4__this, v168);
      v114 = StringLiteral_19973/*"ioqrk4Om"*/;
      if ( !StringLiteral_19973/*"ioqrk4Om"*/ )
      {
        v169 = 0LL;
LABEL_328:
        if ( LODWORD(v113->fields.__2__current) > 2 )
        {
          v113->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v169;
          sub_B0D840(&v113->fields.__8__1, v169);
          v170 = EncryptedPlayerPrefs_TypeInfo;
          if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
            v170 = EncryptedPlayerPrefs_TypeInfo;
          }
          static_fields = v170->static_fields;
          static_fields->keys = (struct System_String_array *)v113;
          sub_B0D840(&static_fields->keys, v113);
          if ( !v3->fields.isReboot )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__CheckPermission(
                                                                   (System_String_o *)StringLiteral_16382/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !_4__this )
                  goto LABEL_488;
                _4__this->fields.isPermissionRequesting = 1;
                AndroidPermissionManager__RequestPermission(
                  (System_String_o *)StringLiteral_16382/*"android.permission.POST_NOTIFICATIONS"*/,
                  (System_String_o *)StringLiteral_8938/*"Management"*/,
                  (System_String_o *)StringLiteral_9724/*"NotifyRequestPermissionsResultFromPlugin"*/,
                  0LL);
LABEL_128:
                if ( _4__this->fields.isPermissionRequesting )
                {
                  v117 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              method,
                                                              v2);
                  UnityEngine_WaitForEndOfFrame___ctor(v117, 0LL);
                  v3->fields.__2__current = (Il2CppObject *)v117;
                  v94 = &v3->fields.__2__current;
                  sub_B0D840(v94, v117);
                  v95 = 5;
                  goto LABEL_486;
                }
              }
            }
            else
            {
              if ( !_4__this )
                goto LABEL_488;
              _4__this->fields.isPermissionGranted = 1;
            }
            if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
            if ( this )
            {
              LocalNotificationManagerAndroid__RegisterNotificationChannel(
                (LocalNotificationManagerAndroid_o *)this,
                0LL);
              v194 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v192, v193);
              UnityEngine_WaitForEndOfFrame___ctor(v194, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v194;
              v94 = &v3->fields.__2__current;
              sub_B0D840(v94, v194);
              v95 = 6;
              goto LABEL_486;
            }
LABEL_488:
            sub_B0D97C(this);
          }
LABEL_333:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_488;
          this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, 0LL);
          v3->fields._readResult_5__2 = (int)this;
          if ( !_4__this )
            goto LABEL_488;
          this = (ManagementManager__startCheckAll_d__33_o *)_4__this->fields.debugInfoRootObject;
          if ( !this )
            goto LABEL_488;
          this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_GameObject__get_gameObject(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
          if ( !this )
            goto LABEL_488;
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
            v200 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
            if ( FreeSize < v200 )
              FreeSize = v200;
            if ( FreeSize < 1 )
              break;
            v203 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v203 = ManagerConfig_TypeInfo;
            }
            if ( FreeSize >= v203->static_fields->LIMIT_FREE_SIZE )
              break;
            _4__this->fields.isErrorDialog = 1;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v205 = LocalizationManager__Get((System_String_o *)StringLiteral_9308/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
            v208 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v206, v207);
            ErrorDialog_ClickDelegate___ctor(
              v208,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_EndRetryDialog__,
              0LL);
            if ( !Instance )
              goto LABEL_488;
            CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v205, v208, 0, 0LL);
LABEL_411:
            if ( _4__this->fields.isErrorDialog )
            {
              v227 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
              UnityEngine_WaitForEndOfFrame___ctor(v227, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v227;
              v94 = &v3->fields.__2__current;
              sub_B0D840(v94, v227);
              v95 = 7;
              goto LABEL_486;
            }
          }
          p_readResult_5__2 = &v3->fields._readResult_5__2;
          readResult_5__2 = v3->fields._readResult_5__2;
          if ( readResult_5__2 )
          {
            if ( readResult_5__2 == 1 )
            {
              _4__this->fields.isReadAuth = 0;
              v211 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                              NetworkManager_ResultCallbackFunc_TypeInfo,
                                                              v201,
                                                              v202);
              NetworkManager_ResultCallbackFunc___ctor(
                v211,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_callbackAccountRegist__,
                0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v211,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
              if ( this )
              {
                AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_437:
                v212 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
                UnityEngine_WaitForEndOfFrame___ctor(v212, 0LL);
                v3->fields.__2__current = (Il2CppObject *)v212;
                v94 = &v3->fields.__2__current;
                sub_B0D840(v94, v212);
                v95 = 8;
                goto LABEL_486;
              }
              goto LABEL_488;
            }
            v228 = (Il2CppObject *)StringLiteral_1/*""*/;
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_488;
            if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, 0LL) )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v229 = LocalizationManager__Get((System_String_o *)StringLiteral_9309/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
              if ( !this )
                goto LABEL_488;
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
                v231 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v232 = LocalizationManager__Get((System_String_o *)StringLiteral_9310/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)j_il2cpp_value_box_0(
                                                                     NetworkManager_ReadResult_TypeInfo,
                                                                     p_readResult_5__2);
                if ( this )
                {
                  v233 = this;
                  v234 = (void *)((__int64 (__fastcall *)(ManagementManager__startCheckAll_d__33_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                  *p_readResult_5__2 = *(_DWORD *)j_il2cpp_object_unbox_0(v233);
                  v235 = (System_String_o *)StringLiteral_1/*""*/;
                  v236 = (Il2CppObject *)(v234 ? v234 : StringLiteral_1/*""*/);
                  v237 = System_String__Format_43845440(v232, v228, v236, 0LL);
                  v240 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v238, v239);
                  ErrorDialog_ClickDelegate___ctor(
                    v240,
                    (Il2CppObject *)_4__this,
                    Method_ManagementManager_EndQuitDialog__,
                    0LL);
                  if ( v231 )
                  {
                    CommonUI__OpenErrorDialog(v231, v235, v237, v240, 0, 0LL);
                    return 0;
                  }
                }
                goto LABEL_488;
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v229 = LocalizationManager__Get((System_String_o *)StringLiteral_9309/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            }
            v228 = (Il2CppObject *)System_String__Format(v229, (Il2CppObject *)DispFriendCode, 0LL);
            goto LABEL_470;
          }
LABEL_438:
          v3->fields._isCacheCheck_5__3 = 0;
LABEL_439:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_488;
          DataManager__Initialize((DataManager_o *)this, 0LL);
          if ( !v3->fields.isReboot && !v3->fields._isCacheCheck_5__3 )
          {
            v3->fields._isCacheCheck_5__3 = 1;
            v213 = ManagementManager_TypeInfo;
            if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v213 = ManagementManager_TypeInfo;
            }
            if ( UnityEngine_PlayerPrefs__HasKey(v213->static_fields->RebootCacheClearKey, 0LL) )
            {
              v216 = (Il2CppObject *)sub_B0D974(ManagementManager___c__DisplayClass33_0_TypeInfo, v214, v215);
              System_Object___ctor(v216, 0LL);
              v3->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v216;
              p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
              sub_B0D840(&v3->fields.__8__1, v216);
              if ( !v3->fields.__8__1 )
                goto LABEL_488;
              v3->fields.__8__1->fields.confirmed = 0;
              if ( !*p__8__1 )
                goto LABEL_488;
              LOBYTE((*p__8__1)[1].klass) = 0;
              v217 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v218 = LocalizationManager__Get((System_String_o *)StringLiteral_7313/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
              v219 = LocalizationManager__Get((System_String_o *)StringLiteral_7311/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
              v220 = LocalizationManager__Get((System_String_o *)StringLiteral_7310/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
              v221 = LocalizationManager__Get((System_String_o *)StringLiteral_7309/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
              v222 = *p__8__1;
              v223 = v221;
              v226 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                              CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                              v224,
                                                              v225);
              CommonConfirmDialog_ClickDelegate___ctor(
                v226,
                v222,
                Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
                0LL);
              if ( !v217 )
                goto LABEL_488;
              CommonUI__OpenConfirmDecideDlg(v217, v218, v219, v220, v223, v226, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
LABEL_59:
              v97 = *p__8__1;
              if ( !*p__8__1 )
                goto LABEL_488;
              if ( !BYTE1(v97[1].klass) )
              {
                v183 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
                UnityEngine_WaitForEndOfFrame___ctor(v183, 0LL);
                v3->fields.__2__current = (Il2CppObject *)v183;
                v94 = &v3->fields.__2__current;
                sub_B0D840(v94, v183);
                v95 = 9;
                goto LABEL_486;
              }
              if ( LOBYTE(v97[1].klass) )
              {
                if ( !_4__this )
                  goto LABEL_488;
                ManagementManager__startUpCacheClear(_4__this, 0LL);
              }
              *p__8__1 = 0LL;
              sub_B0D840(p__8__1, 0LL);
            }
            else
            {
              v241 = ManagementManager_TypeInfo;
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                v241 = ManagementManager_TypeInfo;
              }
              UnityEngine_PlayerPrefs__SetInt(v241->static_fields->RebootCacheClearKey, 1, 0LL);
              UnityEngine_PlayerPrefs__Save(0LL);
            }
          }
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( this )
          {
            CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
            JUMPOUT(0x11110C0LL);
          }
          goto LABEL_488;
        }
LABEL_409:
        v195 = sub_B0D9A8(v114);
        sub_B0D948(v195, 0LL);
      }
      v114 = sub_B0D964(StringLiteral_19973/*"ioqrk4Om"*/, v113->klass->_1.element_class);
      if ( v114 )
      {
        v169 = StringLiteral_19973/*"ioqrk4Om"*/;
        goto LABEL_328;
      }
LABEL_410:
      v196 = sub_B0D99C();
      sub_B0D948(v196, 0LL);
    case 4:
      p_fields->__1__state = -1;
      goto LABEL_106;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_128;
      goto LABEL_488;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_333;
    case 7:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_488;
      goto LABEL_411;
    case 8:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_488;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_437;
      goto LABEL_438;
    case 9:
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_59;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
      if ( !byte_4210FAF )
      {
        sub_B0D8A4(&DataManager_TypeInfo, v121);
        byte_4210FAF = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v3->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( (this[2].fields._updateMasterResult_5__9 & 0x4000000) != 0 && !this[2].fields.__1__state )
          j_il2cpp_runtime_class_init_0(this);
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_488;
      _4__this->fields.isReadGameData = 0;
      v124 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v121, v122);
      NetworkManager_ResultCallbackFunc___ctor(
        v124,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v124,
                                                           (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_488;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v127 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v125, v126);
      UnityEngine_WaitForEndOfFrame___ctor(v127, 0LL);
      v3->fields._waitForServerTime_5__7 = v127;
      sub_B0D840(&v3->fields._waitForServerTime_5__7, v127);
      goto LABEL_163;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_488;
      if ( _4__this->fields.isReadGameData )
      {
        _4__this->fields.isReadGameData = 0;
        v86 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
        NetworkManager_ResultCallbackFunc___ctor(
          v86,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackTopGameData__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v86,
                                                             (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
        if ( !this )
          goto LABEL_488;
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v89 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v87, v88);
        UnityEngine_WaitForEndOfFrame___ctor(v89, 0LL);
        v3->fields._wait_5__8 = v89;
        sub_B0D840(&v3->fields._wait_5__8, v89);
LABEL_66:
        wait_5__8 = (Il2CppObject *)v3->fields._wait_5__8;
        v3->fields.__2__current = wait_5__8;
        sub_B0D840(&v3->fields.__2__current, wait_5__8);
        v99 = 12;
      }
      else
      {
LABEL_163:
        waitForServerTime_5__7 = (Il2CppObject *)v3->fields._waitForServerTime_5__7;
        v3->fields.__2__current = waitForServerTime_5__7;
        sub_B0D840(&v3->fields.__2__current, waitForServerTime_5__7);
        v99 = 11;
      }
LABEL_165:
      v3->fields.__1__state = v99;
      return 1;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_488;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_66;
      v91 = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_4210FB0 )
      {
        sub_B0D8A4(&NetworkManager_TypeInfo, v90);
        byte_4210FB0 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v91 )
        goto LABEL_488;
      CrashReporter__AddCustomKey(
        v91,
        (System_String_o *)StringLiteral_5110/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v3->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          started = UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                      (UnityEngine_MonoBehaviour_o *)_4__this,
                      MasterData,
                      0LL);
          v3->fields.__2__current = (Il2CppObject *)started;
          v94 = &v3->fields.__2__current;
          sub_B0D840(v94, started);
          v95 = 13;
          goto LABEL_486;
        }
      }
      else
      {
LABEL_140:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v3->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v120 = UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                     (UnityEngine_MonoBehaviour_o *)_4__this,
                     (System_Collections_IEnumerator_o *)this,
                     0LL);
            v3->fields.__2__current = (Il2CppObject *)v120;
            v94 = &v3->fields.__2__current;
            sub_B0D840(v94, v120);
            v95 = 15;
            goto LABEL_486;
          }
        }
      }
      goto LABEL_488;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
      if ( !byte_4210FB1 )
      {
        sub_B0D8A4(&DataManager_TypeInfo, v118);
        byte_4210FB1 = 1;
      }
      v119 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v119 = DataManager_TypeInfo;
      }
      if ( v119->static_fields->readMasterDataResult == 1 )
        goto LABEL_140;
      if ( (BYTE3(v119->vtable._0_Equals.methodPtr) & 4) != 0 && !v119->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v119);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v174 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v172, v173);
      UnityEngine_WaitForEndOfFrame___ctor(v174, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v174;
      v94 = &v3->fields.__2__current;
      sub_B0D840(v94, v174);
      v95 = 14;
      goto LABEL_486;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_439;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
      if ( !byte_4210FB2 )
      {
        sub_B0D8A4(&DataManager_TypeInfo, v101);
        byte_4210FB2 = 1;
      }
      v102 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v102 = DataManager_TypeInfo;
      }
      v3->fields._updateMasterResult_5__9 = v102->static_fields->updateMasterDataResult;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      }
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v3->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_25515316((NetworkManager_o *)this, 0LL);
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v184 = UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       (System_Collections_IEnumerator_o *)this,
                       0LL);
              v3->fields.__2__current = (Il2CppObject *)v184;
              v94 = &v3->fields.__2__current;
              sub_B0D840(v94, v184);
              v95 = 18;
              goto LABEL_486;
            }
          }
        }
        goto LABEL_488;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_488;
        _4__this->fields.isErrorDialog = 1;
        v104 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v105 = LocalizationManager__Get((System_String_o *)StringLiteral_9316/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v108 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v106, v107);
        ErrorDialog_ClickDelegate___ctor(v108, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v104 )
          goto LABEL_488;
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          v104,
          (System_String_o *)StringLiteral_1/*""*/,
          v105,
          v108,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
LABEL_91:
        if ( _4__this->fields.isErrorDialog )
        {
          v109 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
          UnityEngine_WaitForEndOfFrame___ctor(v109, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v109;
          v94 = &v3->fields.__2__current;
          sub_B0D840(v94, v109);
          v95 = 16;
          goto LABEL_486;
        }
        if ( v3->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_396;
      }
      else if ( !_4__this )
      {
        goto LABEL_488;
      }
      _4__this->fields.isErrorDialog = 1;
      v185 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v186 = LocalizationManager__Get((System_String_o *)StringLiteral_9317/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v189 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v187, v188);
      ErrorDialog_ClickDelegate___ctor(v189, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v185 )
        goto LABEL_488;
      CommonUI__OpenRetryDialog(v185, (System_String_o *)StringLiteral_1/*""*/, v186, v189, 0, 0LL);
LABEL_394:
      if ( _4__this->fields.isErrorDialog )
      {
        v190 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v190, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v190;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v190);
        v95 = 17;
        goto LABEL_486;
      }
LABEL_396:
      v3->fields._waitForServerTime_5__7 = 0LL;
      sub_B0D840(&v3->fields._waitForServerTime_5__7, 0LL);
      v3->fields._wait_5__8 = 0LL;
      sub_B0D840(&v3->fields._wait_5__8, 0LL);
      goto LABEL_439;
    case 0x10:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_488;
      goto LABEL_91;
    case 0x11:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_488;
      goto LABEL_394;
    case 0x12:
      v3->fields.__1__state = -1;
      v244 = 0;
      v129 = j_il2cpp_value_box_0(int_TypeInfo, &v244);
      v3->fields.__2__current = (Il2CppObject *)v129;
      sub_B0D840(&v3->fields.__2__current, v129);
      v99 = 19;
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
        v134 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v132, v133);
        UnityEngine_WaitForEndOfFrame___ctor(v134, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v134;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v134);
        v95 = 20;
        goto LABEL_486;
      }
LABEL_215:
      v3->fields._isLoad_5__4 = 0;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_488;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_354:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_488;
        if ( !BYTE2(this->fields.__4__this) )
        {
          v182 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v175, v176);
          UnityEngine_WaitForEndOfFrame___ctor(v182, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v182;
          v94 = &v3->fields.__2__current;
          sub_B0D840(v94, v182);
          v95 = 21;
          goto LABEL_486;
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_488;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12606/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v177 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v177 = ManagerConfig_TypeInfo;
          }
          if ( v177->static_fields->UseStandaloneAsset )
          {
            v3->fields._isLoad_5__4 = 1;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playBgm((System_String_o *)StringLiteral_9375/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_371:
              v178 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v130, v131);
              UnityEngine_WaitForEndOfFrame___ctor(v178, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v178;
              v94 = &v3->fields.__2__current;
              sub_B0D840(v94, v178);
              v95 = 22;
              goto LABEL_486;
            }
            goto LABEL_488;
          }
LABEL_181:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__getDownloadSize(0LL) >= 1 )
          {
            v137 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v135, v136);
            UnityEngine_WaitForEndOfFrame___ctor(v137, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v137;
            v94 = &v3->fields.__2__current;
            sub_B0D840(v94, v137);
            v95 = 23;
            goto LABEL_486;
          }
        }
LABEL_372:
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__SetOnlineStatus(0LL);
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_25515316((NetworkManager_o *)this, 0LL);
          v181 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v179, v180);
          UnityEngine_WaitForSeconds___ctor(v181, 0.1, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v181;
          v94 = &v3->fields.__2__current;
          sub_B0D840(v94, v181);
          v95 = 24;
          goto LABEL_486;
        }
        goto LABEL_488;
      }
LABEL_219:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_225:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__4__this) )
            {
              v166 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v142, v143);
              UnityEngine_WaitForEndOfFrame___ctor(v166, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v166;
              v94 = &v3->fields.__2__current;
              sub_B0D840(v94, v166);
              v95 = 25;
              goto LABEL_486;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v144 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12606/*"SYSTEM"*/,
                       _4__this->fields.downloadParallelMax,
                       0LL);
              v145 = UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                       (UnityEngine_MonoBehaviour_o *)_4__this,
                       v144,
                       0LL);
              v3->fields.__2__current = (Il2CppObject *)v145;
              v94 = &v3->fields.__2__current;
              sub_B0D840(v94, v145);
              v95 = 26;
              goto LABEL_486;
            }
          }
        }
        goto LABEL_488;
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
      if ( !byte_4210FB4 )
      {
        sub_B0D8A4(&LocalizationManager_TypeInfo, method);
        byte_4210FB4 = 1;
      }
      v146 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v146 = LocalizationManager_TypeInfo;
      }
      if ( v146->static_fields->isBusySetAssetData )
      {
        v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v147, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v147;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v147);
        v95 = 29;
        goto LABEL_486;
      }
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_248:
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_4210FB5 )
      {
        sub_B0D8A4(&FSUtility_TypeInfo, method);
        byte_4210FB5 = 1;
      }
      v148 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v148 = FSUtility_TypeInfo;
      }
      if ( v148->static_fields->isBusySetAssetData )
      {
        v149 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v149, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v149;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v149);
        v95 = 30;
        goto LABEL_486;
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
        goto LABEL_488;
      OverwriteAssetSoundName__Initialize((OverwriteAssetSoundName_o *)this, 0LL);
LABEL_269:
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      if ( AtlasManager__IsBusyInitialize(0LL) )
      {
        v152 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v150, v151);
        UnityEngine_WaitForEndOfFrame___ctor(v152, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v152;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v152);
        v95 = 31;
        goto LABEL_486;
      }
      v3->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_275:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !this )
        goto LABEL_488;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v3->fields._overrideAssetSoundNameWaitCount_5__5;
        v3->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v167 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v153, v154);
          UnityEngine_WaitForEndOfFrame___ctor(v167, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v167;
          v94 = &v3->fields.__2__current;
          sub_B0D840(v94, v167);
          v95 = 32;
          goto LABEL_486;
        }
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__initializeAssetStorage(0LL);
LABEL_285:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v158 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v156, v157);
        UnityEngine_WaitForEndOfFrame___ctor(v158, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v158;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v158);
        v95 = 33;
        goto LABEL_486;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_290:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_488;
      if ( LOBYTE(this[5].fields._waitForServerTime_5__7) )
      {
        v161 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v159, v160);
        UnityEngine_WaitForEndOfFrame___ctor(v161, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v161;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v161);
        v95 = 34;
        goto LABEL_486;
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
      if ( v3->fields._isLoad_5__4 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9375/*"NOW_LOADING"*/, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__fadeoutBgm(1.0, 0LL);
          v164 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v162, v163);
          UnityEngine_WaitForSeconds___ctor(v164, 1.0, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v164;
          v94 = &v3->fields.__2__current;
          sub_B0D840(v94, v164);
          v95 = 35;
LABEL_486:
          *((_DWORD *)v94 - 2) = v95;
          return 1;
        }
LABEL_310:
        v81 = (const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_311:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance(v81);
        if ( !this )
          goto LABEL_488;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_488;
        this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( this )
          {
            CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_401:
            v191 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v79, v80);
            UnityEngine_WaitForEndOfFrame___ctor(v191, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v191;
            v94 = &v3->fields.__2__current;
            sub_B0D840(v94, v191);
            v95 = 36;
            goto LABEL_486;
          }
          goto LABEL_488;
        }
      }
      if ( _4__this )
      {
        ManagementManager__BuildInfoOff(_4__this, 0LL);
        v243 = 0;
        v165 = j_il2cpp_value_box_0(int_TypeInfo, &v243);
        v3->fields.__2__current = (Il2CppObject *)v165;
        v94 = &v3->fields.__2__current;
        sub_B0D840(v94, v165);
        v95 = 37;
        goto LABEL_486;
      }
      goto LABEL_488;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_354;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
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
      v3->fields._isLoad_5__4 = 1;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_4210FB3 )
      {
        sub_B0D8A4(&LogoMain_TypeInfo, v139);
        byte_4210FB3 = 1;
      }
      v140 = LogoMain_TypeInfo;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v140 = LogoMain_TypeInfo;
      }
      if ( !v140->static_fields->_isPlaying_k__BackingField )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm((System_String_o *)StringLiteral_9375/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_214:
      v141 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v82, v83);
      UnityEngine_WaitForEndOfFrame___ctor(v141, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v141;
      v94 = &v3->fields.__2__current;
      sub_B0D840(v94, v141);
      v95 = 27;
      goto LABEL_486;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_214;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_193:
      v138 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v84, v85);
      UnityEngine_WaitForEndOfFrame___ctor(v138, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v138;
      v94 = &v3->fields.__2__current;
      sub_B0D840(v94, v138);
      v95 = 28;
      goto LABEL_486;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_193;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_488;
      if ( !CommonUI__IsMaskClick((CommonUI_o *)this, 0LL) )
        goto LABEL_401;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v81 = (const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      goto LABEL_311;
    case 0x25:
      p_fields->__1__state = -1;
      v76 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v76 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v76->static_fields->PushStateSendedKey,
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
        v78 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v78 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v78->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_488;
      _4__this->fields._IsInitialized = 1;
      LOBYTE(_4__this->fields.scenetype) = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, 0LL);
      if ( v3->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !this )
          goto LABEL_488;
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

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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