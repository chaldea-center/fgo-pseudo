void EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C321D2 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C321D2 = 1;
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

  if ( (byte_4C321CE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C321CE = 1;
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
    sub_1C32E7C(titleLabel);
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

  if ( (byte_4C321D1 & 1) == 0 )
  {
    sub_1C32C20(&Method_EventPointRewardDialog_OnClickClose__);
    byte_4C321D1 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventPointRewardDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventPointRewardDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventPointRewardDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  UILabel_o *closeLabel; // x20
  System_Action_o *v7; // x20

  if ( (byte_4C321D0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventPointRewardDialog_EndOpen__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C321D0 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1C32BC4(&this->fields.callback, callback);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !closeLabel )
LABEL_11:
      sub_1C32E7C(gameObject);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0, 0);
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
  UILabel_o *totalTitleLabel; // x24
  UILabel_o *totalNumLabel; // x24
  System_String_o *v18; // x25
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  UILabel_o *nextTitleLabel; // x22
  UILabel_o *nextNumLabel; // x22
  System_String_o *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItemComponent_ClickDelegate_o *v44; // x22
  int32_t v45; // [xsp+Ch] [xbp-64h] BYREF
  int64_t v46; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C321CF & 1) == 0 )
  {
    sub_1C32C20(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_EventPointRewardDialog_OnItemClick__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_14816/*"UNIT_REST_NONE"*/);
    sub_1C32C20(&StringLiteral_5645/*"EVENT_POINT_NEXT_NUM"*/);
    sub_1C32C20(&StringLiteral_5650/*"EVENT_POINT_REWARD_GET"*/);
    sub_1C32C20(&StringLiteral_5646/*"EVENT_POINT_NEXT_TITLE"*/);
    sub_1C32C20(&StringLiteral_5651/*"EVENT_POINT_TOTAL_NUM"*/);
    sub_1C32C20(&StringLiteral_5652/*"EVENT_POINT_TOTAL_TITLE"*/);
    byte_4C321CF = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5650/*"EVENT_POINT_REWARD_GET"*/, 0);
  v15 = System_String__Format(v14, (Il2CppObject *)itemName, 0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, v15, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_POINT_TOTAL_TITLE"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_17;
  UILabel__set_text(totalTitleLabel, v15, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_TOTAL_NUM"*/, 0);
  v46 = totalCount;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v19, v20, v21, v22, v23, v24);
  v45 = addCount;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v26, v27, v28, v29, v30, v31);
  v15 = System_String__Format_63559836(v18, v25, v32, 0);
  if ( !totalNumLabel )
    goto LABEL_17;
  UILabel__set_text(totalNumLabel, v15, 0);
  nextTitleLabel = this->fields.nextTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5646/*"EVENT_POINT_NEXT_TITLE"*/, 0);
  if ( !nextTitleLabel )
    goto LABEL_17;
  UILabel__set_text(nextTitleLabel, v15, 0);
  nextNumLabel = this->fields.nextNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( nextCount <= 0 )
  {
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14816/*"UNIT_REST_NONE"*/, 0);
  }
  else
  {
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_POINT_NEXT_NUM"*/, 0);
    v46 = nextCount;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v36, v37, v38, v39, v40, v41);
    v15 = System_String__Format(v35, v42, 0);
  }
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v15, 0),
        itemWindow = this->fields.itemWindow,
        v44 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C32E6C(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v44,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0),
        !itemWindow) )
  {
LABEL_17:
    sub_1C32E7C(v15);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v44, 0, 0);
}