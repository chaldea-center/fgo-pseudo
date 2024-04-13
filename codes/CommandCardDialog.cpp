void __fastcall CommandCardDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct CommandCardDialog_StaticFields *static_fields; // x9
  int32x2_t *v5; // x8

  if ( (byte_42E8B7B & 1) == 0 )
  {
    sub_B5D5C4(&CommandCardDialog_TypeInfo, v1, v2, v3);
    byte_42E8B7B = 1;
  }
  CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM = 1;
  static_fields = CommandCardDialog_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->UNLOCK_ITEM_SCALE.fields.x = vdup_n_s32(0x3F19999Au);
  static_fields->UNLOCK_ITEM_SCALE.fields.z = 0.6;
  v5 = (int32x2_t *)CommandCardDialog_TypeInfo->static_fields;
  v5[2].n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v5[3].n64_u32[0] = 1060320051;
}


void __fastcall CommandCardDialog___ctor(CommandCardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8B7A & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8B7A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_25486104(this, 0LL, v2);
}


void __fastcall CommandCardDialog__Close_25486104(
        CommandCardDialog_o *this,
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o *v19; // x20

  if ( (byte_42E8B76 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CommandCardDialog_EndClose__, v10, v11, v12);
    byte_42E8B76 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v13, v14, v15, v16, v17, v18);
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_CommandCardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
}


void __fastcall CommandCardDialog__EndClose(CommandCardDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  CommandCardDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall CommandCardDialog__EndOpen(CommandCardDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CommandCardDialog__GetSkillInfo(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        int32_t *skillId,
        System_String_o **skillName,
        System_String_o **skillDetail,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *v26; // x1
  System_String_o *MargeExplanation_26826256; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0
  System_String_array *explanationList; // [xsp+0h] [xbp-40h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E8B75 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)userCommandCode, (_DWORD)skillId, skillName);
    byte_42E8B75 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)skillName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)skillId,
    (System_String_array **)skillName,
    (System_Boolean_array **)skillDetail,
    (System_Int32_array **)method,
    v6,
    v7);
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)skillDetail,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !userCommandCode )
    goto LABEL_9;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  *skillId = idList->m_Items[1];
  if ( !titleList )
LABEL_9:
    sub_B5D69C(v18, v19);
  if ( !titleList->max_length )
  {
LABEL_10:
    v34 = sub_B5D6C8(v18);
    sub_B5D668(v34, 0LL);
  }
  v26 = titleList->m_Items[0];
  *skillName = v26;
  sub_B5D560((BattleServantConfConponent_o *)skillName, (System_Int32_array **)v26, v20, v21, v22, v23, v24, v25);
  MargeExplanation_26826256 = SkillInfo__GetMargeExplanation_26826256(explanationList, 0LL);
  *skillDetail = MargeExplanation_26826256;
  sub_B5D560(
    (BattleServantConfConponent_o *)skillDetail,
    (System_Int32_array **)MargeExplanation_26826256,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall CommandCardDialog__Init(CommandCardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *titleLabel; // x0
  int32_t v9; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v11; // w20
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w20
  UnityEngine_Object_o *v14; // x21

  if ( (byte_42E8B70 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E8B70 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.equipmentWarningLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.removeWarningLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.itemInfoLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeButtonLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.haveQpLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.haveQpTxtLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.spendQpLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.spendQpTxtLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.haveItemTxtLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.haveItemNumLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.spendItemTxtLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.spendItemNumLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.overwriteCommandCodeWarningLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.equipedCommandCodeSkillName;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.equipedCommandCodeSkillDetail;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.overwriteCommandCodeSkillName;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.overwriteCommandCodeSkillDetail;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.answerBackLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.lockResultLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.itemNumLabel;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.canExecuteButtonsObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.canNotExecuteButtonObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
  if ( !titleLabel )
    goto LABEL_69;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  v9 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
      titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v9, 0LL);
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)titleLabel,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
      if ( --v9 < 0 )
        goto LABEL_40;
    }
LABEL_69:
    sub_B5D69C(titleLabel, method);
  }
