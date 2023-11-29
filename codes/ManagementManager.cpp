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

  if ( (byte_40FB575 & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_8151, v8);
    sub_B16FFC(&StringLiteral_8163, v9);
    sub_B16FFC(&StringLiteral_19952, v10);
    sub_B16FFC(&StringLiteral_23357, v11);
    byte_40FB575 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ManagementManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_8151;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8151;
  sub_B16F98(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = ManagementManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_8163;
  v14->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8163;
  sub_B16F98((BattleServantConfConponent_o *)&v14->RebootCacheClearKey, v15, v16, v17, v18, v19, v20, v21);
  v22 = ManagementManager_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_23357;
  v22->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_23357;
  sub_B16F98((BattleServantConfConponent_o *)&v22->DATE_TIME_DISP_FORMAT, v23, v24, v25, v26, v27, v28, v29);
  v30 = ManagementManager_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_19952;
  v30->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_19952;
  sub_B16F98((BattleServantConfConponent_o *)&v30->DEFAULT_CULTURE_NAME, v31, v32, v33, v34, v35, v36, v37);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FB574 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, method);
    byte_40FB574 = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
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
  System_String_o *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *v21; // x20
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppObject *v27; // x19
  float v28; // s0
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x21
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppObject *v45; // x19
  float v46; // [xsp+Ch] [xbp-24h] BYREF

  v46 = ratio;
  if ( (byte_40FB563 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, errorText);
    sub_B16FFC(&string___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_670, v9);
    sub_B16FFC(&StringLiteral_6682, v10);
    sub_B16FFC(&StringLiteral_639, v11);
    byte_40FB563 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_34;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6682, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    v13 = (System_String_o *)sub_B17014(string___TypeInfo, 5LL, v12);
    if ( v13 )
    {
      v21 = (System_String_array *)v13;
      if ( !errorText || (v13 = (System_String_o *)sub_B170BC(errorText, v13->klass->_1.element_class)) != 0LL )
      {
        if ( !v21->max_length )
          goto LABEL_35;
        v21->m_Items[0] = errorText;
        sub_B16F98(
          (BattleServantConfConponent_o *)v21->m_Items,
          (System_Int32_array **)errorText,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        v13 = (System_String_o *)StringLiteral_639;
        if ( StringLiteral_639 )
        {
          v13 = (System_String_o *)sub_B170BC(StringLiteral_639, v21->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_36;
          v14 = (System_Int32_array **)StringLiteral_639;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v21->max_length <= 1 )
          goto LABEL_35;
        v21->m_Items[1] = (System_String_o *)v14;
        sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[1], v14, v15, v22, v23, v24, v25, v26);
        v13 = System_Single__ToString(v28, (const MethodInfo *)&v46);
        v34 = (System_Int32_array **)v13;
        if ( !v13 || (v13 = (System_String_o *)sub_B170BC(v13, v21->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v21->max_length <= 2 )
            goto LABEL_35;
          v21->m_Items[2] = (System_String_o *)v34;
          sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[2], v34, v15, v29, v30, v31, v32, v33);
          v13 = (System_String_o *)StringLiteral_670;
          if ( StringLiteral_670 )
          {
            v13 = (System_String_o *)sub_B170BC(StringLiteral_670, v21->obj.klass->_1.element_class);
            if ( !v13 )
              goto LABEL_36;
            v14 = (System_Int32_array **)StringLiteral_670;
          }
          else
          {
            v14 = 0LL;
          }
          if ( v21->max_length <= 3 )
            goto LABEL_35;
          v21->m_Items[3] = (System_String_o *)v14;
          sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[3], v14, v15, v35, v36, v37, v38, v39);
          v13 = (System_String_o *)sub_B170BC(exceptionMessage, v21->obj.klass->_1.element_class);
          if ( v13 )
          {
            if ( v21->max_length > 4 )
            {
              v21->m_Items[4] = exceptionMessage;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v21->m_Items[4],
                (System_Int32_array **)exceptionMessage,
                v15,
                v40,
                v41,
                v42,
                v43,
                v44);
              v45 = (Il2CppObject *)System_String__Concat_43823856(v21, 0LL);
              if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError(v45, 0LL);
              return;
            }
LABEL_35:
            sub_B17100(v13, v14, v15);
            sub_B170A0();
          }
        }
      }
LABEL_36:
      sub_B170F4(v13);
      sub_B170A0();
    }
LABEL_34:
    sub_B170D4();
  }
  v27 = (Il2CppObject *)System_String__Concat_43743732(errorText, exceptionMessage, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v27, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FB55F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v3);
    byte_40FB55F = 1;
  }
  if ( !SingletonMonoBehaviour_WarBoardManager___CheckInstance(
          (SingletonMonoBehaviour_WarBoardManager__o *)this,
          (const MethodInfo_2A551DC *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_40FB572 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, boot);
    byte_40FB572 = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *statusLabel; // x0

  if ( (byte_40FB571 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FB571 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (gameObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (statusLabel = this->fields.statusLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(statusLabel, (System_String_o *)StringLiteral_1, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_40FB55D & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, v1);
    byte_40FB55D = 1;
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

  if ( (byte_40FB568 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide);
    byte_40FB568 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_40644448(0LL);
}


void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    UnityEngine_Application__Quit_40644448(0LL);
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0

  if ( (byte_40FB56F & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    byte_40FB56F = 1;
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_40F7DF6 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    byte_40F7DF6 = 1;
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

  if ( (byte_40FB570 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v3);
    byte_40FB570 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return WebViewManager__get_IsBusy(Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_40FB564 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22714, message);
    byte_40FB564 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_22714, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagementManager_c *v3; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_40FB573 & 1) == 0 )
  {
    sub_B16FFC(&System_Globalization_CultureInfo_TypeInfo, v1);
    sub_B16FFC(&ManagementManager_TypeInfo, v2);
    byte_40FB573 = 1;
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

  if ( (byte_40FB55E & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, v1);
    byte_40FB55E = 1;
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
  System_Type_o *TypeFromHandle; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_IEnumerator_o *v11; // x1
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_40FB560 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&System_Type_TypeInfo, v4);
    sub_B16FFC(&UnityGamingServicesBehaviour_var, v5);
    byte_40FB560 = 1;
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
    sub_B170D4();
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v9);
  v11 = ManagementManager__startCheckAll(this, 0, 0, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v3; // x1

  if ( this->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v3) )
      UnityEngine_Application__Quit_40644448(0LL);
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

  if ( (byte_40FB56E & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_40FB56E = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ManagerConfig_c *v11; // x0
  _BOOL8 _28023340; // x0
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FB56D & 1) == 0 )
  {
    sub_B16FFC(&Method_ManagementManager_callbackTerminalTopHome__, result);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    sub_B16FFC(&Method_NetworkManager_getRequest_TopHomeRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&TutorialFlag_TypeInfo, v10);
    byte_40FB56D = 1;
  }
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    goto LABEL_11;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = TutorialFlag__Get_28023340(102, 0LL);
  if ( _28023340 )
  {
LABEL_11:
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   result,
                                                   method,
                                                   v3,
                                                   v4);
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
                                                           (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B170D4();
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_28023340, result, method);
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

  if ( (byte_40FB56B & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_40FB56B = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  v5->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, *(&this->fields.scenetype + 1), 0, 0LL, 0LL);
}


void __fastcall ManagementManager__callbackTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ManagerConfig_c *v11; // x0
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FB56A & 1) == 0 )
  {
    sub_B16FFC(&Method_ManagementManager_callbackTopHome__, result);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    sub_B16FFC(&Method_NetworkManager_getRequest_TopHomeRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&TutorialFlag_TypeInfo, v10);
    byte_40FB56A = 1;
  }
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    goto LABEL_11;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, 0LL) )
  {
LABEL_11:
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   result,
                                                   method,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v12,
                                                           (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B170D4();
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
  __int64 v13; // x3
  __int64 v14; // x4
  UnityEngine_GameObject_o *v15; // x21
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  AvalonVideoPlayer_o *v23; // x20
  UnityEngine_Camera_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_40FB561 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Camera___, v3);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_4172, v6);
    sub_B16FFC(&StringLiteral_9184, v7);
    byte_40FB561 = 1;
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
    v10 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4172, 0LL);
    v15 = (UnityEngine_GameObject_o *)sub_B170CC(UnityEngine_GameObject_TypeInfo, v11, v12, v13, v14);
    UnityEngine_GameObject___ctor(v15, (System_String_o *)StringLiteral_9184, 0LL);
    if ( !v15
      || (v16 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                         v15,
                                         (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v16,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._videoPlayer_k__BackingField,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22),
          !v10)
      || (v23 = *p_videoPlayer_k__BackingField,
          Component_srcLineSprite = (UnityEngine_Camera_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v10,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v23) )
    {
      sub_B170D4();
    }
    AvalonVideoPlayer__initialize(v23, Component_srcLineSprite, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(v15, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40FB55B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1);
    byte_40FB55B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return HIDWORD(Instance->fields.titleLabel);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagementManager_c *v2; // x0

  if ( (byte_40FB55C & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, v1);
    byte_40FB55C = 1;
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
  WebViewManager_o *Instance; // x0
  AvalonSceneManager_o *v22; // x0
  MissionNotifyManager_o *v23; // x0
  CommonUI_o *v24; // x0
  FlashingIconManager_o *v25; // x0
  SwitchParameterDisplayManager_o *v26; // x0
  ServantAssetLoadManager_o *v27; // x0
  AdManager_o *v28; // x0
  const MethodInfo *v29; // x3
  System_Collections_IEnumerator_o *v30; // x1

  if ( (byte_40FB562 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, isLogin);
    sub_B16FFC(&CTouch_TypeInfo, v5);
    sub_B16FFC(&CommonEffectManager_TypeInfo, v6);
    sub_B16FFC(&FirebaseScript_TypeInfo, v7);
    sub_B16FFC(&System_GC_TypeInfo, v8);
    sub_B16FFC(&ManagementManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v18);
    sub_B16FFC(&SoundManager_TypeInfo, v19);
    byte_40FB562 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    ScriptManager__reboot((ScriptManager_o *)Instance, 1, 0LL);
    v22 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v22 )
      goto LABEL_38;
    AvalonSceneManager__reboot(v22, 0LL);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v23 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v23 )
      goto LABEL_38;
    MissionNotifyManager__Reboot(v23, 0LL);
    v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v24 )
      goto LABEL_38;
    CommonUI__Reboot(v24, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__Reboot(0LL);
    v25 = (FlashingIconManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !v25 )
      goto LABEL_38;
    FlashingIconManager__Reboot(v25, 0LL);
    v26 = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !v26 )
      goto LABEL_38;
    SwitchParameterDisplayManager__Reboot(v26, 0LL);
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
    v27 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !v27 )
LABEL_38:
      sub_B170D4();
    ServantAssetLoadManager__EndRetryTransition(v27, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_42843716(0LL);
    v28 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v28 )
      sub_B170D4();
    AdManager__Initialize(v28, 2, 0LL);
    if ( (BYTE3(FirebaseScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    }
    FirebaseScript__Initialize(0LL);
    v30 = ManagementManager__startCheckAll(this, 1, isLogin, v29);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v30, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  NetworkManager_LoginCallbackFunc_o *v10; // x21

  if ( (byte_40FB569 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ManagementManager_callbackTopLogin__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_40FB569 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v10 = (NetworkManager_LoginCallbackFunc_o *)sub_B170CC(NetworkManager_LoginCallbackFunc_TypeInfo, v6, v7, v8, v9);
  NetworkManager_LoginCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_B170D4();
  NetworkManager__RequestLogin(Instance, v10, 1, 0LL);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  NetworkManager_LoginCallbackFunc_o *v10; // x21

  if ( (byte_40FB56C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ManagementManager_callbackTerminalTopLogin__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4);
    byte_40FB56C = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v10 = (NetworkManager_LoginCallbackFunc_o *)sub_B170CC(NetworkManager_LoginCallbackFunc_TypeInfo, v6, v7, v8, v9);
  NetworkManager_LoginCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  NetworkManager__RequestLogin(Instance, v10, 1, 0LL);
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
  sub_B16F98(
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
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FB565 & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager__startCheckAll_d__33_TypeInfo, isReboot);
    byte_40FB565 = 1;
  }
  v8 = sub_B170CC(ManagementManager__startCheckAll_d__33_TypeInfo, isReboot, isLogin, method, v4);
  ManagementManager__startCheckAll_d__33___ctor((ManagementManager__startCheckAll_d__33_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 32) = isReboot;
  *(_BYTE *)(v8 + 56) = isLogin;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FB566 & 1) == 0 )
  {
    sub_B16FFC(&DataManager_TypeInfo, method);
    byte_40FB566 = 1;
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

  if ( (byte_40FB567 & 1) == 0 )
  {
    sub_B16FFC(&DataManager_TypeInfo, method);
    sub_B16FFC(&ScrTerminalListTop_TypeInfo, v2);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40FB567 = 1;
  }
  MovieFileMerge__Delete_21065788(0LL);
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
  if ( !byte_40F607B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    byte_40F607B = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CommonUI_o *Instance; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20

  if ( (byte_40F6912 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flag);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__, v8);
    sub_B16FFC(&ManagementManager___c__DisplayClass33_1_TypeInfo, v9);
    byte_40F6912 = 1;
  }
  v10 = sub_B170CC(ManagementManager___c__DisplayClass33_1_TypeInfo, flag, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v10 + 24),
          (System_Int32_array **)this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        *(_BYTE *)(v10 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v10,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseConfirmDialog_18237824(Instance, v22, 0LL);
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
    sub_B170D4();
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v74; // x1
  __int64 v75; // x1
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  Il2CppObject *v79; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  bool v87; // w20
  ManagementManager_c *v88; // x0
  bool Notiffication; // w0
  ManagementManager_c *v90; // x0
  CommonUI_o *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  const MethodInfo_2A54F38 *v96; // x0
  CommonUI_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  CommonUI_o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  NetworkManager_ResultCallbackFunc_o *v107; // x21
  RequestBase_o *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  UnityEngine_WaitForEndOfFrame_o *v113; // x20
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  __int64 v120; // x1
  CrashReporter_o *v121; // x21
  NetworkManager_c *v122; // x0
  WebViewManager_o *v123; // x0
  System_Collections_IEnumerator_o *MasterData; // x0
  Il2CppObject *started; // x0
  Il2CppObject **v126; // x19
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  int v133; // w8
  struct ManagementManager___c__DisplayClass33_0_o **p__8__1; // x21
  struct ManagementManager___c__DisplayClass33_0_o *v135; // x8
  Il2CppObject *wait_5__8; // x1
  int32_t v137; // w8
  AssetManager_o *v138; // x0
  AtlasManager_o *v139; // x0
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  UnityEngine_WaitForEndOfFrame_o *v144; // x21
  Il2CppObject **v145; // x19
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  __int64 v152; // x1
  DataManager_c *v153; // x0
  CommonUI_o *v154; // x0
  int32_t updateMasterResult_5__9; // w8
  CommonUI_o *v156; // x21
  System_String_o *v157; // x22
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  __int64 v161; // x4
  ErrorDialog_ClickDelegate_o *v162; // x23
  UnityEngine_WaitForEndOfFrame_o *v163; // x20
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  AdManager_o *v170; // x0
  AdManager_o *v171; // x0
  __int64 v172; // x1
  __int64 v173; // x3
  __int64 v174; // x4
  UnityEngine_WaitForEndOfFrame_o *v175; // x20
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  __int64 v182; // x0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Int32_array **v189; // x21
  __int64 v190; // x0
  System_Int32_array **v191; // x1
  NetworkManager_o *Instance; // x0
  Il2CppObject *v193; // x0
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  UnityEngine_WaitForEndOfFrame_o *v200; // x20
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7
  __int64 v207; // x1
  DataManager_c *v208; // x0
  WebViewManager_o *v209; // x0
  System_Collections_IEnumerator_o *updated; // x0
  Il2CppObject *v211; // x0
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  Il2CppObject *v218; // x0
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  __int64 v225; // x1
  __int64 v226; // x2
  __int64 v227; // x3
  __int64 v228; // x4
  DataManager_c *v229; // x0
  int32_t readMasterVersionResult; // w8
  NetworkManager_ResultCallbackFunc_o *v231; // x21
  WarBoardWallAttackRequest_o *v232; // x0
  __int64 v233; // x1
  __int64 v234; // x2
  __int64 v235; // x3
  __int64 v236; // x4
  UnityEngine_WaitForEndOfFrame_o *v237; // x20
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  Il2CppObject *waitForServerTime_5__7; // x1
  CommonUI_o *v245; // x0
  __int64 v246; // x1
  __int64 v247; // x2
  __int64 v248; // x3
  __int64 v249; // x4
  __int64 v250; // x1
  __int64 v251; // x2
  __int64 v252; // x3
  __int64 v253; // x4
  UnityEngine_WaitForEndOfFrame_o *v254; // x20
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  __int64 v261; // x1
  __int64 v262; // x2
  __int64 v263; // x3
  __int64 v264; // x4
  UnityEngine_WaitForEndOfFrame_o *v265; // x20
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  CommonUI_o *v272; // x0
  CommonUI_o *v273; // x0
  UnityEngine_WaitForEndOfFrame_o *v274; // x20
  System_String_array **v275; // x2
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  __int64 v281; // x1
  LogoMain_c *v282; // x0
  CommonUI_o *v283; // x0
  UnityEngine_WaitForEndOfFrame_o *v284; // x20
  System_String_array **v285; // x2
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  AssetManager_o *v291; // x0
  WebViewManager_o *v292; // x0
  __int64 v293; // x1
  __int64 v294; // x2
  __int64 v295; // x3
  __int64 v296; // x4
  AssetManager_o *v297; // x0
  System_Collections_IEnumerator_o *v298; // x0
  Il2CppObject *v299; // x0
  System_String_array **v300; // x2
  System_String_array **v301; // x3
  System_Boolean_array **v302; // x4
  System_Int32_array **v303; // x5
  System_Int32_array *v304; // x6
  System_Int32_array *v305; // x7
  LocalizationManager_c *v306; // x0
  UnityEngine_WaitForEndOfFrame_o *v307; // x20
  System_String_array **v308; // x2
  System_String_array **v309; // x3
  System_Boolean_array **v310; // x4
  System_Int32_array **v311; // x5
  System_Int32_array *v312; // x6
  System_Int32_array *v313; // x7
  FSUtility_c *v314; // x0
  UnityEngine_WaitForEndOfFrame_o *v315; // x20
  System_String_array **v316; // x2
  System_String_array **v317; // x3
  System_Boolean_array **v318; // x4
  System_Int32_array **v319; // x5
  System_Int32_array *v320; // x6
  System_Int32_array *v321; // x7
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v323; // x1
  __int64 v324; // x2
  __int64 v325; // x3
  __int64 v326; // x4
  UnityEngine_WaitForEndOfFrame_o *v327; // x20
  System_String_array **v328; // x2
  System_String_array **v329; // x3
  System_Boolean_array **v330; // x4
  System_Int32_array **v331; // x5
  System_Int32_array *v332; // x6
  System_Int32_array *v333; // x7
  OverwriteAssetSoundName_o *v334; // x0
  __int64 v335; // x1
  __int64 v336; // x2
  __int64 v337; // x3
  __int64 v338; // x4
  int32_t overrideAssetSoundNameWaitCount_5__5; // w8
  SoundManager_o *v340; // x0
  __int64 v341; // x1
  __int64 v342; // x2
  __int64 v343; // x3
  __int64 v344; // x4
  UnityEngine_WaitForEndOfFrame_o *v345; // x20
  System_String_array **v346; // x2
  System_String_array **v347; // x3
  System_Boolean_array **v348; // x4
  System_Int32_array **v349; // x5
  System_Int32_array *v350; // x6
  System_Int32_array *v351; // x7
  WebViewManager_o *v352; // x0
  WebViewManager_o *v353; // x0
  __int64 v354; // x1
  __int64 v355; // x2
  __int64 v356; // x3
  __int64 v357; // x4
  UnityEngine_WaitForEndOfFrame_o *v358; // x20
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  __int64 v365; // x1
  __int64 v366; // x2
  __int64 v367; // x3
  __int64 v368; // x4
  UnityEngine_WaitForSeconds_o *v369; // x20
  System_String_array **v370; // x2
  System_String_array **v371; // x3
  System_Boolean_array **v372; // x4
  System_Int32_array **v373; // x5
  System_Int32_array *v374; // x6
  System_Int32_array *v375; // x7
  CommonUI_o *v376; // x0
  Il2CppObject *v377; // x0
  System_String_array **v378; // x2
  System_String_array **v379; // x3
  System_Boolean_array **v380; // x4
  System_Int32_array **v381; // x5
  System_Int32_array *v382; // x6
  System_Int32_array *v383; // x7
  UnityEngine_WaitForEndOfFrame_o *v384; // x20
  System_String_array **v385; // x2
  System_String_array **v386; // x3
  System_Boolean_array **v387; // x4
  System_Int32_array **v388; // x5
  System_Int32_array *v389; // x6
  System_Int32_array *v390; // x7
  UnityEngine_WaitForEndOfFrame_o *v391; // x20
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  System_String_array **v398; // x3
  System_Boolean_array **v399; // x4
  System_Int32_array **v400; // x5
  System_Int32_array *v401; // x6
  System_Int32_array *v402; // x7
  System_String_array **v403; // x3
  System_Boolean_array **v404; // x4
  System_Int32_array **v405; // x5
  System_Int32_array *v406; // x6
  System_Int32_array *v407; // x7
  System_String_array **v408; // x2
  System_String_array **v409; // x3
  System_Boolean_array **v410; // x4
  System_Int32_array **v411; // x5
  System_Int32_array *v412; // x6
  System_Int32_array *v413; // x7
  EncryptedPlayerPrefs_c *v414; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  NetworkManager_o *v416; // x0
  UnityEngine_GameObject_o *debugInfoRootObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CommonUI_o *v419; // x0
  __int64 v420; // x1
  __int64 v421; // x2
  __int64 v422; // x3
  __int64 v423; // x4
  UnityEngine_WaitForEndOfFrame_o *v424; // x20
  System_String_array **v425; // x2
  System_String_array **v426; // x3
  System_Boolean_array **v427; // x4
  System_Int32_array **v428; // x5
  System_Int32_array *v429; // x6
  System_Int32_array *v430; // x7
  AssetManager_o *v431; // x0
  WebViewManager_o *v432; // x0
  __int64 v433; // x1
  __int64 v434; // x2
  __int64 v435; // x3
  __int64 v436; // x4
  AssetManager_o *v437; // x0
  ManagerConfig_c *v438; // x0
  CommonUI_o *v439; // x0
  UnityEngine_WaitForEndOfFrame_o *v440; // x20
  System_String_array **v441; // x2
  System_String_array **v442; // x3
  System_Boolean_array **v443; // x4
  System_Int32_array **v444; // x5
  System_Int32_array *v445; // x6
  System_Int32_array *v446; // x7
  NetworkManager_o *v447; // x0
  __int64 v448; // x1
  __int64 v449; // x2
  __int64 v450; // x3
  __int64 v451; // x4
  UnityEngine_WaitForSeconds_o *v452; // x20
  System_String_array **v453; // x2
  System_String_array **v454; // x3
  System_Boolean_array **v455; // x4
  System_Int32_array **v456; // x5
  System_Int32_array *v457; // x6
  System_Int32_array *v458; // x7
  UnityEngine_WaitForEndOfFrame_o *v459; // x20
  System_String_array **v460; // x2
  System_String_array **v461; // x3
  System_Boolean_array **v462; // x4
  System_Int32_array **v463; // x5
  System_Int32_array *v464; // x6
  System_Int32_array *v465; // x7
  UnityEngine_WaitForEndOfFrame_o *v466; // x20
  System_String_array **v467; // x2
  System_String_array **v468; // x3
  System_Boolean_array **v469; // x4
  System_Int32_array **v470; // x5
  System_Int32_array *v471; // x6
  System_Int32_array *v472; // x7
  AvalonSceneManager_o *v473; // x0
  NetworkManager_o *v474; // x0
  WebViewManager_o *v475; // x0
  System_Collections_IEnumerator_o *v476; // x0
  Il2CppObject *v477; // x0
  System_String_array **v478; // x2
  System_String_array **v479; // x3
  System_Boolean_array **v480; // x4
  System_Int32_array **v481; // x5
  System_Int32_array *v482; // x6
  System_Int32_array *v483; // x7
  CommonUI_o *v484; // x21
  System_String_o *v485; // x22
  __int64 v486; // x1
  __int64 v487; // x2
  __int64 v488; // x3
  __int64 v489; // x4
  ErrorDialog_ClickDelegate_o *v490; // x23
  UnityEngine_WaitForEndOfFrame_o *v491; // x20
  System_String_array **v492; // x2
  System_String_array **v493; // x3
  System_Boolean_array **v494; // x4
  System_Int32_array **v495; // x5
  System_Int32_array *v496; // x6
  System_Int32_array *v497; // x7
  System_String_array **v498; // x2
  System_String_array **v499; // x3
  System_Boolean_array **v500; // x4
  System_Int32_array **v501; // x5
  System_Int32_array *v502; // x6
  System_Int32_array *v503; // x7
  CommonUI_o *v504; // x0
  CommonUI_o *v505; // x0
  UnityEngine_WaitForEndOfFrame_o *v506; // x20
  System_String_array **v507; // x2
  System_String_array **v508; // x3
  System_Boolean_array **v509; // x4
  System_Int32_array **v510; // x5
  System_Int32_array *v511; // x6
  System_Int32_array *v512; // x7
  LocalNotificationManagerAndroid_o *v513; // x0
  __int64 v514; // x1
  __int64 v515; // x2
  __int64 v516; // x3
  __int64 v517; // x4
  UnityEngine_WaitForEndOfFrame_o *v518; // x20
  System_String_array **v519; // x2
  System_String_array **v520; // x3
  System_Boolean_array **v521; // x4
  System_Int32_array **v522; // x5
  System_Int32_array *v523; // x6
  System_Int32_array *v524; // x7
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v528; // x0
  __int64 v529; // x1
  __int64 v530; // x2
  __int64 v531; // x3
  __int64 v532; // x4
  ManagerConfig_c *v533; // x0
  CommonUI_o *v534; // x21
  System_String_o *v535; // x22
  __int64 v536; // x1
  __int64 v537; // x2
  __int64 v538; // x3
  __int64 v539; // x4
  ErrorDialog_ClickDelegate_o *v540; // x23
  int32_t readResult_5__2; // w8
  int32_t *p_readResult_5__2; // x21
  NetworkManager_ResultCallbackFunc_o *v543; // x21
  AccountRegistRequest_o *Request_WarBoardWallAttackRequest; // x0
  UnityEngine_WaitForEndOfFrame_o *v545; // x20
  System_String_array **v546; // x2
  System_String_array **v547; // x3
  System_Boolean_array **v548; // x4
  System_Int32_array **v549; // x5
  System_Int32_array *v550; // x6
  System_Int32_array *v551; // x7
  WebViewManager_o *v552; // x0
  ManagementManager_c *v553; // x0
  __int64 v554; // x1
  __int64 v555; // x2
  __int64 v556; // x3
  __int64 v557; // x4
  Il2CppObject *v558; // x22
  System_String_array **v559; // x2
  System_String_array **v560; // x3
  System_Boolean_array **v561; // x4
  System_Int32_array **v562; // x5
  System_Int32_array *v563; // x6
  System_Int32_array *v564; // x7
  CommonUI_o *v565; // x22
  System_String_o *v566; // x23
  System_String_o *v567; // x24
  System_String_o *v568; // x25
  System_String_o *v569; // x0
  Il2CppObject *v570; // x28
  System_String_o *v571; // x26
  __int64 v572; // x1
  __int64 v573; // x2
  __int64 v574; // x3
  __int64 v575; // x4
  CommonConfirmDialog_ClickDelegate_o *v576; // x27
  UnityEngine_WaitForEndOfFrame_o *v577; // x20
  System_String_array **v578; // x2
  System_String_array **v579; // x3
  System_Boolean_array **v580; // x4
  System_Int32_array **v581; // x5
  System_Int32_array *v582; // x6
  System_Int32_array *v583; // x7
  Il2CppObject *v584; // x19
  NetworkManager_o *v585; // x0
  System_String_o *v586; // x19
  NetworkManager_o *v587; // x0
  Il2CppObject *DispFriendCode; // x22
  CommonUI_o *v589; // x22
  System_String_o *v590; // x23
  __int64 v591; // x0
  __int64 v592; // x24
  void *v593; // x25
  System_String_o *v594; // x21
  Il2CppObject *v595; // x2
  System_String_o *v596; // x19
  __int64 v597; // x1
  __int64 v598; // x2
  __int64 v599; // x3
  __int64 v600; // x4
  ErrorDialog_ClickDelegate_o *v601; // x23
  ManagementManager_c *v602; // x0
  CommonUI_o *v603; // x0
  WebViewManager_o *v604; // x0
  System_Collections_IEnumerator_o *MasterVersion; // x0
  Il2CppObject *v606; // x0
  System_String_array **v607; // x2
  System_String_array **v608; // x3
  System_Boolean_array **v609; // x4
  System_Int32_array **v610; // x5
  System_Int32_array *v611; // x6
  System_Int32_array *v612; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  int v615; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_40F6913 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v9);
    sub_B16FFC(&AtlasManager_TypeInfo, v10);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v11);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v12);
    sub_B16FFC(&CommonServicePluginScript_TypeInfo, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v15);
    sub_B16FFC(&FSUtility_TypeInfo, v16);
    sub_B16FFC(&FirebaseScript_TypeInfo, v17);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v18);
    sub_B16FFC(&int_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&LogoMain_TypeInfo, v21);
    sub_B16FFC(&Method_ManagementManager_EndLogDialog__, v22);
    sub_B16FFC(&Method_ManagementManager_EndQuitDialog__, v23);
    sub_B16FFC(&Method_ManagementManager_EndRetryDialog__, v24);
    sub_B16FFC(&Method_ManagementManager_callbackAccountRegist__, v25);
    sub_B16FFC(&Method_ManagementManager_callbackTopGameData__, v26);
    sub_B16FFC(&ManagementManager_TypeInfo, v27);
    sub_B16FFC(&ManagerConfig_TypeInfo, v28);
    sub_B16FFC(&Method_NetworkManager_getRequest_AccountRegistRequest___, v29);
    sub_B16FFC(&Method_NetworkManager_getRequest_TopGameDataRequest___, v30);
    sub_B16FFC(&NetworkManager_TypeInfo, v31);
    sub_B16FFC(&OptionManager_TypeInfo, v32);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v33);
    sub_B16FFC(&NetworkManager_ReadResult_TypeInfo, v34);
    sub_B16FFC(&ResolutionManager_TypeInfo, v35);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v36);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v37);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v38);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v39);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v40);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v41);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v43);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v44);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v45);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v46);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v47);
    sub_B16FFC(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v48);
    sub_B16FFC(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v49);
    sub_B16FFC(&SoundManager_TypeInfo, v50);
    sub_B16FFC(&string___TypeInfo, v51);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v52);
    sub_B16FFC(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__, v53);
    sub_B16FFC(&ManagementManager___c__DisplayClass33_0_TypeInfo, v54);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v55);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v56);
    sub_B16FFC(&StringLiteral_7262, v57);
    sub_B16FFC(&StringLiteral_9322, v58);
    sub_B16FFC(&StringLiteral_9255, v59);
    sub_B16FFC(&StringLiteral_6303, v60);
    sub_B16FFC(&StringLiteral_7265, v61);
    sub_B16FFC(&StringLiteral_8886, v62);
    sub_B16FFC(&StringLiteral_7263, v63);
    sub_B16FFC(&StringLiteral_9670, v64);
    sub_B16FFC(&StringLiteral_7261, v65);
    sub_B16FFC(&StringLiteral_5079, v66);
    sub_B16FFC(&StringLiteral_16268, v67);
    sub_B16FFC(&StringLiteral_9263, v68);
    sub_B16FFC(&StringLiteral_9256, v69);
    sub_B16FFC(&StringLiteral_12512, v70);
    sub_B16FFC(&StringLiteral_1, v71);
    sub_B16FFC(&StringLiteral_19830, v72);
    sub_B16FFC(&StringLiteral_1150, v73);
    sub_B16FFC(&StringLiteral_9257, v74);
    sub_B16FFC(&StringLiteral_9264, v75);
    byte_40F6913 = 1;
  }
  p_fields = &this->fields;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      isReboot = this->fields.isReboot;
      this->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_117;
      v79 = (Il2CppObject *)UnityEngine_Resources__UnloadUnusedAssets(0LL);
      this->fields.__2__current = v79;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v79,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      v87 = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return v87;
    case 1:
      p_fields->__1__state = -1;
