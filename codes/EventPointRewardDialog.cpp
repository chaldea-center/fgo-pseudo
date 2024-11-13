void __fastcall EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1114B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1114B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointRewardDialog__EndOpen(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void __fastcall EventPointRewardDialog__Init(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B11147 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11147 = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointRewardDialog__OnClickClose(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *callback; // x0

  if ( (byte_4B1114A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventPointRewardDialog_OnClickClose__, method, v2);
    byte_4B1114A = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_EventPointRewardDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventPointRewardDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventPointRewardDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    callback = this->fields.callback;
    this->fields.state = 0;
    ActionExtensions__Call(callback, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *closeLabel; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_4B11149 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_EventPointRewardDialog_EndOpen__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v9, v10);
    byte_4B11149 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1BCA784(&this->fields.callback, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    this->fields.state = 2;
    if ( !gameObject )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    closeLabel = this->fields.closeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !closeLabel )
LABEL_11:
      sub_1BCAA3C(gameObject, v12);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  UILabel_o *titleLabel; // x25
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x1
  UILabel_o *totalTitleLabel; // x24
  UILabel_o *totalNumLabel; // x24
  System_String_o *v39; // x25
  Il2CppObject *v40; // x23
  Il2CppObject *v41; // x0
  UILabel_o *nextTitleLabel; // x22
  __int64 v43; // x1
  UILabel_o *nextNumLabel; // x22
  System_String_o *v45; // x23
  Il2CppObject *v46; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  BattleDropItemComponent_ClickDelegate_o *v51; // x22
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF
  int64_t v53; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B11148 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDropItemComponent_ClickDelegate_TypeInfo, itemArray, itemName);
    sub_1BCA7E0(&Method_EventPointRewardDialog_OnItemClick__, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&long_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_14966/*"UNIT_REST_NONE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_5735/*"EVENT_POINT_NEXT_NUM"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_5740/*"EVENT_POINT_REWARD_GET"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_5736/*"EVENT_POINT_NEXT_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_5741/*"EVENT_POINT_TOTAL_NUM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_5742/*"EVENT_POINT_TOTAL_TITLE"*/, v31, v32);
    byte_4B11148 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemArray);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EVENT_POINT_REWARD_GET"*/, 0LL);
  v35 = System_String__Format(v34, (Il2CppObject *)itemName, 0LL);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, v35, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5742/*"EVENT_POINT_TOTAL_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_17;
  UILabel__set_text(totalTitleLabel, v35, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5741/*"EVENT_POINT_TOTAL_NUM"*/, 0LL);
  v53 = totalCount;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v53);
  v52 = addCount;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v35 = System_String__Format_62415592(v39, v40, v41, 0LL);
  if ( !totalNumLabel )
    goto LABEL_17;
  UILabel__set_text(totalNumLabel, v35, 0LL);
  nextTitleLabel = this->fields.nextTitleLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5736/*"EVENT_POINT_NEXT_TITLE"*/, 0LL);
  if ( !nextTitleLabel )
    goto LABEL_17;
  UILabel__set_text(nextTitleLabel, v35, 0LL);
  nextNumLabel = this->fields.nextNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  if ( nextCount <= 0 )
  {
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_14966/*"UNIT_REST_NONE"*/, 0LL);
  }
  else
  {
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5735/*"EVENT_POINT_NEXT_NUM"*/, 0LL);
    v53 = nextCount;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v53);
    v35 = System_String__Format(v45, v46, 0LL);
  }
  v36 = v35;
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v35, 0LL),
        itemWindow = this->fields.itemWindow,
        v51 = (BattleDropItemComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                           BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                           v48,
                                                           v49,
                                                           v50),
        BattleDropItemComponent_ClickDelegate___ctor(
          v51,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0LL),
        !itemWindow) )
  {
LABEL_17:
    sub_1BCAA3C(v35, v36);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v51, 0, 0LL);
}