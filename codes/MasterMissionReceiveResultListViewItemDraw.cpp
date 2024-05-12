void __fastcall MasterMissionReceiveResultListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_438BB88 & 1) == 0 )
  {
    sub_B775C4(&MasterMissionReceiveResultListViewItemDraw_TypeInfo);
    byte_438BB88 = 1;
  }
  LODWORD(MasterMissionReceiveResultListViewItemDraw_TypeInfo->static_fields->MESSAGE_LABEL_WIDTH) = (struct MasterMissionReceiveResultListViewItemDraw_StaticFields)1142947840;
}


void __fastcall MasterMissionReceiveResultListViewItemDraw___ctor(
        MasterMissionReceiveResultListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveResultListViewItemDraw__SetItem(
        MasterMissionReceiveResultListViewItemDraw_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UILabel_o *v6; // x19

  if ( (byte_438BB87 & 1) == 0 )
  {
    sub_B775C4(&MasterMissionReceiveResultListViewItemDraw_TypeInfo);
    byte_438BB87 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_9;
  UILabel__set_text(messageLabel, message, 0LL);
  v6 = this->fields.messageLabel;
  messageLabel = (UILabel_o *)MasterMissionReceiveResultListViewItemDraw_TypeInfo;
  if ( (BYTE3(MasterMissionReceiveResultListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionReceiveResultListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveResultListViewItemDraw_TypeInfo);
  }
  if ( !v6 )
LABEL_9:
    sub_B7769C(messageLabel, message);
  UILabel__SetCondensedScale_41780892(
    v6,
    MasterMissionReceiveResultListViewItemDraw_TypeInfo->static_fields->MESSAGE_LABEL_WIDTH,
    0LL);
}