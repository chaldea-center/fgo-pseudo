void __fastcall CommandCardDialog___cctor(const MethodInfo *method)
{
  struct CommandCardDialog_StaticFields *static_fields; // x9
  int32x2_t *v2; // x8

  if ( (byte_435461D & 1) == 0 )
  {
    sub_B70694(&CommandCardDialog_TypeInfo);
    byte_435461D = 1;
  }
  CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM = 1;
  static_fields = CommandCardDialog_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->UNLOCK_ITEM_SCALE.fields.x = vdup_n_s32(0x3F19999Au);
  static_fields->UNLOCK_ITEM_SCALE.fields.z = 0.6;
  v2 = (int32x2_t *)CommandCardDialog_TypeInfo->static_fields;
  v2[2].n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v2[3].n64_u32[0] = 1060320051;
}


void __fastcall CommandCardDialog___ctor(CommandCardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_435461C & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_435461C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_29962780(this, 0LL, v2);
}


void __fastcall CommandCardDialog__Close_29962780(
        CommandCardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_4354618 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CommandCardDialog_EndClose__);
    byte_4354618 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_CommandCardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
    sub_B70630((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  System_String_o *MargeExplanation_26489736; // x0
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

  if ( (byte_4354617 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354617 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)skillName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)skillId,
    (System_String_array **)skillName,
    (System_Boolean_array **)skillDetail,
    (System_Int32_array **)method,
    v6,
    v7);
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
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
    sub_B7076C(v18, v19);
  if ( !titleList->max_length )
  {
LABEL_10:
    v34 = sub_B70798(v18);
    sub_B70738(v34, 0LL);
  }
  v26 = titleList->m_Items[0];
  *skillName = v26;
  sub_B70630((BattleServantConfConponent_o *)skillName, (System_Int32_array **)v26, v20, v21, v22, v23, v24, v25);
  MargeExplanation_26489736 = SkillInfo__GetMargeExplanation_26489736(explanationList, 0LL);
  *skillDetail = MargeExplanation_26489736;
  sub_B70630(
    (BattleServantConfConponent_o *)skillDetail,
    (System_Int32_array **)MargeExplanation_26489736,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall CommandCardDialog__Init(CommandCardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v6; // w20
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w20
  UnityEngine_Object_o *v9; // x21

  if ( (byte_4354612 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354612 = 1;
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
  v4 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v4, 0LL);
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
      UnityEngine_Object__DestroyImmediate_36067420(gameObject, 0LL);
      if ( --v4 < 0 )
        goto LABEL_40;
    }
LABEL_69:
    sub_B7076C(titleLabel, method);
  }
LABEL_40:
  titleLabel = (UILabel_o *)this->fields.removeItemGrid;
  if ( !titleLabel )
    goto LABEL_69;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  v6 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v6 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.removeItemGrid;
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v6, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420(v7, 0LL);
    }
    while ( --v6 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.returnItemGrid;
  if ( !titleLabel )
    goto LABEL_69;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v8 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.returnItemGrid;
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v8, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420(v9, 0LL);
    }
    while ( --v8 >= 0 );
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
  __int64 v3; // x1
  UnityEngine_Component_o *removeItemGrid; // x0

  if ( (byte_435461A & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435461A = 1;
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
      sub_B7076C(removeItemGrid, v3);
    }
    CommandCardDialog_ClickDelegate__Invoke((CommandCardDialog_ClickDelegate_o *)removeItemGrid, 0, 0LL);
  }
}


