void __fastcall ManagementManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v21; // x1
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
  struct ManagementManager_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42E72CB & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_8264/*"IsNotificationStatusSend"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_8276/*"IsReBootCacheClearKey"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20288/*"ja-JP"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23762/*"yyyy年MM月dd日HH時mm分"*/, v17, v18, v19);
    byte_42E72CB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ManagementManager_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_8264/*"IsNotificationStatusSend"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8264/*"IsNotificationStatusSend"*/;
  sub_B5D560(static_fields, v21, v2, v3, v4, v5, v6, v7);
  v22 = ManagementManager_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_8276/*"IsReBootCacheClearKey"*/;
  v22->RebootCacheClearKey = (struct System_String_o *)StringLiteral_8276/*"IsReBootCacheClearKey"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->RebootCacheClearKey, v23, v24, v25, v26, v27, v28, v29);
  v30 = ManagementManager_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_23762/*"yyyy年MM月dd日HH時mm分"*/;
  v30->DATE_TIME_DISP_FORMAT = (struct System_String_o *)StringLiteral_23762/*"yyyy年MM月dd日HH時mm分"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v30->DATE_TIME_DISP_FORMAT, v31, v32, v33, v34, v35, v36, v37);
  v38 = ManagementManager_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_20288/*"ja-JP"*/;
  v38->DEFAULT_CULTURE_NAME = (struct System_String_o *)StringLiteral_20288/*"ja-JP"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v38->DEFAULT_CULTURE_NAME, v39, v40, v41, v42, v43, v44, v45);
  ManagementManager_TypeInfo->static_fields->isDuringStartup = 1;
}


void __fastcall ManagementManager___ctor(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E72CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E72CA = 1;
  }
  this->fields.downloadParallelMax = 3;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_ManagementManager___ctor__);
}


void __fastcall ManagementManager__AdManagerInitializeErrorLogOutputRatio(
        ManagementManager_o *this,
        System_String_o *errorText,
        System_String_o *exceptionMessage,
        float ratio,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  Il2CppObject *v34; // x19
  float v35; // s0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  Il2CppObject *v56; // x19
  __int64 v57; // x0
  __int64 v58; // x0
  float v59; // [xsp+Ch] [xbp-24h] BYREF

  v59 = ratio;
  if ( (byte_42E72B8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, (_DWORD)errorText, (_DWORD)exceptionMessage, method);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_678/*"):"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6786/*"Firebase.FirebaseApp"*/, v14, v15, v16);
    this = (ManagementManager_o *)sub_B5D5C4(&StringLiteral_647/*"(ratio: "*/, v17, v18, v19);
    byte_42E72B8 = 1;
  }
  if ( !exceptionMessage )
    goto LABEL_34;
  if ( System_String__Contains(exceptionMessage, (System_String_o *)StringLiteral_6786/*"Firebase.FirebaseApp"*/, 0LL) )
  {
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) >= ratio )
      return;
    this = (ManagementManager_o *)sub_B5D5DC(string___TypeInfo, 5LL);
    if ( this )
    {
      v26 = (System_String_array *)this;
      if ( !errorText || (this = (ManagementManager_o *)sub_B5D684(errorText, this->klass->_1.element_class)) != 0LL )
      {
        if ( !v26->max_length )
          goto LABEL_35;
        v26->m_Items[0] = errorText;
        sub_B5D560(
          (BattleServantConfConponent_o *)v26->m_Items,
          (System_Int32_array **)errorText,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        this = (ManagementManager_o *)StringLiteral_647/*"(ratio: "*/;
        if ( StringLiteral_647/*"(ratio: "*/ )
        {
          this = (ManagementManager_o *)sub_B5D684(StringLiteral_647/*"(ratio: "*/, v26->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_36;
          v33 = (System_Int32_array **)StringLiteral_647/*"(ratio: "*/;
        }
        else
        {
          v33 = 0LL;
        }
        if ( v26->max_length <= 1 )
          goto LABEL_35;
        v26->m_Items[1] = (System_String_o *)v33;
        sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
        this = (ManagementManager_o *)System_Single__ToString(v35, (const MethodInfo *)&v59);
        v42 = (System_Int32_array **)this;
        if ( !this || (this = (ManagementManager_o *)sub_B5D684(this, v26->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v26->max_length <= 2 )
            goto LABEL_35;
          v26->m_Items[2] = (System_String_o *)v42;
          sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[2], v42, v36, v37, v38, v39, v40, v41);
          this = (ManagementManager_o *)StringLiteral_678/*"):"*/;
          if ( StringLiteral_678/*"):"*/ )
          {
            this = (ManagementManager_o *)sub_B5D684(StringLiteral_678/*"):"*/, v26->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_36;
            v49 = (System_Int32_array **)StringLiteral_678/*"):"*/;
          }
          else
          {
            v49 = 0LL;
          }
          if ( v26->max_length <= 3 )
            goto LABEL_35;
          v26->m_Items[3] = (System_String_o *)v49;
          sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
          this = (ManagementManager_o *)sub_B5D684(exceptionMessage, v26->obj.klass->_1.element_class);
          if ( this )
          {
            if ( v26->max_length > 4 )
            {
              v26->m_Items[4] = exceptionMessage;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v26->m_Items[4],
                (System_Int32_array **)exceptionMessage,
                v50,
                v51,
                v52,
                v53,
                v54,
                v55);
              v56 = (Il2CppObject *)System_String__Concat_44657912(v26, 0LL);
              if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError(v56, 0LL);
              return;
            }
LABEL_35:
            v57 = sub_B5D6C8(this);
            sub_B5D668(v57, 0LL);
          }
        }
      }
LABEL_36:
      v58 = sub_B5D6BC();
      sub_B5D668(v58, 0LL);
    }
LABEL_34:
    sub_B5D69C(this, errorText);
  }
  v34 = (Il2CppObject *)System_String__Concat_44577788(errorText, exceptionMessage, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v34, 0LL);
}


void __fastcall ManagementManager__Awake(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E72B4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__, v5, v6, v7);
    byte_42E72B4 = 1;
  }
  if ( !SingletonMonoBehaviour_WarBoardManager___CheckInstance(
          (SingletonMonoBehaviour_WarBoardManager__o *)this,
          (const MethodInfo_2A30104 *)Method_SingletonMonoBehaviour_ManagementManager__CheckInstance__) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
}


void __fastcall ManagementManager__BuildInfoDisp(ManagementManager_o *this, bool boot, const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42E72C8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, boot, (_DWORD)method, v3);
    byte_42E72C8 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__get_Debug_IsBuildInfoDisp(0LL);
  ManagementManager__BuildInfoOff(this, v5);
}


