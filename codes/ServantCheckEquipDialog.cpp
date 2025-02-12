void __fastcall ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BC3CDA & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BC3CDA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_33629800(this, 0LL, v2);
}


void __fastcall ServantCheckEquipDialog__Close_33629800(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Action_o *v17; // x20

  if ( (byte_4BC3CD6 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_ServantCheckEquipDialog_EndClose__, v10);
    byte_4BC3CD6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v17 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
}


void __fastcall ServantCheckEquipDialog__EndClose(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantCheckEquipDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C1AB78(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall ServantCheckEquipDialog__EndOpen(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantCheckEquipDialog__Init(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BC3CD2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC3CD2 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ListViewManager__DestroyList((ListViewManager_o *)titleLabel, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1C1AE30(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__OnClickCancel(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4BC3CD8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ServantCheckEquipDialog_OnClickCancel__, method);
    byte_4BC3CD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_ServantCheckEquipDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C1AE30(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall ServantCheckEquipDialog__OnClickDecide(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4BC3CD7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ServantCheckEquipDialog_OnClickDecide__, method);
    byte_4BC3CD7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_ServantCheckEquipDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C1AE30(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BC3CD9 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_15906/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4BC3CD9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43042988(transform, (System_String_o *)StringLiteral_15906/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog__Open(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        bool isLastCheck,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o **v20; // x8
  System_String_o *v21; // x24
  System_String_o **v22; // x8
  System_String_o *v23; // x22
  UILabel_o *titleLabel; // x23
  System_String_o *servantEquipListViewManager; // x0
  __int64 v26; // x1
  UILabel_o *warningLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float v29; // s8
  UnityEngine_GameObject_o *v30; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  System_Action_o *v35; // x20

  if ( (byte_4BC3CD3 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, materialList);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v12);
    sub_1C1ABD4(&Method_ServantCheckEquipDialog_EndOpen__, v13);
    sub_1C1ABD4(&StringLiteral_11762/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/, v14);
    sub_1C1ABD4(&StringLiteral_3803/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_1C1ABD4(&StringLiteral_11760/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v16);
    sub_1C1ABD4(&StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1C1ABD4(&StringLiteral_11761/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/, v18);
    sub_1C1ABD4(&StringLiteral_11759/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/, v19);
    byte_4BC3CD3 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    isLastCheck,
    (int32_t)closeCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( isLastCheck )
    v20 = (System_String_o **)&StringLiteral_11760/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  else
    v20 = (System_String_o **)&StringLiteral_11761/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/;
  v21 = *v20;
  if ( isLastCheck )
    v22 = (System_String_o **)&StringLiteral_11759/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/;
  else
    v22 = (System_String_o **)&StringLiteral_11762/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/;
  v23 = *v22;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get(v21, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get(v23, 0LL);
  if ( !warningLabel )
    goto LABEL_27;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  if ( isLastCheck )
  {
    GameObjectExtensions__SetLocalPosition_34756308(gameObject, 9.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v29 = 0.0;
  }
  else
  {
    GameObjectExtensions__SetLocalPosition_34756308(gameObject, 1.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v29 = 7.0;
  }
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_34756308(v30, v29, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_27;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0LL),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v33),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_27:
    sub_1C1AE30(servantEquipListViewManager, v26);
  }
  ServantCheckEquipListViewManager__SetMode_33628340(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v34);
  v35 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
}


void __fastcall ServantCheckEquipDialog__OpenShopLastCheck(
        ServantCheckEquipDialog_o *this,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BC3CD5 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, closeCallback);
    sub_1C1ABD4(&StringLiteral_11766/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, v5);
    sub_1C1ABD4(&StringLiteral_11765/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, v6);
    byte_4BC3CD5 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11766/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, v8, 0LL);
  warningLabel = this->fields.warningLabel;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11765/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, 0LL);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v8, 0LL), (v8 = (System_String_o *)this->fields.titleLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL),
        GameObjectExtensions__SetLocalPosition_34756308(gameObject, 9.0, 250.0, 0LL),
        (v8 = (System_String_o *)this->fields.warningLabel) == 0LL) )
  {
LABEL_10:
    sub_1C1AE30(v8, v9);
  }
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
  GameObjectExtensions__SetLocalPosition_34756308(v12, 0.0, -151.0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall ServantCheckEquipDialog__Open_33628444(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *servantEquipListViewManager; // x0
  __int64 v19; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  System_Action_o *v27; // x20

  if ( (byte_4BC3CD4 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, materialList);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_ServantCheckEquipDialog_EndOpen__, v12);
    sub_1C1ABD4(&StringLiteral_11764/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, v13);
    sub_1C1ABD4(&StringLiteral_3803/*"COMMON_CONFIRM_DECIDE"*/, v14);
    sub_1C1ABD4(&StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, v15);
    sub_1C1ABD4(&StringLiteral_11763/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, v16);
    byte_4BC3CD4 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    (int64_t)closeCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11764/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_34756308(gameObject, 1.0, 250.0, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_34756308(v22, 7.0, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_15;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0LL),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList_33629012(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v25),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_15:
    sub_1C1AE30(servantEquipListViewManager, v19);
  }
  ServantCheckEquipListViewManager__SetMode_33628340(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v26);
  v27 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog_ClickDelegate___ctor(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A576F0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A576A8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCheckEquipDialog_ClickDelegate__BeginInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4BC3CDB & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, isDecide);
    byte_4BC3CDB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall ServantCheckEquipDialog_ClickDelegate__Invoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}