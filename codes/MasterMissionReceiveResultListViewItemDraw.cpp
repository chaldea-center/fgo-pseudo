void __fastcall MasterMissionReceiveResultListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1F729 & 1) == 0 )
  {
    sub_1BCAFF8(&MasterMissionReceiveResultListViewItemDraw_TypeInfo, v1);
    byte_4B1F729 = 1;
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

  if ( (byte_4B1F728 & 1) == 0 )
  {
    sub_1BCAFF8(&MasterMissionReceiveResultListViewItemDraw_TypeInfo, message);
    byte_4B1F728 = 1;
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
    sub_1BCB254(messageLabel, message);
  UILabel__SetCondensedScale_48718744(
    v6,
    MasterMissionReceiveResultListViewItemDraw_TypeInfo->static_fields->MESSAGE_LABEL_WIDTH,
    0.0,
    0LL);
}