LABEL_117:
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
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_494;
      v193 = (Il2CppObject *)NetworkManager__Initialize(Instance, 0LL);
      this->fields.__2__current = v193;
      v126 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v126, (System_Int32_array **)v193, v194, v195, v196, v197, v198, v199);
      v133 = 2;
      goto LABEL_491;
    case 2:
      p_fields->__1__state = -1;
      v138 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !v138 )
        goto LABEL_494;
      AssetManager__Initialize(v138, 0LL);
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
      v139 = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !v139 )
        goto LABEL_494;
      AtlasManager__setupBootSkin(v139, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      v87 = 1;
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      v144 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                  v140,
                                                  v141,
                                                  v142,
                                                  v143);
      UnityEngine_WaitForEndOfFrame___ctor(v144, 0LL);
      this->fields.__2__current = (Il2CppObject *)v144;
      v145 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v145, (System_Int32_array **)v144, v146, v147, v148, v149, v150, v151);
      *((_DWORD *)v145 - 2) = 3;
      return v87;
    case 3:
      p_fields->__1__state = -1;
      v170 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !v170 )
        sub_B170D4();
      AdManager__Initialize(v170, 0, 0LL);
      v171 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !v171 )
        sub_B170D4();
      AdManager__Initialize(v171, 1, 0LL);
      if ( (BYTE3(FirebaseScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FirebaseScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      }
      FirebaseScript__Initialize(0LL);
      if ( !this->fields.isReboot )
        goto LABEL_110;
      v175 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v172, v2, v173, v174);
      UnityEngine_WaitForEndOfFrame___ctor(v175, 0LL);
      this->fields.__2__current = (Il2CppObject *)v175;
      v126 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v126, (System_Int32_array **)v175, v176, v177, v178, v179, v180, v181);
      v133 = 4;
      goto LABEL_491;
    case 4:
      p_fields->__1__state = -1;
