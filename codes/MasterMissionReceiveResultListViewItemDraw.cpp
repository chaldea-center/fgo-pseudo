void MasterMissionReceiveResultListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_593C093 & 1) == 0 )
  {
    sub_21FFC50(&MasterMissionReceiveResultListViewItemDraw_TypeInfo);
    byte_593C093 = 1;
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

  if ( (byte_593C092 & 1) == 0 )
  {
    sub_21FFC50(&MasterMissionReceiveResultListViewItemDraw_TypeInfo);
    byte_593C092 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_8;
  UILabel__set_text(messageLabel, message, 0);
  messageLabel = (UILabel_o *)MasterMissionReceiveResultListViewItemDraw_TypeInfo;
  v6 = this->fields.messageLabel;
  if ( !*(&MasterMissionReceiveResultListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveResultListViewItemDraw_TypeInfo, message);
  if ( !v6 )
LABEL_8:
    sub_21FFECC(messageLabel, message);
  UILabel__SetCondensedScale_56386440(
    v6,
    MasterMissionReceiveResultListViewItemDraw_TypeInfo->static_fields->MESSAGE_LABEL_WIDTH,
    0.0,
    0);
}