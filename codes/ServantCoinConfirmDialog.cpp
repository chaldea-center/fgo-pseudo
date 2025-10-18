void ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C45841 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C45841 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *v6; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_4C4583D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4583D = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closedAction = 0;
  this->fields.dispType = 1;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closedAction, 0, v3, v4);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v6 = this->fields.titleLabel;
    if ( !v6 )
      goto LABEL_14;
    UILabel__set_text(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
  {
    v6 = this->fields.descriptionLabel;
    if ( v6 )
    {
      UILabel__set_text(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v6);
  }
}


void ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C4583F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ServantCoinConfirmDialog_OnClickClose__);
    sub_1C37058(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__);
    byte_4C4583F = 1;
  }
  v3 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_ServantCoinConfirmDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  int32_t v12; // w8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v14; // x21
  System_String_o *servantCoinConfirmListViewManager; // x0
  UnityEngine_Object_o *descriptionLabel; // x21
  UILabel_o *v17; // x21
  __int64 *v18; // x8
  UnityEngine_Object_o *v19; // x21
  UILabel_o *v20; // x21
  UnityEngine_Object_o *v21; // x21

  if ( (byte_4C4583E & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11596/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/);
    sub_1C37058(&StringLiteral_11593/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/);
    sub_1C37058(&StringLiteral_11595/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/);
    sub_1C37058(&StringLiteral_11594/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/);
    byte_4C4583E = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closedAction, (int32_t)closedAction, v9, v10);
  v12 = this->fields.dispType;
  if ( v12 != 2 )
  {
    if ( v12 != 1 )
      goto LABEL_36;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
      goto LABEL_14;
    v14 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0);
    if ( v14 )
    {
      UILabel__set_text(v14, servantCoinConfirmListViewManager, 0);
LABEL_14:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
        goto LABEL_36;
      v17 = this->fields.descriptionLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11593/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_34;
    }
LABEL_38:
    sub_1C372B4(servantCoinConfirmListViewManager);
  }
  v19 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    v20 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11596/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0);
    if ( !v20 )
      goto LABEL_38;
    UILabel__set_text(v20, servantCoinConfirmListViewManager, 0);
  }
  v21 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v21, 0, 0) )
    goto LABEL_36;
  v17 = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = &StringLiteral_11595/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_34:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v18, 0);
  if ( !v17 )
    goto LABEL_38;
  UILabel__set_text(v17, servantCoinConfirmListViewManager, 0);
LABEL_36:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_38;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v11);
}


void ServantCoinConfirmDialog___OnClickClose_b__9_0(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_1C372B4(0);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0);
  ActionExtensions__Call(this->fields.closedAction, 0);
}


System_String_o *ServantCoinConfirmDialog__get_closeBtnPath(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C45840 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4C45840 = 1;
  }
  return (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/;
}