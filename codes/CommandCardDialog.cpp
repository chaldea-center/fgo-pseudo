void __fastcall CommandCardDialog___cctor(const MethodInfo *method)
{
  struct CommandCardDialog_StaticFields *static_fields; // x8
  int32x2_t *v2; // x8

  if ( (byte_4A5E8CD & 1) == 0 )
  {
    sub_1B885B0(&CommandCardDialog_TypeInfo);
    byte_4A5E8CD = 1;
  }
  static_fields = CommandCardDialog_TypeInfo->static_fields;
  static_fields->DETACH_NEED_ITEM_NUM = 1;
  *(int32x2_t *)&static_fields->UNLOCK_ITEM_SCALE.fields.x = vdup_n_s32(0x3F19999Au);
  static_fields->UNLOCK_ITEM_SCALE.fields.z = 0.6;
  v2 = (int32x2_t *)CommandCardDialog_TypeInfo->static_fields;
  v2[2].n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  v2[3].n64_u32[0] = 1060320051;
}


void __fastcall CommandCardDialog___ctor(CommandCardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E8CC & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5E8CC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardDialog__CloaseCombineItemLinkInfoListWindow(
        CommandCardDialog_o *this,
        bool decide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5E8CA & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E8CA = 1;
  }
  v3 = Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CommandCardDialog__Close(CommandCardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommandCardDialog__Close_44802876(this, 0LL, v2);
}


void __fastcall CommandCardDialog__Close_44802876(
        CommandCardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_4A5E8C6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommandCardDialog_EndClose__);
    byte_4A5E8C6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, 0, v6, v7);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CommandCardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall CommandCardDialog__EndClose(CommandCardDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  CommandCardDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x1
  System_String_o *MargeExplanation_40526144; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_array *explanationList; // [xsp+0h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5E8C5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E8C5 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  *skillId = 0;
  *skillName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)skillName,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)skillId,
    (int32_t)skillName);
  *skillDetail = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillDetail, (int32_t)StringLiteral_1/*""*/, v10, v11);
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
    sub_1B8880C(v12, v13);
  if ( !titleList->max_length )
LABEL_10:
    sub_1B88814(v12, v13);
  v16 = titleList->m_Items[0];
  *skillName = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillName, (int32_t)v16, v14, v15);
  MargeExplanation_40526144 = SkillInfo__GetMargeExplanation_40526144(explanationList, 0LL);
  *skillDetail = MargeExplanation_40526144;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillDetail, (int32_t)MargeExplanation_40526144, v18, v19);
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

  if ( (byte_4A5E8C0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E8C0 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
      if ( --v4 < 0 )
        goto LABEL_39;
    }
LABEL_67:
    sub_1B8880C(titleLabel, method);
  }
