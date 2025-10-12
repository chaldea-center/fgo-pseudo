void EventCraftFirstTimeSupportToolDialogComponent___ctor(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C31BE6 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C31BE6 = 1;
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

  if ( (byte_4C31BE4 & 1) == 0 )
  {
    sub_1C32C20(&Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__);
    byte_4C31BE4 = 1;
  }
  v3 = Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__;
  if ( (*((_BYTE *)Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  int32_t id; // w1
  UILabel_o *possessionLb; // x20
  UILabel_o *detailLabel; // x20
  UILabel_o *closeButtonLb; // x20

  if ( (byte_4C31BE3 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3898/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_3899/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/);
    byte_4C31BE3 = 1;
  }
  this->fields.closeAction = closeCallback;
  sub_1C32BC4(&this->fields.closeAction, closeCallback);
  supportToolItem = this->fields.supportToolItem;
  if ( supportTool )
  {
    id = supportTool->fields.id;
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
  supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3899/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/, 0);
  if ( !possessionLb
    || (UILabel__set_text(possessionLb, (System_String_o *)supportToolItem, 0),
        detailLabel = this->fields.detailLabel,
        supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3898/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, 0),
        !detailLabel)
    || (UILabel__set_text(detailLabel, (System_String_o *)supportToolItem, 0),
        closeButtonLb = this->fields.closeButtonLb,
        supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeButtonLb) )
  {
LABEL_13:
    sub_1C32E7C(supportToolItem);
  }
  UILabel__set_text(closeButtonLb, (System_String_o *)supportToolItem, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


UnityEngine_GameObject_o *EventCraftFirstTimeSupportToolDialogComponent__get_closeBtnObject(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C31BE5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31BE5 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}