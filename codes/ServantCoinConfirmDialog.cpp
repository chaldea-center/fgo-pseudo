void __fastcall ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4189E8B & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189E8B = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v11; // x1
  UILabel_o *v12; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_4189E87 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4189E87 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closedAction = 0LL;
  this->fields.dispType = 1;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closedAction, 0LL, v4, v5, v6, v7, v8, v9);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v12 = this->fields.titleLabel;
    if ( !v12 )
      goto LABEL_16;
    UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
  {
    v12 = this->fields.descriptionLabel;
    if ( v12 )
    {
      UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(v12, v11);
  }
}


void __fastcall ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4189E89 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantCoinConfirmDialog_OnClickClose__, v3);
    sub_B2C35C(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__, v4);
    byte_4189E89 = 1;
  }
  v5 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B2C364(Method_ServantCoinConfirmDialog_OnClickClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int32_t v22; // w8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v24; // x21
  System_String_o *servantCoinConfirmListViewManager; // x0
  UnityEngine_Object_o *descriptionLabel; // x21
  UILabel_o *v27; // x21
  __int64 *v28; // x8
  UnityEngine_Object_o *v29; // x21
  UILabel_o *v30; // x21
  UnityEngine_Object_o *v31; // x21

  if ( (byte_4189E88 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&dispType);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_11678/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, v10);
    sub_B2C35C(&StringLiteral_11675/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/, v11);
    sub_B2C35C(&StringLiteral_11677/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/, v12);
    sub_B2C35C(&StringLiteral_11676/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, v13);
    byte_4189E88 = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closedAction,
    (System_Int32_array **)closedAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = this->fields.dispType;
  if ( v22 != 2 )
  {
    if ( v22 != 1 )
      goto LABEL_44;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      goto LABEL_16;
    v24 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11676/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0LL);
    if ( v24 )
    {
      UILabel__set_text(v24, servantCoinConfirmListViewManager, 0LL);
LABEL_16:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
        goto LABEL_44;
      v27 = this->fields.descriptionLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = &StringLiteral_11675/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_42;
    }
LABEL_46:
    sub_B2C434(servantCoinConfirmListViewManager, v20);
  }
  v29 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    v30 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11678/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0LL);
    if ( !v30 )
      goto LABEL_46;
    UILabel__set_text(v30, servantCoinConfirmListViewManager, 0LL);
  }
  v31 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
    goto LABEL_44;
  v27 = this->fields.descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = &StringLiteral_11677/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_42:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v28, 0LL);
  if ( !v27 )
    goto LABEL_46;
  UILabel__set_text(v27, servantCoinConfirmListViewManager, 0LL);
LABEL_44:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_46;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v21);
}


void __fastcall ServantCoinConfirmDialog___OnClickClose_b__9_0(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_B2C434(0LL, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0LL);
  ActionExtensions__Call(this->fields.closedAction, 0LL);
}


System_String_o *__fastcall ServantCoinConfirmDialog__get_closeBtnPath(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189E8A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15479/*"Window/CloseButton"*/, method);
    byte_4189E8A = 1;
  }
  return (System_String_o *)StringLiteral_15479/*"Window/CloseButton"*/;
}