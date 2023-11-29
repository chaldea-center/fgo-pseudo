void __fastcall EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC66 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FAC66 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointRewardDialog__EndOpen(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void __fastcall EventPointRewardDialog__Init(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *totalTitleLabel; // x0
  UILabel_o *totalNumLabel; // x0
  UILabel_o *nextTitleLabel; // x0
  UILabel_o *nextNumLabel; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40FAC62 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FAC62 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  if ( !totalTitleLabel )
    goto LABEL_10;
  UILabel__set_text(totalTitleLabel, (System_String_o *)StringLiteral_1, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  if ( !totalNumLabel
    || (UILabel__set_text(totalNumLabel, (System_String_o *)StringLiteral_1, 0LL),
        (nextTitleLabel = this->fields.nextTitleLabel) == 0LL)
    || (UILabel__set_text(nextTitleLabel, (System_String_o *)StringLiteral_1, 0LL),
        (nextNumLabel = this->fields.nextNumLabel) == 0LL)
    || (UILabel__set_text(nextNumLabel, (System_String_o *)StringLiteral_1, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointRewardDialog__OnClickClose(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC65 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FAC65 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.state = 0;
    ActionExtensions__Call(this->fields.callback, 0LL);
  }
}


void __fastcall EventPointRewardDialog__OnItemClick(
        EventPointRewardDialog_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventPointRewardDialog__Open(
        EventPointRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v15; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20

  if ( (byte_40FAC64 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_EventPointRewardDialog_EndOpen__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_3252, v12);
    byte_40FAC64 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callback,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
    this->fields.state = 2;
    if ( !closeButton )
      goto LABEL_12;
    v15 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
    if ( !v15 )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(v15, 1, 0LL);
    closeLabel = this->fields.closeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
    if ( !closeLabel )
LABEL_12:
      sub_B170D4();
    UILabel__set_text(closeLabel, v17, 0LL);
    v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
  }
}


void __fastcall EventPointRewardDialog__SetData(
        EventPointRewardDialog_o *this,
        BattleDropItem_array *itemArray,
        System_String_o *itemName,
        int64_t totalCount,
        int32_t addCount,
        int64_t nextCount,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UILabel_o *titleLabel; // x25
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  UILabel_o *totalTitleLabel; // x24
  System_String_o *v27; // x0
  UILabel_o *totalNumLabel; // x24
  System_String_o *v29; // x25
  Il2CppObject *v30; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *nextTitleLabel; // x22
  System_String_o *v34; // x0
  UILabel_o *nextNumLabel; // x22
  System_String_o *v36; // x23
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  BattleDropItemComponent_ClickDelegate_o *v44; // x22
  int32_t v45; // [xsp+Ch] [xbp-54h] BYREF
  int64_t v46; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FAC63 & 1) == 0 )
  {
    sub_B16FFC(&BattleDropItemComponent_ClickDelegate_TypeInfo, itemArray);
    sub_B16FFC(&Method_EventPointRewardDialog_OnItemClick__, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&long_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_14656, v17);
    sub_B16FFC(&StringLiteral_5642, v18);
    sub_B16FFC(&StringLiteral_5647, v19);
    sub_B16FFC(&StringLiteral_5643, v20);
    sub_B16FFC(&StringLiteral_5648, v21);
    sub_B16FFC(&StringLiteral_5649, v22);
    byte_40FAC63 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5647, 0LL);
  v25 = System_String__Format(v24, (Il2CppObject *)itemName, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, v25, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5649, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_22;
  UILabel__set_text(totalTitleLabel, v27, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5648, 0LL);
  v46 = totalCount;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46);
  v45 = addCount;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v32 = System_String__Format_43739268(v29, v30, v31, 0LL);
  if ( !totalNumLabel )
    goto LABEL_22;
  UILabel__set_text(totalNumLabel, v32, 0LL);
  nextTitleLabel = this->fields.nextTitleLabel;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5643, 0LL);
  if ( !nextTitleLabel )
    goto LABEL_22;
  UILabel__set_text(nextTitleLabel, v34, 0LL);
  nextNumLabel = this->fields.nextNumLabel;
  if ( nextCount <= 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_14656, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5642, 0LL);
    v46 = nextCount;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46);
    v38 = System_String__Format(v36, v37, 0LL);
  }
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v38, 0LL),
        itemWindow = this->fields.itemWindow,
        v44 = (BattleDropItemComponent_ClickDelegate_o *)sub_B170CC(
                                                           BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                           v40,
                                                           v41,
                                                           v42,
                                                           v43),
        BattleDropItemComponent_ClickDelegate___ctor(
          v44,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0LL),
        !itemWindow) )
  {
LABEL_22:
    sub_B170D4();
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v44, 0, 0LL);
}