void __fastcall ManagementManager__BuildInfoOff(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *debugInfoRootObject; // x0

  if ( (byte_42E72C7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E72C7 = 1;
  }
  debugInfoRootObject = this->fields.debugInfoRootObject;
  if ( !debugInfoRootObject
    || (debugInfoRootObject = UnityEngine_GameObject__get_gameObject(debugInfoRootObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(debugInfoRootObject, 0, 0LL),
        (debugInfoRootObject = (UnityEngine_GameObject_o *)this->fields.statusLabel) == 0LL) )
  {
    sub_B5D69C(debugInfoRootObject, method);
  }
  UILabel__set_text((UILabel_o *)debugInfoRootObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ManagementManager__CompletionStartup(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ManagementManager_c *v4; // x0

  if ( (byte_42E72B2 & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, v1, v2, v3);
    byte_42E72B2 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  v4->static_fields->isDuringStartup = 0;
}


void __fastcall ManagementManager__EndDifferentCreateUserServerDialog(
        ManagementManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E72BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E72BE = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  AvalonSceneManager__transitionScene(Instance, 4, 1, 0LL, 0LL);
}


void __fastcall ManagementManager__EndLogDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall ManagementManager__EndQuitDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_41546252(0LL);
}


void __fastcall ManagementManager__EndRetryDialog(ManagementManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    UnityEngine_Application__Quit_41546252(0LL);
}


System_Collections_IEnumerator_o *__fastcall ManagementManager__InitializeAdManagerAndFirebase(
        ManagementManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E72BB & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E72BB = 1;
  }
  v5 = sub_B5D694(ManagementManager__InitializeAdManagerAndFirebase_d__34_TypeInfo);
  ManagementManager__InitializeAdManagerAndFirebase_d__34___ctor(
    (ManagementManager__InitializeAdManagerAndFirebase_d__34_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall ManagementManager__IsInitialized(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ManagementManager_c *v4; // x0

  if ( (byte_42E72C5 & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E72C5 = 1;
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_42E5AE3 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5AE3 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  return !v4->static_fields->isDuringStartup;
}


bool __fastcall ManagementManager__IsLoading(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E72C6 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, v7, v8, v9);
    byte_42E72C6 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  return WebViewManager__get_IsBusy(Instance, 0LL);
}


void __fastcall ManagementManager__NotifyRequestPermissionsResultFromPlugin(
        ManagementManager_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E72B9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23112/*"true"*/, (_DWORD)message, (_DWORD)method, v3);
    byte_42E72B9 = 1;
  }
  this->fields.isPermissionRequesting = 0;
  if ( !System_String__op_Inequality(message, (System_String_o *)StringLiteral_23112/*"true"*/, 0LL) )
    this->fields.isPermissionGranted = 1;
}


void __fastcall ManagementManager__OnRuntimeMethodLoad(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ManagementManager_c *v7; // x0
  System_String_o *DEFAULT_CULTURE_NAME; // x19
  System_Globalization_CultureInfo_o *SpecificCulture; // x0

  if ( (byte_42E72C9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Globalization_CultureInfo_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ManagementManager_TypeInfo, v4, v5, v6);
    byte_42E72C9 = 1;
  }
  v7 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v7 = ManagementManager_TypeInfo;
  }
  DEFAULT_CULTURE_NAME = v7->static_fields->DEFAULT_CULTURE_NAME;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ManagementManager_c *v4; // x0
  ManagementManager_c *v5; // x0

  if ( (byte_42E72B3 & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, v1, v2, v3);
    byte_42E72B3 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v4->static_fields->RebootCacheClearKey, 0LL) )
  {
    v5 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v5 = ManagementManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->RebootCacheClearKey, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall ManagementManager__Start(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  intptr_t v15; // w21
  System_Type_o *TypeFromHandle; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *v19; // x1
  System_RuntimeTypeHandle_o v20; // 0:w0.4

  if ( (byte_42E72B5 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Type_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityGamingServicesBehaviour_var, v11, v12, v13);
    byte_42E72B5 = 1;
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
  v15 = (int)UnityGamingServicesBehaviour_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v20.fields.value = v15;
  TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0LL);
  if ( !gameObject )
    sub_B5D69C(TypeFromHandle, TypeFromHandle);
  UnityEngine_GameObject__AddComponent(gameObject, TypeFromHandle, 0LL);
  ManagementManager__createMovieObj(this, v17);
  v19 = ManagementManager__startCheckAll(this, 0, 0, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
}


void __fastcall ManagementManager__Update(ManagementManager_o *this, const MethodInfo *method)
{
  _BOOL8 IsInitialized; // x0
  const MethodInfo *v3; // x1

  if ( this->fields.IsQuitFlag )
  {
    IsInitialized = ManagementManager__IsInitialized(this, method);
    if ( IsInitialized && !ManagementManager__IsLoading((ManagementManager_o *)IsInitialized, v3) )
      UnityEngine_Application__Quit_41546252(0LL);
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
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ManagementManager_c *v7; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E72C4 & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    byte_42E72C4 = 1;
  }
  v7 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v7 = ManagementManager_TypeInfo;
  }
  v7->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ManagementManager__callbackTerminalTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  ManagerConfig_c *v20; // x0
  _BOOL8 _29295864; // x0
  System_String_o *v22; // x1
  const MethodInfo *v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v26; // x1

  if ( (byte_42E72C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ManagementManager_callbackTerminalTopHome__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TopHomeRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v17, v18, v19);
    byte_42E72C3 = 1;
  }
  v20 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
  }
  if ( v20->static_fields->UseMock )
    goto LABEL_11;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = TutorialFlag__Get_29295864(102, 0LL);
  if ( _29295864 )
  {
LABEL_11:
    v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_ManagementManager_callbackTerminalTopHome__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v24,
                                                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B5D69C(0LL, v26);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
  }
  else
  {
    ManagementManager__callbackTerminalTopHome((ManagementManager_o *)_29295864, v22, v23);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ManagementManager_c *v8; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E72C1 & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    byte_42E72C1 = 1;
  }
  v8 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v8 = ManagementManager_TypeInfo;
  }
  v8->static_fields->isDuringStartup = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  AvalonSceneManager__transitionScene(Instance, *(&this->fields.scenetype + 1), 0, 0LL, 0LL);
}


void __fastcall ManagementManager__callbackTopLogin(
        ManagementManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  ManagerConfig_c *v20; // x0
  System_String_o *v21; // x1
  const MethodInfo *v22; // x2
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v25; // x1

  if ( (byte_42E72C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ManagementManager_callbackTopHome__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TopHomeRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v17, v18, v19);
    byte_42E72C0 = 1;
  }
  v20 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
  }
  if ( v20->static_fields->UseMock )
    goto LABEL_11;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(102, 0LL) )
  {
LABEL_11:
    v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v23, (Il2CppObject *)this, Method_ManagementManager_callbackTopHome__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v23,
                                                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TopHomeRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B5D69C(0LL, v25);
    RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
  }
  else
  {
    ManagementManager__callbackTopHome(this, v21, v22);
  }
}


void __fastcall ManagementManager__createMovieObj(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct AvalonVideoPlayer_o **p_videoPlayer_k__BackingField; // x20
  UnityEngine_Object_o *videoPlayer_k__BackingField; // x21
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_GameObject_o *v23; // x21
  UnityEngine_Camera_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  AvalonVideoPlayer_o *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x1

  if ( (byte_42E72B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Camera___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_4261/*"CommonUI/UI Root/SystemUICamera"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9308/*"MovieRoot"*/, v17, v18, v19);
    byte_42E72B6 = 1;
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
    v22 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_4261/*"CommonUI/UI Root/SystemUICamera"*/, 0LL);
    v23 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v23, (System_String_o *)StringLiteral_9308/*"MovieRoot"*/, 0LL);
    if ( !v23
      || (v26 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                         v23,
                                         (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_AvalonVideoPlayer___),
          *p_videoPlayer_k__BackingField = (struct AvalonVideoPlayer_o *)v26,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields._videoPlayer_k__BackingField,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32),
          !v22)
      || (v33 = *p_videoPlayer_k__BackingField,
          Component_srcLineSprite = (UnityEngine_Camera_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v22,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Camera___),
          !v33) )
    {
      sub_B5D69C(Component_srcLineSprite, v25);
    }
    AvalonVideoPlayer__initialize(v33, Component_srcLineSprite, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(v23, gameObject, 0LL);
  }
}


