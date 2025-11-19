void CommandCardDialog___cctor(const MethodInfo *method)
{
  struct CommandCardDialog_StaticFields *static_fields; // x8
  int32x2_t *v2; // x8

  if ( (byte_4CBA23F & 1) == 0 )
  {
    sub_1C6BA08(&CommandCardDialog_TypeInfo);
    byte_4CBA23F = 1;
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
  if ( (byte_4CBA23E & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CBA23E = 1;
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
  __int64 v6; // x1

  if ( (byte_4CBA23C & 1) == 0 )
  {
    sub_1C6BA08(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA23C = 1;
  }
  v3 = Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0, 0);
}


void CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_48729340(this, 0, v2);
}


void CommandCardDialog__Close_48729340(CommandCardDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4CBA238 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CommandCardDialog_EndClose__);
    byte_4CBA238 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, 0, v6, v7);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x1
  System_String_o *MargeExplanation_43767500; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_array *explanationList; // [xsp+0h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CBA237 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA237 = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)skillName, StringLiteral_1/*""*/, (int32_t)skillId, (const MethodInfo *)skillName);
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)skillDetail, StringLiteral_1/*""*/, v10, v11);
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
    sub_1C6BC60(v12, v13);
  if ( !LODWORD(titleList->max_length) )
LABEL_10:
    sub_1C6BC68(v12);
  v16 = titleList->m_Items[0];
  *skillName = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)skillName, (int32_t)v16, v14, v15);
  MargeExplanation_43767500 = SkillInfo__GetMargeExplanation_43767500(explanationList, 0);
  *skillDetail = MargeExplanation_43767500;
  sub_1C6B9AC((CGThumbnailListItem_o *)skillDetail, (int32_t)MargeExplanation_43767500, v18, v19);
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

  if ( (byte_4CBA232 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA232 = 1;
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
      UnityEngine_Object__DestroyImmediate_71659864(gameObject, 0);
      if ( --v4 < 0 )
        goto LABEL_39;
    }
LABEL_67:
    sub_1C6BC60(titleLabel, method);
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
      UnityEngine_Object__DestroyImmediate_71659864(v7, 0);
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
      UnityEngine_Object__DestroyImmediate_71659864(v9, 0);
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
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4CBA23A & 1) == 0 )
  {
    sub_1C6BA08(&Method_CommandCardDialog_OnClickCancel__);
    byte_4CBA23A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CommandCardDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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
      sub_1C6BC60(removeItemGrid, v5);
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
  __int64 v9; // x1
  System_Int32_array *v10; // x21
  CommandCardDialog_c *v11; // x8
  __int64 v12; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v13; // x23

  if ( (byte_4CBA23B & 1) == 0 )
  {
    sub_1C6BA08(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
    sub_1C6BA08(&Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
    sub_1C6BA08(&CommandCardDialog_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_3637/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_4CBA23B = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3637/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0);
  v4 = Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__;
  v5 = Value;
  if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C6BA20(Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !v8 )
    goto LABEL_13;
  v10 = (System_Int32_array *)v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_14;
  *(_DWORD *)(v8 + 32) = v5;
  v8 = sub_1C6BAB0(int___TypeInfo, 1);
  v11 = CommandCardDialog_TypeInfo;
  v12 = v8;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v11 = CommandCardDialog_TypeInfo;
  }
  if ( !v12 )
LABEL_13:
    sub_1C6BC60(v8, v9);
  if ( !*(_DWORD *)(v12 + 24) )
LABEL_14:
    sub_1C6BC68(v8);
  *(_DWORD *)(v12 + 32) = v11->static_fields->DETACH_NEED_ITEM_NUM;
  v13 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C6BC54(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__,
    0);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v10, (System_Int32_array *)v12, v13, 0, 0);
}


void CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4CBA239 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CommandCardDialog_OnClickDecide__);
    byte_4CBA239 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CommandCardDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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
      sub_1C6BC60(removeItemGrid, v5);
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
  __int64 v10; // x1
  ServantCommandCodeUnlockMaster_o *v11; // x23
  __int64 v12; // x22
  __int64 v13; // x24
  __int64 v14; // x23
  Il2CppObject *releaseItemObj; // x21
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x22
  CommandCardDialog_c *v20; // x8
  UnityEngine_Transform_o *v21; // x22
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w24
  Il2CppObject *monitor; // x21
  UILabel_o *lockResultLabel; // x22
  System_String_o *v26; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v28; // x22
  Il2CppObject *v29; // x23
  Il2CppObject *v30; // x0
  UILabel_o *closeButtonLabel; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Action_o *v34; // x20
  int32_t v35; // [xsp+8h] [xbp-58h] BYREF
  int v36; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v37; // [xsp+10h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4CBA234 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CommandCardDialog_EndOpen__);
    sub_1C6BA08(&CommandCardDialog_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_3645/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/);
    sub_1C6BA08(&StringLiteral_3646/*"COMMAND_CODE_LOCK_RETURN_MSG"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA234 = 1;
  }
  v37 = 0;
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_68;
  v11 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v13;
  *(_QWORD *)&v39.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v39, 0);
  if ( !v11 )
    goto LABEL_68;
  Instance = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v11, Instance, cardIdx, 0);
  if ( !Instance )
    goto LABEL_68;
  v14 = *(_QWORD *)(Instance + 40);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        releaseItemObj,
                        (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_68;
  v16 = (UnityEngine_GameObject_o *)Instance;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !this->fields.returnItemGrid )
    goto LABEL_68;
  v17 = (UnityEngine_Transform_o *)Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0);
  if ( !v17 )
    goto LABEL_68;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0);
  v18 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4CAFC09 )
  {
    Instance = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v18 )
    goto LABEL_68;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0);
  v19 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4CAFC0F )
  {
    Instance = sub_1C6BA08(&UnityEngine_Quaternion_TypeInfo);
    byte_4CAFC0F = 1;
  }
  if ( !v19 )
    goto LABEL_68;
  UnityEngine_Transform__set_localRotation(v19, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0);
  v20 = CommandCardDialog_TypeInfo;
  v21 = (UnityEngine_Transform_o *)Instance;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v20 = CommandCardDialog_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_68;
  UnityEngine_Transform__set_localScale(v21, v20->static_fields->REMOVE_ITEM_SCALE, 0);
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        v16,
                        (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v14 )
    goto LABEL_68;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_69;
  if ( !Instance )
    goto LABEL_68;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v14 + 32), 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_69;
  if ( !MasterData_object )
    goto LABEL_68;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               *(_DWORD *)(v14 + 32),
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v14 + 24) )
LABEL_69:
    sub_1C6BC68(Instance);
  if ( !Instance )
    goto LABEL_68;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v37,
               *(_DWORD *)(v14 + 32),
               (const MethodInfo_33F9128 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v37 )
      goto LABEL_68;
    monitor = (Il2CppObject *)v37[1].monitor;
  }
  Instance = (__int64)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_68;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  lockResultLabel = this->fields.lockResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3646/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, 0);
  Instance = (__int64)System_String__Format(v26, monitor, 0);
  if ( !lockResultLabel )
    goto LABEL_68;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0);
  itemNumLabel = this->fields.itemNumLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3645/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0);
  v36 = num - 1;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v35 = num;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  Instance = (__int64)System_String__Format_64008100(v28, v29, v30, 0);
  if ( !itemNumLabel )
    goto LABEL_68;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
    sub_1C6BC60(Instance, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v32, v33);
  v34 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0, 0);
}


void CommandCardDialog__OpenLockEquipSlot(
        CommandCardDialog_o *this,
        bool equipped,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  __int64 transform; // x0
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
  Il2CppObject *releaseItemObj; // x22
  int32_t v20; // w21
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_Transform_o *v22; // x23
  UnityEngine_Transform_o *v23; // x23
  UnityEngine_Transform_o *v24; // x23
  CommandCardDialog_c *v25; // x8
  UnityEngine_Transform_o *v26; // x23
  Il2CppObject *MasterData_object; // x22
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v30; // x0
  CommandCardDialog_c *v31; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v33; // x0
  int32_t v34; // w21
  UILabel_o *v35; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v37; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Action_o *v42; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+8h] [xbp-58h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-54h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CBA235 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CommandCardDialog_EndOpen__);
    sub_1C6BA08(&CommandCardDialog_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_3642/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/);
    sub_1C6BA08(&StringLiteral_3647/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/);
    sub_1C6BA08(&StringLiteral_3643/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/);
    sub_1C6BA08(&StringLiteral_3641/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/);
    sub_1C6BA08(&StringLiteral_3649/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/);
    sub_1C6BA08(&StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_25162/*"{0:#,0}"*/);
    sub_1C6BA08(&StringLiteral_3648/*"COMMAND_CODE_LOCK_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3644/*"COMMAND_CODE_LOCK_MSG"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_3637/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_4CBA235 = 1;
  }
  entity = 0;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMAND_CODE_LOCK_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0);
  messageLabel = this->fields.messageLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3644/*"COMMAND_CODE_LOCK_MSG"*/, 0);
  if ( !messageLabel )
    goto LABEL_87;
  UILabel__set_text(messageLabel, (System_String_o *)transform, 0);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( equipped )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3642/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, 0);
    v9 = (System_String_o *)transform;
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !removeWarningLabel )
    goto LABEL_87;
  UILabel__set_text(removeWarningLabel, v9, 0);
  v12 = this->fields.removeWarningLabel;
  if ( !v12 )
    goto LABEL_87;
  mText = v12->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3641/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, 0);
  v15 = System_String__Concat_63966792(mText, v14, 0);
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
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, 0);
  if ( !spendItemTxtLabel )
    goto LABEL_87;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3643/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, 0);
  if ( !haveItemTxtLabel )
    goto LABEL_87;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3637/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  v20 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (__int64)UnityEngine_Object__Instantiate_object_(
                         releaseItemObj,
                         (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4CAFC09 )
  {
    transform = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v23 )
    goto LABEL_87;
  UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
  v24 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CAFC0F )
  {
    transform = sub_1C6BA08(&UnityEngine_Quaternion_TypeInfo);
    byte_4CAFC0F = 1;
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
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_87;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v20, 0);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)transform,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
  v44 = num;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v30, 0);
  if ( !haveItemNumLabel )
    goto LABEL_87;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0);
  v31 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v31 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v31->static_fields->DETACH_NEED_ITEM_NUM;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v33, 0);
  if ( !spendItemNumLabel )
    goto LABEL_87;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0);
  transform = (__int64)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_87;
  v34 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
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
    sub_1C6BC60(transform, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  if ( num >= v34 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
                v37 = 1;
                goto LABEL_86;
              }
            }
          }
        }
      }
    }
    goto LABEL_87;
  }
  v35 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, 0);
  if ( !v35 )
    goto LABEL_87;
  UILabel__set_text(v35, (System_String_o *)transform, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
  v37 = 0;
LABEL_86:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v37, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v40, v41);
  v42 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0, 0);
}