LABEL_39:
  titleLabel = (UILabel_o *)this->fields.removeItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_67;
  v6 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v6 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.removeItemGrid;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v6, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(v7, 0LL);
    }
    while ( --v6 >= 0 );
  }
  titleLabel = (UILabel_o *)this->fields.returnItemGrid;
  if ( !titleLabel )
    goto LABEL_67;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_67;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)titleLabel, 0LL) - 1;
  if ( v8 >= 0 )
  {
    do
    {
      titleLabel = (UILabel_o *)this->fields.returnItemGrid;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UIGrid__GetChild((UIGrid_o *)titleLabel, v8, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !titleLabel )
        goto LABEL_67;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(v9, 0LL);
    }
    while ( --v8 >= 0 );
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

  if ( (byte_4A5E8C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardDialog_OnClickCancel__);
    byte_4A5E8C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CommandCardDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1B8880C(removeItemGrid, v5);
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
  int32_t Value; // w0
  _QWORD *v4; // x8
  int32_t v5; // w22
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_Int32_array *v10; // x21
  CommandCardDialog_c *v11; // x8
  System_Int32_array *v12; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v13; // x23

  if ( (byte_4A5E8C9 & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__);
    sub_1B885B0(&Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
    sub_1B885B0(&CommandCardDialog_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_3718/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_4A5E8C9 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3718/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
  v4 = Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__;
  v5 = Value;
  if ( (*((_BYTE *)Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_CommandCardDialog_OnClickCombineItemLinkInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = sub_1B88658(int___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_13;
  v10 = (System_Int32_array *)v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_14;
  *(_DWORD *)(v8 + 32) = v5;
  v8 = sub_1B88658(int___TypeInfo, 1LL);
  v11 = CommandCardDialog_TypeInfo;
  v12 = (System_Int32_array *)v8;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v11 = CommandCardDialog_TypeInfo;
  }
  if ( !v12 )
LABEL_13:
    sub_1B8880C(v8, v9);
  if ( !v12->max_length )
LABEL_14:
    sub_1B88814(v8, v9);
  v12->m_Items[1] = v11->static_fields->DETACH_NEED_ITEM_NUM;
  v13 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardDialog_CloaseCombineItemLinkInfoListWindow__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v10, v12, v13, 0, 0LL);
}


void __fastcall CommandCardDialog__OnClickDecide(CommandCardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *removeItemGrid; // x0
  struct CommandCardDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4A5E8C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardDialog_OnClickDecide__);
    byte_4A5E8C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CommandCardDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CommandCardDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    removeItemGrid = (UnityEngine_Component_o *)this->fields.removeItemGrid;
    if ( !removeItemGrid
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (removeItemGrid = (UnityEngine_Component_o *)this->fields.unlockItemGrid) == 0LL)
      || (removeItemGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(removeItemGrid, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeItemGrid, 0, 0LL),
          (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1B8880C(removeItemGrid, v5);
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
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  UILabel_o *closeButtonLabel; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_Action_o *v40; // x20
  int32_t v41; // [xsp+8h] [xbp-58h] BYREF
  int v42; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v43; // [xsp+10h] [xbp-50h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4A5E8C2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommandCardDialog_EndOpen__);
    sub_1B885B0(&CommandCardDialog_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3726/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/);
    sub_1B885B0(&StringLiteral_3727/*"COMMAND_CODE_LOCK_RETURN_MSG"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E8C2 = 1;
  }
  v43 = 0LL;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_64;
  v11 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v13;
  *(_QWORD *)&v45.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v11 )
    goto LABEL_64;
  Instance = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v11, Instance, cardIdx, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v14 = *(_QWORD *)(Instance + 40);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        releaseItemObj,
                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_64;
  v16 = (UnityEngine_GameObject_o *)Instance;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.returnItemGrid )
    goto LABEL_64;
  v17 = (UnityEngine_Transform_o *)Instance;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.returnItemGrid, 0LL);
  if ( !v17 )
    goto LABEL_64;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0LL);
  v18 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A55CE1 )
  {
    Instance = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v18 )
    goto LABEL_64;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0LL);
  v19 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A55CE7 )
  {
    Instance = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !v19 )
    goto LABEL_64;
  UnityEngine_Transform__set_localRotation(v19, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v16, 0LL);
  v20 = CommandCardDialog_TypeInfo;
  v21 = (UnityEngine_Transform_o *)Instance;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v20 = CommandCardDialog_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_64;
  UnityEngine_Transform__set_localScale(v21, v20->static_fields->REMOVE_ITEM_SCALE, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                        v16,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !v14 )
    goto LABEL_64;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_65;
  if ( !Instance )
    goto LABEL_64;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, *(_DWORD *)(v14 + 32), 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_65;
  if ( !MasterData_object )
    goto LABEL_64;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               Instance,
               *(_DWORD *)(v14 + 32),
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_DWORD *)(v14 + 24) )
LABEL_65:
    sub_1B88814(Instance, v10);
  if ( !Instance )
    goto LABEL_64;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v43,
               *(_DWORD *)(v14 + 32),
               (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_64;
    monitor = (Il2CppObject *)v43[1].monitor;
  }
  Instance = (__int64)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  lockResultLabel = this->fields.lockResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3727/*"COMMAND_CODE_LOCK_RETURN_MSG"*/, 0LL);
  Instance = (__int64)System_String__Format(v26, monitor, 0LL);
  if ( !lockResultLabel )
    goto LABEL_64;
  UILabel__set_text(lockResultLabel, (System_String_o *)Instance, 0LL);
  itemNumLabel = this->fields.itemNumLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3726/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0LL);
  v42 = num - 1;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v29, v30, v31);
  v41 = num;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v33, v34, v35);
  Instance = (__int64)System_String__Format_61721404(v28, v32, v36, 0LL);
  if ( !itemNumLabel )
    goto LABEL_64;
  UILabel__set_text(itemNumLabel, (System_String_o *)Instance, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_64;
  UILabel__set_text(closeButtonLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.messageLabel;
  if ( !Instance )
    goto LABEL_64;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.unlockInfoObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.equipmentCommandCardObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.removeCommandCardSlotObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.warningCommandCodeObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.overwriteCommandCodeObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.unlockItemGrid;
  if ( !Instance )
    goto LABEL_64;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.removeCommandCodeConfirmObj;
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.lockResultInfoObj;
  if ( !Instance )
    goto LABEL_64;
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
LABEL_64:
    sub_1B8880C(Instance, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v38, v39);
  v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


void __fastcall CommandCardDialog__OpenLockEquipSlot(
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
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t num; // w22
  UILabel_o *haveItemNumLabel; // x21
  Il2CppObject *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  CommandCardDialog_c *v37; // x0
  UILabel_o *spendItemNumLabel; // x21
  Il2CppObject *v39; // x0
  int32_t v40; // w21
  UILabel_o *v41; // x21
  UILabel_o *closeButtonLabel; // x21
  bool v43; // w1
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  System_Action_o *v48; // x20
  int32_t DETACH_NEED_ITEM_NUM; // [xsp+8h] [xbp-58h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5E8C3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommandCardDialog_EndOpen__);
    sub_1B885B0(&CommandCardDialog_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3723/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/);
    sub_1B885B0(&StringLiteral_3728/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/);
    sub_1B885B0(&StringLiteral_3724/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/);
    sub_1B885B0(&StringLiteral_3722/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/);
    sub_1B885B0(&StringLiteral_3730/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    sub_1B885B0(&StringLiteral_3729/*"COMMAND_CODE_LOCK_TITLE"*/);
    sub_1B885B0(&StringLiteral_3725/*"COMMAND_CODE_LOCK_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_3718/*"COMMAND_CODE_DETACHING_ITEM_ID"*/);
    byte_4A5E8C3 = 1;
  }
  entity = 0LL;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"COMMAND_CODE_LOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_83;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0LL);
  messageLabel = this->fields.messageLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMMAND_CODE_LOCK_MSG"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_83;
  UILabel__set_text(messageLabel, (System_String_o *)transform, 0LL);
  removeWarningLabel = this->fields.removeWarningLabel;
  if ( equipped )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3723/*"COMMAND_CODE_LOCK_EQUIP_WARNING_MSG"*/, 0LL);
    v9 = (System_String_o *)transform;
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !removeWarningLabel )
    goto LABEL_83;
  UILabel__set_text(removeWarningLabel, v9, 0LL);
  v12 = this->fields.removeWarningLabel;
  if ( !v12 )
    goto LABEL_83;
  mText = v12->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3722/*"COMMAND_CODE_LOCK_DEFAULT_WARNING_MSG"*/, 0LL);
  v15 = System_String__Concat_61707032(mText, v14, 0LL);
  UILabel__set_text(v12, v15, 0LL);
  if ( equipped )
  {
    transform = (__int64)this->fields.removeWarningLabel;
    if ( !transform )
      goto LABEL_83;
    UILabel__set_fontSize((UILabel_o *)transform, 20, 0LL);
  }
  spendItemTxtLabel = this->fields.spendItemTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3728/*"COMMAND_CODE_LOCK_SPEND_ITEM"*/, 0LL);
  if ( !spendItemTxtLabel )
    goto LABEL_83;
  UILabel__set_text(spendItemTxtLabel, (System_String_o *)transform, 0LL);
  haveItemTxtLabel = this->fields.haveItemTxtLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3724/*"COMMAND_CODE_LOCK_HAVE_ITEM"*/, 0LL);
  if ( !haveItemTxtLabel )
    goto LABEL_83;
  UILabel__set_text(haveItemTxtLabel, (System_String_o *)transform, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3718/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
  releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
  v20 = Value;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (__int64)UnityEngine_Object__Instantiate_object_(
                         releaseItemObj,
                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_83;
  v21 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !this->fields.removeItemGrid )
    goto LABEL_83;
  v22 = (UnityEngine_Transform_o *)transform;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.removeItemGrid, 0LL);
  if ( !v22 )
    goto LABEL_83;
  UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
  v23 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A55CE1 )
  {
    transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v23 )
    goto LABEL_83;
  UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
  v24 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A55CE7 )
  {
    transform = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !v24 )
    goto LABEL_83;
  UnityEngine_Transform__set_localRotation(v24, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0LL);
  v25 = CommandCardDialog_TypeInfo;
  v26 = (UnityEngine_Transform_o *)transform;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v25 = CommandCardDialog_TypeInfo;
  }
  if ( !v26 )
    goto LABEL_83;
  UnityEngine_Transform__set_localScale(v26, v25->static_fields->REMOVE_ITEM_SCALE, 0LL);
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         v21,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
  if ( !transform )
    goto LABEL_83;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)transform, v20, 0LL);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)transform,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  transform = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_83;
  transform = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, transform, v20, 0LL);
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
  v50 = num;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v28, v29, v30);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v33, 0LL);
  if ( !haveItemNumLabel )
    goto LABEL_83;
  UILabel__set_text(haveItemNumLabel, (System_String_o *)transform, 0LL);
  v37 = CommandCardDialog_TypeInfo;
  spendItemNumLabel = this->fields.spendItemNumLabel;
  if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
    v37 = CommandCardDialog_TypeInfo;
  }
  DETACH_NEED_ITEM_NUM = v37->static_fields->DETACH_NEED_ITEM_NUM;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DETACH_NEED_ITEM_NUM, v34, v35, v36);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v39, 0LL);
  if ( !spendItemNumLabel )
    goto LABEL_83;
  UILabel__set_text(spendItemNumLabel, (System_String_o *)transform, 0LL);
  transform = (__int64)this->fields.messageLabel;
  if ( !transform )
    goto LABEL_83;
  v40 = CommandCardDialog_TypeInfo->static_fields->DETACH_NEED_ITEM_NUM;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.removeCommandCardSlotObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.equipmentCommandCardObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.unlockInfoObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.removeItemGrid;
  if ( !transform )
    goto LABEL_83;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.warningCommandCodeObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.overwriteCommandCodeObj;
  if ( !transform )
    goto LABEL_83;
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
LABEL_83:
    sub_1B8880C(transform, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  if ( num >= v40 )
  {
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)transform, 0LL);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
                v43 = 1;
                goto LABEL_82;
              }
            }
          }
        }
      }
    }
    goto LABEL_83;
  }
  v41 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3730/*"COMMAND_CODE_NOT_CLEAR_ITEM_MSG"*/, 0LL);
  if ( !v41 )
    goto LABEL_83;
  UILabel__set_text(v41, (System_String_o *)transform, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_83;
  UILabel__set_text(closeButtonLabel, (System_String_o *)transform, 0LL);
  transform = (__int64)this->fields.canExecuteButtonsObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.canNotExecuteButtonObj;
  if ( !transform )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.removeWarningLabel;
  if ( !transform )
    goto LABEL_83;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_83;
  v43 = 0;
LABEL_82:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v43, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v46, v47);
  v48 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
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
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_o *v17; // x20

  if ( (byte_4A5E8C4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommandCardDialog_EndOpen__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3738/*"COMMAND_CODE_REMOVE_TITLE"*/);
    sub_1B885B0(&StringLiteral_3734/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3735/*"COMMAND_CODE_REMOVE_MSG"*/);
    byte_4A5E8C4 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"COMMAND_CODE_REMOVE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, removeCommandCodeConfirmObj, 0LL);
  messageLabel = this->fields.messageLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMAND_CODE_REMOVE_MSG"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, removeCommandCodeConfirmObj, 0LL);
  removeDetailLabel = this->fields.removeDetailLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMAND_CODE_REMOVE_DETAIL_MSG"*/, 0LL);
  if ( !removeDetailLabel )
    goto LABEL_23;
  UILabel__set_text(removeDetailLabel, removeCommandCodeConfirmObj, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, removeCommandCodeConfirmObj, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  removeCommandCodeConfirmObj = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
    v14);
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
    sub_1B8880C(removeCommandCodeConfirmObj, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)removeCommandCodeConfirmObj, 0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v15, v16);
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
}


