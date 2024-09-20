void __fastcall MasterMissionReceiveResultListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E3A6 & 1) == 0 )
  {
    sub_1B885B0(&MasterMissionReceiveResultListViewItemDraw_TypeInfo);
    byte_4A5E3A6 = 1;
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

  if ( (byte_4A5E3A5 & 1) == 0 )
  {
    sub_1B885B0(&MasterMissionReceiveResultListViewItemDraw_TypeInfo);
    byte_4A5E3A5 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_8;
  UILabel__set_text(messageLabel, message, 0LL);
  messageLabel = (UILabel_o *)MasterMissionReceiveResultListViewItemDraw_TypeInfo;
  v6 = this->fields.messageLabel;
  if ( !MasterMissionReceiveResultListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveResultListViewItemDraw_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1B8880C(messageLabel, message);
  UILabel__SetCondensedScale_47038932(
    v6,
    MasterMissionReceiveResultListViewItemDraw_TypeInfo->static_fields->MESSAGE_LABEL_WIDTH,
    0LL);
}