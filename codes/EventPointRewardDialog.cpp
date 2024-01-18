void __fastcall EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_41878F7 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_41878F7 = 1;
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

  if ( (byte_41878F3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41878F3 = 1;
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
    sub_B2C434(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointRewardDialog__OnClickClose(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_41878F6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41878F6 = 1;
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
  __int64 v14; // x1
  UILabel_o *closeLabel; // x20
  System_Action_o *v16; // x20

  if ( (byte_41878F5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_EventPointRewardDialog_EndOpen__, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_41878F5 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B2C2F8(
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !closeLabel )
LABEL_12:
      sub_B2C434(gameObject, v14);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
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
  System_String_o *v26; // x1
  UILabel_o *totalTitleLabel; // x24
  UILabel_o *totalNumLabel; // x24
  System_String_o *v29; // x25
  Il2CppObject *v30; // x23
  Il2CppObject *v31; // x0
  UILabel_o *nextTitleLabel; // x22
  UILabel_o *nextNumLabel; // x22
  System_String_o *v34; // x23
  Il2CppObject *v35; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItemComponent_ClickDelegate_o *v37; // x22
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF
  int64_t v39; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_41878F4 & 1) == 0 )
  {
    sub_B2C35C(&BattleDropItemComponent_ClickDelegate_TypeInfo, itemArray);
    sub_B2C35C(&Method_EventPointRewardDialog_OnItemClick__, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&long_TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_14716/*"UNIT_REST_NONE"*/, v17);
    sub_B2C35C(&StringLiteral_5658/*"EVENT_POINT_NEXT_NUM"*/, v18);
    sub_B2C35C(&StringLiteral_5663/*"EVENT_POINT_REWARD_GET"*/, v19);
    sub_B2C35C(&StringLiteral_5659/*"EVENT_POINT_NEXT_TITLE"*/, v20);
    sub_B2C35C(&StringLiteral_5664/*"EVENT_POINT_TOTAL_NUM"*/, v21);
    sub_B2C35C(&StringLiteral_5665/*"EVENT_POINT_TOTAL_TITLE"*/, v22);
    byte_41878F4 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_POINT_REWARD_GET"*/, 0LL);
  v25 = System_String__Format(v24, (Il2CppObject *)itemName, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, v25, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5665/*"EVENT_POINT_TOTAL_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_22;
  UILabel__set_text(totalTitleLabel, v25, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5664/*"EVENT_POINT_TOTAL_NUM"*/, 0LL);
  v39 = totalCount;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39);
  v38 = addCount;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v25 = System_String__Format_44301068(v29, v30, v31, 0LL);
  if ( !totalNumLabel )
    goto LABEL_22;
  UILabel__set_text(totalNumLabel, v25, 0LL);
  nextTitleLabel = this->fields.nextTitleLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_POINT_NEXT_TITLE"*/, 0LL);
  if ( !nextTitleLabel )
    goto LABEL_22;
  UILabel__set_text(nextTitleLabel, v25, 0LL);
  nextNumLabel = this->fields.nextNumLabel;
  if ( nextCount <= 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_14716/*"UNIT_REST_NONE"*/, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_POINT_NEXT_NUM"*/, 0LL);
    v39 = nextCount;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39);
    v25 = System_String__Format(v34, v35, 0LL);
  }
  v26 = v25;
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v25, 0LL),
        itemWindow = this->fields.itemWindow,
        v37 = (BattleDropItemComponent_ClickDelegate_o *)sub_B2C42C(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v37,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0LL),
        !itemWindow) )
  {
LABEL_22:
    sub_B2C434(v25, v26);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v37, 0, 0LL);
}