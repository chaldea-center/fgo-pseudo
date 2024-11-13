void __fastcall EventCraftFirstTimeSupportToolDialogComponent___ctor(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19FB4 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19FB4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftFirstTimeSupportToolDialogComponent__Init(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftFirstTimeSupportToolDialogComponent__OnClickClose(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B19FB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__, method, v2);
    byte_4B19FB2 = 1;
  }
  v4 = Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__;
  if ( (*((_BYTE *)Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.closeAction, 0LL);
}


void __fastcall EventCraftFirstTimeSupportToolDialogComponent__Open(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        ItemEntity_o *supportTool,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  ItemIconComponent_o *supportToolItem; // x8
  int64_t UserId; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *Master_object; // x21
  int32_t num; // w22
  UILabel_o *possessionLb; // x20
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  UILabel_o *detailLabel; // x20
  System_String_o *v36; // x21
  Il2CppObject *v37; // x0
  UILabel_o *closeButtonLb; // x20
  int32_t v39; // [xsp+0h] [xbp-40h] BYREF
  int32_t v40; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19FB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, supportTool, closeCallback);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_8905/*"MULTIPLE_INFO"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3978/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v23, v24);
    byte_4B19FB1 = 1;
  }
  entity = 0LL;
  this->fields.closeAction = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeAction,
    (int64_t)closeCallback,
    (int64_t)closeCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( supportTool )
    supportToolItem = 0LL;
  else
    supportToolItem = this->fields.supportToolItem;
  if ( supportTool )
    UserId = (int64_t)this->fields.supportToolItem;
  else
    UserId = 0LL;
  if ( !supportTool )
  {
    if ( !supportToolItem )
      goto LABEL_28;
    ItemIconComponent__SetItem(supportToolItem, 0, -1, 0LL);
LABEL_21:
    num = 0;
    goto LABEL_22;
  }
  if ( !UserId )
    goto LABEL_28;
  ItemIconComponent__SetItem((ItemIconComponent_o *)UserId, supportTool->fields.id, -1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_28:
    sub_1BCAA3C(UserId, v25);
  UserId = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, UserId, supportTool->fields.id, 0LL);
  if ( (UserId & 1) == 0 )
    goto LABEL_21;
  if ( !entity )
    goto LABEL_28;
  num = entity->fields.num;
LABEL_22:
  possessionLb = this->fields.possessionLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8905/*"MULTIPLE_INFO"*/, 0LL);
  v40 = num;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  UserId = (int64_t)System_String__Format(v33, v34, 0LL);
  if ( !possessionLb )
    goto LABEL_28;
  UILabel__set_text(possessionLb, (System_String_o *)UserId, 0LL);
  detailLabel = this->fields.detailLabel;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3978/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, 0LL);
  v39 = num;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  UserId = (int64_t)System_String__Format(v36, v37, 0LL);
  if ( !detailLabel )
    goto LABEL_28;
  UILabel__set_text(detailLabel, (System_String_o *)UserId, 0LL);
  closeButtonLb = this->fields.closeButtonLb;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLb )
    goto LABEL_28;
  UILabel__set_text(closeButtonLb, (System_String_o *)UserId, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventCraftFirstTimeSupportToolDialogComponent__get_closeBtnObject(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B19FB3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19FB3 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}