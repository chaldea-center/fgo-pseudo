void __fastcall CommandCardDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct CommandCardDialog_StaticFields *static_fields; // x8
  int32x2_t *v4; // x8

  if ( (byte_4B19A1E & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardDialog_TypeInfo, v1, v2);
    byte_4B19A1E = 1;
  }
  static_fields = CommandCardDialog_TypeInfo->static_fields;
  static_fields->DETACH_NEED_ITEM_NUM = 1;
  *(int32x2_t *)&static_fields->UNLOCK_ITEM_SCALE.fields.x = vdup_n_s32(0x3F19999Au);
  static_fields->UNLOCK_ITEM_SCALE.fields.z = 0.6;
  v4 = (int32x2_t *)CommandCardDialog_TypeInfo->static_fields;
  v4[2].n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v4[3].n64_u32[0] = 1060320051;
}


void __fastcall CommandCardDialog___ctor(CommandCardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19A1D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19A1D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__CloaseCombineItemLinkInfoListWindow(
        CommandCardDialog_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B19A1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__, decide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B19A1B = 1;
  }
  v5 = Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_45609196(this, 0LL, v2);
}


void __fastcall CommandCardDialog__Close_45609196(
        CommandCardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_4B19A17 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CommandCardDialog_EndClose__, v10, v11);
    byte_4B19A17 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeFunc, 0LL, v12, v13, v14, v15, v16, v17);
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_CommandCardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
}


void __fastcall CommandCardDialog__EndClose(CommandCardDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  CommandCardDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_o *v26; // x1
  System_String_o *MargeExplanation_41264548; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_array *explanationList; // [xsp+0h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B19A16 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, userCommandCode, skillId);
    byte_4B19A16 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)skillName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)skillId,
    (int32_t)skillName,
    (System_String_o *)skillDetail,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)skillDetail, (int64_t)StringLiteral_1/*""*/, v12, v13, v14, v15, v16, v17);
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
    sub_1BCAA3C(v18, v19);
  if ( !titleList->max_length )
LABEL_10:
    sub_1BCAA44(v18, v19);
  v26 = titleList->m_Items[0];
  *skillName = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)skillName, (int64_t)v26, v20, v21, v22, v23, v24, v25);
  MargeExplanation_41264548 = SkillInfo__GetMargeExplanation_41264548(explanationList, 0LL);
  *skillDetail = MargeExplanation_41264548;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)skillDetail,
    (int64_t)MargeExplanation_41264548,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall CommandCardDialog__Init(CommandCardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *titleLabel; // x0
  int32_t v7; // w20
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v10; // w20
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4B19A11 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B19A11 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.equipmentWarningLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.removeWarningLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.itemInfoLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeButtonLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.haveQpLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.haveQpTxtLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.spendQpLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.spendQpTxtLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.haveItemTxtLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.haveItemNumLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.spendItemTxtLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.spendItemNumLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.overwriteCommandCodeWarningLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.equipedCommandCodeSkillName;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.equipedCommandCodeSkillDetail;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.overwriteCommandCodeSkillName;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.overwriteCommandCodeSkillDetail;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.answerBackLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.lockResultLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.itemNumLabel;
  if ( !titleLabel )
    goto LABEL_67;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.canExecuteButtonsObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.canNotExecuteButtonObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_67;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v7 >= 0 )
  {
    while ( 1 )
    {
      titleLabel = (UILabel_o *)this->fields.unlockItemGrid;
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v7, 0LL);
      if ( !titleLabel )
        break;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)titleLabel,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
      if ( --v7 < 0 )
        goto LABEL_39;
    }
LABEL_67:
    sub_1BCAA3C(titleLabel, method);
  }
