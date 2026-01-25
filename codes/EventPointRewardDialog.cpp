void EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CE8E2C & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE8E2C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventPointRewardDialog__EndOpen(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void EventPointRewardDialog__Init(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CE8E28 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE8E28 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.totalTitleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.totalNumLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.nextTitleLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.nextNumLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_10:
    sub_1C7BD40(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventPointRewardDialog__OnClickClose(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *callback; // x0

  if ( (byte_4CE8E2B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_EventPointRewardDialog_OnClickClose__);
    byte_4CE8E2B = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventPointRewardDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventPointRewardDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_EventPointRewardDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    callback = this->fields.callback;
    this->fields.state = 0;
    ActionExtensions__Call(callback, 0);
  }
}


void EventPointRewardDialog__OnItemClick(
        EventPointRewardDialog_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  ;
}


void EventPointRewardDialog__Open(EventPointRewardDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UILabel_o *closeLabel; // x20
  System_Action_o *v8; // x20

  if ( (byte_4CE8E2A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventPointRewardDialog_EndOpen__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CE8E2A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1C7BA8C(&this->fields.callback, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    this->fields.state = 2;
    if ( !gameObject )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !closeLabel )
LABEL_11:
      sub_1C7BD40(gameObject, v6);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0, 0);
  }
}


void EventPointRewardDialog__SetData(
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
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  UILabel_o *nextTitleLabel; // x22
  UILabel_o *nextNumLabel; // x22
  System_String_o *v24; // x23
  Il2CppObject *v25; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItemComponent_ClickDelegate_o *v27; // x22
  int32_t v28; // [xsp+Ch] [xbp-64h] BYREF
  int64_t v29; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CE8E29 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_EventPointRewardDialog_OnItemClick__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_14879/*"UNIT_REST_NONE"*/);
    sub_1C7BAE8(&StringLiteral_5654/*"EVENT_POINT_NEXT_NUM"*/);
    sub_1C7BAE8(&StringLiteral_5659/*"EVENT_POINT_REWARD_GET"*/);
    sub_1C7BAE8(&StringLiteral_5655/*"EVENT_POINT_NEXT_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_5660/*"EVENT_POINT_TOTAL_NUM"*/);
    sub_1C7BAE8(&StringLiteral_5661/*"EVENT_POINT_TOTAL_TITLE"*/);
    byte_4CE8E29 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_POINT_REWARD_GET"*/, 0);
  v15 = System_String__Format(v14, (Il2CppObject *)itemName, 0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, v15, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_POINT_TOTAL_TITLE"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_17;
  UILabel__set_text(totalTitleLabel, v15, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_POINT_TOTAL_NUM"*/, 0);
  v29 = totalCount;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29);
  v28 = addCount;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v15 = System_String__Format_64218220(v19, v20, v21, 0);
  if ( !totalNumLabel )
    goto LABEL_17;
  UILabel__set_text(totalNumLabel, v15, 0);
  nextTitleLabel = this->fields.nextTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_POINT_NEXT_TITLE"*/, 0);
  if ( !nextTitleLabel )
    goto LABEL_17;
  UILabel__set_text(nextTitleLabel, v15, 0);
  nextNumLabel = this->fields.nextNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( nextCount <= 0 )
  {
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14879/*"UNIT_REST_NONE"*/, 0);
  }
  else
  {
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5654/*"EVENT_POINT_NEXT_NUM"*/, 0);
    v29 = nextCount;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29);
    v15 = System_String__Format(v24, v25, 0);
  }
  v16 = v15;
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v15, 0),
        itemWindow = this->fields.itemWindow,
        v27 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C7BD34(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v27,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0),
        !itemWindow) )
  {
LABEL_17:
    sub_1C7BD40(v15, v16);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v27, 0, 0);
}