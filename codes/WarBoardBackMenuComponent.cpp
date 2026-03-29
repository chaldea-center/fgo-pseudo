void WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E6A9 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2E6A9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarBoardBackMenuComponent__EndClose(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_cancelCallbackFunc; // x0
  struct System_Action_o *cancelCallbackFunc; // x21
  UnityEngine_Object_o *v13; // x19

  if ( (byte_4D2E6A7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E6A7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  p_cancelCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0;
    sub_1C93A78(p_cancelCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))cancelCallbackFunc->fields.invoke_impl)(
      cancelCallbackFunc->fields.method_code,
      cancelCallbackFunc->fields.method);
  }
  v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(v13, 0);
}


void WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WarBoardBackMenuComponent__OnClickBackButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2E6A6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_EndClose__);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_OnClickBackButton__);
    byte_4D2E6A6 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v3 = Method_WarBoardBackMenuComponent_OnClickBackButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickBackButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardBackMenuComponent_OnClickBackButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void WarBoardBackMenuComponent__OnClickCancelButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2E6A0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_EndClose__);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_OnClickCancelButton__);
    byte_4D2E6A0 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v3 = Method_WarBoardBackMenuComponent_OnClickCancelButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickCancelButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardBackMenuComponent_OnClickCancelButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void WarBoardBackMenuComponent__OnClickRetireButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  System_String_o *v9; // x24
  CommonConfirmDialog_ClickDelegate_o *v10; // x25
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4D2E6A3 & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_OnClickRetireButton__);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__);
    sub_1C93AD4(&StringLiteral_15496/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_1C93AD4(&StringLiteral_15494/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_15498/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    sub_1C93AD4(&StringLiteral_15497/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/);
    byte_4D2E6A3 = 1;
  }
  v3 = Method_WarBoardBackMenuComponent_OnClickRetireButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickRetireButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardBackMenuComponent_OnClickRetireButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15497/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15494/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15498/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15496/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0);
  if ( !Instance )
    sub_1C93D2C(v11, v12);
  CommonUI__OpenConfirmDialog_31580640((CommonUI_o *)Instance, v6, v7, v8, v9, 1, v10, 28, 28, 99.0, 15.0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBackMenuComponent__OnClickRetireConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarBoardBackMenuComponent_o *v4; // x20
  struct System_Action_o *retireCallbackFunc; // x8

  v4 = this;
  if ( (byte_4D2E6A5 & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2E6A5 = 1;
  }
  if ( isDecide )
  {
    retireCallbackFunc = v4->fields.retireCallbackFunc;
    if ( !retireCallbackFunc )
      goto LABEL_8;
    ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))retireCallbackFunc->fields.invoke_impl)(
      retireCallbackFunc->fields.method_code,
      retireCallbackFunc->fields.method,
      method);
  }
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C93D2C(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}


void WarBoardBackMenuComponent__OnClickRetireConfirmDialogFinalCheck(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x23
  CommonConfirmDialog_ClickDelegate_o *v11; // x24
  struct System_Action_o *retireCallbackFunc; // x8

  if ( (byte_4D2E6A4 & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__);
    sub_1C93AD4(&StringLiteral_15496/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_1C93AD4(&StringLiteral_15495/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/);
    sub_1C93AD4(&StringLiteral_15498/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    byte_4D2E6A4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.tutorialNotificationDialog) == 0
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0)) == 0 )
  {
LABEL_16:
    sub_1C93D2C(Instance, v6);
  }
  if ( !Instance->fields.m_CancellationTokenSource )
  {
    retireCallbackFunc = this->fields.retireCallbackFunc;
    if ( retireCallbackFunc )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))retireCallbackFunc->fields.invoke_impl)(
        retireCallbackFunc->fields.method_code,
        retireCallbackFunc->fields.method);
      return;
    }
    goto LABEL_16;
  }
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15495/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15498/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15496/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0);
  v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0);
  if ( !v7 )
    goto LABEL_16;
  CommonUI__OpenConfirmDialog_31580640((CommonUI_o *)v7, 0, v8, v9, v10, 1, v11, 28, 28, 99.0, 15.0, 0, 0, 0);
}


void WarBoardBackMenuComponent__OnClickSuspendButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  System_String_o *v9; // x24
  CommonConfirmDialog_ClickDelegate_o *v10; // x25
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4D2E6A1 & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
    sub_1C93AD4(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__);
    sub_1C93AD4(&StringLiteral_15501/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/);
    sub_1C93AD4(&StringLiteral_15503/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/);
    sub_1C93AD4(&StringLiteral_15502/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_15500/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/);
    byte_4D2E6A1 = 1;
  }
  v3 = Method_WarBoardBackMenuComponent_OnClickSuspendButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickSuspendButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15502/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15500/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15503/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15501/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0);
  if ( !Instance )
    sub_1C93D2C(v11, v12);
  CommonUI__OpenConfirmDialog_31580640((CommonUI_o *)Instance, v6, v7, v8, v9, 1, v10, 28, 28, 99.0, 15.0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBackMenuComponent__OnClickSusupendConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarBoardBackMenuComponent_o *v4; // x20
  struct System_Action_o *suspendCallbackFunc; // x8

  v4 = this;
  if ( (byte_4D2E6A2 & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2E6A2 = 1;
  }
  if ( isDecide )
  {
    suspendCallbackFunc = v4->fields.suspendCallbackFunc;
    if ( !suspendCallbackFunc )
      goto LABEL_8;
    ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))suspendCallbackFunc->fields.invoke_impl)(
      suspendCallbackFunc->fields.method_code,
      suspendCallbackFunc->fields.method,
      method);
  }
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C93D2C(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}


void WarBoardBackMenuComponent__Open(
        WarBoardBackMenuComponent_o *this,
        System_Action_o *suspendCallback,
        System_Action_o *retireCallback,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
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

  if ( (byte_4D2E69F & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_15499/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/);
    sub_1C93AD4(&StringLiteral_15492/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/);
    sub_1C93AD4(&StringLiteral_15493/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/);
    sub_1C93AD4(&StringLiteral_15504/*"WARBOARD_MENU_TITLE_LABEL"*/);
    byte_4D2E69F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.suspendCallbackFunc,
      (int32_t)suspendCallback,
      (int32_t)retireCallback,
      (int32_t)cancelCallback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.retireCallbackFunc = retireCallback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.retireCallbackFunc,
      (int32_t)retireCallback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.cancelCallbackFunc,
      (int32_t)cancelCallback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0, 0) )
    {
      v25 = this->fields.menuTitleTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15504/*"WARBOARD_MENU_TITLE_LABEL"*/, 0);
      if ( !v25 )
        goto LABEL_34;
      UILabel__set_text(v25, gameObject, 0);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0, 0) )
    {
      v29 = this->fields.suspendButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15499/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0);
      if ( !v29 )
        goto LABEL_34;
      UILabel__set_text(v29, gameObject, 0);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0, 0) )
    {
      v31 = this->fields.retireButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15493/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0);
      if ( !v31 )
        goto LABEL_34;
      UILabel__set_text(v31, gameObject, 0);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0, 0) )
    {
      v33 = this->fields.cancelButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15492/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0);
      if ( !v33 )
        goto LABEL_34;
      UILabel__set_text(v33, gameObject, 0);
    }
    gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      this->fields.state = 1;
      BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
      return;
    }
LABEL_34:
    sub_1C93D2C(gameObject, v27);
  }
}


System_String_o *WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E6A8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_2920/*"BG/BackButton"*/);
    byte_4D2E6A8 = 1;
  }
  return (System_String_o *)StringLiteral_2920/*"BG/BackButton"*/;
}