LABEL_39:
  titleLabel = (UILabel_o *)this->fields.removeItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_67;
  v10 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v10 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.removeItemGrid;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v10, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__DestroyImmediate_70154432(v12, 0LL);
    }
    while ( --v10 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.returnItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_67;
  v13 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v13 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.returnItemGrid;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v13, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      UnityEngine_Object__DestroyImmediate_70154432(v15, 0LL);
    }
    while ( --v13 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.equipmentCommandCardObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.unlockInfoObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.removeCommandCardSlotObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.warningCommandCodeObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.overwriteCommandCodeObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.lockResultInfoObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.removeCommandCodeConfirmObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.itemLinkListButtonObj;
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardDialog__OnClickCancel(CommandCardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4B19A19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardDialog_OnClickCancel__, method, v2);
    byte_4B19A19 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_CommandCardDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1BCAA3C(removeItemGrid, v6);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall CommandCardDialog__OnClickCombineItemLinkInfoListWindow(
        CommandCardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t Value; // w0
  _QWORD *v17; // x8
  int32_t v18; // w22
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Instance; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_Int32_array *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  CommandCardDialog_c *v26; // x8
  System_Int32_array *v27; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v28; // x23

  if ( (byte_4B19A1A & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__, v4, v5);
    sub_1BCA7E0(&Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__, v6, v7);
    sub_1BCA7E0(&CommandCardDialog_TypeInfo, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_3749/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v14, v15);
    byte_4B19A1A = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3749/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
  v17 = Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__;
  v18 = Value;
  if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1BCA7F8(Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v21 )
    goto LABEL_13;
  v23 = (System_Int32_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_14;
  *(_DWORD *)(v21 + 32) = v18;
  v21 = sub_1BCA888(int___TypeInfo, 1LL);
  v26 = CommandCardDialog_TypeInfo;
  v27 = (System_Int32_array *)v21;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v22);
    v26 = CommandCardDialog_TypeInfo;
  }
  if ( !v27 )
LABEL_13:
    sub_1BCAA3C(v21, v22);
  if ( !v27->max_length )
LABEL_14:
    sub_1BCAA44(v21, v22);
  v27->m_Items[1] = v26->static_fields->DETACH_NEED_ITEM_NUM;
  v28 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                        v22,
                                                        v24,
                                                        v25);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v23, v27, v28, 0, 0LL);
}