LABEL_110:
      v182 = sub_B17014(string___TypeInfo, 3LL, v2);
      if ( !v182 )
        goto LABEL_494;
      v189 = (System_Int32_array **)v182;
      v190 = StringLiteral_1150;
      if ( StringLiteral_1150 )
      {
        v190 = sub_B170BC(StringLiteral_1150, *(_QWORD *)&(*v189)->m_Items[9]);
        if ( !v190 )
          goto LABEL_411;
        v191 = (System_Int32_array **)StringLiteral_1150;
      }
      else
      {
        v191 = 0LL;
      }
      if ( !*((_DWORD *)v189 + 6) )
        goto LABEL_410;
      v189[4] = (System_Int32_array *)v191;
      sub_B16F98((BattleServantConfConponent_o *)(v189 + 4), v191, v183, v184, v185, v186, v187, v188);
      v190 = StringLiteral_6303;
      if ( StringLiteral_6303 )
      {
        v190 = sub_B170BC(StringLiteral_6303, *(_QWORD *)&(*v189)->m_Items[9]);
        if ( !v190 )
          goto LABEL_411;
        v191 = (System_Int32_array **)StringLiteral_6303;
      }
      else
      {
        v191 = 0LL;
      }
      if ( *((_DWORD *)v189 + 6) <= 1u )
        goto LABEL_410;
      v189[5] = (System_Int32_array *)v191;
      sub_B16F98((BattleServantConfConponent_o *)(v189 + 5), v191, v183, v398, v399, v400, v401, v402);
      v190 = StringLiteral_19830;
      if ( StringLiteral_19830 )
      {
        v190 = sub_B170BC(StringLiteral_19830, *(_QWORD *)&(*v189)->m_Items[9]);
        if ( v190 )
        {
          v191 = (System_Int32_array **)StringLiteral_19830;
          goto LABEL_329;
        }
LABEL_411:
        sub_B170F4(v190);
        sub_B170A0();
      }
      v191 = 0LL;
