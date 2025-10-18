void CommandCardDialog___cctor(const MethodInfo *method)
{
  struct CommandCardDialog_StaticFields *static_fields; // x8
  int32x2_t *v2; // x8

  if ( (byte_4C46E74 & 1) == 0 )
  {
    sub_1C37058(&CommandCardDialog_TypeInfo);
    byte_4C46E74 = 1;
  }
  static_fields = CommandCardDialog_TypeInfo->static_fields;
  static_fields->DETACH_NEED_ITEM_NUM = 1;
  *(int32x2_t *)&static_fields->UNLOCK_ITEM_SCALE.fields.x = vdup_n_s32(0x3F19999Au);
  static_fields->UNLOCK_ITEM_SCALE.fields.z = 0.6;
  v2 = (int32x2_t *)CommandCardDialog_TypeInfo->static_fields;
  v2[2].n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v2[3].n64_u32[0] = 1060320051;
}


void CommandCardDialog___ctor(CommandCardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C46E73 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C46E73 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CommandCardDialog__CloaseCombineItemLinkInfoListWindow(
        CommandCardDialog_o *this,
        bool decide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C46E71 & 1) == 0 )
  {
    sub_1C37058(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46E71 = 1;
  }
  v3 = Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0, 0);
}


void CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_48427808(this, 0, v2);
}


void CommandCardDialog__Close_48427808(CommandCardDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4C46E6D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommandCardDialog_EndClose__);
    byte_4C46E6D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeFunc, 0, v6, v7);
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CommandCardDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


void CommandCardDialog__EndClose(CommandCardDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  CommandCardDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void CommandCardDialog__EndOpen(CommandCardDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void CommandCardDialog__GetSkillInfo(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        int32_t *skillId,
        System_String_o **skillName,
        System_String_o **skillDetail,
        const MethodInfo *method)
{
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *v15; // x1
  System_String_o *MargeExplanation_43520736; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_array *explanationList; // [xsp+0h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C46E6C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46E6C = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)skillName, StringLiteral_1/*""*/, (int32_t)skillId, (const MethodInfo *)skillName);
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)skillDetail, StringLiteral_1/*""*/, v10, v11);
  if ( !userCommandCode )
    goto LABEL_9;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0);
  if ( !idList )
    goto LABEL_9;
  if ( !LODWORD(idList->max_length) )
    goto LABEL_10;
  *skillId = idList->m_Items[0];
  if ( !titleList )
LABEL_9:
    sub_1C372B4(v12);
  if ( !LODWORD(titleList->max_length) )
LABEL_10:
    sub_1C372BC(v12);
  v15 = titleList->m_Items[0];
  *skillName = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)skillName, (int32_t)v15, v13, v14);
  MargeExplanation_43520736 = SkillInfo__GetMargeExplanation_43520736(explanationList, 0);
  *skillDetail = MargeExplanation_43520736;
  sub_1C36FFC((CGThumbnailListItem_o *)skillDetail, (int32_t)MargeExplanation_43520736, v17, v18);
}


void CommandCardDialog__Init(CommandCardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v6; // w20
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w20
  UnityEngine_Object_o *v9; // x21

  if ( (byte_4C46E67 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46E67 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.equipmentWarningLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.removeWarningLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.itemInfoLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeButtonLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.haveQpLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.haveQpTxtLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.spendQpLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.spendQpTxtLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.haveItemTxtLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.haveItemNumLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.spendItemTxtLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.spendItemNumLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.overwriteCommandCodeWarningLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.equipedCommandCodeSkillName;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.equipedCommandCodeSkillDetail;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.overwriteCommandCodeSkillName;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.overwriteCommandCodeSkillDetail;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.answerBackLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.lockResultLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.itemNumLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)this->fields.canExecuteButtonsObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.canNotExecuteButtonObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
  if ( !titleLabel )
    goto LABEL_67;
  v4 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0) - 1;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v4, 0);
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      if ( !titleLabel )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)titleLabel,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(gameObject, 0);
      if ( --v4 < 0 )
        goto LABEL_39;
    }
LABEL_67:
    sub_1C372B4(titleLabel);
  }