int32_t __fastcall ManagementManager__get_DownloadParallelMax(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E72B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v1, v2, v3);
    byte_42E72B0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  return HIDWORD(Instance->fields.titleLabel);
}


bool __fastcall ManagementManager__get_IsDuringStartup(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ManagementManager_c *v4; // x0

  if ( (byte_42E72B1 & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, v1, v2, v3);
    byte_42E72B1 = 1;
  }
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  return v4->static_fields->isDuringStartup;
}


AvalonVideoPlayer_o *__fastcall ManagementManager__get_videoPlayer(ManagementManager_o *this, const MethodInfo *method)
{
  return this->fields._videoPlayer_k__BackingField;
}


void __fastcall ManagementManager__reboot(ManagementManager_o *this, bool isLogin, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  char v45; // w1
  int v46; // w2
  __int64 v47; // x3
  char v48; // w1
  int v49; // w2
  __int64 v50; // x3
  char v51; // w1
  int v52; // w2
  __int64 v53; // x3
  char v54; // w1
  int v55; // w2
  __int64 v56; // x3
  ManagementManager_c *v57; // x0
  ScriptManager_o *Instance; // x0
  __int64 v59; // x1
  AdManager_o *v60; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x3
  System_Collections_IEnumerator_o *v63; // x1

  if ( (byte_42E72B7 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, isLogin, (_DWORD)method, v3);
    sub_B5D5C4(&CTouch_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CommonEffectManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&FirebaseScript_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_GC_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ManagementManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&SoundManager_TypeInfo, v54, v55, v56);
    byte_42E72B7 = 1;
  }
  if ( !LOBYTE(this->fields.scenetype) )
  {
    LOBYTE(this->fields.scenetype) = 1;
    v57 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v57 = ManagementManager_TypeInfo;
    }
    v57->static_fields->isDuringStartup = 1;
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    ScriptManager__reboot(Instance, 1, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    AvalonSceneManager__reboot((AvalonSceneManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MissionNotifyManager__Reboot((MissionNotifyManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__Reboot((CommonUI_o *)Instance, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__Reboot(0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FlashingIconManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    FlashingIconManager__Reboot((FlashingIconManager_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (ScriptManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
LABEL_42:
      sub_B5D69C(Instance, v59);
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_43893280(0LL);
    v60 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v60 )
      sub_B5D69C(0LL, v61);
    AdManager__Initialize(v60, 2, 0LL);
    if ( (BYTE3(FirebaseScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    }
    FirebaseScript__Initialize(0LL);
    v63 = ManagementManager__startCheckAll(this, 1, isLogin, v62);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v63, 0LL);
  }
}


void __fastcall ManagementManager__requestLogin(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E72BF & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_LoginCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ManagementManager_callbackTopLogin__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v8, v9, v10);
    byte_42E72BF = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v12 = (NetworkManager_LoginCallbackFunc_o *)sub_B5D694(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ManagementManager_callbackTopLogin__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  NetworkManager__RequestLogin(Instance, v12, 1, 0LL);
}


void __fastcall ManagementManager__requestTerminalLogin(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E72C2 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_LoginCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ManagementManager_callbackTerminalTopLogin__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v8, v9, v10);
    byte_42E72C2 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v12 = (NetworkManager_LoginCallbackFunc_o *)sub_B5D694(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ManagementManager_callbackTerminalTopLogin__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  NetworkManager__RequestLogin(Instance, v12, 1, 0LL);
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
  sub_B5D560(
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

  if ( (byte_42E72BA & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager__startCheckAll_d__33_TypeInfo, isReboot, isLogin, method);
    byte_42E72BA = 1;
  }
  v7 = sub_B5D694(ManagementManager__startCheckAll_d__33_TypeInfo);
  ManagementManager__startCheckAll_d__33___ctor((ManagementManager__startCheckAll_d__33_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 32) = isReboot;
  *(_BYTE *)(v7 + 56) = isLogin;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ManagementManager__startUpCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E72BC & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E72BC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__ClearCacheAll(0LL);
}


void __fastcall ManagementManager__titleCacheClear(ManagementManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ScrTerminalListTop_c *v13; // x0
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  TerminalPramsManager_c *v17; // x0

  if ( (byte_42E72BD & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScrTerminalListTop_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    byte_42E72BD = 1;
  }
  MovieFileMerge__Delete_22835872(0LL);
  v13 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v13 = ScrTerminalListTop_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v13->static_fields->NOTICE_LAST_MODIFIED_KEY, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B57 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    byte_42E4B57 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsDispDone_AutoWebView_k__BackingField = 0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v13; // x19
  AdManager_o *Instance; // x0
  __int64 v15; // x1
  AdManager_o *v16; // x0
  __int64 v17; // x1

  if ( (byte_42E5EE6 & 1) == 0 )
  {
    sub_B5D5C4(&FirebaseScript_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v8, v9, v10);
    byte_42E5EE6 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v15);
    AdManager__Initialize(Instance, 0, 0LL);
    v16 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v16 )
      sub_B5D69C(0LL, v17);
    AdManager__Initialize(v16, 1, 0LL);
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
      v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v13, 0LL);
      this->fields.__2__current = (Il2CppObject *)v13;
      sub_B5D560(&this->fields.__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ManagementManager__InitializeAdManagerAndFirebase_d__34_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_42E5EE5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__, v9, v10, v11);
    sub_B5D5C4(&ManagementManager___c__DisplayClass33_1_TypeInfo, v12, v13, v14);
    byte_42E5EE5 = 1;
  }
  v15 = sub_B5D694(ManagementManager___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 24) = this,
        sub_B5D560(v15 + 24),
        *(_BYTE *)(v15 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v15,
          Method_ManagementManager___c__DisplayClass33_1__startCheckAll_b__1__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v16, v17);
  }
  CommonUI__CloseConfirmDialog_18202348(Instance, v19, 0LL);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  ManagementManager__startCheckAll_d__33_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  int v152; // w1
  int v153; // w2
  __int64 v154; // x3
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  int v158; // w1
  int v159; // w2
  __int64 v160; // x3
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  int v164; // w1
  int v165; // w2
  __int64 v166; // x3
  int v167; // w1
  int v168; // w2
  __int64 v169; // x3
  int v170; // w1
  int v171; // w2
  __int64 v172; // x3
  int v173; // w1
  int v174; // w2
  __int64 v175; // x3
  int v176; // w1
  int v177; // w2
  __int64 v178; // x3
  int v179; // w1
  int v180; // w2
  __int64 v181; // x3
  int v182; // w1
  int v183; // w2
  __int64 v184; // x3
  int v185; // w1
  int v186; // w2
  __int64 v187; // x3
  int v188; // w1
  int v189; // w2
  __int64 v190; // x3
  int v191; // w1
  int v192; // w2
  __int64 v193; // x3
  int v194; // w1
  int v195; // w2
  __int64 v196; // x3
  int v197; // w1
  int v198; // w2
  __int64 v199; // x3
  int v200; // w1
  int v201; // w2
  __int64 v202; // x3
  ManagementManager__startCheckAll_d__33_Fields *p_fields; // x8
  struct ManagementManager_o *_4__this; // x20
  _BOOL4 isReboot; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ManagementManager_c *v208; // x0
  bool Notiffication; // w0
  ManagementManager_c *v210; // x0
  const MethodInfo_2A2FE60 *v211; // x0
  NetworkManager_ResultCallbackFunc_o *v212; // x21
  UnityEngine_WaitForEndOfFrame_o *v213; // x20
  int v214; // w2
  __int64 v215; // x3
  CrashReporter_o *v216; // x21
  System_Collections_IEnumerator_o *MasterData; // x0
  Il2CppObject **v218; // x19
  int v219; // w8
  Il2CppObject **p__8__1; // x21
  Il2CppObject *v221; // x8
  int v222; // w8
  int v223; // w2
  __int64 v224; // x3
  DataManager_c *v225; // x0
  int32_t updateMasterResult_5__9; // w8
  CommonUI_o *v227; // x21
  System_String_o *v228; // x22
  ErrorDialog_ClickDelegate_o *v229; // x23
  UnityEngine_WaitForEndOfFrame_o *v230; // x20
  UnityEngine_WaitForEndOfFrame_o *v231; // x20
  ManagementManager__startCheckAll_d__33_o *v232; // x21
  __int64 v233; // x0
  __int64 v234; // x1
  UnityEngine_WaitForEndOfFrame_o *v235; // x20
  int v236; // w2
  __int64 v237; // x3
  DataManager_c *v238; // x0
  int v239; // w2
  __int64 v240; // x3
  int32_t monitor; // w8
  NetworkManager_ResultCallbackFunc_o *v242; // x21
  UnityEngine_WaitForEndOfFrame_o *v243; // x20
  UnityEngine_WaitForEndOfFrame_o *v244; // x20
  UnityEngine_WaitForEndOfFrame_o *v245; // x20
  UnityEngine_WaitForEndOfFrame_o *v246; // x20
  int v247; // w1
  int v248; // w2
  __int64 v249; // x3
  LogoMain_c *v250; // x0
  UnityEngine_WaitForEndOfFrame_o *v251; // x20
  System_Collections_IEnumerator_o *v252; // x0
  LocalizationManager_c *v253; // x0
  UnityEngine_WaitForEndOfFrame_o *v254; // x20
  FSUtility_c *v255; // x0
  UnityEngine_WaitForEndOfFrame_o *v256; // x20
  UnityEngine_WaitForEndOfFrame_o *v257; // x20
  int overrideAssetSoundNameWaitCount_5__5; // w8
  UnityEngine_WaitForEndOfFrame_o *v259; // x20
  UnityEngine_WaitForEndOfFrame_o *v260; // x20
  UnityEngine_WaitForSeconds_o *v261; // x20
  UnityEngine_WaitForEndOfFrame_o *v262; // x20
  UnityEngine_WaitForEndOfFrame_o *v263; // x20
  __int64 v264; // x1
  __int64 v265; // x1
  EncryptedPlayerPrefs_c *v266; // x0
  struct EncryptedPlayerPrefs_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v268; // x20
  ManagerConfig_c *v269; // x0
  UnityEngine_WaitForEndOfFrame_o *v270; // x20
  UnityEngine_WaitForSeconds_o *v271; // x20
  UnityEngine_WaitForEndOfFrame_o *v272; // x20
  UnityEngine_WaitForEndOfFrame_o *v273; // x20
  CommonUI_o *v274; // x21
  System_String_o *v275; // x22
  ErrorDialog_ClickDelegate_o *v276; // x23
  UnityEngine_WaitForEndOfFrame_o *v277; // x20
  UnityEngine_WaitForEndOfFrame_o *v278; // x20
  UnityEngine_WaitForEndOfFrame_o *v279; // x20
  __int64 v280; // x0
  __int64 v281; // x0
  System_String_o *temporaryCachePath; // x21
  int64_t FreeSize; // x21
  System_String_o *DatFileSavePath; // x0
  int64_t v285; // x0
  ManagerConfig_c *v286; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v288; // x22
  ErrorDialog_ClickDelegate_o *v289; // x23
  int32_t readResult_5__2; // w8
  int32_t *p_readResult_5__2; // x21
  NetworkManager_ResultCallbackFunc_o *v292; // x21
  UnityEngine_WaitForEndOfFrame_o *v293; // x20
  ManagementManager_c *v294; // x0
  Il2CppObject *v295; // x22
  CommonUI_o *v296; // x22
  System_String_o *v297; // x23
  System_String_o *v298; // x24
  System_String_o *v299; // x25
  System_String_o *v300; // x0
  Il2CppObject *v301; // x28
  System_String_o *v302; // x26
  CommonConfirmDialog_ClickDelegate_o *v303; // x27
  UnityEngine_WaitForEndOfFrame_o *v304; // x20
  Il2CppObject *v305; // x19
  System_String_o *v306; // x19
  System_String_o *DispFriendCode; // x22
  CommonUI_o *v308; // x22
  System_String_o *v309; // x23
  ManagementManager__startCheckAll_d__33_o *v310; // x24
  void *v311; // x25
  System_String_o *v312; // x21
  Il2CppObject *v313; // x2
  System_String_o *v314; // x19
  ErrorDialog_ClickDelegate_o *v315; // x23
  ManagementManager_c *v316; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  int v318; // [xsp+48h] [xbp-58h] BYREF
  int v319; // [xsp+4Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_42E5EE7 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AtlasManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CommonServicePluginScript_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&FSUtility_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&int_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&LogoMain_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_ManagementManager_EndLogDialog__, v41, v42, v43);
    sub_B5D5C4(&Method_ManagementManager_EndQuitDialog__, v44, v45, v46);
    sub_B5D5C4(&Method_ManagementManager_EndRetryDialog__, v47, v48, v49);
    sub_B5D5C4(&Method_ManagementManager_callbackAccountRegist__, v50, v51, v52);
    sub_B5D5C4(&Method_ManagementManager_callbackTopGameData__, v53, v54, v55);
    sub_B5D5C4(&ManagementManager_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_NetworkManager_getRequest_AccountRegistRequest___, v62, v63, v64);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TopGameDataRequest___, v65, v66, v67);
    sub_B5D5C4(&NetworkManager_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&OptionManager_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&NetworkManager_ReadResult_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&ResolutionManager_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v83, v84, v85);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v86, v87, v88);
    sub_B5D5C4(&SignedData_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v92, v93, v94);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v95, v96, v97);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v98, v99, v100);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v101, v102, v103);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v104, v105, v106);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v107, v108, v109);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v110, v111, v112);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v113, v114, v115);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v116, v117, v118);
    sub_B5D5C4(&Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__, v119, v120, v121);
    sub_B5D5C4(&SingletonTemplate_LocalNotificationManagerAndroid__TypeInfo, v122, v123, v124);
    sub_B5D5C4(&SoundManager_TypeInfo, v125, v126, v127);
    sub_B5D5C4(&string___TypeInfo, v128, v129, v130);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v131, v132, v133);
    sub_B5D5C4(&Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__, v134, v135, v136);
    sub_B5D5C4(&ManagementManager___c__DisplayClass33_0_TypeInfo, v137, v138, v139);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v140, v141, v142);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v143, v144, v145);
    sub_B5D5C4(&StringLiteral_7372/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, v146, v147, v148);
    sub_B5D5C4(&StringLiteral_9448/*"NOW_LOADING"*/, v149, v150, v151);
    sub_B5D5C4(&StringLiteral_9380/*"NETWORK_ERROR_DISK_FULL"*/, v152, v153, v154);
    sub_B5D5C4(&StringLiteral_6400/*"F39UThNh"*/, v155, v156, v157);
    sub_B5D5C4(&StringLiteral_7375/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, v158, v159, v160);
    sub_B5D5C4(&StringLiteral_9008/*"Management"*/, v161, v162, v163);
    sub_B5D5C4(&StringLiteral_7373/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, v164, v165, v166);
    sub_B5D5C4(&StringLiteral_9798/*"NotifyRequestPermissionsResultFromPlugin"*/, v167, v168, v169);
    sub_B5D5C4(&StringLiteral_7371/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, v170, v171, v172);
    sub_B5D5C4(&StringLiteral_5168/*"DataServerFolderName"*/, v173, v174, v175);
    sub_B5D5C4(&StringLiteral_16531/*"android.permission.POST_NOTIFICATIONS"*/, v176, v177, v178);
    sub_B5D5C4(&StringLiteral_9388/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v179, v180, v181);
    sub_B5D5C4(&StringLiteral_9381/*"NETWORK_ERROR_FIEND_CODE"*/, v182, v183, v184);
    sub_B5D5C4(&StringLiteral_12716/*"SYSTEM"*/, v185, v186, v187);
    sub_B5D5C4(&StringLiteral_1/*""*/, v188, v189, v190);
    sub_B5D5C4(&StringLiteral_20163/*"ioqrk4Om"*/, v191, v192, v193);
    sub_B5D5C4(&StringLiteral_1173/*"2pC0bIYM"*/, v194, v195, v196);
    sub_B5D5C4(&StringLiteral_9382/*"NETWORK_ERROR_READ_AUTH"*/, v197, v198, v199);
    this = (ManagementManager__startCheckAll_d__33_o *)sub_B5D5C4(&StringLiteral_9389/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v200, v201, v202);
    byte_42E5EE7 = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      isReboot = v4->fields.isReboot;
      v4->fields.__1__state = -1;
      if ( !isReboot )
        goto LABEL_113;
      v4->fields.__2__current = (Il2CppObject *)UnityEngine_Resources__UnloadUnusedAssets(0LL);
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
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
      v4->fields.__2__current = (Il2CppObject *)ManagementManager__InitializeAdManagerAndFirebase(_4__this, 0LL);
      v218 = &v4->fields.__2__current;
      sub_B5D560(v218);
      v219 = 2;
      goto LABEL_488;
    case 2:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      v4->fields.__2__current = (Il2CppObject *)NetworkManager__Initialize((NetworkManager_o *)this, 0LL);
      v218 = &v4->fields.__2__current;
      sub_B5D560(v218);
      v219 = 3;
      goto LABEL_488;
    case 3:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      AtlasManager__setupBootSkin((AtlasManager_o *)this, 0LL);
      OptionManager__AdjustScenarioSpeedSetting(0LL);
      OptionManager__AdjustVolume(0LL);
      UnityEngine_Application__set_targetFrameRate(30, 0LL);
      UnityEngine_Input__set_multiTouchEnabled(1, 0LL);
      if ( v4->fields.isReboot )
      {
        v231 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v231, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v231;
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 4;
        goto LABEL_488;
      }