LABEL_329:
      if ( *((_DWORD *)v189 + 6) <= 2u )
      {
LABEL_410:
        sub_B17100(v190, v191, v183);
        sub_B170A0();
      }
      v189[6] = (System_Int32_array *)v191;
      sub_B16F98((BattleServantConfConponent_o *)(v189 + 6), v191, v183, v403, v404, v405, v406, v407);
      v414 = EncryptedPlayerPrefs_TypeInfo;
      if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
        v414 = EncryptedPlayerPrefs_TypeInfo;
      }
      static_fields = v414->static_fields;
      static_fields->keys = (struct System_String_array *)v189;
      sub_B16F98((BattleServantConfConponent_o *)&static_fields->keys, v189, v408, v409, v410, v411, v412, v413);
      if ( !this->fields.isReboot )
      {
        if ( AndroidPermissionManager__EnabledRuntimePermission(0LL) )
        {
          if ( !AndroidPermissionManager__CheckPermission((System_String_o *)StringLiteral_16268, 0LL) )
          {
            if ( !_4__this )
              goto LABEL_494;
            _4__this->fields.isPermissionRequesting = 1;
            AndroidPermissionManager__RequestPermission(
              (System_String_o *)StringLiteral_16268,
              (System_String_o *)StringLiteral_8886,
              (System_String_o *)StringLiteral_9670,
              0LL);
LABEL_130:
            if ( _4__this->fields.isPermissionRequesting )
            {
              v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3,
                                                          v4);
              UnityEngine_WaitForEndOfFrame___ctor(v200, 0LL);
              this->fields.__2__current = (Il2CppObject *)v200;
              v126 = &this->fields.__2__current;
              sub_B16F98(
                (BattleServantConfConponent_o *)v126,
                (System_Int32_array **)v200,
                v201,
                v202,
                v203,
                v204,
                v205,
                v206);
              v133 = 5;
              goto LABEL_491;
            }
          }
        }
        else
        {
          if ( !_4__this )
            goto LABEL_494;
          _4__this->fields.isPermissionGranted = 1;
        }
        if ( (BYTE3(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo);
        }
        v513 = (LocalNotificationManagerAndroid_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
        if ( v513 )
        {
          LocalNotificationManagerAndroid__RegisterNotificationChannel(v513, 0LL);
          v518 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                      v514,
                                                      v515,
                                                      v516,
                                                      v517);
          UnityEngine_WaitForEndOfFrame___ctor(v518, 0LL);
          this->fields.__2__current = (Il2CppObject *)v518;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)v518,
            v519,
            v520,
            v521,
            v522,
            v523,
            v524);
          v133 = 6;
          goto LABEL_491;
        }
