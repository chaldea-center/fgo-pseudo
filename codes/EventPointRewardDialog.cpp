void __fastcall EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4352563 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4352563 = 1;
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

  if ( (byte_435255F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435255F = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.totalTitleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.totalNumLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.nextTitleLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.nextNumLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_10:
    sub_B7076C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointRewardDialog__OnClickClose(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4352562 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352562 = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UILabel_o *closeLabel; // x20
  System_Action_o *v13; // x20

  if ( (byte_4352561 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventPointRewardDialog_EndOpen__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4352561 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B70630(
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
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    this->fields.state = 2;
    if ( !gameObject )
      goto LABEL_12;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    closeLabel = this->fields.closeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !closeLabel )
LABEL_12:
      sub_B7076C(gameObject, v11);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
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
  UILabel_o *titleLabel; // x25
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x1
  UILabel_o *totalTitleLabel; // x24
  UILabel_o *totalNumLabel; // x24
  System_String_o *v19; // x25
  __int64 v20; // x2
  Il2CppObject *v21; // x23
  __int64 v22; // x2
  Il2CppObject *v23; // x0
  UILabel_o *nextTitleLabel; // x22
  UILabel_o *nextNumLabel; // x22
  System_String_o *v26; // x23
  __int64 v27; // x2
  Il2CppObject *v28; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItemComponent_ClickDelegate_o *v30; // x22
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF
  int64_t v32; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4352560 & 1) == 0 )
  {
    sub_B70694(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_B70694(&Method_EventPointRewardDialog_OnItemClick__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_14901/*"UNIT_REST_NONE"*/);
    sub_B70694(&StringLiteral_5747/*"EVENT_POINT_NEXT_NUM"*/);
    sub_B70694(&StringLiteral_5752/*"EVENT_POINT_REWARD_GET"*/);
    sub_B70694(&StringLiteral_5748/*"EVENT_POINT_NEXT_TITLE"*/);
    sub_B70694(&StringLiteral_5753/*"EVENT_POINT_TOTAL_NUM"*/);
    sub_B70694(&StringLiteral_5754/*"EVENT_POINT_TOTAL_TITLE"*/);
    byte_4352560 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5752/*"EVENT_POINT_REWARD_GET"*/, 0LL);
  v15 = System_String__Format(v14, (Il2CppObject *)itemName, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, v15, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5754/*"EVENT_POINT_TOTAL_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_22;
  UILabel__set_text(totalTitleLabel, v15, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5753/*"EVENT_POINT_TOTAL_NUM"*/, 0LL);
  v32 = totalCount;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32, v20);
  v31 = addCount;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v22);
  v15 = System_String__Format_44753704(v19, v21, v23, 0LL);
  if ( !totalNumLabel )
    goto LABEL_22;
  UILabel__set_text(totalNumLabel, v15, 0LL);
  nextTitleLabel = this->fields.nextTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5748/*"EVENT_POINT_NEXT_TITLE"*/, 0LL);
  if ( !nextTitleLabel )
    goto LABEL_22;
  UILabel__set_text(nextTitleLabel, v15, 0LL);
  nextNumLabel = this->fields.nextNumLabel;
  if ( nextCount <= 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14901/*"UNIT_REST_NONE"*/, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5747/*"EVENT_POINT_NEXT_NUM"*/, 0LL);
    v32 = nextCount;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32, v27);
    v15 = System_String__Format(v26, v28, 0LL);
  }
  v16 = v15;
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v15, 0LL),
        itemWindow = this->fields.itemWindow,
        v30 = (BattleDropItemComponent_ClickDelegate_o *)sub_B70764(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v30,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0LL),
        !itemWindow) )
  {
LABEL_22:
    sub_B7076C(v15, v16);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v30, 0, 0LL);
}