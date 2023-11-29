void __fastcall CommandCardDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct CommandCardDialog_StaticFields *static_fields; // x9
  int32x2_t *v3; // x8

  if ( (byte_40FA547 & 1) == 0 )
  {
    sub_B16FFC(&CommandCardDialog_TypeInfo, v1);
    byte_40FA547 = 1;
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
  if ( (byte_40FA546 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA546 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_25813212(this, 0LL, v2);
}


void __fastcall CommandCardDialog__Close_25813212(
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20

  if ( (byte_40FA542 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_CommandCardDialog_EndClose__, v10);
    byte_40FA542 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_CommandCardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  System_String_o *MargeExplanation_23617588; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array *explanationList; // [xsp+0h] [xbp-40h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FA541 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, userCommandCode);
    byte_40FA541 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)skillName,
    (System_Int32_array **)StringLiteral_1,
    (System_String_array **)skillId,
    (System_String_array **)skillName,
    (System_Boolean_array **)skillDetail,
    (System_Int32_array **)method,
    v6,
    v7);
  *skillDetail = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)skillDetail,
    (System_Int32_array **)StringLiteral_1,
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
    sub_B170D4();
  if ( !titleList->max_length )
  {
LABEL_10:
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  v26 = titleList->m_Items[0];
  *skillName = v26;
  sub_B16F98((BattleServantConfConponent_o *)skillName, (System_Int32_array **)v26, v20, v21, v22, v23, v24, v25);
  MargeExplanation_23617588 = SkillInfo__GetMargeExplanation_23617588(explanationList, 0LL);
  *skillDetail = MargeExplanation_23617588;
  sub_B16F98(
    (BattleServantConfConponent_o *)skillDetail,
    (System_Int32_array **)MargeExplanation_23617588,
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
  UILabel_o *messageLabel; // x0
  UILabel_o *equipmentWarningLabel; // x0
  UILabel_o *removeWarningLabel; // x0
  UILabel_o *itemInfoLabel; // x0
  UILabel_o *warningLabel; // x0
  UILabel_o *decideButtonLabel; // x0
  UILabel_o *cancelButtonLabel; // x0
  UILabel_o *closeButtonLabel; // x0
  UILabel_o *haveQpLabel; // x0
  UILabel_o *haveQpTxtLabel; // x0
  UILabel_o *spendQpLabel; // x0
  UILabel_o *spendQpTxtLabel; // x0
  UILabel_o *haveItemTxtLabel; // x0
  UILabel_o *haveItemNumLabel; // x0
  UILabel_o *spendItemTxtLabel; // x0
  UILabel_o *spendItemNumLabel; // x0
  UILabel_o *overwriteCommandCodeWarningLabel; // x0
  UILabel_o *equipedCommandCodeSkillName; // x0
  UILabel_o *equipedCommandCodeSkillDetail; // x0
  UILabel_o *overwriteCommandCodeSkillName; // x0
  UILabel_o *overwriteCommandCodeSkillDetail; // x0
  UILabel_o *answerBackLabel; // x0
  UILabel_o *lockResultLabel; // x0
  UILabel_o *itemNumLabel; // x0
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *canNotExecuteButtonObj; // x0
  UnityEngine_Component_o *unlockItemGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v33; // w20
  UIGrid_o *v34; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_o *removeItemGrid; // x0
  UnityEngine_Transform_o *v39; // x0
  int32_t v40; // w20
  UIGrid_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_Object_o *v44; // x21
  UnityEngine_Component_o *returnItemGrid; // x0
  UnityEngine_Transform_o *v46; // x0
  int32_t v47; // w20
  UIGrid_o *v48; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_Component_o *v50; // x0
  UnityEngine_Object_o *v51; // x21
  UnityEngine_GameObject_o *equipmentCommandCardObj; // x0
  UnityEngine_GameObject_o *unlockInfoObj; // x0
  UnityEngine_GameObject_o *removeCommandCardSlotObj; // x0
  UnityEngine_GameObject_o *warningCommandCodeObj; // x0
  UnityEngine_GameObject_o *overwriteCommandCodeObj; // x0
  UnityEngine_GameObject_o *lockResultInfoObj; // x0
  UnityEngine_GameObject_o *removeCommandCodeConfirmObj; // x0
  UnityEngine_GameObject_o *v59; // x0

  if ( (byte_40FA53C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FA53C = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_69;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_69;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  equipmentWarningLabel = this->fields.equipmentWarningLabel;
  if ( !equipmentWarningLabel )
    goto LABEL_69;
  UILabel__set_text(equipmentWarningLabel, (System_String_o *)StringLiteral_1, 0LL);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( !removeWarningLabel )
    goto LABEL_69;
  UILabel__set_text(removeWarningLabel, (System_String_o *)StringLiteral_1, 0LL);
  itemInfoLabel = this->fields.itemInfoLabel;
  if ( !itemInfoLabel )
    goto LABEL_69;
  UILabel__set_text(itemInfoLabel, (System_String_o *)StringLiteral_1, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_69;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !decideButtonLabel )
    goto LABEL_69;
  UILabel__set_text(decideButtonLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  if ( !cancelButtonLabel )
    goto LABEL_69;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !closeButtonLabel )
    goto LABEL_69;
  UILabel__set_text(closeButtonLabel, (System_String_o *)StringLiteral_1, 0LL);
  haveQpLabel = this->fields.haveQpLabel;
  if ( !haveQpLabel )
    goto LABEL_69;
  UILabel__set_text(haveQpLabel, (System_String_o *)StringLiteral_1, 0LL);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  if ( !haveQpTxtLabel )
    goto LABEL_69;
  UILabel__set_text(haveQpTxtLabel, (System_String_o *)StringLiteral_1, 0LL);
  spendQpLabel = this->fields.spendQpLabel;
  if ( !spendQpLabel )
    goto LABEL_69;
  UILabel__set_text(spendQpLabel, (System_String_o *)StringLiteral_1, 0LL);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  if ( !spendQpTxtLabel )
    goto LABEL_69;
  UILabel__set_text(spendQpTxtLabel, (System_String_o *)StringLiteral_1, 0LL);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  if ( !haveItemTxtLabel )
    goto LABEL_69;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)StringLiteral_1, 0LL);
  haveItemNumLabel = this->fields.haveItemNumLabel;
  if ( !haveItemNumLabel )
    goto LABEL_69;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  spendItemTxtLabel = this->fields.spendItemTxtLabel;
  if ( !spendItemTxtLabel )
    goto LABEL_69;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)StringLiteral_1, 0LL);
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( !spendItemNumLabel )
    goto LABEL_69;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  overwriteCommandCodeWarningLabel = this->fields.overwriteCommandCodeWarningLabel;
  if ( !overwriteCommandCodeWarningLabel )
    goto LABEL_69;
  UILabel__set_text(overwriteCommandCodeWarningLabel, (System_String_o *)StringLiteral_1, 0LL);
  equipedCommandCodeSkillName = this->fields.equipedCommandCodeSkillName;
  if ( !equipedCommandCodeSkillName )
    goto LABEL_69;
  UILabel__set_text(equipedCommandCodeSkillName, (System_String_o *)StringLiteral_1, 0LL);
  equipedCommandCodeSkillDetail = this->fields.equipedCommandCodeSkillDetail;
  if ( !equipedCommandCodeSkillDetail )
    goto LABEL_69;
  UILabel__set_text(equipedCommandCodeSkillDetail, (System_String_o *)StringLiteral_1, 0LL);
  overwriteCommandCodeSkillName = this->fields.overwriteCommandCodeSkillName;
  if ( !overwriteCommandCodeSkillName )
    goto LABEL_69;
  UILabel__set_text(overwriteCommandCodeSkillName, (System_String_o *)StringLiteral_1, 0LL);
  overwriteCommandCodeSkillDetail = this->fields.overwriteCommandCodeSkillDetail;
  if ( !overwriteCommandCodeSkillDetail )
    goto LABEL_69;
  UILabel__set_text(overwriteCommandCodeSkillDetail, (System_String_o *)StringLiteral_1, 0LL);
  answerBackLabel = this->fields.answerBackLabel;
  if ( !answerBackLabel )
    goto LABEL_69;
  UILabel__set_text(answerBackLabel, (System_String_o *)StringLiteral_1, 0LL);
  lockResultLabel = this->fields.lockResultLabel;
  if ( !lockResultLabel )
    goto LABEL_69;
  UILabel__set_text(lockResultLabel, (System_String_o *)StringLiteral_1, 0LL);
  itemNumLabel = this->fields.itemNumLabel;
  if ( !itemNumLabel )
    goto LABEL_69;
  UILabel__set_text(itemNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(canExecuteButtonsObj, 0, 0LL);
  canNotExecuteButtonObj = this->fields.canNotExecuteButtonObj;
  if ( !canNotExecuteButtonObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(canNotExecuteButtonObj, 0, 0LL);
  unlockItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid;
  if ( !unlockItemGrid )
    goto LABEL_69;
  transform = UnityEngine_Component__get_transform(unlockItemGrid, 0LL);
  if ( !transform )
    goto LABEL_69;
  v33 = UnityEngine_Transform__get_childCount(transform, 0LL) - 1;
  if ( v33 >= 0 )
  {
    while ( 1 )
    {
      v34 = this->fields.unlockItemGrid;
      if ( !v34 )
        break;
      Child = (UnityEngine_Component_o *)UIGrid__GetChild(v34, v33, 0LL);
      if ( !Child )
        break;
      v36 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Child, 0LL);
      if ( !v36 )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v36, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
      if ( --v33 < 0 )
        goto LABEL_40;
    }
LABEL_69:
    sub_B170D4();
  }
LABEL_40:
  removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
  if ( !removeItemGrid )
    goto LABEL_69;
  v39 = UnityEngine_Component__get_transform(removeItemGrid, 0LL);
  if ( !v39 )
    goto LABEL_69;
  v40 = UnityEngine_Transform__get_childCount(v39, 0LL) - 1;
  if ( v40 >= 0 )
  {
    do
    {
      v41 = this->fields.removeItemGrid;
      if ( !v41 )
        goto LABEL_69;
      v42 = (UnityEngine_Component_o *)UIGrid__GetChild(v41, v40, 0LL);
      if ( !v42 )
        goto LABEL_69;
      v43 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v42, 0LL);
      if ( !v43 )
        goto LABEL_69;
      v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v43, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v44, 0LL);
    }
    while ( --v40 >= 0 );
  }
  returnItemGrid = (UnityEngine_Component_o *)this->fields.returnItemGrid;
  if ( !returnItemGrid )
    goto LABEL_69;
  v46 = UnityEngine_Component__get_transform(returnItemGrid, 0LL);
  if ( !v46 )
    goto LABEL_69;
  v47 = UnityEngine_Transform__get_childCount(v46, 0LL) - 1;
  if ( v47 >= 0 )
  {
    do
    {
      v48 = this->fields.returnItemGrid;
      if ( !v48 )
        goto LABEL_69;
      v49 = (UnityEngine_Component_o *)UIGrid__GetChild(v48, v47, 0LL);
      if ( !v49 )
        goto LABEL_69;
      v50 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v49, 0LL);
      if ( !v50 )
        goto LABEL_69;
      v51 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v50, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v51, 0LL);
    }
    while ( --v47 >= 0 );
  }
  equipmentCommandCardObj = this->fields.equipmentCommandCardObj;
  if ( !equipmentCommandCardObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(equipmentCommandCardObj, 0, 0LL);
  unlockInfoObj = this->fields.unlockInfoObj;
  if ( !unlockInfoObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(unlockInfoObj, 0, 0LL);
  removeCommandCardSlotObj = this->fields.removeCommandCardSlotObj;
  if ( !removeCommandCardSlotObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(removeCommandCardSlotObj, 0, 0LL);
  warningCommandCodeObj = this->fields.warningCommandCodeObj;
  if ( !warningCommandCodeObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(warningCommandCodeObj, 0, 0LL);
  overwriteCommandCodeObj = this->fields.overwriteCommandCodeObj;
  if ( !overwriteCommandCodeObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(overwriteCommandCodeObj, 0, 0LL);
  lockResultInfoObj = this->fields.lockResultInfoObj;
  if ( !lockResultInfoObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(lockResultInfoObj, 0, 0LL);
  removeCommandCodeConfirmObj = this->fields.removeCommandCodeConfirmObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(removeCommandCodeConfirmObj, 0, 0LL);
  v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v59 )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(v59, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardDialog__OnClickCancel(CommandCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *removeItemGrid; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *unlockItemGrid; // x0
  UnityEngine_GameObject_o *v6; // x0
  CommandCardDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_40FA544 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA544 = 1;
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
      || (gameObject = UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (unlockItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (v6 = UnityEngine_Component__get_gameObject(unlockItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(v6, 0, 0LL), (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_B170D4();
    }
    CommandCardDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *removeItemGrid; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *unlockItemGrid; // x0
  UnityEngine_GameObject_o *v6; // x0
  CommandCardDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_40FA543 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA543 = 1;
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
      || (gameObject = UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (unlockItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (v6 = UnityEngine_Component__get_gameObject(unlockItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(v6, 0, 0LL), (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_B170D4();
    }
    CommandCardDialog_ClickDelegate__Invoke(closeFunc, 1, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantCommandCodeUnlockMaster_o *v29; // x23
  __int64 v30; // x22
  __int64 v31; // x24
  int32_t v32; // w0
  ServantCommandCodeUnlockEntity_o *v33; // x0
  struct System_Int32_array *itemIds; // x23
  struct UnityEngine_GameObject_o *releaseItemObj; // x21
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v39; // x22
  UnityEngine_Transform_o *v40; // x0
  UnityEngine_Transform_o *v41; // x22
  int v42; // s0
  UnityEngine_Transform_o *v45; // x22
  int v46; // s0
  UnityEngine_Transform_o *v50; // x22
  CommandCardDialog_c *v51; // x8
  LimitCntUpItemComponent_o *Component_srcLineSprite; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  WebViewManager_o *v55; // x0
  UserItemMaster_o *v56; // x21
  int32_t num; // w24
  Il2CppObject *age; // x21
  WebViewManager_o *v59; // x0
  UILabel_o *titleLabel; // x0
  UILabel_o *lockResultLabel; // x22
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v65; // x22
  Il2CppObject *v66; // x23
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *closeButtonLabel; // x21
  System_String_o *v70; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *unlockInfoObj; // x0
  UnityEngine_GameObject_o *equipmentCommandCardObj; // x0
  UnityEngine_GameObject_o *removeCommandCardSlotObj; // x0
  UnityEngine_GameObject_o *warningCommandCodeObj; // x0
  UnityEngine_GameObject_o *overwriteCommandCodeObj; // x0
  UnityEngine_Component_o *unlockItemGrid; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *removeCommandCodeConfirmObj; // x0
  UnityEngine_GameObject_o *lockResultInfoObj; // x0
  UnityEngine_Component_o *returnItemGrid; // x0
  UnityEngine_GameObject_o *v83; // x0
  UIGrid_o *v84; // x0
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *canNotExecuteButtonObj; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  System_Action_o *v97; // x20
  int32_t v98; // [xsp+0h] [xbp-50h] BYREF
  int v99; // [xsp+4h] [xbp-4Ch] BYREF
  WarEntity_o *v100; // [xsp+8h] [xbp-48h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  if ( (byte_40FA53E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseUserServantEntity);
    sub_B16FFC(&Method_CommandCardDialog_EndOpen__, v9);
    sub_B16FFC(&CommandCardDialog_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_3224, v23);
    sub_B16FFC(&StringLiteral_3225, v24);
    sub_B16FFC(&StringLiteral_3252, v25);
    sub_B16FFC(&StringLiteral_1, v26);
    byte_40FA53E = 1;
  }
  entity = 0LL;
  v100 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_65;
  v29 = (ServantCommandCodeUnlockMaster_o *)MasterData_WarQuestSelectionMaster;
  v31 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v102.fields.currentCryptoKey = v31;
  *(_QWORD *)&v102.fields.fakeValue = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v102, 0LL);
  if ( !v29 )
    goto LABEL_65;
  v33 = ServantCommandCodeUnlockMaster__GetEntity(v29, v32, cardIdx, 0LL);
  if ( !v33 )
    goto LABEL_65;
  itemIds = v33->fields.itemIds;
  releaseItemObj = this->fields.releaseItemObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v36 )
    goto LABEL_65;
  v37 = v36;
  transform = UnityEngine_GameObject__get_transform(v36, 0LL);
  if ( !this->fields.returnItemGrid )
    goto LABEL_65;
  v39 = transform;
  v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0LL);
  if ( !v39 )
    goto LABEL_65;
  UnityEngine_Transform__set_parent(v39, v40, 0LL);
  v41 = UnityEngine_GameObject__get_transform(v37, 0LL);
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v41 )
    goto LABEL_65;
  UnityEngine_Transform__set_localPosition(v41, *(UnityEngine_Vector3_o *)&v42, 0LL);
  v45 = UnityEngine_GameObject__get_transform(v37, 0LL);
  *(UnityEngine_Quaternion_o *)&v46 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v45 )
    goto LABEL_65;
  UnityEngine_Transform__set_localRotation(v45, *(UnityEngine_Quaternion_o *)&v46, 0LL);
  v50 = UnityEngine_GameObject__get_transform(v37, 0LL);
  v51 = CommandCardDialog_TypeInfo;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v51 = CommandCardDialog_TypeInfo;
  }
  if ( !v50 )
    goto LABEL_65;
  UnityEngine_Transform__set_localScale(v50, v51->static_fields->REMOVE_ITEM_SCALE, 0LL);
  Component_srcLineSprite = (LimitCntUpItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v37,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !itemIds )
    goto LABEL_65;
  if ( !itemIds->max_length )
    goto LABEL_66;
  if ( !Component_srcLineSprite )
    goto LABEL_65;
  LimitCntUpItemComponent__SetItemIcon(Component_srcLineSprite, itemIds->m_Items[1], 0LL);
  v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v55 )
    goto LABEL_65;
  v56 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v55,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Component_srcLineSprite = (LimitCntUpItemComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !itemIds->max_length )
    goto LABEL_66;
  if ( !v56 )
    goto LABEL_65;
  if ( UserItemMaster__TryGetEntity(v56, &entity, (int64_t)Component_srcLineSprite, itemIds->m_Items[1], 0LL) )
  {
    if ( !entity )
      goto LABEL_65;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  age = (Il2CppObject *)StringLiteral_1;
  v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v59 )
    goto LABEL_65;
  Component_srcLineSprite = (LimitCntUpItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v59,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemIds->max_length )
  {
LABEL_66:
    sub_B17100(Component_srcLineSprite, v53, v54);
    sub_B170A0();
  }
  if ( !Component_srcLineSprite )
    goto LABEL_65;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Component_srcLineSprite,
         &v100,
         itemIds->m_Items[1],
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    if ( !v100 )
      goto LABEL_65;
    age = (Il2CppObject *)v100->fields.age;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_65;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  lockResultLabel = this->fields.lockResultLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3225, 0LL);
  v63 = System_String__Format(v62, age, 0LL);
  if ( !lockResultLabel )
    goto LABEL_65;
  UILabel__set_text(lockResultLabel, v63, 0LL);
  itemNumLabel = this->fields.itemNumLabel;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_3224, 0LL);
  v99 = num - 1;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99);
  v98 = num;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
  v68 = System_String__Format_43739268(v65, v66, v67, 0LL);
  if ( !itemNumLabel )
    goto LABEL_65;
  UILabel__set_text(itemNumLabel, v68, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_65;
  UILabel__set_text(closeButtonLabel, v70, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_65;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !gameObject )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  unlockInfoObj = this->fields.unlockInfoObj;
  if ( !unlockInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(unlockInfoObj, 0, 0LL);
  equipmentCommandCardObj = this->fields.equipmentCommandCardObj;
  if ( !equipmentCommandCardObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(equipmentCommandCardObj, 0, 0LL);
  removeCommandCardSlotObj = this->fields.removeCommandCardSlotObj;
  if ( !removeCommandCardSlotObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(removeCommandCardSlotObj, 0, 0LL);
  warningCommandCodeObj = this->fields.warningCommandCodeObj;
  if ( !warningCommandCodeObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(warningCommandCodeObj, 0, 0LL);
  overwriteCommandCodeObj = this->fields.overwriteCommandCodeObj;
  if ( !overwriteCommandCodeObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(overwriteCommandCodeObj, 0, 0LL);
  unlockItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid;
  if ( !unlockItemGrid )
    goto LABEL_65;
  v79 = UnityEngine_Component__get_gameObject(unlockItemGrid, 0LL);
  if ( !v79 )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(v79, 0, 0LL);
  removeCommandCodeConfirmObj = this->fields.removeCommandCodeConfirmObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(removeCommandCodeConfirmObj, 0, 0LL);
  lockResultInfoObj = this->fields.lockResultInfoObj;
  if ( !lockResultInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(lockResultInfoObj, 1, 0LL);
  returnItemGrid = (UnityEngine_Component_o *)this->fields.returnItemGrid;
  if ( !returnItemGrid
    || (v83 = UnityEngine_Component__get_gameObject(returnItemGrid, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v83, 1, 0LL), (v84 = this->fields.returnItemGrid) == 0LL)
    || (UIGrid__set_repositionNow(v84, 1, 0LL), (canExecuteButtonsObj = this->fields.canExecuteButtonsObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(canExecuteButtonsObj, 0, 0LL),
        (canNotExecuteButtonObj = this->fields.canNotExecuteButtonObj) == 0LL) )
  {
LABEL_65:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(canNotExecuteButtonObj, 1, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v97 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v93, v94, v95, v96);
  System_Action___ctor(v97, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v97, 0, 0LL);
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
  System_String_o *v31; // x0
  UILabel_o *messageLabel; // x22
  System_String_o *v33; // x0
  UILabel_o *removeWarningLabel; // x22
  System_String_o *v35; // x1
  struct UILabel_o *v36; // x22
  System_String_o *mText; // x23
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  UILabel_o *v40; // x0
  UILabel_o *spendItemTxtLabel; // x21
  System_String_o *v42; // x0
  UILabel_o *haveItemTxtLabel; // x21
  System_String_o *v44; // x0
  int32_t Value; // w0
  struct UnityEngine_GameObject_o *releaseItemObj; // x22
  int32_t v47; // w21
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v51; // x23
  UnityEngine_Transform_o *v52; // x0
  UnityEngine_Transform_o *v53; // x23
  int v54; // s0
  UnityEngine_Transform_o *v57; // x23
  int v58; // s0
  UnityEngine_Transform_o *v62; // x23
  CommandCardDialog_c *v63; // x8
  LimitCntUpItemComponent_o *Component_srcLineSprite; // x0
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  CommandCardDialog_c *v72; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  UnityEngine_Component_o *v76; // x0
  int32_t v77; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *removeCommandCardSlotObj; // x0
  UnityEngine_GameObject_o *equipmentCommandCardObj; // x0
  UnityEngine_GameObject_o *unlockInfoObj; // x0
  UnityEngine_Component_o *removeItemGrid; // x0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_GameObject_o *warningCommandCodeObj; // x0
  UnityEngine_GameObject_o *overwriteCommandCodeObj; // x0
  UnityEngine_GameObject_o *lockResultInfoObj; // x0
  UnityEngine_GameObject_o *removeCommandCodeConfirmObj; // x0
  UIGrid_o *v88; // x0
  UILabel_o *v89; // x21
  System_String_o *v90; // x0
  UILabel_o *closeButtonLabel; // x21
  System_String_o *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_Component_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  bool v97; // w1
  UILabel_o *decideButtonLabel; // x21
  System_String_o *v99; // x0
  UILabel_o *cancelButtonLabel; // x21
  System_String_o *v101; // x0
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *canNotExecuteButtonObj; // x0
  UnityEngine_Component_o *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  System_Action_o *v115; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+0h] [xbp-50h] BYREF
  int32_t v117; // [xsp+4h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FA53F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, equipped);
    sub_B16FFC(&Method_CommandCardDialog_EndOpen__, v7);
    sub_B16FFC(&CommandCardDialog_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_3221, v17);
    sub_B16FFC(&StringLiteral_3226, v18);
    sub_B16FFC(&StringLiteral_3222, v19);
    sub_B16FFC(&StringLiteral_3220, v20);
    sub_B16FFC(&StringLiteral_3228, v21);
    sub_B16FFC(&StringLiteral_3253, v22);
    sub_B16FFC(&StringLiteral_3251, v23);
    sub_B16FFC(&StringLiteral_3252, v24);
    sub_B16FFC(&StringLiteral_23395, v25);
    sub_B16FFC(&StringLiteral_3227, v26);
    sub_B16FFC(&StringLiteral_3223, v27);
    sub_B16FFC(&StringLiteral_1, v28);
    sub_B16FFC(&StringLiteral_3216, v29);
    byte_40FA53F = 1;
  }
  entity = 0LL;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3227, 0LL);
  if ( !titleLabel )
    goto LABEL_88;
  UILabel__set_text(titleLabel, v31, 0LL);
  messageLabel = this->fields.messageLabel;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3223, 0LL);
  if ( !messageLabel )
    goto LABEL_88;
  UILabel__set_text(messageLabel, v33, 0LL);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( equipped )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3221, 0LL);
    if ( !removeWarningLabel )
      goto LABEL_88;
  }
  else
  {
    v35 = (System_String_o *)StringLiteral_1;
    if ( !removeWarningLabel )
      goto LABEL_88;
  }
  UILabel__set_text(removeWarningLabel, v35, 0LL);
  v36 = this->fields.removeWarningLabel;
  if ( !v36 )
    goto LABEL_88;
  mText = v36->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3220, 0LL);
  v39 = System_String__Concat_43743732(mText, v38, 0LL);
  UILabel__set_text(v36, v39, 0LL);
  if ( equipped )
  {
    v40 = this->fields.removeWarningLabel;
    if ( !v40 )
      goto LABEL_88;
    UILabel__set_fontSize(v40, 20, 0LL);
  }
  spendItemTxtLabel = this->fields.spendItemTxtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3226, 0LL);
  if ( !spendItemTxtLabel )
    goto LABEL_88;
  UILabel__set_text(spendItemTxtLabel, v42, 0LL);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3222, 0LL);
  if ( !haveItemTxtLabel )
    goto LABEL_88;
  UILabel__set_text(haveItemTxtLabel, v44, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3216, 0LL);
  releaseItemObj = this->fields.releaseItemObj;
  v47 = Value;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v48 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v48 )
    goto LABEL_88;
  v49 = v48;
  transform = UnityEngine_GameObject__get_transform(v48, 0LL);
  if ( !this->fields.removeItemGrid )
    goto LABEL_88;
  v51 = transform;
  v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0LL);
  if ( !v51 )
    goto LABEL_88;
  UnityEngine_Transform__set_parent(v51, v52, 0LL);
  v53 = UnityEngine_GameObject__get_transform(v49, 0LL);
  *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v53 )
    goto LABEL_88;
  UnityEngine_Transform__set_localPosition(v53, *(UnityEngine_Vector3_o *)&v54, 0LL);
  v57 = UnityEngine_GameObject__get_transform(v49, 0LL);
  *(UnityEngine_Quaternion_o *)&v58 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v57 )
    goto LABEL_88;
  UnityEngine_Transform__set_localRotation(v57, *(UnityEngine_Quaternion_o *)&v58, 0LL);
  v62 = UnityEngine_GameObject__get_transform(v49, 0LL);
  v63 = CommandCardDialog_TypeInfo;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v63 = CommandCardDialog_TypeInfo;
  }
  if ( !v62 )
    goto LABEL_88;
  UnityEngine_Transform__set_localScale(v62, v63->static_fields->REMOVE_ITEM_SCALE, 0LL);
  Component_srcLineSprite = (LimitCntUpItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v49,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_88;
  LimitCntUpItemComponent__SetItemIcon(Component_srcLineSprite, v47, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_88;
  if ( UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, v47, 0LL) )
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
  v117 = num;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117);
  v71 = System_String__Format((System_String_o *)StringLiteral_23395, v70, 0LL);
  if ( !haveItemNumLabel )
    goto LABEL_88;
  UILabel__set_text(haveItemNumLabel, v71, 0LL);
  v72 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v72 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v72->static_fields->DETACH_NEED_ITEM_NUM;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM);
  v75 = System_String__Format((System_String_o *)StringLiteral_23395, v74, 0LL);
  if ( !spendItemNumLabel )
    goto LABEL_88;
  UILabel__set_text(spendItemNumLabel, v75, 0LL);
  v76 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v76 )
    goto LABEL_88;
  v77 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
  gameObject = UnityEngine_Component__get_gameObject(v76, 0LL);
  if ( !gameObject )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  removeCommandCardSlotObj = this->fields.removeCommandCardSlotObj;
  if ( !removeCommandCardSlotObj )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(removeCommandCardSlotObj, 1, 0LL);
  equipmentCommandCardObj = this->fields.equipmentCommandCardObj;
  if ( !equipmentCommandCardObj )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(equipmentCommandCardObj, 0, 0LL);
  unlockInfoObj = this->fields.unlockInfoObj;
  if ( !unlockInfoObj )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(unlockInfoObj, 0, 0LL);
  removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
  if ( !removeItemGrid )
    goto LABEL_88;
  v83 = UnityEngine_Component__get_gameObject(removeItemGrid, 0LL);
  if ( !v83 )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(v83, 1, 0LL);
  warningCommandCodeObj = this->fields.warningCommandCodeObj;
  if ( !warningCommandCodeObj )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(warningCommandCodeObj, 0, 0LL);
  overwriteCommandCodeObj = this->fields.overwriteCommandCodeObj;
  if ( !overwriteCommandCodeObj
    || (UnityEngine_GameObject__SetActive(overwriteCommandCodeObj, 0, 0LL),
        (lockResultInfoObj = this->fields.lockResultInfoObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(lockResultInfoObj, 0, 0LL),
        (removeCommandCodeConfirmObj = this->fields.removeCommandCodeConfirmObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(removeCommandCodeConfirmObj, 0, 0LL),
        (v88 = this->fields.removeItemGrid) == 0LL) )
  {
LABEL_88:
    sub_B170D4();
  }
  UIGrid__set_repositionNow(v88, 1, 0LL);
  if ( num >= v77 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_88;
    UILabel__set_text(decideButtonLabel, v99, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    v101 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
    if ( !cancelButtonLabel )
      goto LABEL_88;
    UILabel__set_text(cancelButtonLabel, v101, 0LL);
    canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
    if ( !canExecuteButtonsObj )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive(canExecuteButtonsObj, 1, 0LL);
    canNotExecuteButtonObj = this->fields.canNotExecuteButtonObj;
    if ( !canNotExecuteButtonObj )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive(canNotExecuteButtonObj, 0, 0LL);
    v104 = (UnityEngine_Component_o *)this->fields.removeWarningLabel;
    if ( !v104 )
      goto LABEL_88;
    v96 = UnityEngine_Component__get_gameObject(v104, 0LL);
    if ( !v96 )
      goto LABEL_88;
    v97 = 1;
  }
  else
  {
    v89 = this->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3228, 0LL);
    if ( !v89 )
      goto LABEL_88;
    UILabel__set_text(v89, v90, 0LL);
    closeButtonLabel = this->fields.closeButtonLabel;
    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
    if ( !closeButtonLabel )
      goto LABEL_88;
    UILabel__set_text(closeButtonLabel, v92, 0LL);
    v93 = this->fields.canExecuteButtonsObj;
    if ( !v93 )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive(v93, 0, 0LL);
    v94 = this->fields.canNotExecuteButtonObj;
    if ( !v94 )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive(v94, 1, 0LL);
    v95 = (UnityEngine_Component_o *)this->fields.removeWarningLabel;
    if ( !v95 )
      goto LABEL_88;
    v96 = UnityEngine_Component__get_gameObject(v95, 0LL);
    if ( !v96 )
      goto LABEL_88;
    v97 = 0;
  }
  UnityEngine_GameObject__SetActive(v96, v97, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v115 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v111, v112, v113, v114);
  System_Action___ctor(v115, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v115, 0, 0LL);
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
  System_String_o *v15; // x0
  UILabel_o *messageLabel; // x22
  System_String_o *v17; // x0
  UILabel_o *removeDetailLabel; // x22
  System_String_o *v19; // x0
  UILabel_o *decideButtonLabel; // x22
  System_String_o *v21; // x0
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v23; // x0
  UnityEngine_GameObject_o *removeCommandCodeConfirmObj; // x0
  CombineCommandCardEquipmentComponent_o *equippedCommandCardIcon; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *equipmentCommandCardObj; // x0
  UnityEngine_GameObject_o *unlockInfoObj; // x0
  UnityEngine_GameObject_o *removeCommandCardSlotObj; // x0
  UnityEngine_GameObject_o *warningCommandCodeObj; // x0
  UnityEngine_GameObject_o *overwriteCommandCodeObj; // x0
  UnityEngine_GameObject_o *lockResultInfoObj; // x0
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *canNotExecuteButtonObj; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x20

  if ( (byte_40FA540 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, userCommandCode);
    sub_B16FFC(&Method_CommandCardDialog_EndOpen__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_3236, v9);
    sub_B16FFC(&StringLiteral_3232, v10);
    sub_B16FFC(&StringLiteral_3253, v11);
    sub_B16FFC(&StringLiteral_3251, v12);
    sub_B16FFC(&StringLiteral_3233, v13);
    byte_40FA540 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3236, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, v15, 0LL);
  messageLabel = this->fields.messageLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3233, 0LL);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, v17, 0LL);
  removeDetailLabel = this->fields.removeDetailLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3232, 0LL);
  if ( !removeDetailLabel )
    goto LABEL_24;
  UILabel__set_text(removeDetailLabel, v19, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_24;
  UILabel__set_text(decideButtonLabel, v21, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_24;
  UILabel__set_text(cancelButtonLabel, v23, 0LL);
  removeCommandCodeConfirmObj = this->fields.removeCommandCodeConfirmObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(removeCommandCodeConfirmObj, 1, 0LL);
  equippedCommandCardIcon = this->fields.equippedCommandCardIcon;
  if ( !equippedCommandCardIcon )
    goto LABEL_24;
  CombineCommandCardEquipmentComponent__SetIconNoDispStatus(equippedCommandCardIcon, userCommandCode, 0LL);
  v26 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v26 )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  equipmentCommandCardObj = this->fields.equipmentCommandCardObj;
  if ( !equipmentCommandCardObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(equipmentCommandCardObj, 0, 0LL);
  unlockInfoObj = this->fields.unlockInfoObj;
  if ( !unlockInfoObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(unlockInfoObj, 0, 0LL);
  removeCommandCardSlotObj = this->fields.removeCommandCardSlotObj;
  if ( !removeCommandCardSlotObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(removeCommandCardSlotObj, 0, 0LL);
  warningCommandCodeObj = this->fields.warningCommandCodeObj;
  if ( !warningCommandCodeObj )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(warningCommandCodeObj, 0, 0LL);
  overwriteCommandCodeObj = this->fields.overwriteCommandCodeObj;
  if ( !overwriteCommandCodeObj
    || (UnityEngine_GameObject__SetActive(overwriteCommandCodeObj, 0, 0LL),
        (lockResultInfoObj = this->fields.lockResultInfoObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(lockResultInfoObj, 0, 0LL),
        (canExecuteButtonsObj = this->fields.canExecuteButtonsObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(canExecuteButtonsObj, 1, 0LL),
        (canNotExecuteButtonObj = this->fields.canNotExecuteButtonObj) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(canNotExecuteButtonObj, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
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
  System_String_o *v26; // x0
  UILabel_o *itemInfoLabel; // x21
  System_String_o *v28; // x0
  UILabel_o *spendQpTxtLabel; // x21
  System_String_o *v30; // x0
  UILabel_o *haveQpTxtLabel; // x21
  System_String_o *v32; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *haveQpLabel; // x24
  UserGameEntity_o *v35; // x21
  System_String_o *v36; // x0
  UILabel_o *decideButtonLabel; // x24
  System_String_o *v38; // x0
  UILabel_o *cancelButtonLabel; // x24
  System_String_o *v40; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantCommandCodeUnlockMaster_o *v43; // x24
  __int64 v44; // x23
  __int64 v45; // x25
  int32_t v46; // w0
  ServantCommandCodeUnlockEntity_o *Entity; // x0
  UILabel_o *spendQpLabel; // x23
  ServantCommandCodeUnlockEntity_o *v49; // x22
  System_String_o *v50; // x0
  struct System_Int32_array *itemIds; // x24
  __int64 v52; // x8
  struct System_Int32_array *itemNums; // x27
  unsigned __int64 v54; // x25
  signed __int64 v55; // x28
  struct UnityEngine_GameObject_o *releaseItemObj; // x22
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v60; // x23
  UnityEngine_Transform_o *v61; // x0
  UnityEngine_Transform_o *v62; // x23
  int v63; // s0
  UnityEngine_Transform_o *v66; // x23
  int v67; // s0
  UnityEngine_Transform_o *v71; // x23
  CommandCardDialog_c *v72; // x8
  LimitCntUpItemComponent_o *Component_srcLineSprite; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  UILabel_o *answerBackLabel; // x21
  System_String_o *v77; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *unlockInfoObj; // x0
  UnityEngine_GameObject_o *equipmentCommandCardObj; // x0
  UnityEngine_GameObject_o *removeCommandCardSlotObj; // x0
  UnityEngine_GameObject_o *warningCommandCodeObj; // x0
  UnityEngine_GameObject_o *overwriteCommandCodeObj; // x0
  UnityEngine_GameObject_o *lockResultInfoObj; // x0
  UnityEngine_GameObject_o *removeCommandCodeConfirmObj; // x0
  UnityEngine_Component_o *unlockItemGrid; // x0
  UnityEngine_GameObject_o *v88; // x0
  UIGrid_o *v89; // x0
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *canNotExecuteButtonObj; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  System_Action_o *v102; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_40FA53D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseUserServantEntity);
    sub_B16FFC(&Method_CommandCardDialog_EndOpen__, v8);
    sub_B16FFC(&CommandCardDialog_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_3239, v17);
    sub_B16FFC(&StringLiteral_3160, v18);
    sub_B16FFC(&StringLiteral_3240, v19);
    sub_B16FFC(&StringLiteral_3253, v20);
    sub_B16FFC(&StringLiteral_3251, v21);
    sub_B16FFC(&StringLiteral_9236, v22);
    sub_B16FFC(&StringLiteral_3241, v23);
    sub_B16FFC(&StringLiteral_3219, v24);
    byte_40FA53D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3241, 0LL);
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, v26, 0LL);
  itemInfoLabel = this->fields.itemInfoLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3219, 0LL);
  if ( !itemInfoLabel )
    goto LABEL_61;
  UILabel__set_text(itemInfoLabel, v28, 0LL);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3240, 0LL);
  if ( !spendQpTxtLabel )
    goto LABEL_61;
  UILabel__set_text(spendQpTxtLabel, v30, 0LL);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3160, 0LL);
  if ( !haveQpTxtLabel )
    goto LABEL_61;
  UILabel__set_text(haveQpTxtLabel, v32, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_61;
  haveQpLabel = this->fields.haveQpLabel;
  v35 = SelfUserGame;
  v36 = System_Int32__ToString_38275808((int)SelfUserGame + 96, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !haveQpLabel )
    goto LABEL_61;
  UILabel__set_text(haveQpLabel, v36, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_61;
  UILabel__set_text(decideButtonLabel, v38, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_61;
  UILabel__set_text(cancelButtonLabel, v40, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_61;
  v43 = (ServantCommandCodeUnlockMaster_o *)MasterData_WarQuestSelectionMaster;
  v45 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v104.fields.currentCryptoKey = v45;
  *(_QWORD *)&v104.fields.fakeValue = v44;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v104, 0LL);
  if ( !v43 )
    goto LABEL_61;
  Entity = ServantCommandCodeUnlockMaster__GetEntity(v43, v46, cardIdx, 0LL);
  if ( !Entity )
    goto LABEL_61;
  spendQpLabel = this->fields.spendQpLabel;
  v49 = Entity;
  v50 = System_Int32__ToString_38275808((int)Entity + 24, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !spendQpLabel )
    goto LABEL_61;
  UILabel__set_text(spendQpLabel, v50, 0LL);
  itemIds = v49->fields.itemIds;
  if ( !itemIds )
    goto LABEL_61;
  v52 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v52 >= 1 )
  {
    itemNums = v49->fields.itemNums;
    v54 = 0LL;
    v55 = (int)v52;
    while ( 1 )
    {
      releaseItemObj = this->fields.releaseItemObj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v57 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)releaseItemObj,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v57 )
        break;
      v58 = v57;
      transform = UnityEngine_GameObject__get_transform(v57, 0LL);
      if ( !this->fields.unlockItemGrid )
        break;
      v60 = transform;
      v61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.unlockItemGrid, 0LL);
      if ( !v60 )
        break;
      UnityEngine_Transform__set_parent(v60, v61, 0LL);
      v62 = UnityEngine_GameObject__get_transform(v58, 0LL);
      *(UnityEngine_Vector3_o *)&v63 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v62 )
        break;
      UnityEngine_Transform__set_localPosition(v62, *(UnityEngine_Vector3_o *)&v63, 0LL);
      v66 = UnityEngine_GameObject__get_transform(v58, 0LL);
      *(UnityEngine_Quaternion_o *)&v67 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v66 )
        break;
      UnityEngine_Transform__set_localRotation(v66, *(UnityEngine_Quaternion_o *)&v67, 0LL);
      v71 = UnityEngine_GameObject__get_transform(v58, 0LL);
      v72 = CommandCardDialog_TypeInfo;
      if ( (BYTE3(CommandCardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
        v72 = CommandCardDialog_TypeInfo;
      }
      if ( !v71 )
        break;
      UnityEngine_Transform__set_localScale(v71, v72->static_fields->UNLOCK_ITEM_SCALE, 0LL);
      Component_srcLineSprite = (LimitCntUpItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v58,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v54 >= itemIds->max_length )
        goto LABEL_62;
      if ( !itemNums )
        break;
      if ( v54 >= itemNums->max_length )
      {
LABEL_62:
        sub_B17100(Component_srcLineSprite, v74, v75);
        sub_B170A0();
      }
      if ( !Component_srcLineSprite )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        Component_srcLineSprite,
        v35->fields.userId,
        itemIds->m_Items[v54 + 1],
        itemNums->m_Items[v54 + 1],
        0LL);
      if ( (__int64)++v54 >= v55 )
        goto LABEL_42;
    }
LABEL_61:
    sub_B170D4();
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_3239, 0LL);
  if ( !answerBackLabel )
    goto LABEL_61;
  UILabel__set_text(answerBackLabel, v77, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_61;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !gameObject )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  unlockInfoObj = this->fields.unlockInfoObj;
  if ( !unlockInfoObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(unlockInfoObj, 1, 0LL);
  equipmentCommandCardObj = this->fields.equipmentCommandCardObj;
  if ( !equipmentCommandCardObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(equipmentCommandCardObj, 0, 0LL);
  removeCommandCardSlotObj = this->fields.removeCommandCardSlotObj;
  if ( !removeCommandCardSlotObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(removeCommandCardSlotObj, 0, 0LL);
  warningCommandCodeObj = this->fields.warningCommandCodeObj;
  if ( !warningCommandCodeObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(warningCommandCodeObj, 0, 0LL);
  overwriteCommandCodeObj = this->fields.overwriteCommandCodeObj;
  if ( !overwriteCommandCodeObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(overwriteCommandCodeObj, 0, 0LL);
  lockResultInfoObj = this->fields.lockResultInfoObj;
  if ( !lockResultInfoObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(lockResultInfoObj, 0, 0LL);
  removeCommandCodeConfirmObj = this->fields.removeCommandCodeConfirmObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(removeCommandCodeConfirmObj, 0, 0LL);
  unlockItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid;
  if ( !unlockItemGrid )
    goto LABEL_61;
  v88 = UnityEngine_Component__get_gameObject(unlockItemGrid, 0LL);
  if ( !v88 )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(v88, 1, 0LL);
  v89 = this->fields.unlockItemGrid;
  if ( !v89 )
    goto LABEL_61;
  UIGrid__set_repositionNow(v89, 1, 0LL);
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(canExecuteButtonsObj, 1, 0LL);
  canNotExecuteButtonObj = this->fields.canNotExecuteButtonObj;
  if ( !canNotExecuteButtonObj )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(canNotExecuteButtonObj, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  v102 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v98, v99, v100, v101);
  System_Action___ctor(v102, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v102, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardDialog__get_closeBtnObject(
        CommandCardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v10; // w0
  UnityEngine_GameObject_o *v11; // x0

  if ( (byte_40FA545 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3545, v3);
    byte_40FA545 = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0LL);
  if ( !transform )
    goto LABEL_20;
  v6 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3545, 0LL);
  if ( !v6 )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    v8 = this->fields.canExecuteButtonsObj;
    if ( !v8 )
      goto LABEL_20;
    if ( UnityEngine_GameObject__get_activeSelf(v8, 0LL) )
      return gameObject;
  }
  canNotExecuteButtonObj = (UnityEngine_Object_o *)this->fields.canNotExecuteButtonObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(canNotExecuteButtonObj, 0LL, 0LL);
  gameObject = 0LL;
  if ( v10 )
  {
    v11 = this->fields.canNotExecuteButtonObj;
    if ( v11 )
    {
      gameObject = 0LL;
      if ( UnityEngine_GameObject__get_activeSelf(v11, 0LL) )
        return this->fields.canNotExecuteButtonObj;
      return gameObject;
    }
LABEL_20:
    sub_B170D4();
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7134 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F7134 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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