LABEL_39:
  titleLabel = (UILabel_o *)this->fields.removeItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
  if ( !titleLabel )
    goto LABEL_67;
  v6 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0) - 1;
  if ( v6 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.removeItemGrid;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v6, 0);
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      if ( !titleLabel )
        goto LABEL_67;
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v7, 0);
    }
    while ( --v6 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.returnItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
  if ( !titleLabel )
    goto LABEL_67;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0) - 1;
  if ( v8 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.returnItemGrid;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v8, 0);
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      if ( !titleLabel )
        goto LABEL_67;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v9, 0);
    }
    while ( --v8 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.equipmentCommandCardObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.unlockInfoObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.removeCommandCardSlotObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.warningCommandCodeObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.overwriteCommandCodeObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.lockResultInfoObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.removeCommandCodeConfirmObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.itemLinkListButtonObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CommandCardDialog__OnClickCancel(CommandCardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C46E6F & 1) == 0 )
  {
    sub_1C37058(&Method_CommandCardDialog_OnClickCancel__);
    byte_4C46E6F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CommandCardDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0),
          (closeFunc = this->fields.closeFunc) == 0) )
    {
      sub_1C372B4(removeItemGrid);
    }
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      0,
      closeFunc->fields.method);
  }
}


void CommandCardDialog__OnClickCombineItemLinkInfoListWindow(CommandCardDialog_o *this, const MethodInfo *method)
{
  int32_t Value; // w0
  _QWORD *v4; // x8
  int32_t v5; // w22
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  __int64 v8; // x0
  System_Int32_array *v9; // x21
  CommandCardDialog_c *v10; // x8
  __int64 v11; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v12; // x23

  if ( (byte_4C46E70 & 1) == 0 )
  {
    sub_1C37058(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
    sub_1C37058(&Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
    sub_1C37058(&CommandCardDialog_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_3645/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_4C46E70 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3645/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0);
  v4 = Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__;
  v5 = Value;
  if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = sub_1C37100(int___TypeInfo, 1);
  if ( !v8 )
    goto LABEL_13;
  v9 = (System_Int32_array *)v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_14;
  *(_DWORD *)(v8 + 32) = v5;
  v8 = sub_1C37100(int___TypeInfo, 1);
  v10 = CommandCardDialog_TypeInfo;
  v11 = v8;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v10 = CommandCardDialog_TypeInfo;
  }
  if ( !v11 )
LABEL_13:
    sub_1C372B4(v8);
  if ( !*(_DWORD *)(v11 + 24) )
LABEL_14:
    sub_1C372BC(v8);
  *(_DWORD *)(v11 + 32) = v10->static_fields->DETACH_NEED_ITEM_NUM;
  v12 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C372A4(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__,
    0);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v9, (System_Int32_array *)v11, v12, 0, 0);
}


void CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C46E6E & 1) == 0 )
  {
    sub_1C37058(&Method_CommandCardDialog_OnClickDecide__);
    byte_4C46E6E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CommandCardDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0),
          (closeFunc = this->fields.closeFunc) == 0) )
    {
      sub_1C372B4(removeItemGrid);
    }
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      1,
      closeFunc->fields.method);
  }
}