LABEL_494:
        sub_B170D4();
      }
LABEL_334:
      v416 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !v416 )
        goto LABEL_494;
      this->fields._readResult_5__2 = NetworkManager__ReadAuth(v416, 0LL);
      if ( !_4__this )
        goto LABEL_494;
      debugInfoRootObject = _4__this->fields.debugInfoRootObject;
      if ( !debugInfoRootObject )
        goto LABEL_494;
      gameObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL);
      if ( !gameObject )
        goto LABEL_494;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
        v528 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
        if ( FreeSize < v528 )
          FreeSize = v528;
        if ( FreeSize < 1 )
          break;
        v533 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v533 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize >= v533->static_fields->LIMIT_FREE_SIZE )
          break;
        _4__this->fields.isErrorDialog = 1;
        v534 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v535 = LocalizationManager__Get((System_String_o *)StringLiteral_9255, 0LL);
        v540 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v536, v537, v538, v539);
        ErrorDialog_ClickDelegate___ctor(v540, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
        if ( !v534 )
          goto LABEL_494;
        CommonUI__OpenRetryDialog(v534, (System_String_o *)StringLiteral_1, v535, v540, 0, 0LL);
LABEL_414:
        if ( _4__this->fields.isErrorDialog )
        {
          v577 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
          UnityEngine_WaitForEndOfFrame___ctor(v577, 0LL);
          this->fields.__2__current = (Il2CppObject *)v577;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)v577,
            v578,
            v579,
            v580,
            v581,
            v582,
            v583);
          v133 = 7;
          goto LABEL_491;
        }
      }
      p_readResult_5__2 = &this->fields._readResult_5__2;
      readResult_5__2 = this->fields._readResult_5__2;
      if ( !readResult_5__2 )
      {
LABEL_441:
        this->fields._isCacheCheck_5__3 = 0;
        goto LABEL_442;
      }
      if ( readResult_5__2 == 1 )
      {
        _4__this->fields.isReadAuth = 0;
        v543 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                        NetworkManager_ResultCallbackFunc_TypeInfo,
                                                        v529,
                                                        v530,
                                                        v531,
                                                        v532);
        NetworkManager_ResultCallbackFunc___ctor(
          v543,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackAccountRegist__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (AccountRegistRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v543,
                                                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_AccountRegistRequest___);
        if ( Request_WarBoardWallAttackRequest )
        {
          AccountRegistRequest__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
LABEL_440:
          v545 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
          UnityEngine_WaitForEndOfFrame___ctor(v545, 0LL);
          this->fields.__2__current = (Il2CppObject *)v545;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)v545,
            v546,
            v547,
            v548,
            v549,
            v550,
            v551);
          v133 = 8;
          goto LABEL_491;
        }
        goto LABEL_494;
      }
      v584 = (Il2CppObject *)StringLiteral_1;
      v585 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !v585 )
        goto LABEL_494;
      if ( NetworkManager__ReadFriendCode(v585, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v586 = LocalizationManager__Get((System_String_o *)StringLiteral_9256, 0LL);
        v587 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !v587 )
          goto LABEL_494;
        DispFriendCode = (Il2CppObject *)NetworkManager__GetDispFriendCode(v587, 0LL);
        goto LABEL_472;
      }
      if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidUtil_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      }
      DispFriendCode = (Il2CppObject *)AndroidUtil__GetFriendCodeFromOldDat(0LL);
      if ( !System_String__IsNullOrEmpty((System_String_o *)DispFriendCode, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v586 = LocalizationManager__Get((System_String_o *)StringLiteral_9256, 0LL);
LABEL_472:
        v584 = (Il2CppObject *)System_String__Format(v586, DispFriendCode, 0LL);
      }
      v589 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v590 = LocalizationManager__Get((System_String_o *)StringLiteral_9257, 0LL);
      v591 = j_il2cpp_value_box_0(NetworkManager_ReadResult_TypeInfo, p_readResult_5__2);
      if ( !v591 )
        goto LABEL_494;
      v592 = v591;
      v593 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v591 + 360LL))(
                       v591,
                       *(_QWORD *)(*(_QWORD *)v591 + 368LL));
      *p_readResult_5__2 = *(_DWORD *)j_il2cpp_object_unbox_0(v592);
      v594 = (System_String_o *)StringLiteral_1;
      v595 = (Il2CppObject *)(v593 ? v593 : StringLiteral_1);
      v596 = System_String__Format_43739268(v590, v584, v595, 0LL);
      v601 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v597, v598, v599, v600);
      ErrorDialog_ClickDelegate___ctor(v601, (Il2CppObject *)_4__this, Method_ManagementManager_EndQuitDialog__, 0LL);
      if ( !v589 )
        goto LABEL_494;
      CommonUI__OpenErrorDialog(v589, v594, v596, v601, 0, 0LL);
      return 0;
    case 5:
      p_fields->__1__state = -1;
      if ( _4__this )
        goto LABEL_130;
      goto LABEL_494;
    case 6:
      p_fields->__1__state = -1;
      goto LABEL_334;
    case 7:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_494;
      goto LABEL_414;
    case 8:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_494;
      if ( !_4__this->fields.isReadAuth )
        goto LABEL_440;
      goto LABEL_441;
    case 9:
      p__8__1 = &this->fields.__8__1;
      this->fields.__1__state = -1;
      goto LABEL_59;
    case 0xA:
      p_fields->__1__state = -1;
      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
        goto LABEL_494;
      if ( !byte_40F696D )
      {
        sub_B16FFC(&DataManager_TypeInfo, v225);
        byte_40F696D = 1;
      }
      v229 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v229 = DataManager_TypeInfo;
      }
      readMasterVersionResult = v229->static_fields->readMasterVersionResult;
      this->fields._readMasterVersionResult_5__6 = readMasterVersionResult;
      if ( readMasterVersionResult != 1 )
      {
        if ( (BYTE3(v229->vtable._0_Equals.methodPtr) & 4) != 0 && !v229->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v229);
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_494;
      _4__this->fields.isReadGameData = 0;
      v231 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                      NetworkManager_ResultCallbackFunc_TypeInfo,
                                                      v225,
                                                      v226,
                                                      v227,
                                                      v228);
      NetworkManager_ResultCallbackFunc___ctor(
        v231,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v232 = NetworkManager__getRequest_WarBoardWallAttackRequest_(
               v231,
               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !v232 )
        goto LABEL_494;
      LOBYTE(v232->fields.retryCount) = 1;
      RequestBase__beginRequest((RequestBase_o *)v232, 0LL);
      v237 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                  v233,
                                                  v234,
                                                  v235,
                                                  v236);
      UnityEngine_WaitForEndOfFrame___ctor(v237, 0LL);
      this->fields._waitForServerTime_5__7 = v237;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._waitForServerTime_5__7,
        (System_Int32_array **)v237,
        v238,
        v239,
        v240,
        v241,
        v242,
        v243);
      goto LABEL_162;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_494;
      if ( _4__this->fields.isReadGameData )
      {
        _4__this->fields.isReadGameData = 0;
        v107 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                        NetworkManager_ResultCallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
        NetworkManager_ResultCallbackFunc___ctor(
          v107,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackTopGameData__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v108 = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                  v107,
                                  (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TopGameDataRequest___);
        if ( !v108 )
          goto LABEL_494;
        RequestBase__beginRequest(v108, 0LL);
        v113 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                    UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                    v109,
                                                    v110,
                                                    v111,
                                                    v112);
        UnityEngine_WaitForEndOfFrame___ctor(v113, 0LL);
        this->fields._wait_5__8 = v113;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._wait_5__8,
          (System_Int32_array **)v113,
          v114,
          v115,
          v116,
          v117,
          v118,
          v119);
