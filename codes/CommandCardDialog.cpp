void __fastcall CommandCardDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct CommandCardDialog_StaticFields *static_fields; // x9
  int32x2_t *v3; // x8

  if ( (byte_4188090 & 1) == 0 )
  {
    sub_B2C35C(&CommandCardDialog_TypeInfo, v1);
    byte_4188090 = 1;
  }
  CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM = 1;
  static_fields = CommandCardDialog_TypeInfo->static_fields;
  *(int32x2_t *)&static_fields->UNLOCK_ITEM_SCALE.fields.x = vdup_n_s32(0x3F19999Au);
  static_fields->UNLOCK_ITEM_SCALE.fields.z = 0.6;
  v3 = (int32x2_t *)CommandCardDialog_TypeInfo->static_fields;
  v3[2].n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v3[3].n64_u32[0] = 1060320051;
}


void __fastcall CommandCardDialog___ctor(CommandCardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418808F & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418808F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_25843252(this, 0LL, v2);
}


void __fastcall CommandCardDialog__Close_25843252(
        CommandCardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o *v17; // x20

  if ( (byte_418808B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_CommandCardDialog_EndClose__, v10);
    byte_418808B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CommandCardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  System_String_o *MargeExplanation_23791504; // x0
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

  if ( (byte_418808A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, userCommandCode);
    byte_418808A = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)skillName,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)skillId,
    (System_String_array **)skillName,
    (System_Boolean_array **)skillDetail,
    (System_Int32_array **)method,
    v6,
    v7);
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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
    sub_B2C434(v18, v19);
  if ( !titleList->max_length )
  {
LABEL_10:
    v34 = sub_B2C460(v18);
    sub_B2C400(v34, 0LL);
  }
  v26 = titleList->m_Items[0];
  *skillName = v26;
  sub_B2C2F8((BattleServantConfConponent_o *)skillName, (System_Int32_array **)v26, v20, v21, v22, v23, v24, v25);
  MargeExplanation_23791504 = SkillInfo__GetMargeExplanation_23791504(explanationList, 0LL);
  *skillDetail = MargeExplanation_23791504;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)skillDetail,
    (System_Int32_array **)MargeExplanation_23791504,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall CommandCardDialog__Init(CommandCardDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w20
  UnityEngine_Object_o *v8; // x21
  int32_t v9; // w20
  UnityEngine_Object_o *v10; // x21

  if ( (byte_4188085 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4188085 = 1;
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
  v5 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v5, 0LL);
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
      UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
      if ( --v5 < 0 )
        goto LABEL_40;
    }
LABEL_69:
    sub_B2C434(titleLabel, method);
  }
LABEL_40:
  titleLabel = (UILabel_o *)this->fields.removeItemGrid;
  if ( !titleLabel )
    goto LABEL_69;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v7 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.removeItemGrid;
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v7, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(v8, 0LL);
    }
    while ( --v7 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.returnItemGrid;
  if ( !titleLabel )
    goto LABEL_69;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_69;
  v9 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v9 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.returnItemGrid;
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v9, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_69;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(v10, 0LL);
    }
    while ( --v9 >= 0 );
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

  if ( (byte_418808D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418808D = 1;
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
      sub_B2C434(removeItemGrid, v3);
    }
    CommandCardDialog_ClickDelegate__Invoke((CommandCardDialog_ClickDelegate_o *)removeItemGrid, 0, 0LL);
  }
}