LABEL_40:
  titleLabel = (UILabel_o *)this->fields.removeItemGrid;
  if ( !titleLabel )
    goto LABEL_69;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  v11 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v11 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.removeItemGrid;
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v11, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v12, 0LL);
    }
    while ( --v11 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.returnItemGrid;
  if ( !titleLabel )
    goto LABEL_69;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  v13 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v13 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.returnItemGrid;
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v13, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v14, 0LL);
    }
    while ( --v13 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.equipmentCommandCardObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.unlockInfoObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.removeCommandCardSlotObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.warningCommandCodeObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.overwriteCommandCodeObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.lockResultInfoObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.removeCommandCodeConfirmObj;
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardDialog__OnClickCancel(CommandCardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0

  if ( (byte_42E8B78 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8B78 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.closeFunc) == 0LL) )
    {
      sub_B5D69C(removeItemGrid, v5);
    }
    CommandCardDialog_ClickDelegate__Invoke((CommandCardDialog_ClickDelegate_o *)removeItemGrid, 0, 0LL);
  }
}


void __fastcall CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0

  if ( (byte_42E8B77 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8B77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.closeFunc) == 0LL) )
    {
      sub_B5D69C(removeItemGrid, v5);
    }
    CommandCardDialog_ClickDelegate__Invoke((CommandCardDialog_ClickDelegate_o *)removeItemGrid, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__OpenLockCommandCardResult(
        CommandCardDialog_o *this,
        UserServantEntity_o *baseUserServantEntity,
        int32_t cardIdx,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int64_t Instance; // x0
  __int64 v64; // x1
  ServantCommandCodeUnlockMaster_o *v65; // x23
  __int64 v66; // x22
  __int64 v67; // x24
  __int64 v68; // x23
  struct UnityEngine_GameObject_o *releaseItemObj; // x21
  UnityEngine_GameObject_o *v70; // x21
  UnityEngine_Transform_o *v71; // x22
  UnityEngine_Transform_o *transform; // x22
  int v73; // s0
  UnityEngine_Transform_o *v76; // x22
  int v77; // s0
  UnityEngine_Transform_o *v81; // x22
  CommandCardDialog_c *v82; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t num; // w24
  Il2CppObject *age; // x21
  UILabel_o *lockResultLabel; // x22
  System_String_o *v87; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v89; // x22
  Il2CppObject *v90; // x23
  Il2CppObject *v91; // x0
  UILabel_o *closeButtonLabel; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Action_o *v99; // x20
  __int64 v100; // x0
  int32_t v101; // [xsp+0h] [xbp-50h] BYREF
  int v102; // [xsp+4h] [xbp-4Ch] BYREF
  WarEntity_o *v103; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_42E8B72 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseUserServantEntity, cardIdx, closeCallback);
    sub_B5D5C4(&Method_CommandCardDialog_EndOpen__, v9, v10, v11);
    sub_B5D5C4(&CommandCardDialog_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v27, v28, v29);
    sub_B5D5C4(&int_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_3298/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_3299/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_1/*""*/, v60, v61, v62);
    byte_42E8B72 = 1;
  }
  entity = 0LL;
  v103 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_65;
  v65 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v67 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v105.fields.currentCryptoKey = v67;
  *(_QWORD *)&v105.fields.fakeValue = v66;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v105, 0LL);
  if ( !v65 )
    goto LABEL_65;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v65, Instance, cardIdx, 0LL);
  if ( !Instance )
    goto LABEL_65;
  v68 = *(_QWORD *)(Instance + 40);
  releaseItemObj = this->fields.releaseItemObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (int64_t)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_65;
  v70 = (UnityEngine_GameObject_o *)Instance;
  Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.returnItemGrid )
    goto LABEL_65;
  v71 = (UnityEngine_Transform_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0LL);
  if ( !v71 )
    goto LABEL_65;
  UnityEngine_Transform__set_parent(v71, (UnityEngine_Transform_o *)Instance, 0LL);
  transform = UnityEngine_GameObject__get_transform(v70, 0LL);
  *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_65;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v73, 0LL);
  v76 = UnityEngine_GameObject__get_transform(v70, 0LL);
  *(UnityEngine_Quaternion_o *)&v77 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v76 )
    goto LABEL_65;
  UnityEngine_Transform__set_localRotation(v76, *(UnityEngine_Quaternion_o *)&v77, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__get_transform(v70, 0LL);
  v81 = (UnityEngine_Transform_o *)Instance;
  v82 = CommandCardDialog_TypeInfo;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v82 = CommandCardDialog_TypeInfo;
  }
  if ( !v81 )
    goto LABEL_65;
  UnityEngine_Transform__set_localScale(v81, v82->static_fields->REMOVE_ITEM_SCALE, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        v70,
                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v68 )
    goto LABEL_65;
  if ( !*(_DWORD *)(v68 + 24) )
    goto LABEL_66;
  if ( !Instance )
    goto LABEL_65;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v68 + 32), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !*(_DWORD *)(v68 + 24) )
    goto LABEL_66;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               *(_DWORD *)(v68 + 32),
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_65;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  age = (Il2CppObject *)StringLiteral_1/*""*/;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v68 + 24) )
  {
LABEL_66:
    v100 = sub_B5D6C8(Instance);
    sub_B5D668(v100, 0LL);
  }
  if ( !Instance )
    goto LABEL_65;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v103,
               *(_DWORD *)(v68 + 32),
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v103 )
      goto LABEL_65;
    age = (Il2CppObject *)v103->fields.age;
  }
  Instance = (int64_t)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_65;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  lockResultLabel = this->fields.lockResultLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_3299/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, 0LL);
  Instance = (int64_t)System_String__Format(v87, age, 0LL);
  if ( !lockResultLabel )
    goto LABEL_65;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0LL);
  itemNumLabel = this->fields.itemNumLabel;
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_3298/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0LL);
  v102 = num - 1;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
  v101 = num;
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
  Instance = (int64_t)System_String__Format_44573324(v89, v90, v91, 0LL);
  if ( !itemNumLabel )
    goto LABEL_65;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_65;
  UILabel__set_text(closeButtonLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.unlockInfoObj;
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.equipmentCommandCardObj;
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.removeCommandCardSlotObj;
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.warningCommandCodeObj;
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.overwriteCommandCodeObj;
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.unlockItemGrid;
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.removeCommandCodeConfirmObj;
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.lockResultInfoObj;
  if ( !Instance )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.returnItemGrid;
  if ( !Instance
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (Instance = (int64_t)this->fields.returnItemGrid) == 0)
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL),
        (Instance = (int64_t)this->fields.canExecuteButtonsObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (int64_t)this->fields.canNotExecuteButtonObj) == 0) )
  {
LABEL_65:
    sub_B5D69C(Instance, v64);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  v99 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v99, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v99, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__OpenLockEquipSlot(
        CommandCardDialog_o *this,
        bool equipped,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char v22; // w1
  int v23; // w2
  __int64 v24; // x3
  char v25; // w1
  int v26; // w2
  __int64 v27; // x3
  char v28; // w1
  int v29; // w2
  __int64 v30; // x3
  char v31; // w1
  int v32; // w2
  __int64 v33; // x3
  char v34; // w1
  int v35; // w2
  __int64 v36; // x3
  char v37; // w1
  int v38; // w2
  __int64 v39; // x3
  char v40; // w1
  int v41; // w2
  __int64 v42; // x3
  char v43; // w1
  int v44; // w2
  __int64 v45; // x3
  char v46; // w1
  int v47; // w2
  __int64 v48; // x3
  char v49; // w1
  int v50; // w2
  __int64 v51; // x3
  char v52; // w1
  int v53; // w2
  __int64 v54; // x3
  char v55; // w1
  int v56; // w2
  __int64 v57; // x3
  char v58; // w1
  int v59; // w2
  __int64 v60; // x3
  char v61; // w1
  int v62; // w2
  __int64 v63; // x3
  char v64; // w1
  int v65; // w2
  __int64 v66; // x3
  char v67; // w1
  int v68; // w2
  __int64 v69; // x3
  char v70; // w1
  int v71; // w2
  __int64 v72; // x3
  char v73; // w1
  int v74; // w2
  __int64 v75; // x3
  UILabel_o *titleLabel; // x22
  int64_t transform; // x0
  System_String_o *v78; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *removeWarningLabel; // x22
  struct UILabel_o *v81; // x22
  System_String_o *mText; // x23
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  UILabel_o *spendItemTxtLabel; // x21
  UILabel_o *haveItemTxtLabel; // x21
  int32_t Value; // w0
  struct UnityEngine_GameObject_o *releaseItemObj; // x22
  int32_t v89; // w21
  UnityEngine_GameObject_o *v90; // x22
  UnityEngine_Transform_o *v91; // x23
  UnityEngine_Transform_o *v92; // x23
  int v93; // s0
  UnityEngine_Transform_o *v96; // x23
  int v97; // s0
  UnityEngine_Transform_o *v101; // x23
  CommandCardDialog_c *v102; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v106; // x0
  CommandCardDialog_c *v107; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v109; // x0
  int32_t v110; // w21
  UILabel_o *v111; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v113; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Action_o *v122; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+0h] [xbp-50h] BYREF
  int32_t v124; // [xsp+4h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8B73 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, equipped, (_DWORD)closeCallback, method);
    sub_B5D5C4(&Method_CommandCardDialog_EndOpen__, v7, v8, v9);
    sub_B5D5C4(&CommandCardDialog_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v16, v17, v18);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3295/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3300/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_3296/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_3294/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_3302/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_3301/*"COMMAND_CODE_LOCK_TITLE"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_3297/*"COMMAND_CODE_LOCK_MSG"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_1/*""*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_3290/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v73, v74, v75);
    byte_42E8B73 = 1;
  }
  entity = 0LL;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3301/*"COMMAND_CODE_LOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_88;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0LL);
  messageLabel = this->fields.messageLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3297/*"COMMAND_CODE_LOCK_MSG"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_88;
  UILabel__set_text(messageLabel, (System_String_o *)transform, 0LL);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( equipped )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, 0LL);
    v78 = (System_String_o *)transform;
    if ( !removeWarningLabel )
      goto LABEL_88;
  }
  else
  {
    v78 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !removeWarningLabel )
      goto LABEL_88;
  }
  UILabel__set_text(removeWarningLabel, v78, 0LL);
  v81 = this->fields.removeWarningLabel;
  if ( !v81 )
    goto LABEL_88;
  mText = v81->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, 0LL);
  v84 = System_String__Concat_44577788(mText, v83, 0LL);
  UILabel__set_text(v81, v84, 0LL);
  if ( equipped )
  {
    transform = (int64_t)this->fields.removeWarningLabel;
    if ( !transform )
      goto LABEL_88;
    UILabel__set_fontSize((UILabel_o *)transform, 20, 0LL);
  }
  spendItemTxtLabel = this->fields.spendItemTxtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3300/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, 0LL);
  if ( !spendItemTxtLabel )
    goto LABEL_88;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0LL);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3296/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, 0LL);
  if ( !haveItemTxtLabel )
    goto LABEL_88;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3290/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
  releaseItemObj = this->fields.releaseItemObj;
  v89 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (int64_t)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                         (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_88;
  v90 = (UnityEngine_GameObject_o *)transform;
  transform = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !this->fields.removeItemGrid )
    goto LABEL_88;
  v91 = (UnityEngine_Transform_o *)transform;
  transform = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0LL);
  if ( !v91 )
    goto LABEL_88;
  UnityEngine_Transform__set_parent(v91, (UnityEngine_Transform_o *)transform, 0LL);
  v92 = UnityEngine_GameObject__get_transform(v90, 0LL);
  *(UnityEngine_Vector3_o *)&v93 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v92 )
    goto LABEL_88;
  UnityEngine_Transform__set_localPosition(v92, *(UnityEngine_Vector3_o *)&v93, 0LL);
  v96 = UnityEngine_GameObject__get_transform(v90, 0LL);
  *(UnityEngine_Quaternion_o *)&v97 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v96 )
    goto LABEL_88;
  UnityEngine_Transform__set_localRotation(v96, *(UnityEngine_Quaternion_o *)&v97, 0LL);
  transform = (int64_t)UnityEngine_GameObject__get_transform(v90, 0LL);
  v101 = (UnityEngine_Transform_o *)transform;
  v102 = CommandCardDialog_TypeInfo;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v102 = CommandCardDialog_TypeInfo;
  }
  if ( !v101 )
    goto LABEL_88;
  UnityEngine_Transform__set_localScale(v101, v102->static_fields->REMOVE_ITEM_SCALE, 0LL);
  transform = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         v90,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_88;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v89, 0LL);
  transform = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)transform,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  transform = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_88;
  transform = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, transform, v89, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_88;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  haveItemNumLabel = this->fields.haveItemNumLabel;
  v124 = num;
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
  transform = (int64_t)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v106, 0LL);
  if ( !haveItemNumLabel )
    goto LABEL_88;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0LL);
  v107 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v107 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v107->static_fields->DETACH_NEED_ITEM_NUM;
  v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM);
  transform = (int64_t)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v109, 0LL);
  if ( !spendItemNumLabel )
    goto LABEL_88;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0LL);
  transform = (int64_t)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_88;
  v110 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
  transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (int64_t)this->fields.removeCommandCardSlotObj;
  if ( !transform )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (int64_t)this->fields.equipmentCommandCardObj;
  if ( !transform )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (int64_t)this->fields.unlockInfoObj;
  if ( !transform )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (int64_t)this->fields.removeItemGrid;
  if ( !transform )
    goto LABEL_88;
  transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (int64_t)this->fields.warningCommandCodeObj;
  if ( !transform )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (int64_t)this->fields.overwriteCommandCodeObj;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (int64_t)this->fields.lockResultInfoObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (int64_t)this->fields.removeCommandCodeConfirmObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (int64_t)this->fields.removeItemGrid) == 0) )
  {
LABEL_88:
    sub_B5D69C(transform, v78);
  }
  UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0LL);
  if ( num >= v110 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_88;
    UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLabel )
      goto LABEL_88;
    UILabel__set_text(cancelButtonLabel, (System_String_o *)transform, 0LL);
    transform = (int64_t)this->fields.canExecuteButtonsObj;
    if ( !transform )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    transform = (int64_t)this->fields.canNotExecuteButtonObj;
    if ( !transform )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    transform = (int64_t)this->fields.removeWarningLabel;
    if ( !transform )
      goto LABEL_88;
    transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_88;
    v113 = 1;
  }
  else
  {
    v111 = this->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3302/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, 0LL);
    if ( !v111 )
      goto LABEL_88;
    UILabel__set_text(v111, (System_String_o *)transform, 0LL);
    closeButtonLabel = this->fields.closeButtonLabel;
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !closeButtonLabel )
      goto LABEL_88;
    UILabel__set_text(closeButtonLabel, (System_String_o *)transform, 0LL);
    transform = (int64_t)this->fields.canExecuteButtonsObj;
    if ( !transform )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    transform = (int64_t)this->fields.canNotExecuteButtonObj;
    if ( !transform )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    transform = (int64_t)this->fields.removeWarningLabel;
    if ( !transform )
      goto LABEL_88;
    transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_88;
    v113 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v113, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v122 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v122, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v122, 0, 0LL);
}


void __fastcall CommandCardDialog__OpenRemoveEquip(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
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
  UILabel_o *titleLabel; // x22
  System_String_o *removeCommandCodeConfirmObj; // x0
  __int64 v30; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *removeDetailLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Action_o *v41; // x20

  if ( (byte_42E8B74 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)userCommandCode, (_DWORD)closeCallback, method);
    sub_B5D5C4(&Method_CommandCardDialog_EndOpen__, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_3310/*"COMMAND_CODE_REMOVE_TITLE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_3306/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3307/*"COMMAND_CODE_REMOVE_MSG"*/, v25, v26, v27);
    byte_42E8B74 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3310/*"COMMAND_CODE_REMOVE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0LL);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3307/*"COMMAND_CODE_REMOVE_MSG"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0LL);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, 0LL);
  if ( !removeDetailLabel )
    goto LABEL_24;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_24;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_24;
  UILabel__set_text(cancelButtonLabel, removeCommandCodeConfirmObj, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.removeCommandCodeConfirmObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 1, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.equippedCommandCardIcon;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  CombineCommandCardEquipmentComponent__SetIconNoDispStatus(
    (CombineCommandCardEquipmentComponent_o *)removeCommandCodeConfirmObj,
    userCommandCode,
    0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.messageLabel;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  removeCommandCodeConfirmObj = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)removeCommandCodeConfirmObj,
                                                     0LL);
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 1, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.equipmentCommandCardObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.unlockInfoObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.removeCommandCardSlotObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.warningCommandCodeObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.overwriteCommandCodeObj;
  if ( !removeCommandCodeConfirmObj
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL),
        (removeCommandCodeConfirmObj = (System_String_o *)this->fields.lockResultInfoObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL),
        (removeCommandCodeConfirmObj = (System_String_o *)this->fields.canExecuteButtonsObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 1, 0LL),
        (removeCommandCodeConfirmObj = (System_String_o *)this->fields.canNotExecuteButtonObj) == 0LL) )
  {
LABEL_24:
    sub_B5D69C(removeCommandCodeConfirmObj, v30);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__OpenUnlockCommandCardEquipment(
        CommandCardDialog_o *this,
        UserServantEntity_o *baseUserServantEntity,
        int32_t cardIdx,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  UILabel_o *titleLabel; // x21
  System_String_o *SelfUserGame; // x0
  __int64 v61; // x1
  UILabel_o *itemInfoLabel; // x21
  UILabel_o *spendQpTxtLabel; // x21
  UILabel_o *haveQpTxtLabel; // x21
  UILabel_o *haveQpLabel; // x24
  System_String_o *v66; // x21
  UILabel_o *decideButtonLabel; // x24
  UILabel_o *cancelButtonLabel; // x24
  ServantCommandCodeUnlockMaster_o *v69; // x24
  __int64 v70; // x23
  __int64 v71; // x25
  UILabel_o *spendQpLabel; // x23
  System_String_o *v73; // x22
  System_String_Fields fields; // x24
  __int64 v75; // x8
  _DWORD *monitor; // x27
  unsigned __int64 v77; // x25
  signed __int64 v78; // x28
  struct UnityEngine_GameObject_o *releaseItemObj; // x22
  UnityEngine_GameObject_o *v80; // x22
  UnityEngine_Transform_o *v81; // x23
  UnityEngine_Transform_o *transform; // x23
  int v83; // s0
  UnityEngine_Transform_o *v86; // x23
  int v87; // s0
  UnityEngine_Transform_o *v91; // x23
  CommandCardDialog_c *v92; // x8
  UILabel_o *answerBackLabel; // x21
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Action_o *v100; // x20
  __int64 v101; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_42E8B71 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseUserServantEntity, cardIdx, closeCallback);
    sub_B5D5C4(&Method_CommandCardDialog_EndOpen__, v8, v9, v10);
    sub_B5D5C4(&CommandCardDialog_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_3313/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_3314/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_3315/*"COMMAND_CODE_UNLOCK_TITLE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_3293/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, v56, v57, v58);
    byte_42E8B71 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3315/*"COMMAND_CODE_UNLOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, SelfUserGame, 0LL);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, 0LL);
  if ( !itemInfoLabel )
    goto LABEL_61;
  UILabel__set_text(itemInfoLabel, SelfUserGame, 0LL);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3314/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLabel )
    goto LABEL_61;
  UILabel__set_text(spendQpTxtLabel, SelfUserGame, 0LL);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLabel )
    goto LABEL_61;
  UILabel__set_text(haveQpTxtLabel, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  haveQpLabel = this->fields.haveQpLabel;
  v66 = SelfUserGame;
  SelfUserGame = System_Int32__ToString_39741776((int)SelfUserGame + 96, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  if ( !haveQpLabel )
    goto LABEL_61;
  UILabel__set_text(haveQpLabel, SelfUserGame, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_61;
  UILabel__set_text(decideButtonLabel, SelfUserGame, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_61;
  UILabel__set_text(cancelButtonLabel, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)SelfUserGame,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_61;
  v69 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v71 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v70 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v103.fields.currentCryptoKey = v71;
  *(_QWORD *)&v103.fields.fakeValue = v70;
  SelfUserGame = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v103, 0LL);
  if ( !v69 )
    goto LABEL_61;
  SelfUserGame = (System_String_o *)ServantCommandCodeUnlockMaster__GetEntity(v69, (int32_t)SelfUserGame, cardIdx, 0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  spendQpLabel = this->fields.spendQpLabel;
  v73 = SelfUserGame;
  SelfUserGame = System_Int32__ToString_39741776((int)SelfUserGame + 24, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_61;
  UILabel__set_text(spendQpLabel, SelfUserGame, 0LL);
  fields = v73[1].fields;
  if ( !*(_QWORD *)&fields )
    goto LABEL_61;
  v75 = *(_QWORD *)(*(_QWORD *)&fields + 24LL);
  if ( (int)v75 >= 1 )
  {
    monitor = v73[1].monitor;
    v77 = 0LL;
    v78 = (int)v75;
    while ( 1 )
    {
      releaseItemObj = this->fields.releaseItemObj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SelfUserGame = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v80 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SelfUserGame,
                                          0LL);
      if ( !this->fields.unlockItemGrid )
        break;
      v81 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (System_String_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                          0LL);
      if ( !v81 )
        break;
      UnityEngine_Transform__set_parent(v81, (UnityEngine_Transform_o *)SelfUserGame, 0LL);
      transform = UnityEngine_GameObject__get_transform(v80, 0LL);
      *(UnityEngine_Vector3_o *)&v83 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v83, 0LL);
      v86 = UnityEngine_GameObject__get_transform(v80, 0LL);
      *(UnityEngine_Quaternion_o *)&v87 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v86 )
        break;
      UnityEngine_Transform__set_localRotation(v86, *(UnityEngine_Quaternion_o *)&v87, 0LL);
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_transform(v80, 0LL);
      v91 = (UnityEngine_Transform_o *)SelfUserGame;
      v92 = CommandCardDialog_TypeInfo;
      if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
        v92 = CommandCardDialog_TypeInfo;
      }
      if ( !v91 )
        break;
      UnityEngine_Transform__set_localScale(v91, v92->static_fields->UNLOCK_ITEM_SCALE, 0LL);
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v80,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v77 >= *(unsigned int *)(*(_QWORD *)&fields + 24LL) )
        goto LABEL_62;
      if ( !monitor )
        break;
      if ( v77 >= (unsigned int)monitor[6] )
      {
LABEL_62:
        v101 = sub_B5D6C8(SelfUserGame);
        sub_B5D668(v101, 0LL);
      }
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)&v66->fields,
        *(_DWORD *)(*(_QWORD *)&fields + 32LL + 4 * v77),
        monitor[v77 + 8],
        0LL);
      if ( (__int64)++v77 >= v78 )
        goto LABEL_42;
    }
LABEL_61:
    sub_B5D69C(SelfUserGame, v61);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3313/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, 0LL);
  if ( !answerBackLabel )
    goto LABEL_61;
  UILabel__set_text(answerBackLabel, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (System_String_o *)this->fields.unlockInfoObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (System_String_o *)this->fields.equipmentCommandCardObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (System_String_o *)this->fields.removeCommandCardSlotObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (System_String_o *)this->fields.warningCommandCodeObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (System_String_o *)this->fields.overwriteCommandCodeObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (System_String_o *)this->fields.lockResultInfoObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (System_String_o *)this->fields.removeCommandCodeConfirmObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (System_String_o *)this->fields.unlockItemGrid;
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (System_String_o *)this->fields.unlockItemGrid;
  if ( !SelfUserGame )
    goto LABEL_61;
  UIGrid__set_repositionNow((UIGrid_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (System_String_o *)this->fields.canExecuteButtonsObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (System_String_o *)this->fields.canNotExecuteButtonObj;
  if ( !SelfUserGame )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v100 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v100, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v100, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardDialog__get_closeBtnObject(
        CommandCardDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v11; // w0

  if ( (byte_42E8B79 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3625/*"CancelButton"*/, v5, v6, v7);
    byte_42E8B79 = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_20;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_20;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_3625/*"CancelButton"*/,
                                                       0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)canExecuteButtonsObj, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
    if ( !canExecuteButtonsObj )
      goto LABEL_20;
    if ( UnityEngine_GameObject__get_activeSelf(canExecuteButtonsObj, 0LL) )
      return gameObject;
  }
  canNotExecuteButtonObj = (UnityEngine_Object_o *)this->fields.canNotExecuteButtonObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(canNotExecuteButtonObj, 0LL, 0LL);
  gameObject = 0LL;
  if ( v11 )
  {
    canExecuteButtonsObj = this->fields.canNotExecuteButtonObj;
    if ( canExecuteButtonsObj )
    {
      gameObject = 0LL;
      if ( UnityEngine_GameObject__get_activeSelf(canExecuteButtonsObj, 0LL) )
        return this->fields.canNotExecuteButtonObj;
      return gameObject;
    }
LABEL_20:
    sub_B5D69C(canExecuteButtonsObj, method);
  }
  return gameObject;
}


void __fastcall CommandCardDialog__touchCommandCard(CommandCardDialog_o *this, int32_t index, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog_ClickDelegate___ctor(
        CommandCardDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall CommandCardDialog_ClickDelegate__BeginInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_42E5ED3 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5ED3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog_ClickDelegate__Invoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CommandCardDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CommandCardDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CommandCardDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CommandCardDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
    goto LABEL_37;
  }
}