void __fastcall CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4B19A18 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardDialog_OnClickDecide__, method, v2);
    byte_4B19A18 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_CommandCardDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1BCAA3C(removeItemGrid, v6);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  int64_t Instance; // x0
  __int64 v46; // x1
  ServantCommandCodeUnlockMaster_o *v47; // x23
  __int64 v48; // x22
  __int64 v49; // x24
  __int64 v50; // x23
  Il2CppObject *releaseItemObj; // x21
  UnityEngine_GameObject_o *v52; // x21
  UnityEngine_Transform_o *v53; // x22
  __int64 v54; // x2
  UnityEngine_Transform_o *v55; // x22
  __int64 v56; // x2
  UnityEngine_Transform_o *v57; // x22
  CommandCardDialog_c *v58; // x8
  UnityEngine_Transform_o *v59; // x22
  __int64 v60; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w24
  Il2CppObject *monitor; // x21
  __int64 v64; // x1
  UILabel_o *lockResultLabel; // x22
  System_String_o *v66; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v68; // x22
  Il2CppObject *v69; // x23
  Il2CppObject *v70; // x0
  UILabel_o *closeButtonLabel; // x21
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Action_o *v81; // x20
  int32_t v82; // [xsp+8h] [xbp-58h] BYREF
  int v83; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v84; // [xsp+10h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4B19A13 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseUserServantEntity, *(_QWORD *)&cardIdx);
    sub_1BCA7E0(&Method_CommandCardDialog_EndOpen__, v9, v10);
    sub_1BCA7E0(&CommandCardDialog_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&StringLiteral_3757/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3758/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v43, v44);
    byte_4B19A13 = 1;
  }
  v84 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_64;
  v47 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v49 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46);
  *(_QWORD *)&v86.fields.currentCryptoKey = v49;
  *(_QWORD *)&v86.fields.fakeValue = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v86, 0LL);
  if ( !v47 )
    goto LABEL_64;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v47, Instance, cardIdx, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v50 = *(_QWORD *)(Instance + 40);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  Instance = (int64_t)UnityEngine_Object__Instantiate_object_(
                        releaseItemObj,
                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_64;
  v52 = (UnityEngine_GameObject_o *)Instance;
  Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.returnItemGrid )
    goto LABEL_64;
  v53 = (UnityEngine_Transform_o *)Instance;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0LL);
  if ( !v53 )
    goto LABEL_64;
  UnityEngine_Transform__set_parent(v53, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__get_transform(v52, 0LL);
  v55 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B109C1 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v46, v54);
    byte_4B109C1 = 1;
  }
  if ( !v55 )
    goto LABEL_64;
  UnityEngine_Transform__set_localPosition(v55, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__get_transform(v52, 0LL);
  v57 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B109C7 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v46, v56);
    byte_4B109C7 = 1;
  }
  if ( !v57 )
    goto LABEL_64;
  UnityEngine_Transform__set_localRotation(v57, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__get_transform(v52, 0LL);
  v58 = CommandCardDialog_TypeInfo;
  v59 = (UnityEngine_Transform_o *)Instance;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v46);
    v58 = CommandCardDialog_TypeInfo;
  }
  if ( !v59 )
    goto LABEL_64;
  UnityEngine_Transform__set_localScale(v59, v58->static_fields->REMOVE_ITEM_SCALE, 0LL);
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        v52,
                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v50 )
    goto LABEL_64;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_65;
  if ( !Instance )
    goto LABEL_64;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v50 + 32), 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v60);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_65;
  if ( !MasterData_object )
    goto LABEL_64;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               Instance,
               *(_DWORD *)(v50 + 32),
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_64;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  monitor = (Il2CppObject *)StringLiteral_1/*""*/;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v50 + 24) )
LABEL_65:
    sub_1BCAA44(Instance, v46);
  if ( !Instance )
    goto LABEL_64;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v84,
               *(_DWORD *)(v50 + 32),
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v84 )
      goto LABEL_64;
    monitor = (Il2CppObject *)v84[1].monitor;
  }
  Instance = (int64_t)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  lockResultLabel = this->fields.lockResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, 0LL);
  Instance = (int64_t)System_String__Format(v66, monitor, 0LL);
  if ( !lockResultLabel )
    goto LABEL_64;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0LL);
  itemNumLabel = this->fields.itemNumLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0LL);
  v83 = num - 1;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  v82 = num;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  Instance = (int64_t)System_String__Format_62415592(v68, v69, v70, 0LL);
  if ( !itemNumLabel )
    goto LABEL_64;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_64;
  UILabel__set_text(closeButtonLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.unlockInfoObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.equipmentCommandCardObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.removeCommandCardSlotObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.warningCommandCodeObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.overwriteCommandCodeObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.unlockItemGrid;
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.removeCommandCodeConfirmObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.lockResultInfoObj;
  if ( !Instance )
    goto LABEL_64;
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
LABEL_64:
    sub_1BCAA3C(Instance, v46);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v78, v79, v80);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__OpenLockEquipSlot(
        CommandCardDialog_o *this,
        bool equipped,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  UILabel_o *titleLabel; // x22
  int64_t transform; // x0
  System_String_o *v55; // x1
  UILabel_o *messageLabel; // x22
  __int64 v57; // x1
  UILabel_o *removeWarningLabel; // x22
  struct UILabel_o *v59; // x22
  System_String_o *mText; // x23
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  UILabel_o *spendItemTxtLabel; // x21
  UILabel_o *haveItemTxtLabel; // x21
  int32_t Value; // w0
  __int64 v66; // x1
  Il2CppObject *releaseItemObj; // x22
  int32_t v68; // w21
  UnityEngine_GameObject_o *v69; // x22
  UnityEngine_Transform_o *v70; // x23
  __int64 v71; // x2
  UnityEngine_Transform_o *v72; // x23
  __int64 v73; // x2
  UnityEngine_Transform_o *v74; // x23
  CommandCardDialog_c *v75; // x8
  UnityEngine_Transform_o *v76; // x23
  __int64 v77; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  CommandCardDialog_c *v83; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v85; // x0
  int32_t v86; // w21
  __int64 v87; // x1
  UILabel_o *v88; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v90; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  System_Action_o *v102; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+8h] [xbp-58h] BYREF
  int32_t v104; // [xsp+Ch] [xbp-54h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B19A14 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, equipped, closeCallback);
    sub_1BCA7E0(&Method_CommandCardDialog_EndOpen__, v7, v8);
    sub_1BCA7E0(&CommandCardDialog_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&StringLiteral_3754/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3759/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3755/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3753/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3761/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_3760/*"COMMAND_CODE_LOCK_TITLE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_3756/*"COMMAND_CODE_LOCK_MSG"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_3749/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v51, v52);
    byte_4B19A14 = 1;
  }
  entity = 0LL;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, equipped);
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3760/*"COMMAND_CODE_LOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_83;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0LL);
  messageLabel = this->fields.messageLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMAND_CODE_LOCK_MSG"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_83;
  UILabel__set_text(messageLabel, (System_String_o *)transform, 0LL);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( equipped )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, 0LL);
    v55 = (System_String_o *)transform;
  }
  else
  {
    v55 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !removeWarningLabel )
    goto LABEL_83;
  UILabel__set_text(removeWarningLabel, v55, 0LL);
  v59 = this->fields.removeWarningLabel;
  if ( !v59 )
    goto LABEL_83;
  mText = v59->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_3753/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, 0LL);
  v62 = System_String__Concat_62401220(mText, v61, 0LL);
  UILabel__set_text(v59, v62, 0LL);
  if ( equipped )
  {
    transform = (int64_t)this->fields.removeWarningLabel;
    if ( !transform )
      goto LABEL_83;
    UILabel__set_fontSize((UILabel_o *)transform, 20, 0LL);
  }
  spendItemTxtLabel = this->fields.spendItemTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, 0LL);
  if ( !spendItemTxtLabel )
    goto LABEL_83;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0LL);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, 0LL);
  if ( !haveItemTxtLabel )
    goto LABEL_83;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3749/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  v68 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
  transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                         releaseItemObj,
                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_83;
  v69 = (UnityEngine_GameObject_o *)transform;
  transform = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !this->fields.removeItemGrid )
    goto LABEL_83;
  v70 = (UnityEngine_Transform_o *)transform;
  transform = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0LL);
  if ( !v70 )
    goto LABEL_83;
  UnityEngine_Transform__set_parent(v70, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (int64_t)UnityEngine_GameObject__get_transform(v69, 0LL);
  v72 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C1 )
  {
    transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v55, v71);
    byte_4B109C1 = 1;
  }
  if ( !v72 )
    goto LABEL_83;
  UnityEngine_Transform__set_localPosition(v72, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (int64_t)UnityEngine_GameObject__get_transform(v69, 0LL);
  v74 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C7 )
  {
    transform = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v55, v73);
    byte_4B109C7 = 1;
  }
  if ( !v74 )
    goto LABEL_83;
  UnityEngine_Transform__set_localRotation(v74, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  transform = (int64_t)UnityEngine_GameObject__get_transform(v69, 0LL);
  v75 = CommandCardDialog_TypeInfo;
  v76 = (UnityEngine_Transform_o *)transform;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v55);
    v75 = CommandCardDialog_TypeInfo;
  }
  if ( !v76 )
    goto LABEL_83;
  UnityEngine_Transform__set_localScale(v76, v75->static_fields->REMOVE_ITEM_SCALE, 0LL);
  transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                         v69,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_83;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v68, 0LL);
  transform = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)transform,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v77);
  transform = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_83;
  transform = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, transform, v68, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_83;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  haveItemNumLabel = this->fields.haveItemNumLabel;
  v104 = num;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
  transform = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v81, 0LL);
  if ( !haveItemNumLabel )
    goto LABEL_83;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0LL);
  v83 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v82);
    v83 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v83->static_fields->DETACH_NEED_ITEM_NUM;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM);
  transform = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v85, 0LL);
  if ( !spendItemNumLabel )
    goto LABEL_83;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0LL);
  transform = (int64_t)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_83;
  v86 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
  transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (int64_t)this->fields.removeCommandCardSlotObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (int64_t)this->fields.equipmentCommandCardObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (int64_t)this->fields.unlockInfoObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (int64_t)this->fields.removeItemGrid;
  if ( !transform )
    goto LABEL_83;
  transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (int64_t)this->fields.warningCommandCodeObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (int64_t)this->fields.overwriteCommandCodeObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (int64_t)this->fields.lockResultInfoObj;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (int64_t)this->fields.removeCommandCodeConfirmObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (int64_t)this->fields.removeItemGrid) == 0)
    || (UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0LL),
        (transform = (int64_t)this->fields.itemLinkListButtonObj) == 0) )
  {
LABEL_83:
    sub_1BCAA3C(transform, v55);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  if ( num >= v86 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
    transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0LL);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      if ( cancelButtonLabel )
      {
        UILabel__set_text(cancelButtonLabel, (System_String_o *)transform, 0LL);
        transform = (int64_t)this->fields.canExecuteButtonsObj;
        if ( transform )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
          transform = (int64_t)this->fields.canNotExecuteButtonObj;
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            transform = (int64_t)this->fields.removeWarningLabel;
            if ( transform )
            {
              transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( transform )
              {
                v90 = 1;
                goto LABEL_82;
              }
            }
          }
        }
      }
    }
    goto LABEL_83;
  }
  v88 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, 0LL);
  if ( !v88 )
    goto LABEL_83;
  UILabel__set_text(v88, (System_String_o *)transform, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  transform = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_83;
  UILabel__set_text(closeButtonLabel, (System_String_o *)transform, 0LL);
  transform = (int64_t)this->fields.canExecuteButtonsObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (int64_t)this->fields.canNotExecuteButtonObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (int64_t)this->fields.removeWarningLabel;
  if ( !transform )
    goto LABEL_83;
  transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_83;
  v90 = 0;
LABEL_82:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v90, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  v102 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v99, v100, v101);
  System_Action___ctor(v102, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v102, 0, 0LL);
}


void __fastcall CommandCardDialog__OpenRemoveEquip(
        CommandCardDialog_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        CommandCardDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *titleLabel; // x22
  System_String_o *removeCommandCodeConfirmObj; // x0
  __int64 v23; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *removeDetailLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v28; // x2
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x20

  if ( (byte_4B19A15 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userCommandCode, closeCallback);
    sub_1BCA7E0(&Method_CommandCardDialog_EndOpen__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3769/*"COMMAND_CODE_REMOVE_TITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3765/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3766/*"COMMAND_CODE_REMOVE_MSG"*/, v19, v20);
    byte_4B19A15 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userCommandCode);
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3769/*"COMMAND_CODE_REMOVE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0LL);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"COMMAND_CODE_REMOVE_MSG"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0LL);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, 0LL);
  if ( !removeDetailLabel )
    goto LABEL_23;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_23;
  UILabel__set_text(cancelButtonLabel, removeCommandCodeConfirmObj, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.removeCommandCodeConfirmObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 1, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.equippedCommandCardIcon;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  CombineCommandCardEquipmentComponent__SetIconNoDispStatus(
    (CombineCommandCardEquipmentComponent_o *)removeCommandCodeConfirmObj,
    userCommandCode,
    v28);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.messageLabel;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  removeCommandCodeConfirmObj = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)removeCommandCodeConfirmObj,
                                                     0LL);
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 1, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.equipmentCommandCardObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.unlockInfoObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.removeCommandCardSlotObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  removeCommandCodeConfirmObj = (System_String_o *)this->fields.warningCommandCodeObj;
  if ( !removeCommandCodeConfirmObj )
    goto LABEL_23;
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
LABEL_23:
    sub_1BCAA3C(removeCommandCodeConfirmObj, v23);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  UILabel_o *titleLabel; // x21
  __int64 SelfUserGame; // x0
  __int64 v44; // x1
  UILabel_o *itemInfoLabel; // x21
  UILabel_o *spendQpTxtLabel; // x21
  UILabel_o *haveQpTxtLabel; // x21
  UILabel_o *haveQpLabel; // x24
  __int64 v49; // x26
  UILabel_o *decideButtonLabel; // x24
  UILabel_o *cancelButtonLabel; // x24
  ServantCommandCodeUnlockMaster_o *v52; // x24
  __int64 v53; // x23
  __int64 v54; // x25
  UILabel_o *spendQpLabel; // x23
  __int64 v56; // x21
  __int64 v57; // x22
  __int64 v58; // x27
  __int64 v59; // x26
  unsigned __int64 v60; // x28
  __int64 v61; // x29
  Il2CppObject *releaseItemObj; // x24
  UnityEngine_GameObject_o *v63; // x24
  UnityEngine_Transform_o *v64; // x25
  __int64 v65; // x2
  UnityEngine_Transform_o *v66; // x25
  __int64 v67; // x2
  UnityEngine_Transform_o *v68; // x25
  UnityEngine_Transform_o *v69; // x25
  CommandCardDialog_c *v70; // x8
  UILabel_o *answerBackLabel; // x21
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Action_o *v81; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4B19A12 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseUserServantEntity, *(_QWORD *)&cardIdx);
    sub_1BCA7E0(&Method_CommandCardDialog_EndOpen__, v8, v9);
    sub_1BCA7E0(&CommandCardDialog_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&StringLiteral_3772/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3773/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_3774/*"COMMAND_CODE_UNLOCK_TITLE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_3752/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, v40, v41);
    byte_4B19A12 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, baseUserServantEntity);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3774/*"COMMAND_CODE_UNLOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3752/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, 0LL);
  if ( !itemInfoLabel )
    goto LABEL_60;
  UILabel__set_text(itemInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3773/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(spendQpTxtLabel, (System_String_o *)SelfUserGame, 0LL);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpTxtLabel, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_60;
  haveQpLabel = this->fields.haveQpLabel;
  v49 = SelfUserGame;
  SelfUserGame = (__int64)System_Int32__ToString_63206828(
                            (int)SelfUserGame + 96,
                            (System_String_o *)StringLiteral_9337/*"N0"*/,
                            0LL);
  if ( !haveQpLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpLabel, (System_String_o *)SelfUserGame, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_60;
  UILabel__set_text(decideButtonLabel, (System_String_o *)SelfUserGame, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_60;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_60;
  v52 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v54 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
  *(_QWORD *)&v83.fields.currentCryptoKey = v54;
  *(_QWORD *)&v83.fields.fakeValue = v53;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL);
  if ( !v52 )
    goto LABEL_60;
  SelfUserGame = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v52, SelfUserGame, cardIdx, 0LL);
  if ( !SelfUserGame )
    goto LABEL_60;
  spendQpLabel = this->fields.spendQpLabel;
  v56 = SelfUserGame;
  SelfUserGame = (__int64)System_Int32__ToString_63206828(
                            (int)SelfUserGame + 24,
                            (System_String_o *)StringLiteral_9337/*"N0"*/,
                            0LL);
  if ( !spendQpLabel )
    goto LABEL_60;
  v57 = v49;
  UILabel__set_text(spendQpLabel, (System_String_o *)SelfUserGame, 0LL);
  v58 = *(_QWORD *)(v56 + 40);
  if ( !v58 )
    goto LABEL_60;
  if ( (int)*(_QWORD *)(v58 + 24) >= 1 )
  {
    v59 = *(_QWORD *)(v56 + 32);
    v60 = 0LL;
    v61 = (unsigned int)*(_QWORD *)(v58 + 24);
    while ( 1 )
    {
      releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
      SelfUserGame = (__int64)UnityEngine_Object__Instantiate_object_(
                                releaseItemObj,
                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v63 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SelfUserGame, 0LL);
      if ( !this->fields.unlockItemGrid )
        break;
      v64 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                0LL);
      if ( !v64 )
        break;
      UnityEngine_Transform__set_parent(v64, (UnityEngine_Transform_o *)SelfUserGame, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v63, 0LL);
      v66 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4B109C1 )
      {
        SelfUserGame = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v44, v65);
        byte_4B109C1 = 1;
      }
      if ( !v66 )
        break;
      UnityEngine_Transform__set_localPosition(v66, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v63, 0LL);
      v68 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4B109C7 )
      {
        SelfUserGame = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v44, v67);
        byte_4B109C7 = 1;
      }
      if ( !v68 )
        break;
      UnityEngine_Transform__set_localRotation(
        v68,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v63, 0LL);
      v69 = (UnityEngine_Transform_o *)SelfUserGame;
      v70 = CommandCardDialog_TypeInfo;
      if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo, v44);
        v70 = CommandCardDialog_TypeInfo;
      }
      if ( !v69 )
        break;
      UnityEngine_Transform__set_localScale(v69, v70->static_fields->UNLOCK_ITEM_SCALE, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v63,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v60 >= *(unsigned int *)(v58 + 24) )
        goto LABEL_61;
      if ( !v59 )
        break;
      if ( v60 >= *(unsigned int *)(v59 + 24) )