LABEL_106:
      this = (ManagementManager__startCheckAll_d__33_o *)sub_B5D5DC(string___TypeInfo, 3LL);
      if ( !this )
        goto LABEL_490;
      v232 = this;
      v233 = StringLiteral_1173/*"2pC0bIYM"*/;
      if ( StringLiteral_1173/*"2pC0bIYM"*/ )
      {
        v233 = sub_B5D684(StringLiteral_1173/*"2pC0bIYM"*/, v232->klass->_1.element_class);
        if ( !v233 )
          goto LABEL_410;
        v234 = StringLiteral_1173/*"2pC0bIYM"*/;
      }
      else
      {
        v234 = 0LL;
      }
      if ( !LODWORD(v232->fields.__2__current) )
        goto LABEL_409;
      *(_QWORD *)&v232->fields.isReboot = v234;
      sub_B5D560(&v232->fields.isReboot);
      v233 = StringLiteral_6400/*"F39UThNh"*/;
      if ( StringLiteral_6400/*"F39UThNh"*/ )
      {
        v233 = sub_B5D684(StringLiteral_6400/*"F39UThNh"*/, v232->klass->_1.element_class);
        if ( !v233 )
          goto LABEL_410;
        v264 = StringLiteral_6400/*"F39UThNh"*/;
      }
      else
      {
        v264 = 0LL;
      }
      if ( LODWORD(v232->fields.__2__current) <= 1 )
        goto LABEL_409;
      v232->fields.__4__this = (struct ManagementManager_o *)v264;
      sub_B5D560(&v232->fields.__4__this);
      v233 = StringLiteral_20163/*"ioqrk4Om"*/;
      if ( !StringLiteral_20163/*"ioqrk4Om"*/ )
      {
        v265 = 0LL;
LABEL_328:
        if ( LODWORD(v232->fields.__2__current) > 2 )
        {
          v232->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v265;
          sub_B5D560(&v232->fields.__8__1);
          v266 = EncryptedPlayerPrefs_TypeInfo;
          if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
            v266 = EncryptedPlayerPrefs_TypeInfo;
          }
          static_fields = v266->static_fields;
          static_fields->keys = (struct System_String_array *)v232;
          sub_B5D560(&static_fields->keys);
          if ( !v4->fields.isReboot )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__EnabledRuntimePermission(0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (ManagementManager__startCheckAll_d__33_o *)AndroidPermissionManager__CheckPermission(
                                                                   (System_String_o *)StringLiteral_16531/*"android.permission.POST_NOTIFICATIONS"*/,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !_4__this )
                  goto LABEL_490;
                _4__this->fields.isPermissionRequesting = 1;
                AndroidPermissionManager__RequestPermission(
                  (System_String_o *)StringLiteral_16531/*"android.permission.POST_NOTIFICATIONS"*/,
                  (System_String_o *)StringLiteral_9008/*"Management"*/,
                  (System_String_o *)StringLiteral_9798/*"NotifyRequestPermissionsResultFromPlugin"*/,
                  0LL);
LABEL_128:
                if ( _4__this->fields.isPermissionRequesting )
                {
                  v235 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v235, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v235;
                  v218 = &v4->fields.__2__current;
                  sub_B5D560(v218);
                  v219 = 5;
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
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_LocalNotificationManagerAndroid__get_Instance__);
            if ( this )
            {
              LocalNotificationManagerAndroid__RegisterNotificationChannel(
                (LocalNotificationManagerAndroid_o *)this,
                0LL);
              v279 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v279, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v279;
              v218 = &v4->fields.__2__current;
              sub_B5D560(v218);
              v219 = 6;
              goto LABEL_488;
            }
LABEL_490:
            sub_B5D69C(this, method);
          }
LABEL_333:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !this )
            goto LABEL_490;
          this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__ReadAuth((NetworkManager_o *)this, 0LL);
          v4->fields._readResult_5__2 = (int)this;
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
            v285 = CommonServicePluginScript__GetFreeSize(DatFileSavePath, 0LL);
            if ( FreeSize < v285 )
              FreeSize = v285;
            if ( FreeSize < 1 )
              break;
            v286 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v286 = ManagerConfig_TypeInfo;
            }
            if ( FreeSize >= v286->static_fields->LIMIT_FREE_SIZE )
              break;
            _4__this->fields.isErrorDialog = 1;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v288 = LocalizationManager__Get((System_String_o *)StringLiteral_9380/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
            v289 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v289,
              (Il2CppObject *)_4__this,
              Method_ManagementManager_EndRetryDialog__,
              0LL);
            if ( !Instance )
              goto LABEL_490;
            CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v288, v289, 0, 0LL);
