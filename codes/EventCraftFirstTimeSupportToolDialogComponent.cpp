void EventCraftFirstTimeSupportToolDialogComponent___ctor(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A4F0 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A4F0 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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

  if ( (byte_596A4EE & 1) == 0 )
  {
    sub_2213A60(&Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__);
    byte_596A4EE = 1;
  }
  v3 = Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__;
  if ( (*((_BYTE *)Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventCraftFirstTimeSupportToolDialogComponent_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.closeAction, 0);
}


void EventCraftFirstTimeSupportToolDialogComponent__Open(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        ItemEntity_o *supportTool,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ItemIconComponent_o *supportToolItem; // x0
  __int64 id; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *possessionLb; // x20
  UILabel_o *detailLabel; // x20
  UILabel_o *closeButtonLb; // x20

  if ( (byte_596A4ED & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_4042/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_4043/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/);
    byte_596A4ED = 1;
  }
  this->fields.closeAction = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)closeCallback,
    (System_String_o *)closeCallback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4043/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/, 0);
  if ( !possessionLb
    || (UILabel__set_text(possessionLb, (System_String_o *)supportToolItem, 0),
        detailLabel = this->fields.detailLabel,
        supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4042/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, 0),
        !detailLabel)
    || (UILabel__set_text(detailLabel, (System_String_o *)supportToolItem, 0),
        closeButtonLb = this->fields.closeButtonLb,
        supportToolItem = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeButtonLb) )
  {
LABEL_13:
    sub_2213CDC(supportToolItem, id);
  }
  UILabel__set_text(closeButtonLb, (System_String_o *)supportToolItem, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


UnityEngine_GameObject_o *EventCraftFirstTimeSupportToolDialogComponent__get_closeBtnObject(
        EventCraftFirstTimeSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A4EF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4EF = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}