void __fastcall CommandCardDialog__OpenUnlockCommandCardEquipment(
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
  int32_t v37; // w3
  System_Action_o *v38; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A5E8C1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommandCardDialog_EndOpen__);
    sub_1B885B0(&CommandCardDialog_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3741/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3742/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_3743/*"COMMAND_CODE_UNLOCK_TITLE"*/);
    sub_1B885B0(&StringLiteral_3721/*"COMMAND_CODE_ITEM_ITEM_INFO"*/);
    byte_4A5E8C1 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3743/*"COMMAND_CODE_UNLOCK_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  itemInfoLabel = this->fields.itemInfoLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3721/*"COMMAND_CODE_ITEM_ITEM_INFO"*/, 0LL);
  if ( !itemInfoLabel )
    goto LABEL_60;
  UILabel__set_text(itemInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  spendQpTxtLabel = this->fields.spendQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"COMMAND_CODE_UNLOCK_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(spendQpTxtLabel, (System_String_o *)SelfUserGame, 0LL);
  haveQpTxtLabel = this->fields.haveQpTxtLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpTxtLabel, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_60;
  haveQpLabel = this->fields.haveQpLabel;
  v15 = SelfUserGame;
  SelfUserGame = (__int64)System_Int32__ToString_62512312(
                            (int)SelfUserGame + 96,
                            (System_String_o *)StringLiteral_9206/*"N0"*/,
                            0LL);
  if ( !haveQpLabel )
    goto LABEL_60;
  UILabel__set_text(haveQpLabel, (System_String_o *)SelfUserGame, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_60;
  UILabel__set_text(decideButtonLabel, (System_String_o *)SelfUserGame, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_60;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_60;
  SelfUserGame = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_60;
  v18 = (ServantCommandCodeUnlockMaster_o *)SelfUserGame;
  v20 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v20;
  *(_QWORD *)&v40.fields.fakeValue = v19;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
  if ( !v18 )
    goto LABEL_60;
  SelfUserGame = (__int64)ServantCommandCodeUnlockMaster__GetEntity(v18, SelfUserGame, cardIdx, 0LL);
  if ( !SelfUserGame )
    goto LABEL_60;
  spendQpLabel = this->fields.spendQpLabel;
  v22 = SelfUserGame;
  SelfUserGame = (__int64)System_Int32__ToString_62512312(
                            (int)SelfUserGame + 24,
                            (System_String_o *)StringLiteral_9206/*"N0"*/,
                            0LL);
  if ( !spendQpLabel )
    goto LABEL_60;
  v23 = v15;
  UILabel__set_text(spendQpLabel, (System_String_o *)SelfUserGame, 0LL);
  v24 = *(_QWORD *)(v22 + 40);
  if ( !v24 )
    goto LABEL_60;
  if ( (int)*(_QWORD *)(v24 + 24) >= 1 )
  {
    v25 = *(_QWORD *)(v22 + 32);
    v26 = 0LL;
    v27 = (unsigned int)*(_QWORD *)(v24 + 24);
    while ( 1 )
    {
      releaseItemObj = (Il2CppObject *)this->fields.releaseItemObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SelfUserGame = (__int64)UnityEngine_Object__Instantiate_object_(
                                releaseItemObj,
                                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !SelfUserGame )
        break;
      v29 = (UnityEngine_GameObject_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SelfUserGame, 0LL);
      if ( !this->fields.unlockItemGrid )
        break;
      v30 = (UnityEngine_Transform_o *)SelfUserGame;
      SelfUserGame = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.unlockItemGrid,
                                0LL);
      if ( !v30 )
        break;
      UnityEngine_Transform__set_parent(v30, (UnityEngine_Transform_o *)SelfUserGame, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v29, 0LL);
      v31 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4A55CE1 )
      {
        SelfUserGame = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v31 )
        break;
      UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v29, 0LL);
      v32 = (UnityEngine_Transform_o *)SelfUserGame;
      if ( !byte_4A55CE7 )
      {
        SelfUserGame = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
        byte_4A55CE7 = 1;
      }
      if ( !v32 )
        break;
      UnityEngine_Transform__set_localRotation(
        v32,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__get_transform(v29, 0LL);
      v33 = (UnityEngine_Transform_o *)SelfUserGame;
      v34 = CommandCardDialog_TypeInfo;
      if ( !CommandCardDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardDialog_TypeInfo);
        v34 = CommandCardDialog_TypeInfo;
      }
      if ( !v33 )
        break;
      UnityEngine_Transform__set_localScale(v33, v34->static_fields->UNLOCK_ITEM_SCALE, 0LL);
      SelfUserGame = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v29,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      if ( v26 >= *(unsigned int *)(v24 + 24) )
        goto LABEL_61;
      if ( !v25 )
        break;
      if ( v26 >= *(unsigned int *)(v25 + 24) )
LABEL_61:
        sub_1B88814(SelfUserGame, v10);
      if ( !SelfUserGame )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)SelfUserGame,
        *(_QWORD *)(v23 + 16),
        *(_DWORD *)(v24 + 32 + 4 * v26),
        *(_DWORD *)(v25 + 32 + 4 * v26),
        0LL);
      if ( v27 == ++v26 )
        goto LABEL_42;
    }
LABEL_60:
    sub_1B8880C(SelfUserGame, v10);
  }
LABEL_42:
  answerBackLabel = this->fields.answerBackLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3741/*"COMMAND_CODE_UNLOCK_CONFIRM_MSG"*/, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v36, v37);
  v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_CommandCardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardDialog__get_closeBtnObject(
        CommandCardDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *canExecuteButtonsObj; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *canNotExecuteButtonObj; // x20
  bool v6; // w0

  if ( (byte_4A5E8CB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_4054/*"CancelButton"*/);
    byte_4A5E8CB = 1;
  }
  canExecuteButtonsObj = this->fields.canExecuteButtonsObj;
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(canExecuteButtonsObj, 0LL);
  if ( !canExecuteButtonsObj )
    goto LABEL_18;
  canExecuteButtonsObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                       (UnityEngine_Transform_o *)canExecuteButtonsObj,
                                                       (System_String_o *)StringLiteral_4054/*"CancelButton"*/,
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
LABEL_18:
    sub_1B8880C(canExecuteButtonsObj, method);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D2B80;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2B38;
}


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
  if ( (byte_4A5E8CE & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5E8CE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CommandCardDialog_ClickDelegate__EndInvoke(
        CommandCardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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