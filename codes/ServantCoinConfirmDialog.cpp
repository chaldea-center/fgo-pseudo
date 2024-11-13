void __fastcall ServantCoinConfirmDialog___ctor(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18B43 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B18B43 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmDialog__Init(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v14; // x1
  UILabel_o *v15; // x0
  UnityEngine_Object_o *descriptionLabel; // x20

  if ( (byte_4B18B3F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B18B3F = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closedAction = 0LL;
  this->fields.dispType = 1;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closedAction, 0LL, v6, v7, v8, v9, v10, v11);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v15 = this->fields.titleLabel;
    if ( !v15 )
      goto LABEL_14;
    UILabel__set_text(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
  {
    v15 = this->fields.descriptionLabel;
    if ( v15 )
    {
      UILabel__set_text(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v15, v14);
  }
}


void __fastcall ServantCoinConfirmDialog__OnClickClose(ServantCoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B18B41 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCoinConfirmDialog_OnClickClose__, v4, v5);
    sub_1BCA7E0(&Method_ServantCoinConfirmDialog__OnClickClose_b__9_0__, v6, v7);
    byte_4B18B41 = 1;
  }
  v8 = Method_ServantCoinConfirmDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_ServantCoinConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_ServantCoinConfirmDialog_OnClickClose__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w8
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v29; // x1
  UILabel_o *v30; // x21
  System_String_o *servantCoinConfirmListViewManager; // x0
  UnityEngine_Object_o *descriptionLabel; // x21
  UILabel_o *v33; // x21
  __int64 *v34; // x8
  UnityEngine_Object_o *v35; // x21
  __int64 v36; // x1
  UILabel_o *v37; // x21
  UnityEngine_Object_o *v38; // x21

  if ( (byte_4B18B40 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&dispType, svtCoins);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_11701/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11698/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11700/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11699/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, v17, v18);
    byte_4B18B40 = 1;
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closedAction,
    (int64_t)closedAction,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = this->fields.dispType;
  if ( v27 != 2 )
  {
    if ( v27 != 1 )
      goto LABEL_36;
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( !UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
      goto LABEL_14;
    v30 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11699/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0LL);
    if ( v30 )
    {
      UILabel__set_text(v30, servantCoinConfirmListViewManager, 0LL);
LABEL_14:
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      if ( !UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
        goto LABEL_36;
      v33 = this->fields.descriptionLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      v34 = &StringLiteral_11698/*"SERVANT_COIN_CONFIRM_GET_DESCRIPTION"*/;
      goto LABEL_34;
    }
LABEL_38:
    sub_1BCAA3C(servantCoinConfirmListViewManager, v25);
  }
  v35 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
  {
    v37 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
    servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11701/*"SERVANT_COIN_CONFIRM_OVERFLOW_TITLE"*/, 0LL);
    if ( !v37 )
      goto LABEL_38;
    UILabel__set_text(v37, servantCoinConfirmListViewManager, 0LL);
  }
  v38 = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( !UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
    goto LABEL_36;
  v33 = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  v34 = &StringLiteral_11700/*"SERVANT_COIN_CONFIRM_OVERFLOW_DESCRIPTION"*/;
LABEL_34:
  servantCoinConfirmListViewManager = LocalizationManager__Get((System_String_o *)*v34, 0LL);
  if ( !v33 )
    goto LABEL_38;
  UILabel__set_text(v33, servantCoinConfirmListViewManager, 0LL);
LABEL_36:
  servantCoinConfirmListViewManager = (System_String_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    goto LABEL_38;
  ServantCoinConfirmListViewManager__CreateList(
    (ServantCoinConfirmListViewManager_o *)servantCoinConfirmListViewManager,
    svtCoins,
    v26);
}


void __fastcall ServantCoinConfirmDialog___OnClickClose_b__9_0(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *servantCoinConfirmListViewManager; // x0

  servantCoinConfirmListViewManager = (ListViewManager_o *)this->fields.servantCoinConfirmListViewManager;
  if ( !servantCoinConfirmListViewManager )
    sub_1BCAA3C(0LL, method);
  ListViewManager__DestroyList(servantCoinConfirmListViewManager, 0LL);
  ActionExtensions__Call(this->fields.closedAction, 0LL);
}


System_String_o *__fastcall ServantCoinConfirmDialog__get_closeBtnPath(
        ServantCoinConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18B42 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15810/*"Window/CloseButton"*/, method, v2);
    byte_4B18B42 = 1;
  }
  return (System_String_o *)StringLiteral_15810/*"Window/CloseButton"*/;
}