LABEL_411:
            if ( _4__this->fields.isErrorDialog )
            {
              v304 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v304, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v304;
              v218 = &v4->fields.__2__current;
              sub_B5D560(v218);
              v219 = 7;
              goto LABEL_488;
            }
          }
          p_readResult_5__2 = &v4->fields._readResult_5__2;
          readResult_5__2 = v4->fields._readResult_5__2;
          if ( readResult_5__2 )
          {
            if ( readResult_5__2 == 1 )
            {
              _4__this->fields.isReadAuth = 0;
              v292 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
              NetworkManager_ResultCallbackFunc___ctor(
                v292,
                (Il2CppObject *)_4__this,
                Method_ManagementManager_callbackAccountRegist__,
                0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v292,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_AccountRegistRequest___);
              if ( this )
              {
                AccountRegistRequest__beginRequest((AccountRegistRequest_o *)this, 0LL);
LABEL_437:
                v293 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v293, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v293;
                v218 = &v4->fields.__2__current;
                sub_B5D560(v218);
                v219 = 8;
                goto LABEL_488;
              }
              goto LABEL_490;
            }
            v305 = (Il2CppObject *)StringLiteral_1/*""*/;
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !this )
              goto LABEL_490;
            if ( NetworkManager__ReadFriendCode((NetworkManager_o *)this, 0LL) )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v306 = LocalizationManager__Get((System_String_o *)StringLiteral_9381/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
              this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
                v308 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v309 = LocalizationManager__Get((System_String_o *)StringLiteral_9382/*"NETWORK_ERROR_READ_AUTH"*/, 0LL);
                this = (ManagementManager__startCheckAll_d__33_o *)j_il2cpp_value_box_0(
                                                                     NetworkManager_ReadResult_TypeInfo,
                                                                     p_readResult_5__2);
                if ( this )
                {
                  v310 = this;
                  v311 = (void *)((__int64 (__fastcall *)(ManagementManager__startCheckAll_d__33_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                  *p_readResult_5__2 = *(_DWORD *)j_il2cpp_object_unbox_0(v310);
                  v312 = (System_String_o *)StringLiteral_1/*""*/;
                  v313 = (Il2CppObject *)(v311 ? v311 : StringLiteral_1/*""*/);
                  v314 = System_String__Format_44573324(v309, v305, v313, 0LL);
                  v315 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v315,
                    (Il2CppObject *)_4__this,
                    Method_ManagementManager_EndQuitDialog__,
                    0LL);
                  if ( v308 )
                  {
                    CommonUI__OpenErrorDialog(v308, v312, v314, v315, 0, 0LL);
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
              v306 = LocalizationManager__Get((System_String_o *)StringLiteral_9381/*"NETWORK_ERROR_FIEND_CODE"*/, 0LL);
            }
            v305 = (Il2CppObject *)System_String__Format(v306, (Il2CppObject *)DispFriendCode, 0LL);
            goto LABEL_470;
          }
LABEL_438:
          v4->fields._isCacheCheck_5__3 = 0;
          goto LABEL_439;
        }
LABEL_409:
        v280 = sub_B5D6C8(v233);
        sub_B5D668(v280, 0LL);
      }
      v233 = sub_B5D684(StringLiteral_20163/*"ioqrk4Om"*/, v232->klass->_1.element_class);
      if ( v233 )
      {
        v265 = StringLiteral_20163/*"ioqrk4Om"*/;
        goto LABEL_328;
      }
LABEL_410:
      v281 = sub_B5D6BC();
      sub_B5D668(v281, 0LL);
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
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      v4->fields.__1__state = -1;
      goto LABEL_59;
    case 0xA:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_42E5F96 )
      {
        sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v239, v240);
        byte_42E5F96 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)DataManager_TypeInfo;
      }
      monitor = (int32_t)this[1].fields._waitForServerTime_5__7[3].monitor;
      v4->fields._readMasterVersionResult_5__6 = monitor;
      if ( monitor != 1 )
      {
        if ( (this[2].fields._updateMasterResult_5__9 & 0x4000000) != 0 && !this[2].fields.__1__state )
          j_il2cpp_runtime_class_init_0(this);
        DataManager__ClearCacheAll(0LL);
      }
      if ( !_4__this )
        goto LABEL_490;
      _4__this->fields.isReadGameData = 0;
      v242 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v242,
        (Il2CppObject *)_4__this,
        Method_ManagementManager_callbackTopGameData__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v242,
                                                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
      if ( !this )
        goto LABEL_490;
      LOBYTE(this->fields.__4__this) = 1;
      RequestBase__beginRequest((RequestBase_o *)this, 0LL);
      v243 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v243, 0LL);
      v4->fields._waitForServerTime_5__7 = v243;
      sub_B5D560(&v4->fields._waitForServerTime_5__7);
      goto LABEL_163;
    case 0xB:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      if ( _4__this->fields.isReadGameData )
      {
        _4__this->fields.isReadGameData = 0;
        v212 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v212,
          (Il2CppObject *)_4__this,
          Method_ManagementManager_callbackTopGameData__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v212,
                                                             (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TopGameDataRequest___);
        if ( !this )
          goto LABEL_490;
        RequestBase__beginRequest((RequestBase_o *)this, 0LL);
        v213 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v213, 0LL);
        v4->fields._wait_5__8 = v213;
        sub_B5D560(&v4->fields._wait_5__8);
