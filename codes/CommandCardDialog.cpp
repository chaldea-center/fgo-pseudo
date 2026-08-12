void CommandCardDialog___cctor(const MethodInfo *method)
{
  struct CommandCardDialog_StaticFields *static_fields; // x9
  int32x2_t *v2; // x11

  if ( (byte_5974A57 & 1) == 0 )
  {
    sub_2213A60(&CommandCardDialog_TypeInfo);
    byte_5974A57 = 1;
  }
  static_fields = CommandCardDialog_TypeInfo->static_fields;
  static_fields->UNLOCK_ITEM_SCALE.fields.z = 0.6;
  static_fields->DETACH_NEED_ITEM_NUM = 1;
  *(int32x2_t *)&static_fields->UNLOCK_ITEM_SCALE.fields.x = vdup_n_s32(0x3F19999Au);
  v2 = (int32x2_t *)CommandCardDialog_TypeInfo->static_fields;
  v2[2].n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v2[3].n64_u32[0] = 1060320051;
}


void CommandCardDialog___ctor(CommandCardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5974A56 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5974A56 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CommandCardDialog__ClearDisplay(CommandCardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  int32_t childCount; // w0
  int v5; // w20
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w0
  int v9; // w20
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w0
  int v13; // w20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21

  if ( (byte_5974A4B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974A4B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.equipmentWarningLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.removeWarningLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.itemInfoLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeButtonLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.haveQpLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.haveQpTxtLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.spendQpLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.spendQpTxtLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.haveItemTxtLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.haveItemNumLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.spendItemTxtLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.spendItemNumLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.overwriteCommandCodeWarningLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.equipedCommandCodeSkillName;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.equipedCommandCodeSkillDetail;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.overwriteCommandCodeSkillName;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.overwriteCommandCodeSkillDetail;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.answerBackLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.lockResultLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.itemNumLabel;
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)this->fields.canExecuteButtonsObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.canNotExecuteButtonObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
  if ( !titleLabel )
    goto LABEL_70;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
  if ( !titleLabel )
    goto LABEL_70;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0);
  if ( childCount - 1 >= 0 )
  {
    v5 = childCount;
    while ( 1 )
    {
      titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, --v5, 0);
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      if ( !titleLabel )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)titleLabel,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
      if ( v5 <= 0 )
        goto LABEL_40;
    }
LABEL_70:
    sub_2213CDC(titleLabel, method);
  }
LABEL_40:
  titleLabel = (UILabel_o *)this->fields.removeItemGrid;
  if ( !titleLabel )
    goto LABEL_70;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
  if ( !titleLabel )
    goto LABEL_70;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0);
  if ( v8 - 1 >= 0 )
  {
    v9 = v8;
    do
    {
      titleLabel = (UILabel_o *)this->fields.removeItemGrid;
      if ( !titleLabel )
        goto LABEL_70;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, --v9, 0);
      if ( !titleLabel )
        goto LABEL_70;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      if ( !titleLabel )
        goto LABEL_70;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__DestroyImmediate_83460132(v11, 0);
    }
    while ( v9 > 0 );
  }
  titleLabel = (UILabel_o *)this->fields.returnItemGrid;
  if ( !titleLabel )
    goto LABEL_70;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
  if ( !titleLabel )
    goto LABEL_70;
  v12 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0);
  if ( v12 - 1 >= 0 )
  {
    v13 = v12;
    do
    {
      titleLabel = (UILabel_o *)this->fields.returnItemGrid;
      if ( !titleLabel )
        goto LABEL_70;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, --v13, 0);
      if ( !titleLabel )
        goto LABEL_70;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      if ( !titleLabel )
        goto LABEL_70;
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      UnityEngine_Object__DestroyImmediate_83460132(v15, 0);
    }
    while ( v13 > 0 );
  }
  titleLabel = (UILabel_o *)this->fields.equipmentCommandCardObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.unlockInfoObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.removeCommandCardSlotObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.warningCommandCodeObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.overwriteCommandCodeObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.lockResultInfoObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.removeCommandCodeConfirmObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.itemLinkListButtonObj;
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
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

  if ( (byte_5974A54 & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974A54 = 1;
  }
  v3 = Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0, 0);
}


void CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, 0, 0);
}


void CommandCardDialog__GetSkillInfo(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        int32_t *skillId,
        System_String_o **skillName,
        System_String_o **skillDetail,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x1
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_array *v28; // x8
  System_String_o *v29; // x1
  System_String_o *MargeExplanation_50621816; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_array *explanationList; // [xsp+0h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5974A50 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974A50 = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  idList = 0;
  explanationList = 0;
  titleList = 0;
  *skillId = 0;
  *skillName = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)skillName,
    (int32_t)v12,
    (System_String_o *)skillId,
    (System_String_o *)skillName,
    (int32_t)skillDetail,
    (int32_t)method,
    v6,
    v7);
  v13 = (int)StringLiteral_1/*""*/;
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)skillDetail, v13, v14, v15, v16, v17, v18, v19);
  if ( !userCommandCode )
    goto LABEL_9;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0);
  if ( !idList )
    goto LABEL_9;
  if ( !LODWORD(idList->max_length) )
    goto LABEL_10;
  v28 = titleList;
  *skillId = idList->m_Items[0];
  if ( !v28 )
LABEL_9:
    sub_2213CDC(v20, v21);
  if ( !LODWORD(v28->max_length) )
LABEL_10:
    sub_2213CE4(v20);
  v29 = v28->m_Items[0];
  *skillName = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)skillName, (int32_t)v29, v22, v23, v24, v25, v26, v27);
  MargeExplanation_50621816 = SkillInfo__GetMargeExplanation_50621816(explanationList, 0);
  *skillDetail = MargeExplanation_50621816;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)skillDetail,
    (int32_t)MargeExplanation_50621816,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void CommandCardDialog__OnClickCancel(CommandCardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_5974A52 & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardDialog_OnClickCancel__);
    byte_5974A52 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CommandCardDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
      sub_2213CDC(removeItemGrid, v5);
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
  Il2CppClass *v11; // x0
  CommandCardDialog_c *v12; // x8
  __int64 v13; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_c *v14; // x0
  ItemLinkInfoWindowComponent_CallbackFunc_o *v15; // x23

  if ( (byte_5974A53 & 1) == 0 )
  {
    sub_2213A60(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
    sub_2213A60(&Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
    sub_2213A60(&CommandCardDialog_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3787/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_5974A53 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3787/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0);
  v4 = Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__;
  v5 = Value;
  if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = sub_2213B20(int___TypeInfo, 1);
  if ( !v8 )
    goto LABEL_13;
  v10 = (System_Int32_array *)v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_14;
  v11 = int___TypeInfo;
  v10->m_Items[0] = v5;
  v8 = sub_2213B20(v11, 1);
  v12 = CommandCardDialog_TypeInfo;
  v13 = v8;
  if ( !*(&CommandCardDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v9);
    v12 = CommandCardDialog_TypeInfo;
  }
  if ( !v13 )
LABEL_13:
    sub_2213CDC(v8, v9);
  if ( !*(_DWORD *)(v13 + 24) )
LABEL_14:
    sub_2213CE4(v8);
  v14 = ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo;
  *(_DWORD *)(v13 + 32) = v12->static_fields->DETACH_NEED_ITEM_NUM;
  v15 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_2213CCC(v14);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__,
    0);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v10, (System_Int32_array *)v13, v15, 0, 0);
}


void CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_5974A51 & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardDialog_OnClickDecide__);
    byte_5974A51 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CommandCardDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
      sub_2213CDC(removeItemGrid, v5);
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
  UnityEngine_Transform_o *v20; // x22
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w24
  Il2CppObject *monitor; // x21
  __int64 v24; // x1
  UILabel_o *lockResultLabel; // x22
  System_String_o *v26; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v28; // x22
  Il2CppObject *v29; // x23
  Il2CppObject *v30; // x0
  UILabel_o *closeButtonLabel; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // [xsp+8h] [xbp-58h] BYREF
  int v39; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v40; // [xsp+10h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_5974A4D & 1) == 0 )
  {
    sub_2213A60(&CommandCardDialog_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3795/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/);
    sub_2213A60(&StringLiteral_3796/*"COMMAND_CODE_LOCK_RETURN_MSG"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974A4D = 1;
  }
  v40 = 0;
  entity = 0;
  CommandCardDialog__ClearDisplay(this, (const MethodInfo *)baseUserServantEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_68;
  v11 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v42.fields.currentCryptoKey = v13;
  *(_QWORD *)&v42.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v42, 0);
  if ( !v11 )
    goto LABEL_68;
  Instance = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v11, Instance, cardIdx, 0);
  if ( !Instance )
    goto LABEL_68;
  v14 = *(_QWORD *)(Instance + 40);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        releaseItemObj,
                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_5969AE0 )
  {
    Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v18 )
    goto LABEL_68;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0);
  v19 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_5969AE6 )
  {
    Instance = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v19 )
    goto LABEL_68;
  UnityEngine_Transform__set_localRotation(v19, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0);
  v20 = (UnityEngine_Transform_o *)Instance;
  if ( !*(&CommandCardDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v10);
  if ( !v20 )
    goto LABEL_68;
  UnityEngine_Transform__set_localScale(v20, CommandCardDialog_TypeInfo->static_fields->REMOVE_ITEM_SCALE, 0);
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        v16,
                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v14 )
    goto LABEL_68;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_69;
  if ( !Instance )
    goto LABEL_68;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v14 + 32), 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v14 + 24) )
LABEL_69:
    sub_2213CE4(Instance);
  if ( !Instance )
    goto LABEL_68;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v40,
               *(_DWORD *)(v14 + 32),
               (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v40 )
      goto LABEL_68;
    monitor = (Il2CppObject *)v40[1].monitor;
  }
  Instance = (__int64)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_68;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  lockResultLabel = this->fields.lockResultLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, 0);
  Instance = (__int64)System_String__Format(v26, monitor, 0);
  if ( !lockResultLabel )
    goto LABEL_68;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0);
  itemNumLabel = this->fields.itemNumLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0);
  v39 = num - 1;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
  v38 = num;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
  Instance = (__int64)System_String__Format_75697880(v28, v29, v30, 0);
  if ( !itemNumLabel )
    goto LABEL_68;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
    sub_2213CDC(Instance, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardDialog__OpenLockEquipSlot(
        CommandCardDialog_o *this,
        bool equipped,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UILabel_o *titleLabel; // x22
  __int64 transform; // x0
  System_String_o *v10; // x1
  UILabel_o *messageLabel; // x22
  __int64 v12; // x1
  UILabel_o *removeWarningLabel; // x22
  struct UILabel_o *v14; // x22
  System_String_o *mText; // x23
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *spendItemTxtLabel; // x21
  UILabel_o *haveItemTxtLabel; // x21
  int32_t Value; // w0
  __int64 v21; // x1
  Il2CppObject *releaseItemObj; // x22
  int32_t v23; // w21
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_Transform_o *v25; // x23
  UnityEngine_Transform_o *v26; // x23
  UnityEngine_Transform_o *v27; // x23
  UnityEngine_Transform_o *v28; // x23
  Il2CppObject *MasterData_object; // x22
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  CommandCardDialog_c *v34; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v36; // x0
  int32_t v37; // w21
  __int64 v38; // x1
  UILabel_o *v39; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v41; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+8h] [xbp-58h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-54h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5974A4E & 1) == 0 )
  {
    sub_2213A60(&CommandCardDialog_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3792/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/);
    sub_2213A60(&StringLiteral_3797/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/);
    sub_2213A60(&StringLiteral_3793/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/);
    sub_2213A60(&StringLiteral_3791/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/);
    sub_2213A60(&StringLiteral_3799/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_3798/*"COMMAND_CODE_LOCK_TITLE"*/);
    sub_2213A60(&StringLiteral_3794/*"COMMAND_CODE_LOCK_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3787/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_5974A4E = 1;
  }
  entity = 0;
  CommandCardDialog__ClearDisplay(this, (const MethodInfo *)equipped);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COMMAND_CODE_LOCK_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0);
  messageLabel = this->fields.messageLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3794/*"COMMAND_CODE_LOCK_MSG"*/, 0);
  if ( !messageLabel )
    goto LABEL_87;
  UILabel__set_text(messageLabel, (System_String_o *)transform, 0);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( equipped )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3792/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, 0);
    v10 = (System_String_o *)transform;
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !removeWarningLabel )
    goto LABEL_87;
  UILabel__set_text(removeWarningLabel, v10, 0);
  v14 = this->fields.removeWarningLabel;
  if ( !v14 )
    goto LABEL_87;
  mText = v14->fields.mText;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3791/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, 0);
  v17 = System_String__Concat_75651716(mText, v16, 0);
  UILabel__set_text(v14, v17, 0);
  if ( equipped )
  {
    transform = (__int64)this->fields.removeWarningLabel;
    if ( !transform )
      goto LABEL_87;
    UILabel__set_fontSize((UILabel_o *)transform, 20, 0);
  }
  spendItemTxtLabel = this->fields.spendItemTxtLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, 0);
  if ( !spendItemTxtLabel )
    goto LABEL_87;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3793/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, 0);
  if ( !haveItemTxtLabel )
    goto LABEL_87;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3787/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  v23 = Value;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  transform = (__int64)UnityEngine_Object__Instantiate_object_(
                         releaseItemObj,
                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_87;
  v24 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !this->fields.removeItemGrid )
    goto LABEL_87;
  v25 = (UnityEngine_Transform_o *)transform;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0);
  if ( !v25 )
    goto LABEL_87;
  UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)transform, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v24, 0);
  v26 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE0 )
  {
    transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v26 )
    goto LABEL_87;
  UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v24, 0);
  v27 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE6 )
  {
    transform = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v27 )
    goto LABEL_87;
  UnityEngine_Transform__set_localRotation(v27, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v24, 0);
  v28 = (UnityEngine_Transform_o *)transform;
  if ( !*(&CommandCardDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v10);
  if ( !v28 )
    goto LABEL_87;
  UnityEngine_Transform__set_localScale(v28, CommandCardDialog_TypeInfo->static_fields->REMOVE_ITEM_SCALE, 0);
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         v24,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_87;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v23, 0);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)transform,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  transform = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    transform = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_87;
  transform = UserItemMaster__TryGetEntity(
                (UserItemMaster_o *)MasterData_object,
                &entity,
                *(_QWORD *)(*(_QWORD *)(transform + 184) + 64LL),
                v23,
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
  v51 = num;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v51);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v32, 0);
  if ( !haveItemNumLabel )
    goto LABEL_87;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0);
  v34 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( !*(&CommandCardDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v33);
    v34 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v34->static_fields->DETACH_NEED_ITEM_NUM;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &DETACH_NEED_ITEM_NUM);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v36, 0);
  if ( !spendItemNumLabel )
    goto LABEL_87;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0);
  transform = (__int64)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_87;
  v37 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
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
    sub_2213CDC(transform, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  if ( num >= v37 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
                v41 = 1;
                goto LABEL_86;
              }
            }
          }
        }
      }
    }
    goto LABEL_87;
  }
  v39 = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, 0);
  if ( !v39 )
    goto LABEL_87;
  UILabel__set_text(v39, (System_String_o *)transform, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
  v41 = 0;
LABEL_86:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v41, 0);
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void CommandCardDialog__OpenRemoveEquip(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *removeCommandCodeConfirmObj; // x0
  __int64 v10; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *removeDetailLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5974A4F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3807/*"COMMAND_CODE_REMOVE_TITLE"*/);
    sub_2213A60(&StringLiteral_3803/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_3804/*"COMMAND_CODE_REMOVE_MSG"*/);
    byte_5974A4F = 1;
  }
  CommandCardDialog__ClearDisplay(this, (const MethodInfo *)userCommandCode);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3807/*"COMMAND_CODE_REMOVE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMAND_CODE_REMOVE_MSG"*/, 0);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, 0);
  if ( !removeDetailLabel )
    goto LABEL_23;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
    0);
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
    sub_2213CDC(removeCommandCodeConfirmObj, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0);
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void CommandCardDialog__OpenUnlockCommandCardEquipment(
        CommandCardDialog_o *this,
        UserServantEntity_o *baseUserServantEntity,
        int32_t cardIdx,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UILabel_o *titleLabel; // x21
  __int64 SelfUserGame; // x0
  __int64 v11; // x1
  UILabel_o *itemInfoLabel; // x21
  UILabel_o *spendQpTxtLabel; // x21
  UILabel_o *haveQpTxtLabel; // x21
  __int64 v15; // x26
  UILabel_o *haveQpLabel; // x24
  UILabel_o *decideButtonLabel; // x24
  UILabel_o *cancelButtonLabel; // x24
  ServantCommandCodeUnlockMaster_o *v19; // x24
  __int64 v20; // x23
  __int64 v21; // x25
  __int64 v22; // x22
  UILabel_o *spendQpLabel; // x21
  __int64 v24; // x23
  __int64 v25; // x27
  unsigned __int64 v26; // x28
  __int64 v27; // x29
  __int64 v28; // x26
  Il2CppObject *releaseItemObj; // x24
  UnityEngine_GameObject_o *v30; // x24
  UnityEngine_Transform_o *v31; // x25
  UnityEngine_Transform_o *v32; // x25
  UnityEngine_Transform_o *v33; // x25
  UnityEngine_Transform_o *v34; // x25
  UILabel_o *answerBackLabel; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_5974A4C & 1) == 0 )
  {
    sub_2213A60(&CommandCardDialog_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3810/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/);
    sub_2213A60(&StringLiteral_3725/*"COMBINE_HAVE_QP"*/);
    sub_2213A60(&StringLiteral_3811/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_3812/*"COMMAND_CODE_UNLOCK_TITLE"*/);
    sub_2213A60(&StringLiteral_3790/*"COMMAND_CODE_ITEM_ITEM_INFO"*/);
    byte_5974A4C = 1;
  }
  CommandCardDialog__ClearDisplay(this, (const MethodInfo *)baseUserServantEntity);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMAND_CODE_UNLOCK_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, 0);
  if ( !itemInfoLabel )
    goto LABEL_60;
  UILabel__set_text(itemInfoLabel, (System_String_o *)SelfUserGame, 0);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0);
  if ( !spendQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(spendQpTxtLabel, (System_String_o *)SelfUserGame, 0);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_HAVE_QP"*/, 0);
  if ( !haveQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpTxtLabel, (System_String_o *)SelfUserGame, 0);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_60;
  v15 = SelfUserGame;
  haveQpLabel = this->fields.haveQpLabel;
  SelfUserGame = (__int64)System_Int64__ToString_77143864(SelfUserGame + 96, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !haveQpLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpLabel, (System_String_o *)SelfUserGame, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_60;
  UILabel__set_text(decideButtonLabel, (System_String_o *)SelfUserGame, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_60;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)SelfUserGame, 0);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_60;
  v19 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v21 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v43.fields.currentCryptoKey = v21;
  *(_QWORD *)&v43.fields.fakeValue = v20;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v43, 0);
  if ( !v19 )
    goto LABEL_60;
  SelfUserGame = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v19, SelfUserGame, cardIdx, 0);
  if ( !SelfUserGame )
    goto LABEL_60;
  v22 = SelfUserGame;
  spendQpLabel = this->fields.spendQpLabel;
  SelfUserGame = (__int64)System_Int32__ToString_77138656(
                            (int)SelfUserGame + 24,
                            (System_String_o *)StringLiteral_9617/*"N0"*/,
                            0);
  if ( !spendQpLabel )
    goto LABEL_60;
  v24 = v15;
  UILabel__set_text(spendQpLabel, (System_String_o *)SelfUserGame, 0);
  v25 = *(_QWORD *)(v22 + 40);
  if ( !v25 )
    goto LABEL_60;
  if ( (int)*(_QWORD *)(v25 + 24) >= 1 )
  {
    v26 = 0;
    v27 = (unsigned int)*(_QWORD *)(v25 + 24);
    v28 = *(_QWORD *)(v22 + 32);
    while ( 1 )
    {
      releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      SelfUserGame = (__int64)UnityEngine_Object__Instantiate_object_(
                                releaseItemObj,
                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v30 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SelfUserGame, 0);
      if ( !this->fields.unlockItemGrid )
        break;
      v31 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                0);
      if ( !v31 )
        break;
      UnityEngine_Transform__set_parent(v31, (UnityEngine_Transform_o *)SelfUserGame, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v30, 0);
      v32 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_5969AE0 )
      {
        SelfUserGame = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v32 )
        break;
      UnityEngine_Transform__set_localPosition(v32, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v30, 0);
      v33 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_5969AE6 )
      {
        SelfUserGame = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
        byte_5969AE6 = 1;
      }
      if ( !v33 )
        break;
      UnityEngine_Transform__set_localRotation(
        v33,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v30, 0);
      v34 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !*(&CommandCardDialog_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v11);
      if ( !v34 )
        break;
      UnityEngine_Transform__set_localScale(v34, CommandCardDialog_TypeInfo->static_fields->UNLOCK_ITEM_SCALE, 0);
      SelfUserGame = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v30,
                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v26 >= *(unsigned int *)(v25 + 24) )
        goto LABEL_61;
      if ( !v28 )
        break;
      if ( v26 >= *(unsigned int *)(v28 + 24) )