void __fastcall CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *removeItemGrid; // x0

  if ( (byte_418808C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418808C = 1;
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
      sub_B2C434(removeItemGrid, v3);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  int64_t Instance; // x0
  __int64 v28; // x1
  ServantCommandCodeUnlockMaster_o *v29; // x23
  __int64 v30; // x22
  __int64 v31; // x24
  __int64 v32; // x23
  struct UnityEngine_GameObject_o *releaseItemObj; // x21
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_Transform_o *v35; // x22
  UnityEngine_Transform_o *transform; // x22
  int v37; // s0
  UnityEngine_Transform_o *v40; // x22
  int v41; // s0
  UnityEngine_Transform_o *v45; // x22
  CommandCardDialog_c *v46; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t num; // w24
  Il2CppObject *age; // x21
  UILabel_o *lockResultLabel; // x22
  System_String_o *v51; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v53; // x22
  Il2CppObject *v54; // x23
  Il2CppObject *v55; // x0
  UILabel_o *closeButtonLabel; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Action_o *v63; // x20
  __int64 v64; // x0
  int32_t v65; // [xsp+0h] [xbp-50h] BYREF
  int v66; // [xsp+4h] [xbp-4Ch] BYREF
  WarEntity_o *v67; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4188087 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, baseUserServantEntity);
    sub_B2C35C(&Method_CommandCardDialog_EndOpen__, v9);
    sub_B2C35C(&CommandCardDialog_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&StringLiteral_3233/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, v23);
    sub_B2C35C(&StringLiteral_3234/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, v24);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v25);
    sub_B2C35C(&StringLiteral_1/*""*/, v26);
    byte_4188087 = 1;
  }
  entity = 0LL;
  v67 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_65;
  v29 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v31 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v69.fields.currentCryptoKey = v31;
  *(_QWORD *)&v69.fields.fakeValue = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v69, 0LL);
  if ( !v29 )
    goto LABEL_65;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v29, Instance, cardIdx, 0LL);
  if ( !Instance )
    goto LABEL_65;
  v32 = *(_QWORD *)(Instance + 40);
  releaseItemObj = this->fields.releaseItemObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (int64_t)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_65;
  v34 = (UnityEngine_GameObject_o *)Instance;
  Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.returnItemGrid )
    goto LABEL_65;
  v35 = (UnityEngine_Transform_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0LL);
  if ( !v35 )
    goto LABEL_65;
  UnityEngine_Transform__set_parent(v35, (UnityEngine_Transform_o *)Instance, 0LL);
  transform = UnityEngine_GameObject__get_transform(v34, 0LL);
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_65;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
  v40 = UnityEngine_GameObject__get_transform(v34, 0LL);
  *(UnityEngine_Quaternion_o *)&v41 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v40 )
    goto LABEL_65;
  UnityEngine_Transform__set_localRotation(v40, *(UnityEngine_Quaternion_o *)&v41, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__get_transform(v34, 0LL);
  v45 = (UnityEngine_Transform_o *)Instance;
  v46 = CommandCardDialog_TypeInfo;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v46 = CommandCardDialog_TypeInfo;
  }
  if ( !v45 )
    goto LABEL_65;
  UnityEngine_Transform__set_localScale(v45, v46->static_fields->REMOVE_ITEM_SCALE, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        v34,
                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v32 )
    goto LABEL_65;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_66;
  if ( !Instance )
    goto LABEL_65;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v32 + 32), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_66;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               *(_DWORD *)(v32 + 32),
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v32 + 24) )
  {
LABEL_66:
    v64 = sub_B2C460(Instance);
    sub_B2C400(v64, 0LL);
  }
  if ( !Instance )
    goto LABEL_65;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v67,
               *(_DWORD *)(v32 + 32),
               (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v67 )
      goto LABEL_65;
    age = (Il2CppObject *)v67->fields.age;
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
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, 0LL);
  Instance = (int64_t)System_String__Format(v51, age, 0LL);
  if ( !lockResultLabel )
    goto LABEL_65;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0LL);
  itemNumLabel = this->fields.itemNumLabel;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3233/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0LL);
  v66 = num - 1;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
  v65 = num;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
  Instance = (int64_t)System_String__Format_44301068(v53, v54, v55, 0LL);
  if ( !itemNumLabel )
    goto LABEL_65;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
    sub_B2C434(Instance, v28);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__OpenLockEquipSlot(
        CommandCardDialog_o *this,
        bool equipped,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  UILabel_o *titleLabel; // x22
  int64_t transform; // x0
  System_String_o *v32; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *removeWarningLabel; // x22
  struct UILabel_o *v35; // x22
  System_String_o *mText; // x23
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  UILabel_o *spendItemTxtLabel; // x21
  UILabel_o *haveItemTxtLabel; // x21
  int32_t Value; // w0
  struct UnityEngine_GameObject_o *releaseItemObj; // x22
  int32_t v43; // w21
  UnityEngine_GameObject_o *v44; // x22
  UnityEngine_Transform_o *v45; // x23
  UnityEngine_Transform_o *v46; // x23
  int v47; // s0
  UnityEngine_Transform_o *v50; // x23
  int v51; // s0
  UnityEngine_Transform_o *v55; // x23
  CommandCardDialog_c *v56; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v60; // x0
  CommandCardDialog_c *v61; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v63; // x0
  int32_t v64; // w21
  UILabel_o *v65; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v67; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Action_o *v76; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+0h] [xbp-50h] BYREF
  int32_t v78; // [xsp+4h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4188088 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, equipped);
    sub_B2C35C(&Method_CommandCardDialog_EndOpen__, v7);
    sub_B2C35C(&CommandCardDialog_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_3230/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, v17);
    sub_B2C35C(&StringLiteral_3235/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, v18);
    sub_B2C35C(&StringLiteral_3231/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, v19);
    sub_B2C35C(&StringLiteral_3229/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, v20);
    sub_B2C35C(&StringLiteral_3237/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, v21);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v24);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v25);
    sub_B2C35C(&StringLiteral_3236/*"COMMAND_CODE_LOCK_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_3232/*"COMMAND_CODE_LOCK_MSG"*/, v27);
    sub_B2C35C(&StringLiteral_1/*""*/, v28);
    sub_B2C35C(&StringLiteral_3225/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v29);
    byte_4188088 = 1;
  }
  entity = 0LL;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3236/*"COMMAND_CODE_LOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_88;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0LL);
  messageLabel = this->fields.messageLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3232/*"COMMAND_CODE_LOCK_MSG"*/, 0LL);
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
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3230/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, 0LL);
    v32 = (System_String_o *)transform;
    if ( !removeWarningLabel )
      goto LABEL_88;
  }
  else
  {
    v32 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !removeWarningLabel )
      goto LABEL_88;
  }
  UILabel__set_text(removeWarningLabel, v32, 0LL);
  v35 = this->fields.removeWarningLabel;
  if ( !v35 )
    goto LABEL_88;
  mText = v35->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3229/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, 0LL);
  v38 = System_String__Concat_44305532(mText, v37, 0LL);
  UILabel__set_text(v35, v38, 0LL);
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
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3235/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, 0LL);
  if ( !spendItemTxtLabel )
    goto LABEL_88;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0LL);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3231/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, 0LL);
  if ( !haveItemTxtLabel )
    goto LABEL_88;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3225/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
  releaseItemObj = this->fields.releaseItemObj;
  v43 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (int64_t)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                         (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_88;
  v44 = (UnityEngine_GameObject_o *)transform;
  transform = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !this->fields.removeItemGrid )
    goto LABEL_88;
  v45 = (UnityEngine_Transform_o *)transform;
  transform = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0LL);
  if ( !v45 )
    goto LABEL_88;
  UnityEngine_Transform__set_parent(v45, (UnityEngine_Transform_o *)transform, 0LL);
  v46 = UnityEngine_GameObject__get_transform(v44, 0LL);
  *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v46 )
    goto LABEL_88;
  UnityEngine_Transform__set_localPosition(v46, *(UnityEngine_Vector3_o *)&v47, 0LL);
  v50 = UnityEngine_GameObject__get_transform(v44, 0LL);
  *(UnityEngine_Quaternion_o *)&v51 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v50 )
    goto LABEL_88;
  UnityEngine_Transform__set_localRotation(v50, *(UnityEngine_Quaternion_o *)&v51, 0LL);
  transform = (int64_t)UnityEngine_GameObject__get_transform(v44, 0LL);
  v55 = (UnityEngine_Transform_o *)transform;
  v56 = CommandCardDialog_TypeInfo;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v56 = CommandCardDialog_TypeInfo;
  }
  if ( !v55 )
    goto LABEL_88;
  UnityEngine_Transform__set_localScale(v55, v56->static_fields->REMOVE_ITEM_SCALE, 0LL);
  transform = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         v44,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_88;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v43, 0LL);
  transform = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)transform,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  transform = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_88;
  transform = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, transform, v43, 0LL);
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
  v78 = num;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
  transform = (int64_t)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v60, 0LL);
  if ( !haveItemNumLabel )
    goto LABEL_88;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0LL);
  v61 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v61 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v61->static_fields->DETACH_NEED_ITEM_NUM;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM);
  transform = (int64_t)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v63, 0LL);
  if ( !spendItemNumLabel )
    goto LABEL_88;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0LL);
  transform = (int64_t)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_88;
  v64 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
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
    sub_B2C434(transform, v32);
  }
  UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0LL);
  if ( num >= v64 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_88;
    UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
    v67 = 1;
  }
  else
  {
    v65 = this->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3237/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, 0LL);
    if ( !v65 )
      goto LABEL_88;
    UILabel__set_text(v65, (System_String_o *)transform, 0LL);
    closeButtonLabel = this->fields.closeButtonLabel;
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
    v67 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v67, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v76, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v76, 0, 0LL);
}


