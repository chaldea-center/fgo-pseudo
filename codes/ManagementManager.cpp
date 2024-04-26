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

  if ( (byte_4350892 & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&StringLiteral_8279/*"IsNotificationStatusSend"*/);
    sub_B70694(&StringLiteral_8291/*"IsReBootCacheClearKey"*/);
    sub_B70694(&StringLiteral_20348/*"ja-JP"*/);
    sub_B70694(&StringLiteral_23834/*"yyyy年MM月dd日HH時mm分"*/);
    byte_4350892 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ManagementManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_8279/*"IsNotificationStatusSend"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8279/*"IsNotificationStatusSend"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ManagementManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_8291/*"IsReBootCacheClearKey"*/;
  v9->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8291/*"IsReBootCacheClearKey"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->RebootCacheClearKey, v10, v11, v12, v13, v14, v15, v16);
  v17 = ManagementManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23834/*"yyyy年MM月dd日HH時mm分"*/;
  v17->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_23834/*"yyyy年MM月dd日HH時mm分"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->DATE_TIME_DISP_FORMAT, v18, v19, v20, v21, v22, v23, v24);
  v25 = ManagementManager_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_20348/*"ja-JP"*/;
  v25->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20348/*"ja-JP"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->DEFAULT_CULTURE_NAME, v26, v27, v28, v29, v30, v31, v32);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4350891 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ManagementManager___ctor__);
    byte_4350891 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  if ( (byte_435087F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_683/*"):"*/);
    sub_B70694(&StringLiteral_6799/*"Firebase.FirebaseApp"*/);
    this = (ManagementManager_o *)sub_B70694(&StringLiteral_651/*"(ratio: "*/);
    byte_435087F = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_34;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6799/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_B706AC(string___TypeInfo, 5LL);
    if ( this )
    {
      v14 = (System_String_array *)this;
      if ( !errorText || (this = (ManagementManager_o *)sub_B70754(errorText, this->klass->_1.element_class)) != 0LL )
      {
        if ( !v14->max_length )
          goto LABEL_35;
        v14->m_Items[0] = errorText;
        sub_B70630(
          (BattleServantConfConponent_o *)v14->m_Items,
          (System_Int32_array **)errorText,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        this = (ManagementManager_o *)StringLiteral_651/*"(ratio: "*/;
        if ( StringLiteral_651/*"(ratio: "*/ )
        {
          this = (ManagementManager_o *)sub_B70754(StringLiteral_651/*"(ratio: "*/, v14->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_36;
          v21 = (System_Int32_array **)StringLiteral_651/*"(ratio: "*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( v14->max_length <= 1 )
          goto LABEL_35;
        v14->m_Items[1] = (System_String_o *)v21;
        sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
        this = (ManagementManager_o *)System_Single__ToString(v23, (const MethodInfo *)&v47);
        v30 = (System_Int32_array **)this;
        if ( !this || (this = (ManagementManager_o *)sub_B70754(this, v14->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v14->max_length <= 2 )
            goto LABEL_35;
          v14->m_Items[2] = (System_String_o *)v30;
          sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
          this = (ManagementManager_o *)StringLiteral_683/*"):"*/;
          if ( StringLiteral_683/*"):"*/ )
          {
            this = (ManagementManager_o *)sub_B70754(StringLiteral_683/*"):"*/, v14->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_36;
            v37 = (System_Int32_array **)StringLiteral_683/*"):"*/;
          }
          else
          {
            v37 = 0LL;
          }
          if ( v14->max_length <= 3 )
            goto LABEL_35;
          v14->m_Items[3] = (System_String_o *)v37;
          sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
          this = (ManagementManager_o *)sub_B70754(exceptionMessage, v14->obj.klass->_1.element_class);
          if ( this )
          {
            if ( v14->max_length > 4 )
            {
              v14->m_Items[4] = exceptionMessage;
              sub_B70630(
                (BattleServantConfConponent_o *)&v14->m_Items[4],
                (System_Int32_array **)exceptionMessage,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              v44 = (Il2CppObject *)System_String__Concat_44838292(v14, 0LL);
              if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError(v44, 0LL);
              return;
            }
LABEL_35:
            v45 = sub_B70798(this);
            sub_B70738(v45, 0LL);
          }
        }
      }
LABEL_36:
      v46 = sub_B7078C();
      sub_B70738(v46, 0LL);
    }
LABEL_34:
    sub_B7076C(this, errorText);
  }
  v22 = (Il2CppObject *)System_String__Concat_44758168(errorText, exceptionMessage, 0LL);
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

  if ( (byte_435087B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__);
    byte_435087B = 1;
  }
  if ( !SingletonMonoBehaviour_WarBoardManager___CheckInstance(
          (SingletonMonoBehaviour_WarBoardManager__o *)this,
          (const MethodInfo_2CE9BD0 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
  }
}


void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_435088F & 1) == 0 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435088F = 1;
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

  if ( (byte_435088E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435088E = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_B7076C(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4350879 & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    byte_4350879 = 1;
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

  if ( (byte_4350885 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4350885 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_41043380(0LL);
}


void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    UnityEngine_Application__Quit_41043380(0LL);
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

  if ( (byte_4350882 & 1) == 0 )
  {
    sub_B70694(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
    byte_4350882 = 1;
  }
  v3 = sub_B70764(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
  ManagementManager__InitializeAdManagerAndFirebase_d__34___ctor(
    (ManagementManager__InitializeAdManagerAndFirebase_d__34_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_435088C & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    byte_435088C = 1;
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_434F41E )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    byte_434F41E = 1;
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

  if ( (byte_435088D & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    byte_435088D = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  return WebViewManager__get_IsBusy(Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4350880 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_23184/*"true"*/);
    byte_4350880 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_23184/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_4350890 & 1) == 0 )
  {
    sub_B70694(&System_Globalization_CultureInfo_TypeInfo);
    sub_B70694(&ManagementManager_TypeInfo);
    byte_4350890 = 1;
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

  if ( (byte_435087A & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    byte_435087A = 1;
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

  if ( (byte_435087C & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&System_Type_TypeInfo);
    sub_B70694(&UnityGamingServicesBehaviour_var);
    byte_435087C = 1;
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
    sub_B7076C(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v6);
  v8 = ManagementManager__startCheckAll(this, 0, 0, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v3; // x1

  if ( this->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v3) )
      UnityEngine_Application__Quit_41043380(0LL);
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

  if ( (byte_435088B & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_435088B = 1;
  }
  v3 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v3 = ManagementManager_TypeInfo;
  }
  v3->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  _BOOL8 _29045252; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1

  if ( (byte_435088A & 1) == 0 )
  {
    sub_B70694(&Method_ManagementManager_callbackTerminalTopHome__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_435088A = 1;
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
  _29045252 = TutorialFlag__Get_29045252(102, 0LL);
  if ( _29045252 )
  {
LABEL_11:
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                           (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B7076C(0LL, v10);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_29045252, v6, v7);
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

  if ( (byte_4350888 & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4350888 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
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

  if ( (byte_4350887 & 1) == 0 )
  {
    sub_B70694(&Method_ManagementManager_callbackTopHome__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_4350887 = 1;
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
  if ( TutorialFlag__Get_29045252(102, 0LL) )
  {
LABEL_11:
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v7,
                                                           (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B7076C(0LL, v9);
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

  if ( (byte_435087D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_4270/*"CommonUI/UI Root/SystemUICamera"*/);
    sub_B70694(&StringLiteral_9323/*"MovieRoot"*/);
    byte_435087D = 1;
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
    v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4270/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v6 = (UnityEngine_GameObject_o *)sub_B70764(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v6, (System_String_o *)StringLiteral_9323/*"MovieRoot"*/, 0LL);
    if ( !v6
      || (v9 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                        v6,
                                        (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v9,
          sub_B70630(
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
                                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v16) )
    {
      sub_B7076C(Component_srcLineSprite, v8);
    }
    AvalonVideoPlayer__initialize(v16, Component_srcLineSprite, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_32503456(v6, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4350877 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4350877 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  return HIDWORD(Instance->fields.titleLabel);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  ManagementManager_c *v1; // x0

  if ( (byte_4350878 & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    byte_4350878 = 1;
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

  if ( (byte_435087E & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&CTouch_TypeInfo);
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&FirebaseScript_TypeInfo);
    sub_B70694(&System_GC_TypeInfo);
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435087E = 1;
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
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    ScriptManager__reboot(Instance, 1, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__Reboot((CommonUI_o *)Instance, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__Reboot(0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B7076C(Instance, v7);
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_44134460(0LL);
    v8 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v8 )
      sub_B7076C(0LL, v9);
    AdManager__Initialize(v8, 2, 0LL);
    if ( (BYTE3(FirebaseScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    }
    FirebaseScript__Initialize(0LL);
    v11 = ManagementManager__startCheckAll(this, 1, isLogin, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4350886 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_B70694(&Method_ManagementManager_callbackTopLogin__);
    sub_B70694(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4350886 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_B70764(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_B7076C(v5, v6);
  NetworkManager__RequestLogin(Instance, v4, 1, 0LL);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4350889 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_B70694(&Method_ManagementManager_callbackTerminalTopLogin__);
    sub_B70694(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4350889 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_B70764(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_B7076C(v5, v6);
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
  sub_B70630(
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

  if ( (byte_4350881 & 1) == 0 )
  {
    sub_B70694(&ManagementManager__startCheckAll_d__33_TypeInfo);
    byte_4350881 = 1;
  }
  v7 = sub_B70764(ManagementManager__startCheckAll_d__33_TypeInfo);
  ManagementManager__startCheckAll_d__33___ctor((ManagementManager__startCheckAll_d__33_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 32) = isReboot;
  *(_BYTE *)(v7 + 56) = isLogin;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_4350883 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_4350883 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
}


void __fastcall ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4350884 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&ScrTerminalListTop_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4350884 = 1;
  }
  MovieFileMerge__Delete_23431436(0LL);
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
  if ( !byte_434DEDA )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEDA = 1;
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

  if ( (byte_434F382 & 1) == 0 )
  {
    sub_B70694(&FirebaseScript_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_434F382 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v7);
    AdManager__Initialize(Instance, 0, 0LL);
    v8 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v8 )
      sub_B7076C(0LL, v9);
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
      v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
      this->fields.__2__current = (Il2CppObject *)v5;
      sub_B70630(&this->fields.__2__current);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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

  if ( (byte_434F381 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__);
    sub_B70694(&ManagementManager___c__DisplayClass33_1_TypeInfo);
    byte_434F381 = 1;
  }
  v5 = sub_B70764(ManagementManager___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B70630(v5 + 24),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_17904524(Instance, v9, 0LL);
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
    sub_B7076C(this, method);
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
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ManagementManager_c *v9; // x0
  bool Notiffication; // w0
  ManagementManager_c *v11; // x0
  const MethodInfo_2CE992C *v12; // x0
  NetworkManager_ResultCallbackFunc_o *v13; // x21
  UnityEngine_WaitForEndOfFrame_o *v14; // x20
  CrashReporter_o *v15; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  Il2CppObject **v17; // x19
  int v18; // w8
  Il2CppObject **p__8__1; // x21
  Il2CppObject *v20; // x8
  int v21; // w8
  DataManager_c *v22; // x0
  int32_t updateMasterResult_5__9; // w8
  CommonUI_o *v24; // x21
  System_String_o *v25; // x22
  ErrorDialog_ClickDelegate_o *v26; // x23
  UnityEngine_WaitForEndOfFrame_o *v27; // x20
  UnityEngine_WaitForEndOfFrame_o *v28; // x20
  ManagementManager__startCheckAll_d__33_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  UnityEngine_WaitForEndOfFrame_o *v32; // x20
  DataManager_c *v33; // x0
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v35; // x21
  UnityEngine_WaitForEndOfFrame_o *v36; // x20
  UnityEngine_WaitForEndOfFrame_o *v37; // x20
  UnityEngine_WaitForEndOfFrame_o *v38; // x20
  UnityEngine_WaitForEndOfFrame_o *v39; // x20
  LogoMain_c *v40; // x0
  UnityEngine_WaitForEndOfFrame_o *v41; // x20
  System_Collections_IEnumerator_o *v42; // x0
  LocalizationManager_c *v43; // x0
  UnityEngine_WaitForEndOfFrame_o *v44; // x20
  FSUtility_c *v45; // x0
  UnityEngine_WaitForEndOfFrame_o *v46; // x20
  UnityEngine_WaitForEndOfFrame_o *v47; // x20
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v49; // x20
  UnityEngine_WaitForEndOfFrame_o *v50; // x20
  UnityEngine_WaitForSeconds_o *v51; // x20
  __int64 v52; // x2
  UnityEngine_WaitForEndOfFrame_o *v53; // x20
  UnityEngine_WaitForEndOfFrame_o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x1
  EncryptedPlayerPrefs_c *v57; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v59; // x20
  ManagerConfig_c *v60; // x0
  UnityEngine_WaitForEndOfFrame_o *v61; // x20
  UnityEngine_WaitForSeconds_o *v62; // x20
  UnityEngine_WaitForEndOfFrame_o *v63; // x20
  UnityEngine_WaitForEndOfFrame_o *v64; // x20
  CommonUI_o *v65; // x21
  System_String_o *v66; // x22
  ErrorDialog_ClickDelegate_o *v67; // x23
  UnityEngine_WaitForEndOfFrame_o *v68; // x20
  UnityEngine_WaitForEndOfFrame_o *v69; // x20
  UnityEngine_WaitForEndOfFrame_o *v70; // x20
  __int64 v71; // x0
  __int64 v72; // x0
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v76; // x0
  ManagerConfig_c *v77; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v79; // x22
  ErrorDialog_ClickDelegate_o *v80; // x23
  int32_t readResult_5__2; // w8
  int32_t *p_readResult_5__2; // x21
  NetworkManager_ResultCallbackFunc_o *v83; // x21
  UnityEngine_WaitForEndOfFrame_o *v84; // x20
  ManagementManager_c *v85; // x0
  Il2CppObject *v86; // x22
  CommonUI_o *v87; // x22
  System_String_o *v88; // x23
  System_String_o *v89; // x24
  System_String_o *v90; // x25
  System_String_o *v91; // x0
  Il2CppObject *v92; // x28
  System_String_o *v93; // x26
  CommonConfirmDialog_ClickDelegate_o *v94; // x27
  UnityEngine_WaitForEndOfFrame_o *v95; // x20
  Il2CppObject *v96; // x19
  System_String_o *v97; // x19
  System_String_o *DispFriendCode; // x22
  CommonUI_o *v99; // x22
  System_String_o *v100; // x23
  __int64 v101; // x2
  ManagementManager__startCheckAll_d__33_o *v102; // x24
  void *v103; // x25
  System_String_o *v104; // x21
  Il2CppObject *v105; // x2
  System_String_o *v106; // x19
  ErrorDialog_ClickDelegate_o *v107; // x23
  ManagementManager_c *v108; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  int v110; // [xsp+48h] [xbp-58h] BYREF
  int v111; // [xsp+4Ch] [xbp-54h] BYREF

  v3 = this;
  if ( (byte_434F383 & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&CommonServicePluginScript_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&EncryptedPlayerPrefs_TypeInfo);
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&LogoMain_TypeInfo);
    sub_B70694(&Method_ManagementManager_EndLogDialog__);
    sub_B70694(&Method_ManagementManager_EndQuitDialog__);
    sub_B70694(&Method_ManagementManager_EndRetryDialog__);
    sub_B70694(&Method_ManagementManager_callbackAccountRegist__);
    sub_B70694(&Method_ManagementManager_callbackTopGameData__);
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_AccountRegistRequest___);
    sub_B70694(&Method_NetworkManager_getRequest_TopGameDataRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&PurchaseBehaviour_TypeInfo);
    sub_B70694(&NetworkManager_ReadResult_TypeInfo);
    sub_B70694(&ResolutionManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&SignedData_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
    sub_B70694(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__);
    sub_B70694(&ManagementManager___c__DisplayClass33_0_TypeInfo);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B70694(&StringLiteral_7387/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_9464/*"NOW_LOADING"*/);
    sub_B70694(&StringLiteral_9395/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_B70694(&StringLiteral_6413/*"F39UThNh"*/);
    sub_B70694(&StringLiteral_7390/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/);
    sub_B70694(&StringLiteral_9023/*"Management"*/);
    sub_B70694(&StringLiteral_7388/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/);
    sub_B70694(&StringLiteral_9814/*"NotifyRequestPermissionsResultFromPlugin"*/);
    sub_B70694(&StringLiteral_7386/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_5178/*"DataServerFolderName"*/);
    sub_B70694(&StringLiteral_16575/*"android.permission.POST_NOTIFICATIONS"*/);
    sub_B70694(&StringLiteral_9403/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_B70694(&StringLiteral_9396/*"NETWORK_ERROR_FIEND_CODE"*/);
    sub_B70694(&StringLiteral_12737/*"SYSTEM"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_20222/*"ioqrk4Om"*/);
    sub_B70694(&StringLiteral_1178/*"2pC0bIYM"*/);
    sub_B70694(&StringLiteral_9397/*"NETWORK_ERROR_READ_AUTH"*/);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_B70694(&StringLiteral_9404/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_434F383 = 1;
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
      v3->fields.__2__current = (Il2CppObject *)UnityEngine_Resources__UnloadUnusedAssets(0LL);
      p__2__current = &v3->fields.__2__current;
      sub_B70630(p__2__current);
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
      v3->fields.__2__current = (Il2CppObject *)ManagementManager__InitializeAdManagerAndFirebase(_4__this, 0LL);
      v17 = &v3->fields.__2__current;
      sub_B70630(v17);
      v18 = 2;
      goto LABEL_488;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      v3->fields.__2__current = (Il2CppObject *)NetworkManager__Initialize((NetworkManager_o *)this, 0LL);
      v17 = &v3->fields.__2__current;
      sub_B70630(v17);
      v18 = 3;
      goto LABEL_488;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v3->fields.isReboot )
      {
        v28 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v28, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v28;
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 4;
        goto LABEL_488;
      }
LABEL_106:
      this = (ManagementManager__startCheckAll_d__33_o *)sub_B706AC(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_490;
      v29 = this;
      v30 = StringLiteral_1178/*"2pC0bIYM"*/;
      if ( StringLiteral_1178/*"2pC0bIYM"*/ )
      {
        v30 = sub_B70754(StringLiteral_1178/*"2pC0bIYM"*/, v29->klass->_1.element_class);
        if ( !v30 )
          goto LABEL_410;
        v31 = StringLiteral_1178/*"2pC0bIYM"*/;
      }
      else
      {
        v31 = 0LL;
      }
      if ( !LODWORD(v29->fields.__2__current) )
        goto LABEL_409;
      *(_QWORD *)&v29->fields.isReboot = v31;
      sub_B70630(&v29->fields.isReboot);
      v30 = StringLiteral_6413/*"F39UThNh"*/;
      if ( StringLiteral_6413/*"F39UThNh"*/ )
      {
        v30 = sub_B70754(StringLiteral_6413/*"F39UThNh"*/, v29->klass->_1.element_class);
        if ( !v30 )
          goto LABEL_410;
        v55 = StringLiteral_6413/*"F39UThNh"*/;
      }
      else
      {
        v55 = 0LL;
      }
      if ( LODWORD(v29->fields.__2__current) <= 1 )
        goto LABEL_409;
      v29->fields.__4__this = (struct ManagementManager_o *)v55;
      sub_B70630(&v29->fields.__4__this);
      v30 = StringLiteral_20222/*"ioqrk4Om"*/;
      if ( !StringLiteral_20222/*"ioqrk4Om"*/ )
      {
        v56 = 0LL;
LABEL_328:
        if ( LODWORD(v29->fields.__2__current) > 2 )
        {
          v29->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v56;
          sub_B70630(&v29->fields.__8__1);
          v57 = EncryptedPlayerPrefs_TypeInfo;
          if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
            v57 = EncryptedPlayerPrefs_TypeInfo;
          }
          static_fields = v57->static_fields;
          static_fields->keys = (struct System_String_array *)v29;
          sub_B70630(&static_fields->keys);
          if ( !v3->fields.isReboot )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__CheckPermission(
                                                                   (System_String_o *)StringLiteral_16575/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !_4__this )
                  goto LABEL_490;
                _4__this->fields.isPermissionRequesting = 1;
                AndroidPermissionManager__RequestPermission(
                  (System_String_o *)StringLiteral_16575/*"android.permission.POST_NOTIFICATIONS"*/,
                  (System_String_o *)StringLiteral_9023/*"Management"*/,
                  (System_String_o *)StringLiteral_9814/*"NotifyRequestPermissionsResultFromPlugin"*/,
                  0LL);
LABEL_128:
                if ( _4__this->fields.isPermissionRequesting )
                {
                  v32 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v32, 0LL);
                  v3->fields.__2__current = (Il2CppObject *)v32;
                  v17 = &v3->fields.__2__current;
                  sub_B70630(v17);
                  v18 = 5;
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
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
            if ( this )
            {
              LocalNotificationManagerAndroid__RegisterNotificationChannel(
                (LocalNotificationManagerAndroid_o *)this,
                0LL);
              v70 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v70, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v70;
              v17 = &v3->fields.__2__current;
              sub_B70630(v17);
              v18 = 6;
              goto LABEL_488;
            }
LABEL_490:
            sub_B7076C(this, method);
          }
LABEL_333:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_490;
          this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, 0LL);
          v3->fields._readResult_5__2 = (int)this;
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
            v76 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
            if ( FreeSize < v76 )
              FreeSize = v76;
            if ( FreeSize < 1 )
              break;
            v77 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v77 = ManagerConfig_TypeInfo;
            }
            if ( FreeSize >= v77->static_fields->LIMIT_FREE_SIZE )
              break;
            _4__this->fields.isErrorDialog = 1;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v79 = LocalizationManager__Get((System_String_o *)StringLiteral_9395/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
            v80 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v80,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_EndRetryDialog__,
              0LL);
            if ( !Instance )
              goto LABEL_490;
            CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v79, v80, 0, 0LL);
LABEL_411:
            if ( _4__this->fields.isErrorDialog )
            {
              v95 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v95, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v95;
              v17 = &v3->fields.__2__current;
              sub_B70630(v17);
              v18 = 7;
              goto LABEL_488;
            }
          }
          p_readResult_5__2 = &v3->fields._readResult_5__2;
          readResult_5__2 = v3->fields._readResult_5__2;
          if ( readResult_5__2 )
          {
            if ( readResult_5__2 == 1 )
            {
              _4__this->fields.isReadAuth = 0;
              v83 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
              NetworkManager_ResultCallbackFunc___ctor(
                v83,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_callbackAccountRegist__,
                0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v83,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_AccountRegistRequest___);
              if ( this )
              {
                AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_437:
                v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
                v3->fields.__2__current = (Il2CppObject *)v84;
                v17 = &v3->fields.__2__current;
                sub_B70630(v17);
                v18 = 8;
                goto LABEL_488;
              }
              goto LABEL_490;
            }
            v96 = (Il2CppObject *)StringLiteral_1/*""*/;
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_490;
            if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, 0LL) )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v97 = LocalizationManager__Get((System_String_o *)StringLiteral_9396/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
                v99 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v100 = LocalizationManager__Get((System_String_o *)StringLiteral_9397/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)j_il2cpp_value_box_0(
                                                                     NetworkManager_ReadResult_TypeInfo,
                                                                     p_readResult_5__2,
                                                                     v101);
                if ( this )
                {
                  v102 = this;
                  v103 = (void *)((__int64 (__fastcall *)(ManagementManager__startCheckAll_d__33_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                  *p_readResult_5__2 = *(_DWORD *)j_il2cpp_object_unbox_0(v102);
                  v104 = (System_String_o *)StringLiteral_1/*""*/;
                  v105 = (Il2CppObject *)(v103 ? v103 : StringLiteral_1/*""*/);
                  v106 = System_String__Format_44753704(v100, v96, v105, 0LL);
                  v107 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v107,
                    (Il2CppObject *)_4__this,
                    Method_ManagementManager_EndQuitDialog__,
                    0LL);
                  if ( v99 )
                  {
                    CommonUI__OpenErrorDialog(v99, v104, v106, v107, 0, 0LL);
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
              v97 = LocalizationManager__Get((System_String_o *)StringLiteral_9396/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            }
            v96 = (Il2CppObject *)System_String__Format(v97, (Il2CppObject *)DispFriendCode, 0LL);
            goto LABEL_470;
          }
LABEL_438:
          v3->fields._isCacheCheck_5__3 = 0;
          goto LABEL_439;
        }
LABEL_409:
        v71 = sub_B70798(v30);
        sub_B70738(v71, 0LL);
      }
      v30 = sub_B70754(StringLiteral_20222/*"ioqrk4Om"*/, v29->klass->_1.element_class);
      if ( v30 )
      {
        v56 = StringLiteral_20222/*"ioqrk4Om"*/;
        goto LABEL_328;
      }
LABEL_410:
      v72 = sub_B7078C();
      sub_B70738(v72, 0LL);
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
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_59;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_434F415 )
      {
        sub_B70694(&DataManager_TypeInfo);
        byte_434F415 = 1;
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
        goto LABEL_490;
      _4__this->fields.isReadGameData = 0;
      v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v35,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v35,
                                                           (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_490;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v36 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v36, 0LL);
      v3->fields._waitForServerTime_5__7 = v36;
      sub_B70630(&v3->fields._waitForServerTime_5__7);
      goto LABEL_163;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      if ( _4__this->fields.isReadGameData )
      {
        _4__this->fields.isReadGameData = 0;
        v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v13,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackTopGameData__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v13,
                                                             (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TopGameDataRequest___);
        if ( !this )
          goto LABEL_490;
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v14, 0LL);
        v3->fields._wait_5__8 = v14;
        sub_B70630(&v3->fields._wait_5__8);
LABEL_66:
        v3->fields.__2__current = (Il2CppObject *)v3->fields._wait_5__8;
        sub_B70630(&v3->fields.__2__current);
        v21 = 12;
      }
      else
      {
LABEL_163:
        v3->fields.__2__current = (Il2CppObject *)v3->fields._waitForServerTime_5__7;
        sub_B70630(&v3->fields.__2__current);
        v21 = 11;
      }
LABEL_165:
      v3->fields.__1__state = v21;
      return 1;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_66;
      v15 = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_434DCCC )
      {
        sub_B70694(&NetworkManager_TypeInfo);
        byte_434DCCC = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v15 )
        goto LABEL_490;
      CrashReporter__AddCustomKey(
        v15,
        (System_String_o *)StringLiteral_5178/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v3->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v3->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      MasterData,
                                                      0LL);
          v17 = &v3->fields.__2__current;
          sub_B70630(v17);
          v18 = 13;
          goto LABEL_488;
        }
      }
      else
      {
LABEL_140:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v3->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v3->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                                        (UnityEngine_MonoBehaviour_o *)_4__this,
                                                        (System_Collections_IEnumerator_o *)this,
                                                        0LL);
            v17 = &v3->fields.__2__current;
            sub_B70630(v17);
            v18 = 15;
            goto LABEL_488;
          }
        }
      }
      goto LABEL_490;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_434F416 )
      {
        sub_B70694(&DataManager_TypeInfo);
        byte_434F416 = 1;
      }
      v33 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v33 = DataManager_TypeInfo;
      }
      if ( v33->static_fields->readMasterDataResult == 1 )
        goto LABEL_140;
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v33);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v59 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v59, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v59;
      v17 = &v3->fields.__2__current;
      sub_B70630(v17);
      v18 = 14;
      goto LABEL_488;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_439;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_434F417 )
      {
        sub_B70694(&DataManager_TypeInfo);
        byte_434F417 = 1;
      }
      v22 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v22 = DataManager_TypeInfo;
      }
      v3->fields._updateMasterResult_5__9 = v22->static_fields->updateMasterDataResult;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      }
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_25958564((NetworkManager_o *)this, 0LL);
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v3->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                                          (UnityEngine_MonoBehaviour_o *)_4__this,
                                                          (System_Collections_IEnumerator_o *)this,
                                                          0LL);
              v17 = &v3->fields.__2__current;
              sub_B70630(v17);
              v18 = 18;
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
        v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9403/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v26 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v26, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v24 )
          goto LABEL_490;
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          v24,
          (System_String_o *)StringLiteral_1/*""*/,
          v25,
          v26,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
LABEL_91:
        if ( _4__this->fields.isErrorDialog )
        {
          v27 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v27, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v27;
          v17 = &v3->fields.__2__current;
          sub_B70630(v17);
          v18 = 16;
          goto LABEL_488;
        }
        if ( v3->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_396;
      }
      else if ( !_4__this )
      {
        goto LABEL_490;
      }
      _4__this->fields.isErrorDialog = 1;
      v65 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_9404/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v67 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v67, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v65 )
        goto LABEL_490;
      CommonUI__OpenRetryDialog(v65, (System_String_o *)StringLiteral_1/*""*/, v66, v67, 0, 0LL);
LABEL_394:
      if ( _4__this->fields.isErrorDialog )
      {
        v68 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v68, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v68;
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 17;
        goto LABEL_488;
      }
LABEL_396:
      v3->fields._waitForServerTime_5__7 = 0LL;
      sub_B70630(&v3->fields._waitForServerTime_5__7);
      v3->fields._wait_5__8 = 0LL;
      sub_B70630(&v3->fields._wait_5__8);
LABEL_439:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      DataManager__Initialize((DataManager_o *)this, 0LL);
      if ( !v3->fields.isReboot && !v3->fields._isCacheCheck_5__3 )
      {
        v3->fields._isCacheCheck_5__3 = 1;
        v85 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v85 = ManagementManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__HasKey(v85->static_fields->RebootCacheClearKey, 0LL) )
        {
          v86 = (Il2CppObject *)sub_B70764(ManagementManager___c__DisplayClass33_0_TypeInfo);
          System_Object___ctor(v86, 0LL);
          v3->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v86;
          p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
          sub_B70630(&v3->fields.__8__1);
          if ( !v3->fields.__8__1 )
            goto LABEL_490;
          v3->fields.__8__1->fields.confirmed = 0;
          if ( !*p__8__1 )
            goto LABEL_490;
          LOBYTE((*p__8__1)[1].klass) = 0;
          v87 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_7390/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_7388/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
          v90 = LocalizationManager__Get((System_String_o *)StringLiteral_7387/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_7386/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
          v92 = *p__8__1;
          v93 = v91;
          v94 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v94,
            v92,
            Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
            0LL);
          if ( !v87 )
            goto LABEL_490;
          CommonUI__OpenConfirmDecideDlg(v87, v88, v89, v90, v93, v94, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
LABEL_59:
          v20 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_490;
          if ( !BYTE1(v20[1].klass) )
          {
            v64 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v64, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v64;
            v17 = &v3->fields.__2__current;
            sub_B70630(v17);
            v18 = 9;
            goto LABEL_488;
          }
          if ( LOBYTE(v20[1].klass) )
          {
            if ( !_4__this )
              goto LABEL_490;
            ManagementManager__startUpCacheClear(_4__this, 0LL);
          }
          *p__8__1 = 0LL;
          sub_B70630(p__8__1);
        }
        else
        {
          v108 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v108 = ManagementManager_TypeInfo;
          }
          UnityEngine_PlayerPrefs__SetInt(v108->static_fields->RebootCacheClearKey, 1, 0LL);
          UnityEngine_PlayerPrefs__Save(0LL);
        }
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion((DataManager_o *)this, 0LL);
      if ( !_4__this )
        goto LABEL_490;
      v3->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  (System_Collections_IEnumerator_o *)this,
                                                  0LL);
      v17 = &v3->fields.__2__current;
      sub_B70630(v17);
      v18 = 10;
LABEL_488:
      *((_DWORD *)v17 - 2) = v18;
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
      v3->fields.__1__state = -1;
      v111 = 0;
      v3->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111, v2);
      sub_B70630(&v3->fields.__2__current);
      v21 = 19;
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
        v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v37, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v37;
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 20;
        goto LABEL_488;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_490;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_354:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_490;
        if ( !BYTE2(this->fields.__4__this) )
        {
          v63 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v63, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v63;
          v17 = &v3->fields.__2__current;
          sub_B70630(v17);
          v18 = 21;
          goto LABEL_488;
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_490;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12737/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v60 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v60 = ManagerConfig_TypeInfo;
          }
          if ( v60->static_fields->UseStandaloneAsset )
          {
            v3->fields._isLoad_5__4 = 1;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playBgm((System_String_o *)StringLiteral_9464/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_371:
              v61 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v61, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v61;
              v17 = &v3->fields.__2__current;
              sub_B70630(v17);
              v18 = 22;
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
            v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v38, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v38;
            v17 = &v3->fields.__2__current;
            sub_B70630(v17);
            v18 = 23;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_25958564((NetworkManager_o *)this, 0LL);
          v62 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v62, 0.1, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v62;
          v17 = &v3->fields.__2__current;
          sub_B70630(v17);
          v18 = 24;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_225:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__4__this) )
            {
              v53 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v53, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v53;
              v17 = &v3->fields.__2__current;
              sub_B70630(v17);
              v18 = 25;
              goto LABEL_488;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v42 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                      (AssetManager_o *)this,
                      (System_String_o *)StringLiteral_12737/*"SYSTEM"*/,
                      _4__this->fields.downloadParallelMax,
                      0LL);
              v3->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                                          (UnityEngine_MonoBehaviour_o *)_4__this,
                                                          v42,
                                                          0LL);
              v17 = &v3->fields.__2__current;
              sub_B70630(v17);
              v18 = 26;
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
      if ( !byte_434F419 )
      {
        sub_B70694(&LocalizationManager_TypeInfo);
        byte_434F419 = 1;
      }
      v43 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = LocalizationManager_TypeInfo;
      }
      if ( v43->static_fields->isBusySetAssetData )
      {
        v44 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v44, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v44;
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 29;
        goto LABEL_488;
      }
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_248:
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_434F41A )
      {
        sub_B70694(&FSUtility_TypeInfo);
        byte_434F41A = 1;
      }
      v45 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v45 = FSUtility_TypeInfo;
      }
      if ( v45->static_fields->isBusySetAssetData )
      {
        v46 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v46, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v46;
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 30;
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
        v47 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v47, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v47;
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 31;
        goto LABEL_488;
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
        goto LABEL_490;
      if ( LOBYTE(this->fields.__2__current) )
      {
        overrideAssetSoundNameWaitCount_5__5 = v3->fields._overrideAssetSoundNameWaitCount_5__5;
        v3->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v54, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v54;
          v17 = &v3->fields.__2__current;
          sub_B70630(v17);
          v18 = 32;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v49, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v49;
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 33;
        goto LABEL_488;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_290:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( LOBYTE(this[5].fields._waitForServerTime_5__7) )
      {
        v50 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v50, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v50;
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 34;
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
      if ( v3->fields._isLoad_5__4 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9464/*"NOW_LOADING"*/, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__fadeoutBgm(1.0, 0LL);
          v51 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v51, 1.0, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v51;
          v17 = &v3->fields.__2__current;
          sub_B70630(v17);
          v18 = 35;
          goto LABEL_488;
        }
LABEL_310:
        v12 = (const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_311:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance(v12);
        if ( !this )
          goto LABEL_490;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_490;
        this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( this )
          {
            CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_401:
            v69 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v69, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v69;
            v17 = &v3->fields.__2__current;
            sub_B70630(v17);
            v18 = 36;
            goto LABEL_488;
          }
          goto LABEL_490;
        }
      }
      if ( _4__this )
      {
        ManagementManager__BuildInfoOff(_4__this, 0LL);
        v110 = 0;
        v3->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110, v52);
        v17 = &v3->fields.__2__current;
        sub_B70630(v17);
        v18 = 37;
        goto LABEL_488;
      }
      goto LABEL_490;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_354;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v3->fields._isLoad_5__4 = 1;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_434F418 )
      {
        sub_B70694(&LogoMain_TypeInfo);
        byte_434F418 = 1;
      }
      v40 = LogoMain_TypeInfo;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v40 = LogoMain_TypeInfo;
      }
      if ( !v40->static_fields->_isPlaying_k__BackingField )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm((System_String_o *)StringLiteral_9464/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_214:
      v41 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v41, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v41;
      v17 = &v3->fields.__2__current;
      sub_B70630(v17);
      v18 = 27;
      goto LABEL_488;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_214;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_193:
      v39 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v39, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v39;
      v17 = &v3->fields.__2__current;
      sub_B70630(v17);
      v18 = 28;
      goto LABEL_488;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v12 = (const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      goto LABEL_311;
    case 0x25:
      p_fields->__1__state = -1;
      v9 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v9 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v9->static_fields->PushStateSendedKey,
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
        v11 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v11 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v11->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_490;
      _4__this->fields._IsInitialized = 1;
      LOBYTE(_4__this->fields.scenetype) = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, 0LL);
      if ( v3->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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