LABEL_65:
        wait_5__8 = (Il2CppObject *)this->fields._wait_5__8;
        this->fields.__2__current = wait_5__8;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)wait_5__8,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        v137 = 12;
      }
      else
      {
LABEL_162:
        waitForServerTime_5__7 = (Il2CppObject *)this->fields._waitForServerTime_5__7;
        this->fields.__2__current = waitForServerTime_5__7;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)waitForServerTime_5__7,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        v137 = 11;
      }
LABEL_163:
      this->fields.__1__state = v137;
      return 1;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_494;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_65;
      v121 = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_40F696E )
      {
        sub_B16FFC(&NetworkManager_TypeInfo, v120);
        byte_40F696E = 1;
      }
      v122 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v122 = NetworkManager_TypeInfo;
      }
      if ( !v121 )
        goto LABEL_494;
      CrashReporter__AddCustomKey(
        v121,
        (System_String_o *)StringLiteral_5079,
        v122->static_fields->dataServerFolder,
        0LL);
      if ( this->fields._readMasterVersionResult_5__6 == 1 )
      {
        v123 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v123 )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)v123, 0LL);
          started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                      MasterData,
                                      0LL);
          this->fields.__2__current = started;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)started,
            v127,
            v128,
            v129,
            v130,
            v131,
            v132);
          v133 = 13;
          goto LABEL_491;
        }
      }
      else
      {
LABEL_140:
        v209 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v209 )
        {
          updated = DataManager__updateMasterData((DataManager_o *)v209, !this->fields.isReboot, 0LL);
          if ( _4__this )
          {
            v211 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                     updated,
                                     0LL);
            this->fields.__2__current = v211;
            v126 = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)v126,
              (System_Int32_array **)v211,
              v212,
              v213,
              v214,
              v215,
              v216,
              v217);
            v133 = 15;
            goto LABEL_491;
          }
        }
      }
      goto LABEL_494;
    case 0xD:
      p_fields->__1__state = -1;
      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
        goto LABEL_494;
      if ( !byte_40F696F )
      {
        sub_B16FFC(&DataManager_TypeInfo, v207);
        byte_40F696F = 1;
      }
      v208 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v208 = DataManager_TypeInfo;
      }
      if ( v208->static_fields->readMasterDataResult == 1 )
        goto LABEL_140;
      if ( (BYTE3(v208->vtable._0_Equals.methodPtr) & 4) != 0 && !v208->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v208);
      DataManager__ClearCacheAll(0LL);
      v419 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v419 )
        goto LABEL_494;
      CommonUI__SetConnect(v419, 0, 0LL);
      v424 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                  v420,
                                                  v421,
                                                  v422,
                                                  v423);
      UnityEngine_WaitForEndOfFrame___ctor(v424, 0LL);
      this->fields.__2__current = (Il2CppObject *)v424;
      v126 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v126, (System_Int32_array **)v424, v425, v426, v427, v428, v429, v430);
      v133 = 14;
      goto LABEL_491;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_442;
    case 0xF:
      p_fields->__1__state = -1;
      if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
        goto LABEL_494;
      if ( !byte_40F6970 )
      {
        sub_B16FFC(&DataManager_TypeInfo, v152);
        byte_40F6970 = 1;
      }
      v153 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v153 = DataManager_TypeInfo;
      }
      this->fields._updateMasterResult_5__9 = v153->static_fields->updateMasterDataResult;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      }
      ServantCommentManager__checkUIChange(1, 0LL);
      v154 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v154 )
        goto LABEL_494;
      CommonUI__SetConnect(v154, 0, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = this->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        v474 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( v474 )
        {
          NetworkManager__SetServerSetting_23696028(v474, 0LL);
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          v475 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v475 )
          {
            v476 = DataManager__updateWebViewData((DataManager_o *)v475, 0LL);
            if ( _4__this )
            {
              v477 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                       v476,
                                       0LL);
              this->fields.__2__current = v477;
              v126 = &this->fields.__2__current;
              sub_B16F98(
                (BattleServantConfConponent_o *)v126,
                (System_Int32_array **)v477,
                v478,
                v479,
                v480,
                v481,
                v482,
                v483);
              v133 = 18;
              goto LABEL_491;
            }
          }
        }
        goto LABEL_494;
      }
      if ( updateMasterResult_5__9 == 6 )
      {
        if ( !_4__this )
          goto LABEL_494;
        _4__this->fields.isErrorDialog = 1;
        v156 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v157 = LocalizationManager__Get((System_String_o *)StringLiteral_9263, 0LL);
        v162 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v158, v159, v160, v161);
        ErrorDialog_ClickDelegate___ctor(v162, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v156 )
          goto LABEL_494;
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          v156,
          (System_String_o *)StringLiteral_1,
          v157,
          v162,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
LABEL_101:
        if ( _4__this->fields.isErrorDialog )
        {
          v163 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
          UnityEngine_WaitForEndOfFrame___ctor(v163, 0LL);
          this->fields.__2__current = (Il2CppObject *)v163;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)v163,
            v164,
            v165,
            v166,
            v167,
            v168,
            v169);
          v133 = 16;
          goto LABEL_491;
        }
        if ( this->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_397;
      }
      else if ( !_4__this )
      {
        goto LABEL_494;
      }
      _4__this->fields.isErrorDialog = 1;
      v484 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v485 = LocalizationManager__Get((System_String_o *)StringLiteral_9264, 0LL);
      v490 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v486, v487, v488, v489);
      ErrorDialog_ClickDelegate___ctor(v490, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v484 )
        goto LABEL_494;
      CommonUI__OpenRetryDialog(v484, (System_String_o *)StringLiteral_1, v485, v490, 0, 0LL);
LABEL_395:
      if ( _4__this->fields.isErrorDialog )
      {
        v491 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForEndOfFrame___ctor(v491, 0LL);
        this->fields.__2__current = (Il2CppObject *)v491;
        v126 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v126,
          (System_Int32_array **)v491,
          v492,
          v493,
          v494,
          v495,
          v496,
          v497);
        v133 = 17;
        goto LABEL_491;
      }
LABEL_397:
      this->fields._waitForServerTime_5__7 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._waitForServerTime_5__7, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._wait_5__8 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._wait_5__8, 0LL, v498, v499, v500, v501, v502, v503);