LABEL_61:
        sub_1BCAA44(SelfUserGame, v44);
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)(v57 + 16),
        *(_DWORD *)(v58 + 32 + 4 * v60),
        *(_DWORD *)(v59 + 32 + 4 * v60),
        0LL);
      if ( v61 == ++v60 )
        goto LABEL_42;
    }
LABEL_60:
    sub_1BCAA3C(SelfUserGame, v44);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3772/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, 0LL);
  if ( !answerBackLabel )
    goto LABEL_60;
  UILabel__set_text(answerBackLabel, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)this->fields.messageLabel;
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (__int64)this->fields.unlockInfoObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (__int64)this->fields.equipmentCommandCardObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (__int64)this->fields.removeCommandCardSlotObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (__int64)this->fields.warningCommandCodeObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (__int64)this->fields.overwriteCommandCodeObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (__int64)this->fields.lockResultInfoObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (__int64)this->fields.removeCommandCodeConfirmObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (__int64)this->fields.unlockItemGrid;
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (__int64)this->fields.unlockItemGrid;
  if ( !SelfUserGame )
    goto LABEL_60;
  UIGrid__set_repositionNow((UIGrid_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (__int64)this->fields.canExecuteButtonsObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (__int64)this->fields.canNotExecuteButtonObj;
  if ( !SelfUserGame )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v78, v79, v80);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardDialog__get_closeBtnObject(
        CommandCardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v10; // w0

  if ( (byte_4B19A1C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_4120/*"CancelButton"*/, v4, v5);
    byte_4B19A1C = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_4120/*"CancelButton"*/,
                                                       0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)canExecuteButtonsObj, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
    if ( !canExecuteButtonsObj )
      goto LABEL_18;
    if ( UnityEngine_GameObject__get_activeSelf(canExecuteButtonsObj, 0LL) )
      return gameObject;
  }
  canNotExecuteButtonObj = (UnityEngine_Object_o *)this->fields.canNotExecuteButtonObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v10 = UnityEngine_Object__op_Inequality(canNotExecuteButtonObj, 0LL, 0LL);
  gameObject = 0LL;
  if ( v10 )
  {
    canExecuteButtonsObj = this->fields.canNotExecuteButtonObj;
    if ( canExecuteButtonsObj )
    {
      gameObject = 0LL;
      if ( UnityEngine_GameObject__get_activeSelf(canExecuteButtonsObj, 0LL) )
        return this->fields.canNotExecuteButtonObj;
      return gameObject;
    }
LABEL_18:
    sub_1BCAA3C(canExecuteButtonsObj, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1128C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11244;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CommandCardDialog_ClickDelegate__BeginInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B19A1F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B19A1F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CommandCardDialog_ClickDelegate__Invoke(
        CommandCardDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}