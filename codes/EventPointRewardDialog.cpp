void EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C21B03 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21B03 = 1;
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

  if ( (byte_4C21AFF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21AFF = 1;
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
    sub_1C2D6EC(titleLabel, method);
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

  if ( (byte_4C21B02 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventPointRewardDialog_OnClickClose__);
    byte_4C21B02 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventPointRewardDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventPointRewardDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventPointRewardDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C21B01 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventPointRewardDialog_EndOpen__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C21B01 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1C2D434(&this->fields.callback);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !closeLabel )
LABEL_11:
      sub_1C2D6EC(gameObject, v6);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0);
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
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  UILabel_o *nextTitleLabel; // x22
  UILabel_o *nextNumLabel; // x22
  System_String_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItemComponent_ClickDelegate_o *v36; // x22
  int32_t v37; // [xsp+Ch] [xbp-64h] BYREF
  int64_t v38; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C21B00 & 1) == 0 )
  {
    sub_1C2D490(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_EventPointRewardDialog_OnItemClick__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_14813/*"UNIT_REST_NONE"*/);
    sub_1C2D490(&StringLiteral_5637/*"EVENT_POINT_NEXT_NUM"*/);
    sub_1C2D490(&StringLiteral_5642/*"EVENT_POINT_REWARD_GET"*/);
    sub_1C2D490(&StringLiteral_5638/*"EVENT_POINT_NEXT_TITLE"*/);
    sub_1C2D490(&StringLiteral_5643/*"EVENT_POINT_TOTAL_NUM"*/);
    sub_1C2D490(&StringLiteral_5644/*"EVENT_POINT_TOTAL_TITLE"*/);
    byte_4C21B00 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5642/*"EVENT_POINT_REWARD_GET"*/, 0);
  v15 = System_String__Format(v14, (Il2CppObject *)itemName, 0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, v15, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_TOTAL_TITLE"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_17;
  UILabel__set_text(totalTitleLabel, v15, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5643/*"EVENT_POINT_TOTAL_NUM"*/, 0);
  v38 = totalCount;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38, v20, v21, v22);
  v37 = addCount;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v24, v25, v26);
  v15 = System_String__Format_63499156(v19, v23, v27, 0);
  if ( !totalNumLabel )
    goto LABEL_17;
  UILabel__set_text(totalNumLabel, v15, 0);
  nextTitleLabel = this->fields.nextTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5638/*"EVENT_POINT_NEXT_TITLE"*/, 0);
  if ( !nextTitleLabel )
    goto LABEL_17;
  UILabel__set_text(nextTitleLabel, v15, 0);
  nextNumLabel = this->fields.nextNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( nextCount <= 0 )
  {
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14813/*"UNIT_REST_NONE"*/, 0);
  }
  else
  {
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5637/*"EVENT_POINT_NEXT_NUM"*/, 0);
    v38 = nextCount;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38, v31, v32, v33);
    v15 = System_String__Format(v30, v34, 0);
  }
  v16 = v15;
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v15, 0),
        itemWindow = this->fields.itemWindow,
        v36 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C2D6DC(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v36,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0),
        !itemWindow) )
  {
LABEL_17:
    sub_1C2D6EC(v15, v16);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v36, 0, 0);
}