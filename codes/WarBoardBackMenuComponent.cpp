void WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CB3FAC & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB3FAC = 1;
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
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_cancelCallbackFunc; // x0
  struct System_Action_o *cancelCallbackFunc; // x21
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4CB3FAA & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB3FAA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  p_cancelCallbackFunc = (CGThumbnailListItem_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0;
    sub_1C6B9AC(p_cancelCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))cancelCallbackFunc->fields.invoke_impl)(
      cancelCallbackFunc->fields.method_code,
      cancelCallbackFunc->fields.method);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(v9, 0);
}


void WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WarBoardBackMenuComponent__OnClickBackButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CB3FA9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_EndClose__);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_OnClickBackButton__);
    byte_4CB3FA9 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v3 = Method_WarBoardBackMenuComponent_OnClickBackButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickBackButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_WarBoardBackMenuComponent_OnClickBackButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void WarBoardBackMenuComponent__OnClickCancelButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CB3FA3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_EndClose__);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_OnClickCancelButton__);
    byte_4CB3FA3 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v3 = Method_WarBoardBackMenuComponent_OnClickCancelButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickCancelButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_WarBoardBackMenuComponent_OnClickCancelButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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

  if ( (byte_4CB3FA6 & 1) == 0 )
  {
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_OnClickRetireButton__);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__);
    sub_1C6BA08(&StringLiteral_15394/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_1C6BA08(&StringLiteral_15392/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15396/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    sub_1C6BA08(&StringLiteral_15395/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/);
    byte_4CB3FA6 = 1;
  }
  v3 = Method_WarBoardBackMenuComponent_OnClickRetireButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickRetireButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_WarBoardBackMenuComponent_OnClickRetireButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15395/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15392/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15396/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15394/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0);
  if ( !Instance )
    sub_1C6BC60(v11, v12);
  CommonUI__OpenConfirmDialog_31417324((CommonUI_o *)Instance, v6, v7, v8, v9, 1, v10, 28, 28, 99.0, 15.0, 0, 0, 0);
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
  if ( (byte_4CB3FA8 & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB3FA8 = 1;
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
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C6BC60(this, isDecide);
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

  if ( (byte_4CB3FA7 & 1) == 0 )
  {
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__);
    sub_1C6BA08(&StringLiteral_15394/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_1C6BA08(&StringLiteral_15393/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/);
    sub_1C6BA08(&StringLiteral_15396/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    byte_4CB3FA7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.userPresentBoxWindowPath) == 0
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0)) == 0 )
  {
LABEL_16:
    sub_1C6BC60(Instance, v6);
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
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15393/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15396/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15394/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0);
  v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0);
  if ( !v7 )
    goto LABEL_16;
  CommonUI__OpenConfirmDialog_31417324((CommonUI_o *)v7, 0, v8, v9, v10, 1, v11, 28, 28, 99.0, 15.0, 0, 0, 0);
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

  if ( (byte_4CB3FA4 & 1) == 0 )
  {
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
    sub_1C6BA08(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__);
    sub_1C6BA08(&StringLiteral_15399/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/);
    sub_1C6BA08(&StringLiteral_15401/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/);
    sub_1C6BA08(&StringLiteral_15400/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/);
    sub_1C6BA08(&StringLiteral_15398/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/);
    byte_4CB3FA4 = 1;
  }
  v3 = Method_WarBoardBackMenuComponent_OnClickSuspendButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickSuspendButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15400/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15398/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15401/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15399/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0);
  if ( !Instance )
    sub_1C6BC60(v11, v12);
  CommonUI__OpenConfirmDialog_31417324((CommonUI_o *)Instance, v6, v7, v8, v9, 1, v10, 28, 28, 99.0, 15.0, 0, 0, 0);
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
  if ( (byte_4CB3FA5 & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB3FA5 = 1;
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
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C6BC60(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}


void WarBoardBackMenuComponent__Open(
        WarBoardBackMenuComponent_o *this,
        System_Action_o *suspendCallback,
        System_Action_o *retireCallback,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *menuTitleTxt; // x20
  UILabel_o *v14; // x20
  System_String_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *suspendButtonTxt; // x20
  UILabel_o *v18; // x20
  UnityEngine_Object_o *retireButtonTxt; // x20
  UILabel_o *v20; // x20
  UnityEngine_Object_o *cancelButtonTxt; // x20
  UILabel_o *v22; // x20

  if ( (byte_4CB3FA2 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_15397/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/);
    sub_1C6BA08(&StringLiteral_15390/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/);
    sub_1C6BA08(&StringLiteral_15391/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/);
    sub_1C6BA08(&StringLiteral_15402/*"WARBOARD_MENU_TITLE_LABEL"*/);
    byte_4CB3FA2 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.suspendCallbackFunc,
      (int32_t)suspendCallback,
      (int32_t)retireCallback,
      (const MethodInfo *)cancelCallback);
    this->fields.retireCallbackFunc = retireCallback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.retireCallbackFunc, (int32_t)retireCallback, v9, v10);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cancelCallbackFunc, (int32_t)cancelCallback, v11, v12);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0, 0) )
    {
      v14 = this->fields.menuTitleTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15402/*"WARBOARD_MENU_TITLE_LABEL"*/, 0);
      if ( !v14 )
        goto LABEL_34;
      UILabel__set_text(v14, gameObject, 0);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0, 0) )
    {
      v18 = this->fields.suspendButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15397/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0);
      if ( !v18 )
        goto LABEL_34;
      UILabel__set_text(v18, gameObject, 0);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0, 0) )
    {
      v20 = this->fields.retireButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15391/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0);
      if ( !v20 )
        goto LABEL_34;
      UILabel__set_text(v20, gameObject, 0);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0, 0) )
    {
      v22 = this->fields.cancelButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15390/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0);
      if ( !v22 )
        goto LABEL_34;
      UILabel__set_text(v22, gameObject, 0);
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
    sub_1C6BC60(gameObject, v16);
  }
}


System_String_o *WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB3FAB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_2902/*"BG/BackButton"*/);
    byte_4CB3FAB = 1;
  }
  return (System_String_o *)StringLiteral_2902/*"BG/BackButton"*/;
}