void CommandCardDialog__OpenLockCommandCardResult(
        CommandCardDialog_o *this,
        UserServantEntity_o *baseUserServantEntity,
        int32_t cardIdx,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  ServantCommandCodeUnlockMaster_o *v10; // x23
  __int64 v11; // x22
  __int64 v12; // x24
  __int64 v13; // x23
  Il2CppObject *releaseItemObj; // x21
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *v18; // x22
  CommandCardDialog_c *v19; // x8
  UnityEngine_Transform_o *v20; // x22
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w24
  Il2CppObject *monitor; // x21
  UILabel_o *lockResultLabel; // x22
  System_String_o *v25; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x0
  UILabel_o *closeButtonLabel; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Action_o *v45; // x20
  int32_t v46; // [xsp+8h] [xbp-58h] BYREF
  int v47; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v48; // [xsp+10h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C46E69 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommandCardDialog_EndOpen__);
    sub_1C37058(&CommandCardDialog_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_3653/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/);
    sub_1C37058(&StringLiteral_3654/*"COMMAND_CODE_LOCK_RETURN_MSG"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46E69 = 1;
  }
  v48 = 0;
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_68;
  v10 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v12;
  *(_QWORD *)&v50.fields.fakeValue = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v50, 0);
  if ( !v10 )
    goto LABEL_68;
  Instance = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v10, Instance, cardIdx, 0);
  if ( !Instance )
    goto LABEL_68;
  v13 = *(_QWORD *)(Instance + 40);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        releaseItemObj,
                        (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_68;
  v15 = (UnityEngine_GameObject_o *)Instance;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !this->fields.returnItemGrid )
    goto LABEL_68;
  v16 = (UnityEngine_Transform_o *)Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0);
  if ( !v16 )
    goto LABEL_68;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v15, 0);
  v17 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C3C921 )
  {
    Instance = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v17 )
    goto LABEL_68;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v15, 0);
  v18 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C3C927 )
  {
    Instance = sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
    byte_4C3C927 = 1;
  }
  if ( !v18 )
    goto LABEL_68;
  UnityEngine_Transform__set_localRotation(v18, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v15, 0);
  v19 = CommandCardDialog_TypeInfo;
  v20 = (UnityEngine_Transform_o *)Instance;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v19 = CommandCardDialog_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_68;
  UnityEngine_Transform__set_localScale(v20, v19->static_fields->REMOVE_ITEM_SCALE, 0);
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        v15,
                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v13 )
    goto LABEL_68;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_69;
  if ( !Instance )
    goto LABEL_68;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v13 + 32), 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_69;
  if ( !MasterData_object )
    goto LABEL_68;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               *(_DWORD *)(v13 + 32),
               0);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_68;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  monitor = (Il2CppObject *)StringLiteral_1/*""*/;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v13 + 24) )
LABEL_69:
    sub_1C372BC(Instance);
  if ( !Instance )
    goto LABEL_68;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v48,
               *(_DWORD *)(v13 + 32),
               (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_68;
    monitor = (Il2CppObject *)v48[1].monitor;
  }
  Instance = (__int64)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_68;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  lockResultLabel = this->fields.lockResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3654/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, 0);
  Instance = (__int64)System_String__Format(v25, monitor, 0);
  if ( !lockResultLabel )
    goto LABEL_68;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0);
  itemNumLabel = this->fields.itemNumLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0);
  v47 = num - 1;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v28, v29, v30, v31, v32, v33);
  v46 = num;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v35, v36, v37, v38, v39, v40);
  Instance = (__int64)System_String__Format_63602948(v27, v34, v41, 0);
  if ( !itemNumLabel )
    goto LABEL_68;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_68;
  UILabel__set_text(closeButtonLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.unlockInfoObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.equipmentCommandCardObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.removeCommandCardSlotObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.warningCommandCodeObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.overwriteCommandCodeObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.unlockItemGrid;
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.removeCommandCodeConfirmObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (__int64)this->fields.lockResultInfoObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.returnItemGrid;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        (Instance = (__int64)this->fields.returnItemGrid) == 0)
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0),
        (Instance = (__int64)this->fields.canExecuteButtonsObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0),
        (Instance = (__int64)this->fields.canNotExecuteButtonObj) == 0) )
  {
LABEL_68:
    sub_1C372B4(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v43, v44);
  v45 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0, 0);
}