void __fastcall CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *removeItemGrid; // x0

  if ( (byte_4354619 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4354619 = 1;
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
      sub_B7076C(removeItemGrid, v3);
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
  int64_t Instance; // x0
  __int64 v10; // x1
  ServantCommandCodeUnlockMaster_o *v11; // x23
  __int64 v12; // x22
  __int64 v13; // x24
  __int64 v14; // x23
  struct UnityEngine_GameObject_o *releaseItemObj; // x21
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *transform; // x22
  int v19; // s0
  UnityEngine_Transform_o *v22; // x22
  int v23; // s0
  UnityEngine_Transform_o *v27; // x22
  CommandCardDialog_c *v28; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t num; // w24
  Il2CppObject *age; // x21
  UILabel_o *lockResultLabel; // x22
  System_String_o *v33; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v35; // x22
  __int64 v36; // x2
  Il2CppObject *v37; // x23
  __int64 v38; // x2
  Il2CppObject *v39; // x0
  UILabel_o *closeButtonLabel; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Action_o *v47; // x20
  __int64 v48; // x0
  int32_t v49; // [xsp+0h] [xbp-50h] BYREF
  int v50; // [xsp+4h] [xbp-4Ch] BYREF
  WarEntity_o *v51; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4354614 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CommandCardDialog_EndOpen__);
    sub_B70694(&CommandCardDialog_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3307/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/);
    sub_B70694(&StringLiteral_3308/*"COMMAND_CODE_LOCK_RETURN_MSG"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354614 = 1;
  }
  entity = 0LL;
  v51 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_65;
  v11 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v13;
  *(_QWORD *)&v53.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v53, 0LL);
  if ( !v11 )
    goto LABEL_65;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v11, Instance, cardIdx, 0LL);
  if ( !Instance )
    goto LABEL_65;
  v14 = *(_QWORD *)(Instance + 40);
  releaseItemObj = this->fields.releaseItemObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (int64_t)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                        (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_65;
  v16 = (UnityEngine_GameObject_o *)Instance;
  Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.returnItemGrid )
    goto LABEL_65;
  v17 = (UnityEngine_Transform_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0LL);
  if ( !v17 )
    goto LABEL_65;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)Instance, 0LL);
  transform = UnityEngine_GameObject__get_transform(v16, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_65;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = UnityEngine_GameObject__get_transform(v16, 0LL);
  *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v22 )
    goto LABEL_65;
  UnityEngine_Transform__set_localRotation(v22, *(UnityEngine_Quaternion_o *)&v23, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__get_transform(v16, 0LL);
  v27 = (UnityEngine_Transform_o *)Instance;
  v28 = CommandCardDialog_TypeInfo;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v28 = CommandCardDialog_TypeInfo;
  }
  if ( !v27 )
    goto LABEL_65;
  UnityEngine_Transform__set_localScale(v27, v28->static_fields->REMOVE_ITEM_SCALE, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        v16,
                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v14 )
    goto LABEL_65;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_66;
  if ( !Instance )
    goto LABEL_65;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v14 + 32), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_66;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               *(_DWORD *)(v14 + 32),
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v14 + 24) )
  {
LABEL_66:
    v48 = sub_B70798(Instance);
    sub_B70738(v48, 0LL);
  }
  if ( !Instance )
    goto LABEL_65;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v51,
               *(_DWORD *)(v14 + 32),
               (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v51 )
      goto LABEL_65;
    age = (Il2CppObject *)v51->fields.age;
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
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3308/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, 0LL);
  Instance = (int64_t)System_String__Format(v33, age, 0LL);
  if ( !lockResultLabel )
    goto LABEL_65;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0LL);
  itemNumLabel = this->fields.itemNumLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3307/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0LL);
  v50 = num - 1;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v36);
  v49 = num;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v38);
  Instance = (int64_t)System_String__Format_44753704(v35, v37, v39, 0LL);
  if ( !itemNumLabel )
    goto LABEL_65;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
    sub_B7076C(Instance, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__OpenLockEquipSlot(
        CommandCardDialog_o *this,
        bool equipped,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  int64_t transform; // x0
  System_String_o *v9; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *removeWarningLabel; // x22
  struct UILabel_o *v12; // x22
  System_String_o *mText; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *spendItemTxtLabel; // x21
  UILabel_o *haveItemTxtLabel; // x21
  int32_t Value; // w0
  struct UnityEngine_GameObject_o *releaseItemObj; // x22
  int32_t v20; // w21
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_Transform_o *v22; // x23
  UnityEngine_Transform_o *v23; // x23
  int v24; // s0
  UnityEngine_Transform_o *v27; // x23
  int v28; // s0
  UnityEngine_Transform_o *v32; // x23
  CommandCardDialog_c *v33; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v35; // x2
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v38; // x0
  __int64 v39; // x2
  CommandCardDialog_c *v40; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v42; // x0
  int32_t v43; // w21
  UILabel_o *v44; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v46; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Action_o *v55; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+0h] [xbp-50h] BYREF
  int32_t v57; // [xsp+4h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4354615 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CommandCardDialog_EndOpen__);
    sub_B70694(&CommandCardDialog_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3304/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/);
    sub_B70694(&StringLiteral_3309/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/);
    sub_B70694(&StringLiteral_3305/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/);
    sub_B70694(&StringLiteral_3303/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/);
    sub_B70694(&StringLiteral_3311/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/);
    sub_B70694(&StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_3335/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    sub_B70694(&StringLiteral_3310/*"COMMAND_CODE_LOCK_TITLE"*/);
    sub_B70694(&StringLiteral_3306/*"COMMAND_CODE_LOCK_MSG"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_3299/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_4354615 = 1;
  }
  entity = 0LL;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3310/*"COMMAND_CODE_LOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_88;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0LL);
  messageLabel = this->fields.messageLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"COMMAND_CODE_LOCK_MSG"*/, 0LL);
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
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, 0LL);
    v9 = (System_String_o *)transform;
    if ( !removeWarningLabel )
      goto LABEL_88;
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !removeWarningLabel )
      goto LABEL_88;
  }
  UILabel__set_text(removeWarningLabel, v9, 0LL);
  v12 = this->fields.removeWarningLabel;
  if ( !v12 )
    goto LABEL_88;
  mText = v12->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3303/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, 0LL);
  v15 = System_String__Concat_44758168(mText, v14, 0LL);
  UILabel__set_text(v12, v15, 0LL);
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
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3309/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, 0LL);
  if ( !spendItemTxtLabel )
    goto LABEL_88;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0LL);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, 0LL);
  if ( !haveItemTxtLabel )
    goto LABEL_88;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3299/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
  releaseItemObj = this->fields.releaseItemObj;
  v20 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (int64_t)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                         (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_88;
  v21 = (UnityEngine_GameObject_o *)transform;
  transform = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !this->fields.removeItemGrid )
    goto LABEL_88;
  v22 = (UnityEngine_Transform_o *)transform;
  transform = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0LL);
  if ( !v22 )
    goto LABEL_88;
  UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0LL);
  v23 = UnityEngine_GameObject__get_transform(v21, 0LL);
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v23 )
    goto LABEL_88;
  UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
  v27 = UnityEngine_GameObject__get_transform(v21, 0LL);
  *(UnityEngine_Quaternion_o *)&v28 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v27 )
    goto LABEL_88;
  UnityEngine_Transform__set_localRotation(v27, *(UnityEngine_Quaternion_o *)&v28, 0LL);
  transform = (int64_t)UnityEngine_GameObject__get_transform(v21, 0LL);
  v32 = (UnityEngine_Transform_o *)transform;
  v33 = CommandCardDialog_TypeInfo;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v33 = CommandCardDialog_TypeInfo;
  }
  if ( !v32 )
    goto LABEL_88;
  UnityEngine_Transform__set_localScale(v32, v33->static_fields->REMOVE_ITEM_SCALE, 0LL);
  transform = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         v21,
                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_88;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v20, 0LL);
  transform = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)transform,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  transform = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_88;
  transform = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, transform, v20, 0LL);
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
  v57 = num;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v35);
  transform = (int64_t)System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v38, 0LL);
  if ( !haveItemNumLabel )
    goto LABEL_88;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0LL);
  v40 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v40 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v40->static_fields->DETACH_NEED_ITEM_NUM;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM, v39);
  transform = (int64_t)System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v42, 0LL);
  if ( !spendItemNumLabel )
    goto LABEL_88;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0LL);
  transform = (int64_t)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_88;
  v43 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
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
    sub_B7076C(transform, v9);
  }
  UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0LL);
  if ( num >= v43 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_88;
    UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
    v46 = 1;
  }
  else
  {
    v44 = this->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3311/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, 0LL);
    if ( !v44 )
      goto LABEL_88;
    UILabel__set_text(v44, (System_String_o *)transform, 0LL);
    closeButtonLabel = this->fields.closeButtonLabel;
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
    v46 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v46, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0LL);
}


