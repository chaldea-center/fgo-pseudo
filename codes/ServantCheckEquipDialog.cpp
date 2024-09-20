void __fastcall ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A574CF & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A574CF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_32568092(this, 0LL, v2);
}


void __fastcall ServantCheckEquipDialog__Close_32568092(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_4A574CB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantCheckEquipDialog_EndClose__);
    byte_4A574CB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, 0, v6, v7);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall ServantCheckEquipDialog__EndClose(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantCheckEquipDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ServantCheckEquipDialog__EndOpen(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantCheckEquipDialog__Init(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A574C7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A574C7 = 1;
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
    sub_1B8880C(titleLabel, method);
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

  if ( (byte_4A574CD & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantCheckEquipDialog_OnClickCancel__);
    byte_4A574CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantCheckEquipDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A574CC & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantCheckEquipDialog_OnClickDecide__);
    byte_4A574CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantCheckEquipDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A574CE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4A574CE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_15649/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall ServantCheckEquipDialog__Open(
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

  if ( (byte_4A574C8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_1B885B0(&StringLiteral_11554/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11552/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11553/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/);
    sub_1B885B0(&StringLiteral_11551/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/);
    byte_4A574C8 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    isLastCheck,
    (int32_t)closeCallback);
  if ( isLastCheck )
    v9 = (System_String_o **)&StringLiteral_11552/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  else
    v9 = (System_String_o **)&StringLiteral_11553/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/;
  v10 = *v9;
  if ( isLastCheck )
    v11 = (System_String_o **)&StringLiteral_11551/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/;
  else
    v11 = (System_String_o **)&StringLiteral_11554/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/;
  v12 = *v11;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get(v10, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get(v12, 0LL);
  if ( !warningLabel )
    goto LABEL_27;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  if ( isLastCheck )
  {
    GameObjectExtensions__SetLocalPosition_33724120(gameObject, 9.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v18 = 0.0;
  }
  else
  {
    GameObjectExtensions__SetLocalPosition_33724120(gameObject, 1.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v18 = 7.0;
  }
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_33724120(v19, v18, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_27;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
          v22),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_27:
    sub_1B8880C(servantEquipListViewManager, v15);
  }
  ServantCheckEquipListViewManager__SetMode_32566632(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v23);
  v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
}


void __fastcall ServantCheckEquipDialog__OpenShopLastCheck(
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

  if ( (byte_4A574CA & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11558/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_11557/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/);
    byte_4A574CA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11558/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, v6, 0LL);
  warningLabel = this->fields.warningLabel;
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11557/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, 0LL);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v6, 0LL), (v6 = (System_String_o *)this->fields.titleLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL),
        GameObjectExtensions__SetLocalPosition_33724120(gameObject, 9.0, 250.0, 0LL),
        (v6 = (System_String_o *)this->fields.warningLabel) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(v6, v7);
  }
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  GameObjectExtensions__SetLocalPosition_33724120(v10, 0.0, -151.0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v11, v12);
}


void __fastcall ServantCheckEquipDialog__Open_32566736(
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

  if ( (byte_4A574C9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_1B885B0(&StringLiteral_11556/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11555/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/);
    byte_4A574C9 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    (int32_t)closeCallback,
    (int32_t)method);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11555/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11556/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_33724120(gameObject, 1.0, 250.0, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_33724120(v12, 7.0, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_15;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0LL),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList_32567304(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v15),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(servantEquipListViewManager, v9);
  }
  ServantCheckEquipListViewManager__SetMode_32566632(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v16);
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog_ClickDelegate___ctor(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C9D5C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9D14;
}


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
  if ( (byte_4A574D0 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A574D0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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