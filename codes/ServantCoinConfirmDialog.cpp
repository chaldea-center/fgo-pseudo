void ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D332CF & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D332CF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v10; // x1
  UILabel_o *v11; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_4D332CB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D332CB = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closedAction = 0;
  this->fields.dispType = 1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closedAction, 0, v3, v4, v5, v6, v7, v8);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v11 = this->fields.titleLabel;
    if ( !v11 )
      goto LABEL_14;
    UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
  {
    v11 = this->fields.descriptionLabel;
    if ( v11 )
    {
      UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(v11, v10);
  }
}


void ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D332CD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ServantCoinConfirmDialog_OnClickClose__);
    sub_1C93AD4(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__);
    byte_4D332CD = 1;
  }
  v3 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ServantCoinConfirmDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t v17; // w8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v19; // x21
  System_String_o *servantCoinConfirmListViewManager; // x0
  UnityEngine_Object_o *descriptionLabel; // x21
  UILabel_o *v22; // x21
  __int64 *v23; // x8
  UnityEngine_Object_o *v24; // x21
  UILabel_o *v25; // x21
  UnityEngine_Object_o *v26; // x21

  if ( (byte_4D332CC & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_11683/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/);
    sub_1C93AD4(&StringLiteral_11680/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/);
    sub_1C93AD4(&StringLiteral_11682/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/);
    sub_1C93AD4(&StringLiteral_11681/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/);
    byte_4D332CC = 1;
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closedAction,
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
      goto LABEL_14;
    v19 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11681/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0);
    if ( v19 )
    {
      UILabel__set_text(v19, servantCoinConfirmListViewManager, 0);
LABEL_14:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
        goto LABEL_36;
      v22 = this->fields.descriptionLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_11680/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_34;
    }
LABEL_38:
    sub_1C93D2C(servantCoinConfirmListViewManager, v15);
  }
  v24 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    v25 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11683/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0);
    if ( !v25 )
      goto LABEL_38;
    UILabel__set_text(v25, servantCoinConfirmListViewManager, 0);
  }
  v26 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v26, 0, 0) )
    goto LABEL_36;
  v22 = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = &StringLiteral_11682/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_34:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v23, 0);
  if ( !v22 )
    goto LABEL_38;
  UILabel__set_text(v22, servantCoinConfirmListViewManager, 0);
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
    sub_1C93D2C(0, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0);
  ActionExtensions__Call(this->fields.closedAction, 0);
}


System_String_o *ServantCoinConfirmDialog__get_closeBtnPath(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D332CE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15743/*"Window/CloseButton"*/);
    byte_4D332CE = 1;
  }
  return (System_String_o *)StringLiteral_15743/*"Window/CloseButton"*/;
}