void __fastcall CommandCardDialog__OpenRemoveEquip(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *removeCommandCodeConfirmObj; // x0
  __int64 v16; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *removeDetailLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x20

  if ( (byte_4188089 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, userCommandCode);
    sub_B2C35C(&Method_CommandCardDialog_EndOpen__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_3245/*"COMMAND_CODE_REMOVE_TITLE"*/, v9);
    sub_B2C35C(&StringLiteral_3241/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, v10);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v11);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_B2C35C(&StringLiteral_3242/*"COMMAND_CODE_REMOVE_MSG"*/, v13);
    byte_4188089 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3245/*"COMMAND_CODE_REMOVE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0LL);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3242/*"COMMAND_CODE_REMOVE_MSG"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0LL);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3241/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, 0LL);
  if ( !removeDetailLabel )
    goto LABEL_24;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_24;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
    sub_B2C434(removeCommandCodeConfirmObj, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__OpenUnlockCommandCardEquipment(
        CommandCardDialog_o *this,
        UserServantEntity_o *baseUserServantEntity,
        int32_t cardIdx,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *SelfUserGame; // x0
  __int64 v27; // x1
  UILabel_o *itemInfoLabel; // x21
  UILabel_o *spendQpTxtLabel; // x21
  UILabel_o *haveQpTxtLabel; // x21
  UILabel_o *haveQpLabel; // x24
  System_String_o *v32; // x21
  UILabel_o *decideButtonLabel; // x24
  UILabel_o *cancelButtonLabel; // x24
  ServantCommandCodeUnlockMaster_o *v35; // x24
  __int64 v36; // x23
  __int64 v37; // x25
  UILabel_o *spendQpLabel; // x23
  System_String_o *v39; // x22
  System_String_Fields fields; // x24
  __int64 v41; // x8
  _DWORD *monitor; // x27
  unsigned __int64 v43; // x25
  signed __int64 v44; // x28
  struct UnityEngine_GameObject_o *releaseItemObj; // x22
  UnityEngine_GameObject_o *v46; // x22
  UnityEngine_Transform_o *v47; // x23
  UnityEngine_Transform_o *transform; // x23
  int v49; // s0
  UnityEngine_Transform_o *v52; // x23
  int v53; // s0
  UnityEngine_Transform_o *v57; // x23
  CommandCardDialog_c *v58; // x8
  UILabel_o *answerBackLabel; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Action_o *v66; // x20
  __int64 v67; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4188086 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, baseUserServantEntity);
    sub_B2C35C(&Method_CommandCardDialog_EndOpen__, v8);
    sub_B2C35C(&CommandCardDialog_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_3248/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, v17);
    sub_B2C35C(&StringLiteral_3169/*"COMBINE_HAVE_QP"*/, v18);
    sub_B2C35C(&StringLiteral_3249/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, v19);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v22);
    sub_B2C35C(&StringLiteral_3250/*"COMMAND_CODE_UNLOCK_TITLE"*/, v23);
    sub_B2C35C(&StringLiteral_3228/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, v24);
    byte_4188086 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3250/*"COMMAND_CODE_UNLOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, SelfUserGame, 0LL);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3228/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, 0LL);
  if ( !itemInfoLabel )
    goto LABEL_61;
  UILabel__set_text(itemInfoLabel, SelfUserGame, 0LL);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3249/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLabel )
    goto LABEL_61;
  UILabel__set_text(spendQpTxtLabel, SelfUserGame, 0LL);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3169/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLabel )
    goto LABEL_61;
  UILabel__set_text(haveQpTxtLabel, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  haveQpLabel = this->fields.haveQpLabel;
  v32 = SelfUserGame;
  SelfUserGame = System_Int32__ToString_38381416((int)SelfUserGame + 96, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
  if ( !haveQpLabel )
    goto LABEL_61;
  UILabel__set_text(haveQpLabel, SelfUserGame, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_61;
  UILabel__set_text(decideButtonLabel, SelfUserGame, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_61;
  UILabel__set_text(cancelButtonLabel, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_61;
  SelfUserGame = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)SelfUserGame,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_61;
  v35 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v37 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v69.fields.currentCryptoKey = v37;
  *(_QWORD *)&v69.fields.fakeValue = v36;
  SelfUserGame = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v69, 0LL);
  if ( !v35 )
    goto LABEL_61;
  SelfUserGame = (System_String_o *)ServantCommandCodeUnlockMaster__GetEntity(v35, (int32_t)SelfUserGame, cardIdx, 0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  spendQpLabel = this->fields.spendQpLabel;
  v39 = SelfUserGame;
  SelfUserGame = System_Int32__ToString_38381416((int)SelfUserGame + 24, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_61;
  UILabel__set_text(spendQpLabel, SelfUserGame, 0LL);
  fields = v39[1].fields;
  if ( !*(_QWORD *)&fields )
    goto LABEL_61;
  v41 = *(_QWORD *)(*(_QWORD *)&fields + 24LL);
  if ( (int)v41 >= 1 )
  {
    monitor = v39[1].monitor;
    v43 = 0LL;
    v44 = (int)v41;
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
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v46 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SelfUserGame,
                                          0LL);
      if ( !this->fields.unlockItemGrid )
        break;
      v47 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (System_String_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                          0LL);
      if ( !v47 )
        break;
      UnityEngine_Transform__set_parent(v47, (UnityEngine_Transform_o *)SelfUserGame, 0LL);
      transform = UnityEngine_GameObject__get_transform(v46, 0LL);
      *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_zero(0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v49, 0LL);
      v52 = UnityEngine_GameObject__get_transform(v46, 0LL);
      *(UnityEngine_Quaternion_o *)&v53 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v52 )
        break;
      UnityEngine_Transform__set_localRotation(v52, *(UnityEngine_Quaternion_o *)&v53, 0LL);
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_transform(v46, 0LL);
      v57 = (UnityEngine_Transform_o *)SelfUserGame;
      v58 = CommandCardDialog_TypeInfo;
      if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
        v58 = CommandCardDialog_TypeInfo;
      }
      if ( !v57 )
        break;
      UnityEngine_Transform__set_localScale(v57, v58->static_fields->UNLOCK_ITEM_SCALE, 0LL);
      SelfUserGame = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v46,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v43 >= *(unsigned int *)(*(_QWORD *)&fields + 24LL) )
        goto LABEL_62;
      if ( !monitor )
        break;
      if ( v43 >= (unsigned int)monitor[6] )
      {
LABEL_62:
        v67 = sub_B2C460(SelfUserGame);
        sub_B2C400(v67, 0LL);
      }
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)&v32->fields,
        *(_DWORD *)(*(_QWORD *)&fields + 32LL + 4 * v43),
        monitor[v43 + 8],
        0LL);
      if ( (__int64)++v43 >= v44 )
        goto LABEL_42;
    }
LABEL_61:
    sub_B2C434(SelfUserGame, v27);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3248/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardDialog__get_closeBtnObject(
        CommandCardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v7; // w0

  if ( (byte_418808E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3559/*"CancelButton"*/, v3);
    byte_418808E = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_20;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_20;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_3559/*"CancelButton"*/,
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
  v7 = UnityEngine_Object__op_Inequality(canNotExecuteButtonObj, 0LL, 0LL);
  gameObject = 0LL;
  if ( v7 )
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
    sub_B2C434(canExecuteButtonsObj, method);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184F3D & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_4184F3D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog_ClickDelegate__Invoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CommandCardDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CommandCardDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CommandCardDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CommandCardDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
}