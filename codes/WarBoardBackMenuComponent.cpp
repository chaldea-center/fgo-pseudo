void __fastcall WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  if ( (byte_434FA53 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_434FA53 = 1;
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

  if ( (byte_434FA51 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FA51 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_cancelCallbackFunc = (BattleServantConfConponent_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0LL;
    sub_B70630(p_cancelCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(cancelCallbackFunc, 0LL);
  }
  v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(v13, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickBackButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_434FA50 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardBackMenuComponent_EndClose__);
    byte_434FA50 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickCancelButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_434FA4A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardBackMenuComponent_EndClose__);
    byte_434FA4A = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickRetireButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  CommonConfirmDialog_ClickDelegate_o *v8; // x25
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_434FA4D & 1) == 0 )
  {
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__);
    sub_B70694(&StringLiteral_15447/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_B70694(&StringLiteral_15445/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/);
    sub_B70694(&StringLiteral_15449/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    sub_B70694(&StringLiteral_15448/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/);
    byte_434FA4D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_15448/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15445/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15449/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15447/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0LL);
  if ( !Instance )
    sub_B7076C(v9, v10);
  CommonUI__OpenConfirmDialog_17903600(Instance, v4, v5, v6, v7, 1, v8, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Action_o *retireCallbackFunc; // x0

  if ( (byte_434FA4F & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434FA4F = 1;
  }
  if ( isDecide )
  {
    retireCallbackFunc = this->fields.retireCallbackFunc;
    if ( !retireCallbackFunc )
      goto LABEL_8;
    System_Action__Invoke(retireCallbackFunc, 0LL);
  }
  retireCallbackFunc = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !retireCallbackFunc )
LABEL_8:
    sub_B7076C(retireCallbackFunc, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)retireCallbackFunc, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialogFinalCheck(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x23
  CommonConfirmDialog_ClickDelegate_o *v11; // x24

  if ( (byte_434FA4E & 1) == 0 )
  {
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__);
    sub_B70694(&StringLiteral_15447/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_B70694(&StringLiteral_15446/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/);
    sub_B70694(&StringLiteral_15449/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    byte_434FA4E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.presentBoxNotificationMenuPrefab) == 0LL
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B7076C(Instance, v6);
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
  v7 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15446/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15449/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15447/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0LL);
  if ( !v7 )
    goto LABEL_17;
  CommonUI__OpenConfirmDialog_17903600(v7, 0LL, v8, v9, v10, 1, v11, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickSuspendButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  CommonConfirmDialog_ClickDelegate_o *v8; // x25
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_434FA4B & 1) == 0 )
  {
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__);
    sub_B70694(&StringLiteral_15452/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/);
    sub_B70694(&StringLiteral_15454/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/);
    sub_B70694(&StringLiteral_15453/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/);
    sub_B70694(&StringLiteral_15451/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/);
    byte_434FA4B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_15453/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15451/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15454/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15452/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0LL);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0LL);
  if ( !Instance )
    sub_B7076C(v9, v10);
  CommonUI__OpenConfirmDialog_17903600(Instance, v4, v5, v6, v7, 1, v8, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickSusupendConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Action_o *suspendCallbackFunc; // x0

  if ( (byte_434FA4C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434FA4C = 1;
  }
  if ( isDecide )
  {
    suspendCallbackFunc = this->fields.suspendCallbackFunc;
    if ( !suspendCallbackFunc )
      goto LABEL_8;
    System_Action__Invoke(suspendCallbackFunc, 0LL);
  }
  suspendCallbackFunc = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !suspendCallbackFunc )
LABEL_8:
    sub_B7076C(suspendCallbackFunc, isDecide);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *menuTitleTxt; // x20
  UILabel_o *v25; // x20
  System_String_o *gameObject; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *suspendButtonTxt; // x20
  UILabel_o *v29; // x20
  UnityEngine_Object_o *retireButtonTxt; // x20
  UILabel_o *v31; // x20
  UnityEngine_Object_o *cancelButtonTxt; // x20
  UILabel_o *v33; // x20

  if ( (byte_434FA49 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_15450/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/);
    sub_B70694(&StringLiteral_15443/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/);
    sub_B70694(&StringLiteral_15444/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/);
    sub_B70694(&StringLiteral_15455/*"WARBOARD_MENU_TITLE_LABEL"*/);
    byte_434FA49 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.suspendCallbackFunc,
      (System_Int32_array **)suspendCallback,
      (System_String_array **)retireCallback,
      (System_String_array **)cancelCallback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.retireCallbackFunc = retireCallback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.retireCallbackFunc,
      (System_Int32_array **)retireCallback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.cancelCallbackFunc,
      (System_Int32_array **)cancelCallback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0LL, 0LL) )
    {
      v25 = this->fields.menuTitleTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15455/*"WARBOARD_MENU_TITLE_LABEL"*/, 0LL);
      if ( !v25 )
        goto LABEL_42;
      UILabel__set_text(v25, gameObject, 0LL);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0LL, 0LL) )
    {
      v29 = this->fields.suspendButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15450/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0LL);
      if ( !v29 )
        goto LABEL_42;
      UILabel__set_text(v29, gameObject, 0LL);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0LL, 0LL) )
    {
      v31 = this->fields.retireButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15444/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0LL);
      if ( !v31 )
        goto LABEL_42;
      UILabel__set_text(v31, gameObject, 0LL);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0LL, 0LL) )
    {
      v33 = this->fields.cancelButtonTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15443/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0LL);
      if ( !v33 )
        goto LABEL_42;
      UILabel__set_text(v33, gameObject, 0LL);
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
    sub_B7076C(gameObject, v27);
  }
}


System_String_o *__fastcall WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_434FA52 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2609/*"BG/BackButton"*/);
    byte_434FA52 = 1;
  }
  return (System_String_o *)StringLiteral_2609/*"BG/BackButton"*/;
}