void CommandCardDialog__OpenRemoveEquip(
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
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4CBA236 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CommandCardDialog_EndOpen__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3657/*"COMMAND_CODE_REMOVE_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3653/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/);
    sub_1C6BA08(&StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_3654/*"COMMAND_CODE_REMOVE_MSG"*/);
    byte_4CBA236 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMAND_CODE_REMOVE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3654/*"COMMAND_CODE_REMOVE_MSG"*/, 0);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, 0);
  if ( !removeDetailLabel )
    goto LABEL_23;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
    v14);
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
    sub_1C6BC60(removeCommandCodeConfirmObj, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0);
  this->fields.closeFunc = closeCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v15, v16);
  v17 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0, 0);
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
  __int64 v10; // x1
  UILabel_o *itemInfoLabel; // x21
  UILabel_o *spendQpTxtLabel; // x21
  UILabel_o *haveQpTxtLabel; // x21
  UILabel_o *haveQpLabel; // x24
  __int64 v15; // x26
  UILabel_o *decideButtonLabel; // x24
  UILabel_o *cancelButtonLabel; // x24
  ServantCommandCodeUnlockMaster_o *v18; // x24
  __int64 v19; // x23
  __int64 v20; // x25
  UILabel_o *spendQpLabel; // x23
  __int64 v22; // x21
  __int64 v23; // x22
  __int64 v24; // x27
  __int64 v25; // x26
  unsigned __int64 v26; // x28
  __int64 v27; // x29
  Il2CppObject *releaseItemObj; // x24
  UnityEngine_GameObject_o *v29; // x24
  UnityEngine_Transform_o *v30; // x25
  UnityEngine_Transform_o *v31; // x25
  UnityEngine_Transform_o *v32; // x25
  UnityEngine_Transform_o *v33; // x25
  CommandCardDialog_c *v34; // x8
  UILabel_o *answerBackLabel; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Action_o *v38; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4CBA233 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CommandCardDialog_EndOpen__);
    sub_1C6BA08(&CommandCardDialog_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_3660/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/);
    sub_1C6BA08(&StringLiteral_3575/*"COMBINE_HAVE_QP"*/);
    sub_1C6BA08(&StringLiteral_3661/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/);
    sub_1C6BA08(&StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    sub_1C6BA08(&StringLiteral_3662/*"COMMAND_CODE_UNLOCK_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3640/*"COMMAND_CODE_ITEM_ITEM_INFO"*/);
    byte_4CBA233 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMMAND_CODE_UNLOCK_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, 0);
  if ( !itemInfoLabel )
    goto LABEL_60;
  UILabel__set_text(itemInfoLabel, (System_String_o *)SelfUserGame, 0);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3661/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0);
  if ( !spendQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(spendQpTxtLabel, (System_String_o *)SelfUserGame, 0);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3575/*"COMBINE_HAVE_QP"*/, 0);
  if ( !haveQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpTxtLabel, (System_String_o *)SelfUserGame, 0);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_60;
  haveQpLabel = this->fields.haveQpLabel;
  v15 = SelfUserGame;
  SelfUserGame = (__int64)System_Int64__ToString_65480464(SelfUserGame + 96, (System_String_o *)StringLiteral_9229/*"N0"*/, 0);
  if ( !haveQpLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpLabel, (System_String_o *)SelfUserGame, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_60;
  UILabel__set_text(decideButtonLabel, (System_String_o *)SelfUserGame, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_60;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)SelfUserGame, 0);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_60;
  v18 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v20 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v20;
  *(_QWORD *)&v40.fields.fakeValue = v19;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v40, 0);
  if ( !v18 )
    goto LABEL_60;
  SelfUserGame = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v18, SelfUserGame, cardIdx, 0);
  if ( !SelfUserGame )
    goto LABEL_60;
  spendQpLabel = this->fields.spendQpLabel;
  v22 = SelfUserGame;
  SelfUserGame = (__int64)System_Int32__ToString_65475288(
                            (int)SelfUserGame + 24,
                            (System_String_o *)StringLiteral_9229/*"N0"*/,
                            0);
  if ( !spendQpLabel )
    goto LABEL_60;
  v23 = v15;
  UILabel__set_text(spendQpLabel, (System_String_o *)SelfUserGame, 0);
  v24 = *(_QWORD *)(v22 + 40);
  if ( !v24 )
    goto LABEL_60;
  if ( (int)*(_QWORD *)(v24 + 24) >= 1 )
  {
    v25 = *(_QWORD *)(v22 + 32);
    v26 = 0;
    v27 = (unsigned int)*(_QWORD *)(v24 + 24);
    while ( 1 )
    {
      releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SelfUserGame = (__int64)UnityEngine_Object__Instantiate_object_(
                                releaseItemObj,
                                (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v29 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SelfUserGame, 0);
      if ( !this->fields.unlockItemGrid )
        break;
      v30 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                0);
      if ( !v30 )
        break;
      UnityEngine_Transform__set_parent(v30, (UnityEngine_Transform_o *)SelfUserGame, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v29, 0);
      v31 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4CAFC09 )
      {
        SelfUserGame = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      if ( !v31 )
        break;
      UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v29, 0);
      v32 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4CAFC0F )
      {
        SelfUserGame = sub_1C6BA08(&UnityEngine_Quaternion_TypeInfo);
        byte_4CAFC0F = 1;
      }
      if ( !v32 )
        break;
      UnityEngine_Transform__set_localRotation(
        v32,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v29, 0);
      v33 = (UnityEngine_Transform_o *)SelfUserGame;
      v34 = CommandCardDialog_TypeInfo;
      if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
        v34 = CommandCardDialog_TypeInfo;
      }
      if ( !v33 )
        break;
      UnityEngine_Transform__set_localScale(v33, v34->static_fields->UNLOCK_ITEM_SCALE, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v29,
                                (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v26 >= *(unsigned int *)(v24 + 24) )
        goto LABEL_61;
      if ( !v25 )
        break;
      if ( v26 >= *(unsigned int *)(v25 + 24) )
LABEL_61:
        sub_1C6BC68(SelfUserGame);
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)(v23 + 16),
        *(_DWORD *)(v24 + 32 + 4 * v26),
        *(_DWORD *)(v25 + 32 + 4 * v26),
        0);
      if ( v27 == ++v26 )
        goto LABEL_42;
    }
LABEL_60:
    sub_1C6BC60(SelfUserGame, v10);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3660/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, 0);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v36, v37);
  v38 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0, 0);
}


UnityEngine_GameObject_o *CommandCardDialog__get_closeBtnObject(CommandCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v6; // w0

  if ( (byte_4CBA23D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_4024/*"CancelButton"*/);
    byte_4CBA23D = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_4024/*"CancelButton"*/,
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
    sub_1C6BC60(canExecuteButtonsObj, method);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA666C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA6624;
}


System_IAsyncResult_o *CommandCardDialog_ClickDelegate__BeginInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CBA240 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CBA240 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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