void CommandCardDialog__OpenLockEquipSlot(
        CommandCardDialog_o *this,
        bool equipped,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  __int64 transform; // x0
  UILabel_o *messageLabel; // x22
  UILabel_o *removeWarningLabel; // x22
  System_String_o *v11; // x1
  struct UILabel_o *v12; // x22
  System_String_o *mText; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *spendItemTxtLabel; // x21
  UILabel_o *haveItemTxtLabel; // x21
  int32_t Value; // w0
  Il2CppObject *releaseItemObj; // x22
  int32_t v20; // w21
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_Transform_o *v22; // x23
  UnityEngine_Transform_o *v23; // x23
  UnityEngine_Transform_o *v24; // x23
  CommandCardDialog_c *v25; // x8
  UnityEngine_Transform_o *v26; // x23
  Il2CppObject *MasterData_object; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  CommandCardDialog_c *v43; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v45; // x0
  int32_t v46; // w21
  UILabel_o *v47; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v49; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Action_o *v54; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+8h] [xbp-58h] BYREF
  int32_t v56; // [xsp+Ch] [xbp-54h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C46E6A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommandCardDialog_EndOpen__);
    sub_1C37058(&CommandCardDialog_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_3650/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/);
    sub_1C37058(&StringLiteral_3655/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/);
    sub_1C37058(&StringLiteral_3651/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/);
    sub_1C37058(&StringLiteral_3649/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/);
    sub_1C37058(&StringLiteral_3657/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    sub_1C37058(&StringLiteral_3656/*"COMMAND_CODE_LOCK_TITLE"*/);
    sub_1C37058(&StringLiteral_3652/*"COMMAND_CODE_LOCK_MSG"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_3645/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_4C46E6A = 1;
  }
  entity = 0;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMAND_CODE_LOCK_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0);
  messageLabel = this->fields.messageLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3652/*"COMMAND_CODE_LOCK_MSG"*/, 0);
  if ( !messageLabel )
    goto LABEL_87;
  UILabel__set_text(messageLabel, (System_String_o *)transform, 0);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( equipped )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3650/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, 0);
    v11 = (System_String_o *)transform;
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !removeWarningLabel )
    goto LABEL_87;
  UILabel__set_text(removeWarningLabel, v11, 0);
  v12 = this->fields.removeWarningLabel;
  if ( !v12 )
    goto LABEL_87;
  mText = v12->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, 0);
  v15 = System_String__Concat_63561656(mText, v14, 0);
  UILabel__set_text(v12, v15, 0);
  if ( equipped )
  {
    transform = (__int64)this->fields.removeWarningLabel;
    if ( !transform )
      goto LABEL_87;
    UILabel__set_fontSize((UILabel_o *)transform, 20, 0);
  }
  spendItemTxtLabel = this->fields.spendItemTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3655/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, 0);
  if ( !spendItemTxtLabel )
    goto LABEL_87;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, 0);
  if ( !haveItemTxtLabel )
    goto LABEL_87;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3645/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  v20 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (__int64)UnityEngine_Object__Instantiate_object_(
                         releaseItemObj,
                         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_87;
  v21 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !this->fields.removeItemGrid )
    goto LABEL_87;
  v22 = (UnityEngine_Transform_o *)transform;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0);
  if ( !v22 )
    goto LABEL_87;
  UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
  v23 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C921 )
  {
    transform = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v23 )
    goto LABEL_87;
  UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
  v24 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C927 )
  {
    transform = sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
    byte_4C3C927 = 1;
  }
  if ( !v24 )
    goto LABEL_87;
  UnityEngine_Transform__set_localRotation(v24, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
  v25 = CommandCardDialog_TypeInfo;
  v26 = (UnityEngine_Transform_o *)transform;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v25 = CommandCardDialog_TypeInfo;
  }
  if ( !v26 )
    goto LABEL_87;
  UnityEngine_Transform__set_localScale(v26, v25->static_fields->REMOVE_ITEM_SCALE, 0);
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         v21,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_87;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v20, 0);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)transform,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  transform = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    transform = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_87;
  transform = UserItemMaster__TryGetEntity(
                (UserItemMaster_o *)MasterData_object,
                &entity,
                *(_QWORD *)(*(_QWORD *)(transform + 184) + 64LL),
                v20,
                0);
  if ( (transform & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_87;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  haveItemNumLabel = this->fields.haveItemNumLabel;
  v56 = num;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v28, v29, v30, v31, v32, v33);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v36, 0);
  if ( !haveItemNumLabel )
    goto LABEL_87;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0);
  v43 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v43 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v43->static_fields->DETACH_NEED_ITEM_NUM;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM, v37, v38, v39, v40, v41, v42);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v45, 0);
  if ( !spendItemNumLabel )
    goto LABEL_87;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0);
  transform = (__int64)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_87;
  v46 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  transform = (__int64)this->fields.removeCommandCardSlotObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  transform = (__int64)this->fields.equipmentCommandCardObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)this->fields.unlockInfoObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)this->fields.removeItemGrid;
  if ( !transform )
    goto LABEL_87;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  transform = (__int64)this->fields.warningCommandCodeObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)this->fields.overwriteCommandCodeObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)this->fields.lockResultInfoObj;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0),
        (transform = (__int64)this->fields.removeCommandCodeConfirmObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0),
        (transform = (__int64)this->fields.removeItemGrid) == 0)
    || (UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0),
        (transform = (__int64)this->fields.itemLinkListButtonObj) == 0) )
  {
LABEL_87:
    sub_1C372B4(transform);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  if ( num >= v46 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
      if ( cancelButtonLabel )
      {
        UILabel__set_text(cancelButtonLabel, (System_String_o *)transform, 0);
        transform = (__int64)this->fields.canExecuteButtonsObj;
        if ( transform )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
          transform = (__int64)this->fields.canNotExecuteButtonObj;
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
            transform = (__int64)this->fields.removeWarningLabel;
            if ( transform )
            {
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
              if ( transform )
              {
                v49 = 1;
                goto LABEL_86;
              }
            }
          }
        }
      }
    }
    goto LABEL_87;
  }
  v47 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, 0);
  if ( !v47 )
    goto LABEL_87;
  UILabel__set_text(v47, (System_String_o *)transform, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_87;
  UILabel__set_text(closeButtonLabel, (System_String_o *)transform, 0);
  transform = (__int64)this->fields.canExecuteButtonsObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)this->fields.canNotExecuteButtonObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  transform = (__int64)this->fields.removeWarningLabel;
  if ( !transform )
    goto LABEL_87;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_87;
  v49 = 0;