void __fastcall CommandCardDialog__OpenRemoveEquip(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  System_String_o *removeCommandCodeConfirmObj; // x0
  __int64 v9; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *removeDetailLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x20

  if ( (byte_4354616 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CommandCardDialog_EndOpen__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3319/*"COMMAND_CODE_REMOVE_TITLE"*/);
    sub_B70694(&StringLiteral_3315/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/);
    sub_B70694(&StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_3335/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_3316/*"COMMAND_CODE_REMOVE_MSG"*/);
    byte_4354616 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3319/*"COMMAND_CODE_REMOVE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0LL);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3316/*"COMMAND_CODE_REMOVE_MSG"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0LL);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3315/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, 0LL);
  if ( !removeDetailLabel )
    goto LABEL_24;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_24;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
    sub_B7076C(removeCommandCodeConfirmObj, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__OpenUnlockCommandCardEquipment(
        CommandCardDialog_o *this,
        UserServantEntity_o *baseUserServantEntity,
        int32_t cardIdx,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *SelfUserGame; // x0
  __int64 v10; // x1
  UILabel_o *itemInfoLabel; // x21
  UILabel_o *spendQpTxtLabel; // x21
  UILabel_o *haveQpTxtLabel; // x21
  UILabel_o *haveQpLabel; // x24
  System_String_o *v15; // x21
  UILabel_o *decideButtonLabel; // x24
  UILabel_o *cancelButtonLabel; // x24
  ServantCommandCodeUnlockMaster_o *v18; // x24
  __int64 v19; // x23
  __int64 v20; // x25
  UILabel_o *spendQpLabel; // x23
  System_String_o *v22; // x22
  System_String_Fields fields; // x24
  __int64 v24; // x8
  _DWORD *monitor; // x27
  unsigned __int64 v26; // x25
  signed __int64 v27; // x28
  struct UnityEngine_GameObject_o *releaseItemObj; // x22
  UnityEngine_GameObject_o *v29; // x22
  UnityEngine_Transform_o *v30; // x23
  UnityEngine_Transform_o *transform; // x23
  int v32; // s0
  UnityEngine_Transform_o *v35; // x23
  int v36; // s0
  UnityEngine_Transform_o *v40; // x23
  CommandCardDialog_c *v41; // x8
  UILabel_o *answerBackLabel; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Action_o *v49; // x20
  __int64 v50; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4354613 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CommandCardDialog_EndOpen__);
    sub_B70694(&CommandCardDialog_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3322/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/);
    sub_B70694(&StringLiteral_3243/*"COMBINE_HAVE_QP"*/);
    sub_B70694(&StringLiteral_3323/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/);
    sub_B70694(&StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_3335/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_9376/*"N0"*/);
    sub_B70694(&StringLiteral_3324/*"COMMAND_CODE_UNLOCK_TITLE"*/);
    sub_B70694(&StringLiteral_3302/*"COMMAND_CODE_ITEM_ITEM_INFO"*/);
    byte_4354613 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3324/*"COMMAND_CODE_UNLOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, SelfUserGame, 0LL);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3302/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, 0LL);
  if ( !itemInfoLabel )
    goto LABEL_61;
  UILabel__set_text(itemInfoLabel, SelfUserGame, 0LL);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3323/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLabel )
    goto LABEL_61;
  UILabel__set_text(spendQpTxtLabel, SelfUserGame, 0LL);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3243/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLabel )
    goto LABEL_61;
  UILabel__set_text(haveQpTxtLabel, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  haveQpLabel = this->fields.haveQpLabel;
  v15 = SelfUserGame;
  SelfUserGame = System_Int32__ToString_39283984((int)SelfUserGame + 96, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
  if ( !haveQpLabel )
    goto LABEL_61;
  UILabel__set_text(haveQpLabel, SelfUserGame, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_61;
  UILabel__set_text(decideButtonLabel, SelfUserGame, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_61;
  UILabel__set_text(cancelButtonLabel, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)SelfUserGame,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_61;
  v18 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v20 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v20;
  *(_QWORD *)&v52.fields.fakeValue = v19;
  SelfUserGame = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v52, 0LL);
  if ( !v18 )
    goto LABEL_61;
  SelfUserGame = (System_String_o *)ServantCommandCodeUnlockMaster__GetEntity(v18, (int32_t)SelfUserGame, cardIdx, 0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  spendQpLabel = this->fields.spendQpLabel;
  v22 = SelfUserGame;
  SelfUserGame = System_Int32__ToString_39283984((int)SelfUserGame + 24, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_61;
  UILabel__set_text(spendQpLabel, SelfUserGame, 0LL);
  fields = v22[1].fields;
  if ( !*(_QWORD *)&fields )
    goto LABEL_61;
  v24 = *(_QWORD *)(*(_QWORD *)&fields + 24LL);
  if ( (int)v24 >= 1 )
  {
    monitor = v22[1].monitor;
    v26 = 0LL;
    v27 = (int)v24;
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
                                          (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v29 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SelfUserGame,
                                          0LL);
      if ( !this->fields.unlockItemGrid )
        break;
      v30 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (System_String_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                          0LL);
      if ( !v30 )
        break;
      UnityEngine_Transform__set_parent(v30, (UnityEngine_Transform_o *)SelfUserGame, 0LL);
      transform = UnityEngine_GameObject__get_transform(v29, 0LL);
      *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
      v35 = UnityEngine_GameObject__get_transform(v29, 0LL);
      *(UnityEngine_Quaternion_o *)&v36 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v35 )
        break;
      UnityEngine_Transform__set_localRotation(v35, *(UnityEngine_Quaternion_o *)&v36, 0LL);
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
      v40 = (UnityEngine_Transform_o *)SelfUserGame;
      v41 = CommandCardDialog_TypeInfo;
      if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
        v41 = CommandCardDialog_TypeInfo;
      }
      if ( !v40 )
        break;
      UnityEngine_Transform__set_localScale(v40, v41->static_fields->UNLOCK_ITEM_SCALE, 0LL);
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v29,
                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v26 >= *(unsigned int *)(*(_QWORD *)&fields + 24LL) )
        goto LABEL_62;
      if ( !monitor )
        break;
      if ( v26 >= (unsigned int)monitor[6] )
      {
LABEL_62:
        v50 = sub_B70798(SelfUserGame);
        sub_B70738(v50, 0LL);
      }
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)&v15->fields,
        *(_DWORD *)(*(_QWORD *)&fields + 32LL + 4 * v26),
        monitor[v26 + 8],
        0LL);
      if ( (__int64)++v26 >= v27 )
        goto LABEL_42;
    }
LABEL_61:
    sub_B7076C(SelfUserGame, v10);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3322/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, 0LL);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardDialog__get_closeBtnObject(
        CommandCardDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v6; // w0

  if ( (byte_435461B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_3634/*"CancelButton"*/);
    byte_435461B = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_20;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_20;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_3634/*"CancelButton"*/,
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
  v6 = UnityEngine_Object__op_Inequality(canNotExecuteButtonObj, 0LL, 0LL);
  gameObject = 0LL;
  if ( v6 )
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
    sub_B7076C(canExecuteButtonsObj, method);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_434FA9E & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434FA9E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CommandCardDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CommandCardDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}