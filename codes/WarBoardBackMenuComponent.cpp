void __fastcall WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4212B7C & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4212B7C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__EndClose(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_cancelCallbackFunc; // x0
  System_Action_o *cancelCallbackFunc; // x20
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4212B7A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212B7A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_cancelCallbackFunc = (BattleServantConfConponent_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0LL;
    sub_B0D840(p_cancelCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(cancelCallbackFunc, 0LL);
  }
  v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(v12, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4212B79 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarBoardBackMenuComponent_EndClose__, v4);
    byte_4212B79 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickCancelButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4212B73 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarBoardBackMenuComponent_EndClose__, v4);
    byte_4212B73 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  CommonConfirmDialog_ClickDelegate_o *v18; // x25
  __int64 v19; // x0

  if ( (byte_4212B76 & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__, v6);
    sub_B0D8A4(&StringLiteral_15304/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v7);
    sub_B0D8A4(&StringLiteral_15302/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, v8);
    sub_B0D8A4(&StringLiteral_15306/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v9);
    sub_B0D8A4(&StringLiteral_15305/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, v10);
    byte_4212B76 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15305/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15302/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15306/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15304/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v16, v17);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0LL);
  if ( !Instance )
    sub_B0D97C(v19);
  CommonUI__OpenConfirmDialog_17016236(Instance, v12, v13, v14, v15, 1, v18, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Action_o *retireCallbackFunc; // x0

  if ( (byte_4212B78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4212B78 = 1;
  }
  if ( isDecide )
  {
    retireCallbackFunc = this->fields.retireCallbackFunc;
    if ( !retireCallbackFunc )
      goto LABEL_8;
    System_Action__Invoke(retireCallbackFunc, 0LL);
  }
  retireCallbackFunc = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !retireCallbackFunc )
LABEL_8:
    sub_B0D97C(retireCallbackFunc);
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
  CommonUI_o *v13; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  CommonConfirmDialog_ClickDelegate_o *v19; // x24

  if ( (byte_4212B77 & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__, v8);
    sub_B0D8A4(&StringLiteral_15304/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v9);
    sub_B0D8A4(&StringLiteral_15303/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, v10);
    sub_B0D8A4(&StringLiteral_15306/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v11);
    byte_4212B77 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.presentBoxNotificationMenuPrefab) == 0LL
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B0D97C(Instance);
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
  v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15303/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15306/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15304/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v19 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v17, v18);
  CommonConfirmDialog_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0LL);
  if ( !v13 )
    goto LABEL_17;
  CommonUI__OpenConfirmDialog_17016236(v13, 0LL, v14, v15, v16, 1, v19, 28, 28, 99.0, 15.0, 0, 0, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  CommonConfirmDialog_ClickDelegate_o *v18; // x25
  __int64 v19; // x0

  if ( (byte_4212B74 & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__, v6);
    sub_B0D8A4(&StringLiteral_15309/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, v7);
    sub_B0D8A4(&StringLiteral_15311/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, v8);
    sub_B0D8A4(&StringLiteral_15310/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, v9);
    sub_B0D8A4(&StringLiteral_15308/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, v10);
    byte_4212B74 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15310/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15308/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15311/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15309/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0LL);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v16, v17);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0LL);
  if ( !Instance )
    sub_B0D97C(v19);
  CommonUI__OpenConfirmDialog_17016236(Instance, v12, v13, v14, v15, 1, v18, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickSusupendConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Action_o *suspendCallbackFunc; // x0

  if ( (byte_4212B75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4212B75 = 1;
  }
  if ( isDecide )
  {
    suspendCallbackFunc = this->fields.suspendCallbackFunc;
    if ( !suspendCallbackFunc )
      goto LABEL_8;
    System_Action__Invoke(suspendCallbackFunc, 0LL);
  }
  suspendCallbackFunc = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !suspendCallbackFunc )
LABEL_8:
    sub_B0D97C(suspendCallbackFunc);
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
  UnityEngine_Object_o *suspendButtonTxt; // x20
  UILabel_o *v33; // x20
  UnityEngine_Object_o *retireButtonTxt; // x20
  UILabel_o *v35; // x20
  UnityEngine_Object_o *cancelButtonTxt; // x20
  UILabel_o *v37; // x20

  if ( (byte_4212B72 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, suspendCallback);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_15307/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, v13);
    sub_B0D8A4(&StringLiteral_15300/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, v14);
    sub_B0D8A4(&StringLiteral_15301/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, v15);
    sub_B0D8A4(&StringLiteral_15312/*"WARBOARD_MENU_TITLE_LABEL"*/, v16);
    byte_4212B72 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.suspendCallbackFunc,
      (System_Int32_array **)suspendCallback,
      (System_String_array **)retireCallback,
      (System_String_array **)cancelCallback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.retireCallbackFunc = retireCallback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.retireCallbackFunc,
      (System_Int32_array **)retireCallback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_B0D840(
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
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15312/*"WARBOARD_MENU_TITLE_LABEL"*/, 0LL);
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
      v33 = this->fields.suspendButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15307/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0LL);
      if ( !v33 )
        goto LABEL_42;
      UILabel__set_text(v33, gameObject, 0LL);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0LL, 0LL) )
    {
      v35 = this->fields.retireButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15301/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0LL);
      if ( !v35 )
        goto LABEL_42;
      UILabel__set_text(v35, gameObject, 0LL);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0LL, 0LL) )
    {
      v37 = this->fields.cancelButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15300/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0LL);
      if ( !v37 )
        goto LABEL_42;
      UILabel__set_text(v37, gameObject, 0LL);
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
    sub_B0D97C(gameObject);
  }
}


System_String_o *__fastcall WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4212B7B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2558/*"BG/BackButton"*/, method);
    byte_4212B7B = 1;
  }
  return (System_String_o *)StringLiteral_2558/*"BG/BackButton"*/;
}