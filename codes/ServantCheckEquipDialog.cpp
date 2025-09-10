void ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C232D4 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C232D4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_34730148(this, 0, v2);
}


void ServantCheckEquipDialog__Close_34730148(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4C232D0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantCheckEquipDialog_EndClose__);
    byte_4C232D0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeFunc, 0, v6, v7);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


void ServantCheckEquipDialog__EndClose(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantCheckEquipDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void ServantCheckEquipDialog__EndOpen(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ServantCheckEquipDialog__Init(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C232CC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C232CC = 1;
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
    sub_1C2D6EC(titleLabel, method);
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

  if ( (byte_4C232D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantCheckEquipDialog_OnClickCancel__);
    byte_4C232D2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ServantCheckEquipDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C232D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantCheckEquipDialog_OnClickDecide__);
    byte_4C232D1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ServantCheckEquipDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C2D6EC(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      1,
      closeFunc->fields.method);
  }
}


void ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C232D3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C232D3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_15646/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void ServantCheckEquipDialog__Open(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        bool isLastCheck,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o **v9; // x8
  System_String_o *v10; // x24
  System_String_o **v11; // x8
  System_String_o *v12; // x22
  UILabel_o *titleLabel; // x23
  System_String_o *servantEquipListViewManager; // x0
  __int64 v15; // x1
  UILabel_o *warningLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float v18; // s8
  UnityEngine_GameObject_o *v19; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x20

  if ( (byte_4C232CD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_11580/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11578/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11579/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/);
    sub_1C2D490(&StringLiteral_11577/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/);
    byte_4C232CD = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    isLastCheck,
    (const MethodInfo *)closeCallback);
  if ( isLastCheck )
    v9 = (System_String_o **)&StringLiteral_11578/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  else
    v9 = (System_String_o **)&StringLiteral_11579/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/;
  v10 = *v9;
  if ( isLastCheck )
    v11 = (System_String_o **)&StringLiteral_11577/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/;
  else
    v11 = (System_String_o **)&StringLiteral_11580/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/;
  v12 = *v11;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get(v10, 0);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get(v12, 0);
  if ( !warningLabel )
    goto LABEL_27;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  if ( isLastCheck )
  {
    GameObjectExtensions__SetLocalPosition_35918496(gameObject, 9.0, 250.0, 0);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v18 = 0.0;
  }
  else
  {
    GameObjectExtensions__SetLocalPosition_35918496(gameObject, 1.0, 250.0, 0);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v18 = 7.0;
  }
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v19, v18, -151.0, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_27;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
          v22),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0) )
  {
LABEL_27:
    sub_1C2D6EC(servantEquipListViewManager, v15);
  }
  ServantCheckEquipListViewManager__SetMode_34728680(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v23);
  v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C232CF & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11584/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_11583/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/);
    byte_4C232CF = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11584/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, v6, 0);
  warningLabel = this->fields.warningLabel;
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11583/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, 0);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v6, 0), (v6 = (System_String_o *)this->fields.titleLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0),
        GameObjectExtensions__SetLocalPosition_35918496(gameObject, 9.0, 250.0, 0),
        (v6 = (System_String_o *)this->fields.warningLabel) == 0) )
  {
LABEL_10:
    sub_1C2D6EC(v6, v7);
  }
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v10, 0.0, -151.0, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v11, v12);
}


void ServantCheckEquipDialog__Open_34728784(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *servantEquipListViewManager; // x0
  __int64 v9; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  System_Action_o *v17; // x20

  if ( (byte_4C232CE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_11582/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11581/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/);
    byte_4C232CE = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, (int32_t)closeCallback, method);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11581/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11582/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, 0);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_35918496(gameObject, 1.0, 250.0, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_35918496(v12, 7.0, -151.0, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_15;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0)
    || (ServantCheckEquipListViewManager__CreateList_34729352(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v15),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(servantEquipListViewManager, v9);
  }
  ServantCheckEquipListViewManager__SetMode_34728680(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v16);
  v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0);
}


void ServantCheckEquipDialog_ClickDelegate___ctor(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6D27C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6D234;
}


System_IAsyncResult_o *ServantCheckEquipDialog_ClickDelegate__BeginInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4C232D5 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C232D5 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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