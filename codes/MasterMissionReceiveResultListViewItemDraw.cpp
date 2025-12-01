void MasterMissionReceiveResultListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4CCA62C & 1) == 0 )
  {
    sub_1C713B0(&MasterMissionReceiveResultListViewItemDraw_TypeInfo);
    byte_4CCA62C = 1;
  }
  LODWORD(MasterMissionReceiveResultListViewItemDraw_TypeInfo->static_fields->MESSAGE_LABEL_WIDTH) = (struct MasterMissionReceiveResultListViewItemDraw_StaticFields)1142947840;
}


void MasterMissionReceiveResultListViewItemDraw___ctor(
        MasterMissionReceiveResultListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MasterMissionReceiveResultListViewItemDraw__SetItem(
        MasterMissionReceiveResultListViewItemDraw_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UILabel_o *v6; // x19

  if ( (byte_4CCA62B & 1) == 0 )
  {
    sub_1C713B0(&MasterMissionReceiveResultListViewItemDraw_TypeInfo);
    byte_4CCA62B = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_8;
  UILabel__set_text(messageLabel, message, 0);
  messageLabel = (UILabel_o *)MasterMissionReceiveResultListViewItemDraw_TypeInfo;
  v6 = this->fields.messageLabel;
  if ( !MasterMissionReceiveResultListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveResultListViewItemDraw_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1C71608(messageLabel, message);
  UILabel__SetCondensedScale_49893052(
    v6,
    MasterMissionReceiveResultListViewItemDraw_TypeInfo->static_fields->MESSAGE_LABEL_WIDTH,
    0.0,
    0);
}