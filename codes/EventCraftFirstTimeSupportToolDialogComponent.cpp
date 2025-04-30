void __fastcall EventCraftFirstTimeSupportToolDialogComponent___ctor(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5254D & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A5254D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4A5254B & 1) == 0 )
  {
    sub_1B863B8(&Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__, method);
    byte_4A5254B = 1;
  }
  v3 = Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__;
  if ( (*((_BYTE *)Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.closeAction, 0LL);
}


void __fastcall EventCraftFirstTimeSupportToolDialogComponent__Open(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        ItemEntity_o *supportTool,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ItemIconComponent_o *supportToolItem; // x0
  __int64 id; // x1
  UILabel_o *possessionLb; // x20
  UILabel_o *detailLabel; // x20
  UILabel_o *closeButtonLb; // x20

  if ( (byte_4A5254A & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, supportTool);
    sub_1B863B8(&StringLiteral_3878/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, v7);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v8);
    sub_1B863B8(&StringLiteral_3879/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/, v9);
    byte_4A5254A = 1;
  }
  this->fields.closeAction = closeCallback;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.closeAction,
    (int32_t)closeCallback,
    (int32_t)closeCallback,
    method);
  supportToolItem = this->fields.supportToolItem;
  if ( supportTool )
  {
    id = (unsigned int)supportTool->fields.id;
    if ( !supportToolItem )
      goto LABEL_13;
  }
  else
  {
    id = 0LL;
    if ( !supportToolItem )
      goto LABEL_13;
  }
  ItemIconComponent__SetItem(supportToolItem, id, -1, 1, 0LL);
  possessionLb = this->fields.possessionLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3879/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/, 0LL);
  if ( !possessionLb
    || (UILabel__set_text(possessionLb, (System_String_o *)supportToolItem, 0LL),
        detailLabel = this->fields.detailLabel,
        supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3878/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, 0LL),
        !detailLabel)
    || (UILabel__set_text(detailLabel, (System_String_o *)supportToolItem, 0LL),
        closeButtonLb = this->fields.closeButtonLb,
        supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLb) )
  {
LABEL_13:
    sub_1B86614(supportToolItem, id);
  }
  UILabel__set_text(closeButtonLb, (System_String_o *)supportToolItem, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventCraftFirstTimeSupportToolDialogComponent__get_closeBtnObject(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5254C & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A5254C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B86614(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}