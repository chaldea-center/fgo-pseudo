void EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AABA & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596AABA = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventPointRewardDialog__EndOpen(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void EventPointRewardDialog__Init(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596AAB6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AAB6 = 1;
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
    sub_2213CDC(titleLabel, method);
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

  if ( (byte_596AAB9 & 1) == 0 )
  {
    sub_2213A60(&Method_EventPointRewardDialog_OnClickClose__);
    byte_596AAB9 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventPointRewardDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventPointRewardDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventPointRewardDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *closeLabel; // x20
  System_Action_o *v15; // x20

  if ( (byte_596AAB8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventPointRewardDialog_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_596AAB8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callback,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !closeLabel )
LABEL_11:
      sub_2213CDC(gameObject, v11);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
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
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *nextNumLabel; // x22
  int v26; // w8
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItemComponent_ClickDelegate_o *v30; // x22
  int32_t v31; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t v32; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596AAB7 & 1) == 0 )
  {
    sub_2213A60(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_EventPointRewardDialog_OnItemClick__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_15416/*"UNIT_REST_NONE"*/);
    sub_2213A60(&StringLiteral_5877/*"EVENT_POINT_NEXT_NUM"*/);
    sub_2213A60(&StringLiteral_5882/*"EVENT_POINT_REWARD_GET"*/);
    sub_2213A60(&StringLiteral_5878/*"EVENT_POINT_NEXT_TITLE"*/);
    sub_2213A60(&StringLiteral_5883/*"EVENT_POINT_TOTAL_NUM"*/);
    sub_2213A60(&StringLiteral_5884/*"EVENT_POINT_TOTAL_TITLE"*/);
    byte_596AAB7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemArray, itemName);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5882/*"EVENT_POINT_REWARD_GET"*/, 0);
  v15 = System_String__Format(v14, (Il2CppObject *)itemName, 0);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, v15, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5884/*"EVENT_POINT_TOTAL_TITLE"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_19;
  UILabel__set_text(totalTitleLabel, v15, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5883/*"EVENT_POINT_TOTAL_NUM"*/, 0);
  v32 = totalCount;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v32);
  v31 = addCount;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
  v15 = System_String__Format_75697880(v19, v20, v21, 0);
  if ( !totalNumLabel )
    goto LABEL_19;
  UILabel__set_text(totalNumLabel, v15, 0);
  nextTitleLabel = this->fields.nextTitleLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5878/*"EVENT_POINT_NEXT_TITLE"*/, 0);
  if ( !nextTitleLabel )
    goto LABEL_19;
  UILabel__set_text(nextTitleLabel, v15, 0);
  nextNumLabel = this->fields.nextNumLabel;
  v26 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( nextCount <= 0 )
  {
    if ( !v26 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"UNIT_REST_NONE"*/, 0);
  }
  else
  {
    if ( !v26 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5877/*"EVENT_POINT_NEXT_NUM"*/, 0);
    v32 = nextCount;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v32);
    v15 = System_String__Format(v27, v28, 0);
  }
  v16 = v15;
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v15, 0),
        itemWindow = this->fields.itemWindow,
        v30 = (BattleDropItemComponent_ClickDelegate_o *)sub_2213CCC(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v30,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0),
        !itemWindow) )
  {
LABEL_19:
    sub_2213CDC(v15, v16);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v30, 0, 0);
}