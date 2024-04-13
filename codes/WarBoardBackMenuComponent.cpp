void __fastcall WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E694C & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E694C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__EndClose(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleServantConfConponent_o *p_cancelCallbackFunc; // x0
  System_Action_o *cancelCallbackFunc; // x20
  UnityEngine_Object_o *v15; // x19

  if ( (byte_42E694A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E694A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_cancelCallbackFunc = (BattleServantConfConponent_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0LL;
    sub_B5D560(p_cancelCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
    System_Action__Invoke(cancelCallbackFunc, 0LL);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v15, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickBackButton(
        WarBoardBackMenuComponent_o *this,
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
  System_Action_o *v11; // x20

  if ( (byte_42E6949 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardBackMenuComponent_EndClose__, v8, v9, v10);
    byte_42E6949 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickCancelButton(
        WarBoardBackMenuComponent_o *this,
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
  System_Action_o *v11; // x20

  if ( (byte_42E6943 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardBackMenuComponent_EndClose__, v8, v9, v10);
    byte_42E6943 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickRetireButton(
        WarBoardBackMenuComponent_o *this,
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
  CommonUI_o *Instance; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  System_String_o *v33; // x24
  CommonConfirmDialog_ClickDelegate_o *v34; // x25
  __int64 v35; // x0
  __int64 v36; // x1

  if ( (byte_42E6946 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15416/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15414/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_15418/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15417/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, v26, v27, v28);
    byte_42E6946 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15417/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15414/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15418/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v34,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v35, v36);
  CommonUI__OpenConfirmDialog_18201424(Instance, v30, v31, v32, v33, 1, v34, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Action_o *retireCallbackFunc; // x0

  if ( (byte_42E6948 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E6948 = 1;
  }
  if ( isDecide )
  {
    retireCallbackFunc = this->fields.retireCallbackFunc;
    if ( !retireCallbackFunc )
      goto LABEL_8;
    System_Action__Invoke(retireCallbackFunc, 0LL);
  }
  retireCallbackFunc = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !retireCallbackFunc )
LABEL_8:
    sub_B5D69C(retireCallbackFunc, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)retireCallbackFunc, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialogFinalCheck(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
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
  CommonUI_o *Instance; // x0
  __int64 v28; // x1
  CommonUI_o *v29; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  CommonConfirmDialog_ClickDelegate_o *v33; // x24

  if ( (byte_42E6947 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_15416/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_15415/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_15418/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v24, v25, v26);
    byte_42E6947 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.presentBoxNotificationMenuPrefab) == 0LL
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B5D69C(Instance, v28);
  }
  if ( !Instance->fields.topImg )
  {
    Instance = (CommonUI_o *)this->fields.retireCallbackFunc;
    if ( Instance )
    {
      System_Action__Invoke((System_Action_o *)Instance, 0LL);
      return;
    }
    goto LABEL_17;
  }
  v29 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15415/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15418/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v33,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0LL);
  if ( !v29 )
    goto LABEL_17;
  CommonUI__OpenConfirmDialog_18201424(v29, 0LL, v30, v31, v32, 1, v33, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickSuspendButton(
        WarBoardBackMenuComponent_o *this,
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
  CommonUI_o *Instance; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  System_String_o *v33; // x24
  CommonConfirmDialog_ClickDelegate_o *v34; // x25
  __int64 v35; // x0
  __int64 v36; // x1

  if ( (byte_42E6944 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15421/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15423/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_15422/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15420/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, v26, v27, v28);
    byte_42E6944 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15422/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15420/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15423/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_15421/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0LL);
  v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v34,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v35, v36);
  CommonUI__OpenConfirmDialog_18201424(Instance, v30, v31, v32, v33, 1, v34, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickSusupendConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Action_o *suspendCallbackFunc; // x0

  if ( (byte_42E6945 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E6945 = 1;
  }
  if ( isDecide )
  {
    suspendCallbackFunc = this->fields.suspendCallbackFunc;
    if ( !suspendCallbackFunc )
      goto LABEL_8;
    System_Action__Invoke(suspendCallbackFunc, 0LL);
  }
  suspendCallbackFunc = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !suspendCallbackFunc )
LABEL_8:
    sub_B5D69C(suspendCallbackFunc, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)suspendCallbackFunc, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Open(
        WarBoardBackMenuComponent_o *this,
        System_Action_o *suspendCallback,
        System_Action_o *retireCallback,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *menuTitleTxt; // x20
  UILabel_o *v40; // x20
  System_String_o *gameObject; // x0
  __int64 v42; // x1
  UnityEngine_Object_o *suspendButtonTxt; // x20
  UILabel_o *v44; // x20
  UnityEngine_Object_o *retireButtonTxt; // x20
  UILabel_o *v46; // x20
  UnityEngine_Object_o *cancelButtonTxt; // x20
  UILabel_o *v48; // x20

  if ( (byte_42E6942 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)suspendCallback, (_DWORD)retireCallback, cancelCallback);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_15419/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_15412/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_15413/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_15424/*"WARBOARD_MENU_TITLE_LABEL"*/, v24, v25, v26);
    byte_42E6942 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.suspendCallbackFunc,
      (System_Int32_array **)suspendCallback,
      (System_String_array **)retireCallback,
      (System_String_array **)cancelCallback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.retireCallbackFunc = retireCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.retireCallbackFunc,
      (System_Int32_array **)retireCallback,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.cancelCallbackFunc,
      (System_Int32_array **)cancelCallback,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0LL, 0LL) )
    {
      v40 = this->fields.menuTitleTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15424/*"WARBOARD_MENU_TITLE_LABEL"*/, 0LL);
      if ( !v40 )
        goto LABEL_42;
      UILabel__set_text(v40, gameObject, 0LL);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0LL, 0LL) )
    {
      v44 = this->fields.suspendButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15419/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0LL);
      if ( !v44 )
        goto LABEL_42;
      UILabel__set_text(v44, gameObject, 0LL);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0LL, 0LL) )
    {
      v46 = this->fields.retireButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15413/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0LL);
      if ( !v46 )
        goto LABEL_42;
      UILabel__set_text(v46, gameObject, 0LL);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0LL, 0LL) )
    {
      v48 = this->fields.cancelButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0LL);
      if ( !v48 )
        goto LABEL_42;
      UILabel__set_text(v48, gameObject, 0LL);
    }
    gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      return;
    }
LABEL_42:
    sub_B5D69C(gameObject, v42);
  }
}


System_String_o *__fastcall WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E694B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2601/*"BG/BackButton"*/, (_DWORD)method, v2, v3);
    byte_42E694B = 1;
  }
  return (System_String_o *)StringLiteral_2601/*"BG/BackButton"*/;
}