LABEL_442:
      v552 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v552 )
        goto LABEL_494;
      DataManager__Initialize((DataManager_o *)v552, 0LL);
      if ( !this->fields.isReboot && !this->fields._isCacheCheck_5__3 )
      {
        this->fields._isCacheCheck_5__3 = 1;
        v553 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v553 = ManagementManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__HasKey(v553->static_fields->RebootCacheClearKey, 0LL) )
        {
          v558 = (Il2CppObject *)sub_B170CC(ManagementManager___c__DisplayClass33_0_TypeInfo, v554, v555, v556, v557);
          System_Object___ctor(v558, 0LL);
          this->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v558;
          p__8__1 = &this->fields.__8__1;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__8__1,
            (System_Int32_array **)v558,
            v559,
            v560,
            v561,
            v562,
            v563,
            v564);
          if ( !this->fields.__8__1 )
            goto LABEL_494;
          this->fields.__8__1->fields.confirmed = 0;
          if ( !*p__8__1 )
            goto LABEL_494;
          (*p__8__1)->fields.isDecide = 0;
          v565 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v566 = LocalizationManager__Get((System_String_o *)StringLiteral_7265, 0LL);
          v567 = LocalizationManager__Get((System_String_o *)StringLiteral_7263, 0LL);
          v568 = LocalizationManager__Get((System_String_o *)StringLiteral_7262, 0LL);
          v569 = LocalizationManager__Get((System_String_o *)StringLiteral_7261, 0LL);
          v570 = (Il2CppObject *)*p__8__1;
          v571 = v569;
          v576 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                          CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                          v572,
                                                          v573,
                                                          v574,
                                                          v575);
          CommonConfirmDialog_ClickDelegate___ctor(
            v576,
            v570,
            Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
            0LL);
          if ( !v565 )
            goto LABEL_494;
          CommonUI__OpenConfirmDecideDlg(v565, v566, v567, v568, v571, v576, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
LABEL_59:
          v135 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_494;
          if ( !v135->fields.confirmed )
          {
            v466 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
            UnityEngine_WaitForEndOfFrame___ctor(v466, 0LL);
            this->fields.__2__current = (Il2CppObject *)v466;
            v126 = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)v126,
              (System_Int32_array **)v466,
              v467,
              v468,
              v469,
              v470,
              v471,
              v472);
            v133 = 9;
            goto LABEL_491;
          }
          if ( v135->fields.isDecide )
          {
            if ( !_4__this )
              goto LABEL_494;
            ManagementManager__startUpCacheClear(_4__this, 0LL);
          }
          *p__8__1 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)p__8__1, 0LL, v2, v3, v4, v5, v6, v7);
        }
        else
        {
          v602 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v602 = ManagementManager_TypeInfo;
          }
          UnityEngine_PlayerPrefs__SetInt(v602->static_fields->RebootCacheClearKey, 1, 0LL);
          UnityEngine_PlayerPrefs__Save(0LL);
        }
      }
      v603 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v603 )
        goto LABEL_494;
      CommonUI__SetConnect(v603, 1, 0LL);
      v604 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v604 )
        goto LABEL_494;
      MasterVersion = DataManager__readMasterVersion((DataManager_o *)v604, 0LL);
      if ( !_4__this )
        goto LABEL_494;
      v606 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                               (UnityEngine_MonoBehaviour_o *)_4__this,
                               MasterVersion,
                               0LL);
      this->fields.__2__current = v606;
      v126 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v126, (System_Int32_array **)v606, v607, v608, v609, v610, v611, v612);
      v133 = 10;
LABEL_491:
      *((_DWORD *)v126 - 2) = v133;
      return 1;
    case 0x10:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_494;
      goto LABEL_101;
    case 0x11:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_494;
      goto LABEL_395;
    case 0x12:
      this->fields.__1__state = -1;
      v615 = 0;
      v218 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v615);
      this->fields.__2__current = v218;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v218,
        v219,
        v220,
        v221,
        v222,
        v223,
        v224);
      v137 = 19;
      goto LABEL_163;
    case 0x13:
      p_fields->__1__state = -1;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
        goto LABEL_176;
      goto LABEL_216;
    case 0x14:
      p_fields->__1__state = -1;
LABEL_176:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) >= 1 )
      {
        v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                    UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                    v250,
                                                    v251,
                                                    v252,
                                                    v253);
        UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
        this->fields.__2__current = (Il2CppObject *)v254;
        v126 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v126,
          (System_Int32_array **)v254,
          v255,
          v256,
          v257,
          v258,
          v259,
          v260);
        v133 = 20;
        goto LABEL_491;
      }
LABEL_216:
      this->fields._isLoad_5__4 = 0;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        v431 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !v431 )
          goto LABEL_494;
        AssetManager__InitializeAssetStorage(v431, 0LL);
LABEL_355:
        v432 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !v432 )
          goto LABEL_494;
        if ( !BYTE2(v432->fields.webViewBase) )
        {
          v459 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                      v433,
                                                      v434,
                                                      v435,
                                                      v436);
          UnityEngine_WaitForEndOfFrame___ctor(v459, 0LL);
          this->fields.__2__current = (Il2CppObject *)v459;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)v459,
            v460,
            v461,
            v462,
            v463,
            v464,
            v465);
          v133 = 21;
          goto LABEL_491;
        }
        v437 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !v437 )
          goto LABEL_494;
        AssetManager__DownloadAssetStorageAttribute(
          v437,
          (System_String_o *)StringLiteral_12512,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v438 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v438 = ManagerConfig_TypeInfo;
          }
          if ( v438->static_fields->UseStandaloneAsset )
          {
            this->fields._isLoad_5__4 = 1;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playBgm((System_String_o *)StringLiteral_9322, 0LL);
            v439 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( v439 )
            {
              CommonUI__SetLoadMode(v439, 7, 0LL);
LABEL_372:
              v440 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          v246,
                                                          v247,
                                                          v248,
                                                          v249);
              UnityEngine_WaitForEndOfFrame___ctor(v440, 0LL);
              this->fields.__2__current = (Il2CppObject *)v440;
              v126 = &this->fields.__2__current;
              sub_B16F98(
                (BattleServantConfConponent_o *)v126,
                (System_Int32_array **)v440,
                v441,
                v442,
                v443,
                v444,
                v445,
                v446);
              v133 = 22;
              goto LABEL_491;
            }
            goto LABEL_494;
          }
LABEL_182:
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__getDownloadSize(0LL) >= 1 )
          {
            v265 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        v261,
                                                        v262,
                                                        v263,
                                                        v264);
            UnityEngine_WaitForEndOfFrame___ctor(v265, 0LL);
            this->fields.__2__current = (Il2CppObject *)v265;
            v126 = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)v126,
              (System_Int32_array **)v265,
              v266,
              v267,
              v268,
              v269,
              v270,
              v271);
            v133 = 23;
            goto LABEL_491;
          }
        }
LABEL_373:
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__SetOnlineStatus(0LL);
        v447 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( v447 )
        {
          NetworkManager__SetServerSetting_23696028(v447, 0LL);
          v452 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v448, v449, v450, v451);
          UnityEngine_WaitForSeconds___ctor(v452, 0.1, 0LL);
          this->fields.__2__current = (Il2CppObject *)v452;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)v452,
            v453,
            v454,
            v455,
            v456,
            v457,
            v458);
          v133 = 24;
          goto LABEL_491;
        }
        goto LABEL_494;
      }
LABEL_220:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__get_IsOnline(0LL) )
      {
        v291 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( v291 )
        {
          AssetManager__InitializeAssetStorage(v291, 0LL);
LABEL_226:
          v292 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( v292 )
          {
            if ( !BYTE2(v292->fields.webViewBase) )
            {
              v384 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          v293,
                                                          v294,
                                                          v295,
                                                          v296);
              UnityEngine_WaitForEndOfFrame___ctor(v384, 0LL);
              this->fields.__2__current = (Il2CppObject *)v384;
              v126 = &this->fields.__2__current;
              sub_B16F98(
                (BattleServantConfConponent_o *)v126,
                (System_Int32_array **)v384,
                v385,
                v386,
                v387,
                v388,
                v389,
                v390);
              v133 = 25;
              goto LABEL_491;
            }
            v297 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && v297 )
            {
              v298 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       v297,
                       (System_String_o *)StringLiteral_12512,
                       _4__this->fields.downloadParallelMax,
                       0LL);
              v299 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                       v298,
                                       0LL);
              this->fields.__2__current = v299;
              v126 = &this->fields.__2__current;
              sub_B16F98(
                (BattleServantConfConponent_o *)v126,
                (System_Int32_array **)v299,
                v300,
                v301,
                v302,
                v303,
                v304,
                v305);
              v133 = 26;
              goto LABEL_491;
            }
          }
        }
        goto LABEL_494;
      }
LABEL_231:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      LocalizationManager__LoadAssetData(0LL);
LABEL_235:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_40F6972 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, method);
        byte_40F6972 = 1;
      }
      v306 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v306 = LocalizationManager_TypeInfo;
      }
      if ( v306->static_fields->isBusySetAssetData )
      {
        v307 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForEndOfFrame___ctor(v307, 0LL);
        this->fields.__2__current = (Il2CppObject *)v307;
        v126 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v126,
          (System_Int32_array **)v307,
          v308,
          v309,
          v310,
          v311,
          v312,
          v313);
        v133 = 29;
        goto LABEL_491;
      }
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_249:
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_40F6973 )
      {
        sub_B16FFC(&FSUtility_TypeInfo, method);
        byte_40F6973 = 1;
      }
      v314 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v314 = FSUtility_TypeInfo;
      }
      if ( v314->static_fields->isBusySetAssetData )
      {
        v315 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForEndOfFrame___ctor(v315, 0LL);
        this->fields.__2__current = (Il2CppObject *)v315;
        v126 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v126,
          (System_Int32_array **)v315,
          v316,
          v317,
          v318,
          v319,
          v320,
          v321);
        v133 = 30;
        goto LABEL_491;
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
      OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !OverwriteAssetSoundName )
        goto LABEL_494;
      OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName, 0LL);
