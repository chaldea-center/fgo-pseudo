void __fastcall WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  if ( (byte_41867D6 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_41867D6 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__EndClose(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_cancelCallbackFunc; // x0
  System_Action_o *cancelCallbackFunc; // x20
  UnityEngine_Object_o *v13; // x19

  if ( (byte_41867D4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41867D4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_cancelCallbackFunc = (BattleServantConfConponent_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_cancelCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(cancelCallbackFunc, 0LL);
  }
  v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(v13, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickBackButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_41867D3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarBoardBackMenuComponent_EndClose__, v4);
    byte_41867D3 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickCancelButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_41867CD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarBoardBackMenuComponent_EndClose__, v4);
    byte_41867CD = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickRetireButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x24
  CommonConfirmDialog_ClickDelegate_o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_41867D0 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__, v6);
    sub_B2C35C(&StringLiteral_15257/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v7);
    sub_B2C35C(&StringLiteral_15255/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, v8);
    sub_B2C35C(&StringLiteral_15259/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v9);
    sub_B2C35C(&StringLiteral_15258/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, v10);
    byte_41867D0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15258/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15255/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15259/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15257/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v16 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v16,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0LL);
  if ( !Instance )
    sub_B2C434(v17, v18);
  CommonUI__OpenConfirmDialog_17970664(Instance, v12, v13, v14, v15, 1, v16, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Action_o *retireCallbackFunc; // x0

  if ( (byte_41867D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41867D2 = 1;
  }
  if ( isDecide )
  {
    retireCallbackFunc = this->fields.retireCallbackFunc;
    if ( !retireCallbackFunc )
      goto LABEL_8;
    System_Action__Invoke(retireCallbackFunc, 0LL);
  }
  retireCallbackFunc = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !retireCallbackFunc )
LABEL_8:
    sub_B2C434(retireCallbackFunc, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)retireCallbackFunc, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialogFinalCheck(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  CommonConfirmDialog_ClickDelegate_o *v18; // x24

  if ( (byte_41867D1 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__, v8);
    sub_B2C35C(&StringLiteral_15257/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v9);
    sub_B2C35C(&StringLiteral_15256/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, v10);
    sub_B2C35C(&StringLiteral_15259/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v11);
    byte_41867D1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.presentBoxNotificationMenuPrefab) == 0LL
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B2C434(Instance, v13);
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
  v14 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15256/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15259/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15257/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0LL);
  if ( !v14 )
    goto LABEL_17;
  CommonUI__OpenConfirmDialog_17970664(v14, 0LL, v15, v16, v17, 1, v18, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickSuspendButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x24
  CommonConfirmDialog_ClickDelegate_o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_41867CE & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__, v6);
    sub_B2C35C(&StringLiteral_15262/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, v7);
    sub_B2C35C(&StringLiteral_15264/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, v8);
    sub_B2C35C(&StringLiteral_15263/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, v9);
    sub_B2C35C(&StringLiteral_15261/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, v10);
    byte_41867CE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15263/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15261/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15264/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15262/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0LL);
  v16 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v16,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0LL);
  if ( !Instance )
    sub_B2C434(v17, v18);
  CommonUI__OpenConfirmDialog_17970664(Instance, v12, v13, v14, v15, 1, v16, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickSusupendConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Action_o *suspendCallbackFunc; // x0

  if ( (byte_41867CF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41867CF = 1;
  }
  if ( isDecide )
  {
    suspendCallbackFunc = this->fields.suspendCallbackFunc;
    if ( !suspendCallbackFunc )
      goto LABEL_8;
    System_Action__Invoke(suspendCallbackFunc, 0LL);
  }
  suspendCallbackFunc = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !suspendCallbackFunc )
LABEL_8:
    sub_B2C434(suspendCallbackFunc, isDecide);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *menuTitleTxt; // x20
  UILabel_o *v30; // x20
  System_String_o *gameObject; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *suspendButtonTxt; // x20
  UILabel_o *v34; // x20
  UnityEngine_Object_o *retireButtonTxt; // x20
  UILabel_o *v36; // x20
  UnityEngine_Object_o *cancelButtonTxt; // x20
  UILabel_o *v38; // x20

  if ( (byte_41867CC & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, suspendCallback);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_15260/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, v13);
    sub_B2C35C(&StringLiteral_15253/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, v14);
    sub_B2C35C(&StringLiteral_15254/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, v15);
    sub_B2C35C(&StringLiteral_15265/*"WARBOARD_MENU_TITLE_LABEL"*/, v16);
    byte_41867CC = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.suspendCallbackFunc,
      (System_Int32_array **)suspendCallback,
      (System_String_array **)retireCallback,
      (System_String_array **)cancelCallback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.retireCallbackFunc = retireCallback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.retireCallbackFunc,
      (System_Int32_array **)retireCallback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.cancelCallbackFunc,
      (System_Int32_array **)cancelCallback,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0LL, 0LL) )
    {
      v30 = this->fields.menuTitleTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15265/*"WARBOARD_MENU_TITLE_LABEL"*/, 0LL);
      if ( !v30 )
        goto LABEL_42;
      UILabel__set_text(v30, gameObject, 0LL);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0LL, 0LL) )
    {
      v34 = this->fields.suspendButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15260/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0LL);
      if ( !v34 )
        goto LABEL_42;
      UILabel__set_text(v34, gameObject, 0LL);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0LL, 0LL) )
    {
      v36 = this->fields.retireButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15254/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0LL);
      if ( !v36 )
        goto LABEL_42;
      UILabel__set_text(v36, gameObject, 0LL);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0LL, 0LL) )
    {
      v38 = this->fields.cancelButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15253/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0LL);
      if ( !v38 )
        goto LABEL_42;
      UILabel__set_text(v38, gameObject, 0LL);
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
    sub_B2C434(gameObject, v32);
  }
}


System_String_o *__fastcall WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_41867D5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2547/*"BG/BackButton"*/, method);
    byte_41867D5 = 1;
  }
  return (System_String_o *)StringLiteral_2547/*"BG/BackButton"*/;
}