LABEL_86:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v49, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v52, v53);
  v54 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0, 0);
}


void CommandCardDialog__OpenRemoveEquip(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  System_String_o *removeCommandCodeConfirmObj; // x0
  UILabel_o *messageLabel; // x22
  UILabel_o *removeDetailLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Action_o *v16; // x20

  if ( (byte_4C46E6B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommandCardDialog_EndOpen__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_3665/*"COMMAND_CODE_REMOVE_TITLE"*/);
    sub_1C37058(&StringLiteral_3661/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_3662/*"COMMAND_CODE_REMOVE_MSG"*/);
    byte_4C46E6B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3665/*"COMMAND_CODE_REMOVE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMMAND_CODE_REMOVE_MSG"*/, 0);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3661/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, 0);
  if ( !removeDetailLabel )
    goto LABEL_23;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_23;
  UILabel__set_text(cancelButtonLabel, removeCommandCodeConfirmObj, 0);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.removeCommandCodeConfirmObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 1, 0);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.equippedCommandCardIcon;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  CombineCommandCardEquipmentComponent__SetIconNoDispStatus(
    (CombineCommandCardEquipmentComponent_o *)removeCommandCodeConfirmObj,
    userCommandCode,
    v13);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.messageLabel;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  removeCommandCodeConfirmObj = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)removeCommandCodeConfirmObj,
                                                     0);
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 1, 0);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.equipmentCommandCardObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.unlockInfoObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.removeCommandCardSlotObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.warningCommandCodeObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.overwriteCommandCodeObj;
  if ( !removeCommandCodeConfirmObj
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0),
        (removeCommandCodeConfirmObj = (System_String_o *)this->fields.lockResultInfoObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0),
        (removeCommandCodeConfirmObj = (System_String_o *)this->fields.canExecuteButtonsObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 1, 0),
        (removeCommandCodeConfirmObj = (System_String_o *)this->fields.canNotExecuteButtonObj) == 0) )
  {
LABEL_23:
    sub_1C372B4(removeCommandCodeConfirmObj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v14, v15);
  v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0, 0);
}


