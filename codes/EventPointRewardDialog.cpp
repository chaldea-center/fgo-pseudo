void __fastcall EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A0CDDF & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A0CDDF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A0CDDB & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A0CDDB = 1;
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
    sub_1B68930(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointRewardDialog__OnClickClose(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *callback; // x0

  if ( (byte_4A0CDDE & 1) == 0 )
  {
    sub_1B686D4(&Method_EventPointRewardDialog_OnClickClose__, method);
    byte_4A0CDDE = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventPointRewardDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventPointRewardDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_EventPointRewardDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UILabel_o *closeLabel; // x20
  System_Action_o *v12; // x20

  if ( (byte_4A0CDDD & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_EventPointRewardDialog_EndOpen__, v6);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_3732/*"COMMON_CONFIRM_CLOSE"*/, v8);
    byte_4A0CDDD = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callback, (int32_t)callback, (int32_t)method, v3);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !closeLabel )
LABEL_11:
      sub_1B68930(gameObject, v10);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    v12 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_EventPointRewardDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
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
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  UILabel_o *nextTitleLabel; // x22
  UILabel_o *nextNumLabel; // x22
  System_String_o *v40; // x23
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItemComponent_ClickDelegate_o *v46; // x22
  int32_t v47; // [xsp+Ch] [xbp-64h] BYREF
  int64_t v48; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A0CDDC & 1) == 0 )
  {
    sub_1B686D4(&BattleDropItemComponent_ClickDelegate_TypeInfo, itemArray);
    sub_1B686D4(&Method_EventPointRewardDialog_OnItemClick__, v13);
    sub_1B686D4(&int_TypeInfo, v14);
    sub_1B686D4(&long_TypeInfo, v15);
    sub_1B686D4(&LocalizationManager_TypeInfo, v16);
    sub_1B686D4(&StringLiteral_14736/*"UNIT_REST_NONE"*/, v17);
    sub_1B686D4(&StringLiteral_5626/*"EVENT_POINT_NEXT_NUM"*/, v18);
    sub_1B686D4(&StringLiteral_5631/*"EVENT_POINT_REWARD_GET"*/, v19);
    sub_1B686D4(&StringLiteral_5627/*"EVENT_POINT_NEXT_TITLE"*/, v20);
    sub_1B686D4(&StringLiteral_5632/*"EVENT_POINT_TOTAL_NUM"*/, v21);
    sub_1B686D4(&StringLiteral_5633/*"EVENT_POINT_TOTAL_TITLE"*/, v22);
    byte_4A0CDDC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5631/*"EVENT_POINT_REWARD_GET"*/, 0LL);
  v25 = System_String__Format(v24, (Il2CppObject *)itemName, 0LL);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, v25, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5633/*"EVENT_POINT_TOTAL_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_17;
  UILabel__set_text(totalTitleLabel, v25, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5632/*"EVENT_POINT_TOTAL_NUM"*/, 0LL);
  v48 = totalCount;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v48, v30, v31, v32);
  v47 = addCount;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v34, v35, v36);
  v25 = System_String__Format_61433840(v29, v33, v37, 0LL);
  if ( !totalNumLabel )
    goto LABEL_17;
  UILabel__set_text(totalNumLabel, v25, 0LL);
  nextTitleLabel = this->fields.nextTitleLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5627/*"EVENT_POINT_NEXT_TITLE"*/, 0LL);
  if ( !nextTitleLabel )
    goto LABEL_17;
  UILabel__set_text(nextTitleLabel, v25, 0LL);
  nextNumLabel = this->fields.nextNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( nextCount <= 0 )
  {
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_14736/*"UNIT_REST_NONE"*/, 0LL);
  }
  else
  {
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5626/*"EVENT_POINT_NEXT_NUM"*/, 0LL);
    v48 = nextCount;
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v48, v41, v42, v43);
    v25 = System_String__Format(v40, v44, 0LL);
  }
  v26 = v25;
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v25, 0LL),
        itemWindow = this->fields.itemWindow,
        v46 = (BattleDropItemComponent_ClickDelegate_o *)sub_1B68920(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v46,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0LL),
        !itemWindow) )
  {
LABEL_17:
    sub_1B68930(v25, v26);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v46, 0, 0LL);
}