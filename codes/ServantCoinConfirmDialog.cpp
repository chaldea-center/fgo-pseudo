void ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C5961E & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C5961E = 1;
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
  __int64 v6; // x1
  UILabel_o *v7; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_4C5961A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5961A = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closedAction = 0;
  this->fields.dispType = 1;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closedAction, 0, v3, v4);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      goto LABEL_14;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
  {
    v7 = this->fields.descriptionLabel;
    if ( v7 )
    {
      UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_14:
    sub_1C3E7C0(v7, v6);
  }
}


void ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C5961C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ServantCoinConfirmDialog_OnClickClose__);
    sub_1C3E564(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__);
    byte_4C5961C = 1;
  }
  v3 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_ServantCoinConfirmDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v15; // x21
  System_String_o *servantCoinConfirmListViewManager; // x0
  UnityEngine_Object_o *descriptionLabel; // x21
  UILabel_o *v18; // x21
  __int64 *v19; // x8
  UnityEngine_Object_o *v20; // x21
  UILabel_o *v21; // x21
  UnityEngine_Object_o *v22; // x21

  if ( (byte_4C5961B & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_11598/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/);
    sub_1C3E564(&StringLiteral_11595/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/);
    sub_1C3E564(&StringLiteral_11597/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/);
    sub_1C3E564(&StringLiteral_11596/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/);
    byte_4C5961B = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closedAction, (int32_t)closedAction, v9, v10);
  v13 = this->fields.dispType;
  if ( v13 != 2 )
  {
    if ( v13 != 1 )
      goto LABEL_36;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
      goto LABEL_14;
    v15 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11596/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0);
    if ( v15 )
    {
      UILabel__set_text(v15, servantCoinConfirmListViewManager, 0);
LABEL_14:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
        goto LABEL_36;
      v18 = this->fields.descriptionLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11595/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_34;
    }
LABEL_38:
    sub_1C3E7C0(servantCoinConfirmListViewManager, v11);
  }
  v20 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    v21 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11598/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0);
    if ( !v21 )
      goto LABEL_38;
    UILabel__set_text(v21, servantCoinConfirmListViewManager, 0);
  }
  v22 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v22, 0, 0) )
    goto LABEL_36;
  v18 = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = &StringLiteral_11597/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_34:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v19, 0);
  if ( !v18 )
    goto LABEL_38;
  UILabel__set_text(v18, servantCoinConfirmListViewManager, 0);
LABEL_36:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_38;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v12);
}


void ServantCoinConfirmDialog___OnClickClose_b__9_0(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_1C3E7C0(0, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0);
  ActionExtensions__Call(this->fields.closedAction, 0);
}


System_String_o *ServantCoinConfirmDialog__get_closeBtnPath(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C5961D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15653/*"Window/CloseButton"*/);
    byte_4C5961D = 1;
  }
  return (System_String_o *)StringLiteral_15653/*"Window/CloseButton"*/;
}