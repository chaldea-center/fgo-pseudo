void ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_593B855 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593B855 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v11; // x1
  UILabel_o *v12; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_593B851 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B851 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closedAction = 0;
  this->fields.dispType = 1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closedAction, 0, v3, v4, v5, v6, v7, v8);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v12 = this->fields.titleLabel;
    if ( !v12 )
      goto LABEL_14;
    UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
  {
    v12 = this->fields.descriptionLabel;
    if ( v12 )
    {
      UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(v12, v11);
  }
}


void ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_593B853 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ServantCoinConfirmDialog_OnClickClose__);
    sub_21FFC50(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__);
    byte_593B853 = 1;
  }
  v3 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_ServantCoinConfirmDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCoinConfirmDialog__Open(
        ServantCoinConfirmDialog_o *this,
        int32_t dispType,
        GetSvtCoin_array *svtCoins,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t v17; // w8
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v19; // x1
  UILabel_o *v20; // x21
  System_String_o *servantCoinConfirmListViewManager; // x0
  UnityEngine_Object_o *descriptionLabel; // x21
  UILabel_o *v23; // x21
  __int64 *v24; // x8
  UnityEngine_Object_o *v25; // x21
  __int64 v26; // x1
  UILabel_o *v27; // x21
  UnityEngine_Object_o *v28; // x21

  if ( (byte_593B852 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12081/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/);
    sub_21FFC50(&StringLiteral_12078/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_12080/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_12079/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/);
    byte_593B852 = 1;
  }
  if ( !svtCoins || !svtCoins->max_length )
  {
    ActionExtensions__Call(closedAction, 0);
    return;
  }
  ServantCoinConfirmDialog__Init(this, *(const MethodInfo **)&dispType);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  this->fields.closedAction = closedAction;
  this->fields.dispType = dispType;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closedAction,
    (int32_t)closedAction,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = this->fields.dispType;
  if ( v17 != 2 )
  {
    if ( v17 != 1 )
      goto LABEL_36;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
      goto LABEL_14;
    v20 = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_12079/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0);
    if ( v20 )
    {
      UILabel__set_text(v20, servantCoinConfirmListViewManager, 0);
LABEL_14:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
        goto LABEL_36;
      v23 = this->fields.descriptionLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
      v24 = &StringLiteral_12078/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_34;
    }
LABEL_38:
    sub_21FFECC(servantCoinConfirmListViewManager, v15);
  }
  v25 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
  {
    v27 = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_12081/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0);
    if ( !v27 )
      goto LABEL_38;
    UILabel__set_text(v27, servantCoinConfirmListViewManager, 0);
  }
  v28 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( !UnityEngine_Object__op_Inequality(v28, 0, 0) )
    goto LABEL_36;
  v23 = this->fields.descriptionLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v24 = &StringLiteral_12080/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_34:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v24, 0);
  if ( !v23 )
    goto LABEL_38;
  UILabel__set_text(v23, servantCoinConfirmListViewManager, 0);
LABEL_36:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_38;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v16);
}


void ServantCoinConfirmDialog___OnClickClose_b__9_0(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_21FFECC(0, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0);
  ActionExtensions__Call(this->fields.closedAction, 0);
}


System_String_o *ServantCoinConfirmDialog__get_closeBtnPath(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_593B854 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    byte_593B854 = 1;
  }
  return (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/;
}