LABEL_66:
        v4->fields.__2__current = (Il2CppObject *)v4->fields._wait_5__8;
        sub_B5D560(&v4->fields.__2__current);
        v222 = 12;
      }
      else
      {
LABEL_163:
        v4->fields.__2__current = (Il2CppObject *)v4->fields._waitForServerTime_5__7;
        sub_B5D560(&v4->fields.__2__current);
        v222 = 11;
      }
LABEL_165:
      v4->fields.__1__state = v222;
      return 1;
    case 0xC:
      p_fields->__1__state = -1;
      if ( !_4__this )
        goto LABEL_490;
      if ( !_4__this->fields.isReadGameData )
        goto LABEL_66;
      v216 = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_42E5F97 )
      {
        sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v214, v215);
        byte_42E5F97 = 1;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (ManagementManager__startCheckAll_d__33_o *)NetworkManager_TypeInfo;
      }
      if ( !v216 )
        goto LABEL_490;
      CrashReporter__AddCustomKey(
        v216,
        (System_String_o *)StringLiteral_5168/*"DataServerFolderName"*/,
        (System_String_o *)this[1].fields._waitForServerTime_5__7[13].klass,
        0LL);
      if ( v4->fields._readMasterVersionResult_5__6 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          MasterData = DataManager__readMasterData((DataManager_o *)this, 0LL);
          v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      MasterData,
                                                      0LL);
          v218 = &v4->fields.__2__current;
          sub_B5D560(v218);
          v219 = 13;
          goto LABEL_488;
        }
      }
      else
      {
LABEL_140:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateMasterData(
                                                               (DataManager_o *)this,
                                                               !v4->fields.isReboot,
                                                               0LL);
          if ( _4__this )
          {
            v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                        (UnityEngine_MonoBehaviour_o *)_4__this,
                                                        (System_Collections_IEnumerator_o *)this,
                                                        0LL);
            v218 = &v4->fields.__2__current;
            sub_B5D560(v218);
            v219 = 15;
            goto LABEL_488;
          }
        }
      }
      goto LABEL_490;
    case 0xD:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_42E5F98 )
      {
        sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v236, v237);
        byte_42E5F98 = 1;
      }
      v238 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v238 = DataManager_TypeInfo;
      }
      if ( v238->static_fields->readMasterDataResult == 1 )
        goto LABEL_140;
      if ( (BYTE3(v238->vtable._0_Equals.methodPtr) & 4) != 0 && !v238->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v238);
      DataManager__ClearCacheAll(0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      v268 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v268, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v268;
      v218 = &v4->fields.__2__current;
      sub_B5D560(v218);
      v219 = 14;
      goto LABEL_488;
    case 0xE:
      p_fields->__1__state = -1;
      goto LABEL_439;
    case 0xF:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( !byte_42E5F99 )
      {
        sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v223, v224);
        byte_42E5F99 = 1;
      }
      v225 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v225 = DataManager_TypeInfo;
      }
      v4->fields._updateMasterResult_5__9 = v225->static_fields->updateMasterDataResult;
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      }
      ServantCommentManager__checkUIChange(1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__InitializePreDelaySetting(0LL);
      updateMasterResult_5__9 = v4->fields._updateMasterResult_5__9;
      if ( updateMasterResult_5__9 == 1 )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_26088224((NetworkManager_o *)this, 0LL);
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ManagementManager__startCheckAll_d__33_o *)DataManager__updateWebViewData(
                                                                 (DataManager_o *)this,
                                                                 0LL);
            if ( _4__this )
            {
              v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                          (UnityEngine_MonoBehaviour_o *)_4__this,
                                                          (System_Collections_IEnumerator_o *)this,
                                                          0LL);
              v218 = &v4->fields.__2__current;
              sub_B5D560(v218);
              v219 = 18;
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
        v227 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v228 = LocalizationManager__Get((System_String_o *)StringLiteral_9388/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, 0LL);
        v229 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v229, (Il2CppObject *)_4__this, Method_ManagementManager_EndLogDialog__, 0LL);
        if ( !v227 )
          goto LABEL_490;
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          v227,
          (System_String_o *)StringLiteral_1/*""*/,
          v228,
          v229,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
