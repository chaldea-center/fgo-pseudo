void __fastcall CommandCardDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct CommandCardDialog_StaticFields *static_fields; // x8
  int32x2_t *v3; // x8

  if ( (byte_4C25942 & 1) == 0 )
  {
    sub_1C3B764(&CommandCardDialog_TypeInfo, v1);
    byte_4C25942 = 1;
  }
  static_fields = CommandCardDialog_TypeInfo->static_fields;
  static_fields->DETACH_NEED_ITEM_NUM = 1;
  *(int32x2_t *)&static_fields->UNLOCK_ITEM_SCALE.fields.x = vdup_n_s32(0x3F19999Au);
  static_fields->UNLOCK_ITEM_SCALE.fields.z = 0.6;
  v3 = (int32x2_t *)CommandCardDialog_TypeInfo->static_fields;
  v3[2].n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v3[3].n64_u32[0] = 1060320051;
}


void __fastcall CommandCardDialog___ctor(CommandCardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C25941 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C25941 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardDialog__CloaseCombineItemLinkInfoListWindow(
        CommandCardDialog_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C2593F & 1) == 0 )
  {
    sub_1C3B764(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__, decide);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4C2593F = 1;
  }
  v4 = Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3B77C(Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v7);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_46468936(this, 0LL, v2);
}


void __fastcall CommandCardDialog__Close_46468936(
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Action_o *v17; // x20

  if ( (byte_4C2593B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_CommandCardDialog_EndClose__, v10);
    byte_4C2593B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CommandCardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  System_String_o *MargeExplanation_42013208; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_array *explanationList; // [xsp+0h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C2593A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, userCommandCode);
    byte_4C2593A = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)skillName,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)skillId,
    (int32_t)skillName,
    (System_String_o *)skillDetail,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)skillDetail, (int64_t)StringLiteral_1/*""*/, v12, v13, v14, v15, v16, v17);
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
    sub_1C3B9C0(v18, v19);
  if ( !titleList->max_length )
LABEL_10:
    sub_1C3B9C8(v18, v19);
  v26 = titleList->m_Items[0];
  *skillName = v26;
  sub_1C3B708((PartyOrganizationUtility_o *)skillName, (int64_t)v26, v20, v21, v22, v23, v24, v25);
  MargeExplanation_42013208 = SkillInfo__GetMargeExplanation_42013208(explanationList, 0LL);
  *skillDetail = MargeExplanation_42013208;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)skillDetail,
    (int64_t)MargeExplanation_42013208,
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

  if ( (byte_4C25935 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C25935 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71122936(gameObject, 0LL);
      if ( --v5 < 0 )
        goto LABEL_39;
    }
LABEL_67:
    sub_1C3B9C0(titleLabel, method);
  }
