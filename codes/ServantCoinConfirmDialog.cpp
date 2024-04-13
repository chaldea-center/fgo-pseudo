void __fastcall ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9C9F & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9C9F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v15; // x1
  UILabel_o *v16; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_42E9C9B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E9C9B = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closedAction = 0LL;
  this->fields.dispType = 1;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closedAction, 0LL, v8, v9, v10, v11, v12, v13);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v16 = this->fields.titleLabel;
    if ( !v16 )
      goto LABEL_16;
    UILabel__set_text(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
  {
    v16 = this->fields.descriptionLabel;
    if ( v16 )
    {
      UILabel__set_text(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v16, v15);
  }
}


void __fastcall ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_42E9C9D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantCoinConfirmDialog_OnClickClose__, v5, v6, v7);
    sub_B5D5C4(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__, v8, v9, v10);
    byte_42E9C9D = 1;
  }
  v11 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B5D5CC(Method_ServantCoinConfirmDialog_OnClickClose__);
  v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCoinConfirmDialog__Open(
        ServantCoinConfirmDialog_o *this,
        int32_t dispType,
        GetSvtCoin_array *svtCoins,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  int32_t v32; // w8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v34; // x21
  System_String_o *servantCoinConfirmListViewManager; // x0
  UnityEngine_Object_o *descriptionLabel; // x21
  UILabel_o *v37; // x21
  __int64 *v38; // x8
  UnityEngine_Object_o *v39; // x21
  UILabel_o *v40; // x21
  UnityEngine_Object_o *v41; // x21

  if ( (byte_42E9C9C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, dispType, (_DWORD)svtCoins, closedAction);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11817/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11814/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11816/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11815/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, v21, v22, v23);
    byte_42E9C9C = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closedAction,
    (System_Int32_array **)closedAction,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v32 = this->fields.dispType;
  if ( v32 != 2 )
  {
    if ( v32 != 1 )
      goto LABEL_44;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      goto LABEL_16;
    v34 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11815/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0LL);
    if ( v34 )
    {
      UILabel__set_text(v34, servantCoinConfirmListViewManager, 0LL);
LABEL_16:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
        goto LABEL_44;
      v37 = this->fields.descriptionLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = &StringLiteral_11814/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_42;
    }
LABEL_46:
    sub_B5D69C(servantCoinConfirmListViewManager, v30);
  }
  v39 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    v40 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11817/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0LL);
    if ( !v40 )
      goto LABEL_46;
    UILabel__set_text(v40, servantCoinConfirmListViewManager, 0LL);
  }
  v41 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
    goto LABEL_44;
  v37 = this->fields.descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = &StringLiteral_11816/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_42:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v38, 0LL);
  if ( !v37 )
    goto LABEL_46;
  UILabel__set_text(v37, servantCoinConfirmListViewManager, 0LL);
LABEL_44:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_46;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v31);
}


void __fastcall ServantCoinConfirmDialog___OnClickClose_b__9_0(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_B5D69C(0LL, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0LL);
  ActionExtensions__Call(this->fields.closedAction, 0LL);
}


System_String_o *__fastcall ServantCoinConfirmDialog__get_closeBtnPath(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9C9E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15669/*"Window/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E9C9E = 1;
  }
  return (System_String_o *)StringLiteral_15669/*"Window/CloseButton"*/;
}