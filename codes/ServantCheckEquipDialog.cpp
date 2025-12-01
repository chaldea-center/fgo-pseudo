void ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC3381 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC3381 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_35192416(this, 0, v2);
}


void ServantCheckEquipDialog__Close_35192416(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_4CC337D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantCheckEquipDialog_EndClose__);
    byte_4CC337D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeFunc, 0, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0);
}


void ServantCheckEquipDialog__EndClose(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantCheckEquipDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C71354(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4CC3379 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3379 = 1;
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
    sub_1C71608(titleLabel, method);
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

  if ( (byte_4CC337F & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantCheckEquipDialog_OnClickCancel__);
    byte_4CC337F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantCheckEquipDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C71608(v5, v6);
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

  if ( (byte_4CC337E & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantCheckEquipDialog_OnClickDecide__);
    byte_4CC337E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantCheckEquipDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C71608(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      1,
      closeFunc->fields.method);
  }
}


void ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CC3380 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15653/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4CC3380 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45260884(transform, (System_String_o *)StringLiteral_15653/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void ServantCheckEquipDialog__Open(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        bool isLastCheck,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_o **v12; // x8
  System_String_o *v13; // x24
  System_String_o **v14; // x8
  System_String_o *v15; // x22
  UILabel_o *titleLabel; // x23
  System_String_o *servantEquipListViewManager; // x0
  __int64 v18; // x1
  UILabel_o *warningLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float v21; // s8
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  System_Action_o *v27; // x20

  if ( (byte_4CC337A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_1C713B0(&StringLiteral_11592/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_11590/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11591/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/);
    sub_1C713B0(&StringLiteral_11589/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/);
    byte_4CC337A = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    isLastCheck,
    (int32_t)closeCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( isLastCheck )
    v12 = (System_String_o **)&StringLiteral_11590/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  else
    v12 = (System_String_o **)&StringLiteral_11591/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/;
  v13 = *v12;
  if ( isLastCheck )
    v14 = (System_String_o **)&StringLiteral_11589/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/;
  else
    v14 = (System_String_o **)&StringLiteral_11592/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/;
  v15 = *v14;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get(v13, 0);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get(v15, 0);
  if ( !warningLabel )
    goto LABEL_27;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  if ( isLastCheck )
  {
    GameObjectExtensions__SetLocalPosition_36389976(gameObject, 9.0, 250.0, 0);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v21 = 0.0;
  }
  else
  {
    GameObjectExtensions__SetLocalPosition_36389976(gameObject, 1.0, 250.0, 0);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v21 = 7.0;
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_36389976(v22, v21, -151.0, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_27;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
          v25),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0) )
  {
LABEL_27:
    sub_1C71608(servantEquipListViewManager, v18);
  }
  ServantCheckEquipListViewManager__SetMode_35190944(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v26);
  v27 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC337C & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11596/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_11595/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/);
    byte_4CC337C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11596/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, v6, 0);
  warningLabel = this->fields.warningLabel;
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11595/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, 0);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v6, 0), (v6 = (System_String_o *)this->fields.titleLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0),
        GameObjectExtensions__SetLocalPosition_36389976(gameObject, 9.0, 250.0, 0),
        (v6 = (System_String_o *)this->fields.warningLabel) == 0) )
  {
LABEL_10:
    sub_1C71608(v6, v7);
  }
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  GameObjectExtensions__SetLocalPosition_36389976(v10, 0.0, -151.0, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void ServantCheckEquipDialog__Open_35191048(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *servantEquipListViewManager; // x0
  __int64 v13; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  System_Action_o *v21; // x20

  if ( (byte_4CC337B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_1C713B0(&StringLiteral_11594/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11593/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/);
    byte_4CC337B = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    (int32_t)closeCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11593/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, 0);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_36389976(gameObject, 1.0, 250.0, 0);
  servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0);
  GameObjectExtensions__SetLocalPosition_36389976(v16, 7.0, -151.0, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_15;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0)
    || (ServantCheckEquipListViewManager__CreateList_35191620(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v19),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0) )
  {
LABEL_15:
    sub_1C71608(servantEquipListViewManager, v13);
  }
  ServantCheckEquipListViewManager__SetMode_35190944(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v20);
  v21 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0, 0);
}


void ServantCheckEquipDialog_ClickDelegate___ctor(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA223C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA21F4;
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
  if ( (byte_4CC3382 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC3382 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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