void __fastcall ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5DBA4 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5DBA4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v6; // x1
  UILabel_o *v7; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_4A5DBA0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DBA0 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closedAction = 0LL;
  this->fields.dispType = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closedAction, 0, v3, v4);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      goto LABEL_14;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
  {
    v7 = this->fields.descriptionLabel;
    if ( v7 )
    {
      UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(v7, v6);
  }
}


void __fastcall ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5DBA2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantCoinConfirmDialog_OnClickClose__);
    sub_1B885B0(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__);
    byte_4A5DBA2 = 1;
  }
  v3 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ServantCoinConfirmDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCoinConfirmDialog__Open(
        ServantCoinConfirmDialog_o *this,
        int32_t dispType,
        GetSvtCoin_array *svtCoins,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
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

  if ( (byte_4A5DBA1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11563/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/);
    sub_1B885B0(&StringLiteral_11560/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_11562/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_11561/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/);
    byte_4A5DBA1 = 1;
  }
  if ( !svtCoins || !*(_QWORD *)&svtCoins->max_length )
  {
    ActionExtensions__Call(closedAction, 0LL);
    return;
  }
  ServantCoinConfirmDialog__Init(this, *(const MethodInfo **)&dispType);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  this->fields.closedAction = closedAction;
  this->fields.dispType = dispType;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closedAction, (int32_t)closedAction, v9, v10);
  v13 = this->fields.dispType;
  if ( v13 != 2 )
  {
    if ( v13 != 1 )
      goto LABEL_36;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      goto LABEL_14;
    v15 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11561/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0LL);
    if ( v15 )
    {
      UILabel__set_text(v15, servantCoinConfirmListViewManager, 0LL);
LABEL_14:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
        goto LABEL_36;
      v18 = this->fields.descriptionLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11560/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_34;
    }
LABEL_38:
    sub_1B8880C(servantCoinConfirmListViewManager, v11);
  }
  v20 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    v21 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11563/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0LL);
    if ( !v21 )
      goto LABEL_38;
    UILabel__set_text(v21, servantCoinConfirmListViewManager, 0LL);
  }
  v22 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    goto LABEL_36;
  v18 = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = &StringLiteral_11562/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_34:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v19, 0LL);
  if ( !v18 )
    goto LABEL_38;
  UILabel__set_text(v18, servantCoinConfirmListViewManager, 0LL);
LABEL_36:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_38;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v12);
}


void __fastcall ServantCoinConfirmDialog___OnClickClose_b__9_0(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_1B8880C(0LL, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0LL);
  ActionExtensions__Call(this->fields.closedAction, 0LL);
}


System_String_o *__fastcall ServantCoinConfirmDialog__get_closeBtnPath(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5DBA3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4A5DBA3 = 1;
  }
  return (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/;
}