void CommandCardDialog__OpenUnlockCommandCardEquipment(
        CommandCardDialog_o *this,
        UserServantEntity_o *baseUserServantEntity,
        int32_t cardIdx,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  __int64 SelfUserGame; // x0
  UILabel_o *itemInfoLabel; // x21
  UILabel_o *spendQpTxtLabel; // x21
  UILabel_o *haveQpTxtLabel; // x21
  UILabel_o *haveQpLabel; // x24
  __int64 v14; // x26
  UILabel_o *decideButtonLabel; // x24
  UILabel_o *cancelButtonLabel; // x24
  ServantCommandCodeUnlockMaster_o *v17; // x24
  __int64 v18; // x23
  __int64 v19; // x25
  UILabel_o *spendQpLabel; // x23
  __int64 v21; // x21
  __int64 v22; // x22
  __int64 v23; // x27
  __int64 v24; // x26
  unsigned __int64 v25; // x28
  __int64 v26; // x29
  Il2CppObject *releaseItemObj; // x24
  UnityEngine_GameObject_o *v28; // x24
  UnityEngine_Transform_o *v29; // x25
  UnityEngine_Transform_o *v30; // x25
  UnityEngine_Transform_o *v31; // x25
  UnityEngine_Transform_o *v32; // x25
  CommandCardDialog_c *v33; // x8
  UILabel_o *answerBackLabel; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Action_o *v37; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C46E68 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommandCardDialog_EndOpen__);
    sub_1C37058(&CommandCardDialog_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_3668/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/);
    sub_1C37058(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C37058(&StringLiteral_3669/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_9232/*"N0"*/);
    sub_1C37058(&StringLiteral_3670/*"COMMAND_CODE_UNLOCK_TITLE"*/);
    sub_1C37058(&StringLiteral_3648/*"COMMAND_CODE_ITEM_ITEM_INFO"*/);
    byte_4C46E68 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"COMMAND_CODE_UNLOCK_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, 0);
  if ( !itemInfoLabel )
    goto LABEL_60;
  UILabel__set_text(itemInfoLabel, (System_String_o *)SelfUserGame, 0);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3669/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0);
  if ( !spendQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(spendQpTxtLabel, (System_String_o *)SelfUserGame, 0);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !haveQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpTxtLabel, (System_String_o *)SelfUserGame, 0);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_60;
  haveQpLabel = this->fields.haveQpLabel;
  v14 = SelfUserGame;
  SelfUserGame = (__int64)System_Int64__ToString_65076940(SelfUserGame + 96, (System_String_o *)StringLiteral_9232/*"N0"*/, 0);
  if ( !haveQpLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpLabel, (System_String_o *)SelfUserGame, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_60;
  UILabel__set_text(decideButtonLabel, (System_String_o *)SelfUserGame, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_60;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)SelfUserGame, 0);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_60;
  v17 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v19 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v19;
  *(_QWORD *)&v39.fields.fakeValue = v18;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v39, 0);
  if ( !v17 )
    goto LABEL_60;
  SelfUserGame = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v17, SelfUserGame, cardIdx, 0);
  if ( !SelfUserGame )
    goto LABEL_60;
  spendQpLabel = this->fields.spendQpLabel;
  v21 = SelfUserGame;
  SelfUserGame = (__int64)System_Int32__ToString_65071764(
                            (int)SelfUserGame + 24,
                            (System_String_o *)StringLiteral_9232/*"N0"*/,
                            0);
  if ( !spendQpLabel )
    goto LABEL_60;
  v22 = v14;
  UILabel__set_text(spendQpLabel, (System_String_o *)SelfUserGame, 0);
  v23 = *(_QWORD *)(v21 + 40);
  if ( !v23 )
    goto LABEL_60;
  if ( (int)*(_QWORD *)(v23 + 24) >= 1 )
  {
    v24 = *(_QWORD *)(v21 + 32);
    v25 = 0;
    v26 = (unsigned int)*(_QWORD *)(v23 + 24);
    while ( 1 )
    {
      releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SelfUserGame = (__int64)UnityEngine_Object__Instantiate_object_(
                                releaseItemObj,
                                (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v28 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SelfUserGame, 0);
      if ( !this->fields.unlockItemGrid )
        break;
      v29 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                0);
      if ( !v29 )
        break;
      UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)SelfUserGame, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
      v30 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4C3C921 )
      {
        SelfUserGame = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( !v30 )
        break;
      UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
      v31 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4C3C927 )
      {
        SelfUserGame = sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
        byte_4C3C927 = 1;
      }
      if ( !v31 )
        break;
      UnityEngine_Transform__set_localRotation(
        v31,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v28, 0);
      v32 = (UnityEngine_Transform_o *)SelfUserGame;
      v33 = CommandCardDialog_TypeInfo;
      if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
        v33 = CommandCardDialog_TypeInfo;
      }
      if ( !v32 )
        break;
      UnityEngine_Transform__set_localScale(v32, v33->static_fields->UNLOCK_ITEM_SCALE, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v28,
                                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v25 >= *(unsigned int *)(v23 + 24) )
        goto LABEL_61;
      if ( !v24 )
        break;
      if ( v25 >= *(unsigned int *)(v24 + 24) )
