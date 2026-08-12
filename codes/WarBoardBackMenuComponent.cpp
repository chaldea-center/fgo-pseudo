void WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E41E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596E41E = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarBoardBackMenuComponent__EndClose(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_cancelCallbackFunc; // x0
  struct System_Action_o *cancelCallbackFunc; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x19

  if ( (byte_596E41C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E41C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  p_cancelCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0;
    sub_2213A04(p_cancelCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))cancelCallbackFunc->fields.invoke_impl)(
      cancelCallbackFunc->fields.method_code,
      cancelCallbackFunc->fields.method);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  UnityEngine_Object__Destroy_83459800(v15, 0);
}


void WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WarBoardBackMenuComponent__OnClickBackButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596E41B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarBoardBackMenuComponent_EndClose__);
    sub_2213A60(&Method_WarBoardBackMenuComponent_OnClickBackButton__);
    byte_596E41B = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v3 = Method_WarBoardBackMenuComponent_OnClickBackButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickBackButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardBackMenuComponent_OnClickBackButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void WarBoardBackMenuComponent__OnClickCancelButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596E415 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarBoardBackMenuComponent_EndClose__);
    sub_2213A60(&Method_WarBoardBackMenuComponent_OnClickCancelButton__);
    byte_596E415 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v3 = Method_WarBoardBackMenuComponent_OnClickCancelButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickCancelButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardBackMenuComponent_OnClickCancelButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void WarBoardBackMenuComponent__OnClickRetireButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x23
  System_String_o *v11; // x24
  CommonConfirmDialog_ClickDelegate_o *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_596E418 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarBoardBackMenuComponent_OnClickRetireButton__);
    sub_2213A60(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__);
    sub_2213A60(&StringLiteral_16008/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_2213A60(&StringLiteral_16006/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16010/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    sub_2213A60(&StringLiteral_16009/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/);
    byte_596E418 = 1;
  }
  v3 = Method_WarBoardBackMenuComponent_OnClickRetireButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickRetireButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardBackMenuComponent_OnClickRetireButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_16009/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_16006/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_16010/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_16008/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0);
  v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0);
  if ( !Instance )
    sub_2213CDC(v13, v14);
  CommonUI__OpenConfirmDialog_37373184((CommonUI_o *)Instance, v8, v9, v10, v11, 1, v12, 28, 28, 99.0, 15.0, 0, 0, 0);
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
  if ( (byte_596E41A & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596E41A = 1;
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
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_2213CDC(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}


void WarBoardBackMenuComponent__OnClickRetireConfirmDialogFinalCheck(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  CommonConfirmDialog_ClickDelegate_o *v13; // x24
  struct System_Action_o *retireCallbackFunc; // x8

  if ( (byte_596E419 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__);
    sub_2213A60(&StringLiteral_16008/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/);
    sub_2213A60(&StringLiteral_16007/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/);
    sub_2213A60(&StringLiteral_16010/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/);
    byte_596E419 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.presentBoxNotificationMenuPrefab) == 0
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0)) == 0 )
  {
LABEL_16:
    sub_2213CDC(Instance, v6);
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
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_16007/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_16010/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_16008/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0);
  v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0);
  if ( !v9 )
    goto LABEL_16;
  CommonUI__OpenConfirmDialog_37373184((CommonUI_o *)v9, 0, v10, v11, v12, 1, v13, 28, 28, 99.0, 15.0, 0, 0, 0);
}


void WarBoardBackMenuComponent__OnClickSuspendButton(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x23
  System_String_o *v11; // x24
  CommonConfirmDialog_ClickDelegate_o *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_596E416 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
    sub_2213A60(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__);
    sub_2213A60(&StringLiteral_16013/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/);
    sub_2213A60(&StringLiteral_16015/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/);
    sub_2213A60(&StringLiteral_16014/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/);
    sub_2213A60(&StringLiteral_16012/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/);
    byte_596E416 = 1;
  }
  v3 = Method_WarBoardBackMenuComponent_OnClickSuspendButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickSuspendButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_16014/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_16012/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_16015/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_16013/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0);
  v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0);
  if ( !Instance )
    sub_2213CDC(v13, v14);
  CommonUI__OpenConfirmDialog_37373184((CommonUI_o *)Instance, v8, v9, v10, v11, 1, v12, 28, 28, 99.0, 15.0, 0, 0, 0);
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
  if ( (byte_596E417 & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596E417 = 1;
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
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_2213CDC(this, isDecide);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *menuTitleTxt; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *v29; // x20
  System_String_o *gameObject; // x0
  __int64 v31; // x1
  UnityEngine_Object_o *suspendButtonTxt; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *v35; // x20
  UnityEngine_Object_o *retireButtonTxt; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  UILabel_o *v39; // x20
  UnityEngine_Object_o *cancelButtonTxt; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  UILabel_o *v43; // x20

  if ( (byte_596E414 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16011/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_16004/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_16005/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_16016/*"WARBOARD_MENU_TITLE_LABEL"*/);
    byte_596E414 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.suspendCallbackFunc,
      (int32_t)suspendCallback,
      (System_String_o *)retireCallback,
      (System_String_o *)cancelCallback,
      (int32_t)method,
      v5,
      v6,
      v7);
    this->fields.retireCallbackFunc = retireCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.retireCallbackFunc,
      (int32_t)retireCallback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallbackFunc,
      (int32_t)cancelCallback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0, 0) )
    {
      v29 = this->fields.menuTitleTxt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_16016/*"WARBOARD_MENU_TITLE_LABEL"*/, 0);
      if ( !v29 )
        goto LABEL_34;
      UILabel__set_text(v29, gameObject, 0);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0, 0) )
    {
      v35 = this->fields.suspendButtonTxt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_16011/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0);
      if ( !v35 )
        goto LABEL_34;
      UILabel__set_text(v35, gameObject, 0);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0, 0) )
    {
      v39 = this->fields.retireButtonTxt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_16005/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0);
      if ( !v39 )
        goto LABEL_34;
      UILabel__set_text(v39, gameObject, 0);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0, 0) )
    {
      v43 = this->fields.cancelButtonTxt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_16004/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0);
      if ( !v43 )
        goto LABEL_34;
      UILabel__set_text(v43, gameObject, 0);
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
    sub_2213CDC(gameObject, v31);
  }
}


System_String_o *WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_596E41D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3027/*"BG/BackButton"*/);
    byte_596E41D = 1;
  }
  return (System_String_o *)StringLiteral_3027/*"BG/BackButton"*/;
}