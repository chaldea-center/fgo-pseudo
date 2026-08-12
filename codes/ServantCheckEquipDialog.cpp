void ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C5B2 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C5B2 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_41692548(this, 0, v2);
}


void ServantCheckEquipDialog__Close_41692548(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_o *v16; // x20

  if ( (byte_596C5AE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantCheckEquipDialog_EndClose__);
    byte_596C5AE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc, 0, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0);
}


void ServantCheckEquipDialog__EndClose(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantCheckEquipDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ServantCheckEquipDialog__EndOpen(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ServantCheckEquipDialog__Init(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596C5AA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C5AA = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)this->fields.servantEquipListViewManager) == 0)
    || (ListViewManager__DestroyList((ListViewManager_o *)titleLabel, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantCheckEquipDialog__OnClickCancel(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_596C5B0 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCheckEquipDialog_OnClickCancel__);
    byte_596C5B0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantCheckEquipDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      0,
      closeFunc->fields.method);
  }
}


void ServantCheckEquipDialog__OnClickDecide(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_596C5AF & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCheckEquipDialog_OnClickDecide__);
    byte_596C5AF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantCheckEquipDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      1,
      closeFunc->fields.method);
  }
}


void ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596C5B1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_596C5B1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCheckEquipDialog__Open(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        bool isLastCheck,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *titleLabel; // x23
  System_String_o **v15; // x8
  System_String_o **v16; // x9
  System_String_o *v17; // x24
  System_String_o *v18; // x22
  System_String_o *servantEquipListViewManager; // x0
  __int64 v20; // x1
  UILabel_o *warningLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float v23; // s8
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  System_Action_o *v32; // x20

  if ( (byte_596C5AB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_2213A60(&StringLiteral_12095/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12093/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12094/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/);
    sub_2213A60(&StringLiteral_12092/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/);
    byte_596C5AB = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    (System_String_o *)isLastCheck,
    (System_String_o *)closeCallback,
    (int32_t)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( isLastCheck )
    v15 = (System_String_o **)&StringLiteral_12093/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  else
    v15 = (System_String_o **)&StringLiteral_12094/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/;
  if ( isLastCheck )
    v16 = (System_String_o **)&StringLiteral_12092/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/;
  else
    v16 = (System_String_o **)&StringLiteral_12095/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/;
  v17 = *v15;
  v18 = *v16;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  servantEquipListViewManager = LocalizationManager__Get(v17, 0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get(v18, 0);
  if ( !warningLabel )
    goto LABEL_28;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( isLastCheck )
  {
    if ( !servantEquipListViewManager )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
    GameObjectExtensions__SetLocalPosition_42891516(gameObject, 9.0, 250.0, 0);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_28;
    v23 = 0.0;
  }
  else
  {
    if ( !servantEquipListViewManager )
      goto LABEL_28;
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
    GameObjectExtensions__SetLocalPosition_42891516(v24, 1.0, 250.0, 0);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_28;
    v23 = 7.0;
  }
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_42891516(v25, v23, -151.0, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_28;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0)
    || (ServantCheckEquipListViewManager__CreateList(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v30),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0) )
  {
LABEL_28:
    sub_2213CDC(servantEquipListViewManager, v20);
  }
  ServantCheckEquipListViewManager__SetMode_41691076(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v31);
  v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0, 0);
}


void ServantCheckEquipDialog__OpenShopLastCheck(
        ServantCheckEquipDialog_o *this,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596C5AD & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12099/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_12098/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/);
    byte_596C5AD = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, closeCallback, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, v6, 0);
  warningLabel = this->fields.warningLabel;
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12098/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, 0);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v6, 0), (v6 = (System_String_o *)this->fields.titleLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0),
        GameObjectExtensions__SetLocalPosition_42891516(gameObject, 9.0, 250.0, 0),
        (v6 = (System_String_o *)this->fields.warningLabel) == 0) )
  {
LABEL_10:
    sub_2213CDC(v6, v7);
  }
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  GameObjectExtensions__SetLocalPosition_42891516(v10, 0.0, -151.0, 0);
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void ServantCheckEquipDialog__Open_41691180(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *titleLabel; // x21
  System_String_o *servantEquipListViewManager; // x0
  __int64 v15; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  System_Action_o *v23; // x20

  if ( (byte_596C5AC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_2213A60(&StringLiteral_12097/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12096/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/);
    byte_596C5AC = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    (System_String_o *)closeCallback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_12096/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_12097/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, 0);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_42891516(gameObject, 1.0, 250.0, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_42891516(v18, 7.0, -151.0, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_15;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0)
    || (ServantCheckEquipListViewManager__CreateList_41691752(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v21),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0) )
  {
LABEL_15:
    sub_2213CDC(servantEquipListViewManager, v15);
  }
  ServantCheckEquipListViewManager__SetMode_41691076(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v22);
  v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0, 0);
}


void ServantCheckEquipDialog_ClickDelegate___ctor(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200583C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20057F4;
}


System_IAsyncResult_o *ServantCheckEquipDialog_ClickDelegate__BeginInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantCheckEquipDialog_ClickDelegate__Invoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}