LABEL_91:
        if ( _4__this->fields.isErrorDialog )
        {
          v230 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v230, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v230;
          v218 = &v4->fields.__2__current;
          sub_B5D560(v218);
          v219 = 16;
          goto LABEL_488;
        }
        if ( v4->fields._updateMasterResult_5__9 == 6 )
          goto LABEL_396;
      }
      else if ( !_4__this )
      {
        goto LABEL_490;
      }
      _4__this->fields.isErrorDialog = 1;
      v274 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v275 = LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v276 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v276, (Il2CppObject *)_4__this, Method_ManagementManager_EndRetryDialog__, 0LL);
      if ( !v274 )
        goto LABEL_490;
      CommonUI__OpenRetryDialog(v274, (System_String_o *)StringLiteral_1/*""*/, v275, v276, 0, 0LL);
LABEL_394:
      if ( _4__this->fields.isErrorDialog )
      {
        v277 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v277, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v277;
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 17;
        goto LABEL_488;
      }
LABEL_396:
      v4->fields._waitForServerTime_5__7 = 0LL;
      sub_B5D560(&v4->fields._waitForServerTime_5__7);
      v4->fields._wait_5__8 = 0LL;
      sub_B5D560(&v4->fields._wait_5__8);
LABEL_439:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      DataManager__Initialize((DataManager_o *)this, 0LL);
      if ( !v4->fields.isReboot && !v4->fields._isCacheCheck_5__3 )
      {
        v4->fields._isCacheCheck_5__3 = 1;
        v294 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v294 = ManagementManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__HasKey(v294->static_fields->RebootCacheClearKey, 0LL) )
        {
          v295 = (Il2CppObject *)sub_B5D694(ManagementManager___c__DisplayClass33_0_TypeInfo);
          System_Object___ctor(v295, 0LL);
          v4->fields.__8__1 = (struct ManagementManager___c__DisplayClass33_0_o *)v295;
          p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
          sub_B5D560(&v4->fields.__8__1);
          if ( !v4->fields.__8__1 )
            goto LABEL_490;
          v4->fields.__8__1->fields.confirmed = 0;
          if ( !*p__8__1 )
            goto LABEL_490;
          LOBYTE((*p__8__1)[1].klass) = 0;
          v296 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v297 = LocalizationManager__Get((System_String_o *)StringLiteral_7375/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_1"*/, 0LL);
          v298 = LocalizationManager__Get((System_String_o *)StringLiteral_7373/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_1"*/, 0LL);
          v299 = LocalizationManager__Get((System_String_o *)StringLiteral_7372/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0LL);
          v300 = LocalizationManager__Get((System_String_o *)StringLiteral_7371/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0LL);
          v301 = *p__8__1;
          v302 = v300;
          v303 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v303,
            v301,
            Method_ManagementManager___c__DisplayClass33_0__startCheckAll_b__0__,
            0LL);
          if ( !v296 )
            goto LABEL_490;
          CommonUI__OpenConfirmDecideDlg(v296, v297, v298, v299, v302, v303, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
LABEL_59:
          v221 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_490;
          if ( !BYTE1(v221[1].klass) )
          {
            v273 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v273, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v273;
            v218 = &v4->fields.__2__current;
            sub_B5D560(v218);
            v219 = 9;
            goto LABEL_488;
          }
          if ( LOBYTE(v221[1].klass) )
          {
            if ( !_4__this )
              goto LABEL_490;
            ManagementManager__startUpCacheClear(_4__this, 0LL);
          }
          *p__8__1 = 0LL;
          sub_B5D560(p__8__1);
        }
        else
        {
          v316 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v316 = ManagementManager_TypeInfo;
          }
          UnityEngine_PlayerPrefs__SetInt(v316->static_fields->RebootCacheClearKey, 1, 0LL);
          UnityEngine_PlayerPrefs__Save(0LL);
        }
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      this = (ManagementManager__startCheckAll_d__33_o *)DataManager__readMasterVersion((DataManager_o *)this, 0LL);
      if ( !_4__this )
        goto LABEL_490;
      v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  (System_Collections_IEnumerator_o *)this,
                                                  0LL);
      v218 = &v4->fields.__2__current;
      sub_B5D560(v218);
      v219 = 10;
LABEL_488:
      *((_DWORD *)v218 - 2) = v219;
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
      v4->fields.__1__state = -1;
      v319 = 0;
      v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v319);
      sub_B5D560(&v4->fields.__2__current);
      v222 = 19;
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
        v244 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v244, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v244;
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 20;
        goto LABEL_488;
      }
