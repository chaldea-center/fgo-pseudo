void __fastcall EventPointRewardDialog___ctor(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8DDD & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8DDD = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E8DD9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E8DD9 = 1;
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
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointRewardDialog__OnClickClose(EventPointRewardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8DDC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8DDC = 1;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UILabel_o *closeLabel; // x20
  System_Action_o *v22; // x20

  if ( (byte_42E8DDB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventPointRewardDialog_EndOpen__, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v16, v17, v18);
    byte_42E8DDB = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B5D560(
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !closeLabel )
LABEL_12:
      sub_B5D69C(gameObject, v20);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  UILabel_o *titleLabel; // x25
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x1
  UILabel_o *totalTitleLabel; // x24
  UILabel_o *totalNumLabel; // x24
  System_String_o *v49; // x25
  Il2CppObject *v50; // x23
  Il2CppObject *v51; // x0
  UILabel_o *nextTitleLabel; // x22
  UILabel_o *nextNumLabel; // x22
  System_String_o *v54; // x23
  Il2CppObject *v55; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItemComponent_ClickDelegate_o *v57; // x22
  int32_t v58; // [xsp+Ch] [xbp-54h] BYREF
  int64_t v59; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42E8DDA & 1) == 0 )
  {
    sub_B5D5C4(&BattleDropItemComponent_ClickDelegate_TypeInfo, (_DWORD)itemArray, (_DWORD)itemName, totalCount);
    sub_B5D5C4(&Method_EventPointRewardDialog_OnItemClick__, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&long_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_14873/*"UNIT_REST_NONE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_5735/*"EVENT_POINT_NEXT_NUM"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_5740/*"EVENT_POINT_REWARD_GET"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_5736/*"EVENT_POINT_NEXT_TITLE"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_5741/*"EVENT_POINT_TOTAL_NUM"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_5742/*"EVENT_POINT_TOTAL_TITLE"*/, v40, v41, v42);
    byte_42E8DDA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EVENT_POINT_REWARD_GET"*/, 0LL);
  v45 = System_String__Format(v44, (Il2CppObject *)itemName, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, v45, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5742/*"EVENT_POINT_TOTAL_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_22;
  UILabel__set_text(totalTitleLabel, v45, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5741/*"EVENT_POINT_TOTAL_NUM"*/, 0LL);
  v59 = totalCount;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v59);
  v58 = addCount;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v45 = System_String__Format_44573324(v49, v50, v51, 0LL);
  if ( !totalNumLabel )
    goto LABEL_22;
  UILabel__set_text(totalNumLabel, v45, 0LL);
  nextTitleLabel = this->fields.nextTitleLabel;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5736/*"EVENT_POINT_NEXT_TITLE"*/, 0LL);
  if ( !nextTitleLabel )
    goto LABEL_22;
  UILabel__set_text(nextTitleLabel, v45, 0LL);
  nextNumLabel = this->fields.nextNumLabel;
  if ( nextCount <= 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_14873/*"UNIT_REST_NONE"*/, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_5735/*"EVENT_POINT_NEXT_NUM"*/, 0LL);
    v59 = nextCount;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v59);
    v45 = System_String__Format(v54, v55, 0LL);
  }
  v46 = v45;
  if ( !nextNumLabel
    || (UILabel__set_text(nextNumLabel, v45, 0LL),
        itemWindow = this->fields.itemWindow,
        v57 = (BattleDropItemComponent_ClickDelegate_o *)sub_B5D694(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v57,
          (Il2CppObject *)this,
          Method_EventPointRewardDialog_OnItemClick__,
          0LL),
        !itemWindow) )
  {
LABEL_22:
    sub_B5D69C(v45, v46);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, itemArray, v57, 0, 0LL);
}