LABEL_39:
  titleLabel = (UILabel_o *)this->fields.removeItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_67;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v7 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.removeItemGrid;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v7, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71122936(v8, 0LL);
    }
    while ( --v7 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.returnItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_67;
  v9 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v9 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.returnItemGrid;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v9, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71122936(v10, 0LL);
    }
    while ( --v9 >= 0 );
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C2593D & 1) == 0 )
  {
    sub_1C3B764(&Method_CommandCardDialog_OnClickCancel__, method);
    byte_4C2593D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_CommandCardDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1C3B9C0(removeItemGrid, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t Value; // w0
  _QWORD *v10; // x8
  int32_t v11; // w22
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_Int32_array *v16; // x21
  CommandCardDialog_c *v17; // x8
  System_Int32_array *v18; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v19; // x23

  if ( (byte_4C2593E & 1) == 0 )
  {
    sub_1C3B764(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__, v3);
    sub_1C3B764(&Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__, v4);
    sub_1C3B764(&CommandCardDialog_TypeInfo, v5);
    sub_1C3B764(&int___TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_3761/*"CONTINUE_DEVICE_DISP_CANCEL"*/, v8);
    byte_4C2593E = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3761/*"CONTINUE_DEVICE_DISP_CANCEL"*/, 0LL);
  v10 = Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__;
  v11 = Value;
  if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C3B77C(Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C3B748(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = sub_1C3B80C(int___TypeInfo, 1LL);
  if ( !v14 )
    goto LABEL_13;
  v16 = (System_Int32_array *)v14;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_14;
  *(_DWORD *)(v14 + 32) = v11;
  v14 = sub_1C3B80C(int___TypeInfo, 1LL);
  v17 = CommandCardDialog_TypeInfo;
  v18 = (System_Int32_array *)v14;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v17 = CommandCardDialog_TypeInfo;
  }
  if ( !v18 )
LABEL_13:
    sub_1C3B9C0(v14, v15);
  if ( !v18->max_length )
LABEL_14:
    sub_1C3B9C8(v14, v15);
  v18->m_Items[1] = v17->static_fields->DETACH_NEED_ITEM_NUM;
  v19 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C3B9B0(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v16, v18, v19, 0, 0LL);
}


void __fastcall CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C2593C & 1) == 0 )
  {
    sub_1C3B764(&Method_CommandCardDialog_OnClickDecide__, method);
    byte_4C2593C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_CommandCardDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1C3B9C0(removeItemGrid, v5);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


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
  __int64 Instance; // x0
  __int64 v28; // x1
  ServantCommandCodeUnlockMaster_o *v29; // x23
  __int64 v30; // x22
  __int64 v31; // x24
  __int64 v32; // x23
  Il2CppObject *releaseItemObj; // x21
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_Transform_o *v35; // x22
  UnityEngine_Transform_o *v36; // x22
  UnityEngine_Transform_o *v37; // x22
  CommandCardDialog_c *v38; // x8
  UnityEngine_Transform_o *v39; // x22
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w24
  Il2CppObject *monitor; // x21
  UILabel_o *lockResultLabel; // x22
  System_String_o *v44; // x0
  UILabel_o *itemNumLabel; // x21
  System_String_o *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x23
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  UILabel_o *closeButtonLabel; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Action_o *v62; // x20
  int32_t v63; // [xsp+8h] [xbp-58h] BYREF
  int v64; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v65; // [xsp+10h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4C25937 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, baseUserServantEntity);
    sub_1C3B764(&Method_CommandCardDialog_EndOpen__, v9);
    sub_1C3B764(&CommandCardDialog_TypeInfo, v10);
    sub_1C3B764(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v13);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v15);
    sub_1C3B764(&int_TypeInfo, v16);
    sub_1C3B764(&LocalizationManager_TypeInfo, v17);
    sub_1C3B764(&NetworkManager_TypeInfo, v18);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v19);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v20);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C3B764(&StringLiteral_3769/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, v23);
    sub_1C3B764(&StringLiteral_3770/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/, v24);
    sub_1C3B764(&StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v25);
    sub_1C3B764(&StringLiteral_1/*""*/, v26);
    byte_4C25937 = 1;
  }
  v65 = 0LL;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_68;
  v29 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v31 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v31;
  *(_QWORD *)&v67.fields.fakeValue = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v67, 0LL);
  if ( !v29 )
    goto LABEL_68;
  Instance = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v29, Instance, cardIdx, 0LL);
  if ( !Instance )
    goto LABEL_68;
  v32 = *(_QWORD *)(Instance + 40);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        releaseItemObj,
                        (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_68;
  v34 = (UnityEngine_GameObject_o *)Instance;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.returnItemGrid )
    goto LABEL_68;
  v35 = (UnityEngine_Transform_o *)Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0LL);
  if ( !v35 )
    goto LABEL_68;
  UnityEngine_Transform__set_parent(v35, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
  v36 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C1C511 )
  {
    Instance = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v28);
    byte_4C1C511 = 1;
  }
  if ( !v36 )
    goto LABEL_68;
  UnityEngine_Transform__set_localPosition(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
  v37 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C1C517 )
  {
    Instance = sub_1C3B764(&UnityEngine_Quaternion_TypeInfo, v28);
    byte_4C1C517 = 1;
  }
  if ( !v37 )
    goto LABEL_68;
  UnityEngine_Transform__set_localRotation(v37, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
  v38 = CommandCardDialog_TypeInfo;
  v39 = (UnityEngine_Transform_o *)Instance;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v38 = CommandCardDialog_TypeInfo;
  }
  if ( !v39 )
    goto LABEL_68;
  UnityEngine_Transform__set_localScale(v39, v38->static_fields->REMOVE_ITEM_SCALE, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        v34,
                        (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v32 )
    goto LABEL_68;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_69;
  if ( !Instance )
    goto LABEL_68;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v32 + 32), 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v28);
    byte_4C1C955 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_69;
  if ( !MasterData_object )
    goto LABEL_68;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               *(_DWORD *)(v32 + 32),
               0LL);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v32 + 24) )