LABEL_215:
      v4->fields._isLoad_5__4 = 0;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__get_IsOnline(0LL) )
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_490;
        AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_354:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !this )
          goto LABEL_490;
        if ( !BYTE2(this->fields.__4__this) )
        {
          v272 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v272, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v272;
          v218 = &v4->fields.__2__current;
          sub_B5D560(v218);
          v219 = 21;
          goto LABEL_488;
        }
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( !_4__this || !this )
          goto LABEL_490;
        AssetManager__DownloadAssetStorageAttribute(
          (AssetManager_o *)this,
          (System_String_o *)StringLiteral_12716/*"SYSTEM"*/,
          _4__this->fields.downloadParallelMax,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getDownloadSize(0LL) >= 1 )
        {
          v269 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v269 = ManagerConfig_TypeInfo;
          }
          if ( v269->static_fields->UseStandaloneAsset )
          {
            v4->fields._isLoad_5__4 = 1;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playBgm((System_String_o *)StringLiteral_9448/*"NOW_LOADING"*/, 0LL);
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_371:
              v270 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v270, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v270;
              v218 = &v4->fields.__2__current;
              sub_B5D560(v218);
              v219 = 22;
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
            v245 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v245, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v245;
            v218 = &v4->fields.__2__current;
            sub_B5D560(v218);
            v219 = 23;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( this )
        {
          NetworkManager__SetServerSetting_26088224((NetworkManager_o *)this, 0LL);
          v271 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v271, 0.1, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v271;
          v218 = &v4->fields.__2__current;
          sub_B5D560(v218);
          v219 = 24;
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
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          AssetManager__InitializeAssetStorage((AssetManager_o *)this, 0LL);
LABEL_225:
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( this )
          {
            if ( !BYTE2(this->fields.__4__this) )
            {
              v262 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v262, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v262;
              v218 = &v4->fields.__2__current;
              sub_B5D560(v218);
              v219 = 25;
              goto LABEL_488;
            }
            this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( _4__this && this )
            {
              v252 = AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
                       (AssetManager_o *)this,
                       (System_String_o *)StringLiteral_12716/*"SYSTEM"*/,
                       _4__this->fields.downloadParallelMax,
                       0LL);
              v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                          (UnityEngine_MonoBehaviour_o *)_4__this,
                                                          v252,
                                                          0LL);
              v218 = &v4->fields.__2__current;
              sub_B5D560(v218);
              v219 = 26;
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
      if ( !byte_42E5F9B )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E5F9B = 1;
      }
      v253 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v253 = LocalizationManager_TypeInfo;
      }
      if ( v253->static_fields->isBusySetAssetData )
      {
        v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v254;
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 29;
        goto LABEL_488;
      }
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      FSUtility__LoadAssetData(0LL);
LABEL_248:
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( !byte_42E5F9C )
      {
        sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E5F9C = 1;
      }
      v255 = FSUtility_TypeInfo;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v255 = FSUtility_TypeInfo;
      }
      if ( v255->static_fields->isBusySetAssetData )
      {
        v256 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v256, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v256;
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 30;
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
        v257 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v257, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v257;
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 31;
        goto LABEL_488;
      }
      v4->fields._overrideAssetSoundNameWaitCount_5__5 = 0;
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
        overrideAssetSoundNameWaitCount_5__5 = v4->fields._overrideAssetSoundNameWaitCount_5__5;
        v4->fields._overrideAssetSoundNameWaitCount_5__5 = overrideAssetSoundNameWaitCount_5__5 + 1;
        if ( overrideAssetSoundNameWaitCount_5__5 < 60 )
        {
          v263 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v263, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v263;
          v218 = &v4->fields.__2__current;
          sub_B5D560(v218);
          v219 = 32;
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( SoundManager__get_IsBusy((SoundManager_o *)this, 0LL) )
      {
        v259 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v259, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v259;
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 33;
        goto LABEL_488;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      ScriptManager__Initialize((ScriptManager_o *)this, 0LL);
LABEL_290:
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( LOBYTE(this[5].fields._waitForServerTime_5__7) )
      {
        v260 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v260, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v260;
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 34;
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
      if ( v4->fields._isLoad_5__4 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        if ( SoundManager__isPlayBgm((System_String_o *)StringLiteral_9448/*"NOW_LOADING"*/, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__fadeoutBgm(1.0, 0LL);
          v261 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v261, 1.0, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v261;
          v218 = &v4->fields.__2__current;
          sub_B5D560(v218);
          v219 = 35;
          goto LABEL_488;
        }
LABEL_310:
        v211 = (const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_311:
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance(v211);
        if ( !this )
          goto LABEL_490;
        CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_490;
        this = (ManagementManager__startCheckAll_d__33_o *)CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( this )
          {
            CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_401:
            v278 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v278, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v278;
            v218 = &v4->fields.__2__current;
            sub_B5D560(v218);
            v219 = 36;
            goto LABEL_488;
          }
          goto LABEL_490;
        }
      }
      if ( _4__this )
      {
        ManagementManager__BuildInfoOff(_4__this, 0LL);
        v318 = 0;
        v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v318);
        v218 = &v4->fields.__2__current;
        sub_B5D560(v218);
        v219 = 37;
        goto LABEL_488;
      }
      goto LABEL_490;
    case 0x15:
      p_fields->__1__state = -1;
      goto LABEL_354;
    case 0x16:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v4->fields._isLoad_5__4 = 1;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      if ( !byte_42E5F9A )
      {
        sub_B5D5C4(&LogoMain_TypeInfo, v247, v248, v249);
        byte_42E5F9A = 1;
      }
      v250 = LogoMain_TypeInfo;
      if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v250 = LogoMain_TypeInfo;
      }
      if ( !v250->static_fields->_isPlaying_k__BackingField )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm((System_String_o *)StringLiteral_9448/*"NOW_LOADING"*/, 0LL);
      }
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__SetLoadMode((CommonUI_o *)this, 7, 0LL);
LABEL_214:
      v251 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v251, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v251;
      v218 = &v4->fields.__2__current;
      sub_B5D560(v218);
      v219 = 27;
      goto LABEL_488;
    case 0x1B:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      if ( CommonUI__IsBusyLoad((CommonUI_o *)this, 0LL) )
        goto LABEL_214;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_490;
      CommonUI__InitMaskClick((CommonUI_o *)this, 0LL);
LABEL_193:
      v246 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v246, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v246;
      v218 = &v4->fields.__2__current;
      sub_B5D560(v218);
      v219 = 28;
      goto LABEL_488;
    case 0x1C:
      p_fields->__1__state = -1;
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v211 = (const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      goto LABEL_311;
    case 0x25:
      p_fields->__1__state = -1;
      v208 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v208 = ManagementManager_TypeInfo;
      }
      this = (ManagementManager__startCheckAll_d__33_o *)UnityEngine_PlayerPrefs__GetInt(
                                                           v208->static_fields->PushStateSendedKey,
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
        v210 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v210 = ManagementManager_TypeInfo;
        }
        UnityEngine_PlayerPrefs__SetInt(v210->static_fields->PushStateSendedKey, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      if ( !_4__this )
        goto LABEL_490;
      _4__this->fields._IsInitialized = 1;
      LOBYTE(_4__this->fields.scenetype) = 0;
      ManagementManager__BuildInfoDisp(_4__this, 1, 0LL);
      if ( v4->fields.isLogin )
      {
        ManagementManager__requestTerminalLogin(_4__this, 0LL);
      }
      else
      {
        this = (ManagementManager__startCheckAll_d__33_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ManagementManager__startCheckAll_d__33_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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