LABEL_61:
        sub_1C372BC(SelfUserGame);
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)(v22 + 16),
        *(_DWORD *)(v23 + 32 + 4 * v25),
        *(_DWORD *)(v24 + 32 + 4 * v25),
        0);
      if ( v26 == ++v25 )
        goto LABEL_42;
    }
LABEL_60:
    sub_1C372B4(SelfUserGame);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3668/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, 0);
  if ( !answerBackLabel )
    goto LABEL_60;
  UILabel__set_text(answerBackLabel, (System_String_o *)SelfUserGame, 0);
  SelfUserGame = (__int64)this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (__int64)this->fields.unlockInfoObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  SelfUserGame = (__int64)this->fields.equipmentCommandCardObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (__int64)this->fields.removeCommandCardSlotObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (__int64)this->fields.warningCommandCodeObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (__int64)this->fields.overwriteCommandCodeObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (__int64)this->fields.lockResultInfoObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (__int64)this->fields.removeCommandCodeConfirmObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (__int64)this->fields.unlockItemGrid;
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  SelfUserGame = (__int64)this->fields.unlockItemGrid;
  if ( !SelfUserGame )
    goto LABEL_60;
  UIGrid__set_repositionNow((UIGrid_o *)SelfUserGame, 1, 0);
  SelfUserGame = (__int64)this->fields.canExecuteButtonsObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  SelfUserGame = (__int64)this->fields.canNotExecuteButtonObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v35, v36);
  v37 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0, 0);
}


UnityEngine_GameObject_o *CommandCardDialog__get_closeBtnObject(CommandCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v6; // w0

  if ( (byte_4C46E72 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_4032/*"CancelButton"*/);
    byte_4C46E72 = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_4032/*"CancelButton"*/,
                                                       0);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)canExecuteButtonsObj, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gameObject, 0, 0) )
  {
    canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
    if ( !canExecuteButtonsObj )
      goto LABEL_18;
    if ( UnityEngine_GameObject__get_activeSelf(canExecuteButtonsObj, 0) )
      return gameObject;
  }
  canNotExecuteButtonObj = (UnityEngine_Object_o *)this->fields.canNotExecuteButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(canNotExecuteButtonObj, 0, 0);
  gameObject = 0;
  if ( v6 )
  {
    canExecuteButtonsObj = this->fields.canNotExecuteButtonObj;
    if ( canExecuteButtonsObj )
    {
      gameObject = 0;
      if ( UnityEngine_GameObject__get_activeSelf(canExecuteButtonsObj, 0) )
        return this->fields.canNotExecuteButtonObj;
      return gameObject;
    }
LABEL_18:
    sub_1C372B4(canExecuteButtonsObj);
  }
  return gameObject;
}


void CommandCardDialog__touchCommandCard(CommandCardDialog_o *this, int32_t index, const MethodInfo *method)
{
  ;
}


void CommandCardDialog_ClickDelegate___ctor(
        CommandCardDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7FED4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7FE8C;
}


System_IAsyncResult_o *CommandCardDialog_ClickDelegate__BeginInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C46E75 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C46E75 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void CommandCardDialog_ClickDelegate__Invoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}