LABEL_69:
    sub_1C3B9C8(Instance, v28);
  if ( !Instance )
    goto LABEL_68;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v65,
               *(_DWORD *)(v32 + 32),
               (const MethodInfo_329AE94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v65 )
      goto LABEL_68;
    monitor = (Il2CppObject *)v65[1].monitor;
  }
  Instance = (__int64)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_68;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  lockResultLabel = this->fields.lockResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3770/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/, 0LL);
  Instance = (__int64)System_String__Format(v44, monitor, 0LL);
  if ( !lockResultLabel )
    goto LABEL_68;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0LL);
  itemNumLabel = this->fields.itemNumLabel;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3769/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
  v64 = num - 1;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v47, v48, v49);
  v63 = num;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v51, v52, v53);
  Instance = (__int64)System_String__Format_63382984(v46, v50, v54, 0LL);
  if ( !itemNumLabel )
    goto LABEL_68;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_68;
  UILabel__set_text(closeButtonLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.unlockInfoObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.equipmentCommandCardObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.removeCommandCardSlotObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.warningCommandCodeObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.overwriteCommandCodeObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.unlockItemGrid;
  if ( !Instance )
    goto LABEL_68;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.removeCommandCodeConfirmObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.lockResultInfoObj;
  if ( !Instance )
    goto LABEL_68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.returnItemGrid;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (Instance = (__int64)this->fields.returnItemGrid) == 0)
    || (UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0LL),
        (Instance = (__int64)this->fields.canExecuteButtonsObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (__int64)this->fields.canNotExecuteButtonObj) == 0) )
  {
LABEL_68:
    sub_1C3B9C0(Instance, v28);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
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
  __int64 transform; // x0
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
  Il2CppObject *releaseItemObj; // x22
  int32_t v43; // w21
  UnityEngine_GameObject_o *v44; // x22
  UnityEngine_Transform_o *v45; // x23
  UnityEngine_Transform_o *v46; // x23
  UnityEngine_Transform_o *v47; // x23
  CommandCardDialog_c *v48; // x8
  UnityEngine_Transform_o *v49; // x23
  Il2CppObject *MasterData_object; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v56; // x0
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  CommandCardDialog_c *v60; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v62; // x0
  int32_t v63; // w21
  UILabel_o *v64; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v66; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Action_o *v75; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+8h] [xbp-58h] BYREF
  int32_t v77; // [xsp+Ch] [xbp-54h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C25938 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, equipped);
    sub_1C3B764(&Method_CommandCardDialog_EndOpen__, v7);
    sub_1C3B764(&CommandCardDialog_TypeInfo, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v10);
    sub_1C3B764(&int_TypeInfo, v11);
    sub_1C3B764(&LocalizationManager_TypeInfo, v12);
    sub_1C3B764(&NetworkManager_TypeInfo, v13);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C3B764(&StringLiteral_3766/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, v17);
    sub_1C3B764(&StringLiteral_3771/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/, v18);
    sub_1C3B764(&StringLiteral_3767/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, v19);
    sub_1C3B764(&StringLiteral_3765/*"CONTINUE_DEVICE_DISP_TITLE"*/, v20);
    sub_1C3B764(&StringLiteral_3773/*"CONTINUE_DEVICE_TAKEOVER_CONFIRM_MESSAGE"*/, v21);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v22);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v23);
    sub_1C3B764(&StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v24);
    sub_1C3B764(&StringLiteral_25446, v25);
    sub_1C3B764(&StringLiteral_3772/*"CONTINUE_DEVICE_INPUT_TITLE"*/, v26);
    sub_1C3B764(&StringLiteral_3768/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, v27);
    sub_1C3B764(&StringLiteral_1/*""*/, v28);
    sub_1C3B764(&StringLiteral_3761/*"CONTINUE_DEVICE_DISP_CANCEL"*/, v29);
    byte_4C25938 = 1;
  }
  entity = 0LL;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3772/*"CONTINUE_DEVICE_INPUT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0LL);
  messageLabel = this->fields.messageLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3768/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_87;
  UILabel__set_text(messageLabel, (System_String_o *)transform, 0LL);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( equipped )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, 0LL);
    v32 = (System_String_o *)transform;
  }
  else
  {
    v32 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !removeWarningLabel )
    goto LABEL_87;
  UILabel__set_text(removeWarningLabel, v32, 0LL);
  v35 = this->fields.removeWarningLabel;
  if ( !v35 )
    goto LABEL_87;
  mText = v35->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"CONTINUE_DEVICE_DISP_TITLE"*/, 0LL);
  v38 = System_String__Concat_63368612(mText, v37, 0LL);
  UILabel__set_text(v35, v38, 0LL);
  if ( equipped )
  {
    transform = (__int64)this->fields.removeWarningLabel;
    if ( !transform )
      goto LABEL_87;
    UILabel__set_fontSize((UILabel_o *)transform, 20, 0LL);
  }
  spendItemTxtLabel = this->fields.spendItemTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3771/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/, 0LL);
  if ( !spendItemTxtLabel )
    goto LABEL_87;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0LL);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, 0LL);
  if ( !haveItemTxtLabel )
    goto LABEL_87;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3761/*"CONTINUE_DEVICE_DISP_CANCEL"*/, 0LL);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  v43 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (__int64)UnityEngine_Object__Instantiate_object_(
                         releaseItemObj,
                         (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_87;
  v44 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !this->fields.removeItemGrid )
    goto LABEL_87;
  v45 = (UnityEngine_Transform_o *)transform;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0LL);
  if ( !v45 )
    goto LABEL_87;
  UnityEngine_Transform__set_parent(v45, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (__int64)UnityEngine_GameObject__get_transform(v44, 0LL);
  v46 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C1C511 )
  {
    transform = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v32);
    byte_4C1C511 = 1;
  }
  if ( !v46 )
    goto LABEL_87;
  UnityEngine_Transform__set_localPosition(v46, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (__int64)UnityEngine_GameObject__get_transform(v44, 0LL);
  v47 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C1C517 )
  {
    transform = sub_1C3B764(&UnityEngine_Quaternion_TypeInfo, v32);
    byte_4C1C517 = 1;
  }
  if ( !v47 )
    goto LABEL_87;
  UnityEngine_Transform__set_localRotation(v47, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  transform = (__int64)UnityEngine_GameObject__get_transform(v44, 0LL);
  v48 = CommandCardDialog_TypeInfo;
  v49 = (UnityEngine_Transform_o *)transform;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v48 = CommandCardDialog_TypeInfo;
  }
  if ( !v49 )
    goto LABEL_87;
  UnityEngine_Transform__set_localScale(v49, v48->static_fields->REMOVE_ITEM_SCALE, 0LL);
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         v44,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_87;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v43, 0LL);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)transform,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v32);
    byte_4C1C955 = 1;
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
                v43,
                0LL);
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
  v77 = num;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v51, v52, v53);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_25446, v56, 0LL);
  if ( !haveItemNumLabel )
    goto LABEL_87;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0LL);
  v60 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v60 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v60->static_fields->DETACH_NEED_ITEM_NUM;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM, v57, v58, v59);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_25446, v62, 0LL);
  if ( !spendItemNumLabel )
    goto LABEL_87;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0LL);
  transform = (__int64)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_87;
  v63 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.removeCommandCardSlotObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.equipmentCommandCardObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.unlockInfoObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.removeItemGrid;
  if ( !transform )
    goto LABEL_87;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.warningCommandCodeObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.overwriteCommandCodeObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.lockResultInfoObj;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (__int64)this->fields.removeCommandCodeConfirmObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (__int64)this->fields.removeItemGrid) == 0)
    || (UIGrid__set_repositionNow((UIGrid_o *)transform, 1, 0LL),
        (transform = (__int64)this->fields.itemLinkListButtonObj) == 0) )
  {
LABEL_87:
    sub_1C3B9C0(transform, v32);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  if ( num >= v63 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0LL);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
      if ( cancelButtonLabel )
      {
        UILabel__set_text(cancelButtonLabel, (System_String_o *)transform, 0LL);
        transform = (__int64)this->fields.canExecuteButtonsObj;
        if ( transform )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
          transform = (__int64)this->fields.canNotExecuteButtonObj;
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            transform = (__int64)this->fields.removeWarningLabel;
            if ( transform )
            {
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( transform )
              {
                v66 = 1;
                goto LABEL_86;
              }
            }
          }
        }
      }
    }
    goto LABEL_87;
  }
  v64 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3773/*"CONTINUE_DEVICE_TAKEOVER_CONFIRM_MESSAGE"*/, 0LL);
  if ( !v64 )
    goto LABEL_87;
  UILabel__set_text(v64, (System_String_o *)transform, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_87;
  UILabel__set_text(closeButtonLabel, (System_String_o *)transform, 0LL);
  transform = (__int64)this->fields.canExecuteButtonsObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.canNotExecuteButtonObj;
  if ( !transform )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.removeWarningLabel;
  if ( !transform )
    goto LABEL_87;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_87;
  v66 = 0;
LABEL_86:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v66, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v75, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v75, 0, 0LL);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Action_o *v27; // x20

  if ( (byte_4C25939 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, userCommandCode);
    sub_1C3B764(&Method_CommandCardDialog_EndOpen__, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_3781/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, v9);
    sub_1C3B764(&StringLiteral_3777/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, v10);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v11);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v12);
    sub_1C3B764(&StringLiteral_3778/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v13);
    byte_4C25939 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3781/*"CONTINUE_WAVE_RESTART_WINDOW_CANCEL_BUTTON"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0LL);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3778/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0LL);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3777/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, 0LL);
  if ( !removeDetailLabel )
    goto LABEL_23;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
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
    0LL);
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
    sub_1C3B9C0(removeCommandCodeConfirmObj, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


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
  __int64 SelfUserGame; // x0
  __int64 v27; // x1
  UILabel_o *itemInfoLabel; // x21
  UILabel_o *spendQpTxtLabel; // x21
  UILabel_o *haveQpTxtLabel; // x21
  UILabel_o *haveQpLabel; // x24
  __int64 v32; // x26
  UILabel_o *decideButtonLabel; // x24
  UILabel_o *cancelButtonLabel; // x24
  ServantCommandCodeUnlockMaster_o *v35; // x24
  __int64 v36; // x23
  __int64 v37; // x25
  UILabel_o *spendQpLabel; // x23
  __int64 v39; // x21
  __int64 v40; // x22
  __int64 v41; // x27
  __int64 v42; // x26
  unsigned __int64 v43; // x28
  __int64 v44; // x29
  Il2CppObject *releaseItemObj; // x24
  UnityEngine_GameObject_o *v46; // x24
  UnityEngine_Transform_o *v47; // x25
  UnityEngine_Transform_o *v48; // x25
  UnityEngine_Transform_o *v49; // x25
  UnityEngine_Transform_o *v50; // x25
  CommandCardDialog_c *v51; // x8
  UILabel_o *answerBackLabel; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Action_o *v59; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4C25936 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, baseUserServantEntity);
    sub_1C3B764(&Method_CommandCardDialog_EndOpen__, v8);
    sub_1C3B764(&CommandCardDialog_TypeInfo, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11);
    sub_1C3B764(&LocalizationManager_TypeInfo, v12);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C3B764(&StringLiteral_3784/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, v17);
    sub_1C3B764(&StringLiteral_3705/*"CONFIRM_CHARGESUMMON_MSG"*/, v18);
    sub_1C3B764(&StringLiteral_3785/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, v19);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v20);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v21);
    sub_1C3B764(&StringLiteral_9395/*"ONE_ACT"*/, v22);
    sub_1C3B764(&StringLiteral_3786/*"CONTROLLER COLLIDER HIT"*/, v23);
    sub_1C3B764(&StringLiteral_3764/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/, v24);
    byte_4C25936 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"CONTROLLER COLLIDER HIT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3764/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/, 0LL);
  if ( !itemInfoLabel )
    goto LABEL_60;
  UILabel__set_text(itemInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3785/*"CONTINUE_WAVE_RESTART_WINDOW_TITLE"*/, 0LL);
  if ( !spendQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(spendQpTxtLabel, (System_String_o *)SelfUserGame, 0LL);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3705/*"CONFIRM_CHARGESUMMON_MSG"*/, 0LL);
  if ( !haveQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpTxtLabel, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_60;
  haveQpLabel = this->fields.haveQpLabel;
  v32 = SelfUserGame;
  SelfUserGame = (__int64)System_Int32__ToString_64174220(
                            (int)SelfUserGame + 96,
                            (System_String_o *)StringLiteral_9395/*"ONE_ACT"*/,
                            0LL);
  if ( !haveQpLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpLabel, (System_String_o *)SelfUserGame, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_60;
  UILabel__set_text(decideButtonLabel, (System_String_o *)SelfUserGame, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_60;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_60;
  v35 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v37 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v37;
  *(_QWORD *)&v61.fields.fakeValue = v36;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v61, 0LL);
  if ( !v35 )
    goto LABEL_60;
  SelfUserGame = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v35, SelfUserGame, cardIdx, 0LL);
  if ( !SelfUserGame )
    goto LABEL_60;
  spendQpLabel = this->fields.spendQpLabel;
  v39 = SelfUserGame;
  SelfUserGame = (__int64)System_Int32__ToString_64174220(
                            (int)SelfUserGame + 24,
                            (System_String_o *)StringLiteral_9395/*"ONE_ACT"*/,
                            0LL);
  if ( !spendQpLabel )
    goto LABEL_60;
  v40 = v32;
  UILabel__set_text(spendQpLabel, (System_String_o *)SelfUserGame, 0LL);
  v41 = *(_QWORD *)(v39 + 40);
  if ( !v41 )
    goto LABEL_60;
  if ( (int)*(_QWORD *)(v41 + 24) >= 1 )
  {
    v42 = *(_QWORD *)(v39 + 32);
    v43 = 0LL;
    v44 = (unsigned int)*(_QWORD *)(v41 + 24);
    while ( 1 )
    {
      releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SelfUserGame = (__int64)UnityEngine_Object__Instantiate_object_(
                                releaseItemObj,
                                (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v46 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SelfUserGame, 0LL);
      if ( !this->fields.unlockItemGrid )
        break;
      v47 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                0LL);
      if ( !v47 )
        break;
      UnityEngine_Transform__set_parent(v47, (UnityEngine_Transform_o *)SelfUserGame, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v46, 0LL);
      v48 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4C1C511 )
      {
        SelfUserGame = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v27);
        byte_4C1C511 = 1;
      }
      if ( !v48 )
        break;
      UnityEngine_Transform__set_localPosition(v48, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v46, 0LL);
      v49 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4C1C517 )
      {
        SelfUserGame = sub_1C3B764(&UnityEngine_Quaternion_TypeInfo, v27);
        byte_4C1C517 = 1;
      }
      if ( !v49 )
        break;
      UnityEngine_Transform__set_localRotation(
        v49,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v46, 0LL);
      v50 = (UnityEngine_Transform_o *)SelfUserGame;
      v51 = CommandCardDialog_TypeInfo;
      if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
        v51 = CommandCardDialog_TypeInfo;
      }
      if ( !v50 )
        break;
      UnityEngine_Transform__set_localScale(v50, v51->static_fields->UNLOCK_ITEM_SCALE, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v46,
                                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v43 >= *(unsigned int *)(v41 + 24) )
        goto LABEL_61;
      if ( !v42 )
        break;
      if ( v43 >= *(unsigned int *)(v42 + 24) )
LABEL_61:
        sub_1C3B9C8(SelfUserGame, v27);
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)(v40 + 16),
        *(_DWORD *)(v41 + 32 + 4 * v43),
        *(_DWORD *)(v42 + 32 + 4 * v43),
        0LL);
      if ( v44 == ++v43 )
        goto LABEL_42;
    }
LABEL_60:
    sub_1C3B9C0(SelfUserGame, v27);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3784/*"CONTINUE_WAVE_RESTART_WINDOW_MESSAGE"*/, 0LL);
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
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

  if ( (byte_4C25940 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_4134/*"Cannot insert null child"*/, v3);
    byte_4C25940 = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_4134/*"Cannot insert null child"*/,
                                                       0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)canExecuteButtonsObj, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_18:
    sub_1C3B9C0(canExecuteButtonsObj, method);
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A80BF4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A80BAC;
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
  if ( (byte_4C25943 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isDecide);
    byte_4C25943 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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