void __fastcall WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A59167 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A59167 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__EndClose(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_cancelCallbackFunc; // x0
  struct System_Action_o *cancelCallbackFunc; // x21
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4A59165 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59165 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_cancelCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0LL;
    sub_1B88554(p_cancelCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))cancelCallbackFunc->fields.m_target)(
      cancelCallbackFunc->fields.original_method_info,
      *(_QWORD *)&cancelCallbackFunc->fields.extra_arg);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(v9, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickBackButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A59164 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_EndClose__);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_OnClickBackButton__);
    byte_4A59164 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v3 = Method_WarBoardBackMenuComponent_OnClickBackButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickBackButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardBackMenuComponent_OnClickBackButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickCancelButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5915E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_EndClose__);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_OnClickCancelButton__);
    byte_4A5915E = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v3 = Method_WarBoardBackMenuComponent_OnClickCancelButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickCancelButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardBackMenuComponent_OnClickCancelButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickRetireButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A59161 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_OnClickRetireButton__);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__);
    sub_1B885B0(&StringLiteral_15409/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_1B885B0(&StringLiteral_15407/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_15411/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    sub_1B885B0(&StringLiteral_15410/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/);
    byte_4A59161 = 1;
  }
  v3 = Method_WarBoardBackMenuComponent_OnClickRetireButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickRetireButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardBackMenuComponent_OnClickRetireButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15410/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15407/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15411/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15409/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v11, v12);
  CommonUI__OpenConfirmDialog_30493952((CommonUI_o *)Instance, v6, v7, v8, v9, 1, v10, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarBoardBackMenuComponent_o *v4; // x20
  struct System_Action_o *retireCallbackFunc; // x8

  v4 = this;
  if ( (byte_4A59163 & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59163 = 1;
  }
  if ( isDecide )
  {
    retireCallbackFunc = v4->fields.retireCallbackFunc;
    if ( !retireCallbackFunc )
      goto LABEL_8;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))retireCallbackFunc->fields.m_target)(
      retireCallbackFunc->fields.original_method_info,
      *(_QWORD *)&retireCallbackFunc->fields.extra_arg,
      method);
  }
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1B8880C(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialogFinalCheck(
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

  if ( (byte_4A59162 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__);
    sub_1B885B0(&StringLiteral_15409/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_1B885B0(&StringLiteral_15408/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/);
    sub_1B885B0(&StringLiteral_15411/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    byte_4A59162 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.stonePurchaseNotificationMenu) == 0LL
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance->fields.m_CancellationTokenSource )
  {
    retireCallbackFunc = this->fields.retireCallbackFunc;
    if ( retireCallbackFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))retireCallbackFunc->fields.m_target)(
        retireCallbackFunc->fields.original_method_info,
        *(_QWORD *)&retireCallbackFunc->fields.extra_arg);
      return;
    }
    goto LABEL_16;
  }
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15408/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15411/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15409/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0LL);
  if ( !v7 )
    goto LABEL_16;
  CommonUI__OpenConfirmDialog_30493952((CommonUI_o *)v7, 0LL, v8, v9, v10, 1, v11, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickSuspendButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5915F & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
    sub_1B885B0(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__);
    sub_1B885B0(&StringLiteral_15414/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/);
    sub_1B885B0(&StringLiteral_15416/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/);
    sub_1B885B0(&StringLiteral_15415/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/);
    sub_1B885B0(&StringLiteral_15413/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/);
    byte_4A5915F = 1;
  }
  v3 = Method_WarBoardBackMenuComponent_OnClickSuspendButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickSuspendButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15415/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15413/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15414/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0LL);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v11, v12);
  CommonUI__OpenConfirmDialog_30493952((CommonUI_o *)Instance, v6, v7, v8, v9, 1, v10, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickSusupendConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarBoardBackMenuComponent_o *v4; // x20
  struct System_Action_o *suspendCallbackFunc; // x8

  v4 = this;
  if ( (byte_4A59160 & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59160 = 1;
  }
  if ( isDecide )
  {
    suspendCallbackFunc = v4->fields.suspendCallbackFunc;
    if ( !suspendCallbackFunc )
      goto LABEL_8;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))suspendCallbackFunc->fields.m_target)(
      suspendCallbackFunc->fields.original_method_info,
      *(_QWORD *)&suspendCallbackFunc->fields.extra_arg,
      method);
  }
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1B8880C(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Open(
        WarBoardBackMenuComponent_o *this,
        System_Action_o *suspendCallback,
        System_Action_o *retireCallback,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
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

  if ( (byte_4A5915D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_15412/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/);
    sub_1B885B0(&StringLiteral_15405/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/);
    sub_1B885B0(&StringLiteral_15406/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/);
    sub_1B885B0(&StringLiteral_15417/*"WARBOARD_MENU_TITLE_LABEL"*/);
    byte_4A5915D = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.suspendCallbackFunc,
      (int32_t)suspendCallback,
      (int32_t)retireCallback,
      (int32_t)cancelCallback);
    this->fields.retireCallbackFunc = retireCallback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.retireCallbackFunc, (int32_t)retireCallback, v9, v10);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.cancelCallbackFunc,
      (int32_t)cancelCallback,
      v11,
      v12);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0LL, 0LL) )
    {
      v14 = this->fields.menuTitleTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15417/*"WARBOARD_MENU_TITLE_LABEL"*/, 0LL);
      if ( !v14 )
        goto LABEL_34;
      UILabel__set_text(v14, gameObject, 0LL);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0LL, 0LL) )
    {
      v18 = this->fields.suspendButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0LL);
      if ( !v18 )
        goto LABEL_34;
      UILabel__set_text(v18, gameObject, 0LL);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0LL, 0LL) )
    {
      v20 = this->fields.retireButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15406/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0LL);
      if ( !v20 )
        goto LABEL_34;
      UILabel__set_text(v20, gameObject, 0LL);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0LL, 0LL) )
    {
      v22 = this->fields.cancelButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15405/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0LL);
      if ( !v22 )
        goto LABEL_34;
      UILabel__set_text(v22, gameObject, 0LL);
    }
    gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      return;
    }
LABEL_34:
    sub_1B8880C(gameObject, v16);
  }
}


System_String_o *__fastcall WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A59166 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3013/*"BG/BackButton"*/);
    byte_4A59166 = 1;
  }
  return (System_String_o *)StringLiteral_3013/*"BG/BackButton"*/;
}