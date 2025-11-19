void EventCraftFirstTimeSupportToolDialogComponent___ctor(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB0498 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB0498 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftFirstTimeSupportToolDialogComponent__Init(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCraftFirstTimeSupportToolDialogComponent__OnClickClose(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CB0496 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__);
    byte_4CB0496 = 1;
  }
  v3 = Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__;
  if ( (*((_BYTE *)Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.closeAction, 0);
}


void EventCraftFirstTimeSupportToolDialogComponent__Open(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        ItemEntity_o *supportTool,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  ItemIconComponent_o *supportToolItem; // x0
  __int64 id; // x1
  UILabel_o *possessionLb; // x20
  UILabel_o *detailLabel; // x20
  UILabel_o *closeButtonLb; // x20

  if ( (byte_4CB0495 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3890/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_3891/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/);
    byte_4CB0495 = 1;
  }
  this->fields.closeAction = closeCallback;
  sub_1C6B9AC(&this->fields.closeAction, closeCallback);
  supportToolItem = this->fields.supportToolItem;
  if ( supportTool )
  {
    id = (unsigned int)supportTool->fields.id;
    if ( !supportToolItem )
      goto LABEL_13;
  }
  else
  {
    id = 0;
    if ( !supportToolItem )
      goto LABEL_13;
  }
  ItemIconComponent__SetItem(supportToolItem, id, -1, 1, 0);
  possessionLb = this->fields.possessionLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3891/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/, 0);
  if ( !possessionLb
    || (UILabel__set_text(possessionLb, (System_String_o *)supportToolItem, 0),
        detailLabel = this->fields.detailLabel,
        supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3890/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, 0),
        !detailLabel)
    || (UILabel__set_text(detailLabel, (System_String_o *)supportToolItem, 0),
        closeButtonLb = this->fields.closeButtonLb,
        supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeButtonLb) )
  {
LABEL_13:
    sub_1C6BC60(supportToolItem, id);
  }
  UILabel__set_text(closeButtonLb, (System_String_o *)supportToolItem, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


UnityEngine_GameObject_o *EventCraftFirstTimeSupportToolDialogComponent__get_closeBtnObject(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CB0497 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0497 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C6BC60(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}