LABEL_270:
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      if ( AtlasManager__IsBusyInitialize(0LL) )
      {
        v327 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                    UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                    v323,
                                                    v324,
                                                    v325,
                                                    v326);
        UnityEngine_WaitForEndOfFrame___ctor(v327, 0LL);
        this->fields.__2__current = (Il2CppObject *)v327;
        v126 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v126,
          (System_Int32_array **)v327,
          v328,
          v329,
          v330,
          v331,
          v332,
          v333);
        v133 = 31;
        goto LABEL_491;
      }
      this->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
LABEL_276:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v334 = SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !v334 )
        goto LABEL_494;
      if ( v334->fields.isLoading )
      {
        overrideAssetSoundNameWaitCount_5__5 = this->fields._overrideAssetSoundNameWaitCount_5__5;
        this->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v391 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                      v335,
                                                      v336,
                                                      v337,
                                                      v338);
          UnityEngine_WaitForEndOfFrame___ctor(v391, 0LL);
          this->fields.__2__current = (Il2CppObject *)v391;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)v391,
            v392,
            v393,
            v394,
            v395,
            v396,
            v397);
          v133 = 32;
          goto LABEL_491;
        }
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__initializeAssetStorage(0LL);
LABEL_286:
      v340 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v340 )
        goto LABEL_494;
      if ( SoundManager__get_IsBusy(v340, 0LL) )
      {
        v345 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                    UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                    v341,
                                                    v342,
                                                    v343,
                                                    v344);
        UnityEngine_WaitForEndOfFrame___ctor(v345, 0LL);
        this->fields.__2__current = (Il2CppObject *)v345;
        v126 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v126,
          (System_Int32_array **)v345,
          v346,
          v347,
          v348,
          v349,
          v350,
          v351);
        v133 = 33;
        goto LABEL_491;
      }
      v352 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !v352 )
        goto LABEL_494;
      ScriptManager__Initialize((ScriptManager_o *)v352, 0LL);
LABEL_291:
      v353 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !v353 )
        goto LABEL_494;
      if ( v353[5].fields.isButtonEnable )
      {
        v358 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                    UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                    v354,
                                                    v355,
                                                    v356,
                                                    v357);
        UnityEngine_WaitForEndOfFrame___ctor(v358, 0LL);
        this->fields.__2__current = (Il2CppObject *)v358;
        v126 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v126,
          (System_Int32_array **)v358,
          v359,
          v360,
          v361,
          v362,
          v363,
          v364);
        v133 = 34;
        goto LABEL_491;
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
      if ( this->fields._isLoad_5__4 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9322, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__fadeoutBgm(1.0, 0LL);
          v369 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v365, v366, v367, v368);
          UnityEngine_WaitForSeconds___ctor(v369, 1.0, 0LL);
          this->fields.__2__current = (Il2CppObject *)v369;
          v126 = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)v126,
            (System_Int32_array **)v369,
            v370,
            v371,
            v372,
            v373,
            v374,
            v375);
          v133 = 35;
          goto LABEL_491;
        }
LABEL_311:
        v96 = (const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_312:
        v376 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance(v96);
        if ( !v376 )
          goto LABEL_494;
        CommonUI__SetLoadMode(v376, 0, 0LL);
      }
      else
      {
        v504 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v504 )
          goto LABEL_494;
        if ( CommonUI__IsLoadMode(v504, 3, 0LL) )
        {
          v505 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v505 )
          {
            CommonUI__InitMaskClick(v505, 0LL);
LABEL_402:
            v506 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        v92,
                                                        v93,
                                                        v94,
                                                        v95);
            UnityEngine_WaitForEndOfFrame___ctor(v506, 0LL);
            this->fields.__2__current = (Il2CppObject *)v506;
            v126 = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)v126,
              (System_Int32_array **)v506,
              v507,
              v508,
              v509,
              v510,
              v511,
              v512);
            v133 = 36;
            goto LABEL_491;
          }
          goto LABEL_494;
        }
      }
      if ( _4__this )
      {
        ManagementManager__BuildInfoOff(_4__this, 0LL);
        v615 = 0;
        v377 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v615);
        this->fields.__2__current = v377;
        v126 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v126,
          (System_Int32_array **)v377,
          v378,
          v379,
          v380,
          v381,
          v382,
          v383);
        v133 = 37;
        goto LABEL_491;
      }
      goto LABEL_494;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_355;
    case 0x16:
      p_fields->__1__state = -1;
      v245 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v245 )
        goto LABEL_494;
      if ( !CommonUI__IsBusyLoad(v245, 0LL) )
        goto LABEL_373;
      goto LABEL_372;
    case 0x17:
      p_fields->__1__state = -1;
      goto LABEL_182;
    case 0x18:
      p_fields->__1__state = -1;
      goto LABEL_220;
    case 0x19:
      p_fields->__1__state = -1;
      goto LABEL_226;
    case 0x1A:
      p_fields->__1__state = -1;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__getDownloadSize(0LL) < 1 )
        goto LABEL_231;
      this->fields._isLoad_5__4 = 1;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_40F6971 )
      {
        sub_B16FFC(&LogoMain_TypeInfo, v281);
        byte_40F6971 = 1;
      }
      v282 = LogoMain_TypeInfo;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v282 = LogoMain_TypeInfo;
      }
      if ( !v282->static_fields->_isPlaying_k__BackingField )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm((System_String_o *)StringLiteral_9322, 0LL);
      }
      v283 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v283 )
        goto LABEL_494;
      CommonUI__SetLoadMode(v283, 7, 0LL);
LABEL_215:
      v284 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v98, v99, v100, v101);
      UnityEngine_WaitForEndOfFrame___ctor(v284, 0LL);
      this->fields.__2__current = (Il2CppObject *)v284;
      v126 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v126, (System_Int32_array **)v284, v285, v286, v287, v288, v289, v290);
      v133 = 27;
      goto LABEL_491;
    case 0x1B:
      p_fields->__1__state = -1;
      v97 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v97 )
        goto LABEL_494;
      if ( CommonUI__IsBusyLoad(v97, 0LL) )
        goto LABEL_215;
      v102 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v102 )
        goto LABEL_494;
      CommonUI__InitMaskClick(v102, 0LL);
LABEL_194:
      v274 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                  v103,
                                                  v104,
                                                  v105,
                                                  v106);
      UnityEngine_WaitForEndOfFrame___ctor(v274, 0LL);
      this->fields.__2__current = (Il2CppObject *)v274;
      v126 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v126, (System_Int32_array **)v274, v275, v276, v277, v278, v279, v280);
      v133 = 28;
      goto LABEL_491;
    case 0x1C:
      p_fields->__1__state = -1;
      v272 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v272 )
        goto LABEL_494;
      if ( !CommonUI__IsMaskClick(v272, 0LL) )
        goto LABEL_194;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v273 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v273 )
        goto LABEL_494;
      CommonUI__SetLoadMode(v273, 0, 0LL);
      goto LABEL_231;
    case 0x1D:
      p_fields->__1__state = -1;
      goto LABEL_235;
    case 0x1E:
      p_fields->__1__state = -1;
      goto LABEL_249;
    case 0x1F:
      p_fields->__1__state = -1;
      goto LABEL_270;
    case 0x20:
      p_fields->__1__state = -1;
      goto LABEL_276;
    case 0x21:
      p_fields->__1__state = -1;
      goto LABEL_286;
    case 0x22:
      p_fields->__1__state = -1;
      goto LABEL_291;
    case 0x23:
      p_fields->__1__state = -1;
      goto LABEL_311;
    case 0x24:
      p_fields->__1__state = -1;
      v91 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v91 )
        goto LABEL_494;
      if ( !CommonUI__IsMaskClick(v91, 0LL) )
        goto LABEL_402;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v96 = (const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      goto LABEL_312;
    case 0x25:
      p_fields->__1__state = -1;
      v88 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v88 = ManagementManager_TypeInfo;
      }
      if ( !UnityEngine_PlayerPrefs__GetInt(v88->static_fields->PushStateSendedKey, 0, 0LL) )
      {
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        Notiffication = OptionManager__GetNotiffication(0LL);
        OptionManager__SetNotiffication(Notiffication, 1, 0LL);
        v90 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v90 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v90->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_494;
      _4__this->fields._IsInitialized = 1;
      LOBYTE(_4__this->fields.scenetype) = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, 0LL);
      if ( this->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, 0LL);
      }
      else
      {
        v473 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v473 )
          goto LABEL_494;
        AvalonSceneManager__transitionScene(v473, 9, 1, 0LL, 0LL);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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