LABEL_61:
        sub_2213CE4(SelfUserGame);
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)(v24 + 16),
        *(_DWORD *)(v25 + 32 + 4 * v26),
        *(_DWORD *)(v28 + 32 + 4 * v26),
        0);
      if ( v27 == ++v26 )
        goto LABEL_42;
    }
LABEL_60:
    sub_2213CDC(SelfUserGame, v11);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, 0);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


UnityEngine_GameObject_o *CommandCardDialog__get_closeBtnObject(CommandCardDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v7; // w0

  if ( (byte_5974A55 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_4179/*"CancelButton"*/);
    byte_5974A55 = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_4179/*"CancelButton"*/,
                                                       0);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)canExecuteButtonsObj, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gameObject, 0, 0) )
  {
    canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
    if ( !canExecuteButtonsObj )
      goto LABEL_18;
    if ( UnityEngine_GameObject__get_activeSelf(canExecuteButtonsObj, 0) )
      return gameObject;
  }
  canNotExecuteButtonObj = (UnityEngine_Object_o *)this->fields.canNotExecuteButtonObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Inequality(canNotExecuteButtonObj, 0, 0);
  gameObject = 0;
  if ( v7 )
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
    sub_2213CDC(canExecuteButtonsObj, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_201498C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2014944;
}


System_IAsyncResult_o *CommandCardDialog_ClickDelegate__BeginInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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