void __fastcall ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B47485 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B47485 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v7; // x1
  UILabel_o *v8; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_4B47481 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v3);
    byte_4B47481 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closedAction = 0LL;
  this->fields.dispType = 1;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closedAction, 0, v4, v5);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v8 = this->fields.titleLabel;
    if ( !v8 )
      goto LABEL_14;
    UILabel__set_text(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
  {
    v8 = this->fields.descriptionLabel;
    if ( v8 )
    {
      UILabel__set_text(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_14:
    sub_1BDBAD4(v8, v7);
  }
}


void __fastcall ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B47483 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ServantCoinConfirmDialog_OnClickClose__, v3);
    sub_1BDB878(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__, v4);
    byte_4B47483 = 1;
  }
  v5 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BDB890(Method_ServantCoinConfirmDialog_OnClickClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCoinConfirmDialog__Open(
        ServantCoinConfirmDialog_o *this,
        int32_t dispType,
        GetSvtCoin_array *svtCoins,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int32_t v18; // w8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v20; // x21
  System_String_o *servantCoinConfirmListViewManager; // x0
  UnityEngine_Object_o *descriptionLabel; // x21
  UILabel_o *v23; // x21
  __int64 *v24; // x8
  UnityEngine_Object_o *v25; // x21
  UILabel_o *v26; // x21
  UnityEngine_Object_o *v27; // x21

  if ( (byte_4B47482 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, *(_QWORD *)&dispType);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_11565/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, v10);
    sub_1BDB878(&StringLiteral_11562/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/, v11);
    sub_1BDB878(&StringLiteral_11564/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/, v12);
    sub_1BDB878(&StringLiteral_11563/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, v13);
    byte_4B47482 = 1;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closedAction, (int32_t)closedAction, v14, v15);
  v18 = this->fields.dispType;
  if ( v18 != 2 )
  {
    if ( v18 != 1 )
      goto LABEL_36;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      goto LABEL_14;
    v20 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11563/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0LL);
    if ( v20 )
    {
      UILabel__set_text(v20, servantCoinConfirmListViewManager, 0LL);
LABEL_14:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
        goto LABEL_36;
      v23 = this->fields.descriptionLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_11562/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_34;
    }
LABEL_38:
    sub_1BDBAD4(servantCoinConfirmListViewManager, v16);
  }
  v25 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    v26 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11565/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0LL);
    if ( !v26 )
      goto LABEL_38;
    UILabel__set_text(v26, servantCoinConfirmListViewManager, 0LL);
  }
  v27 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
    goto LABEL_36;
  v23 = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = &StringLiteral_11564/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_34:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v24, 0LL);
  if ( !v23 )
    goto LABEL_38;
  UILabel__set_text(v23, servantCoinConfirmListViewManager, 0LL);
LABEL_36:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_38;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v17);
}


void __fastcall ServantCoinConfirmDialog___OnClickClose_b__9_0(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_1BDBAD4(0LL, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0LL);
  ActionExtensions__Call(this->fields.closedAction, 0LL);
}


System_String_o *__fastcall ServantCoinConfirmDialog__get_closeBtnPath(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B47484 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15618/*"Window/CloseButton"*/, method);
    byte_4B47484 = 1;
  }
  return (System_String_o *)StringLiteral_15618/*"Window/CloseButton"*/;
}