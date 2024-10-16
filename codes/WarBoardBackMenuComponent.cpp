void __fastcall WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4AB3C76 & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB3C76 = 1;
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

  if ( (byte_4AB3C74 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB3C74 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_cancelCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0LL;
    sub_1BAB3C0(p_cancelCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))cancelCallbackFunc->fields.m_target)(
      cancelCallbackFunc->fields.original_method_info,
      *(_QWORD *)&cancelCallbackFunc->fields.extra_arg);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69800620(v9, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v4);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4AB3C73 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_EndClose__, v3);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_OnClickBackButton__, v4);
    byte_4AB3C73 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v5 = Method_WarBoardBackMenuComponent_OnClickBackButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickBackButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BAB434(Method_WarBoardBackMenuComponent_OnClickBackButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickCancelButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4AB3C6D & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_EndClose__, v3);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_OnClickCancelButton__, v4);
    byte_4AB3C6D = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v5 = Method_WarBoardBackMenuComponent_OnClickCancelButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickCancelButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BAB434(Method_WarBoardBackMenuComponent_OnClickCancelButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x24
  CommonConfirmDialog_ClickDelegate_o *v18; // x25
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4AB3C70 & 1) == 0 )
  {
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_OnClickRetireButton__, v5);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__, v6);
    sub_1BAB41C(&StringLiteral_15440/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v7);
    sub_1BAB41C(&StringLiteral_15438/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, v8);
    sub_1BAB41C(&StringLiteral_15442/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v9);
    sub_1BAB41C(&StringLiteral_15441/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, v10);
    byte_4AB3C70 = 1;
  }
  v11 = Method_WarBoardBackMenuComponent_OnClickRetireButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickRetireButton__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BAB434(Method_WarBoardBackMenuComponent_OnClickRetireButton__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BAB400(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15441/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15438/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15442/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15440/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0LL);
  if ( !Instance )
    sub_1BAB678(v19, v20);
  CommonUI__OpenConfirmDialog_30636672(
    (CommonUI_o *)Instance,
    v14,
    v15,
    v16,
    v17,
    1,
    v18,
    28,
    28,
    99.0,
    15.0,
    0,
    0,
    0LL);
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
  if ( (byte_4AB3C72 & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AB3C72 = 1;
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
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1BAB678(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
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
  Il2CppObject *v14; // x20
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  CommonConfirmDialog_ClickDelegate_o *v18; // x24
  struct System_Action_o *retireCallbackFunc; // x8

  if ( (byte_4AB3C71 & 1) == 0 )
  {
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__, v8);
    sub_1BAB41C(&StringLiteral_15440/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v9);
    sub_1BAB41C(&StringLiteral_15439/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, v10);
    sub_1BAB41C(&StringLiteral_15442/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v11);
    byte_4AB3C71 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.userGameActRecoverMenuPrefab) == 0LL
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BAB678(Instance, v13);
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
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15439/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15442/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15440/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0LL);
  if ( !v14 )
    goto LABEL_16;
  CommonUI__OpenConfirmDialog_30636672((CommonUI_o *)v14, 0LL, v15, v16, v17, 1, v18, 28, 28, 99.0, 15.0, 0, 0, 0LL);
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x24
  CommonConfirmDialog_ClickDelegate_o *v18; // x25
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4AB3C6E & 1) == 0 )
  {
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_OnClickSuspendButton__, v5);
    sub_1BAB41C(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__, v6);
    sub_1BAB41C(&StringLiteral_15445/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, v7);
    sub_1BAB41C(&StringLiteral_15447/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, v8);
    sub_1BAB41C(&StringLiteral_15446/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, v9);
    sub_1BAB41C(&StringLiteral_15444/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, v10);
    byte_4AB3C6E = 1;
  }
  v11 = Method_WarBoardBackMenuComponent_OnClickSuspendButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickSuspendButton__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BAB434(Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BAB400(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15446/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15444/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15447/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15445/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0LL);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0LL);
  if ( !Instance )
    sub_1BAB678(v19, v20);
  CommonUI__OpenConfirmDialog_30636672(
    (CommonUI_o *)Instance,
    v14,
    v15,
    v16,
    v17,
    1,
    v18,
    28,
    28,
    99.0,
    15.0,
    0,
    0,
    0LL);
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
  if ( (byte_4AB3C6F & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AB3C6F = 1;
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
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1BAB678(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Open(
        WarBoardBackMenuComponent_o *this,
        System_Action_o *suspendCallback,
        System_Action_o *retireCallback,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *menuTitleTxt; // x20
  UILabel_o *v19; // x20
  System_String_o *gameObject; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *suspendButtonTxt; // x20
  UILabel_o *v23; // x20
  UnityEngine_Object_o *retireButtonTxt; // x20
  UILabel_o *v25; // x20
  UnityEngine_Object_o *cancelButtonTxt; // x20
  UILabel_o *v27; // x20

  if ( (byte_4AB3C6C & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, suspendCallback);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_15443/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, v10);
    sub_1BAB41C(&StringLiteral_15436/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, v11);
    sub_1BAB41C(&StringLiteral_15437/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, v12);
    sub_1BAB41C(&StringLiteral_15448/*"WARBOARD_MENU_TITLE_LABEL"*/, v13);
    byte_4AB3C6C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_1BAB3C0(
      (ServantStatusBattleListViewItem_o *)&this->fields.suspendCallbackFunc,
      (int32_t)suspendCallback,
      (int32_t)retireCallback,
      (int32_t)cancelCallback);
    this->fields.retireCallbackFunc = retireCallback;
    sub_1BAB3C0(
      (ServantStatusBattleListViewItem_o *)&this->fields.retireCallbackFunc,
      (int32_t)retireCallback,
      v14,
      v15);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_1BAB3C0(
      (ServantStatusBattleListViewItem_o *)&this->fields.cancelCallbackFunc,
      (int32_t)cancelCallback,
      v16,
      v17);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0LL, 0LL) )
    {
      v19 = this->fields.menuTitleTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15448/*"WARBOARD_MENU_TITLE_LABEL"*/, 0LL);
      if ( !v19 )
        goto LABEL_34;
      UILabel__set_text(v19, gameObject, 0LL);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0LL, 0LL) )
    {
      v23 = this->fields.suspendButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15443/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0LL);
      if ( !v23 )
        goto LABEL_34;
      UILabel__set_text(v23, gameObject, 0LL);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0LL, 0LL) )
    {
      v25 = this->fields.retireButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15437/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0LL);
      if ( !v25 )
        goto LABEL_34;
      UILabel__set_text(v25, gameObject, 0LL);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0LL, 0LL) )
    {
      v27 = this->fields.cancelButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15436/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0LL);
      if ( !v27 )
        goto LABEL_34;
      UILabel__set_text(v27, gameObject, 0LL);
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
    sub_1BAB678(gameObject, v21);
  }
}


System_String_o *__fastcall WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB3C75 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_3009/*"BG/BackButton"*/, method);
    byte_4AB3C75 = 1;
  }
  return (System_String_o *)StringLiteral_3009/*"BG/BackButton"*/;
}