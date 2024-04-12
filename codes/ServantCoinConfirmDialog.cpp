void __fastcall ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B1212 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1212 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v10; // x1
  UILabel_o *v11; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_42B120E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B120E = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closedAction = 0LL;
  this->fields.dispType = 1;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closedAction, 0LL, v3, v4, v5, v6, v7, v8);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v11 = this->fields.titleLabel;
    if ( !v11 )
      goto LABEL_16;
    UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
  {
    v11 = this->fields.descriptionLabel;
    if ( v11 )
    {
      UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_16:
    sub_B52A5C(v11, v10);
  }
}


void __fastcall ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_42B1210 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ServantCoinConfirmDialog_OnClickClose__);
    sub_B52984(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__);
    byte_42B1210 = 1;
  }
  v3 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_ServantCoinConfirmDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
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

  if ( (byte_42B120F & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_11763/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/);
    sub_B52984(&StringLiteral_11760/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/);
    sub_B52984(&StringLiteral_11762/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/);
    sub_B52984(&StringLiteral_11761/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/);
    byte_42B120F = 1;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closedAction,
    (System_Int32_array **)closedAction,
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
      goto LABEL_44;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      goto LABEL_16;
    v19 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11761/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0LL);
    if ( v19 )
    {
      UILabel__set_text(v19, servantCoinConfirmListViewManager, 0LL);
LABEL_16:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
        goto LABEL_44;
      v22 = this->fields.descriptionLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = &StringLiteral_11760/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_42;
    }
LABEL_46:
    sub_B52A5C(servantCoinConfirmListViewManager, v15);
  }
  v24 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    v25 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0LL);
    if ( !v25 )
      goto LABEL_46;
    UILabel__set_text(v25, servantCoinConfirmListViewManager, 0LL);
  }
  v26 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    goto LABEL_44;
  v22 = this->fields.descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = &StringLiteral_11762/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_42:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v23, 0LL);
  if ( !v22 )
    goto LABEL_46;
  UILabel__set_text(v22, servantCoinConfirmListViewManager, 0LL);
LABEL_44:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_46;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v16);
}


void __fastcall ServantCoinConfirmDialog___OnClickClose_b__9_0(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_B52A5C(0LL, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0LL);
  ActionExtensions__Call(this->fields.closedAction, 0LL);
}


System_String_o *__fastcall ServantCoinConfirmDialog__get_closeBtnPath(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1211 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15584/*"Window/CloseButton"*/);
    byte_42B1211 = 1;
  }
  return (System_String_o *)StringLiteral_15584/*"Window/CloseButton"*/;
}